// Name: core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0
// Address: 0054e1e0
// Address Range: [[0054e1e0, 0054e2d5] [03fc40db, 03fc413f]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(CPlatform *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(CPlatform *this_ptr,CDemonActor *actor)

{
  CDemonActor *pCVar3;
  CPlatform *pCVar6;
  int iVar3;
  int iVar7;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  CMatrix3x4f local_40;
  CDemonActor *pCVar1;
  CPlatform *pCVar2;
  
  if (actor != (CDemonActor *)0x0) {
    iVar3 = 0;
    pCVar1 = this_ptr->attach_actors[0].actor;
    pCVar2 = this_ptr;
    while (actor != pCVar1) {
      iVar3 = iVar3 + 1;
      if (9 < iVar3) {
        pCVar3 = this_ptr->attach_actors[0].actor;
        iVar7 = 0;
        pCVar6 = this_ptr;
        while( true ) {
          if (pCVar3 == (CDemonActor *)0x0) {
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                      (&local_a0,&(actor->location).position,&(actor->orient).vec);
            core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                      (&local_40,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
            pCVar6->attach_actors[0].actor = actor;
            core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_a0,&local_40,&local_70);
            pCVar6->attach_actors[0].matrix.m[0].w = local_70.m[0].w;
            pCVar6->attach_actors[0].matrix.m[0].x = local_70.m[0].x;
            pCVar6->attach_actors[0].matrix.m[0].y = local_70.m[0].y;
            pCVar6->attach_actors[0].matrix.m[0].z = local_70.m[0].z;
            pCVar6->attach_actors[0].matrix.m[1].w = local_70.m[1].w;
            pCVar6->attach_actors[0].matrix.m[1].x = local_70.m[1].x;
            pCVar6->attach_actors[0].matrix.m[1].y = local_70.m[1].y;
            pCVar6->attach_actors[0].matrix.m[1].z = local_70.m[1].z;
            pCVar6->attach_actors[0].matrix.m[2].w = local_70.m[2].w;
            pCVar6->attach_actors[0].matrix.m[2].x = local_70.m[2].x;
            pCVar6->attach_actors[0].matrix.m[2].y = local_70.m[2].y;
            pCVar6->attach_actors[0].matrix.m[2].z = local_70.m[2].z;
            return;
          }
          iVar7 = iVar7 + 1;
          if (9 < iVar7) break;
          pCVar3 = pCVar6->attach_actors[1].actor;
          pCVar6 = (CPlatform *)((int)&(pCVar6->base).orient + 4);
        }
        g_CurrentFilename = "..\\core\\platfrm.cpp";
        g_CurrentLineNumber = 976;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CPlatform::attachActor - too many!");
        return;
      }
      pCVar1 = pCVar2->attach_actors[1].actor;
      pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
    }
  }
  return;
}
