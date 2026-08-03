// Name: core_platfrm.cpp_CPlatform_attachActor_FUN_004f75c0
// Address: 004f75c0
// Address Range: [[004f75c0, 004f76b5]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_004f75c0(CPlatform *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_004f75c0(CPlatform *this_ptr,CDemonActor *actor)

{
  CDemonActor *pCVar1;
  CPlatform *pCVar2;
  int iVar3;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  CMatrix3x4f local_a0;
  float local_70 [12];
  CMatrix3x4f local_40;
  
  bVar6 = 0;
  if (actor != (CDemonActor *)0x0) {
    iVar3 = 0;
    pCVar1 = this_ptr->attach_actors[0].actor;
    pCVar2 = this_ptr;
    while (actor != pCVar1) {
      iVar3 = iVar3 + 1;
      if (9 < iVar3) {
        pCVar1 = this_ptr->attach_actors[0].actor;
        iVar3 = 0;
        pCVar2 = this_ptr;
        while( true ) {
          if (pCVar1 == (CDemonActor *)0x0) {
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                      (&local_a0,&(actor->location).position,&(actor->orient).vec);
            core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
                      (&local_40,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
            pCVar2->attach_actors[0].actor = actor;
            core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_a0,&local_40);
            pfVar4 = local_70;
            pCVar5 = &pCVar2->attach_actors[0].matrix;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              pCVar5->m[0].w = *pfVar4;
              pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
              pCVar5 = (CMatrix3x4f *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
            }
            return;
          }
          iVar3 = iVar3 + 1;
          if (9 < iVar3) break;
          pCVar1 = pCVar2->attach_actors[1].actor;
          pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
        }
        g_CHAR_PTR_01cc4800 = "..\\core\\platfrm.cpp";
        g_INT_01cc4804 = 0x3d0;
        core_main_c_FUN_004c8440("CPlatform::attachActor - too many!");
        return;
      }
      pCVar1 = pCVar2->attach_actors[1].actor;
      pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
    }
  }
  return;
}
