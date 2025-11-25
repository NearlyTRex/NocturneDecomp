// Name: core_enemy.cpp_FUN_004a9880
// Address: 004a9880
// Address Range: [[004a9880, 004a9927]]
// Convention: unknown
// Signature: undefined core_enemy.cpp_FUN_004a9880()
// Cross-references:
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 004157b4 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416fb6 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c696 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 0044461d [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f468 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484dc8 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048f014 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4dd2 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e7d55 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f725a [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa2b7 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525e4c [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 00568607 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2c46 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062438a = 1.20000000000000
//   double DOUBLE_00624392 = 0.25
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_gore.cpp_FUN_004edbb0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

undefined4 core_enemy_cpp_FUN_004a9880(void)

{
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar1;
  double dVar2;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  int in_stack_00000010;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  if (*(int *)(in_stack_00000004 + 0xbe3c) != 0) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0xbe3c) + 0x154) + 0x114))();
    if (0.0 < *(float *)(in_stack_00000010 + 4)) {
      uStack_20 = *in_stack_00000008;
      fVar1 = (float10)*(float *)(in_stack_00000010 + 4) * (float10)DOUBLE_0062438a *
              (float10)DOUBLE_00624392;
      dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,in_stack_00000008[1]));
      uStack_1c = SUB84(dVar2,0);
      iStack_14 = (int)ROUND(fVar1);
      uStack_18 = in_stack_00000008[2];
      core_gore_cpp_FUN_004edbb0(&uStack_20,(int)((ulonglong)dVar2 >> 0x20));
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 004a9880: PUSH EBX
//   Label: core_enemy.cpp_FUN_004a9880
// 004a9881: PUSH ESI
// 004a9882: PUSH EBP
// 004a9883: MOV EBP,ESP
// 004a9885: SUB ESP,0x18
// 004a9888: AND ESP,0xfffffff8
// 004a988b: MOV EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004a988e: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004a9891: MOV EDX,dword ptr [EAX + 0xbe3c]
// 004a9897: TEST EDX,EDX
// 004a9899: JNZ 0x004a98a3
//   XREF to: 004a98a3 (CONDITIONAL_JUMP)
// 004a989b: XOR EAX,EAX
//   Label: LAB_004a989b
// 004a989d: MOV ESP,EBP
// 004a989f: POP EBP
// 004a98a0: POP ESI
// 004a98a1: POP EBX
// 004a98a2: RET
// 004a98a3: MOV ECX,dword ptr [EBP + 0x1c]
//   Label: LAB_004a98a3
//   XREF to: Stack[0x10] (READ)
// 004a98a6: PUSH ECX
// 004a98a7: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004a98aa: PUSH EBX
// 004a98ab: MOV EAX,EDX
// 004a98ad: MOV EDX,dword ptr [EDX + 0x154]
// 004a98b3: PUSH EAX
// 004a98b4: CALL dword ptr [EDX + 0x114]
// 004a98ba: ADD ESP,0x10
// 004a98bd: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 004a98c0: FLDZ
// 004a98c2: FLD float ptr [EAX + 0x4]
// 004a98c5: FSTP double ptr [ESP]
// 004a98c8: FCOMP double ptr [ESP]
// 004a98cb: FNSTSW AX
// 004a98cd: SAHF
// 004a98ce: JNC 0x004a989b
//   XREF to: 004a989b (CONDITIONAL_JUMP)
// 004a98d0: FLD double ptr [ESP]
// 004a98d3: FMUL double ptr [0x0062438a]
//   XREF to: 0062438a (READ)
// 004a98d9: MOV EAX,dword ptr [EBX]
// 004a98db: FMUL double ptr [0x00624392]
//   XREF to: 00624392 (READ)
// 004a98e1: MOV dword ptr [ESP + 0x8],EAX
// 004a98e5: LEA EAX,[EBX + 0x4]
// 004a98e8: PUSH 0x0
// 004a98ea: MOV EAX,dword ptr [EAX]
// 004a98ec: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004a98f1: MOV dword ptr [ESP + 0x10],EAX
// 004a98f5: LEA EAX,[EBX + 0x8]
// 004a98f8: FISTP dword ptr [ESP + 0x18]
// 004a98fc: MOV EBX,dword ptr [ESP + 0x18]
// 004a9900: PUSH EBX
// 004a9901: MOV EAX,dword ptr [EAX]
// 004a9903: PUSH 0x0
// 004a9905: MOV dword ptr [ESP + 0x1c],EAX
// 004a9909: LEA EAX,[ESP + 0x14]
// 004a990d: PUSH EAX
// 004a990e: MOV ESI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 004a9914: PUSH ESI
//   XREF to: 02d83364 (DATA)
// 004a9915: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 004a991a: MOV EAX,0x1
// 004a991f: ADD ESP,0x14
// 004a9922: MOV ESP,EBP
// 004a9924: POP EBP
// 004a9925: POP ESI
// 004a9926: POP EBX
// 004a9927: RET
