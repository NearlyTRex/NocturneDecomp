#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonCamera.h"
#include "types/classes/CDemonCube.h"
#include "types/classes/CDemonCubeFrustum.h"
#include "types/classes/CDemonCubeTriangle.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CRect.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SCorona.h"
#include "types/structs/SEdgeData.h"
#include "types/structs/SFog.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/SScreenCoord.h"
#include "types/structs/SShapeEditorPolygon.h"
#include "types/structs/STreeNode.h"
#include "types/structs/SVertexData.h"
#include "types/structs/SVoxelGridParams.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x450000
// =============================================================================

void core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0(void);
void core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y);
void core_dcamera_cpp_renderVolumetricLightScanline_FUN_00450440(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y);
void core_dcamera_cpp_renderFlatColorScanline_FUN_004505e0(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y);
void core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_004507a0(int scanline_y, int x_start, int x_end);
void core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0(CDemonCamera * this_ptr);
double core_dcamera_cpp_log2Custom_FUN_00450a90(void);
void core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0(CDemonCamera * this_ptr, CDemonLight * light_source);
void core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30(CDemonCamera * this_ptr, CDemonLight * light_source);
int core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0(CDemonCamera * this_ptr, CDemonLight * light_source);
void core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090(CDemonCamera * this_ptr, CDemonLight * light, CRect * out_bounds);
void core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130(CDemonCamera * this_ptr);
int core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0(CDemonCamera * this_ptr);
int core_dcamera_cpp_testCoronaVisibility_FUN_00451250(int start_x, int start_y, int depth_reciprocal);
void core_dcamera_cpp_renderCoronaScanlineSegment_FUN_00451340(int row_index, int column_start, int column_end);
void core_dcamera_cpp_processCoronaScanline_FUN_004514b0(int row, int x_start, int x_end, SCorona * corona_buffer);
void core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0(int scanline_y, int x_start, int x_end, int source_buffer_offset);
void core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0(CDemonCamera * this_ptr, void * p1, int p2);
void core_dcamera_cpp_transformAndStoreVertex_FUN_00452110(int vertex_index, float x, float y, float z);
int core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180(CDemonCamera * this_ptr, CVector3f * position, CVector3f * min_corner, CVector3f * max_corner);
int core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00452730(CDemonCamera * this_ptr, CVector3f * position, float radius);
void core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera * this_ptr, float intensity);
void core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_00452900(CDemonCamera * this_ptr, CVector3f * output_ray, CVector3i * screen_coords, int depth);
void core_dcamera_cpp_CDemonCamera_generateFogGrid_FUN_004529a0(CDemonCamera * this_ptr);
void core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_004529b0(CDemonCamera * this_ptr);
void core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020(CDemonCamera * this_ptr, int plane_index);
void core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00453160(CDemonCamera * this_ptr, int plane_index, uint blend_alpha);
void core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270(CDemonCamera * this_ptr);
void core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera * this_ptr, SFog * fog_config);
int core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700(CDemonCamera * this_ptr, CVector3i * world_position);
void core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0(CDemonCamera * this_ptr, CVector3f * position, float max_distance);
void core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_004538c0(CDemonCamera * this_ptr, SRenderVertex * vertex);
void core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00453950(CDemonCamera * this_ptr, int alpha_index);
CVector3i * core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70(CDemonCamera * this_ptr, CVector3i * screen_pos, int alpha_index, CVector3i * world_pos);
void core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(CDemonCamera * this_ptr, int gamma_value);
void core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90(CDemonCamera * this_ptr, int clear_color);
void core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10(CDemonCamera * this_ptr, int screen_x, int screen_y, int offset);
void core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0(CDemonCamera * this_ptr, int screen_x, int screen_y, int offset);
void core_dcamera_cpp_loadCameraFog_FUN_00453e50(SFog * fog, FILE * file_handle, int file_version);
void core_dcamera_cpp_saveCameraFog_FUN_00453f10(SFog * fog, FILE * file_handle);
void core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00453fc0(CDemonCamera * this_ptr, float peak_intensity, float attack_time, float sustain_duration, float decay_time);
CVector3f * core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060(CDemonCamera * this_ptr, CVector3f * output_vectors, CBoundingBox3D * bounding_box);
void core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450(CDemonCamera * this_ptr);
void core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0(CDemonCamera * this_ptr);
int core_dcamera_cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0(CDemonCamera * this_ptr, CVector3i * corners);
void core_dcamera_cpp_freeVectors_FUN_00454700(CVector3f * * array);
void core_dcube_cpp_staticInit_FUN_00454720(void);
void core_dcube_cpp_copyVector3_FUN_004547b0(CVector3f * dest, CVector3f * src);
void core_dcube_cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, double plane_ny, double plane_nz, double plane_d);
void core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00454970(float max_y_plane);
void core_dcube_cpp_clipPolygonAgainstMinY_FUN_00454ad0(float min_y_plane);
void core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00454c40(float max_x_plane);
void core_dcube_cpp_clipPolygonAgainstMinX_FUN_00454da0(float min_x_plane);
void core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00454f00(float min_z_plane);
void core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455070(float max_z_plane);
void core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0(CDemonCubeTriangle * this_ptr, FILE * file_handle, CVector3f * vertex_buffer_base);
void core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455250(CDemonCubeTriangle * this_ptr, FILE * file_handle, CVector3f * vertex_buffer_base);
void core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0(CDemonCubeTriangle * this_ptr);
void core_dcube_cpp_CDemonCubeTriangle_ctor_FUN_00455430(CDemonCubeTriangle * this_ptr, CVector3f * vertex0, CVector3f * vertex1, CVector3f * vertex2);
float core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460(CDemonCubeTriangle * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction);
int core_dcube_cpp_intersectXZCapsule_FUN_004556b0(SIntersectXZCylinder * cylinder);
int core_dcube_cpp_intersectXZCapsuleWithHeight_FUN_00455990(SIntersectXZCylinder * cylinder, CVector3f * segment_start, CVector3f * segment_end);
uint core_dcube_cpp_intersectTriangleWithXZCapsule_FUN_00455a30(CVector3f * * triangle_vertices, SIntersectXZCylinder * cylinder);
uint core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0(CVector3f * segment_start, CVector3f * segment_end, float radius, float * out_height);
uint core_dcube_cpp_triangleCylinderCollision_FUN_00456040(CDemonCubeTriangle * triangle, CVector3f * cylinder_center, float cylinder_radius, float * out_height);
uint core_dcube_cpp_clipTriangleToAABB_FUN_00456400(CVector3f * * triangle_vertices, CVector3f * aabb_min, CVector3f * aabb_max);
void core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_004566e0(CVector3f * * triangle_vertex_pointers, CVector3f * vertex_buffer);
CDemonCube * core_dcube_cpp_CDemonCube_ctor_FUN_00456750(CDemonCube * this_ptr);
CDemonCube * core_dcube_cpp_CDemonCube_dtor_FUN_00456790(CDemonCube * this_ptr);
void core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(CDemonCube * this_ptr);
void core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(CDemonCube * this_ptr);
void core_dcube_cpp_CDemonCube_freeMemory_FUN_004569b0(CDemonCube * this_ptr);
void core_dcube_cpp_CDemonCube_setBounds_FUN_00456a90(CDemonCube * this_ptr, CVector3f * min_bounds, CVector3f * max_bounds);
void core_dcube_cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0(CDemonCubeFrustum * frustum, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, uchar texture_id);
void core_dcube_cpp_CDemonCube_buildGeometryFromPolygonData(CDemonCube * this_ptr);
void core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0(CDemonCube * this_ptr, void * triangle_data, int triangle_count, CVector3f * min_bounds, CVector3f * max_bounds, uchar * ground_types, uint * voxel_data);
void core_dcube_cpp_CDemonCube_save_FUN_00457430(CDemonCube * this_ptr, FILE * file_handle);
void core_dcube_cpp_CDemonCube_load_FUN_00457530(CDemonCube * this_ptr, FILE * file_handle);
void core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457650(CDemonCube * this_ptr, uint rendering_mode);
float core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0(CDemonCube * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * hit_normal, uint * hit_material);
void core_dcube_cpp_CDemonCube_testCapsuleCollision_FUN_00457a90(CDemonCube * this_ptr, SIntersectXZCylinder * capsule_data);
int core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60(CDemonCube * this_ptr, CVector3f * cylinder_position, float cylinder_radius, CVector3f * output_height, CVector3f * output_normal, uint * output_material);
int core_dcube_cpp_CDemonCube_testAABBIntersection_FUN_00457ca0(CDemonCube * this_ptr, CVector3f * aabb_min, CVector3f * aabb_max);
void core_dcube_cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0(SVoxelGridParams * params);
void core_dcube_cpp_freeVectors_FUN_00457eb0(CVector3f * * array);
STreeNode * shape_design_c_allocateSpatialTreeNode_FUN_00457ed0(void);
void shape_design_c_showHelpFile_FUN_00457f00(char * help_filename);
void shape_design_c_writeBinaryTreeNode_FUN_00457fd0(STreeNode * node, FILE * file, int depth);
STreeNode * shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(FILE * file);
int shape_design_c_loadModelBinary_FUN_00458170(char * filename);
int shape_design_c_promptForModelNameAndLoad_FUN_00458a10(void);
int shape_design_c_loadModelFile_FUN_00458ac0(char * filename);
void shape_design_c_skipLines_FUN_00459360(FILE * file, int line_count);
int shape_design_c_loadS3DModelFile_FUN_004593a0(char * filename);
int shape_design_c_validateModelTextures_FUN_00459a20(char * directory_path, int mode);
void shape_design_c_saveCurrentModel_FUN_00459de0(void);
void shape_design_c_exportModelToMDL_FUN_00459e80(char * mdl_filename);
void shape_design_c_writeSpatialTree_FUN_0045a200(STreeNode * node, FILE * output_file, int node_index);
void shape_design_c_writePolygonModel_FUN_0045a320(int polygon_index, FILE * output_file, float scale_factor);
void shape_design_c_exportVertexListFile_FUN_0045a610(void);
void shape_design_c_modelExportWizard_FUN_0045a7b0(int export_format_type);
void shape_design_c_exportModelToBIN_FUN_0045aa80(char * filename, int depth_mode, int scale_mode, int export_format, int include_textures);
int shape_design_c_polygonTextureNameComparator_FUN_0045b850(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2);
void shape_design_c_sortPolygonsByTexture_FUN_0045b8b0(void);
void shape_design_c_handleEditorHotkeys_FUN_0045b990(void);
void shape_design_c_setupViewMatrix_FUN_0045ba60(void);
void shape_design_c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0(void);
void * shape_design_c_convertWorldToScreenCoordinates_FUN_0045bd10(SScreenCoord * input_coords, SVertexData * output_vertex);
void shape_design_c_calculateVertexNormals_FUN_0045be40(void);
void shape_design_c_renderVertexPointsWithLabels_FUN_0045bff0(void);
void shape_design_c_renderPolygonVerticesWithLabels_FUN_0045c2f0(int polygon_index);
void shape_design_c_doNothing_FUN_0045c4f0(void);
void shape_design_c_doNothing_FUN_0045c510(void);
void shape_design_c_selectVertexToMove_FUN_0045c530(void);
void shape_design_c_selectVertexToDelete_FUN_0045c5b0(void);
void shape_design_c_showPointEditor_FUN_0045c6c0(void);
void shape_design_c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon);
undefined shape_design_c_createPolygonFromVertexList_FUN_0045cc80();
undefined shape_design_c_doNothing_FUN_0045ce00();
void shape_design_c_renderSinglePolygon_FUN_0045ce20(int polygon_index);
void shape_design_c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(int polygon_index, int * color_value);
void shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive * polygon_data);
void shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470(SMRGLHeaderPrimitive * polygon_data, int line_color);
void shape_design_c_processVerticesAndRenderPolygons_FUN_0045d5d0(void);
void shape_design_c_renderEditorBackgroundOverlay_FUN_0045d920(void);
undefined shape_design_c_showPolygonDetailsList_FUN_0045d9c0();
undefined shape_design_c_showModelPartsList_FUN_0045dbe0();
undefined shape_design_c_deleteSinglePolygon_FUN_0045dcc0();
undefined shape_design_c_deletePolygonRange_FUN_0045dd70();
undefined shape_design_c_selectModelPart_FUN_0045de80();
undefined shape_design_c_createQuadPolygon_FUN_0045df60();
undefined shape_design_c_createReversedQuadPolygon_FUN_0045e040();
undefined shape_design_c_createRotationalSweepGeometry_FUN_0045e070();
undefined shape_design_c_createBoxPrimitive_FUN_0045e520();
undefined shape_design_c_centerVerticesAroundPoint_FUN_0045ea90();
undefined shape_design_c_translateAllVerticesAlongAxis_FUN_0045ec90();
void shape_design_c_realignObject_FUN_0045ee70(int rotation_x, int rotation_y, int rotation_z);
void shape_design_c_clampAndTransformUVCoordinates_FUN_0045f080(void);
void shape_design_c_showFacetPartEditor_FUN_0045f1d0(void);

