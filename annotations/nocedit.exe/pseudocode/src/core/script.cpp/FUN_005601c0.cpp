// Name: core_script.cpp_FUN_005601c0
// Address: 005601c0
// Address Range: [[005601c0, 005602ac]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005601c0()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055cb1f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_if_006431f5
//   TerminatedCString s_else_006431f8
// Function calls:
//   crt_string.c_strnicmp_FUN_005ff070

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005601c0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

int core_script_cpp_FUN_005601c0(void)

{
  char *str1;
  bool bVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar3 = 0;
  bVar1 = true;
  if (in_stack_00000008 < *(int *)(in_stack_00000004 + 0x30)) {
    do {
      str1 = *(char **)(*(int *)(in_stack_00000004 + 0x34) + 4 + in_stack_00000008 * 8);
      if (*str1 == '{') {
        in_stack_00000008 = in_stack_00000008 + 1;
        iVar3 = iVar3 + 1;
      }
      else if (*str1 == '}') {
        if (iVar3 == 0) {
          if (!bVar1) {
            return in_stack_00000008;
          }
          return in_stack_00000008 + 1;
        }
        in_stack_00000008 = in_stack_00000008 + 1;
        iVar3 = iVar3 + -1;
      }
      else if (((iVar3 < 1) && (!bVar1)) ||
              (iVar2 = crt_string_c_strnicmp_FUN_005ff070(str1,"if",2), iVar2 != 0)) {
        if (((iVar3 < 1) && (in_stack_0000000c == 0)) ||
           (iVar2 = crt_string_c_strnicmp_FUN_005ff070(str1,"else",4), iVar2 != 0)) {
          if (iVar3 == 0) {
            if (!bVar1) {
              return in_stack_00000008;
            }
            return in_stack_00000008 + 1;
          }
          in_stack_00000008 = in_stack_00000008 + 1;
        }
        else {
          in_stack_00000008 = core_script_cpp_FUN_005601c0();
        }
      }
      else {
        in_stack_00000008 = core_script_cpp_FUN_005601c0();
      }
    } while ((-1 < in_stack_00000008) &&
            (bVar1 = false, in_stack_00000008 < *(int *)(in_stack_00000004 + 0x30)));
  }
  return -1;
}


