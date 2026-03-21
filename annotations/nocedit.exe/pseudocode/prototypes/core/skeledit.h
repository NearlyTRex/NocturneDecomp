#pragma once

// Function prototypes for core/skeledit.cpp
// Generated from Ghidra function signatures

// Original: core_skeledit.cpp_trimWhitespace_FUN_00589450
// Address: 00589450
void __cdecl trimWhitespace(char *str);

// Original: core_skeledit.cpp_skipFileLines_FUN_005894c0
// Address: 005894c0
void __cdecl skipFileLines(_FILE *file_handle,int line_count);

// Original: core_skeledit.cpp_skipLeadingWhitespace_FUN_00589500
// Address: 00589500
void __cdecl skipLeadingWhitespace(char *str);

// Original: core_skeledit.cpp_makeAbsolutePathFromReference_FUN_00589530
// Address: 00589530
void __cdecl makeAbsolutePathFromReference(char *reference_path,char *target_path);

// Original: core_skeledit.cpp_readNonEmptyLine_FUN_005895f0
// Address: 005895f0
int __cdecl readNonEmptyLine(char *buffer,_FILE *file,int require_content);

// Original: core_skeledit.cpp_ensureFileExtension_FUN_005896b0
// Address: 005896b0
void __cdecl ensureFileExtension(char *filename,char *extension);

// Original: core_skeledit.cpp_readQuotedString_FUN_00589740
// Address: 00589740
void __cdecl readQuotedString(_FILE *file_handle,char *buffer);

// Original: core_skeledit.cpp_loadIni_FUN_005897b0
// Address: 005897b0
void __cdecl loadIni(void);

// Original: core_skeledit.cpp_saveIni_FUN_00589a40
// Address: 00589a40
void __cdecl saveIni(void);

// Original: core_skeledit.cpp_onLodGenerationComplete_FUN_00589b10
// Address: 00589b10
void __cdecl onLodGenerationComplete(int use_simple_message);

// Original: core_skeledit.cpp_createMeshPrecomputeFile_FUN_00589bb0
// Address: 00589bb0
void __cdecl createMeshPrecomputeFile(CLodMesh *mesh_ptr,CLodMeshPrecomputeEntry *precompute_entry);

// Original: core_skeledit.cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20
// Address: 00589c20
int __cdecl CLodMesh::selectAndGenerateLods(CLodMesh *this_ptr,CLodMeshPrecomputeEntry *entry,int render_mode);

// Original: core_skeledit.cpp_warnIfFileExistsInPod_FUN_00589f40
// Address: 00589f40
void __cdecl warnIfFileExistsInPod(char *base_path,char *filename);

// Original: core_skeledit.cpp_CLodMeshPrecomputeEntry_ctor_FUN_00589fa0
// Address: 00589fa0
CLodMeshPrecomputeEntry * __cdecl CLodMeshPrecomputeEntry::ctor(CLodMeshPrecomputeEntry *this_ptr);

// Original: core_skeledit.cpp_CLodMeshPrecomputeEntry_reset_FUN_00589fc0
// Address: 00589fc0
void __cdecl CLodMeshPrecomputeEntry::reset(CLodMeshPrecomputeEntry *this_ptr);

// Original: core_skeledit.cpp_CLodMeshPrecomputeEntry_load_FUN_00589fe0
// Address: 00589fe0
void __cdecl CLodMeshPrecomputeEntry::load(CLodMeshPrecomputeEntry *this_ptr,_FILE *file_handle);

// Original: core_skeledit.cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0
// Address: 0058a0f0
void __cdecl CLodMeshPrecomputeEntry::save(CLodMeshPrecomputeEntry *this_ptr,_FILE *file_handle);

// Original: core_skeledit.cpp_CLodMeshPrecomputeEntry_parseLine_FUN_0058a1b0
// Address: 0058a1b0
int __cdecl CLodMeshPrecomputeEntry::parseLine(CLodMeshPrecomputeEntry *this_ptr,char *line);

// Original: core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
// Address: 0058a260
void __cdecl CDeformableModelInstance::addFilesToExtract(CDeformableModelInstance *this_ptr,_FILE *file_handle);

// Original: core_skeledit.cpp_CDeformableModel_addFilesToExtract_FUN_0058a2b0
// Address: 0058a2b0
void __cdecl CDeformableModel::addFilesToExtract(CDeformableModel *this_ptr,_FILE *file_handle);

// Original: core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0
// Address: 0058a3d0
void __cdecl CBoneStructure::importBON(CBoneStructure *this_ptr,char *filename);

// Original: core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
// Address: 0058a4a0
void __cdecl CBoneStructure::readBONheader(CBoneStructure *this_ptr,_FILE *file,int *frame_count_out);

// Original: core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10
// Address: 0058aa10
void __cdecl CBoneStructure::readBONframe(CBoneStructure *this_ptr,_FILE *file,int mirror_flag);

