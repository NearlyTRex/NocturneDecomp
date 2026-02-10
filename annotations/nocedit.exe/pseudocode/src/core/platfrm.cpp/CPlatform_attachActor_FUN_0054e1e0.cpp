// Name: core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0
// Address: 0054e1e0
// Address Range: [[0054e1e0, 0054e2d5]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(CPlatform *this_ptr)

{
  CDemonActor *pCVar1;
  CPlatform *pCVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  CDemonActor *in_stack_00000008;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  CMatrix3x4f local_40;
  
  bVar6 = 0;
  if (in_stack_00000008 != (CDemonActor *)0x0) {
    iVar3 = 0;
    pCVar1 = this_ptr->attach_actors[0].actor;
    pCVar2 = this_ptr;
    while (in_stack_00000008 != pCVar1) {
      iVar3 = iVar3 + 1;
      if (9 < iVar3) {
        pCVar1 = this_ptr->attach_actors[0].actor;
        iVar3 = 0;
        pCVar2 = this_ptr;
        while( true ) {
          if (pCVar1 == (CDemonActor *)0x0) {
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                      (&local_a0,&(in_stack_00000008->location).position,
                       &(in_stack_00000008->orient).vec);
            core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                      (&local_40,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
            pCVar2->attach_actors[0].actor = in_stack_00000008;
            core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_a0,&local_40,&local_70);
            pCVar4 = &local_70;
            pCVar5 = &pCVar2->attach_actors[0].matrix;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              pCVar5->m[0].w = pCVar4->m[0].w;
              pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
              pCVar5 = (CMatrix3x4f *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
            }
            return;
          }
          iVar3 = iVar3 + 1;
          if (9 < iVar3) break;
          pCVar1 = pCVar2->attach_actors[1].actor;
          pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
        }
        g_CurrentFilename = "..\\core\\platfrm.cpp";
        g_CurrentLineNumber = 0x3d0;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CPlatform::attachActor - too many!");
        return;
      }
      pCVar1 = pCVar2->attach_actors[1].actor;
      pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
    }
  }
  return;
}
