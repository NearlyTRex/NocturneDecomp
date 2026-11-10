// Name: core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040adf0
// Address: 0040adf0
// Address Range: [[0040adf0, 0040b048]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040adf0(CDemonActor *this_ptr,char *context_file,int context_line)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040adf0(CDemonActor *this_ptr,char *context_file,int context_line)

{
  char cVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  char *pcVar5;
  byte bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uStack_18;
  
  bVar6 = 0;
  if (this_ptr == (CDemonActor *)0x0) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x77c;
    core_main_c_FUN_004e4500();
  }
  if (((CDemonActor *)0xfeffffff < this_ptr) || ((int)this_ptr < 0x1000)) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x780;
    core_main_c_FUN_004e4500("Invalid actor pointer %08X detected at %s, line %d",this_ptr,context_file);
  }
  if ((byte *)this_ptr->validation_magic != &DAT_0078a123) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x78a;
    memset((void *)0x7bbfc0,0,0x32);
    pCVar3 = this_ptr;
    pcVar5 = (char *)0x7bbfc0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar5 = *(uint *)pCVar3->actor_name;
      pCVar3 = (CDemonActor *)((int)pCVar3 + (uint)bVar6 * -8 + 4);
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pcVar5 = pCVar3->actor_name[0];
      pCVar3 = (CDemonActor *)((int)pCVar3 + (uint)bVar6 * -2 + 1);
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    }
    core_main_c_FUN_004e4500
              ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\ncreateStatus = %d",context_file,context_line,this_ptr,0x7bbfc0);
  }
  if (_DAT_005ca89a <
      SQRT(*(float *)&this_ptr->field_0x28 * *(float *)&this_ptr->field_0x28 +
           *(float *)&this_ptr->field_0x20 * *(float *)&this_ptr->field_0x20 +
           *(float *)&this_ptr->field_0x24 * *(float *)&this_ptr->field_0x24)) {
    dVar9 = (double)*(float *)&this_ptr->field_0x28;
    dVar8 = (double)*(float *)&this_ptr->field_0x24;
    dVar7 = (double)*(float *)&this_ptr->field_0x20;
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x795;
    memset((void *)0x7bbfc0,0,0x32);
    pCVar3 = this_ptr;
    pcVar5 = (char *)0x7bbfc0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar5 = *(uint *)pCVar3->actor_name;
      pCVar3 = (CDemonActor *)((int)pCVar3 + (uint)bVar6 * -8 + 4);
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pcVar5 = pCVar3->actor_name[0];
      pCVar3 = (CDemonActor *)((int)pCVar3 + (uint)bVar6 * -2 + 1);
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    }
    core_main_c_FUN_004e4500
              ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\npos = %g,%g,%g",context_file,context_line,this_ptr,0x7bbfc0,dVar7
               ,dVar8,dVar9);
  }
  cVar1 = this_ptr->actor_name[0];
  uStack_18 = 0;
  pCVar3 = this_ptr;
  while (cVar1 != '\0') {
    if ((0x1c < uStack_18) || (((&DAT_0061ed94)[(byte)(pCVar3->actor_name[0] + 1)] & 8) == 0)) {
      dVar9 = (double)*(float *)&this_ptr->field_0x28;
      dVar8 = (double)*(float *)&this_ptr->field_0x24;
      dVar7 = (double)*(float *)&this_ptr->field_0x20;
      _DAT_01d046a0 = "..\\core\\actor.cpp";
      _DAT_01d046a4 = 0x7a3;
      memset((void *)0x7bbfc0,0,0x32);
      if (this_ptr != (CDemonActor *)0x0) {
        pCVar4 = this_ptr;
        pcVar5 = (char *)0x7bbfc0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)pcVar5 = *(uint *)pCVar4->actor_name;
          pCVar4 = (CDemonActor *)((int)pCVar4 + (uint)bVar6 * -8 + 4);
          pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
        }
        for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pcVar5 = pCVar4->actor_name[0];
          pCVar4 = (CDemonActor *)((int)pCVar4 + (uint)bVar6 * -2 + 1);
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      core_main_c_FUN_004e4500
                ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s",context_file,context_line,this_ptr,0x7bbfc0,
                 dVar7,dVar8,dVar9);
    }
    uStack_18 = uStack_18 + 1;
    pCVar3 = (CDemonActor *)(pCVar3->actor_name + 1);
    cVar1 = pCVar3->actor_name[0];
  }
  return;
}
