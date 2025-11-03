// Name: core_charactr.cpp_CCharacter_FUN_0042c5f0
// Address: 0042c5f0
// Address Range: [[0042c5f0, 0042c7fc] [0042c83e, 0042c917]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042c5f0(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042ca70 (0042ca70) at 0042cd08 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f569a [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6b02 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_tried_to_follow_NULL_a_006171ab
//   TerminatedCString s_s_confused_while_followi_006171cb
//   TerminatedCString s_s_confused_after_pathmap_006171eb
//   double DOUBLE_00617222 = 20
//   double DOUBLE_0061722a = 40
//   double DOUBLE_00617232 = 0.100000000000000
//   double DOUBLE_0061723a = 0.0100000000000000
//   double DOUBLE_0061724a = 0.174532925194444
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042c5f0(CCharacter *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  int *in_stack_00000014;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  
  if (in_stack_00000008 == 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s tried to follow NULL actor!\n",this_ptr);
    *in_stack_00000014 = 3;
    return;
  }
  local_50.x = *(float *)(in_stack_00000008 + 0x20) - (this_ptr->base_actor).location.position.x;
  local_50.y = *(float *)(in_stack_00000008 + 0x24) - (this_ptr->base_actor).location.position.y;
  local_50.z = *(float *)(in_stack_00000008 + 0x28) - (this_ptr->base_actor).location.position.z;
  if (0.0 <= in_stack_0000000c) {
    if ((((float)DOUBLE_00617222 < ABS(local_50.y)) || ((float)DOUBLE_0061722a < ABS(local_50.x)))
       || ((float)DOUBLE_0061722a < ABS(local_50.z))) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while following %s\n",this_ptr);
      *in_stack_00000014 = 3;
      return;
    }
    local_2c = SQRT(local_50.z * local_50.z + local_50.x * local_50.x);
    local_50.y = 0.0;
    if (in_stack_00000010 < 0.0) {
      in_stack_00000010 = 1e+30;
    }
    local_20 = in_stack_0000000c * (float)DOUBLE_00617232;
    iVar4 = *in_stack_00000014;
    if (iVar4 == 0) {
      in_stack_0000000c = in_stack_0000000c + local_20;
    }
    else if (iVar4 == 1) {
      in_stack_00000010 = in_stack_00000010 + local_20;
      in_stack_0000000c = in_stack_0000000c - local_20;
    }
    else if (iVar4 == 2) {
      in_stack_00000010 = in_stack_00000010 - local_20;
    }
    if (in_stack_0000000c < (float)DOUBLE_0061723a) {
      in_stack_0000000c = 0.01;
    }
    if (in_stack_0000000c <= local_2c) {
      (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0xbc))();
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
      if (iVar4 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused after pathmap call while following %s\n",this_ptr);
        *in_stack_00000014 = 3;
        return;
      }
      if (local_2c <= in_stack_00000010) {
        *in_stack_00000014 = 1;
        return;
      }
      *in_stack_00000014 = 2;
      return;
    }
    *in_stack_00000014 = 0;
    return;
  }
  local_50.y = 0.0;
  pCVar1 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base_actor,&local_44,&local_50);
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_38,pCVar1);
  *(float *)(this_ptr->field2_0x240c + 0xc) = pCVar1->y;
  if (*in_stack_00000014 == 0) {
    if ((float)DOUBLE_0061724a < ABS(*(float *)(this_ptr->field2_0x240c + 0xc))) goto LAB_0042c771;
    if (*in_stack_00000014 != 1) goto LAB_0042c80e;
  }
  else {
    if (ABS(*(float *)(this_ptr->field2_0x240c + 0xc)) < (float)DOUBLE_00617242) {
      *in_stack_00000014 = 0;
LAB_0042c80e:
      this_ptr->field2_0x240c[0xc] = '\0';
      this_ptr->field2_0x240c[0xd] = '\0';
      this_ptr->field2_0x240c[0xe] = '\0';
      this_ptr->field2_0x240c[0xf] = '\0';
      goto LAB_0042c7cc;
    }
LAB_0042c771:
    *in_stack_00000014 = 1;
  }
  local_1c = *(float *)(this_ptr->field2_0x240c + 0xc);
  local_18 = *(float *)(this_ptr->field2_0x240c + 0x2c);
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_1c);
  fVar3 = -local_18;
  if ((fVar3 <= fVar2) && (fVar3 = fVar2, local_18 < fVar2)) {
    fVar3 = local_18;
  }
  *(float *)(this_ptr->field2_0x240c + 0xc) = fVar3;
