#pragma once

#include <stdlib.h>

struct _justini_file;
typedef struct _justini_file justini_file_t;

justini_file_t* justini_read_file(const char* path);
justini_file_t* justini_read_string(const char* text);

struct _justini_group;
typedef struct _justini_group justini_group_t;

size_t           justini_get_num_groups (justini_file_t* f);
size_t           justini_get_group      (justini_file_t* f, size_t group_index);
justini_group_t* justini_find_group     (justini_file_t* f, const char* g);

