/*
 * Copyright (c) 2015 WP Technology Inc.
 *
 * Released under the MIT License. This file compiles sqlite3.c and the
 * SQLiteCpp source files in a single compilation unit, with the sqlite3.c
 * functions using internal linkage to avoid conflicting with another instance
 * of the SQLite library.
 */

#define SQLITE_API static
#define SQLITE_API_IS_STATIC 1
#define SQLITE_EXTERN static

#include "sqlite3.c"
#include "Column.cpp"
#include "Database.cpp"
#include "Statement.cpp"
#include "Transaction.cpp"
