// Name: core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
// Address: 0040ac80
// MANUAL RECONSTRUCTION
// Address Range: [[0040ac80, 0040aed8]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor *this_ptr,char *context_file,int context_line)

#include "nocturne.h"
#include "debug_log.h"

void __cdecl core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor *this_ptr,char *context_file,int context_line)

{
  CDemonActor *pCVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  int char_index;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar2;
  float fVar3;
  char cVar4;
  float fVar1;


  if (this_ptr == nullptr || (uintptr_t)this_ptr < 0x1000) {
    DWARN("Invalid actor pointer %p from %s:%d",
          (void *)this_ptr,
          context_file ? context_file : "(null)", context_line);
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x70e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid actor pointer %08X detected at %s, line %d",(uintptr_t)this_ptr,context_file,context_line);
    return;
  }
  if ((int *)this_ptr->validation_magic != &g_ActorMagicNumber) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x718;
    memset(g_ActorDebugBuffer,0,0x32);
    memcpy(g_ActorDebugBuffer,this_ptr,0x31);
    core_main_c_displayErrorAndQuit_FUN_00506f10("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\ncreateStatus = %d",context_file,context_line,(uintptr_t)this_ptr,g_ActorDebugBuffer,this_ptr->lifecycle_state);
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
    memcpy(g_ActorDebugBuffer,this_ptr,0x31);
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\npos = %g,%g,%g",context_file,context_line,(uintptr_t)this_ptr,
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
      memcpy(g_ActorDebugBuffer,this_ptr,0x31);
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s",context_file,context_line,(uintptr_t)this_ptr,
                 g_ActorDebugBuffer,dVar4,dVar5,dVar6);
    }
    char_index = char_index + 1;
    pCVar2 = (CDemonActor *)(pCVar2->actor_name + 1);
    cVar4 = pCVar2->actor_name[0];
  }
  return;
}
