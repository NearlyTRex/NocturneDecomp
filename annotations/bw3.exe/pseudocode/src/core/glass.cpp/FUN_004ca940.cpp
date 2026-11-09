// Name: core_glass.cpp_FUN_004ca940
// Address: 004ca940
// Address Range: [[004ca940, 004cab3a]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_FUN_004ca940(CGlass *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_FUN_004ca940(CGlass *this_ptr)

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
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
  puVar3 = local_30;
  puVar6 = local_48;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041daf0(local_48);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)&this_ptr->field_0x3a4);
  }
  else {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)&this_ptr->field_0x3a4);
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,1);
  }
  iVar2 = 0;
  if (0 < *(int *)&this_ptr->field_0xb64) {
    pfVar7 = (float *)&this_ptr->field_0x3bc;
    iVar4 = 0;
    do {
      iStack_18 = (int)ROUND(*pfVar7 * _DAT_005e0bc0);
      iStack_14 = (int)ROUND(pfVar7[1] * _DAT_005e0bc0);
      iStack_10 = (int)ROUND(pfVar7[2] * _DAT_005e0bc0);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + iVar4),(CVector3i *)&iStack_18);
      pCVar1 = DAT_005f2afc;
      *(uint *)(*(int *)DAT_005f2afc + 0x20 + iVar4) = 0xffff;
      *(uint *)(iVar4 + 0x24 + *(int *)pCVar1) = 0xffff;
      *(uint *)(iVar4 + 0x28 + *(int *)pCVar1) = 0xffff;
      iVar2 = iVar2 + 1;
      pfVar7 = pfVar7 + 3;
      iVar4 = iVar4 + 0x30;
    } while (iVar2 < *(int *)&this_ptr->field_0xb64);
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
            (DAT_005f2afc,*(int *)&this_ptr->field_0x1ac);
  iVar2 = 0;
  if (0 < *(int *)&this_ptr->field_0xb68) {
    poly = (SMRGLPrimitivePoly *)&this_ptr->field_0x6dc;
    pCVar5 = this_ptr;
    do {
      *(uint *)&pCVar5->field_0x6e4 = 0;
      *(uint *)&pCVar5->field_0x6e8 = 0;
      pCVar1 = DAT_005f2afc;
      *(uint *)&pCVar5->field_0x6ec = 0;
      *(uint *)&pCVar5->field_0x6f0 = 0;
      engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90(pCVar1,poly);
      pCVar5 = (CGlass *)&pCVar5->field_0x48;
      iVar2 = iVar2 + 1;
      poly = poly + 0x48;
    } while (iVar2 < *(int *)&this_ptr->field_0xb68);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  return;
}
