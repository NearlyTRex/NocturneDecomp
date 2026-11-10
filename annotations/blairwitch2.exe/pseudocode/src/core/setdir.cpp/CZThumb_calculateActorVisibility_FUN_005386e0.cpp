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
  int iVar2;
  uint *puVar3;
  double dVar4;
  int iVar5;
  SRenderVertex *pSVar6;
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
            (DAT_0060b280,(CVector3f *)&actor->field_0x20);
  local_34.x = (actor->orient).vec.x;
  local_34.z = (actor->orient).vec.z;
  local_34.y = (this_ptr->look_at_position).y;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_34,(CVector3f *)0x0);
  iVar7 = 0;
  do {
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + iVar7),bounding_box_vertices);
    bounding_box_vertices = bounding_box_vertices + 1;
    iVar2 = iVar7 + 0x10;
    local_1c = local_1c & *(uint *)(DAT_0060b280->vertex_buffer_ptr + iVar2);
    iVar7 = iVar7 + 0x30;
    local_24 = local_24 | *(uint *)(DAT_0060b280->vertex_buffer_ptr + iVar2);
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
    pSVar6 = DAT_0060b280->vertex_buffer_ptr + iVar7;
    iVar2 = *(int *)(pSVar6 + 8);
    if (0 < iVar2) {
      iVar8 = iVar2 + 0x80;
      *(int *)pSVar6 = (int)(((longlong)*(int *)pSVar6 * (longlong)iVar8) / (longlong)iVar2);
      *(int *)(pSVar6 + 4) =
           (int)(((longlong)*(int *)(pSVar6 + 4) * (longlong)iVar8) / (longlong)*(int *)(pSVar6 + 8)
                );
      *(int *)(pSVar6 + 8) = iVar8;
      engine_matrix_c_projectTransformedPoint_FUN_004e8eb0(pSVar6);
    }
    iVar7 = iVar7 + 0x30;
  } while (iVar7 != 0x180);
  local_50 = 1.0;
  if (apply_scaling != 0) {
    iVar7 = 0;
    do {
      if (((byte)DAT_0060b280->vertex_buffer_ptr[iVar7 + 0x13] & 0x80) != 0) {
        dVar4 = _DAT_005e5fed;
        if (0 < *(int *)(DAT_0060b280->vertex_buffer_ptr + iVar7 + 8)) {
          dVar4 = _DAT_005e5fe5;
        }
        local_50 = local_50 * (float)dVar4;
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
    iVar2 = local_20 * 4;
    iVar8 = 0;
    do {
      puVar3 = (uint *)((int)aiStack_4c + iVar8);
      iVar8 = iVar8 + 4;
      iVar5 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0
                        (DAT_0060b280,(SMRGLPrimitivePoly *)*puVar3);
      iVar7 = iVar7 + iVar5;
    } while (iVar8 < iVar2);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  core_setdir_cpp_CZThumb_popRenderingContext_FUN_00538a30(this_ptr);
  return (float)iVar7 * local_50;
}
