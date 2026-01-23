#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBassPlayer.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDrummer.h"
#include "types/classes/CMatrix3x3d.h"
#include "types/classes/CObj.h"
#include "types/classes/COptimize.h"
#include "types/classes/CP2D.h"
#include "types/classes/CP3D.h"
#include "types/classes/CPoly.h"
#include "types/classes/CSvetlana.h"
#include "types/classes/CTeleport.h"
#include "types/classes/CTeleportDest.h"
#include "types/classes/CTentacle.h"
#include "types/classes/CTextureCache.h"
#include "types/classes/CTextureList.h"
#include "types/classes/CTommyGun.h"
#include "types/classes/CTrap.h"
#include "types/classes/CTrash.h"
#include "types/classes/CTrigger.h"
#include "types/classes/CVec.h"
#include "types/classes/CVector2d.h"
#include "types/classes/CVector3d.h"
#include "types/classes/CVert.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SRGBColorPalette.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x5D0000
// =============================================================================

int __cdecl shape_superopt_cpp_CPoly_rayIntersect_FUN_005d0010(CPoly * this_ptr, CVector3d * ray_origin, CVector3d * ray_end, CVector3d * out_hit_point);
int __cdecl shape_superopt_cpp_CPoly_containsPoint2D_FUN_005d0340(CPoly * this_ptr, CVector2d * point);
double __cdecl shape_superopt_cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0(CPoly * this_ptr, CVec * ray_origin, CVec * ray_dir);
CVector3d * __stack_esi shape_superopt_cpp_CPoly_getCentroid_FUN_005d0d30(CPoly * this_ptr, CVector3d * out_centroid);
int __cdecl shape_superopt_cpp_CPoly_hasSharedEdge_FUN_005d0e20(CPoly * this_ptr, CPoly * other);
int __cdecl shape_superopt_cpp_CPoly_hasSeamlessEdge_FUN_005d0ee0(CPoly * this_ptr, CPoly * other);
int __cdecl shape_superopt_cpp_CPoly_hasCentroidIntersection_FUN_005d1230(CPoly * this_ptr, CPoly * other);
int __cdecl shape_superopt_cpp_CPoly_hasColinearEdge_FUN_005d12d0(CPoly * this_ptr, CPoly * other);
int __cdecl shape_superopt_cpp_CPoly_hasEdgeIntersection_FUN_005d1390(CPoly * this_ptr, CPoly * other);
double __cdecl shape_superopt_cpp_CPoly_computePlaneDistance_FUN_005d1fa0(CPoly * this_ptr);
int __cdecl shape_superopt_cpp_CPoly_isValid_FUN_005d1ff0(CPoly * this_ptr);
CObj * __cdecl shape_superopt_cpp_CObj_ctor_FUN_005d2230(CObj * this_ptr);
CObj * __cdecl shape_superopt_cpp_CObj_dtor_FUN_005d2260(CObj * this_ptr);
void __cdecl shape_superopt_cpp_CObj_reset_FUN_005d2280(CObj * this_ptr);
int __cdecl shape_superopt_cpp_CObj_isValid_FUN_005d22b0(CObj * this_ptr);
int __cdecl shape_superopt_cpp_CObj_init_FUN_005d22d0(CObj * this_ptr, int poly_count, int vertex_count);
int __cdecl shape_superopt_cpp_CObj_allocatePolygons_FUN_005d2320(CObj * this_ptr, int poly_count);
int __cdecl shape_superopt_cpp_CObj_addPolygons_FUN_005d2410(CObj * this_ptr, int add_count);
int __cdecl shape_superopt_cpp_CObj_allocateVertices_FUN_005d2500(CObj * this_ptr, int vertex_count);
int __cdecl shape_superopt_cpp_CObj_addVertices_FUN_005d2580(CObj * this_ptr, int add_count);
void __cdecl shape_superopt_cpp_CObj_free_FUN_005d2600(CObj * this_ptr);
int __cdecl shape_superopt_cpp_CObj_copyFrom_FUN_005d2650(CObj * this_ptr, CObj * source);
int __cdecl shape_superopt_cpp_CObj_appendTo_FUN_005d2720(CObj * this_ptr, CObj * dest_obj);
void __cdecl shape_superopt_cpp_CObj_translate_FUN_005d2880(CObj * this_ptr, CVector3d * offset);
void __cdecl shape_superopt_cpp_CObj_translateMasked_FUN_005d28d0(CObj * this_ptr, uint flag_mask, CVector3d * offset);
void __cdecl shape_superopt_cpp_CObj_scale_FUN_005d2940(CObj * this_ptr, CVector3d * scale, CVector3d * pivot);
void __cdecl shape_superopt_cpp_CObj_scaleMasked_FUN_005d2ac0(CObj * this_ptr, uint flag_mask, CVector3d * scale, CVector3d * pivot);
void __cdecl shape_superopt_cpp_CObj_transform_FUN_005d2c40(CObj * this_ptr, CMatrix3x3d * matrix, CVector3d * pivot);
void __cdecl shape_superopt_cpp_CObj_transformMasked_FUN_005d2dd0(CObj * this_ptr, uint flag_mask, CMatrix3x3d * matrix, CVector3d * pivot);
int __cdecl shape_superopt_cpp_CObj_removePolygon_FUN_005d2f50(CObj * this_ptr, uint index);
int __cdecl shape_superopt_cpp_CObj_findAndRemovePolygon_FUN_005d3020(CObj * this_ptr, CPoly * poly_ptr);
int __cdecl shape_superopt_cpp_CObj_removePolygonsAtVertex_FUN_005d3050(CObj * this_ptr, int vertex_index);
int __cdecl shape_superopt_cpp_CObj_findAndRemovePolygonsUsingVertex_FUN_005d30c0(CObj * this_ptr, CVert * vert_ptr);
int __cdecl shape_superopt_cpp_CObj_removePolygonsByFlag_FUN_005d30f0(CObj * this_ptr, uint flag_mask);
int __cdecl shape_superopt_cpp_CObj_removeVertex_FUN_005d3140(CObj * this_ptr, uint index);
int __cdecl shape_superopt_cpp_CObj_findAndRemoveVertex_FUN_005d3250(CObj * this_ptr, CVert * vertex_ptr);
void __cdecl shape_superopt_cpp_CObj_removeVerticesByFlag_FUN_005d3280(CObj * this_ptr, uint flag_mask);
int __cdecl shape_superopt_cpp_CObj_findVertexIndex_FUN_005d32e0(CObj * this_ptr, CVert * vertex_ptr);
CVert * __cdecl shape_superopt_cpp_CObj_getVertex_FUN_005d3320(CObj * this_ptr, uint index);
int __cdecl shape_superopt_cpp_CObj_containsVertex_FUN_005d3350(CObj * this_ptr, CVert * vertex_ptr);
int __cdecl shape_superopt_cpp_CObj_findPolygonIndex_FUN_005d3380(CObj * this_ptr, CPoly * poly_ptr);
CPoly * __cdecl shape_superopt_cpp_CObj_getPolygon_FUN_005d33d0(CObj * this_ptr, uint index);
int __cdecl shape_superopt_cpp_CObj_containsPolygon_FUN_005d3400(CObj * this_ptr, CPoly * poly_ptr);
void __cdecl shape_superopt_cpp_CObj_setStateFlags_FUN_005d3440(CObj * this_ptr, uint set_mask, uint clear_mask);
void __cdecl shape_superopt_cpp_CObj_setStateFlagIfCondition_FUN_005d34d0(CObj * this_ptr, uint flag_to_set, uint condition_mask);
void __cdecl shape_superopt_cpp_CObj_setStateFlagFromAttrib_FUN_005d3590(CObj * this_ptr, uint flag_to_set, uint attrib_mask);
void __cdecl shape_superopt_cpp_CObj_clearStateFlags_FUN_005d35e0(CObj * this_ptr, uint mask);
void __cdecl shape_superopt_cpp_CObj_setStateFlagToAttrib_FUN_005d3650(CObj * this_ptr, uint set_mask, uint attrib_test);
void __cdecl shape_superopt_cpp_CObj_updatePolyFlagsFromVerts_FUN_005d36b0(CObj * this_ptr, uint mask);
void __cdecl shape_superopt_cpp_CObj_saveVertexPositions_FUN_005d3760(CObj * this_ptr);
void __cdecl shape_superopt_cpp_CObj_saveVertexPositionsWithFlag_FUN_005d37b0(CObj * this_ptr, uint flag_mask);
void __cdecl shape_superopt_cpp_CObj_restoreVertexPositions_FUN_005d3860(CObj * this_ptr);
void __cdecl shape_superopt_cpp_CObj_restoreVertexPositionsWithFlag_FUN_005d38b0(CObj * this_ptr, uint flag_mask);
void __cdecl shape_superopt_cpp_CObj_computeCoplanarAdjacency_FUN_005d3960(CObj * this_ptr, int update_adjacency);
void __cdecl shape_superopt_cpp_CObj_flipAllPolyNormals_FUN_005d3db0(CObj * this_ptr);
void __cdecl shape_superopt_cpp_CObj_flipPolyNormalsWithFlag_FUN_005d3df0(CObj * this_ptr, uint flag_mask);
void __cdecl shape_superopt_cpp_CObj_projectAllPlanarUVs_FUN_005d3e40(CObj * this_ptr, CVector2d * uv_scale);
void __cdecl shape_superopt_cpp_CObj_projectPlanarUVsWithFlag_FUN_005d3e80(CObj * this_ptr, CVector2d * uv_scale, uint flag_mask);
void __cdecl shape_superopt_cpp_CObj_setAllPolyMaterialIds_FUN_005d3ed0(CObj * this_ptr, int material_id);
void __cdecl shape_superopt_cpp_CObj_setPolyMaterialIdsWithFlag_FUN_005d3f10(CObj * this_ptr, int material_id, uint flag_mask);
void __cdecl shape_superopt_cpp_CObj_computeBoundingBox_FUN_005d3f60(CObj * this_ptr, CVector3d * out_min, CVector3d * out_max);
int __cdecl shape_superopt_cpp_CObj_isClosedManifold_FUN_005d4070(CObj * this_ptr);
int __cdecl shape_superopt_cpp_CObj_hasPolyWithMaterial_FUN_005d4110(CObj * this_ptr, int material_id);
int __cdecl shape_superopt_cpp_CObj_weldVertices_FUN_005d4160(CObj * this_ptr, double weld_tolerance, int remove_degenerate);
int __cdecl shape_superopt_cpp_CObj_removeUnusedVertices_FUN_005d44d0(CObj * this_ptr);
int __cdecl shape_superopt_cpp_CObj_removeInvalidPolygons_FUN_005d46f0(CObj * this_ptr);
int __cdecl shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0(CObj * this_ptr, int validate_first);
int __cdecl shape_superopt_cpp_CObj_findCoplanarPolygon_FUN_005d5800(CObj * this_ptr, double coplanar_threshold, CPoly * search_polygon);
int __cdecl shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d * point_a, CVector2d * point_b, CVector2d * point_c, CVector2d * point_d);
int __cdecl shape_superopt_cpp_segmentIntersectsPolygon2D_FUN_005d5de0(CVector2d * polyVerts, uint vertCount, CVector2d * segStart, CVector2d * segEnd, CVector2d * segStart2);
int __cdecl shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60(CVector2d * vertices, uint vertex_count, CVector2d * test_point);
CVector2d * __cdecl shape_superopt_cpp_closestPointOnSegment3D_FUN_005d6020(CVector3d * segment_start, CVector3d * segment_end, CVector3d * query_point);
CVector3d * __cdecl shape_superopt_cpp_projectPointOntoPlane_FUN_005d63d0(CVector3d * point, CVector3d * plane_point, CVector3d * plane_normal);
double __cdecl shape_superopt_cpp_distancePointToSegmentXY_FUN_005d64a0(CVector3d * segStart, CVector3d * segEnd, CVector3d * point);
double __cdecl shape_superopt_cpp_rayPlaneIntersect_FUN_005d6500(CVector3d * ray_origin, CVector3d * ray_dir, CVector3d * plane_point, CVector3d * plane_normal);
double __cdecl shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640(CVector2d * p1, CVector2d * p2, CVector2d * p3);
int __cdecl shape_superopt_cpp_areVectorsCollinear_FUN_005d66e0(CVector3d * vec1, CVector3d * vec2);
int __cdecl shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10(CVector3d * point, CVector3d * segStart, CVector3d * segEnd);
COptimize * __cdecl shape_superopt_cpp_COptimize_ctor_FUN_005d6f90(COptimize * this_ptr);
COptimize * __cdecl shape_superopt_cpp_COptimize_dtor_FUN_005d6fd0(COptimize * this_ptr);
void __cdecl shape_superopt_cpp_COptimize_FUN_005d7000(COptimize * this_ptr);
void __cdecl shape_superopt_cpp_COptimize_FUN_005d70d0(COptimize * this_ptr);
double __cdecl shape_superopt_cpp_COptimize_FUN_005d70f0(COptimize * this_ptr);
void __cdecl shape_superopt_cpp_COptimize_FUN_005d7120(COptimize * this_ptr);
double __cdecl shape_superopt_cpp_COptimize_FUN_005d7140(COptimize * this_ptr);
void __cdecl shape_superopt_cpp_COptimize_FUN_005d7170(COptimize * this_ptr);
double __cdecl shape_superopt_cpp_COptimize_FUN_005d7190(COptimize * this_ptr);
void __cdecl shape_superopt_cpp_COptimize_FUN_005d71c0(COptimize * this_ptr);
int __cdecl shape_superopt_cpp_COptimize_FUN_005d71d0(COptimize * this_ptr);
int __cdecl shape_superopt_cpp_COptimize_FUN_005d71e0(COptimize * this_ptr);
int __cdecl shape_superopt_cpp_COptimize_FUN_005d7290(COptimize * this_ptr);
int __cdecl shape_superopt_cpp_COptimize_FUN_005d7350(COptimize * this_ptr);
void __cdecl shape_superopt_cpp_COptimize_FUN_005d7460(COptimize * this_ptr);
int __cdecl shape_superopt_cpp_COptimize_FUN_005d7690(COptimize * this_ptr);
void __cdecl shape_superopt_cpp_COptimize_FUN_005d76e0(COptimize * this_ptr);
undefined __unknown shape_superopt_cpp_FUN_005d7750();
undefined __unknown shape_superopt_cpp_TriListSomething_FUN_005d77a0();
undefined __unknown shape_superopt_cpp_BonesAndPointsCheck_FUN_005d7e00();
CP3D * __cdecl shape_superopt_cpp_CP3D_ctor_FUN_005d8120(CP3D * this_ptr);
CP2D * __cdecl shape_superopt_cpp_CP2D_ctor_FUN_005d8130(CP2D * this_ptr);
CVec * __cdecl shape_superopt_cpp_CVec_ctor_FUN_005d8140(CVec * this_ptr);
CVec * __cdecl shape_superopt_cpp_CVec_dtor_FUN_005d8150(CVec * this_ptr);
CVec * __cdecl shape_superopt_cpp_CVec_copy_FUN_005d8160(CVec * this_ptr, CVec * other);
undefined __unknown shape_superopt_cpp_FUN_005d8190();
undefined __unknown shape_superopt_cpp_FUN_005d81c0();
undefined __unknown shape_superopt_cpp_FUN_005d8200();
undefined __unknown shape_superopt_cpp_FUN_005d8230();
undefined __unknown shape_superopt_cpp_FUN_005d8270();
undefined __unknown shape_superopt_cpp_FUN_005d82b0();
undefined __unknown shape_superopt_cpp_FUN_005d82e0();
undefined __unknown shape_superopt_cpp_FUN_005d8310();
undefined __unknown shape_superopt_cpp_FUN_005d8330();
undefined __unknown shape_superopt_cpp_FUN_005d8350();
undefined __unknown shape_superopt_cpp_FUN_005d8390();
undefined __unknown shape_superopt_cpp_FUN_005d83d0();
undefined __unknown shape_superopt_cpp_FUN_005d8410();
undefined __unknown shape_superopt_cpp_FUN_005d8440();
undefined __unknown shape_superopt_cpp_FUN_005d8470();
undefined __unknown shape_superopt_cpp_FUN_005d84a0();
undefined __unknown shape_superopt_cpp_FUN_005d84d0();
undefined __unknown shape_superopt_cpp_FUN_005d8520();
undefined __unknown shape_superopt_cpp_FUN_005d8570();
undefined __unknown shape_superopt_cpp_FUN_005d85a0();
undefined __unknown shape_superopt_cpp_FUN_005d85f0();
undefined __unknown shape_superopt_cpp_FUN_005d8630();
undefined __unknown shape_superopt_cpp_FUN_005d8670();
undefined __unknown shape_superopt_cpp_FUN_005d86a0();
undefined __unknown shape_superopt_cpp_FUN_005d86d0();
undefined __unknown shape_superopt_cpp_FUN_005d8710();
CP2D * __cdecl shape_superopt_cpp_CP2D_dtor_FUN_005d87c0(CP2D * this_ptr);
CP3D * __cdecl shape_superopt_cpp_CP3D_dtor_FUN_005d87d0(CP3D * this_ptr);
CDemonActorType * __cdecl core_svetlana_cpp_staticInit_FUN_005d87e0(void);
undefined __unknown core_svetlana_cpp_FUN_005d8810();
CDemonActorType * __cdecl core_svetlana_cpp_CSvetlana_getActorType_FUN_005d8840(CSvetlana * this_ptr);
CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005d8850(CSvetlana * this_ptr);
void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d88e0(CSvetlana * this_ptr);
void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_005d8ba0(CSvetlana * this_ptr, float delta_time);
undefined __unknown core_svetlana_cpp_FUN_005d9260();
undefined __unknown core_svetlana_cpp_MotionControllerAdvance_ParentBones_FUN_005d9970();
undefined __unknown core_svetlana_cpp_AttackWithParentBone_FUN_005d9a10();
void __cdecl core_svetlana_cpp_CSVetlana_serialize_FUN_005d9bb0(CSvetlana * this_ptr);
int __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9bc0(CSvetlana * this_ptr);
undefined __unknown core_svetlana_cpp_FUN_005d9d30();
undefined __unknown core_svetlana_cpp_FUN_005d9ec0();
undefined __unknown core_svetlana_cpp_FUN_005d9ed0();
undefined __unknown core_svetlana_cpp_FUN_005d9ee0();
void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9ef0(CSvetlana * this_ptr);
void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9f10(CSvetlana * this_ptr);
void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9f30(CSvetlana * this_ptr);
CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_005d9f50(CSvetlana * this_ptr, uint d1, uint d2, uint d3, uint d4);
CDemonActorType * __cdecl core_tbplayer_cpp_staticInit_FUN_005d9fd0(void);
undefined __unknown core_tbplayer_cpp_FUN_005da020();
CDemonActorType * __cdecl core_tbplayer_cpp_CBassPlayer_getActorType_FUN_005da050(CBassPlayer * this_ptr);
CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_ctor_FUN_005da060(CBassPlayer * this_ptr);
void __cdecl core_tbplayer_cpp_CBassPlayer_FUN_005da090(CBassPlayer * this_ptr);
undefined __unknown core_tbplayer_cpp_FUN_005da100();
undefined __unknown core_tbplayer_cpp_FUN_005da120();
undefined __unknown core_tbplayer_cpp_FUN_005da240();
undefined __unknown core_tbplayer_cpp_FUN_005da280();
CDemonActorType * __cdecl core_tbplayer_cpp_CDrummer_getActorType_FUN_005da2b0(CDrummer * this_ptr);
CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_005da2c0(CDrummer * this_ptr);
void __cdecl core_tbplayer_cpp_CDrummer_FUN_005da2f0(CDrummer * this_ptr);
undefined __unknown core_tbplayer_cpp_FUN_005da370();
undefined __unknown core_tbplayer_cpp_FUN_005da510();
CDrummer * __cdecl core_tbplayer_cpp_CDrummer_dtor_FUN_005da540(CDrummer * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9);
CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_dtor_FUN_005da610(CBassPlayer * this_ptr);
CDemonActorType * __cdecl core_teleport_cpp_staticInit_FUN_005da6e0(void);
undefined __unknown core_teleport_cpp_FUN_005da730();
CDemonActorType * __cdecl core_teleport_cpp_CTeleportDest_getActorType_FUN_005da760(CTeleportDest * this_ptr);
CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_005da770(CTeleportDest * this_ptr);
void __cdecl core_teleport_cpp_CTeleportDest_FUN_005da790(CTeleportDest * this_ptr);
int __cdecl core_teleport_cpp_CTeleport_FUN_005da7c0(CTeleport * this_ptr);
int __cdecl core_teleport_cpp_CTeleportDest_FUN_005da7d0(CTeleportDest * this_ptr);
undefined __unknown core_teleport_cpp_FUN_005da850();
void __cdecl core_teleport_cpp_CTeleportDest_FUN_005da870(CTeleportDest * this_ptr);
void __cdecl core_teleport_cpp_CTeleportDest_FUN_005da970(CTeleportDest * this_ptr);
undefined __unknown core_teleport_cpp_FUN_005da9a0();
CDemonActorType * __cdecl core_teleport_cpp_CTeleport_getActorType_FUN_005da9d0(CTeleport * this_ptr);
CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_005da9e0(CTeleport * this_ptr);
void __cdecl core_teleport_cpp_CTeleport_process_FUN_005daa20(CTeleport * this_ptr, float delta_time);
void __cdecl core_teleport_cpp_CTeleport_FUN_005daad0(CTeleport * this_ptr);
void __cdecl core_teleport_cpp_CTeleport_serialize_FUN_005dab30(CTeleport * this_ptr);
void __cdecl core_teleport_cpp_CTeleport_FUN_005dab70(CTeleport * this_ptr);
void __cdecl core_teleport_cpp_CTeleport_FUN_005daba0(CTeleport * this_ptr);
void __cdecl core_teleport_cpp_CTeleport_FUN_005dabe0(CTeleport * this_ptr);
void __cdecl core_teleport_cpp_CTeleport_FUN_005dadc0(CTeleport * this_ptr);
int __cdecl core_teleport_cpp_CTeleport_FUN_005dae10(CTeleport * this_ptr);
CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_005dae50(CTeleport * this_ptr, uint d1, uint d2);
CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_005daea0(CTeleportDest * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_tentacle_cpp_staticInit_FUN_005daef0(void);
undefined __unknown core_tentacle_cpp_FUN_005daf20();
CDemonActorType * __cdecl core_tentacle_cpp_CTentacle_getActorType_FUN_005daf50(CTentacle * this_ptr);
CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_005daf60(CTentacle * this_ptr);
void __cdecl core_tentacle_cpp_CTentacle_FUN_005dafc0(CTentacle * this_ptr);
void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005db050(CTentacle * this_ptr, float delta_time);
int __cdecl core_tentacle_cpp_CTentacle_FUN_005db840(CTentacle * this_ptr);
void __cdecl core_tentacle_cpp_CTentacle_serialize_FUN_005db880(CTentacle * this_ptr);
undefined __unknown core_tentacle_cpp_FUN_005db900();
undefined __unknown core_tentacle_cpp_FUN_005db9d0();
int __cdecl core_tentacle_cpp_CTentacle_FUN_005dbb30(CTentacle * this_ptr);
undefined __unknown core_tentacle_cpp_FUN_005dbb70();
void __cdecl core_tentacle_cpp_CTentacle_FUN_005dbc60(CTentacle * this_ptr);
void __cdecl core_tentacle_cpp_CTentacle_FUN_005dbcc0(CTentacle * this_ptr);
CTentacle * __cdecl core_tentacle_cpp_CTentacle_dtor_FUN_005dbcf0(CTentacle * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
void __cdecl core_texlist_cpp_staticInit_FUN_005dbdb0(void);
CTextureList * __cdecl core_texlist_cpp_CTextureList_ctor_FUN_005dbdd0(CTextureList * this_ptr);
CTextureList * __cdecl core_texlist_cpp_CTextureList_dtor_FUN_005dbdf0(CTextureList * this_ptr);
void __cdecl core_texlist_cpp_CTextureList_load_FUN_005dbe00(CTextureList * this_ptr, char * filename);
void __cdecl core_texlist_cpp_CTextureList_save_FUN_005dc0d0(CTextureList * this_ptr, char * filename);
void __cdecl core_texlist_cpp_CTextureList_captureAllTextures_FUN_005dc230(CTextureList * this_ptr);
void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_005dc270(CTextureList * this_ptr, uint texture_index);
void __cdecl core_texlist_cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0(CTextureList * this_ptr);
int __cdecl core_texlist_cpp_CTextureList_addTextureSelection_FUN_005dc5e0(CTextureList * this_ptr, char * filename);
void __cdecl core_texlist_cpp_CTextureList_addMasterTextureSelection_FUN_005dc68e(CTextureList * this_ptr);
void __cdecl core_texlist_cpp_CTextureList_setCurrentMasterIndex_FUN_005dc6a0(CTextureList * this_ptr, uint master_index);
void __cdecl core_texlist_cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0(CTextureList * this_ptr, char * filename);
void __cdecl core_texlist_cpp_CTextureList_previewTexture_FUN_005dc760(CTextureList * this_ptr);
void __cdecl core_texlist_cpp_CTextureList_renderTexture_FUN_005dca30(CTextureList * this_ptr);
CTextureCache * __cdecl engine_texture_cpp_CTextureCache_ctor_FUN_005dcab0(CTextureCache * this_ptr, int max_texture_count);
int __cdecl engine_texture_cpp_CTextureCache_free_FUN_005dcb00(CTextureCache * this_ptr);
void __cdecl engine_texture_cpp_CTextureCache_dtor_FUN_005dcb20(CTextureCache * cache);
void __cdecl engine_texture_cpp_CTextureCache_free_FUN_005dcb30(CTextureCache * cache);
void __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache * cache, char * texture_name);
int __cdecl engine_texture_cpp_CTextureCache_findTexture_FUN_005dd180(CTextureCache * this_ptr, int hint_index, char * texture_name);
void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_005dd200(CTextureCache * cache, int texture_index);
int __cdecl engine_texture_cpp_CTextureCache_getTextureCount_FUN_005dd570(CTextureCache * this_ptr);
void __cdecl engine_texture_cpp_CTextureCache_renderAllTextures_FUN_005dd580(CTextureCache * this_ptr);
int __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_005dd690(CTextureCache * this_ptr, char * output_buffer);
CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_005dd760(void);
void __cdecl engine_texture_cpp_freeTextureCache_FUN_005dd7a0(void);
SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture);
SMRGLHeaderExtended * __cdecl engine_texture_cpp_loadTextureAndGetData_FUN_005dd8c0(SMRGLTextureBasic * texture_info);
void __cdecl engine_texture_cpp_clearTextureCache_FUN_005dd8e0(void);
void __cdecl engine_texture_cpp_doNothing_FUN_005dd8f0(void);
void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_005dd900(SMRGLTextureBasic * texture_to_load, SMRGLTextureBasic * texture_to_update);
void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_005dd930(SMRGLTextureBasic * tex_to_load, SMRGLTextureBasic * tex_to_update, SRGBColorPalette * palette_data);
void __cdecl engine_texture_cpp_enableTextureFiltering_FUN_005dd960(int enabled);
void __cdecl engine_texture_cpp_getTextureCacheStats_FUN_005dd970(char * output_buffer);
void __cdecl engine_texture_cpp_renderTextureAtlas_FUN_005dd990(void);
SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_005dd9c0(void);
CDemonActorType * __cdecl core_tommygun_cpp_staticInit_FUN_005dda20(void);
undefined __unknown core_tommygun_cpp_FUN_005dda50();
CDemonActorType * __cdecl core_tommygun_cpp_CTommyGun_getActorType_FUN_005dda80(CTommyGun * this_ptr);
int __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(CTommyGun * this_ptr);
undefined __unknown core_tommygun_cpp_FUN_005ddb30();
undefined __unknown core_tommygun_cpp_FUN_005de330();
void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_005de360(CTommyGun * this_ptr, float delta_time);
undefined __unknown core_tommygun_cpp_FUN_005de5a0();
CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_005de5d0(CTommyGun * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_trap_cpp_staticInit_FUN_005de620(void);
undefined __unknown core_trap_cpp_FUN_005de650();
CDemonActorType * __cdecl core_trap_cpp_CTrap_getActorType_FUN_005de680(CTrap * this_ptr);
CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_005de690(CTrap * this_ptr);
void __cdecl core_trap_cpp_CTrap_FUN_005de6e0(CTrap * this_ptr);
int __cdecl core_trap_cpp_CTrap_FUN_005de710(CTrap * this_ptr);
int __cdecl core_trap_cpp_CTrap_FUN_005de720(CTrap * this_ptr);
void __cdecl core_trap_cpp_CTrap_FUN_005de740(CTrap * this_ptr);
void __cdecl core_trap_cpp_CTrap_FUN_005de750(CTrap * this_ptr);
int __cdecl core_trap_cpp_CTrap_FUN_005de760(CTrap * this_ptr);
void __cdecl core_trap_cpp_CTrap_process_FUN_005de770(CTrap * this_ptr, float delta_time);
int __cdecl core_trap_cpp_CTrap_FUN_005de920(CTrap * this_ptr);
void __cdecl core_trap_cpp_CTrap_serialize_FUN_005de9c0(CTrap * this_ptr);
int * __cdecl core_trap_cpp_CTrap_FUN_005dea00(CTrap * this_ptr);
void __cdecl core_trap_cpp_CTrap_FUN_005dea50(CTrap * this_ptr);
void __cdecl core_trap_cpp_CTrap_FUN_005dea90(CTrap * this_ptr);
CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_005deab0(CTrap * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_trash_cpp_staticInit_FUN_005deb00(void);
undefined __unknown core_trash_cpp_FUN_005deb30();
CDemonActorType * __cdecl core_trash_cpp_CTrash_getActorType_FUN_005deb60(CTrash * this_ptr);
CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_005deb70(CTrash * this_ptr);
void __cdecl core_trash_cpp_CTrash_FUN_005debc0(CTrash * this_ptr);
void __cdecl core_trash_cpp_CTrash_serialize_FUN_005dec80(CTrash * this_ptr);
undefined __unknown core_trash_cpp_FUN_005decc0();
void __cdecl core_trash_cpp_CTrash_process_FUN_005decf0(CTrash * this_ptr, float delta_time);
int __cdecl core_trash_cpp_CTrash_FUN_005df550(CTrash * this_ptr);
float * __cdecl core_trash_cpp_CTrash_FUN_005df610(CTrash * this_ptr);
int __cdecl core_trash_cpp_CTrash_FUN_005df6d0(CTrash * this_ptr);
void __cdecl core_trash_cpp_CTrash_FUN_005df6e0(CTrash * this_ptr);
void __cdecl core_trash_cpp_CTrash_FUN_005df720(CTrash * this_ptr);
void __cdecl core_trash_cpp_CTrash_FUN_005df750(CTrash * this_ptr);
CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_005df780(CTrash * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_trigger_cpp_staticInit_FUN_005df7d0(void);
undefined __unknown core_trigger_cpp_FUN_005df800();
CDemonActorType * __cdecl core_trigger_cpp_CTrigger_getActorType_FUN_005df830(CTrigger * this_ptr);
CTrigger * __cdecl core_trigger_cpp_CTrigger_ctor_FUN_005df840(CTrigger * this_ptr);
void __cdecl core_trigger_cpp_CTrigger_FUN_005df990(CTrigger * this_ptr);
void __cdecl core_trigger_cpp_CTrigger_process_FUN_005dfac0(CTrigger * this_ptr, float delta_time);

