// Name: core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
// Address: 0040ac80
// Address Range: [[0040ac80, 0040aed8]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor *this_ptr,char *context_file,int context_line)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor *this_ptr,char *context_file,int context_line)

{
  int iVar5;
  int iVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar6;
  CDemonActor *pCVar7;
  char *pcVar3;
  char *pcVar8;
  byte bVar9;
  double dVar4;
  double dVar5;
  double dVar6;
  int char_index;
  CDemonActor *current_ptr;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar2;
  float fVar3;
  char cVar4;
  float fVar1;
  
  bVar9 = 0;
  if (this_ptr == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x70a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("NULL actor pointer detected, %s line %d",context_file);
  }
  if (((CDemonActor *)0xfeffffff < this_ptr) || ((int)this_ptr < 0x1000)) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x70e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid actor pointer %08X detected at %s, line %d");
  }
  if ((int *)this_ptr->validation_magic != &g_ActorMagicNumber) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x718;
    memset(g_ActorDebugBuffer,0,0x32);
    pCVar2 = this_ptr;
    pcVar3 = g_ActorDebugBuffer;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pcVar3 = *(uint *)pCVar2->actor_name;
      pCVar2 = (CDemonActor *)((int)pCVar2 + (uint)bVar9 * -8 + 4);
      pcVar3 = pcVar3 + ((uint)bVar9 * -2 + 1) * 4;
    }
    for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pcVar3 = pCVar2->actor_name[0];
      pCVar2 = (CDemonActor *)((int)pCVar2 + (uint)bVar9 * -2 + 1);
      pcVar3 = pcVar3 + (uint)bVar9 * -2 + 1;
    }
    core_main_c_displayErrorAndQuit_FUN_00506f10("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\ncreateStatus = %d");
  }
  fVar1 = (this_ptr->location).position.y;
  fVar2 = (this_ptr->location).position.x;
  fVar3 = (this_ptr->location).position.z;
  if (99999.0f < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
    dVar12 = (double)(this_ptr->location).position.z;
    dVar11 = (double)(this_ptr->location).position.y;
    dVar10 = (double)(this_ptr->location).position.x;
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x723;
    memset(g_ActorDebugBuffer,0,0x32);
    pCVar6 = this_ptr;
    pcVar3 = g_ActorDebugBuffer;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(uint *)pcVar3 = *(uint *)pCVar6->actor_name;
      pCVar6 = (CDemonActor *)((int)pCVar6 + (uint)bVar9 * -8 + 4);
      pcVar3 = pcVar3 + ((uint)bVar9 * -2 + 1) * 4;
    }
    for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar6 = (CDemonActor *)((int)pCVar6 + (uint)bVar9 * -2 + 1);
      *pcVar3 = pCVar6->actor_name[0];
      pCVar6 = pCVar6;
      pcVar3 = pcVar3 + (uint)bVar9 * -2 + 1;
    }
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\npos = %g,%g,%g",context_file,context_line,this_ptr,
               g_ActorDebugBuffer,dVar10,dVar11,dVar12);
  }
  cVar4 = this_ptr->actor_name[0];
  char_index = 0;
  pCVar2 = this_ptr;
  while (cVar4 != '\0') {
    if ((0x1c < (uint)char_index) ||
       ((g_CharacterClassificationTable[(byte)(pCVar2->actor_name[0] + 1)] & 8) == 0)) {
      dVar6 = (double)(this_ptr->location).position.z;
      dVar5 = (double)(this_ptr->location).position.y;
      dVar4 = (double)(this_ptr->location).position.x;
      g_CurrentFilename = "..\\core\\actor.cpp";
      g_CurrentLineNumber = 0x731;
      memset(g_ActorDebugBuffer,0,0x32);
      if (this_ptr != (CDemonActor *)0x0) {
        pCVar7 = this_ptr;
        pcVar8 = g_ActorDebugBuffer;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(uint *)pcVar8 = *(uint *)pCVar7->actor_name;
          pCVar7 = (CDemonActor *)((int)pCVar7 + (uint)bVar9 * -8 + 4);
          pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
        }
        for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
          pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
          pCVar7 = (CDemonActor *)((int)pCVar7 + (uint)bVar9 * -2 + 1);
          *pcVar8 = pCVar7->actor_name[0];
          pCVar7 = pCVar7;
          pcVar8 = pcVar8;
        }
      }
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s",context_file,context_line,this_ptr,
                 g_ActorDebugBuffer,dVar4,dVar5,dVar6);
    }
    char_index = char_index + 1;
    pCVar2 = (CDemonActor *)(pCVar2->actor_name + 1);
    cVar4 = pCVar2->actor_name[0];
  }
  return;
}