LAB_0042c7cc:
  (this_ptr->model).field10_0x2254[8] = '\0';
  (this_ptr->model).field10_0x2254[9] = '\0';
  (this_ptr->model).field10_0x2254[10] = '\0';
  (this_ptr->model).field10_0x2254[0xb] = '\0';
  *(undefined4 *)((this_ptr->model).field10_0x2254 + 4) =
       *(undefined4 *)((this_ptr->model).field10_0x2254 + 8);
  *(undefined4 *)(this_ptr->model).field10_0x2254 =
       *(undefined4 *)((this_ptr->model).field10_0x2254 + 4);
  return;
}


// Assembly code:
// 0042c5f0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042c5f0
// 0042c5f1: PUSH ESI
// 0042c5f2: PUSH EDI
// 0042c5f3: PUSH EBP
// 0042c5f4: MOV EBP,ESP
// 0042c5f6: SUB ESP,0x40
// 0042c5f9: AND ESP,0xfffffff8
// 0042c5fc: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042c5ff: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042c602: MOV EBX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0042c605: TEST EDI,EDI
// 0042c607: JZ 0x0042c700
//   XREF to: 0042c700 (CONDITIONAL_JUMP)
// 0042c60d: LEA EAX,[EDI + 0x20]
// 0042c610: LEA EDX,[ESI + 0x20]
// 0042c613: FLD float ptr [EAX]
// 0042c615: FSUB float ptr [EDX]
// 0042c617: FSTP float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0042c61a: FLD float ptr [EAX + 0x4]
// 0042c61d: FSUB float ptr [EDX + 0x4]
// 0042c620: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042c623: FXCH
// 0042c625: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4c] (WRITE)
// 0042c629: FLD float ptr [EAX + 0x8]
// 0042c62c: FSUB float ptr [EDX + 0x8]
// 0042c62f: FLDZ
// 0042c631: FXCH
// 0042c633: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 0042c637: FCOMPP
// 0042c639: FNSTSW AX
// 0042c63b: SAHF
// 0042c63c: JA 0x0042c722
//   XREF to: 0042c722 (CONDITIONAL_JUMP)
// 0042c642: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 0042c646: FABS
// 0042c648: FCOMP double ptr [0x00617222]
//   XREF to: 00617222 (READ)
// 0042c64e: FNSTSW AX
// 0042c650: SAHF
// 0042c651: JA 0x0042c83e
//   XREF to: 0042c83e (CONDITIONAL_JUMP)
// 0042c657: FLD float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0042c65a: FABS
// 0042c65c: FCOMP double ptr [0x0061722a]
//   XREF to: 0061722a (READ)
// 0042c662: FNSTSW AX
// 0042c664: SAHF
// 0042c665: JA 0x0042c83e
//   XREF to: 0042c83e (CONDITIONAL_JUMP)
// 0042c66b: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 0042c66f: FABS
// 0042c671: FCOMP double ptr [0x0061722a]
//   XREF to: 0061722a (READ)
// 0042c677: FNSTSW AX
// 0042c679: SAHF
// 0042c67a: JA 0x0042c83e
//   XREF to: 0042c83e (CONDITIONAL_JUMP)
// 0042c680: FLD float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0042c683: FMUL ST0
// 0042c685: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 0042c689: FMUL ST0
// 0042c68b: FADDP
// 0042c68d: FSQRT
// 0042c68f: FLD float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0042c692: XOR EDX,EDX
// 0042c694: FLDZ
// 0042c696: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0042c69a: FXCH ST2
// 0042c69c: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (WRITE)
// 0042c6a0: FXCH
// 0042c6a2: FCOMPP
// 0042c6a4: FNSTSW AX
// 0042c6a6: SAHF
// 0042c6a7: JA 0x0042c861
//   XREF to: 0042c861 (CONDITIONAL_JUMP)
// 0042c6ad: FLD float ptr [EBP + 0x1c]
//   Label: LAB_0042c6ad
//   XREF to: Stack[0xc] (READ)
// 0042c6b0: FMUL double ptr [0x00617232]
//   XREF to: 00617232 (READ)
// 0042c6b6: MOV EAX,dword ptr [EBX]
// 0042c6b8: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (WRITE)
// 0042c6bc: TEST EAX,EAX
// 0042c6be: JNZ 0x0042c86d
//   XREF to: 0042c86d (CONDITIONAL_JUMP)
// 0042c6c4: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042c6c7: FADD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 0042c6cb: FSTP float ptr [EBP + 0x1c]
//   Label: LAB_0042c6cb
//   XREF to: Stack[0xc] (WRITE)
// 0042c6ce: FLD float ptr [EBP + 0x1c]
//   Label: LAB_0042c6ce
//   XREF to: Stack[0xc] (READ)
// 0042c6d1: FCOMP double ptr [0x0061723a]
//   XREF to: 0061723a (READ)
// 0042c6d7: FNSTSW AX
// 0042c6d9: SAHF
// 0042c6da: JNC 0x0042c6e3
//   XREF to: 0042c6e3 (CONDITIONAL_JUMP)
// 0042c6dc: MOV dword ptr [EBP + 0x1c],0x3c23d70a
//   XREF to: Stack[0xc] (WRITE)
// 0042c6e3: FLD float ptr [ESP + 0x24]
//   Label: LAB_0042c6e3
//   XREF to: Stack[-0x2c] (READ)
// 0042c6e7: FCOMP float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042c6ea: FNSTSW AX
// 0042c6ec: SAHF
// 0042c6ed: JNC 0x0042c8a4
//   XREF to: 0042c8a4 (CONDITIONAL_JUMP)
// 0042c6f3: MOV dword ptr [EBX],0x0
// 0042c6f9: MOV ESP,EBP
// 0042c6fb: POP EBP
// 0042c6fc: POP EDI
// 0042c6fd: POP ESI
// 0042c6fe: POP EBX
// 0042c6ff: RET
// 0042c700: PUSH ESI
//   Label: LAB_0042c700
// 0042c701: PUSH 0x6171ab
//   XREF to: 006171ab (DATA)
// 0042c706: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0042c70c: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 0042c70d: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0042c712: ADD ESP,0xc
// 0042c715: MOV dword ptr [EBX],0x3
// 0042c71b: MOV ESP,EBP
// 0042c71d: POP EBP
// 0042c71e: POP EDI
// 0042c71f: POP ESI
// 0042c720: POP EBX
// 0042c721: RET
// 0042c722: MOV EAX,ESP
//   Label: LAB_0042c722
// 0042c724: PUSH EAX
// 0042c725: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x44] (DATA)
// 0042c729: PUSH EAX
// 0042c72a: XOR EDI,EDI
// 0042c72c: PUSH ESI
// 0042c72d: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x4c] (WRITE)
// 0042c731: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 0042c736: ADD ESP,0xc
// 0042c739: PUSH EAX
// 0042c73a: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x38] (DATA)
// 0042c73e: PUSH EAX
// 0042c73f: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0042c744: MOV EDX,dword ptr [EAX + 0x4]
// 0042c747: MOV dword ptr [ESI + 0x2418],EDX
// 0042c74d: MOV EAX,dword ptr [EBX]
// 0042c74f: ADD ESP,0x8
// 0042c752: TEST EAX,EAX
// 0042c754: JNZ 0x0042c7f5
//   XREF to: 0042c7f5 (CONDITIONAL_JUMP)
// 0042c75a: FLD float ptr [ESI + 0x2418]
// 0042c760: FABS
// 0042c762: FCOMP double ptr [0x0061724a]
//   XREF to: 0061724a (READ)
// 0042c768: FNSTSW AX
// 0042c76a: SAHF
// 0042c76b: JBE 0x0042c81a
//   XREF to: 0042c81a (CONDITIONAL_JUMP)
// 0042c771: MOV dword ptr [EBX],0x1
//   Label: LAB_0042c771
// 0042c777: MOV EAX,dword ptr [ESI + 0x2418]
//   Label: LAB_0042c777
// 0042c77d: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0042c781: MOV EAX,dword ptr [ESI + 0x2438]
// 0042c787: PUSH dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 0042c78b: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0042c78f: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0042c794: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0042c798: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0042c79c: ADD ESP,0x4
// 0042c79f: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 0042c7a3: FXCH
// 0042c7a5: FST float ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (WRITE)
// 0042c7a9: FXCH
// 0042c7ab: FCHS
// 0042c7ad: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (WRITE)
// 0042c7b1: FCOMP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 0042c7b5: FNSTSW AX
// 0042c7b7: SAHF
// 0042c7b8: JNC 0x0042c825
//   XREF to: 0042c825 (CONDITIONAL_JUMP)
// 0042c7ba: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 0042c7be: MOV dword ptr [ESP + 0x2c],EAX
//   Label: LAB_0042c7be
//   XREF to: Stack[-0x24] (WRITE)
// 0042c7c2: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 0042c7c6: MOV dword ptr [ESI + 0x2418],EAX
// 0042c7cc: MOV dword ptr [ESI + 0x23b4],0x0
//   Label: LAB_0042c7cc
// 0042c7d6: MOV EAX,dword ptr [ESI + 0x23b4]
// 0042c7dc: MOV dword ptr [ESI + 0x23b0],EAX
// 0042c7e2: MOV EAX,dword ptr [ESI + 0x23b0]
// 0042c7e8: MOV dword ptr [ESI + 0x23ac],EAX
// 0042c7ee: MOV ESP,EBP
// 0042c7f0: POP EBP
// 0042c7f1: POP EDI
// 0042c7f2: POP ESI
// 0042c7f3: POP EBX
// 0042c7f4: RET
// 0042c7f5: FLD float ptr [ESI + 0x2418]
//   Label: LAB_0042c7f5
// 0042c7fb: FABS
// 0042c83e: PUSH EDI
//   Label: LAB_0042c83e
// 0042c83f: PUSH ESI
// 0042c840: PUSH 0x6171cb
//   XREF to: 006171cb (DATA)
// 0042c845: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0042c84b: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 0042c84c: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0042c851: ADD ESP,0x10
// 0042c854: MOV dword ptr [EBX],0x3
// 0042c85a: MOV ESP,EBP
// 0042c85c: POP EBP
// 0042c85d: POP EDI
// 0042c85e: POP ESI
// 0042c85f: POP EBX
// 0042c860: RET
// 0042c861: MOV dword ptr [EBP + 0x20],0x7149f2ca
//   Label: LAB_0042c861
//   XREF to: Stack[0x10] (WRITE)
// 0042c868: JMP 0x0042c6ad
//   XREF to: 0042c6ad (UNCONDITIONAL_JUMP)
// 0042c86d: CMP EAX,0x1
//   Label: LAB_0042c86d
// 0042c870: JNZ 0x0042c88c
//   XREF to: 0042c88c (CONDITIONAL_JUMP)
// 0042c872: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042c875: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 0042c879: FLD float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0042c87c: FADD ST0,ST1
// 0042c87e: FXCH ST2
// 0042c880: FSUBRP
// 0042c882: FXCH
// 0042c884: FSTP float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (WRITE)
// 0042c887: JMP 0x0042c6cb
//   XREF to: 0042c6cb (UNCONDITIONAL_JUMP)
// 0042c88c: CMP EAX,0x2
//   Label: LAB_0042c88c
// 0042c88f: JNZ 0x0042c6ce
//   XREF to: 0042c6ce (CONDITIONAL_JUMP)
// 0042c895: FLD float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0042c898: FSUB float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 0042c89c: FSTP float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (WRITE)
// 0042c89f: JMP 0x0042c6ce
//   XREF to: 0042c6ce (UNCONDITIONAL_JUMP)
// 0042c8a4: PUSH 0x0
//   Label: LAB_0042c8a4
// 0042c8a6: PUSH 0x0
// 0042c8a8: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0042c8ad: MOV EAX,dword ptr [EDI + 0x154]
// 0042c8b3: PUSH EDI
// 0042c8b4: CALL dword ptr [EAX + 0xbc]
// 0042c8ba: ADD ESP,0x4
// 0042c8bd: PUSH EAX
// 0042c8be: LEA EAX,[EDI + 0x20]
// 0042c8c1: PUSH EAX
// 0042c8c2: PUSH ESI
// 0042c8c3: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 0042c8c8: ADD ESP,0x18
// 0042c8cb: TEST EAX,EAX
// 0042c8cd: JL 0x0042c8e8
//   XREF to: 0042c8e8 (CONDITIONAL_JUMP)
// 0042c8cf: FLD float ptr [ESP + 0x24]
// 0042c8d3: FCOMP float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0042c8d6: FNSTSW AX
// 0042c8d8: SAHF
// 0042c8d9: JBE 0x0042c90b
//   XREF to: 0042c90b (CONDITIONAL_JUMP)
// 0042c8db: MOV dword ptr [EBX],0x2
// 0042c8e1: MOV ESP,EBP
// 0042c8e3: POP EBP
// 0042c8e4: POP EDI
// 0042c8e5: POP ESI
// 0042c8e6: POP EBX
// 0042c8e7: RET
// 0042c8e8: PUSH EDI
//   Label: LAB_0042c8e8
// 0042c8e9: PUSH ESI
// 0042c8ea: PUSH 0x6171eb
//   XREF to: 006171eb (DATA)
// 0042c8ef: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0042c8f5: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 0042c8f6: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0042c8fb: ADD ESP,0x10
// 0042c8fe: MOV dword ptr [EBX],0x3
// 0042c904: MOV ESP,EBP
// 0042c906: POP EBP
// 0042c907: POP EDI
// 0042c908: POP ESI
// 0042c909: POP EBX
// 0042c90a: RET
// 0042c90b: MOV dword ptr [EBX],0x1
//   Label: LAB_0042c90b
// 0042c911: MOV ESP,EBP
// 0042c913: POP EBP
// 0042c914: POP EDI
// 0042c915: POP ESI
// 0042c916: POP EBX
// 0042c917: RET
