// Name: core_set.cpp_CDemonSet_renderTransparentActors_FUN_005516c0
// Address: 005516c0
// Address Range: [[005516c0, 005518dc]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_005516c0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_005516c0(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int fog_scale;
  int iVar3;
  uint *puVar4;
  CVector3f *pCVar5;
  byte bVar6;
  CVector3f local_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  uint local_30 [6];
  int local_18;
  char *local_14;
  
  bVar6 = 0;
  _DAT_02026358 = 0;
  if (((g_CGamePtr->letterbox_mode == 0) &&
      (iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x1ff60) != 0)) {
    _DAT_02026358 = *(int *)(iVar1 + 0x1ff68);
  }
  local_18 = this_ptr->sorted_render_actor_count + -1;
  if (-1 < local_18) {
    local_14 = this_ptr->cameras[0].name + this_ptr->sorted_render_actor_count * 4 + -8;
    do {
      iVar1 = *(int *)(local_14 + 0x15f700);
      if (*(int *)(iVar1 + 0xfc) == 0) {
        *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xf7;
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
        puVar4 = local_30;
        pCVar5 = &local_60;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar5->x = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          pCVar5 = (CVector3f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
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
        core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
                  (this_ptr,(CVector3f *)(iVar1 + 0x20),(UOrientationVector *)(iVar1 + 0x30),
                   &CStack_48,&CStack_3c,(CMatrix3x3f *)(iVar1 + 0x3c));
        iVar3 = *(int *)(iVar1 + 0x108);
        iVar2 = *(int *)(iVar1 + 0x10c);
        fog_scale = *(int *)(iVar1 + 0x110);
        if (iVar1 == _DAT_02026358) {
          iVar3 = (iVar3 * 3) / 2;
          iVar2 = (iVar2 * 3) / 2;
          fog_scale = (fog_scale * 3) / 2;
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(g_CDemonSetPtr,iVar3,iVar2,fog_scale);
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x14))(iVar1);
        if (iVar3 == 0) {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xf7;
        }
        else {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 8;
        }
        iVar3 = 0;
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(this_ptr,iVar3,0);
            iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x14))(iVar1);
            if (iVar2 != 0) {
              *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 8;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
            iVar3 = iVar3 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
          } while (iVar3 < this_ptr->mirror_glass_actor_count);
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(this_ptr,0x10000,0x10000,0x10000);
      }
      local_14 = local_14 + -4;
      local_18 = local_18 + -1;
    } while (-1 < local_18);
  }
  return;
}
