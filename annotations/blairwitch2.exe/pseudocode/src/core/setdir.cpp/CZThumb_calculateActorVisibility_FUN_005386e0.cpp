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
  int *piVar7;
  int iVar8;
  int iVar9;
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
  local_34._0_4_ = *(uint *)&actor->field_0x30;
  local_34._8_4_ = *(uint *)&actor->field_0x38;
  local_34._4_4_ = *(uint *)&this_ptr->field_0x18;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_34,(CVector3f *)0x0);
  iVar8 = 0;
  do {
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + iVar8),bounding_box_vertices);
    bounding_box_vertices = bounding_box_vertices + 0xc;
    uVar3 = *(uint *)(iVar8 + 0x10 + *(int *)DAT_0060b280);
    local_1c = local_1c & uVar3;
    iVar8 = iVar8 + 0x30;
    local_24 = local_24 | uVar3;
  } while (iVar8 != 0x180);
  if (((local_1c & 0x80000000) != 0) && ((char)local_1c != '\0')) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(actor);
    core_setdir_cpp_CZThumb_popRenderingContext_FUN_00538a30(this_ptr);
    return 0.0;
  }
  iVar8 = 0;
  local_20 = 0;
  pSVar1 = primitives + 0x1b0;
  do {
    *(SMRGLHeaderPrimitive **)((int)aiStack_4c + iVar8) = primitives;
    iVar8 = iVar8 + 4;
    local_20 = local_20 + 1;
    primitives = primitives + 0x48;
  } while (primitives != pSVar1);
  iVar8 = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(actor);
  do {
    piVar7 = (int *)(*(int *)DAT_0060b280 + iVar8);
    iVar4 = piVar7[2];
    if (0 < iVar4) {
      iVar9 = iVar4 + 0x80;
      *piVar7 = (int)(((longlong)*piVar7 * (longlong)iVar9) / (longlong)iVar4);
      piVar7[1] = (int)(((longlong)piVar7[1] * (longlong)iVar9) / (longlong)piVar7[2]);
      piVar7[2] = iVar9;
      engine_matrix_c_projectTransformedPoint_FUN_004e8eb0(piVar7);
    }
    iVar8 = iVar8 + 0x30;
  } while (iVar8 != 0x180);
  local_50 = 1.0;
  if (apply_scaling != 0) {
    iVar8 = 0;
    do {
      if ((*(byte *)(*(int *)DAT_0060b280 + iVar8 + 0x13) & 0x80) != 0) {
        dVar5 = _DAT_005e5fed;
        if (0 < *(int *)(*(int *)DAT_0060b280 + iVar8 + 8)) {
          dVar5 = _DAT_005e5fe5;
        }
        local_50 = local_50 * (float)dVar5;
      }
      iVar8 = iVar8 + 0x30;
    } while (iVar8 != 0x180);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00538970(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
            (DAT_0060b280,(uint)((local_24 & 0x80000000) != 0));
  iVar8 = 0;
  if (0 < local_20) {
    iVar4 = local_20 * 4;
    iVar9 = 0;
    do {
      puVar2 = (uint *)((int)aiStack_4c + iVar9);
      iVar9 = iVar9 + 4;
      iVar6 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0
                        (DAT_0060b280,(SMRGLPrimitivePoly *)*puVar2);
      iVar8 = iVar8 + iVar6;
    } while (iVar9 < iVar4);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  core_setdir_cpp_CZThumb_popRenderingContext_FUN_00538a30(this_ptr);
  return (float)iVar8 * local_50;
}
