#pragma once

// Function prototypes for engine/fileio.cpp
// Generated from Ghidra function signatures

// Original: engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
// Address: 004b1c00
int __cdecl establishUserIdentity(void);

// Original: engine_fileio.cpp_trimWhitespace_FUN_004b1d40
// Address: 004b1d40
void __cdecl trimWhitespace(char *string);

// Original: engine_fileio.cpp_safeCloseFile_FUN_004b1db0
// Address: 004b1db0
void __cdecl safeCloseFile(_FILE **file_ptr);

// Original: engine_fileio.cpp_buildFilePath_FUN_004b1de0
// Address: 004b1de0
void __cdecl buildFilePath(char *base_dir,char *filename,char *dest_path);

// Original: engine_fileio.cpp_buildCheckoutFilePath_FUN_004b1e60
// Address: 004b1e60
void __cdecl buildCheckoutFilePath(char *dest_buffer);

// Original: engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10
// Address: 004b1f10
void __cdecl buildHistoryFilePath(char *filename,char *extension,char *dest_buffer);

// Original: engine_fileio.cpp_formatSystemError_FUN_004b1fe0
// Address: 004b1fe0
void __cdecl formatSystemError(char *dest_buffer);

// Original: engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
// Address: 004b2030
char * __cdecl copyFileWithProgress(_FILE *source_file,_FILE *dest_file,char *source_filename,char *dest_filename, int file_size_bytes);

// Original: engine_fileio.cpp_openFileWithRetry_FUN_004b2200
// Address: 004b2200
_FILE * __cdecl openFileWithRetry(char *filename,char *mode);

// Original: engine_fileio.cpp_parseTimestampRecord_FUN_004b2270
// Address: 004b2270
int __cdecl parseTimestampRecord(char *input_string,STimestampRecord *output_record);

// Original: engine_fileio.cpp_readTimestampFile_FUN_004b23a0
// Address: 004b23a0
int __cdecl readTimestampFile(_FILE *file,STimestampRecord **records,int *count);

// Original: engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640
// Address: 004b2640
int __cdecl findMaxFieldInTimestampFile(char *filename);

// Original: engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
// Address: 004b2770
int __cdecl logOnAsVersionControlUser(void);

// Original: engine_fileio.cpp_logOffVersionControl_FUN_004b2830
// Address: 004b2830
void __cdecl logOffVersionControl(void);

// Original: engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
// Address: 004b2860
void __cdecl CCheckOutList::reset(CCheckOutList *this_ptr);

// Original: engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
// Address: 004b2890
int __cdecl CCheckOutList::load(CCheckOutList *this_ptr);

// Original: engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
// Address: 004b2a60
int __cdecl CCheckOutList::parse(CCheckOutList *this_ptr,_FILE **file);

// Original: engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
// Address: 004b2d00
int __cdecl CCheckOutList::add(CCheckOutList *this_ptr,CCheckOutItem *new_entry);

// Original: engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
// Address: 004b2d70
int __cdecl CCheckOutList::remove(CCheckOutList *this_ptr,int entry_index);

// Original: engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
// Address: 004b2e60
int __cdecl CCheckOutList::findEntry(CCheckOutList *this_ptr,char *filename);

// Original: engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
// Address: 004b2eb0
int __cdecl CCheckOutList::write(CCheckOutList *this_ptr,_FILE **file_handle);

// Original: engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
// Address: 004b2f90
int __cdecl showOverwriteConfirmationDialog(int *user_choice_ptr,char *dialog_message);

// Original: engine_fileio.cpp_checkFileOverwriteCondition_FUN_004b3120
// Address: 004b3120
int __cdecl checkFileOverwriteCondition(char *target_filename,char *source_directory);

// Original: engine_fileio.cpp_copyFileTimestamp_FUN_004b31e0
// Address: 004b31e0
int __cdecl copyFileTimestamp(char *source_file,char *dest_file);

// Original: engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
// Address: 004b3220
int __cdecl getLatestFileFromRepository(char *base_directory,char *filename);

