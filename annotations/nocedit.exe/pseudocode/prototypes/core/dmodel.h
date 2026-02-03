#pragma once

// Function prototypes for core/dmodel.cpp
// Generated from Ghidra function signatures

// Original: core_dmodel.cpp_staticInit_FUN_00476c50
// Address: 00476c50
void __cdecl staticInit(void);

// Original: core_dmodel.cpp_skipLines_FUN_00476c80
// Address: 00476c80
void __cdecl skipLines(_FILE *file_handle,int line_count);

// Original: core_dmodel.cpp_clampTextureCoordinate_FUN_00476cb0
// Address: 00476cb0
void __cdecl clampTextureCoordinate(float *value);

// Original: core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
// Address: 00476cf0
CKeyFramedModel * __cdecl CKeyFramedModel::ctor(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
// Address: 00476d90
CKeyFramedModel * __cdecl CKeyFramedModel::dtor(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
// Address: 00476db0
void __cdecl CKeyFramedModel::load(CKeyFramedModel *this_ptr,char *filename);

// Original: core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20
// Address: 00476f20
void __cdecl CKeyFramedModel::readBinaryModel(CKeyFramedModel *this_ptr,_FILE *file);

// Original: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110
// Address: 00477110
void __cdecl CKeyFramedModel::readTextModel(CKeyFramedModel *this_ptr,_FILE *file);

// Original: core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
// Address: 00477690
void __cdecl CKeyFramedModel::free(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
// Address: 00477850
void __cdecl CKeyFramedModel::prepareForRender(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int frame_index, int render_flags);

// Original: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
// Address: 00477890
CVector3i * __cdecl CKeyFramedModel::getFrameVertices(CKeyFramedModel *this_ptr,int frame_index);

// Original: core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0
// Address: 004778d0
void __cdecl CKeyFramedModel::rotateAndLightVertices(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int frame_index);

// Original: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
// Address: 00477980
void __cdecl CKeyFramedModel::submitToRenderer(CKeyFramedModel *this_ptr,int frame_index,int render_flags, CKeyFramedModelInstance *instance);

// Original: core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
// Address: 00477bf0
void __cdecl CKeyFramedModel::allocate(CKeyFramedModel *this_ptr,int vertex_count,int poly_count,int texture_count, int part_count,int frame_count);

// Original: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
// Address: 00477e60
void __cdecl CKeyFramedModel::calcNormals(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
// Address: 00478010
void __cdecl CKeyFramedModel::calculateFrameBounds(CKeyFramedModel *model_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
// Address: 00478190
void __cdecl CKeyFramedModel::captureTextures(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0
// Address: 004781d0
float __cdecl CKeyFramedModel::intersectRay(CKeyFramedModel *this_ptr,int frame_index,CVector3f *ray_origin,CVector3f *ray_direction, CVector3f *output_normal);

// Original: core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
// Address: 00478650
void __cdecl CKeyFramedModel::intersectCylinder(CKeyFramedModel *this_ptr,int frame_index,SIntersectXZCylinder *cylinder, CVector3f *transform_vector);

// Original: core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
// Address: 00478740
int __cdecl CKeyFramedModel::getFloorHeight(CKeyFramedModel *this_ptr,int frame_index,float x,float z,float *out_height, CVector3f *transform_vector);

// Original: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
// Address: 00478830
void __cdecl CKeyFramedModel::buildCollisionTriList(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
// Address: 00478950
void __cdecl CKeyFramedModel::populateCollisionList(CKeyFramedModel *this_ptr,CVector3f *transform_vector);

// Original: core_dmodel.cpp_loadModel_FUN_00478c00
// Address: 00478c00
CKeyFramedModel * __cdecl loadModel(char *filename);

// Original: core_dmodel.cpp_freeAllModels_FUN_00478cb0
// Address: 00478cb0
void __cdecl freeAllModels(void);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
// Address: 00478ce0
CKeyFramedModelInstance * __cdecl CKeyFramedModelInstance::ctor(CKeyFramedModelInstance *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00
// Address: 00478d00
CKeyFramedModelInstance * __cdecl CKeyFramedModelInstance::init(CKeyFramedModelInstance *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
// Address: 00478d20
void __cdecl CKeyFramedModelInstance::prepareForRendering(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
// Address: 00478d60
CKeyFramedModel * __cdecl CKeyFramedModelInstance::preCache(CKeyFramedModelInstance *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
// Address: 00478d80
CKeyFramedModel * __cdecl CKeyFramedModelInstance::getModelPtr(CKeyFramedModelInstance *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
// Address: 00478dd0
void __cdecl CKeyFramedModelInstance::setModelName(CKeyFramedModelInstance *this_ptr,char *filename);

// Original: core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10
// Address: 00478e10
void __cdecl CKeyFramedModel::export(CKeyFramedModel *this_ptr,char *output_filename);

// Original: core_dmodel.cpp_CKeyFramedModel_backupModel_FUN_00479260
// Address: 00479260
int __cdecl CKeyFramedModel::backupModel(CKeyFramedModel *this_ptr,char *filename);

// Original: core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330
// Address: 00479330
void __cdecl CKeyFramedModel::importFromS3D(CKeyFramedModel *this_ptr,char *filename);

// Original: core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30
// Address: 00479f30
void __cdecl CKeyFramedModel::exportToS3D(CKeyFramedModel *this_ptr,char *filename);

// Original: core_dmodel.cpp_CKeyFramedModel_createSinglePart_FUN_0047a3b0
// Address: 0047a3b0
void __cdecl CKeyFramedModel::createSinglePart(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
// Address: 0047a3e0
void __cdecl CKeyFramedModel::packTexturesToAtlases(CKeyFramedModel *model_ptr,char *atlas_filename,int quality_parameter,int pack_parameter);

// Original: core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820
// Address: 0047a820
void __cdecl CKeyFramedModel::sortPolygonsByTexture(CKeyFramedModel *model_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00
// Address: 0047aa00
void __cdecl CKeyFramedModel::reducePolygons(CKeyFramedModel *this_ptr,float weld_tolerance,float angle_threshold_radians);

// Original: core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
// Address: 0047aa30
void __cdecl CKeyFramedModel::removeUnusedVertices(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0
// Address: 0047ada0
void __cdecl CKeyFramedModel::weldAndRemoveUnusedVertices(CKeyFramedModel *this_ptr,float weld_tolerance);

// Original: core_dmodel.cpp_safeAcos_FUN_0047b170
// Address: 0047b170
double __cdecl safeAcos(float value);

// Original: core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
// Address: 0047b1e0
void __cdecl CKeyFramedModel::mergeTrianglesToQuads(CKeyFramedModel *this_ptr,float angle_threshold_radians);

// Original: core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
// Address: 0047bbc0
void __cdecl CKeyFramedModel::removeDuplicatePolygons(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0
// Address: 0047bdb0
void __cdecl CKeyFramedModel::removeDegeneratePolygons(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
// Address: 0047bf40
void __cdecl CKeyFramedModel::validatePartList(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
// Address: 0047c080
CVector3f * __cdecl CKeyFramedModel::calculateTriangleNormal(CKeyFramedModel *this_ptr,CVector3f *output_normal,int frame_index,int poly_index);

// Original: core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220
// Address: 0047c220
void __cdecl CKeyFramedModel::recenter(CKeyFramedModel *this_ptr,int frame_index);

// Original: core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0
// Address: 0047c2d0
void __cdecl CKeyFramedModel::applyVertexBias(CKeyFramedModel *this_ptr,int frame_index);

// Original: core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
// Address: 0047c370
void __cdecl CKeyFramedModel::applyBias(CKeyFramedModel *this_ptr,CVector3f *bias_offset);

// Original: core_dmodel.cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470
// Address: 0047c470
void __cdecl CKeyFramedModel::scaleToHeight(CKeyFramedModel *this_ptr,float desired_height);

// Original: core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0
// Address: 0047c4a0
void __cdecl CKeyFramedModel::scaleUniform(CKeyFramedModel *this_ptr,float uniform_scale);

// Original: core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
// Address: 0047c4d0
void __cdecl CKeyFramedModel::scale(CKeyFramedModel *this_ptr,CVector3f *scale_factors);

// Original: core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
// Address: 0047c5f0
void __cdecl CKeyFramedModel::snapRotationToAxis(CKeyFramedModel *this_ptr,CVector3f *rotation_angles);

// Original: core_dmodel.cpp_copyFile_FUN_0047c930
// Address: 0047c930
int __cdecl copyFile(char *source_filename,char *destination_filename,int show_error_if_missing);

// Original: core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
// Address: 0047ca50
int __cdecl CKeyFramedModel::copyTextureFiles(CKeyFramedModel *this_ptr,char *source_drive,char *source_directory, char *destination_drive,char *destination_directory);

// Original: core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0
// Address: 0047cbc0
void __cdecl CKeyFramedModel::showEditorMenu(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810
// Address: 0047e810
void __cdecl CKeyFramedModel::exportToDSE(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10
// Address: 0047ea10
void __cdecl CKeyFramedModel::importFromDSE(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
// Address: 0047ed00
void __cdecl CKeyFramedModel::writeDependencies(CKeyFramedModel *this_ptr,_FILE *dependency_file,int skip_raw_files);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
// Address: 0047edd0
void __cdecl CKeyFramedModelInstance::writeDependencies(CKeyFramedModelInstance *this_ptr,_FILE *file_handle);

// Original: core_dmodel.cpp_writeModelDependencies_FUN_0047ee30
// Address: 0047ee30
void __cdecl writeModelDependencies(_FILE *dependency_file,char *model_filename);

// Original: core_dmodel.cpp_CDemonTriangle_ctor_FUN_0047eef0
// Address: 0047eef0
CDemonTriangle * __cdecl CDemonTriangle::ctor(CDemonTriangle *this_ptr);

// Original: core_dmodel.cpp_CDemonTriangle_dtor_FUN_0047ef00
// Address: 0047ef00
CDemonTriangle * __cdecl CDemonTriangle::dtor(CDemonTriangle *this_ptr);

// Original: core_dmodel.cpp_CDemonTriangle_copy_FUN_0047ef10
// Address: 0047ef10
int __cdecl CDemonTriangle::copy(CDemonTriangle *this_ptr,CDemonTriangle *other);

// Original: core_dmodel.cpp_SRA4HQPoint_copy_FUN_0047ef60
// Address: 0047ef60
void __cdecl SRA4HQPoint::copy(SRA4HQPoint *this_ptr,SRA4HQPoint *other);

// Original: core_dmodel.cpp_copyModels_FUN_0047ef90
// Address: 0047ef90
CKeyFramedModel ** __cdecl copyModels(CKeyFramedModel **first,CKeyFramedModel **second);

// Original: core_dmodel.cpp_copyModels_FUN_0047efa0
// Address: 0047efa0
CKeyFramedModel * __cdecl copyModels(CKeyFramedModel **first,CKeyFramedModel **second);

// Original: core_dmodel.cpp_copyModels_FUN_0047efb0
// Address: 0047efb0
CKeyFramedModel * __cdecl copyModels(CKeyFramedModel **first,CKeyFramedModel **second);

// Original: core_dmodel.cpp_freeModels_FUN_0047efc0
// Address: 0047efc0
CKeyFramedModel * __cdecl freeModels(CKeyFramedModel *objs);
