#pragma once

// Function prototypes for engine/pod.cpp
// Generated from Ghidra function signatures

// Original: engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
// Address: 0054f2e0
uint __cdecl crc32UpdateByte(uint current_crc,uchar data_byte);

// Original: engine_pod.cpp_crc32UpdateBuffer_FUN_0054f3a0
// Address: 0054f3a0
uint __cdecl crc32UpdateBuffer(uchar *data_buffer,uint byte_count,uint initial_crc);

// Original: engine_pod.cpp_crc32ComputeFromFile_FUN_0054f3e0
// Address: 0054f3e0
uint __cdecl crc32ComputeFromFile(_FILE *file_stream,uint total_bytes);

// Original: engine_pod.cpp_crc32ComputeFileRange_FUN_0054f490
// Address: 0054f490
uint __cdecl crc32ComputeFileRange(char *filename,int start_offset);

// Original: engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
// Address: 0054f5a0
CPodFile * __cdecl CPodFile::ctor(CPodFile *this_ptr);

// Original: engine_pod.cpp_CPodFile_dtor_FUN_0054f610
// Address: 0054f610
CPodFile * __cdecl CPodFile::dtor(CPodFile *this_ptr,uint flags);

// Original: engine_pod.cpp_qsortByFilename_FUN_0054f630
// Address: 0054f630
int __cdecl qsortByFilename(char **filename1_ptr,char **filename2_ptr);

// Original: engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
// Address: 0054f650
int __cdecl CPodFile::mountFromFile(CPodFile *this_ptr,char *pod_filename);

// Original: engine_pod.cpp_CPodFile_cleanup_FUN_00550090
// Address: 00550090
void __cdecl CPodFile::cleanup(CPodFile *this_ptr);

// Original: engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
// Address: 00550140
int __cdecl CPodFile::findFileIndex(CPodFile *this_ptr,char *filename);

// Original: engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0
// Address: 005501b0
void __cdecl CPodFile::populateFileInfo(CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info);

// Original: engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230
// Address: 00550230
int __cdecl CPodFile::verifyChecksum(CPodFile *this_ptr);

// Original: engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
// Address: 00550590
CPodAuditRecord * __stack2_esi CPodFile::getAuditRecord(CPodFile *this_ptr,int record_index,CPodAuditRecord *out_record);

// Original: engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0
// Address: 005506c0
CPodDependencyRecord * __stack2_esi CPodFile::getDependencyRecord(CPodFile *this_ptr,int dependency_index,CPodDependencyRecord *output_record);

// Original: engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0
// Address: 005507f0
uint __cdecl CPodFile::computeFileCRC(CPodFile *this_ptr,int file_index);

// Original: engine_pod.cpp_CPod_ctor_FUN_00550980
// Address: 00550980
CPod * __cdecl CPod::ctor(CPod *this_ptr);

// Original: engine_pod.cpp_CPod_dtor_FUN_005509b0
// Address: 005509b0
CPod * __cdecl CPod::dtor(CPod *this_ptr,uint flags);

// Original: engine_pod.cpp_CPod_load_FUN_005509e0
// Address: 005509e0
void __cdecl CPod::load(CPod *this_ptr);

// Original: engine_pod.cpp_CPod_mount_FUN_00550a10
// Address: 00550a10
void __cdecl CPod::mount(CPod *this_ptr,char *pod_filename);

// Original: engine_pod.cpp_CPod_remount_FUN_00550af0
// Address: 00550af0
void __cdecl CPod::remount(CPod *this_ptr);

// Original: engine_pod.cpp_CPod_dismount_FUN_00550b90
// Address: 00550b90
void __cdecl CPod::dismount(CPod *this_ptr,char *filename);

// Original: engine_pod.cpp_CPod_init_FUN_00550c30
// Address: 00550c30
void __cdecl CPod::init(CPod *this_ptr);

// Original: engine_pod.cpp_CPod_cleanup_FUN_00550c80
// Address: 00550c80
void __cdecl CPod::cleanup(CPod *this_ptr);

// Original: engine_pod.cpp_findFilesByExtension_FUN_00550ce0
// Address: 00550ce0
int __cdecl findFilesByExtension(CPod *pod,char *extension,char *output_buffer,int max_results,int result_string_length);

// Original: engine_pod.cpp_CPod_initSearch_FUN_00550ea0
// Address: 00550ea0
void __cdecl CPod::initSearch(CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context);

// Original: engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
// Address: 00550ef0
int __cdecl CPod::getNextSearchResult(CPod *this_ptr,CPodSearchContext *search_context);

// Original: engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000
// Address: 00551000
void __cdecl CPod::computeAndStoreCRC(CPod *this_ptr,char *pod_filename);

// Original: engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
// Address: 00551280
int __cdecl CPod::verifyIntegrity(CPod *this_ptr,char *pod_filename);

// Original: engine_pod.cpp_CPod_locateFile_FUN_005512f0
// Address: 005512f0
CPodFile * __cdecl CPod::locateFile(CPod *this_ptr,char *base_path,char *filename,int *file_index_out);

// Original: engine_pod.cpp_CPod_findFile_FUN_00551380
// Address: 00551380
int __cdecl CPod::findFile(CPod *this_ptr,SFoundFileInfo *found_file_info);

// Original: engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0
// Address: 005513d0
void __cdecl CPod::resolveDependenciesAndSort(CPod *this_ptr);

// Original: engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820
// Address: 00551820
int __cdecl CPod::getPodIndexByFilename(CPod *this_ptr,char *target_filename);

// Original: engine_pod.cpp_CPod_dismountPod_FUN_005518c0
// Address: 005518c0
void __cdecl CPod::dismountPod(CPod *this_ptr,int index);

// Original: engine_pod.cpp_findFileInPod_FUN_00551960
// Address: 00551960
int __cdecl findFileInPod(SFoundFileInfo *info);