// Assembly code:
// 005601c0: PUSH EBX
//   Label: core_script.cpp_FUN_005601c0
// 005601c1: PUSH ESI
// 005601c2: PUSH EDI
// 005601c3: PUSH EBP
// 005601c4: SUB ESP,0x4
// 005601c7: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005601cb: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005601cf: MOV EDX,0x1
// 005601d4: MOV ECX,dword ptr [EBP + 0x30]
// 005601d7: XOR ESI,ESI
// 005601d9: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 005601dc: CMP EBX,ECX
// 005601de: JGE 0x00560200
//   XREF to: 00560200 (CONDITIONAL_JUMP)
// 005601e0: MOV EDI,dword ptr [EBP + 0x34]
//   Label: LAB_005601e0
// 005601e3: MOV EDI,dword ptr [EDI + EBX*0x8 + 0x4]
// 005601e7: MOV AH,byte ptr [EDI]
// 005601e9: CMP AH,0x7b
// 005601ec: JNZ 0x0056020f
//   XREF to: 0056020f (CONDITIONAL_JUMP)
// 005601ee: INC EBX
// 005601ef: INC ESI
// 005601f0: TEST EBX,EBX
//   Label: LAB_005601f0
// 005601f2: JL 0x00560200
//   XREF to: 00560200 (CONDITIONAL_JUMP)
// 005601f4: XOR EDI,EDI
// 005601f6: MOV EAX,dword ptr [EBP + 0x30]
// 005601f9: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x14] (DATA)
// 005601fc: CMP EBX,EAX
// 005601fe: JL 0x005601e0
//   XREF to: 005601e0 (CONDITIONAL_JUMP)
// 00560200: MOV EBX,0xffffffff
//   Label: LAB_00560200
// 00560205: MOV EAX,EBX
//   Label: LAB_00560205
// 00560207: ADD ESP,0x4
// 0056020a: POP EBP
// 0056020b: POP EDI
// 0056020c: POP ESI
// 0056020d: POP EBX
// 0056020e: RET
// 0056020f: CMP AH,0x7d
//   Label: LAB_0056020f
// 00560212: JNZ 0x0056022d
//   XREF to: 0056022d (CONDITIONAL_JUMP)
// 00560214: TEST ESI,ESI
// 00560216: JNZ 0x00560229
//   XREF to: 00560229 (CONDITIONAL_JUMP)
// 00560218: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0x14] (DATA)
// 0056021c: JZ 0x00560205
//   XREF to: 00560205 (CONDITIONAL_JUMP)
// 0056021e: INC EBX
// 0056021f: MOV EAX,EBX
// 00560221: ADD ESP,0x4
// 00560224: POP EBP
// 00560225: POP EDI
// 00560226: POP ESI
// 00560227: POP EBX
// 00560228: RET
// 00560229: INC EBX
//   Label: LAB_00560229
// 0056022a: DEC ESI
// 0056022b: JMP 0x005601f0
//   XREF to: 005601f0 (UNCONDITIONAL_JUMP)
// 0056022d: TEST ESI,ESI
//   Label: LAB_0056022d
// 0056022f: JG 0x00560237
//   XREF to: 00560237 (CONDITIONAL_JUMP)
// 00560231: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0x14] (DATA)
// 00560235: JZ 0x0056024b
//   XREF to: 0056024b (CONDITIONAL_JUMP)
// 00560237: PUSH 0x2
//   Label: LAB_00560237
// 00560239: PUSH 0x6431f5
//   XREF to: 006431f5 (DATA)
// 0056023e: PUSH EDI
// 0056023f: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00560244: ADD ESP,0xc
// 00560247: TEST EAX,EAX
// 00560249: JZ 0x0056027f
//   XREF to: 0056027f (CONDITIONAL_JUMP)
// 0056024b: TEST ESI,ESI
//   Label: LAB_0056024b
// 0056024d: JG 0x00560256
//   XREF to: 00560256 (CONDITIONAL_JUMP)
// 0056024f: CMP dword ptr [ESP + 0x20],0x0
//   XREF to: Stack[0xc] (READ)
// 00560254: JZ 0x0056026a
//   XREF to: 0056026a (CONDITIONAL_JUMP)
// 00560256: PUSH 0x4
//   Label: LAB_00560256
// 00560258: PUSH 0x6431f8
//   XREF to: 006431f8 (DATA)
// 0056025d: PUSH EDI
// 0056025e: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00560263: ADD ESP,0xc
// 00560266: TEST EAX,EAX
// 00560268: JZ 0x00560293
//   XREF to: 00560293 (CONDITIONAL_JUMP)
// 0056026a: TEST ESI,ESI
//   Label: LAB_0056026a
// 0056026c: JNZ 0x005602a7
//   XREF to: 005602a7 (CONDITIONAL_JUMP)
// 0056026e: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0x14] (DATA)
// 00560272: JZ 0x00560205
//   XREF to: 00560205 (CONDITIONAL_JUMP)
// 00560274: INC EBX
// 00560275: MOV EAX,EBX
// 00560277: ADD ESP,0x4
// 0056027a: POP EBP
// 0056027b: POP EDI
// 0056027c: POP ESI
// 0056027d: POP EBX
// 0056027e: RET
// 0056027f: PUSH 0x1
//   Label: LAB_0056027f
// 00560281: INC EBX
// 00560282: PUSH EBX
// 00560283: PUSH EBP
// 00560284: CALL core_script.cpp_FUN_005601c0
//   XREF to: 005601c0 (UNCONDITIONAL_CALL)
// 00560289: MOV EBX,EAX
// 0056028b: ADD ESP,0xc
// 0056028e: JMP 0x005601f0
//   XREF to: 005601f0 (UNCONDITIONAL_JUMP)
// 00560293: PUSH 0x1
//   Label: LAB_00560293
// 00560295: INC EBX
// 00560296: PUSH EBX
// 00560297: PUSH EBP
// 00560298: CALL core_script.cpp_FUN_005601c0
//   XREF to: 005601c0 (UNCONDITIONAL_CALL)
// 0056029d: ADD ESP,0xc
// 005602a0: MOV EBX,EAX
// 005602a2: JMP 0x005601f0
//   XREF to: 005601f0 (UNCONDITIONAL_JUMP)
// 005602a7: INC EBX
//   Label: LAB_005602a7
// 005602a8: JMP 0x005601f0
//   XREF to: 005601f0 (UNCONDITIONAL_JUMP)
