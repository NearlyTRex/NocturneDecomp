// Name: core_platfrm.cpp_CPlatform_attachActor_FUN_0053adb0
// Address: 0053adb0
// Address Range: [[0053adb0, 0053aea5]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0053adb0(CPlatform *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0053adb0(CPlatform *this_ptr,CDemonActor *actor)

{
  CDemonActor *pCVar1;
  CPlatform *pCVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  CMatrix3x4f local_a0 [48];
  uint local_70 [12];
  CMatrix3x4f local_40 [48];
  
  bVar7 = 0;
  if (actor != (CDemonActor *)0x0) {
    iVar3 = 0;
    pCVar1 = *(CDemonActor **)&this_ptr->field_0x51c;
    pCVar2 = this_ptr;
    while (actor != pCVar1) {
      iVar3 = iVar3 + 1;
      if (9 < iVar3) {
        iVar3 = *(int *)&this_ptr->field_0x51c;
        iVar4 = 0;
        pCVar2 = this_ptr;
        while( true ) {
          if (iVar3 == 0) {
            core_xform_cpp_FUN_005b5760
                      (local_a0,(CVector3f *)&actor->field_0x20,(CVector3f *)&actor->field_0x30);
            core_xform_cpp_FUN_005b5620
                      (local_40,(CVector3f *)&this_ptr->field_0x20,
                       (CVector3f *)&this_ptr->field_0x30);
            *(CDemonActor **)&pCVar2->field_0x51c = actor;
            core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_a0,local_40);
            puVar5 = local_70;
            puVar6 = (uint *)&pCVar2->field_0x520;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
            }
            return;
          }
          iVar4 = iVar4 + 1;
          if (9 < iVar4) break;
          iVar3 = *(int *)&pCVar2->field_0x550;
          pCVar2 = (CPlatform *)&pCVar2->field_0x34;
        }
        _DAT_01d1d400 = "..\\core\\platfrm.cpp";
        _DAT_01d1d404 = 0x3d0;
        core_main_c_FUN_005030e0("CPlatform::attachActor - too many!");
        return;
      }
      pCVar1 = *(CDemonActor **)&pCVar2->field_0x550;
      pCVar2 = (CPlatform *)&pCVar2->field_0x34;
    }
  }
  return;
}
