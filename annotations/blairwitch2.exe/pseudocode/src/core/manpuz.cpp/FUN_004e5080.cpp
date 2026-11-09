// Name: core_manpuz.cpp_FUN_004e5080
// Address: 004e5080
// Address Range: [[004e5080, 004e56ce]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_004e5080(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_manpuz_cpp_FUN_004e5080(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CKeyFramedModel *pCVar6;
  int iVar7;
  byte *puVar8;
  CVector3f *pCVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  byte *apuStackY_10a0 [928];
  byte **ppuVar16;
  byte auStack_20c [48];
  uint auStack_1dc [12];
  byte auStack_1ac [48];
  uint auStack_17c [12];
  CVector3f CStack_14c;
  CVector3f CStack_140;
  CVector3f CStack_134;
  CVector3f CStack_128;
  CMatrix3x3f aCStack_11c [40];
  uint uStack_f4;
  float fStack_f0;
  float fStack_e4;
  float fStack_e0;
  uint auStack_dc [6];
  byte auStack_c4 [4];
  uint uStack_c0;
  CVector3f CStack_b8;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  CVector3f CStack_a0;
  byte auStack_94 [8];
  uint uStack_8c;
  uint uStack_88;
  byte *apuStack_84 [5];
  uint uStack_70;
  byte *apuStack_64 [3];
  uint uStack_58;
  byte *puStack_4c;
  uint uStack_48;
  uint uStack_44;
  byte *puStack_38;
  byte *puStack_34;
  byte *puStack_30;
  uint *puStack_2c;
  int iStack_28;
  byte *puStack_24;
  int iStack_18;
  int iStack_14;
  
  bVar12 = 0;
  core_actor_cpp_FUN_00408a80(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&param_1[1].field_0x17c);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&param_1[2].field_0x44);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&param_1[8].field_0x7c);
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  puVar10 = (uint *)&pCVar6->field_0x338;
  puVar11 = &uStack_f4;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
  }
  *(uint *)&param_1[8].field_0xc8 = 0x414239c1;
  fVar13 = (float10)fcos((float10)_DAT_005f98bc * (float10)_DAT_005dc4ed);
  fVar1 = *(float *)&param_1[2].field_0x1dc;
  fVar2 = *(float *)&param_1[2].field_0x1d8;
  fVar3 = *(float *)&param_1[2].field_0x1e0;
  *(float *)&param_1[8].field_0xcc = fStack_e4 - fStack_f0;
  *(float *)&param_1[8].field_0xc4 =
       (float)(((float10)*(float *)&param_1[8].field_0xc8 + (float10)fStack_e0) / fVar13);
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
    fVar1 = *(float *)&param_1[8].field_0xcc;
    *(uint *)&param_1[2].field_0x1d8 = 0;
    fVar2 = (float)_DAT_005dc4f5;
    *(uint *)&param_1[2].field_0x1e0 = 0xbf8ccccd;
    *(float *)&param_1[2].field_0x1dc = fVar1 + fVar2;
  }
  if (SQRT(*(float *)&param_1[2].field_0x1c8 * *(float *)&param_1[2].field_0x1c8 +
           *(float *)&param_1[2].field_0x1c0 * *(float *)&param_1[2].field_0x1c0 +
           *(float *)&param_1[2].field_0x1c4 * *(float *)&param_1[2].field_0x1c4) == 0.0) {
    *(uint *)&param_1[2].field_0x1c4 = 0x40400000;
    *(uint *)&param_1[2].field_0x1c8 = 0xbdcccccd;
    *(uint *)&param_1[2].field_0x1c0 = 0;
  }
  core_xform_cpp_FUN_00591c10(auStack_1ac,&param_1[2].field_0x1c0,&param_1[2].field_0x1cc);
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)&param_1[1].field_0x17c);
  puStack_38 = &param_1[4].field_0x12c;
  puStack_2c = (uint *)&param_1[4].field_0x150;
  iStack_28 = 0;
  puStack_30 = &param_1[4].field_0x130;
  puStack_34 = &param_1[4].field_0x134;
  puVar10 = (uint *)&pCVar6->field_0x338;
  puVar11 = auStack_dc;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
  }
  do {
    iVar7 = iStack_28;
    core_manpuz_cpp_FUN_004e6240(param_1,iStack_28);
    puVar8 = puStack_38 + iVar7 * 0xb8;
    puStack_24 = puVar8;
    core_manpuz_cpp_FUN_004e6a50(param_1,iVar7,puVar8,puStack_30,puStack_34);
    *(uint *)(puVar8 + 0x14) = 0;
    *(uint *)(puVar8 + 0x10) = *(uint *)(puVar8 + 0x14);
    *(uint *)(puVar8 + 0x20) = 0;
    *(uint *)(puVar8 + 0xc) = *(uint *)(puVar8 + 0x10);
    *(uint *)(puVar8 + 0x1c) = *(uint *)(puVar8 + 0x20);
    iStack_14 = iVar7;
    auStack_94._4_4_ = (float)iVar7 * _DAT_005f98bc;
    *(uint *)(puVar8 + 0xac) = 0;
    *(uint *)(puVar8 + 0xb0) = 0;
    *(uint *)(puVar8 + 0x18) = *(uint *)(puVar8 + 0x1c);
    *(uint *)(puVar8 + 0xb4) = 0;
    auStack_94._0_4_ = 0;
    uStack_8c = 0;
    core_dirmat_cpp_FUN_00449280(aCStack_11c,(CVector3f *)auStack_94);
    uStack_a4 = *(uint *)&param_1[8].field_0xc8;
    uStack_ac = 0;
    uStack_a8 = 0;
    core_dirmat_cpp_FUN_00449530(aCStack_11c,&uStack_ac,auStack_94);
    ppuVar16 = apuStack_84 + 8;
    puVar8 = auStack_20c;
    apuStack_64[0] = (byte *)uStack_58;
    apuStack_84[(uint)bVar12 * -2 + 9] = apuStack_84[(uint)bVar12 * -2 + 0xc];
    apuStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
         apuStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
    core_xform_cpp_FUN_00591c10(puVar8,ppuVar16);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_1ac,auStack_20c);
    puVar10 = auStack_17c;
    puVar11 = auStack_1dc;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
    }
    core_xform_cpp_FUN_00592720(auStack_1dc);
    uStack_88 = uStack_70;
    apuStack_84[(uint)bVar12 * -2] = apuStack_84[(uint)bVar12 * -2 + 6];
    puVar8 = puStack_24;
    apuStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         apuStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
    if (&uStack_88 != puStack_2c) {
      *puStack_2c = uStack_88;
      puStack_2c[1] = apuStack_84[0];
      puStack_2c[2] = apuStack_84[1];
    }
    core_xform_cpp_FUN_00591de0(auStack_1dc);
    puStack_4c = apuStack_84[2];
    apuStack_84[(uint)bVar12 * -2 + 0xf] = apuStack_84[(uint)bVar12 * -2 + 3];
    apuStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
         apuStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    if ((byte **)(puVar8 + 0x30) != apuStack_84 + 0xe) {
      *(byte **)(puVar8 + 0x30) = puStack_4c;
      *(uint *)(puVar8 + 0x34) = uStack_48;
      *(uint *)(puVar8 + 0x38) = uStack_44;
    }
    pCVar9 = &CStack_14c;
    __arrinit(&CStack_14c,4,&g_CVectorTypeInfo);
    iStack_18 = 0;
    do {
      uStack_c0 = 0;
      core_xform_cpp_FUN_00591530(auStack_c4,auStack_1dc);
      CStack_a0._0_4_ = CStack_b8._0_4_;
      *(uint *)(auStack_94 + (uint)bVar12 * -8 + -8) =
           *(uint *)((int)&CStack_b8 + (uint)bVar12 * -8 + 4);
      *(uint *)(auStack_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -4) =
           *(uint *)((int)&CStack_b8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
      if (pCVar9 != &CStack_a0) {
        *(uint *)pCVar9 = CStack_a0._0_4_;
        *(uint *)&pCVar9->field_0x4 = CStack_a0._4_4_;
        *(uint *)&pCVar9->field_0x8 = CStack_a0._8_4_;
      }
      iStack_18 = iStack_18 + 1;
      pCVar9 = pCVar9 + 1;
    } while (iStack_18 < 4);
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
              ((CDemonTriangle *)(puStack_24 + 0x3c),&CStack_134,&CStack_140,&CStack_14c);
    puStack_2c = puStack_2c + 0x2e;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
              ((CDemonTriangle *)(puStack_24 + 0x74),&CStack_134,&CStack_128,&CStack_140);
    puStack_30 = puStack_30 + 0xb8;
    puStack_34 = puStack_34 + 0xb8;
    iStack_28 = iStack_28 + 1;
  } while (iStack_28 < 0xc);
  fVar13 = (float10)fcos((float10)_DAT_005f98bc);
  fVar14 = (float10)fsin((float10)_DAT_005f98bc);
  fVar1 = *(float *)&param_1[2].field_0x1c4;
  fVar5 = (float)_DAT_005dc4fd;
  fVar15 = (float10)_DAT_005dc4ed;
  fVar2 = *(float *)&param_1[8].field_0xc8;
  puVar8 = &param_1[7].field_0x1bc;
  fVar3 = *(float *)&param_1[2].field_0x1dc;
  fVar4 = (float)_DAT_005dc505;
  *(float *)&param_1[7].field_0x1c4 =
       (float)(fVar13 * (float10)*(float *)&param_1[8].field_0xc8 * fVar15);
  *(float *)puVar8 = (float)((float10)fVar2 * fVar14 * fVar15);
  *(float *)&param_1[7].field_0x1c0 = fVar3 * fVar4 + fVar1 * fVar5;
  if (&param_1[7].field_0x1b0 != puVar8) {
    *(uint *)&param_1[7].field_0x1b0 = *(uint *)puVar8;
    *(uint *)&param_1[7].field_0x1b4 = *(uint *)&param_1[7].field_0x1c0;
    *(uint *)&param_1[7].field_0x1b8 = *(uint *)&param_1[7].field_0x1c4;
  }
  *(uint *)&param_1[7].field_0x1d8 = 0xbda4de71;
  *(uint *)&param_1[7].field_0x1e0 = 0;
  *(uint *)&param_1[7].field_0x1dc = 0xbfc529dc;
  *(float *)&param_1[7].field_0x1b4 = *(float *)&param_1[7].field_0x1b4 + _DAT_005dc50d;
  core_dirmat_cpp_FUN_00449280
            ((CMatrix3x3f *)&param_1[7].field_0x1e4,(CVector3f *)&param_1[7].field_0x1d8);
  *(uint *)&param_1[7].field_0x214 = *(uint *)&param_1[7].field_0x1b4;
  *(uint *)&param_1[7].field_0x218 = *(uint *)&param_1[7].field_0x1b8;
  *(uint *)&param_1[7].field_0x220 = *(uint *)&param_1[7].field_0x1c0;
  *(uint *)&param_1[7].field_0x224 = *(uint *)&param_1[7].field_0x1c4;
  *(uint *)&param_1[7].field_0x238 = *(uint *)&param_1[7].field_0x1d8;
  *(uint *)&param_1[7].field_0x240 = *(uint *)&param_1[7].field_0x1e0;
  *(float *)&param_1[7].field_0x210 = -*(float *)&param_1[7].field_0x1b0;
  *(float *)&param_1[7].field_0x21c = -*(float *)&param_1[7].field_0x1bc;
  *(float *)&param_1[7].field_0x23c = -*(float *)&param_1[7].field_0x1dc;
  iVar7 = 0;
  core_dirmat_cpp_FUN_00449280
            ((CMatrix3x3f *)&param_1[7].field_0x244,(CVector3f *)&param_1[7].field_0x238);
  do {
    core_manpuz_cpp_FUN_004e7600(param_1,iVar7);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  return;
}
