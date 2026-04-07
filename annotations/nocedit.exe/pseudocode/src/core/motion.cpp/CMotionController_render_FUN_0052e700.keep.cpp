// Name: core_motion.cpp_CMotionController_render_FUN_0052e700
// Address: 0052e700
// MANUAL RECONSTRUCTION
// Address Range: [[0052e700, 0052e8ca]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_render_FUN_0052e700(CMotionController *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_render_FUN_0052e700(CMotionController *this_ptr,CDemonActor *actor)

{
  char cVar2;
  int iVar3;
  CBoundingBox3D *pCVar3;
  SMotion *pSVar4;
  SMotion *pSVar5;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char acStack_a8[100];
  CBoundingBox3D local_44;
  CVector3i local_2c;
  float local_20;
  float local_1c;
  int local_14;
  char cVar1;
  SRenderVertex *pSVar2;
  
  if ((INT_02f43978 != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar3 == 0)) {
    pCVar3 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&local_44);
    local_2c.x = (int)ROUND(256.0f * 0.0);
    local_2c.y = (int)ROUND((pCVar3->max).y * 256.0f);
    local_2c.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[19999].projected_vertex,&local_2c);
    pSVar2 = g_CDemonRendererPtr2->vertex_buffer_ptr;
    if ((int)(pSVar2[19999].projected_vertex.screen_x & -0x80000000) == 0) {
      iVar6 = pSVar2[19999].projected_vertex.screen_y >> 0x10;
      iVar3 = (pSVar2[19999].projected_vertex.screen_x >> 0x10) + -0x23;
      engine_2d_c_drawText_FUN_00401fd0(actor->actor_name,iVar3,iVar6 + -0x21);
      if ((this_ptr->state_index < 0) ||
         (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr),
         pSVar4->state_index == this_ptr->state_index)) {
        pcVar5 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(this_ptr);
        pcVar7 = acStack_a8;
        do {
          cVar1 = *pcVar5;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar2 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar7[1] = cVar2;
          pcVar7 = pcVar7 + 2;
        } while (cVar2 != '\0');
      }
      else {
        CMotionList *pMotionList = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr);
        pcVar5 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(this_ptr);
        _sprintf(acStack_a8,"%s -> %s",pcVar5,pMotionList->state_names[this_ptr->state_index]);
      }
      engine_2d_c_drawText_FUN_00401fd0(acStack_a8,iVar3,iVar6 + -0x16);
      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
      _sprintf(acStack_a8,"%s : %5.2f",(char *)pSVar5,(double)this_ptr->current_frame_number);
      engine_2d_c_drawText_FUN_00401fd0(acStack_a8,iVar3,iVar6 + -0xb);
      return;
    }
  }
  return;
}
