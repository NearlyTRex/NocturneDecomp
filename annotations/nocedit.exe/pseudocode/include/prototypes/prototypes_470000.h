#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CColor3f.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFilter.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CDemonImage.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CDoor.h"
#include "types/classes/CFilterCache.h"
#include "types/classes/CFilterFx.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CRect.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CZombieDog.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SRA4HQPoint.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x470000
// =============================================================================

void core_dfilter_cpp_CFilterCache_free_FUN_00470000(CFilterCache * this_ptr);
CDemonFilter * core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060(CFilterCache * this_ptr, char * filter_name, char * filter_filename, int enable_init);
CDemonFilter * core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0(CFilterCache * this_ptr, char * filter_name);
CDemonFilter * core_dfilter_cpp_CDemonFilter_ctor_FUN_004701f0(CDemonFilter * this_ptr);
CDemonFilter * core_dfilter_cpp_CDemonFilter_dtor_FUN_00470240(CDemonFilter * this_ptr);
void core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00470260(CDemonFilter * this_ptr);
void core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004702c0(CDemonFilter * this_ptr);
void core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(CDemonFilter * this_ptr, char * filename);
void core_dfilter_cpp_CDemonFilter_save_FUN_00470510(CDemonFilter * this_ptr, char * filename);
void core_dfilter_cpp_CDemonFilter_init_FUN_004705a0(CDemonFilter * this_ptr, float init_value, int flags);
CFilterFx * core_dfilter_cpp_CFilterFX_ctor_FUN_004706c0(CFilterFx * this_ptr);
CFilterFx * core_dfilter_cpp_CFilterFX_dtor_FUN_004706e0(CFilterFx * this_ptr);
void core_dfilter_cpp_CFilterFX_free_FUN_00470700(CFilterFx * this_ptr);
void core_dfilter_cpp_CFilterFX_openMovie_FUN_00470730(CFilterFx * this_ptr, char * filename);
void core_dfilter_cpp_CFilterFX_process_FUN_004708e0(CFilterFx * this_ptr);
void core_dfilter_cpp_freeFilters_FUN_00470980(CDemonFilter * * array);
void core_dfont_cpp_initFonts_FUN_004709a0(void);
void core_dfont_cpp_freeFonts_FUN_004710a0(void);
void core_dfont_cpp_remapFonts_FUN_00471300(void);
void core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe * this_ptr, CColor3f * color);
void core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe * this_ptr, float radius);
void core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe * this_ptr);
void core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe * this_ptr);
int core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00471770(CDemonGlobe * this_ptr, CVector3f * reference_position, CMatrix3x3f * rotation_matrix, CVector3f * aabb_min, CVector3f * aabb_max);
int core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850(CDemonGlobe * this_ptr, CVector3i * vertex_position, CVector3i * surface_normal);
CDemonImage * core_dimage_cpp_CDemonImage_ctor_FUN_004719b0(CDemonImage * this_ptr);
CDemonImage * core_dimage_cpp_CDemonImage_dtor_FUN_004719c0(CDemonImage * this_ptr);
void core_dimage_cpp_CDemonImage_allocMemory_FUN_004719e0(CDemonImage * this_ptr);
void core_dimage_cpp_CDemonImage_freeMemory_FUN_00471a40(CDemonImage * this_ptr);
ushort core_dimage_cpp_CDemonImage_packColor_FUN_00471a70(CDemonImage * this_ptr, uint red, uint green, uint blue);
void core_dimage_cpp_CDemonImage_load_FUN_00471ad0(CDemonImage * this_ptr, char * filename);
void core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles);
void core_dirmat_cpp_CMatrix3x3f_invert_FUN_00471e10(CMatrix3x3f * this_ptr);
CVector3f * core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input);
CVector3f * core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * matrix, CVector3f * output, CVector3f * input);
float core_dirmat_cpp_atan2Custom_FUN_00472090(double y, double x);
CVector3f * core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles);
CMatrix3x3f * core_dirmat_cpp_CMatrix3x3f_multiply_FUN_00472540(CMatrix3x3f * this_ptr, CMatrix3x3f * matrix_a, CMatrix3x3f * matrix_b);
void core_dlight_cpp_staticInit_FUN_00472680(void);
CDemonLight * core_dlight_cpp_CDemonLight_ctor_FUN_004726a0(CDemonLight * this_ptr);
CDemonLight * core_dlight_cpp_CDemonLight_dtor_FUN_00472760(CDemonLight * this_ptr, uint d1, uint d2, uint d3);
void core_dlight_cpp_CDemonLight_init_FUN_004727c0(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_free_FUN_004728b0(CDemonLight * this_ptr);
int core_dlight_cpp_getRestoreMemory_FUN_00472950(int pixel_count);
void core_dlight_cpp_resetRestoreMemoryAllocator_FUN_004729c0(void);
void core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(CDemonLight * this_ptr, int skip_clear_buffers);
void core_dlight_cpp_CDemonLight_blitZBuffer_FUN_00472c70(CDemonLight * this_ptr, CRect * source_rect);
void core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00472e40(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00472f30(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(CDemonLight * this_ptr);
ushort * core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270(CDemonLight * this_ptr, CVector3i * projected_coord, uchar x_round_flag, uchar y_round_flag);
void core_dlight_cpp_drawGrayscalePixel_FUN_00473360(int x, int y, int grayscale_value);
void core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size);
void core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_allocateFilter_FUN_00474720(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, int filter_pos_y);
void core_dlight_cpp_captureLightTextures_FUN_00474a90(void);
void core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(CDemonLight * this_ptr);
void core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0(CDemonLight * this_ptr);
int core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00476000(CDemonLight * this_ptr, CRect * rect);
void core_dlight_cpp_renderConeLightGeometry_FUN_004760d0(CVector3f * position, CVector3i * rotation, float param_3, float max_distance);
void core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight * this_ptr, float intensity);
void core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670(CDemonLight * this_ptr, int screen_x, int screen_y, int brightness_offset);
int core_dlight_cpp_CDemonLight_testLightVolumeVisibility_FUN_00476a60(CDemonLight * this_ptr);
CDemonLight * core_dlight_cpp_CDemonLight_copy_FUN_00476c20(CDemonLight * this_ptr, CDemonLight * other);
CDemonLight * core_dlight_cpp_CDemonLight_copy_FUN_00476c30(CDemonLight * this_ptr, CDemonLight * other);
CDemonLight * core_dlight_cpp_CDemonLight_copy_FUN_00476c40(CDemonLight * this_ptr, CDemonLight * other);
void core_dmodel_cpp_staticInit_FUN_00476c50(void);
void core_dmodel_cpp_skipLines_FUN_00476c80(FILE * file_handle, int line_count);
void core_dmodel_cpp_clampTextureCoordinate_FUN_00476cb0(float * value);
CKeyFramedModel * core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel * this_ptr);
CKeyFramedModel * core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(CKeyFramedModel * this_ptr);
void core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename);
void core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20(CKeyFramedModel * this_ptr, FILE * file);
void core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00477110(CKeyFramedModel * this_ptr, FILE * file);
void core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr);
void core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, CKeyFramedModelInstance * instance, int frame_index, int render_flags);
CVector3i * core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(CKeyFramedModel * this_ptr, int frame_index);
void core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0(CKeyFramedModel * this_ptr, CKeyFramedModelInstance * instance, int frame_index);
void core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00477980(CKeyFramedModel * this_ptr, int frame_index, int render_flags, CKeyFramedModelInstance * instance);
void core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0(CKeyFramedModel * this_ptr, int vertex_count, int poly_count, int texture_count, int part_count, int frame_count);
void core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel * this_ptr);
void core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr);
void core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00478190(CKeyFramedModel * this_ptr);
float core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0(CKeyFramedModel * this_ptr, int frame_index, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * output_normal);
void core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00478650(CKeyFramedModel * this_ptr, int frame_index, SIntersectXZCylinder * cylinder, CVector3f * transform_vector);
int core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00478740(CKeyFramedModel * this_ptr, int frame_index, float x, float z, float * out_height, CVector3f * transform_vector);
void core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(CKeyFramedModel * this_ptr);
void core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(CKeyFramedModel * this_ptr, CVector3f * transform_vector);
CKeyFramedModel * core_dmodel_cpp_loadModel_FUN_00478c00(char * filename);
void core_dmodel_cpp_freeAllModels_FUN_00478cb0(void);
CKeyFramedModelInstance * core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr);
CKeyFramedModelInstance * core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00478d00(CKeyFramedModelInstance * this_ptr);
void core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags);
CKeyFramedModel * core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr);
CKeyFramedModel * core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr);
void core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename);
void core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel * this_ptr, char * output_filename);
int core_dmodel_cpp_CKeyFramedModel_backupModel_FUN_00479260(CKeyFramedModel * this_ptr, char * filename);
void core_dmodel_cpp_CKeyFramedModel_importFromS3D_FUN_00479330(CKeyFramedModel * this_ptr, char * filename);
void core_dmodel_cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel * this_ptr, char * filename);
void core_dmodel_cpp_CKeyFramedModel_createSinglePart_FUN_0047a3b0(CKeyFramedModel * this_ptr);
void core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0(CKeyFramedModel * model_ptr, char * atlas_filename, int quality_parameter, int pack_parameter);
void core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(CKeyFramedModel * model_ptr);
void core_dmodel_cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00(CKeyFramedModel * this_ptr, float weld_tolerance, float angle_threshold_radians);
void core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel * this_ptr);
void core_dmodel_cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0(CKeyFramedModel * this_ptr, float weld_tolerance);
double core_dmodel_cpp_safeAcos_FUN_0047b170(float value);
void core_dmodel_cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0(CKeyFramedModel * this_ptr, float angle_threshold_radians);
void core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel * this_ptr);
void core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(CKeyFramedModel * this_ptr);
void core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr);
CVector3f * core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080(CKeyFramedModel * this_ptr, CVector3f * output_normal, int frame_index, int poly_index);
void core_dmodel_cpp_CKeyFramedModel_recenter_FUN_0047c220(CKeyFramedModel * this_ptr, int frame_index);
void core_dmodel_cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0(CKeyFramedModel * this_ptr, int frame_index);
void core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370(CKeyFramedModel * this_ptr, CVector3f * bias_offset);
void core_dmodel_cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470(CKeyFramedModel * this_ptr, float desired_height);
void core_dmodel_cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0(CKeyFramedModel * this_ptr, float uniform_scale);
void core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel * this_ptr, CVector3f * scale_factors);
void core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0(CKeyFramedModel * this_ptr, CVector3f * rotation_angles);
int core_dmodel_cpp_copyFile_FUN_0047c930(char * source_filename, char * destination_filename, int show_error_if_missing);
int core_dmodel_cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50(CKeyFramedModel * this_ptr, char * source_drive, char * source_directory, char * destination_drive, char * destination_directory);
void core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(CKeyFramedModel * this_ptr);
void core_dmodel_cpp_CKeyFramedModel_exportToDSE_FUN_0047e810(CKeyFramedModel * this_ptr);
void core_dmodel_cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel * this_ptr);
void core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(CKeyFramedModel * this_ptr, FILE * dependency_file, int skip_raw_files);
void core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle);
void core_dmodel_cpp_writeModelDependencies_FUN_0047ee30(FILE * dependency_file, char * model_filename);
CDemonTriangle * core_dmodel_cpp_CDemonTriangle_ctor_FUN_0047eef0(CDemonTriangle * this_ptr);
CDemonTriangle * core_dmodel_cpp_CDemonTriangle_dtor_FUN_0047ef00(CDemonTriangle * this_ptr);
int core_dmodel_cpp_CDemonTriangle_copy_FUN_0047ef10(CDemonTriangle * this_ptr, CDemonTriangle * other);
void core_dmodel_cpp_SRA4HQPoint_copy_FUN_0047ef60(SRA4HQPoint * this_ptr, SRA4HQPoint * other);
CKeyFramedModel * * core_dmodel_cpp_copyModels_FUN_0047ef90(CKeyFramedModel * * first, CKeyFramedModel * * second);
CKeyFramedModel * core_dmodel_cpp_copyModels_FUN_0047efa0(CKeyFramedModel * * first, CKeyFramedModel * * second);
CKeyFramedModel * core_dmodel_cpp_copyModels_FUN_0047efb0(CKeyFramedModel * * first, CKeyFramedModel * * second);
void core_dmodel_cpp_freeModels_FUN_0047efc0(CKeyFramedModel * * array);
void core_dog_cpp_staticInit_FUN_0047efe0(void);
CZombieDog * core_dog_cpp_factoryFunc_FUN_0047f010(void);
CDemonActorType * core_dog_cpp_CZombieDog_getActorType_FUN_0047f040(CZombieDog * this_ptr);
CZombieDog * core_dog_cpp_CZombieDog_ctor_FUN_0047f050(CZombieDog * this_ptr);
void core_dog_cpp_CZombieDog_setup_FUN_0047f0c0(CZombieDog * this_ptr);
void core_dog_cpp_CZombieDog_process_FUN_0047f140(CZombieDog * this_ptr);
void core_dog_cpp_CZombieDog_serialize_FUN_0047f7b0(CZombieDog * this_ptr);
void core_dog_cpp_CZombieDog_FUN_0047f820(CZombieDog * this_ptr);
int core_dog_cpp_CZombieDog_getTargetPoints_FUN_0047f8d0(CZombieDog * this_ptr, CVector3f * out_points_array);
void core_dog_cpp_CZombieDog_getPropertyList_FUN_0047f920(CZombieDog * this_ptr, CActorPropertyList * property_list);
void core_dog_cpp_CZombieDog_FUN_0047f960(CZombieDog * this_ptr);
void core_dog_cpp_CZombieDog_writeDependencies_FUN_0047f970(CZombieDog * this_ptr, FILE * file_handle);
CZombieDog * core_dog_cpp_CZombieDog_dtor_FUN_0047f9a0(CZombieDog * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
void core_door_cpp_staticInit_FUN_0047fa60(void);
CDoor * core_door_cpp_factoryFunc_FUN_0047fa90(void);
CDemonActorType * core_door_cpp_CDoor_getActorType_FUN_0047fac0(CDoor * this_ptr);
CDoor * core_door_cpp_CDoor_ctor_FUN_0047fad0(CDoor * this_ptr);
void core_door_cpp_CDoor_setup_FUN_0047fc70(CDoor * this_ptr);
undefined core_door_cpp_FUN_0047fcf0();
void core_door_cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr);