// Original: engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
// Address: 004b35a0
int __cdecl CCheckOutItem::removeCheckOutBookkeeping(CCheckOutItem *this_ptr,void *unused_param);

// Original: engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920
// Address: 004b3920
int __cdecl CCheckOutItem::checkOutFileFromRepository(CCheckOutItem *this_ptr,char *filename);

// Original: engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
// Address: 004b3f50
int __cdecl CCheckOutItem::selectCheckedOutFile(CCheckOutItem *this_ptr,char *filename_out,char *out_buffer,char *wildcard_pattern, char *dialog_title);

// Original: engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0
// Address: 004b41c0
void __cdecl CCheckOutItem::revert(CCheckOutItem *this_ptr,char *output_buffer);

// Original: engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220
// Address: 004b4220
int __cdecl CCheckOutItem::processFiles(CCheckOutItem *this_ptr,int operation_mode,char *filename);

// Original: engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
// Address: 004b5030
int __cdecl CCheckOutItem::findFileToCheckOut(CCheckOutItem *this_ptr,char *file_pattern,char *output_filename_buffer);

// Original: engine_fileio.cpp_remountAllPods_FUN_004b5350
// Address: 004b5350
void __cdecl remountAllPods(void);

// Original: engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0
// Address: 004b53a0
CFileManager * __cdecl CFileManager::ctor(CFileManager *this_ptr);

// Original: engine_fileio.cpp_CFileManager_dtor_FUN_004b53d0
// Address: 004b53d0
CFileManager * __cdecl CFileManager::dtor(CFileManager *this_ptr);

// Original: engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0
// Address: 004b53e0
void __cdecl CFileManager::extractTexture(CFileManager *this_ptr,char *texture_filename);

// Original: engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0
// Address: 004b54e0
void __cdecl CFileManager::processMRGLNode(CFileManager *this_ptr,SMRGLHeaderExtended *mrgl_node);

// Original: engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610
// Address: 004b5610
void __cdecl CFileManager::loadAndProcessMRGLModel(CFileManager *this_ptr,char *filename);

// Original: engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640
// Address: 004b5640
void __cdecl CFileManager::registerFiles(CFileManager *this_ptr,char *filename_list);

// Original: engine_fileio.cpp_CFileManager_freeAuditRecords_FUN_004b5910
// Address: 004b5910
void __cdecl CFileManager::freeAuditRecords(CFileManager *this_ptr);

// Original: engine_fileio.cpp_CFileManager_addPodAuditRecord_FUN_004b5950
// Address: 004b5950
void __cdecl CFileManager::addPodAuditRecord(CFileManager *this_ptr,CPodAuditRecord *audit_data,char *filename_path);

// Original: engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
// Address: 004b5a50
void __cdecl CFileManager::rebuildLastPod(CFileManager *this_ptr,char *pod_filename,char *volume_name);

// Original: engine_fileio.cpp_CFileManager_load_FUN_004b6c00
// Address: 004b6c00
void __cdecl CFileManager::load(CFileManager *this_ptr);

// Original: engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10
// Address: 004b6e10
void __cdecl CFileManager::extractPodFile(CFileManager *this_ptr,char *pod_filename);

// Original: engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
// Address: 004b7460
void __cdecl CFileManager::catalogPodFile(CFileManager *this_ptr,char *pod_filename);

// Original: engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0
// Address: 004b76d0
void __cdecl CFileManager::extractFilesToDirectory(CFileManager *this_ptr);

// Original: engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0
// Address: 004b7ac0
void __cdecl CFileManager::buildPodFromResponseFile(CFileManager *this_ptr);

// Original: engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
// Address: 004b7c10
void __cdecl CFileManager::openExtractFileForBuilding(CFileManager *this_ptr);

// Original: engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60
// Address: 004b7c60
void __cdecl CFileManager::closeExtractFile(CFileManager *this_ptr);

// Original: engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90
// Address: 004b7c90
void __cdecl CFileManager::verifyPodCRC(CFileManager *this_ptr,char *pod_filename);

