// Name: core_set.cpp_FUN_00536f90
// Address: 00536f90
// Address Range: [[00536f90, 0053726f]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00536f90(CDemonSet *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_00536f90(CDemonSet *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_74 [6];
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f local_44;
  CVector3f CStack_38;
  char *local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar6 = 0;
  _DAT_0207babc = 0;
  _DAT_0207bab8 = 0;
  if ((g_CGamePtr->letterbox_mode == 0) &&
     (iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x20b68) != 0) {
      _DAT_0207bab8 = *(int *)(iVar1 + 0x20b70);
    }
    iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    _DAT_0207babc = *(int *)(iVar1 + 0x20b8c);
    fVar7 = (float10)fcos((float10)*(float *)(iVar1 + 0x20b90));
    _DAT_0207bac0 = (float)(fVar7 + (float10)_DAT_005d05ef);
  }
  local_28 = param_1->sorted_render_actor_count + -1;
  if (-1 < local_28) {
    local_2c = param_1->cameras[0].name + param_1->sorted_render_actor_count * 4 + -8;
    do {
      iVar1 = *(int *)(local_2c + 0x15f700);
      if (*(int *)(iVar1 + 0xfc) == 0) {
        *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xf7;
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
        pfVar4 = local_74;
        pCVar5 = &local_44;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar5->x = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
          pCVar5 = (CVector3f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
        if (&CStack_5c != &local_44) {
          CStack_5c.x = local_44.x;
          CStack_5c.y = local_44.y;
          CStack_5c.z = local_44.z;
        }
        if (&CStack_50 != &CStack_38) {
          CStack_50.x = CStack_38.x;
          CStack_50.y = CStack_38.y;
          CStack_50.z = CStack_38.z;
        }
        core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
                  (param_1,(CVector3f *)(iVar1 + 0x20),(UOrientationVector *)(iVar1 + 0x30),
                   &CStack_5c,&CStack_50,(CMatrix3x3f *)(iVar1 + 0x3c));
        iStack_20 = *(int *)(iVar1 + 0x108);
        iStack_1c = *(int *)(iVar1 + 0x10c);
        iStack_24 = *(int *)(iVar1 + 0x110);
        if (iVar1 == _DAT_0207bab8) {
          iStack_20 = (iStack_20 * 3) / 2;
          iStack_1c = (iStack_1c * 3) / 2;
          iStack_24 = (iStack_24 * 3) / 2;
        }
        if (iVar1 == _DAT_0207babc) {
          iStack_18 = iStack_20;
          fVar8 = (float10)1 / (float10)_DAT_0207bac0;
          fVar7 = (float10)iStack_20 * (float10)_DAT_0207bac0;
          iStack_14 = iStack_24;
          fVar9 = (float10)iStack_1c * fVar8;
          fVar8 = (float10)iStack_24 * fVar8;
          round();
          iStack_20 = (int)ROUND(fVar7);
          round();
          round();
          iStack_1c = (int)ROUND(fVar9);
          iStack_24 = (int)ROUND(fVar8);
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100
                  (g_CDemonSetPtr,iStack_20,iStack_1c,iStack_24);
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x14))(iVar1);
        if (iVar3 == 0) {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xf7;
        }
        else {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 8;
        }
        iVar3 = 0;
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
        if (0 < param_1->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(param_1,iVar3,0);
            iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x14))(iVar1);
            if (iVar2 != 0) {
              *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 8;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
            iVar3 = iVar3 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(param_1);
          } while (iVar3 < param_1->mirror_glass_actor_count);
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(param_1,0x10000,0x10000,0x10000);
      }
      local_2c = local_2c + -4;
      local_28 = local_28 + -1;
    } while (-1 < local_28);
  }
  return;
}
