#pragma once

#include "engine/fwd.h"

#include <cstdint>
#include <cstdio>

namespace nocturne::engine {

using FileSearchHandlerFunc = int(void *);

void getRelativeFilePath(char *dest_path, char *directory, char *filename);
void addGetFileInfoHook(FileSearchHandlerFunc *handler);
int findFile(SFoundFileInfo *context);
int findFileNormally(SFoundFileInfo *info);
int getFileSize(char *directory, char *filename);
std::FILE *getFile(char *directory, char *filename, char *mode);
std::uint32_t setReadonlyAttribute(char *filename, std::uint32_t file_attributes);

} // namespace nocturne::engine