// Original: engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50
// Address: 004b7d50
int __cdecl extractFileWithTimestamp(_FILE *source_file,char *dest_filename,char *name_or_offset,int file_size,int file_offset ,int checksum,int timestamp);

// Original: engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
// Address: 004b7f50
void __cdecl CFileManager::viewPodAuditTrail(CFileManager *this_ptr,char *pod_filename);

// Original: engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
// Address: 004b82a0
void __cdecl CFileManager::compareLocalVsPod(CFileManager *this_ptr,char *pod_filename);

// Original: engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0
// Address: 004b86b0
void __cdecl CFileManager::managePodFiles(CFileManager *this_ptr,char *pod_directory_path);

// Original: engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
// Address: 004b9f40
void __cdecl CFileManager::crossReferencePodDuplicates(CFileManager *this_ptr,char *pod_filename);

// Original: engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
// Address: 004ba4f0
void __cdecl CFileManager::parsePodConfigFile(CFileManager *this_ptr,CStrList *pod_list);

// Original: engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
// Address: 004ba620
void __cdecl CFileManager::writePodConfigFile(CFileManager *this_ptr,CStrList *pod_list);

// Original: engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
// Address: 004ba6c0
int __cdecl CFileManager::findPodInList(CFileManager *this_ptr,CStrList *pod_list,char *target_filename);

// Original: engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740
// Address: 004ba740
int __cdecl CFileManager::checkOutAndExtractPod(CFileManager *this_ptr,CCheckOutItem *checkout_item,_FILE *optional_pod_file);

// Original: engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00
// Address: 004baf00
int __cdecl CFileManager::checkInPodFile(CFileManager *this_ptr,char *checkout_item_name,char *timestamp_file,char *pod_filename);

// Original: engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0
// Address: 004bc2b0
int __cdecl CFileManager::undoCheckout(CFileManager *this_ptr,CCheckOutItem *checkout_item);

// Original: engine_fileio.cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0
// Address: 004bc5a0
void __cdecl CFileManager::setVersionControlDirectory(CFileManager *this_ptr,char *directory);

// Original: engine_fileio.cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0
// Address: 004bc5d0
void __cdecl CFileManager::setVersionControlCredentials(CFileManager *this_ptr,char *network_username,char *password,char *domain);

// Original: engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
// Address: 004bc650
void __cdecl synchronizeFilesToDirectory(_FILE *file_list_output,char *source_directory,char *file_pattern,char *dest_directory);

// Original: engine_fileio.cpp_writeArtFileEntries_FUN_004bc9f0
// Address: 004bc9f0
void __cdecl writeArtFileEntries(char *filename,_FILE **raw_file,_FILE **act_file);

// Original: engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
// Address: 004bca50
int __cdecl CFileManager::deleteLocalFilesFromPod(CFileManager *this_ptr,char *pod_filename);

// Original: engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70
// Address: 004bcb70
void __cdecl CFileManager::searchMountedPods(CFileManager *this_ptr,char *default_wildcard);

// Original: engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
// Address: 004bccf0
int __cdecl CFileManager::createPodConfigWizard(CFileManager *this_ptr);

// Original: engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
// Address: 004bcea0
int __cdecl logOnAsVersionControlUser(void);

// Original: engine_fileio.cpp_logOffVersionControl_FUN_004b2830
// Address: 004bceb0
void __cdecl logOffVersionControl(void);

// Original: engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0
// Address: 004bcec0
void __cdecl CFileManager::managePodMounts(CFileManager *this_ptr);

// Original: engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190
// Address: 004bd190
void __cdecl CFileManager::removeAuditRecords(CFileManager *this_ptr,char *pod_file_path);

// Original: engine_fileio.cpp_CCheckOutList_ctor_FUN_004bd710
// Address: 004bd710
CCheckOutList * __cdecl CCheckOutList::ctor(CCheckOutList *this_ptr);

// Original: engine_fileio.cpp_CCheckOutList_dtor_FUN_004bd730
// Address: 004bd730
CCheckOutList * __cdecl CCheckOutList::dtor(CCheckOutList *this_ptr);
