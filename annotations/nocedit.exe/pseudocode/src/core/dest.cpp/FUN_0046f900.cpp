// Name: core_dest.cpp_FUN_0046f900
// Address: 0046f900
// Address Range: [[0046f900, 0046f969]]
// Convention: __cdecl
// Signature: CActorDestination * core_dest.cpp_FUN_0046f900(CActorDestination * this_ptr)
// Cross-references:
//   core_dest.cpp_FUN_0046f8c0 (0046f8c0) at 0046f8da [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_ctor_FUN_004bea40 (004bea40) at 004bea48 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_0061e39d
//   undefined4 s_one_0061e39e
//   undefined4 s_ne_0061e39f
//   undefined4 s_e_0061e3a0
//   CDemonActor_vtable PTR_core_dest.cpp_FUN_0065c724
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_FUN_0046f900(CActorDestination *this_ptr)

{
  char cVar1;
  CActorDestination *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = "none";
  pCVar2 = (CActorDestination *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pcVar4 = pCVar2->what_event;
  (pCVar2->base_actor).metadata.vtable = &PTR_core_dest_cpp_FUN_0065c724;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2->dest_actor = 0;
  pCVar2->dest_class[0] = '\0';
  pCVar2->field5_0x1f0 = 1;
  pCVar2->persistent_event_flag = 1;
  return pCVar2;
}


// Assembly code:
// 0046f900: PUSH ESI
//   Label: core_dest.cpp_FUN_0046f900
// 0046f901: PUSH EDI
// 0046f902: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0046f906: PUSH EDX
// 0046f907: MOV ESI,0x61e39d
//   XREF to: 0061e39d (DATA)
// 0046f90c: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0046f911: MOV EDX,EAX
// 0046f913: ADD ESP,0x4
// 0046f916: LEA EDI,[EAX + 0x188]
// 0046f91c: MOV dword ptr [EAX + 0x154],0x65c724
//   XREF to: 0065c724 (DATA)
// 0046f926: PUSH EDI
// 0046f927: MOV AL,byte ptr [ESI]
//   Label: LAB_0046f927
//   XREF to: 0061e39d (READ)
//   XREF to: 0061e39f (READ)
// 0046f929: MOV byte ptr [EDI],AL
// 0046f92b: CMP AL,0x0
// 0046f92d: JZ 0x0046f93f
//   XREF to: 0046f93f (CONDITIONAL_JUMP)
// 0046f92f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061e39e (READ)
//   XREF to: 0061e3a0 (READ)
// 0046f932: ADD ESI,0x2
// 0046f935: MOV byte ptr [EDI + 0x1],AL
// 0046f938: ADD EDI,0x2
// 0046f93b: CMP AL,0x0
// 0046f93d: JNZ 0x0046f927
//   XREF to: 0046f927 (CONDITIONAL_JUMP)
// 0046f93f: POP EDI
//   Label: LAB_0046f93f
// 0046f940: MOV dword ptr [EDX + 0x158],0x0
// 0046f94a: MOV byte ptr [EDX + 0x15c],0x0
// 0046f951: MOV dword ptr [EDX + 0x1f0],0x1
// 0046f95b: MOV EAX,EDX
// 0046f95d: MOV dword ptr [EDX + 0x1ec],0x1
// 0046f967: POP EDI
// 0046f968: POP ESI
// 0046f969: RET
