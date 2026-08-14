#pragma once

// Function prototypes for engine/dosio.cpp
// Generated from Ghidra function signatures

// Original: engine_dosio.cpp_getRelativeFilePath_FUN_004816c0
// Address: 004816c0
void __cdecl getRelativeFilePath(char *dest_path,char *directory,char *filename);

// Original: engine_dosio.cpp_addGetFileInfoHook_FUN_00481710
// Address: 00481710
void __cdecl addGetFileInfoHook(FileSearchHandlerFunc *handler);

// Original: engine_dosio.cpp_findFile_FUN_00481760
// Address: 00481760
int __cdecl findFile(SFoundFileInfo *context);

// Original: engine_dosio.cpp_findFileNormally_FUN_004817c0
// Address: 004817c0
int __cdecl findFileNormally(SFoundFileInfo *info);

// Original: engine_dosio.cpp_getFileSize_FUN_00481880
// Address: 00481880
int __cdecl getFileSize(char *directory,char *filename);

// Original: engine_dosio.cpp_getFileTimestamp_FUN_004818d0
// Address: 004818d0
uint __cdecl getFileTimestamp(char *directory_path,char *filename);

// Original: engine_dosio.cpp_copyFileTimestamp_FUN_00481910
// Address: 00481910
int __cdecl copyFileTimestamp(char *source_file,uint modtime);

// Original: engine_dosio.cpp_getFileSizeWithFinder_FUN_00481960
// Address: 00481960
int __cdecl getFileSizeWithFinder(char *directory,char *filename);

// Original: engine_dosio.cpp_setFileAttributes_FUN_004819f0
// Address: 004819f0
int __cdecl setFileAttributes(char *filename,byte flags);

// Original: engine_dosio.cpp_truncateFile_FUN_00481a20
// Address: 00481a20
int __cdecl truncateFile(_FILE *file_handle,long new_size_bytes);

// Original: engine_dosio.cpp_getFile_FUN_00481a50
// Address: 00481a50
_FILE * __cdecl getFile(char *directory,char *filename,char *mode);

// Original: engine_dosio.cpp_reopenFileStream_FUN_00481b50
// Address: 00481b50
void __cdecl reopenFileStream(char *directory_path,char *filename,uint mode_flags,ifstream *file_stream);

// Original: engine_dosio.cpp_CFileFinder_ctor_FUN_00481c30
// Address: 00481c30
CFileFinder * __cdecl CFileFinder::ctor(CFileFinder *this_ptr);

// Original: engine_dosio.cpp_CFileFinder_dtor_FUN_00481c50
// Address: 00481c50
CFileFinder * __cdecl CFileFinder::dtor(CFileFinder *this_ptr,uint flags);

// Original: engine_dosio.cpp_CFileFinder_openSearch_FUN_00481c70
// Address: 00481c70
int __cdecl CFileFinder::openSearch(CFileFinder *this_ptr,char *search_pattern);

// Original: engine_dosio.cpp_CFileFinder_findNext_FUN_00481cf0
// Address: 00481cf0
int __cdecl CFileFinder::findNext(CFileFinder *this_ptr);

// Original: engine_dosio.cpp_CFileFinder_closeSearch_FUN_00481d70
// Address: 00481d70
void __cdecl CFileFinder::closeSearch(CFileFinder *this_ptr);

// Original: engine_dosio.cpp_CFileFinder_reset_FUN_00481db0
// Address: 00481db0
void __cdecl CFileFinder::reset(CFileFinder *this_ptr);

// Original: engine_dosio.cpp_CFileFinder_convertStruct_FUN_00481dc0
// Address: 00481dc0
void __cdecl CFileFinder::convertStruct(CFileFinder *this_ptr,LPWIN32_FIND_DATAA find_data);

// Original: engine_dosio.cpp_splitPath_FUN_00481f20
// Address: 00481f20
void __cdecl splitPath(char *full_path,char *drive,char *directory,char *filename,char *extension);

// Original: engine_dosio.cpp_makePath_FUN_00481f50
// Address: 00481f50
void __cdecl makePath(char *full_path,char *drive,char *directory,char *filename,char *extension);

// Original: engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80
// Address: 00481f80
void __cdecl ensureTrailingSlash(char *input_path,char *drive,char *output_path);

// Original: engine_dosio.cpp_removeFileExtension_FUN_00482040
// Address: 00482040
void __cdecl removeFileExtension(char *source_path);

// Original: engine_dosio.cpp_changeFileExtension_FUN_00482050
// Address: 00482050
void __cdecl changeFileExtension(char *path,char *new_extension);

// Original: engine_dosio.cpp_getFullPath_FUN_004820c0
// Address: 004820c0
int __cdecl getFullPath(char *output_path,char *input_path);

// Original: engine_dosio.cpp_setReadonlyAttribute_FUN_00600c30
// Address: 00600c30
DWORD __cdecl setReadonlyAttribute(char *filename,DWORD file_attributes);
