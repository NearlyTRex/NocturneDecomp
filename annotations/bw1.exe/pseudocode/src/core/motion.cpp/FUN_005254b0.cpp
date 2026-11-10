// Name: core_motion.cpp_FUN_005254b0
// Address: 005254b0
// Address Range: [[005254b0, 0052568f]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_005254b0(CMotionController *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_FUN_005254b0(CMotionController *this_ptr,CDemonActor *actor)

{
  char cVar1;
  SRenderVertex *pSVar2;
  int x;
  SMotion *pSVar3;
  char *pcVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  byte bVar9;
  CBoundingBox3D *in_stack_ffffff40;
  uint local_5c [6];
  uint local_44 [4];
  float local_34;
  CVector3i local_2c;
  float local_20;
  float local_1c;
  uint local_18;
  int local_14;
  
  bVar9 = 0;
  if ((_DAT_01d39d34 != 0) &&
     (local_20 = (float)engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
     local_20 == 0.0)) {
    (*((actor->vtable)._ub)->getBoundingBox)(actor,in_stack_ffffff40);
    puVar6 = local_5c;
    puVar7 = local_44;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    local_1c = local_34;
    local_18 = 0;
    local_2c.x = (int)ROUND(local_20 * _DAT_006042c0);
    local_2c.y = (int)ROUND(local_34 * _DAT_006042c0);
    local_2c.z = (int)ROUND(_DAT_006042c0 * 0.0);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0xea5d0),&local_2c);
    pSVar2 = DAT_00612560->vertex_buffer_ptr;
    if (((byte)pSVar2[0xea5e3] & 0x80) == 0) {
      iVar5 = *(int *)(pSVar2 + 0xea5e4) >> 0x10;
      local_14 = (*(int *)(pSVar2 + 0xea5e0) >> 0x10) + -0x23;
      engine_2d_c_drawText_FUN_00401fe0(actor->actor_name,local_14,iVar5 + -0x21);
      if ((this_ptr->state_index < 0) ||
         (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr),
         *(int *)(pSVar3 + 0x24) == this_ptr->state_index)) {
        pcVar4 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00524a10(this_ptr);
        pcVar8 = &stack0xffffff40;
        do {
          cVar1 = *pcVar4;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      else {
        core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(this_ptr);
        core_motion_cpp_CMotionController_getCurrentStateName_FUN_00524a10(this_ptr);
        _sprintf(&stack0xffffff40,"%s -> %s");
      }
      x = local_14;
      engine_2d_c_drawText_FUN_00401fe0(&stack0xffffff40,local_14,iVar5 + -0x16);
      core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
      _sprintf(&stack0xffffff40,"%s : %5.2f");
      engine_2d_c_drawText_FUN_00401fe0(&stack0xffffff40,x,iVar5 + -0xb);
      return;
    }
  }
  return;
}
