#pragma once

// Function prototypes for engine/pod.cpp
// Generated from Ghidra function signatures

// Original: engine_pod.cpp_crc32UpdateByte_FUN_004f77d0
// Address: 004f77d0
uint __cdecl crc32UpdateByte(uint current_crc,uchar data_byte);

// Original: engine_pod.cpp_crc32UpdateBuffer_FUN_004f7890
// Address: 004f7890
uint __cdecl crc32UpdateBuffer(uchar *data_buffer,uint byte_count,uint initial_crc);

// Original: engine_pod.cpp_crc32ComputeFromFile_FUN_004f78d0
// Address: 004f78d0
uint __cdecl crc32ComputeFromFile(_FILE *file_stream,uint total_bytes);

// Original: engine_pod.cpp_FUN_004f7980
// Address: 004f7980
uint FUN_004f7980(char *param_1,int param_2);

// Original: engine_pod.cpp_CPodFile_ctor_FUN_004f7a80
// Address: 004f7a80
CPodFile * __cdecl CPodFile::ctor(CPodFile *this_ptr);

// Original: engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0
// Address: 004f7ac0
CPodFile * __cdecl CPodFile::dtor(CPodFile *this_ptr,uint flags);

// Original: engine_pod.cpp_CPodFile_FUN_004f7ae0
// Address: 004f7ae0
int __cdecl CPodFile(CPodFile *this_ptr,char *filename);

// Original: engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0
// Address: 004f80e0
void __cdecl CPodFile::cleanup(CPodFile *this_ptr);

// Original: engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150
// Address: 004f8150
int __cdecl CPodFile::findFileIndex(CPodFile *this_ptr,char *filename);

// Original: engine_pod.cpp_CPodFile_populateFileInfo_FUN_004f81c0
// Address: 004f81c0
void __cdecl CPodFile::populateFileInfo(CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info);

// Original: engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240
// Address: 004f8240
int __cdecl CPodFile::verifyChecksum(CPodFile *this_ptr);

// Original: engine_pod.cpp_CPodFile_getAuditRecord_FUN_004f8570
// Address: 004f8570
void CPodFile::getAuditRecord(int param_1,int param_2);

// Original: engine_pod.cpp_CPodFile_computeFileCRC_FUN_004f86a0
// Address: 004f86a0
uint __cdecl CPodFile::computeFileCRC(CPodFile *this_ptr,int file_index);

// Original: engine_pod.cpp_CPod_ctor_FUN_004f8810
// Address: 004f8810
CPod * __cdecl CPod::ctor(CPod *this_ptr);

// Original: engine_pod.cpp_CPod_dtor_FUN_004f8840
// Address: 004f8840
CPod * __cdecl CPod::dtor(CPod *this_ptr,uint flags);

// Original: engine_pod.cpp_CPod_load_FUN_004f8870
// Address: 004f8870
void __cdecl CPod::load(CPod *this_ptr);

// Original: engine_pod.cpp_CPod_mount_FUN_004f88a0
// Address: 004f88a0
void __cdecl CPod::mount(CPod *this_ptr,char *pod_filename);

// Original: engine_pod.cpp_CPod_remount_FUN_004f8970
// Address: 004f8970
void __cdecl CPod::remount(CPod *this_ptr);

// Original: engine_pod.cpp_CPod_dismount_FUN_004f8a10
// Address: 004f8a10
void __cdecl CPod::dismount(CPod *this_ptr,char *filename);

// Original: engine_pod.cpp_CPod_init_FUN_004f8af0
// Address: 004f8af0
void __cdecl CPod::init(CPod *this_ptr);

// Original: engine_pod.cpp_CPod_cleanup_FUN_004f8b40
// Address: 004f8b40
void __cdecl CPod::cleanup(CPod *this_ptr);

// Original: engine_pod.cpp_findFilesByExtension_FUN_004f8b90
// Address: 004f8b90
int __cdecl findFilesByExtension(CPod *pod,char *extension,char *output_buffer,int max_results,int result_string_length);

// Original: engine_pod.cpp_CPod_initSearch_FUN_004f8d50
// Address: 004f8d50
void __cdecl CPod::initSearch(CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context);

// Original: engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0
// Address: 004f8da0
int __cdecl CPod::getNextSearchResult(CPod *this_ptr,CPodSearchContext *search_context);

// Original: engine_pod.cpp_FUN_004f8eb0
// Address: 004f8eb0
void FUN_004f8eb0(undefined4 param_1,char *param_2);

// Original: engine_pod.cpp_FUN_004f9100
// Address: 004f9100
int FUN_004f9100(void);

// Original: engine_pod.cpp_CPod_locateFile_FUN_004f9170
// Address: 004f9170
CPodFile * __cdecl CPod::locateFile(CPod *this_ptr,char *base_path,char *filename,int *file_index_out);

// Original: engine_pod.cpp_CPod_findFile_FUN_004f9200
// Address: 004f9200
int __cdecl CPod::findFile(CPod *this_ptr,SFoundFileInfo *found_file_info);
