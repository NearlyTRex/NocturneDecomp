// Name: core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_005386e0
// Address: 005386e0
// Address Range: [[005386e0, 0053896e]]
// Convention: __cdecl
// Signature: float __cdecl core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_005386e0(CZThumb *this_ptr,CDemonActor *actor,CVector3i *bounding_box_vertices,SMRGLHeaderPrimitive *primitives,int apply_scaling)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_005386e0(CZThumb *this_ptr,CDemonActor *actor,CVector3i *bounding_box_vertices,SMRGLHeaderPrimitive *primitives,int apply_scaling)

{
  SMRGLHeaderPrimitive *pSVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  int iVar6;
  SProjectedVertex *point;
  int iVar7;
  int iVar8;
  float local_50;
  int aiStack_4c [6];
  CVector3f local_34;
  uint local_24;
  int local_20;
  uint local_1c;
  
  core_setdir_cpp_CZThumb_pushRenderingContext_FUN_005389b0(this_ptr);
  local_1c = 0x800000ff;
  local_24 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,&(actor->location).position);
  local_34.x = (actor->orient).vec.x;
  local_34.z = (actor->orient).vec.z;
  local_34.y = (this_ptr->look_at_position).y;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_34,(CVector3f *)0x0);
  iVar7 = 0;
  do {
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)
               ((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_x + iVar7),
               bounding_box_vertices);
    bounding_box_vertices = bounding_box_vertices + 1;
    uVar3 = *(uint *)((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).screen_x + iVar7);
    local_1c = local_1c & uVar3;
    iVar7 = iVar7 + 0x30;
    local_24 = local_24 | uVar3;
  } while (iVar7 != 0x180);
  if (((local_1c & 0x80000000) != 0) && ((char)local_1c != '\0')) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(actor);
    core_setdir_cpp_CZThumb_popRenderingContext_FUN_00538a30(this_ptr);
    return 0.0;
  }
  iVar7 = 0;
  local_20 = 0;
  pSVar1 = primitives + 0x12;
  do {
    *(SMRGLHeaderPrimitive **)((int)aiStack_4c + iVar7) = primitives;
    iVar7 = iVar7 + 4;
    local_20 = local_20 + 1;
    primitives = primitives + 3;
  } while (primitives != pSVar1);
  iVar7 = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(actor);
  do {
    point = (SProjectedVertex *)
            ((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_x + iVar7);
    iVar4 = point->transformed_z;
    if (0 < iVar4) {
      iVar8 = iVar4 + 0x80;
      point->transformed_x =
           (int)(((longlong)point->transformed_x * (longlong)iVar8) / (longlong)iVar4);
      point->transformed_y =
           (int)(((longlong)point->transformed_y * (longlong)iVar8) / (longlong)point->transformed_z
                );
      point->transformed_z = iVar8;
      engine_matrix_c_projectTransformedPoint_FUN_004e8eb0(point);
    }
    iVar7 = iVar7 + 0x30;
  } while (iVar7 != 0x180);
  local_50 = 1.0;
  if (apply_scaling != 0) {
    iVar7 = 0;
    do {
      if ((*(byte *)((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).screen_x + iVar7 + 3)
          & 0x80) != 0) {
        dVar5 = _DAT_005e5fed;
        if (0 < *(int *)((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_z +
                        iVar7)) {
          dVar5 = _DAT_005e5fe5;
        }
        local_50 = local_50 * (float)dVar5;
      }
      iVar7 = iVar7 + 0x30;
    } while (iVar7 != 0x180);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00538970(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
            (DAT_0060b280,(uint)((local_24 & 0x80000000) != 0));
  iVar7 = 0;
  if (0 < local_20) {
    iVar4 = local_20 * 4;
    iVar8 = 0;
    do {
      puVar2 = (uint *)((int)aiStack_4c + iVar8);
      iVar8 = iVar8 + 4;
      iVar6 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0
                        (DAT_0060b280,(SMRGLPrimitivePoly *)*puVar2);
      iVar7 = iVar7 + iVar6;
    } while (iVar8 < iVar4);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  core_setdir_cpp_CZThumb_popRenderingContext_FUN_00538a30(this_ptr);
  return (float)iVar7 * local_50;
}
