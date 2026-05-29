// Name: core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
// Address: 00574ba0
// MANUAL RECONSTRUCTION
// Address Range: [[00574ba0, 00574e2e]]
// Convention: __cdecl
// Signature: float __cdecl core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0(CZThumb *this_ptr,CDemonActor *actor,CVector3i *bounding_box_vertices,SMRGLHeaderPrimitive *primitives,int apply_scaling)

#include "nocturne.h"

float __cdecl core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0(CZThumb *this_ptr,CDemonActor *actor,CVector3i *bounding_box_vertices,SMRGLHeaderPrimitive *primitives,int apply_scaling)

{
  int iVar1;
  int iVar6;
  int iVar2;
  SProjectedVertex *point;
  int iVar7;
  int iVar8;
  float local_50;
  SMRGLHeaderPrimitive *aiStack_4c [6];
  CVector3f local_34;
  uint local_24;
  int local_20;
  uint local_1c;
  SMRGLHeaderPrimitive *pSVar1;
  uint uVar3;
  double dVar5;
  int iVar4;
  
  core_setdir_cpp_CZThumb_pushRenderingContext_FUN_00574e70(this_ptr);
  local_1c = 0x800000ff;
  local_24 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(actor->location).position);
  local_34.x = (actor->orient).vec.x;
  local_34.z = (actor->orient).vec.z;
  local_34.y = (this_ptr->look_at_position).y;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_34,(CVector3f *)0x0);
  iVar7 = 0;
  do {
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar7 / 0x30].projected_vertex,
               bounding_box_vertices);
    bounding_box_vertices = bounding_box_vertices + 1;
    uVar3 = (uint)g_CDemonRendererPtr2->vertex_buffer_ptr[iVar7 / 0x30].projected_vertex.screen_x;
    local_1c = local_1c & uVar3;
    iVar7 = iVar7 + 0x30;
    local_24 = local_24 | uVar3;
  } while (iVar7 != 0x180);
  if (((local_1c & 0x80000000) != 0) && ((char)local_1c != '\0')) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(actor);
    core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(this_ptr);
    return 0.0;
  }
  iVar2 = 0;
  local_20 = 0;
  pSVar1 = primitives + 0x12;
  do {
    aiStack_4c[iVar2 / 4] = primitives;
    iVar2 = iVar2 + 4;
    local_20 = local_20 + 1;
    primitives = primitives + 3;
  } while (primitives != pSVar1);
  iVar2 = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(actor);
  do {
    point = &g_CDemonRendererPtr2->vertex_buffer_ptr[iVar2 / 0x30].projected_vertex;
    iVar4 = point->transformed_z;
    if (0 < iVar4) {
      iVar1 = iVar4 + 0x80;
      point->transformed_x =
           (int)(((longlong)point->transformed_x * (longlong)iVar1) / (longlong)iVar4);
      point->transformed_y =
           (int)(((longlong)point->transformed_y * (longlong)iVar1) / (longlong)point->transformed_z
                );
      point->transformed_z = iVar1;
      engine_matrix_c_projectTransformedPoint_FUN_0050cdc0(point);
    }
    iVar2 = iVar2 + 0x30;
  } while (iVar2 != 0x180);
  local_50 = 1.0;
  if (apply_scaling != 0) {
    iVar2 = 0;
    do {
      if ((((byte *)&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar2 / 0x30].projected_vertex.screen_x)
           [3] & 0x80) != 0) {
        dVar5 = 0.0625;
        if (0 < g_CDemonRendererPtr2->vertex_buffer_ptr[iVar2 / 0x30].projected_vertex.transformed_z) {
          dVar5 = 0.5;
        }
        local_50 = local_50 * (float)dVar5;
      }
      iVar2 = iVar2 + 0x30;
    } while (iVar2 != 0x180);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
            (g_CDemonRendererPtr2,(uint)((local_24 & 0x80000000) != 0));
  iVar2 = 0;
  if (0 < local_20) {
    iVar8 = 0;
    do {
      iVar6 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0048aa50
                        (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)aiStack_4c[iVar8 / 4]);
      iVar8 = iVar8 + 4;
      iVar2 = iVar2 + iVar6;
    } while (iVar8 < local_20 * 4);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(this_ptr);
  return (float)iVar2 * local_50;
}
