// Name: core_bodypart.cpp_FUN_00416750
// Address: 00416750
// Address Range: [[00416750, 00416887]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_FUN_00416750(CBodyPart *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_FUN_00416750(CBodyPart *this_ptr,CVector3f *position)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  CVector3f *pCVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  uint auStackY_100c [1014];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  bVar8 = 0;
  iVar4 = *(int *)&this_ptr->field_0x74c;
  if (iVar4 < 2) {
    pCVar5 = (CVector3f *)(&this_ptr->field_0x750 + iVar4 * 0x2b0);
    *(int *)&this_ptr->field_0x74c = iVar4 + 1;
    if (pCVar5 != position) {
      *(uint *)pCVar5 = *(uint *)position;
      *(uint *)&pCVar5->field_0x4 = *(uint *)&position->field_0x4;
      *(uint *)&pCVar5->field_0x8 = *(uint *)&position->field_0x8;
    }
    core_actor_cpp_FUN_00408b80(this_ptr,pCVar5);
    local_24 = local_18;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)&pCVar5[3].field_0x8 = local_24;
    *(uint *)(pCVar5 + 4) = local_20;
    *(uint *)&pCVar5[4].field_0x4 = local_1c;
    core_flame_cpp_FUN_004a5aa0(pCVar5 + 1);
    *(uint *)&pCVar5[0x24].field_0x8 = 0;
    *(uint *)&pCVar5[0x1d].field_0x8 = 0x3fc00000;
    *(uint *)(pCVar5 + 0x1e) = 0x40400000;
    pcVar6 = "GCHAR2.RAW" + 1;
    *(uint *)&pCVar5[0x1e].field_0x4 = 0x3fc00000;
    *(uint *)&this_ptr->field_0xfc = 1;
    pcVar7 = &this_ptr->field_0x198;
    *(uint *)&this_ptr->field_0x18c = 1;
    do {
      cVar1 = *pcVar6;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    iVar4 = 0;
    if (0 < *(int *)&this_ptr->field_0x180) {
      iVar2 = 0;
      do {
        *(uint *)(*(int *)&this_ptr->field_0x188 + iVar2) = 0;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < *(int *)&this_ptr->field_0x180);
    }
    uVar3 = core_actor_cpp_FUN_0040ce40(0x40800000,0x40a00000);
    *(uint *)&this_ptr->field_0xccc = uVar3;
  }
  return;
}
