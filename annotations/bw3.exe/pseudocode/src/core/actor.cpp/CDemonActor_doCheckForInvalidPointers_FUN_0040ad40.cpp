// Name: core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ad40
// Address: 0040ad40
// Address Range: [[0040ad40, 0040af98]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ad40(CDemonActor *this_ptr,char *context_file,int context_line)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ad40(CDemonActor *this_ptr,char *context_file,int context_line)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  CDemonActor *pCVar6;
  CDemonActor *pCVar7;
  char *pcVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uStack_18;
  
  bVar9 = 0;
  if (this_ptr == (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0x77b;
    core_main_c_FUN_004e4330();
  }
  if (((CDemonActor *)0xfeffffff < this_ptr) || ((int)this_ptr < 0x1000)) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0x77f;
    core_main_c_FUN_004e4330("Invalid actor pointer %08X detected at %s, line %d",this_ptr,context_file);
  }
  if ((byte *)this_ptr->validation_magic != &DAT_0078a123) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0x789;
    memset((void *)0x7df940,0,0x32);
    pCVar6 = this_ptr;
    pcVar8 = (char *)0x7df940;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pcVar8 = *(uint *)pCVar6->actor_name;
      pCVar6 = (CDemonActor *)((int)pCVar6 + (uint)bVar9 * -8 + 4);
      pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
    }
    for (iVar5 = 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pcVar8 = pCVar6->actor_name[0];
      pCVar6 = (CDemonActor *)((int)pCVar6 + (uint)bVar9 * -2 + 1);
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
    core_main_c_FUN_004e4330
              ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\ncreateStatus = %d",context_file,context_line,this_ptr,0x7df940);
  }
  fVar1 = (this_ptr->location).position.y;
  fVar2 = (this_ptr->location).position.x;
  fVar3 = (this_ptr->location).position.z;
  if (_DAT_005b5849 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
    dVar12 = (double)(this_ptr->location).position.z;
    dVar11 = (double)(this_ptr->location).position.y;
    dVar10 = (double)(this_ptr->location).position.x;
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0x794;
    memset((void *)0x7df940,0,0x32);
    pCVar6 = this_ptr;
    pcVar8 = (char *)0x7df940;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pcVar8 = *(uint *)pCVar6->actor_name;
      pCVar6 = (CDemonActor *)((int)pCVar6 + (uint)bVar9 * -8 + 4);
      pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
    }
    for (iVar5 = 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pcVar8 = pCVar6->actor_name[0];
      pCVar6 = (CDemonActor *)((int)pCVar6 + (uint)bVar9 * -2 + 1);
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
    core_main_c_FUN_004e4330
              ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\npos = %g,%g,%g",context_file,context_line,this_ptr,0x7df940,
               dVar10,dVar11,dVar12);
  }
  cVar4 = this_ptr->actor_name[0];
  uStack_18 = 0;
  pCVar6 = this_ptr;
  while (cVar4 != '\0') {
    if ((0x1c < uStack_18) || (((&DAT_006074b8)[(byte)(pCVar6->actor_name[0] + 1)] & 8) == 0)) {
      dVar12 = (double)(this_ptr->location).position.z;
      dVar11 = (double)(this_ptr->location).position.y;
      dVar10 = (double)(this_ptr->location).position.x;
      _DAT_01d71de0 = "..\\core\\actor.cpp";
      _DAT_01d71de4 = 0x7a2;
      memset((void *)0x7df940,0,0x32);
      if (this_ptr != (CDemonActor *)0x0) {
        pCVar7 = this_ptr;
        pcVar8 = (char *)0x7df940;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(uint *)pcVar8 = *(uint *)pCVar7->actor_name;
          pCVar7 = (CDemonActor *)((int)pCVar7 + (uint)bVar9 * -8 + 4);
          pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
        }
        for (iVar5 = 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pcVar8 = pCVar7->actor_name[0];
          pCVar7 = (CDemonActor *)((int)pCVar7 + (uint)bVar9 * -2 + 1);
          pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
        }
      }
      core_main_c_FUN_004e4330
                ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s",context_file,context_line,this_ptr,0x7df940,
                 dVar10,dVar11,dVar12);
    }
    uStack_18 = uStack_18 + 1;
    pCVar6 = (CDemonActor *)(pCVar6->actor_name + 1);
    cVar4 = pCVar6->actor_name[0];
  }
  return;
}
