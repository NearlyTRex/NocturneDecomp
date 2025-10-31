// Name: core_actor.cpp_CActorPropertyList_FUN_0040e350
// Address: 0040e350
// Address Range: [[0040e350, 0040e3ac]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList * this_ptr)
// Cross-references:
//   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 (00411b30) at 00411b7b [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004226e0 (004226e0) at 004227d4 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_00431120 (00431120) at 00431178 [UNCONDITIONAL_CALL]
//   core_dest.cpp_FUN_0046fe80 (0046fe80) at 0046feaa [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8db0 (004a8db0) at 004a8fcf [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_CFilmReel_FUN_004bee30 (004bee30) at 004bee5a [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_getPropertyList_FUN_004e5af0 (004e5af0) at 004e5b86 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f69c0 (004f69c0) at 004f6a08 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502ca0 (00502ca0) at 00502cde [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505240 (00505240) at 00505305 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_00520d10 (00520d10) at 00520d78 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527b70 (00527b70) at 00527bc1 [UNCONDITIONAL_CALL]
//   core_stone.cpp_FUN_005badd0 (005badd0) at 005bae00 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_FUN_005daba0 (005daba0) at 005dabd0 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_FUN_005dbc60 (005dbc60) at 005dbcb1 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e3ca0 (005e3ca0) at 005e3d91 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e7650 (005e7650) at 005e76e9 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e9c00 (005e9c00) at 005e9c41 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f20d0 (005f20d0) at 005f214e [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fca80 (005fca80) at 005fcaf7 [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 DAT_00614464
//   TerminatedCString s_s_d_00614465
//   undefined4 s_s_%d_00614466
//   undefined4 s_%d_00614467
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

int __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000014;
  
  iVar2 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(this_ptr);
  pcVar3 = in_stack_00000014;
  if (in_stack_00000014 == (char *)0x0) {
    pcVar3 = &DAT_00614464;
  }
  pcVar4 = (char *)(iVar2 + 0x84);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(char **)(iVar2 + 0x5c) = in_stack_00000014;
  return iVar2;
}


// Assembly code:
// 0040e350: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e350
// 0040e351: PUSH ESI
// 0040e352: PUSH EDI
// 0040e353: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 0040e357: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x18] (READ)
// 0040e35b: PUSH EDX
// 0040e35c: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0040e360: PUSH ECX
// 0040e361: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0040e365: PUSH EBX
// 0040e366: PUSH 0x5
// 0040e368: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0040e36c: PUSH EDI
// 0040e36d: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e372: MOV EDX,EAX
// 0040e374: ADD ESP,0x14
// 0040e377: TEST ESI,ESI
// 0040e379: JNZ 0x0040e380
//   XREF to: 0040e380 (CONDITIONAL_JUMP)
// 0040e37b: MOV ESI,0x614464
//   XREF to: 00614464 (DATA)
// 0040e380: LEA EDI,[EDX + 0x84]
//   Label: LAB_0040e380
// 0040e386: PUSH EDI
// 0040e387: MOV AL,byte ptr [ESI]
//   Label: LAB_0040e387
//   XREF to: 00614464 (READ)
//   XREF to: 00614466 (READ)
// 0040e389: MOV byte ptr [EDI],AL
// 0040e38b: CMP AL,0x0
// 0040e38d: JZ 0x0040e39f
//   XREF to: 0040e39f (CONDITIONAL_JUMP)
// 0040e38f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00614465 (READ)
//   XREF to: 00614467 (READ)
// 0040e392: ADD ESI,0x2
// 0040e395: MOV byte ptr [EDI + 0x1],AL
// 0040e398: ADD EDI,0x2
// 0040e39b: CMP AL,0x0
// 0040e39d: JNZ 0x0040e387
//   XREF to: 0040e387 (CONDITIONAL_JUMP)
// 0040e39f: POP EDI
//   Label: LAB_0040e39f
// 0040e3a0: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0040e3a4: MOV EAX,EDX
// 0040e3a6: MOV dword ptr [EDX + 0x5c],ESI
// 0040e3a9: POP EDI
// 0040e3aa: POP ESI
// 0040e3ab: POP EBX
// 0040e3ac: RET
