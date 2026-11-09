// Name: core_glass.cpp_FUN_004c5640
// Address: 004c5640
// Address Range: [[004c5640, 004c583a]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_FUN_004c5640(CGlass *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_FUN_004c5640(CGlass *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  CGlass *pCVar5;
  uint *puVar6;
  float *pfVar7;
  SMRGLPrimitivePoly *poly;
  byte bVar8;
  uint local_48 [6];
  uint local_30 [6];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar8 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr,0);
  puVar3 = local_30;
  puVar6 = local_48;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041a840(local_48);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)&this_ptr->field_0x4d0);
  }
  else {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)&this_ptr->field_0x4d0);
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,1);
  }
  iVar2 = 0;
  if (0 < *(int *)&this_ptr->field_0xc90) {
    pfVar7 = (float *)&this_ptr->field_0x4e8;
    iVar4 = 0;
    do {
      iStack_18 = (int)ROUND(*pfVar7 * _DAT_005f7a60);
      iStack_14 = (int)ROUND(pfVar7[1] * _DAT_005f7a60);
      iStack_10 = (int)ROUND(pfVar7[2] * _DAT_005f7a60);
      engine_special_cpp_FUN_0055d723
                ((SProjectedVertex *)(*(int *)DAT_0060b280 + iVar4),(CVector3i *)&iStack_18);
      pCVar1 = DAT_0060b280;
      *(uint *)(*(int *)DAT_0060b280 + 0x20 + iVar4) = 0xffff;
      *(uint *)(iVar4 + 0x24 + *(int *)pCVar1) = 0xffff;
      *(uint *)(iVar4 + 0x28 + *(int *)pCVar1) = 0xffff;
      iVar2 = iVar2 + 1;
      pfVar7 = pfVar7 + 3;
      iVar4 = iVar4 + 0x30;
    } while (iVar2 < *(int *)&this_ptr->field_0xc90);
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
            (DAT_0060b280,*(int *)&this_ptr->field_0x2d8);
  iVar2 = 0;
  if (0 < *(int *)&this_ptr->field_0xc94) {
    poly = (SMRGLPrimitivePoly *)&this_ptr->field_0x808;
    pCVar5 = this_ptr;
    do {
      *(uint *)&pCVar5->field_0x810 = 0;
      *(uint *)&pCVar5->field_0x814 = 0;
      pCVar1 = DAT_0060b280;
      *(uint *)&pCVar5->field_0x818 = 0;
      *(uint *)&pCVar5->field_0x81c = 0;
      engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046a3a0(pCVar1,poly);
      pCVar5 = (CGlass *)&pCVar5->field_0x48;
      iVar2 = iVar2 + 1;
      poly = poly + 0x48;
    } while (iVar2 < *(int *)&this_ptr->field_0xc94);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  return;
}
