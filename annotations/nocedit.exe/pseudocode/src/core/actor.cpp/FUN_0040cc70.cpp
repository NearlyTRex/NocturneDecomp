// Name: core_actor.cpp_FUN_0040cc70
// Address: 0040cc70
// Address Range: [[0040cc70, 0040cd0a]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_0040cc70()
// Cross-references:
//   core_batcreat.cpp_FUN_00416030 (00416030) at 004160e4 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_004179a0 (004179a0) at 00417a54 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_00418b50 (00418b50) at 00418b7d [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0 (0041bbc0) at 0041bcae [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041cc40 (0041cc40) at 0041d11b [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422ac3 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00424e50 (00424e50) at 00424faf [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004270f0 (004270f0) at 004272cb [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00427400 (00427400) at 0042763b [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042e050 (0042e050) at 0042e2a5 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00485829 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486070 (00486070) at 00486285 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048f360 (0048f360) at 0048f448 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a7160 (004a7160) at 004a71d4 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a81b4 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c79d0 (004c79d0) at 004c7a27 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c7db0 (004c7db0) at 004c7e04 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004bf7f0 (004bf7f0) at 004bf8cd [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e87e0 (004e87e0) at 004e8b55 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8e40 (004e8e40) at 004e8e52 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004eb9a0 (004eb9a0) at 004eb9b0 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ec2f0 (004ec2f0) at 004ec320 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ec390 (004ec390) at 004ec3f4 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ed0d0 (004ed0d0) at 004ed0e1 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_ctor_FUN_00525200 (00525200) at 00525261 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00526d90 (00526d90) at 0052716d [UNCONDITIONAL_CALL]
//   core_npc.cpp_FUN_00544c50 (00544c50) at 00544cab [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_SentinelBehavior_FUN_00568cd0 (00568cd0) at 00568d63 [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_00588060 (00588060) at 005880d1 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6a39 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e7030 (005e7030) at 005e708f [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f0c1e [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1ac0 (005f1ac0) at 005f1c9c [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fca10 (005fca10) at 005fca5b [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fcb70 (005fcb70) at 005fcc01 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fbc98 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_006142f8 = 0.999990000000000
//   float FLOAT_00614300 = 0.00003051851
//   int INT_00614304 = 0x33800001
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cd8
// Function calls:
//   core_actor.cpp_generateRandomValue_FUN_0040cba0
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

int core_actor_cpp_FUN_0040cc70(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  float10 fVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  iVar3 = g_CGamePtr->is_processing;
  uStack_1c = (undefined4)
              ((ulonglong)((double)(in_stack_00000008 - in_stack_00000004) + DOUBLE_006142f8) >>
              0x20);
  if (iVar3 == 0) {
    uVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    fVar1 = (float)(int)uVar2 * FLOAT_00614300;
  }
  else {
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040cba0();
    fVar1 = (float)(int)uVar2 * (float)INT_00614304;
    iVar3 = extraout_EDX;
  }
  fVar4 = (float10)in_stack_00000004 +
          (float10)fVar1 * (float10)(double)CONCAT44(local_18,uStack_1c);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar3,uVar2));
  iVar3 = (int)ROUND(fVar4);
  if ((in_stack_00000004 <= iVar3) &&
     (in_stack_00000004 = in_stack_00000008, iVar3 <= in_stack_00000008)) {
    return iVar3;
  }
  return in_stack_00000004;
}


// Assembly code:
// 0040cc70: PUSH EBX
//   Label: core_actor.cpp_FUN_0040cc70
// 0040cc71: PUSH ESI
// 0040cc72: PUSH EBP
// 0040cc73: MOV EBP,ESP
// 0040cc75: SUB ESP,0x14
// 0040cc78: AND ESP,0xfffffff8
// 0040cc7b: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040cc7e: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040cc81: MOV EAX,ESI
// 0040cc83: SUB EAX,EBX
// 0040cc85: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0040cc89: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0040cc8d: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0040cc92: FADD double ptr [0x006142f8]
//   XREF to: 006142f8 (READ)
// 0040cc98: MOV EDX,dword ptr [EAX + 0x23c]
//   XREF to: 02d81cd8 (READ)
// 0040cc9e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0040cca1: TEST EDX,EDX
// 0040cca3: JNZ 0x0040ccea
//   XREF to: 0040ccea (CONDITIONAL_JUMP)
// 0040cca5: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 0040ccaa: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0040ccae: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0040ccb2: FMUL float ptr [0x00614300]
//   XREF to: 00614300 (READ)
// 0040ccb8: FSTP float ptr [ESP + 0x8]
//   Label: LAB_0040ccb8
//   XREF to: Stack[-0x18] (WRITE)
// 0040ccbc: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0040ccc0: FMUL double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0040ccc3: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 0040ccc7: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0040cccb: FADDP
// 0040cccd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0040ccd2: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 0040ccd6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0040ccda: CMP EBX,ECX
// 0040ccdc: JG 0x0040ccff
//   XREF to: 0040ccff (CONDITIONAL_JUMP)
// 0040ccde: CMP ESI,ECX
// 0040cce0: JGE 0x0040cd03
//   XREF to: 0040cd03 (CONDITIONAL_JUMP)
// 0040cce2: MOV EAX,ESI
// 0040cce4: MOV ESP,EBP
//   Label: LAB_0040cce4
// 0040cce6: POP EBP
// 0040cce7: POP ESI
// 0040cce8: POP EBX
// 0040cce9: RET
// 0040ccea: CALL core_actor.cpp_generateRandomValue_FUN_0040cba0
//   Label: LAB_0040ccea
//   XREF to: 0040cba0 (UNCONDITIONAL_CALL)
// 0040ccef: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0040ccf3: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0040ccf7: FMUL float ptr [0x00614304]
//   XREF to: 00614304 (READ)
// 0040ccfd: JMP 0x0040ccb8
//   XREF to: 0040ccb8 (UNCONDITIONAL_JUMP)
// 0040ccff: MOV EAX,EBX
//   Label: LAB_0040ccff
// 0040cd01: JMP 0x0040cce4
//   XREF to: 0040cce4 (UNCONDITIONAL_JUMP)
// 0040cd03: MOV EAX,ECX
//   Label: LAB_0040cd03
// 0040cd05: MOV ESP,EBP
// 0040cd07: POP EBP
// 0040cd08: POP ESI
// 0040cd09: POP EBX
// 0040cd0a: RET