// Original: core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0
// Address: 0058abb0
void __cdecl CBoneStructure::skipBONframe(CBoneStructure *this_ptr,_FILE *file_handle);

// Original: core_skeledit.cpp_CBoneStructure_findBoneByName_FUN_0058ac30
// Address: 0058ac30
int __cdecl CBoneStructure::findBoneByName(CBoneStructure *this_ptr,char *bone_name);

// Original: core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80
// Address: 0058ac80
void __cdecl CBoneStructure::computeLocalMatrices(CBoneStructure *this_ptr);

// Original: core_skeledit.cpp_CBoneStructure_computeWorldMatrices_FUN_0058ad30
// Address: 0058ad30
void __cdecl CBoneStructure::computeWorldMatrices(CBoneStructure *this_ptr);

// Original: core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0
// Address: 0058adb0
void __cdecl CBoneStructure::fixupMatrices(CBoneStructure *this_ptr);

// Original: core_skeledit.cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0
// Address: 0058aeb0
void __cdecl CBoneStructure::extractInverseBindPose(CBoneStructure *this_ptr,CMatrix3x4f *inverse_matrices);

// Original: core_skeledit.cpp_CBoneStructure_applyMatrixArray_FUN_0058af40
// Address: 0058af40
void __cdecl CBoneStructure::applyMatrixArray(CBoneStructure *this_ptr,CMatrix3x4f *matrices);

// Original: core_skeledit.cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0
// Address: 0058afe0
void __cdecl CBoneStructure::showBoneHierarchy(CBoneStructure *this_ptr,char *model_name);

// Original: core_skeledit.cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160
// Address: 0058b160
void __cdecl CBoneStructure::copyHierarchyFromSkeleton(CBoneStructure *this_ptr,CSkeleton *skeleton);

// Original: core_skeledit.cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200
// Address: 0058b200
int __cdecl CBoneStructure::doesHierarchyMatch(CBoneStructure *this_ptr,CBoneStructure *other);

// Original: core_skeledit.cpp_CSkeleton_scaleFramePositions_FUN_0058b260
// Address: 0058b260
void __cdecl CSkeleton::scaleFramePositions(CSkeleton *this_ptr,float scale);

// Original: core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0
// Address: 0058b2c0
void __cdecl CSkeleton::save(CSkeleton *this_ptr,char *filename);

// Original: core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0
// Address: 0058b3a0
void __cdecl CSkeleton::saveStream(CSkeleton *this_ptr,_FILE *file_handle);

// Original: core_skeledit.cpp_CDeformableModel_importGeometryS3D_FUN_0058b660
// Address: 0058b660
void __cdecl CDeformableModel::importGeometryS3D(CDeformableModel *this_ptr,char *filename);

// Original: core_skeledit.cpp_CDeformableModel_importTexturesS3D_FUN_0058b8e0
// Address: 0058b8e0
int __cdecl CDeformableModel::importTexturesS3D(CDeformableModel *this_ptr,_FILE *file_handle);

// Original: core_skeledit.cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0
// Address: 0058b9b0
int __cdecl CDeformableModel::importFacesS3D(CDeformableModel *this_ptr,_FILE *file_handle);

// Original: core_skeledit.cpp_CDeformableModel_importVerticesS3D_FUN_0058bc40
// Address: 0058bc40
int __cdecl CDeformableModel::importVerticesS3D(CDeformableModel *this_ptr,_FILE *file_handle);

// Original: core_skeledit.cpp_CDeformableModel_importVertexAssignmentsVPH_FUN_0058bd00
// Address: 0058bd00
void __cdecl CDeformableModel::importVertexAssignmentsVPH(CDeformableModel *this_ptr,char *filename,CBoneStructure *bone_structure);

// Original: core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190
// Address: 0058c190
int __cdecl CDeformableModel::buildFromPosFile(CDeformableModel *this_ptr,CLodMeshPrecomputeEntry *entry);

// Original: core_skeledit.cpp_CDeformableModel_extractLodLevel_FUN_0058d790
// Address: 0058d790
void __cdecl CDeformableModel::extractLodLevel(CDeformableModel *this_ptr,int lod_index,CLodMesh *lod_mesh,CMatrix3x4f *inverse_matrices);

// Original: core_skeledit.cpp_CDeformableModel_extractBoneScales_FUN_0058dde0
// Address: 0058dde0
void __cdecl CDeformableModel::extractBoneScales(CDeformableModel *this_ptr,CBoneStructure *bone_structure);

// Original: core_skeledit.cpp_CDeformableModel_cramModelTexture_FUN_0058de70
// Address: 0058de70
void __cdecl CDeformableModel::cramModelTexture(CDeformableModel *this_ptr,char *base_name,int num_crams,int atlas_dimension,int texture_set_index,int max_iterations);

