// Name: core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
// Address: 00574ba0
// Address Range: [[00574ba0, 00574e2e]]
// Convention: __cdecl
// Signature: float core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0(CZThumb * this_ptr, CDemonActor * actor, CVector3i * bounding_box_vertices, SMRGLHeaderPrimitive * primitives, int apply_scaling)

#include "nocturne.h"

float __cdecl
core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
          (CZThumb *this_ptr,CDemonActor *actor,CVector3i *bounding_box_vertices,
          SMRGLHeaderPrimitive *primitives,int apply_scaling)

{
  SMRGLHeaderPrimitive *pSVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  int iVar6;
  SProjectedVertex *point;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int iVar8;
  float fStack_4c;
  int aiStack_48 [6];
  CVector3i local_30;
  uint local_20;
  int local_1c;
  uint local_18;
  
  core_setdir_cpp_CZThumb_pushRenderingContext_FUN_00574e70(this_ptr);
  local_18 = 0x800000ff;
  local_20 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&(actor->location).position);
  local_30.x = (int)(actor->orient).pitch;
  local_30.z = (int)(actor->orient).heading;
  local_30.y = (int)(this_ptr->look_at_position).y;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,&local_30,(CVector3i *)0x0);
  iVar7 = 0;
  do {
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar7),bounding_box_vertices);
    bounding_box_vertices = bounding_box_vertices + 1;
    uVar3 = *(uint *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x +
                     iVar7);
    local_18 = local_18 & uVar3;
    iVar7 = iVar7 + 0x30;
    local_20 = local_20 | uVar3;
  } while (iVar7 != 0x180);
  if (((local_18 & 0x80000000) != 0) && ((char)local_18 != '\0')) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(actor);
    core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(this_ptr);
    return 0.0;
  }
  iVar7 = 0;
  local_1c = 0;
  pSVar1 = primitives + 0x12;
  do {
    *(SMRGLHeaderPrimitive **)((int)aiStack_48 + iVar7) = primitives;
    iVar7 = iVar7 + 4;
    local_1c = local_1c + 1;
    primitives = primitives + 3;
  } while (primitives != pSVar1);
  iVar7 = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(actor);
  do {
    point = (SProjectedVertex *)
            ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x + iVar7)
    ;
    iVar4 = point->transformed_z;
    if (0 < iVar4) {
      iVar8 = iVar4 + 0x80;
      point->transformed_x =
           (int)(((longlong)point->transformed_x * (longlong)iVar8) / (longlong)iVar4);
      point->transformed_y =
           (int)(((longlong)point->transformed_y * (longlong)iVar8) / (longlong)point->transformed_z
                );
      point->transformed_z = iVar8;
      engine_matrix_c_projectTransformedPoint_FUN_0050cdc0(point);
    }
    iVar7 = iVar7 + 0x30;
  } while (iVar7 != 0x180);
  fStack_4c = 1.0;
  if (apply_scaling != 0) {
    iVar7 = 0;
    do {
      if ((*(byte *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x +
                    iVar7 + 3) & 0x80) != 0) {
        dVar5 = 0.0625;
        if (0 < *(int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                               transformed_z + iVar7)) {
          dVar5 = 0.5;
        }
        fStack_4c = fStack_4c * (float)dVar5;
      }
      iVar7 = iVar7 + 0x30;
    } while (iVar7 != 0x180);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
            (g_CDemonRendererPtr,(uint)((local_20 & 0x80000000) != 0));
  iVar7 = 0;
  if (0 < local_1c) {
    iVar4 = local_1c * 4;
    iVar8 = 0;
    do {
      puVar2 = (uint *)((int)aiStack_48 + iVar8);
      iVar8 = iVar8 + 4;
      iVar6 = engine_drender_cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
                        (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)*puVar2);
      iVar7 = iVar7 + iVar6;
    } while (iVar8 < iVar4);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(this_ptr);
  return (float)iVar7 * fStack_4c;
}
