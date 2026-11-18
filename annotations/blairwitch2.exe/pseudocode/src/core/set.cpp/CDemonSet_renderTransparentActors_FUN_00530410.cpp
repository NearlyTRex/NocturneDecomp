// Name: core_set.cpp_CDemonSet_renderTransparentActors_FUN_00530410
// Address: 00530410
// Address Range: [[00530410, 0053062c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_00530410(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_00530410(CDemonSet *this_ptr)

{
  CHero *pCVar1;
  int iVar2;
  int iVar3;
  int fog_scale;
  int iVar4;
  uint *puVar5;
  CVector3f *pCVar6;
  byte bVar7;
  CVector3f local_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  uint local_30 [6];
  int local_18;
  char *local_14;
  
  bVar7 = 0;
  g_INT_0200a3a4 = 0;
  if (((g_CGamePtr->letterbox_mode == 0) &&
      (pCVar1 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4], pCVar1 != (CHero *)0x0)) &&
     (pCVar1->hero_action != 0)) {
    g_INT_0200a3a4 = (int)pCVar1->hero_action_target;
  }
  local_18 = this_ptr->sorted_render_actor_count + -1;
  if (-1 < local_18) {
    local_14 = this_ptr->cameras[0].name + this_ptr->sorted_render_actor_count * 4 + -8;
    do {
      iVar2 = *(int *)(local_14 + 0x15f6fc);
      if (*(int *)(iVar2 + 0xfc) == 0) {
        *(byte *)(iVar2 + 0x144) = *(byte *)(iVar2 + 0x144) & 0xf7;
      }
      else {
        (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x24))(iVar2);
        puVar5 = local_30;
        pCVar6 = &local_60;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar6->x = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          pCVar6 = (CVector3f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
        }
        if (&CStack_48 != &local_60) {
          CStack_48.x = local_60.x;
          CStack_48.y = local_60.y;
          CStack_48.z = local_60.z;
        }
        if (&CStack_3c != &CStack_54) {
          CStack_3c.x = CStack_54.x;
          CStack_3c.y = CStack_54.y;
          CStack_3c.z = CStack_54.z;
        }
        core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
                  (this_ptr,(CVector3f *)(iVar2 + 0x20),(UOrientationVector *)(iVar2 + 0x30),
                   &CStack_48,&CStack_3c,(CMatrix3x3f *)(iVar2 + 0x3c));
        iVar4 = *(int *)(iVar2 + 0x108);
        iVar3 = *(int *)(iVar2 + 0x10c);
        fog_scale = *(int *)(iVar2 + 0x110);
        if (iVar2 == g_INT_0200a3a4) {
          iVar4 = (iVar4 * 3) / 2;
          iVar3 = (iVar3 * 3) / 2;
          fog_scale = (fog_scale * 3) / 2;
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(g_CDemonSetPtr,iVar4,iVar3,fog_scale);
        iVar4 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x1c))(iVar2);
        if (iVar4 == 0) {
          *(byte *)(iVar2 + 0x144) = *(byte *)(iVar2 + 0x144) & 0xf7;
        }
        else {
          *(byte *)(iVar2 + 0x144) = *(byte *)(iVar2 + 0x144) | 8;
        }
        iVar4 = 0;
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
                  (g_CDemonRenderer_PTR_0060b280,1);
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar4,0);
            iVar3 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x1c))(iVar2);
            if (iVar3 != 0) {
              *(byte *)(iVar2 + 0x144) = *(byte *)(iVar2 + 0x144) | 8;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
                      (g_CDemonRenderer_PTR_0060b280,1);
            iVar4 = iVar4 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
          } while (iVar4 < this_ptr->mirror_glass_actor_count);
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(this_ptr,0x10000,0x10000,0x10000);
      }
      local_14 = local_14 + -4;
      local_18 = local_18 + -1;
    } while (-1 < local_18);
  }
  return;
}
