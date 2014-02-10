/*
 * Copyright 2013 MongoDB, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef MONGOC_CURSOR_CURSORID_PRIVATE_H
#define MONGOC_CURSOR_CURSORID_PRIVATE_H


#include <bson.h>

#include "mongoc-cursor-private.h"


BSON_BEGIN_DECLS


void
_mongoc_cursor_cursorid_init (mongoc_cursor_t *cursor)
   BSON_GNUC_INTERNAL;


BSON_END_DECLS


#endif /* MONGOC_CURSOR_CURSORID_PRIVATE_H */
