#pragma once

// Function prototypes for engine/fileio.cpp
// Generated from Ghidra function signatures

// Original: engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
// Address: 004b1c00
int establishUserIdentity(void);

// Original: engine_fileio.cpp_trimWhitespace_FUN_004b1d40
// Address: 004b1d40
void trimWhitespace(char * string);

// Original: engine_fileio.cpp_safeCloseFile_FUN_004b1db0
// Address: 004b1db0
void safeCloseFile(FILE * * file_ptr);

// Original: engine_fileio.cpp_buildFilePath_FUN_004b1de0
// Address: 004b1de0
void buildFilePath(char * base_dir, char * filename, char * dest_path);

// Original: engine_fileio.cpp_buildCheckoutFilePath_FUN_004b1e60
// Address: 004b1e60
void buildCheckoutFilePath(char * dest_buffer);

// Original: engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10
// Address: 004b1f10
void buildHistoryFilePath(char * filename, char * extension, char * dest_buffer);

// Original: engine_fileio.cpp_formatSystemError_FUN_004b1fe0
// Address: 004b1fe0
void formatSystemError(char * dest_buffer);

// Original: engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
// Address: 004b2030
char * copyFileWithProgress(FILE * source_file, FILE * dest_file, char * source_filename, char * dest_filename, int file_size_bytes);

// Original: engine_fileio.cpp_openFileWithRetry_FUN_004b2200
// Address: 004b2200
FILE * openFileWithRetry(char * filename, char * mode);

// Original: engine_fileio.cpp_parseTimestampRecord_FUN_004b2270
// Address: 004b2270
int parseTimestampRecord(char * input_string, STimestampRecord * output_record);

// Original: engine_fileio.cpp_readTimestampFile_FUN_004b23a0
// Address: 004b23a0
int readTimestampFile(FILE * file, STimestampRecord * * records, int * count);

// Original: engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640
// Address: 004b2640
int findMaxFieldInTimestampFile(char * filename);

// Original: engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
// Address: 004b2770
int logOnAsVersionControlUser(void);

// Original: engine_fileio.cpp_logOffVersionControl_FUN_004b2830
// Address: 004b2830
void logOffVersionControl(void);

// Original: engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
// Address: 004b2860
void CCheckOutList::reset(CCheckOutList * this_ptr);

// Original: engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
// Address: 004b2890
int CCheckOutList::load(CCheckOutList * this_ptr);

// Original: engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
// Address: 004b2a60
int CCheckOutList::parse(CCheckOutList * this_ptr, FILE * * file);

// Original: engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
// Address: 004b2d00
int CCheckOutList::add(CCheckOutList * this_ptr, CCheckOutItem * new_entry);

// Original: engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
// Address: 004b2d70
int CCheckOutList::remove(CCheckOutList * this_ptr, int entry_index);

// Original: engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
// Address: 004b2e60
int CCheckOutList::findEntry(CCheckOutList * this_ptr, char * filename);

// Original: engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
// Address: 004b2eb0
int CCheckOutList::write(CCheckOutList * this_ptr, FILE * * file_handle);

// Original: engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
// Address: 004b2f90
int showOverwriteConfirmationDialog(int * user_choice_ptr, char * dialog_message);

// Original: engine_fileio.cpp_checkFileOverwriteCondition_FUN_004b3120
// Address: 004b3120
int checkFileOverwriteCondition(char * target_filename, char * source_directory);

// Original: engine_fileio.cpp_copyFileTimestamp_FUN_004b31e0
// Address: 004b31e0
int copyFileTimestamp(char * source_file, char * dest_file);

// Original: engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
// Address: 004b3220
int getLatestFileFromRepository(char * base_directory, char * filename);

// Original: engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
// Address: 004b35a0
int CCheckOutItem::removeCheckOutBookkeeping(CCheckOutItem * this_ptr, void * unused_param);

// Original: engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920
// Address: 004b3920
int CCheckOutItem::checkOutFileFromRepository(CCheckOutItem * this_ptr, char * filename);

// Original: engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
// Address: 004b3f50
int CCheckOutItem::selectCheckedOutFile(CCheckOutItem * this_ptr, char * filename_out, char * out_buffer, char * wildcard_pattern, char * dialog_title);

// Original: engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0
// Address: 004b41c0
void CCheckOutItem::revert(CCheckOutItem * this_ptr, char * output_buffer);

// Original: engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220
// Address: 004b4220
int CCheckOutItem::processFiles(CCheckOutItem * this_ptr, int operation_mode, char * filename);

// Original: engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
// Address: 004b5030
int CCheckOutItem::findFileToCheckOut(CCheckOutItem * this_ptr, char * file_pattern, char * output_filename_buffer);

// Original: engine_fileio.cpp_remountAllPods_FUN_004b5350
// Address: 004b5350
void remountAllPods(void);

// Original: engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0
// Address: 004b53a0
CFileManager * CFileManager::ctor(CFileManager * this_ptr);

// Original: engine_fileio.cpp_CFileManager_dtor_FUN_004b53d0
// Address: 004b53d0
void CFileManager::dtor(CFileManager * this_ptr);

// Original: engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0
// Address: 004b53e0
void CFileManager::extractTexture(CFileManager * this_ptr, char * texture_filename);

// Original: engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0
// Address: 004b54e0
void CFileManager::processMRGLNode(CFileManager * this_ptr, SMRGLHeaderExtended * mrgl_node);

// Original: engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610
// Address: 004b5610
void CFileManager::loadAndProcessMRGLModel(CFileManager * this_ptr, char * filename);

