/* Copyright (c) 2003-2005 MySQL AB
   Use is subject to license terms

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA */

#ifndef PCN_TYPES_H
#define PCN_TYPES_H

#include <ndb_global.h>

typedef size_t Size_t;

typedef int Boolean_t;

typedef unsigned UInt32_t;

#define PCN_TRUE true 
#define PCN_FALSE false

#define PCN_SIZE_OF(s, m )    sizeof(((s *)0)->m)
#define PCN_OFFSET_OF(s, m)   offsetof(s, m)

#endif
