// Name: core_motion.cpp_CMotionController_render_FUN_004e22b0
// Address: 004e22b0
// Address Range: [[004e22b0, 004e247a]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_render_FUN_004e22b0(CMotionController *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_render_FUN_004e22b0(CMotionController *this_ptr,CDemonActor *actor)

{
  char cVar1;
  SRenderVertex *pSVar2;
  CBoundingBox3D *pCVar3;
  SMotion *pSVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  CBoundingBox3D local_44;
  CVector3i local_2c;
  float local_20;
  float local_1c;
  uint local_18;
  int local_14;
  
  if ((_DAT_01cd4318 != 0) &&
     (local_20 = (float)engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
     local_20 == 0.0)) {
    pCVar3 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&local_44);
    local_1c = (pCVar3->max).y;
    local_18 = 0;
    local_2c.x = (int)ROUND(local_20 * _DAT_005a0d00);
    local_2c.y = (int)ROUND(local_1c * _DAT_005a0d00);
    local_2c.z = (int)ROUND(_DAT_005a0d00 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[19999].projected_vertex,&local_2c);
    pSVar2 = DAT_005ae704->vertex_buffer_ptr;
    if ((int)(pSVar2[19999].projected_vertex.screen_x & -0x80000000) == 0) {
      iVar6 = pSVar2[19999].projected_vertex.screen_y >> 0x10;
      local_14 = (pSVar2[19999].projected_vertex.screen_x >> 0x10) + -0x23;
      engine_2d_c_drawText_FUN_00402600(actor->actor_name,local_14,iVar6 + -0x21);
      if ((this_ptr->state_index < 0) ||
         (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(this_ptr),
         pSVar4->state_index == this_ptr->state_index)) {
        pcVar5 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0(this_ptr);
        pcVar7 = &stack0xffffff58;
        do {
          cVar1 = *pcVar5;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
      else {
        core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(this_ptr);
        core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0(this_ptr);
        _sprintf(&stack0xffffff58,"%s -> %s");
      }
      engine_2d_c_drawText_FUN_00402600(&stack0xffffff58,local_14,iVar6 + -0x16);
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(this_ptr);
      _sprintf(&stack0xffffff58,"%s : %5.2f",pSVar4);
      engine_2d_c_drawText_FUN_00402600(&stack0xffffff58,local_14,iVar6 + -0xb);
      return;
    }
  }
  return;
}