// Original: engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640
// Address: 004b5640
void CFileManager::registerFiles(CFileManager * this_ptr, char * filename_list);

// Original: engine_fileio.cpp_CFileManager_freeAuditRecords_FUN_004b5910
// Address: 004b5910
void CFileManager::freeAuditRecords(CFileManager * this_ptr);

// Original: engine_fileio.cpp_CFileManager_addPodAuditRecord_FUN_004b5950
// Address: 004b5950
void CFileManager::addPodAuditRecord(CFileManager * this_ptr, CPodAuditRecord * audit_data, char * filename_path);

// Original: engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
// Address: 004b5a50
void CFileManager::rebuildLastPod(CFileManager * this_ptr, char * pod_filename, char * volume_name);

// Original: engine_fileio.cpp_CFileManager_load_FUN_004b6c00
// Address: 004b6c00
void CFileManager::load(CFileManager * this_ptr);

// Original: engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10
// Address: 004b6e10
void CFileManager::extractPodFile(CFileManager * this_ptr, char * pod_filename);

// Original: engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
// Address: 004b7460
void CFileManager::catalogPodFile(CFileManager * this_ptr, char * pod_filename);

// Original: engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0
// Address: 004b76d0
void CFileManager::extractFilesToDirectory(CFileManager * this_ptr);

// Original: engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0
// Address: 004b7ac0
void CFileManager::buildPodFromResponseFile(CFileManager * this_ptr);

// Original: engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
// Address: 004b7c10
void CFileManager::openExtractFileForBuilding(CFileManager * this_ptr);

// Original: engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60
// Address: 004b7c60
void CFileManager::closeExtractFile(CFileManager * this_ptr);

// Original: engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90
// Address: 004b7c90
void CFileManager::verifyPodCRC(CFileManager * this_ptr, char * pod_filename);

// Original: engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50
// Address: 004b7d50
int extractFileWithTimestamp(FILE * source_file, char * dest_filename, char * name_or_offset, int file_size, int file_offset, int checksum, int timestamp);

// Original: engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
// Address: 004b7f50
void CFileManager::viewPodAuditTrail(CFileManager * this_ptr, char * pod_filename);

// Original: engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
// Address: 004b82a0
void CFileManager::compareLocalVsPod(CFileManager * this_ptr, char * pod_filename);

// Original: engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0
// Address: 004b86b0
void CFileManager::managePodFiles(CFileManager * this_ptr, char * pod_directory_path);

// Original: engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
// Address: 004b9f40
void CFileManager::crossReferencePodDuplicates(CFileManager * this_ptr, char * pod_filename);

// Original: engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
// Address: 004ba4f0
void CFileManager::parsePodConfigFile(CFileManager * this_ptr, CStrList * pod_list);

// Original: engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
// Address: 004ba620
void CFileManager::writePodConfigFile(CFileManager * this_ptr, CStrList * pod_list);

// Original: engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
// Address: 004ba6c0
int CFileManager::findPodInList(CFileManager * this_ptr, CStrList * pod_list, char * target_filename);

// Original: engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740
// Address: 004ba740
int CFileManager::checkOutAndExtractPod(CFileManager * this_ptr, CCheckOutItem * checkout_item, FILE * optional_pod_file);

// Original: engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00
// Address: 004baf00
int CFileManager::checkInPodFile(CFileManager * this_ptr, char * checkout_item_name, char * timestamp_file, char * pod_filename);

// Original: engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0
// Address: 004bc2b0
int CFileManager::undoCheckout(CFileManager * this_ptr, CCheckOutItem * checkout_item);

// Original: engine_fileio.cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0
// Address: 004bc5a0
void CFileManager::setVersionControlDirectory(CFileManager * this_ptr, char * directory);

// Original: engine_fileio.cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0
// Address: 004bc5d0
void CFileManager::setVersionControlCredentials(CFileManager * this_ptr, char * network_username, char * password, char * domain);

// Original: engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
// Address: 004bc650
void synchronizeFilesToDirectory(FILE * file_list_output, char * source_directory, char * file_pattern, char * dest_directory);

// Original: engine_fileio.cpp_writeArtFileEntries_FUN_004bc9f0
// Address: 004bc9f0
void writeArtFileEntries(char * filename, FILE * * raw_file, FILE * * act_file);

// Original: engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
// Address: 004bca50
int CFileManager::deleteLocalFilesFromPod(CFileManager * this_ptr, char * pod_filename);

// Original: engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70
// Address: 004bcb70
void CFileManager::searchMountedPods(CFileManager * this_ptr, char * default_wildcard);

// Original: engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
// Address: 004bccf0
int CFileManager::createPodConfigWizard(CFileManager * this_ptr);

// Original: engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
// Address: 004bcea0
int logOnAsVersionControlUser(void);

// Original: engine_fileio.cpp_logOffVersionControl_FUN_004b2830
// Address: 004bceb0
void logOffVersionControl(void);

// Original: engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0
// Address: 004bcec0
void CFileManager::managePodMounts(CFileManager * this_ptr);

// Original: engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190
// Address: 004bd190
void CFileManager::removeAuditRecords(CFileManager * this_ptr, char * pod_file_path);

// Original: engine_fileio.cpp_CCheckOutList_ctor_FUN_004bd710
// Address: 004bd710
CCheckOutList * CCheckOutList::ctor(CCheckOutList * this_ptr);

// Original: engine_fileio.cpp_CCheckOutList_dtor_FUN_004bd730
// Address: 004bd730
CCheckOutList * CCheckOutList::dtor(CCheckOutList * this_ptr);