// Original: core_skeledit.cpp_CDeformableModel_addTextureSet_FUN_0058e0b0
// Address: 0058e0b0
void __cdecl CDeformableModel::addTextureSet(CDeformableModel *this_ptr,char *name_format);

// Original: core_skeledit.cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240
// Address: 0058e240
void __cdecl CDeformableModel::sortFacesByTexture(CDeformableModel *this_ptr);

// Original: core_skeledit.cpp_CDeformableModel_scaleAllVertices_FUN_0058e3e0
// Address: 0058e3e0
void __cdecl CDeformableModel::scaleAllVertices(CDeformableModel *this_ptr,float scale);

// Original: core_skeledit.cpp_CDeformableModel_groundBias_FUN_0058e4e0
// Address: 0058e4e0
void __cdecl CDeformableModel::groundBias(CDeformableModel *this_ptr,int motion_index,float frame_number);

// Original: core_skeledit.cpp_CDeformableModel_offsetRootVertices_FUN_0058e600
// Address: 0058e600
void __cdecl CDeformableModel::offsetRootVertices(CDeformableModel *this_ptr,CVector3f *offset);

// Original: core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690
// Address: 0058e690
void __cdecl CDeformableModel::calcRootOffsetScale(CDeformableModel *this_ptr);

// Original: core_skeledit.cpp_CDeformableModel_pruneWeakBoneInfluences_FUN_0058eaa0
// Address: 0058eaa0
void __cdecl CDeformableModel::pruneWeakBoneInfluences(CDeformableModel *this_ptr);

// Original: core_skeledit.cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60
// Address: 0058ec60
void __cdecl CDeformableModel::removeUnusedTextures(CDeformableModel *this_ptr);

// Original: core_skeledit.cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0
// Address: 0058ede0
void __cdecl CDeformableModel::removeDuplicateFaces(CDeformableModel *this_ptr);

// Original: core_skeledit.cpp_CDeformableModel_save_FUN_0058f040
// Address: 0058f040
void __cdecl CDeformableModel::save(CDeformableModel *this_ptr,char *filename);

// Original: core_skeledit.cpp_CDeformableModel_saveStream_FUN_0058f120
// Address: 0058f120
void __cdecl CDeformableModel::saveStream(CDeformableModel *this_ptr,_FILE *file_handle);

// Original: core_skeledit.cpp_CDeformableModel_initSinglePart_FUN_0058f790
// Address: 0058f790
void __cdecl CDeformableModel::initSinglePart(CDeformableModel *this_ptr);

// Original: core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810
// Address: 0058f810
int __cdecl CDeformableModel::determinePartsFromS3D(CDeformableModel *this_ptr,char *filename);

// Original: core_skeledit.cpp_parseBoneParentToken_FUN_00592520
// Address: 00592520
int __cdecl parseBoneParentToken(char *token,int *out_index,int bone_count,int allow_patch);

// Original: core_skeledit.cpp_parseTransitionType_FUN_005925c0
// Address: 005925c0
int __cdecl parseTransitionType(char *type_name);

// Original: core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690
// Address: 00592690
int __cdecl CSkeleton::importSkeletonFile(CSkeleton *this_ptr,char *filename);

// Original: core_skeledit.cpp_CSkeleton_extractBoneScales_FUN_00595f30
// Address: 00595f30
void __cdecl CSkeleton::extractBoneScales(CSkeleton *this_ptr,CBoneStructure *bone_structure);

// Original: core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
// Address: 00595fc0
void __cdecl CDeformableModel::exportModelToS3D(CDeformableModel *this_ptr,char *output_filename,int lod_level,CMatrix3x4f *bone_matrices);

// Original: core_skeledit.cpp_drawInfoRow_FUN_00596860
// Address: 00596860
void __cdecl drawInfoRow(int row,char *label,char *value);

// Original: core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0
// Address: 005968b0
void __cdecl CDeformableModelInstance::viewModel(CDeformableModelInstance *this_ptr);

// Original: core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
// Address: 00598ee0
void __cdecl CDeformableModelInstance::exportModelToS3D(CDeformableModelInstance *this_ptr,char *filename);

// Original: core_skeledit.cpp_previewModel_FUN_00598f10
// Address: 00598f10
void __cdecl previewModel(char *model_name);

// Original: core_skeledit.cpp_viewModel_FUN_00598fc0
// Address: 00598fc0
void __cdecl viewModel(void);

// Original: core_skeledit.cpp_CLodVert_copy_FUN_00599550
// Address: 00599550
CLodVert * __cdecl CLodVert::copy(CLodVert *this_ptr,CLodVert *other);

// Original: core_skeledit.cpp_CLodVert_dtor_FUN_005995c0
// Address: 005995c0
CLodVert * __cdecl CLodVert::dtor(CLodVert *this_ptr,uint flags);
