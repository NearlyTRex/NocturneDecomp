// Name: core_charactr.cpp_CCharacter_FUN_0042c3c0
// Address: 0042c3c0
// Address Range: [[0042c3c0, 0042c579]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042c3c0(CCharacter * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaron_FUN_00413cd0 (00413cd0) at 00413ce1 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_CColonel_FUN_004404b0 (004404b0) at 004405a0 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_FUN_004a9f10 (004a9f10) at 004a9f2d [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_CGabriella_FUN_004d6b30 (004d6b30) at 004d6c88 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_CHaystack_FUN_004f1b70 (004f1b70) at 004f1c00 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_CIcePick_FUN_004f95b0 (004f95b0) at 004f9721 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_FUN_00544d30 (00544d30) at 00544e01 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557ea0 (00557ea0) at 00557fa2 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c48b0 (005c48b0) at 005c4afd [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_FUN_005d9d30 (005d9d30) at 005d9e80 [UNCONDITIONAL_CALL]
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   CGame g_CGameInstance
//   CGore g_CGoreInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_charactr.cpp_CCharacter_FUN_0042b190
//   core_charactr.cpp_CCharacter_FUN_0042b5b0
//   core_charactr.cpp_CCharacter_FUN_0042b8e0
//   core_charactr.cpp_CCharacter_FUN_0042b930
//   core_charactr.cpp_CCharacter_FUN_0042b9e0
//   core_charactr.cpp_CCharacter_FUN_0042d060
//   core_game.cpp_CGame_FUN_004e0bf0
//   core_gore.cpp_FUN_004edbb0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042c3c0(CCharacter *this_ptr)

{
  uint uVar1;
  undefined4 *extraout_EDX;
  undefined4 *puVar2;
  undefined4 *extraout_EDX_00;
  undefined4 *extraout_EDX_01;
  undefined4 *extraout_EDX_02;
  undefined4 *extraout_EDX_03;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  undefined4 *in_stack_00000008;
  CCharacter *in_stack_ffffffc8;
  CVector3f *input_local_point;
  CVector3f CStack_24;
  undefined1 auStack_18 [4];
  int iStack_14;
  
  if ((float)in_stack_00000008[1] <= 0.0) {
    return;
  }
  puVar2 = in_stack_00000008 + 3;
  uVar1 = in_stack_00000008[0xc];
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        in_stack_ffffffc8 = (CCharacter *)0x42c426;
        core_charactr_cpp_CCharacter_FUN_0042b930(this_ptr);
        puVar2 = extraout_EDX;
      }
      goto LAB_0042c429;
    }
    if (4 < uVar1) {
      core_charactr_cpp_CCharacter_FUN_0042b8e0(this_ptr);
      puVar2 = extraout_EDX_03;
      goto LAB_0042c429;
    }
LAB_0042c50c:
    in_stack_ffffffc8 = this_ptr;
    core_charactr_cpp_CCharacter_FUN_0042b9e0(this_ptr);
    puVar2 = extraout_EDX_01;
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_0042c429;
        goto LAB_0042c50c;
      }
      if (uVar1 < 0x69) {
        core_charactr_cpp_CCharacter_FUN_0042b190(this_ptr);
        puVar2 = extraout_EDX_02;
        goto LAB_0042c429;
      }
      if (uVar1 != 0x6a) goto LAB_0042c429;
    }
    this_ptr->cloth_data[0x8d48] = '\0';
    this_ptr->cloth_data[0x8d49] = '\0';
    this_ptr->cloth_data[0x8d4a] = '\0';
    this_ptr->cloth_data[0x8d4b] = '@';
  }
LAB_0042c429:
  if (in_stack_00000008[10] == 5) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base_actor,&CStack_24,(CVector3f *)(in_stack_00000008 + 7));
    in_stack_ffffffc8 = (CCharacter *)*in_stack_00000008;
    core_charactr_cpp_CCharacter_FUN_0042b5b0(this_ptr);
    puVar2 = extraout_EDX_00;
  }
  if (0.0 < (float)in_stack_00000008[2]) {
    fVar3 = (float10)(float)in_stack_00000008[1] * (float10)(float)in_stack_00000008[2];
    input_local_point = (CVector3f *)0x42c47c;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(puVar2,auStack_18));
    iStack_14 = (int)ROUND(fVar3);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base_actor,(CVector3f *)in_stack_ffffffc8,input_local_point);
    core_gore_cpp_FUN_004edbb0();
  }
  if ((this_ptr->health_bar_mode == 1) && ((CHero *)this_ptr != g_HeroActors[g_LocalHeroIndex])) {
    core_game_cpp_CGame_FUN_004e0bf0(g_CGamePtr);
  }
  if (0.0 < this_ptr->hit_points) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042d060(this_ptr);
  return;
}


