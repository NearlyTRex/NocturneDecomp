// Name: core_platfrm.cpp_CPlatform_attachActor_FUN_00512aa0
// Address: 00512aa0
// Address Range: [[00512aa0, 00512b95]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_00512aa0(CPlatform *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_00512aa0(CPlatform *this_ptr,CDemonActor *actor)

{
  CDemonActor *pCVar1;
  CPlatform *pCVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  SPlatformAttachment *pSVar6;
  byte bVar7;
  byte local_a0 [48];
  uint local_70 [12];
  CMatrix3x4f local_40;
  
  bVar7 = 0;
  if (actor != (CDemonActor *)0x0) {
    iVar3 = 0;
    pCVar1 = *(CDemonActor **)this_ptr->attach_actors;
    pCVar2 = this_ptr;
    while (actor != pCVar1) {
      iVar3 = iVar3 + 1;
      if (9 < iVar3) {
        iVar3 = *(int *)this_ptr->attach_actors;
        iVar4 = 0;
        pCVar2 = this_ptr;
        while( true ) {
          if (iVar3 == 0) {
            core_xform_cpp_FUN_00583940(local_a0,&actor->location,&actor->orient);
            core_xform_cpp_FUN_00583800
                      (&local_40,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
            *(CDemonActor **)pCVar2->attach_actors = actor;
            core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_a0,&local_40);
            puVar5 = local_70;
            pSVar6 = pCVar2->attach_actors + 4;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(uint *)pSVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              pSVar6 = pSVar6 + (uint)bVar7 * -8 + 4;
            }
            return;
          }
          iVar4 = iVar4 + 1;
          if (9 < iVar4) break;
          iVar3 = *(int *)&pCVar2->field_0x550;
          pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
        }
        _DAT_01d71de0 = "..\\core\\platfrm.cpp";
        _DAT_01d71de4 = 0x3d0;
        core_main_c_FUN_004e4330("CPlatform::attachActor - too many!");
        return;
      }
      pCVar1 = *(CDemonActor **)&pCVar2->field_0x550;
      pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
    }
  }
  return;
}
