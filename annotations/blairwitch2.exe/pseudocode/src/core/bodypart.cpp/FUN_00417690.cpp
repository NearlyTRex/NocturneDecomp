// Name: core_bodypart.cpp_FUN_00417690
// Address: 00417690
// Address Range: [[00417690, 004177d7]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_FUN_00417690(CBodyPart *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_FUN_00417690(CBodyPart *this_ptr,CVector3f *position)

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
  iVar4 = *(int *)&this_ptr->field_0x8a8;
  if (iVar4 < 2) {
    pCVar5 = (CVector3f *)(&this_ptr->field_0x8ac + iVar4 * 0x40c);
    *(int *)&this_ptr->field_0x8a8 = iVar4 + 1;
    if (pCVar5 != position) {
      *(uint *)pCVar5 = *(uint *)position;
      *(uint *)&pCVar5->field_0x4 = *(uint *)&position->field_0x4;
      *(uint *)&pCVar5->field_0x8 = *(uint *)&position->field_0x8;
    }
    core_actor_cpp_FUN_00408d70(this_ptr,pCVar5);
    local_24 = local_18;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)&pCVar5[3].field_0x8 = local_24;
    *(uint *)(pCVar5 + 4) = local_20;
    *(uint *)&pCVar5[4].field_0x4 = local_1c;
    core_flame_cpp_CFlame_setup_FUN_0049f270((CFlame *)(pCVar5 + 1));
    *(uint *)&pCVar5[0x41].field_0x8 = 0;
    *(uint *)&pCVar5[0x3a].field_0x8 = 0x3fc00000;
    *(uint *)(pCVar5 + 0x3b) = 0x40400000;
    pcVar6 = "GCHAR2.RAW" + 1;
    *(uint *)&pCVar5[0x3b].field_0x4 = 0x3fc00000;
    *(uint *)&this_ptr->field_0xfc = 1;
    pcVar7 = &this_ptr->field_0x2f4;
    *(uint *)&this_ptr->field_0x2e8 = 1;
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
    if (0 < *(int *)&this_ptr->field_0x2dc) {
      iVar2 = 0;
      do {
        *(uint *)(*(int *)&this_ptr->field_0x2e4 + iVar2) = 0;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < *(int *)&this_ptr->field_0x2dc);
    }
    uVar3 = core_actor_cpp_FUN_0040cf60(0x41400000,0x41a00000);
    *(uint *)&this_ptr->field_0x10dc = uVar3;
  }
  return;
}
