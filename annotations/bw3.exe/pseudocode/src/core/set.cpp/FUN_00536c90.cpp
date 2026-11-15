// Name: core_set.cpp_FUN_00536c90
// Address: 00536c90
// Address Range: [[00536c90, 00536f80]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00536c90(CDemonSet *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_00536c90(CDemonSet *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  double dVar10;
  double dVar11;
  CVector3f *pCVar12;
  CVector3f local_74;
  CVector3f CStack_68;
  uint local_5c [6];
  CVector3f CStack_44;
  CVector3f CStack_38;
  char *local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar8 = 0;
  _DAT_0207babc = 0;
  _DAT_0207bab8 = 0;
  if ((g_CGamePtr->letterbox_mode == 0) &&
     (iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x20b68) != 0) {
      _DAT_0207bab8 = *(int *)(iVar1 + 0x20b70);
    }
    iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    _DAT_0207babc = *(int *)(iVar1 + 0x20b8c);
    fVar9 = (float10)fcos((float10)*(float *)(iVar1 + 0x20b90));
    _DAT_0207bac0 = (float)(fVar9 + (float10)_DAT_005d05e7);
  }
  local_28 = param_1->sorted_render_actor_count + -1;
  if (-1 < local_28) {
    local_2c = param_1->cameras[0].name + param_1->sorted_render_actor_count * 4 + -8;
    do {
      iVar1 = *(int *)(local_2c + 0x15f700);
      if (*(int *)(iVar1 + 0xf8) == 0) {
        *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xfb;
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
        puVar7 = local_5c;
        pCVar12 = &local_74;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          pCVar12->x = *puVar7;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          pCVar12 = (CVector3f *)((int)pCVar12 + ((uint)bVar8 * -2 + 1) * 4);
        }
        if (&CStack_44 != &local_74) {
          CStack_44.x = local_74.x;
          CStack_44.y = local_74.y;
          CStack_44.z = local_74.z;
        }
        if (&CStack_38 != &CStack_68) {
          CStack_38.x = CStack_68.x;
          CStack_38.y = CStack_68.y;
          CStack_38.z = CStack_68.z;
        }
        pCVar12 = &CStack_44;
        core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
                  (param_1,(CVector3f *)(iVar1 + 0x20),(UOrientationVector *)(iVar1 + 0x30),pCVar12,
                   &CStack_38,(CMatrix3x3f *)(iVar1 + 0x3c));
        iStack_24 = *(int *)(iVar1 + 0x108);
        iStack_20 = *(int *)(iVar1 + 0x10c);
        iStack_1c = *(int *)(iVar1 + 0x110);
        if (iVar1 == _DAT_0207bab8) {
          iStack_24 = (iStack_24 * 3) / 2;
          iStack_20 = (iStack_20 * 3) / 2;
          iStack_1c = (iStack_1c * 3) / 2;
        }
        if (iVar1 == _DAT_0207babc) {
          iStack_18 = iStack_24;
          fVar3 = (float)iStack_20;
          fVar2 = 1.0 / _DAT_0207bac0;
          iStack_14 = iStack_1c;
          fVar4 = (float)iStack_1c;
          dVar10 = round((double)((float)iStack_24 * _DAT_0207bac0));
          local_28 = (int)ROUND(dVar10);
          dVar10 = round((double)(fVar3 * fVar2));
          pCVar12 = (CVector3f *)0x536e9b;
          dVar11 = round((double)(fVar4 * fVar2));
          local_2c = (char *)(int)ROUND(dVar10);
          local_28 = (int)ROUND(dVar11);
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100
                  (g_CDemonSetPtr,(int)CStack_38.z,(int)local_2c,local_28);
        engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
        iVar6 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10))(iVar1,pCVar12);
        if (iVar6 == 0) {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xfb;
        }
        else {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 4;
        }
        iVar6 = 0;
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
        if (0 < param_1->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(param_1,iVar6,0);
            iVar5 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10))(iVar1);
            if (iVar5 != 0) {
              *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 4;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
            iVar6 = iVar6 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(param_1);
          } while (iVar6 < param_1->mirror_glass_actor_count);
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(param_1,0x10000,0x10000,0x10000);
      }
      local_2c = local_2c + -4;
      local_28 = local_28 + -1;
    } while (-1 < local_28);
  }
  return;
}
