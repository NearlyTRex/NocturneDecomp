#pragma once

#include <cstddef>

namespace nocturne::shape {

void *debugAllocTracked1(int size, char *filename, int line_number);
void debugFreeChecked(void *ptr);
void *debugMalloc(int size, char *filename, int line_number);
void *debugCalloc(std::size_t count, std::size_t size, char *filename, int line_number);
void free(void *ptr);
void *malloc(std::size_t size);

} // namespace nocturne::shape
