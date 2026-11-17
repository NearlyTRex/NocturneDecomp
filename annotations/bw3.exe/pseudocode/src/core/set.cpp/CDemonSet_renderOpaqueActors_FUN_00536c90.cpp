// Name: core_set.cpp_CDemonSet_renderOpaqueActors_FUN_00536c90
// Address: 00536c90
// Address Range: [[00536c90, 00536f80]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderOpaqueActors_FUN_00536c90(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderOpaqueActors_FUN_00536c90(CDemonSet *this_ptr)

{
  CHero *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  double dVar11;
  double dVar12;
  CVector3f *pCVar13;
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
  
  bVar9 = 0;
  g_INT_0207babc = 0;
  g_INT_0207bab8 = 0;
  if ((g_CGamePtr->letterbox_mode == 0) &&
     (pCVar1 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14], pCVar1 != (CHero *)0x0)) {
    if (pCVar1->hero_action != 0) {
      g_INT_0207bab8 = (int)pCVar1->hero_action_target;
    }
    g_INT_0207babc = (int)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->aim_target_actor;
    fVar10 = (float10)fcos((float10)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->aim_target_pulse);
    g_FLOAT_0207bac0 = (float)(fVar10 + (float10)2.25);
  }
  local_28 = this_ptr->sorted_render_actor_count + -1;
  if (-1 < local_28) {
    local_2c = this_ptr->cameras[0].name + this_ptr->sorted_render_actor_count * 4 + -8;
    do {
      iVar2 = *(int *)(local_2c + 0x15f700);
      if (*(int *)(iVar2 + 0xf8) == 0) {
        *(byte *)(iVar2 + 0x144) = *(byte *)(iVar2 + 0x144) & 0xfb;
      }
      else {
        (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
        puVar8 = local_5c;
        pCVar13 = &local_74;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          pCVar13->x = *puVar8;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          pCVar13 = (CVector3f *)((int)pCVar13 + ((uint)bVar9 * -2 + 1) * 4);
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
        pCVar13 = &CStack_44;
        core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
                  (this_ptr,(CVector3f *)(iVar2 + 0x20),(UOrientationVector *)(iVar2 + 0x30),pCVar13
                   ,&CStack_38,(CMatrix3x3f *)(iVar2 + 0x3c));
        iStack_24 = *(int *)(iVar2 + 0x108);
        iStack_20 = *(int *)(iVar2 + 0x10c);
        iStack_1c = *(int *)(iVar2 + 0x110);
        if (iVar2 == g_INT_0207bab8) {
          iStack_24 = (iStack_24 * 3) / 2;
          iStack_20 = (iStack_20 * 3) / 2;
          iStack_1c = (iStack_1c * 3) / 2;
        }
        if (iVar2 == g_INT_0207babc) {
          iStack_18 = iStack_24;
          fVar4 = (float)iStack_20;
          fVar3 = 1.0 / g_FLOAT_0207bac0;
          iStack_14 = iStack_1c;
          fVar5 = (float)iStack_1c;
          dVar11 = round((double)((float)iStack_24 * g_FLOAT_0207bac0));
          local_28 = (int)ROUND(dVar11);
          dVar11 = round((double)(fVar4 * fVar3));
          pCVar13 = (CVector3f *)0x536e9b;
          dVar12 = round((double)(fVar5 * fVar3));
          local_2c = (char *)(int)ROUND(dVar11);
          local_28 = (int)ROUND(dVar12);
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100
                  (g_CDemonSetPtr,(int)CStack_38.z,(int)local_2c,local_28);
        engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
                  (g_CDemonRenderer_PTR_005f2afc,0xffff);
        iVar7 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10))(iVar2,pCVar13);
        if (iVar7 == 0) {
          *(byte *)(iVar2 + 0x144) = *(byte *)(iVar2 + 0x144) & 0xfb;
        }
        else {
          *(byte *)(iVar2 + 0x144) = *(byte *)(iVar2 + 0x144) | 4;
        }
        iVar7 = 0;
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
                  (g_CDemonRenderer_PTR_005f2afc,1);
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(this_ptr,iVar7,0);
            iVar6 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10))(iVar2);
            if (iVar6 != 0) {
              *(byte *)(iVar2 + 0x144) = *(byte *)(iVar2 + 0x144) | 4;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
                      (g_CDemonRenderer_PTR_005f2afc,1);
            iVar7 = iVar7 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
          } while (iVar7 < this_ptr->mirror_glass_actor_count);
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(this_ptr,0x10000,0x10000,0x10000);
      }
      local_2c = local_2c + -4;
      local_28 = local_28 + -1;
    } while (-1 < local_28);
  }
  return;
}
