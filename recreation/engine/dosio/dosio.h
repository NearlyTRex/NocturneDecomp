#pragma once

#include "engine/fwd.h"

#include <cstdio>

namespace nocturne::engine {

using FileSearchHandlerFunc = int(void *);

void getRelativeFilePath(char *dest_path, char *directory, char *filename);
void addGetFileInfoHook(FileSearchHandlerFunc *handler);
int findFile(SFoundFileInfo *context);
int findFileNormally(SFoundFileInfo *info);
int getFileSize(char *directory, char *filename);
std::FILE *getFile(char *directory, char *filename, char *mode);

} // namespace nocturne::engine