// Assembly code:
// 0042c3c0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042c3c0
// 0042c3c1: PUSH ESI
// 0042c3c2: PUSH EBP
// 0042c3c3: SUB ESP,0x1c
// 0042c3c6: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0042c3ca: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0042c3ce: FLD float ptr [ESI + 0x4]
// 0042c3d1: FLDZ
// 0042c3d3: FCOMPP
// 0042c3d5: FNSTSW AX
// 0042c3d7: SAHF
// 0042c3d8: JNC 0x0042c505
//   XREF to: 0042c505 (CONDITIONAL_JUMP)
// 0042c3de: LEA EDX,[ESI + 0xc]
// 0042c3e1: FLD float ptr [EDX + 0x4]
// 0042c3e4: FMUL ST0
// 0042c3e6: FLD float ptr [EDX]
// 0042c3e8: FMUL ST0
// 0042c3ea: FADDP
// 0042c3ec: FLD float ptr [EDX + 0x8]
// 0042c3ef: FMUL ST0
// 0042c3f1: FADDP
// 0042c3f3: FSQRT
// 0042c3f5: XOR ECX,ECX
// 0042c3f7: FLDZ
// 0042c3f9: FCOMPP
// 0042c3fb: FNSTSW AX
// 0042c3fd: SAHF
// 0042c3fe: JNC 0x0042c402
//   XREF to: 0042c402 (CONDITIONAL_JUMP)
// 0042c400: MOV ECX,EDX
// 0042c402: MOV EAX,dword ptr [ESI + 0x30]
//   Label: LAB_0042c402
// 0042c405: CMP EAX,0x6
// 0042c408: JNC 0x0042c53d
//   XREF to: 0042c53d (CONDITIONAL_JUMP)
// 0042c40e: CMP EAX,0x4
// 0042c411: JNC 0x0042c55a
//   XREF to: 0042c55a (CONDITIONAL_JUMP)
// 0042c417: CMP EAX,0x3
// 0042c41a: JNZ 0x0042c429
//   XREF to: 0042c429 (CONDITIONAL_JUMP)
// 0042c41c: PUSH dword ptr [ESI + 0x18]
// 0042c41f: PUSH ECX
// 0042c420: PUSH EBX
// 0042c421: CALL core_charactr.cpp_CCharacter_FUN_0042b930
//   XREF to: 0042b930 (UNCONDITIONAL_CALL)
// 0042c426: ADD ESP,0xc
// 0042c429: CMP dword ptr [ESI + 0x28],0x5
//   Label: LAB_0042c429
// 0042c42d: JNZ 0x0042c45b
//   XREF to: 0042c45b (CONDITIONAL_JUMP)
// 0042c42f: LEA EAX,[ESI + 0x1c]
// 0042c432: PUSH EAX
// 0042c433: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x28] (DATA)
// 0042c437: PUSH EAX
// 0042c438: PUSH EBX
// 0042c439: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042c43e: ADD ESP,0xc
// 0042c441: PUSH 0x0
// 0042c443: PUSH 0x3f800000
// 0042c448: PUSH 0x0
// 0042c44a: MOV ECX,dword ptr [ESI]
// 0042c44c: PUSH ECX
// 0042c44d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x28] (DATA)
// 0042c451: PUSH EAX
// 0042c452: PUSH EBX
// 0042c453: CALL core_charactr.cpp_CCharacter_FUN_0042b5b0
//   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)
// 0042c458: ADD ESP,0x18
// 0042c45b: FLD float ptr [ESI + 0x8]
//   Label: LAB_0042c45b
// 0042c45e: FLDZ
// 0042c460: FCOMPP
// 0042c462: FNSTSW AX
// 0042c464: SAHF
// 0042c465: JNC 0x0042c4ae
//   XREF to: 0042c4ae (CONDITIONAL_JUMP)
// 0042c467: PUSH EDI
// 0042c468: FLD float ptr [ESI + 0x4]
// 0042c46b: LEA EAX,[ESI + 0x1c]
// 0042c46e: FMUL float ptr [ESI + 0x8]
// 0042c471: PUSH EAX
// 0042c472: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1c] (DATA)
// 0042c476: PUSH EAX
// 0042c477: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0042c47c: PUSH EBX
// 0042c47d: FISTP dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x10] (WRITE)
// 0042c481: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x10] (READ)
// 0042c485: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042c48a: ADD ESP,0xc
// 0042c48d: MOV EBP,dword ptr [EBX + 0x2610]
// 0042c493: PUSH EBP
// 0042c494: INC EDI
// 0042c495: PUSH EDI
// 0042c496: ADD ESI,0xc
// 0042c499: PUSH ESI
// 0042c49a: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x1c] (DATA)
// 0042c49e: PUSH EAX
// 0042c49f: MOV EAX,[0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0042c4a4: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 0042c4a5: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 0042c4aa: ADD ESP,0x14
// 0042c4ad: POP EDI
// 0042c4ae: CMP dword ptr [EBX + 0x2444],0x1
//   Label: LAB_0042c4ae
// 0042c4b5: JNZ 0x0042c4f2
//   XREF to: 0042c4f2 (CONDITIONAL_JUMP)
// 0042c4b7: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0042c4bc: CMP EBX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0042c4c3: JZ 0x0042c4f2
//   XREF to: 0042c4f2 (CONDITIONAL_JUMP)
// 0042c4c5: FLD float ptr [EBX + 0x243c]
// 0042c4cb: FDIV float ptr [EBX + 0x2440]
// 0042c4d1: PUSH 0x40a00000
// 0042c4d6: SUB ESP,0x4
// 0042c4d9: LEA EAX,[EBX + 0x2448]
// 0042c4df: FSTP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0042c4e2: PUSH EAX
// 0042c4e3: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0042c4e9: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 0042c4ea: CALL core_game.cpp_CGame_FUN_004e0bf0
//   XREF to: 004e0bf0 (UNCONDITIONAL_CALL)
// 0042c4ef: ADD ESP,0x10
// 0042c4f2: FLD float ptr [EBX + 0x243c]
//   Label: LAB_0042c4f2
// 0042c4f8: FLDZ
// 0042c4fa: FCOMPP
// 0042c4fc: FNSTSW AX
// 0042c4fe: SAHF
// 0042c4ff: JNC 0x0042c56a
//   XREF to: 0042c56a (CONDITIONAL_JUMP)
// 0042c505: ADD ESP,0x1c
//   Label: LAB_0042c505
// 0042c508: POP EBP
// 0042c509: POP ESI
// 0042c50a: POP EBX
// 0042c50b: RET
// 0042c50c: PUSH 0x0
//   Label: LAB_0042c50c
// 0042c50e: PUSH dword ptr [ESI + 0x18]
// 0042c511: PUSH ECX
// 0042c512: PUSH EBX
// 0042c513: CALL core_charactr.cpp_CCharacter_FUN_0042b9e0
//   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)
// 0042c518: ADD ESP,0x10
// 0042c51b: JMP 0x0042c429
//   XREF to: 0042c429 (UNCONDITIONAL_JUMP)
// 0042c520: PUSH EBX
//   Label: LAB_0042c520
// 0042c521: CALL core_charactr.cpp_CCharacter_FUN_0042b190
//   XREF to: 0042b190 (UNCONDITIONAL_CALL)
// 0042c526: ADD ESP,0x4
// 0042c529: JMP 0x0042c429
//   XREF to: 0042c429 (UNCONDITIONAL_JUMP)
// 0042c52e: MOV dword ptr [EBX + 0xb7e0],0x40000000
//   Label: LAB_0042c52e
// 0042c538: JMP 0x0042c429
//   XREF to: 0042c429 (UNCONDITIONAL_JUMP)
// 0042c53d: JBE 0x0042c52e
//   Label: LAB_0042c53d
//   XREF to: 0042c52e (CONDITIONAL_JUMP)
// 0042c53f: CMP EAX,0x68
// 0042c542: JNC 0x0042c54e
//   XREF to: 0042c54e (CONDITIONAL_JUMP)
// 0042c544: CMP EAX,0x7
// 0042c547: JZ 0x0042c50c
//   XREF to: 0042c50c (CONDITIONAL_JUMP)
// 0042c549: JMP 0x0042c429
//   XREF to: 0042c429 (UNCONDITIONAL_JUMP)
// 0042c54e: JBE 0x0042c520
//   Label: LAB_0042c54e
//   XREF to: 0042c520 (CONDITIONAL_JUMP)
// 0042c550: CMP EAX,0x6a
// 0042c553: JZ 0x0042c52e
//   XREF to: 0042c52e (CONDITIONAL_JUMP)
// 0042c555: JMP 0x0042c429
//   XREF to: 0042c429 (UNCONDITIONAL_JUMP)
// 0042c55a: JBE 0x0042c50c
//   Label: LAB_0042c55a
//   XREF to: 0042c50c (CONDITIONAL_JUMP)
// 0042c55c: PUSH EBX
// 0042c55d: CALL core_charactr.cpp_CCharacter_FUN_0042b8e0
//   XREF to: 0042b8e0 (UNCONDITIONAL_CALL)
// 0042c562: ADD ESP,0x4
// 0042c565: JMP 0x0042c429
//   XREF to: 0042c429 (UNCONDITIONAL_JUMP)
// 0042c56a: PUSH EBX
//   Label: LAB_0042c56a
// 0042c56b: CALL core_charactr.cpp_CCharacter_FUN_0042d060
//   XREF to: 0042d060 (UNCONDITIONAL_CALL)
// 0042c570: ADD ESP,0x4
// 0042c573: ADD ESP,0x1c
// 0042c576: POP EBP
// 0042c577: POP ESI
// 0042c578: POP EBX
// 0042c579: RET
