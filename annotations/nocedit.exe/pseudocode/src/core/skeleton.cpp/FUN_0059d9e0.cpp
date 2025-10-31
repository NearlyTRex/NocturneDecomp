// Name: core_skeleton.cpp_FUN_0059d9e0
// Address: 0059d9e0
// Address Range: [[0059d9e0, 0059dbd0]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_0059d9e0()
// Cross-references:
//   core_skeleton.cpp_CDeformableModel_CallToUnknownSomething4_FUN_0059c1f0 (0059c1f0) at 0059c200 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064ed24
//   TerminatedCString s_Bug_0064ed39
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_FUN_0059d9e0(undefined4 param_1) */

void core_skeleton_cpp_FUN_0059d9e0(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  CVector3f *point;
  int iVar8;
  CBoundingBox3D *this_ptr;
  int in_stack_00000004;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_14;
  
  iVar3 = core_skeleton_cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810();
  iVar2 = *(int *)(iVar3 + 0x28558);
  iVar7 = 0;
  if (0 < iVar2) {
    this_ptr = (CBoundingBox3D *)(in_stack_00000004 + 0x814c);
    iVar8 = in_stack_00000004;
    do {
      core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(this_ptr);
      iVar7 = iVar7 + 1;
      this_ptr = this_ptr + 1;
      *(undefined4 *)(iVar8 + 0x8aac) = 0;
      iVar8 = iVar8 + 4;
    } while (iVar7 < iVar2);
  }
  local_28 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x2c)) {
    local_2c = 0;
    do {
      pbVar4 = (byte *)(local_2c + *(int *)(in_stack_00000004 + 0x40));
      point = (CVector3f *)(pbVar4 + 0x10);
      pbVar5 = pbVar4;
      for (iVar7 = 0; iVar7 < (int)(uint)*pbVar4; iVar7 = iVar7 + 1) {
        pbVar1 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                  ((CBoundingBox3D *)((uint)*pbVar1 * 0x18 + in_stack_00000004 + 0x814c),point);
        point = point + 1;
        *(undefined4 *)(in_stack_00000004 + 0x8aac + (uint)*pbVar5 * 4) = 1;
      }
      local_2c = local_2c + 0x34;
      local_28 = local_28 + 1;
    } while (local_28 < *(int *)(in_stack_00000004 + 0x2c));
  }
  local_14 = 0;
  if (0 < iVar2) {
    local_24 = in_stack_00000004;
    local_30 = iVar3;
    do {
      if (*(int *)(local_24 + 0x8aac) == 1) {
        if (-1 < *(int *)(local_30 + 0x2857c)) {
          iVar6 = 0;
          iVar7 = iVar3;
          iVar8 = in_stack_00000004;
          if (0 < iVar2) {
            do {
              if ((local_14 == *(int *)(iVar7 + 0x2857c)) && (*(int *)(iVar8 + 0x8aac) != 0)) break;
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + 0x24;
              iVar8 = iVar8 + 4;
            } while (iVar6 < iVar2);
          }
          if (iVar6 < iVar2) {
            iVar8 = 0;
            iVar7 = local_14;
            do {
              iVar7 = *(int *)(iVar7 * 0x24 + iVar3 + 0x2857c);
              if (iVar7 < 0) {
                g_CurrentFilename = "..\\core\\skeleton.cpp";
                g_CurrentLineNumber = 0x86b;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
              }
            } while ((*(int *)(in_stack_00000004 + 0x8aac + iVar7 * 4) != 2) &&
                    (iVar8 = iVar8 + 1, iVar8 < 2));
            if (iVar8 < 2) goto LAB_0059dac0;
          }
        }
        *(undefined4 *)(local_24 + 0x8aac) = 2;
      }
LAB_0059dac0:
      local_30 = local_30 + 0x24;
      local_24 = local_24 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < iVar2);
  }
  return;
}


// Assembly code:
// 0059d9e0: PUSH EBX
//   Label: core_skeleton.cpp_FUN_0059d9e0
// 0059d9e1: PUSH ESI
// 0059d9e2: PUSH EDI
// 0059d9e3: PUSH EBP
// 0059d9e4: SUB ESP,0x24
// 0059d9e7: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0059d9eb: PUSH EBP
// 0059d9ec: CALL core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 0059d9f1: ADD ESP,0x4
// 0059d9f4: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0059d9f8: MOV EAX,dword ptr [EAX + 0x28558]
// 0059d9fe: XOR ESI,ESI
// 0059da00: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0059da04: TEST EAX,EAX
// 0059da06: JLE 0x0059da40
//   XREF to: 0059da40 (CONDITIONAL_JUMP)
// 0059da08: LEA EDI,[EBP + 0x814c]
// 0059da0e: MOV EBX,EBP
// 0059da10: PUSH EDI
//   Label: LAB_0059da10
// 0059da11: CALL core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
//   XREF to: 00420fb0 (UNCONDITIONAL_CALL)
// 0059da16: ADD EBX,0x4
// 0059da19: INC ESI
// 0059da1a: ADD ESP,0x4
// 0059da1d: ADD EDI,0x18
// 0059da20: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0059da24: MOV dword ptr [EBX + 0x8aa8],0x0
// 0059da2e: CMP ESI,ECX
// 0059da30: JL 0x0059da10
//   XREF to: 0059da10 (CONDITIONAL_JUMP)
// 0059da32: LEA EAX,[EAX]
// 0059da38: LEA EDX,[EDX]
// 0059da3e: MOV EAX,EAX
// 0059da40: XOR EBX,EBX
//   Label: LAB_0059da40
// 0059da42: MOV ESI,dword ptr [EBP + 0x2c]
// 0059da45: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059da49: TEST ESI,ESI
// 0059da4b: JLE 0x0059da9a
//   XREF to: 0059da9a (CONDITIONAL_JUMP)
// 0059da4d: LEA EAX,[EBP + 0x814c]
// 0059da53: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0059da57: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0059da5b: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_0059da5b
//   XREF to: Stack[-0x30] (READ)
// 0059da5f: MOV EAX,dword ptr [EBP + 0x40]
// 0059da62: ADD EDX,EAX
// 0059da64: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059da68: LEA ESI,[EDX + 0x10]
// 0059da6b: XOR EDI,EDI
// 0059da6d: MOV EBX,EDX
// 0059da6f: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_0059da6f
//   XREF to: Stack[-0x1c] (READ)
// 0059da73: XOR EAX,EAX
// 0059da75: MOV AL,byte ptr [EDX]
// 0059da77: CMP EDI,EAX
// 0059da79: JL 0x0059daed
//   XREF to: 0059daed (CONDITIONAL_JUMP)
// 0059da7f: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 0059da83: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x2c] (READ)
// 0059da87: MOV EDX,dword ptr [EBP + 0x2c]
// 0059da8a: ADD EDI,0x34
// 0059da8d: INC EAX
// 0059da8e: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0059da92: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059da96: CMP EAX,EDX
// 0059da98: JL 0x0059da5b
//   XREF to: 0059da5b (CONDITIONAL_JUMP)
// 0059da9a: XOR ECX,ECX
//   Label: LAB_0059da9a
// 0059da9c: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0059daa0: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0059daa4: TEST EBX,EBX
// 0059daa6: JLE 0x0059dae5
//   XREF to: 0059dae5 (CONDITIONAL_JUMP)
// 0059daa8: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 0059daac: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 0059dab0: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x34] (DATA)
// 0059dab3: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0059dab3
//   XREF to: Stack[-0x28] (READ)
// 0059dab7: CMP dword ptr [EAX + 0x8aac],0x1
// 0059dabe: JZ 0x0059db1e
//   XREF to: 0059db1e (CONDITIONAL_JUMP)
// 0059dac0: MOV ECX,dword ptr [ESP]
//   Label: LAB_0059dac0
//   XREF to: Stack[-0x34] (DATA)
// 0059dac3: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 0059dac7: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0059dacb: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0059dacf: ADD ECX,0x24
// 0059dad2: ADD EBX,0x4
// 0059dad5: INC ESI
// 0059dad6: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x34] (DATA)
// 0059dad9: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 0059dadd: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0059dae1: CMP ESI,EDI
// 0059dae3: JL 0x0059dab3
//   XREF to: 0059dab3 (CONDITIONAL_JUMP)
// 0059dae5: ADD ESP,0x24
//   Label: LAB_0059dae5
// 0059dae8: POP EBP
// 0059dae9: POP EDI
// 0059daea: POP ESI
// 0059daeb: POP EBX
// 0059daec: RET
// 0059daed: XOR EAX,EAX
//   Label: LAB_0059daed
// 0059daef: MOV AL,byte ptr [EBX + 0x1]
// 0059daf2: IMUL EAX,EAX,0x18
// 0059daf5: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 0059daf9: PUSH ESI
// 0059dafa: ADD EAX,EDX
// 0059dafc: PUSH EAX
// 0059dafd: INC EBX
// 0059dafe: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 0059db03: XOR EAX,EAX
// 0059db05: INC EDI
// 0059db06: MOV AL,byte ptr [EBX]
// 0059db08: ADD ESI,0xc
// 0059db0b: ADD ESP,0x8
// 0059db0e: MOV dword ptr [EBP + EAX*0x4 + 0x8aac],0x1
// 0059db19: JMP 0x0059da6f
//   XREF to: 0059da6f (UNCONDITIONAL_JUMP)
// 0059db1e: MOV EAX,dword ptr [ESP]
//   Label: LAB_0059db1e
//   XREF to: Stack[-0x34] (DATA)
// 0059db21: CMP dword ptr [EAX + 0x2857c],0x0
// 0059db28: JL 0x0059db81
//   XREF to: 0059db81 (CONDITIONAL_JUMP)
// 0059db2a: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0059db2e: XOR EBX,EBX
// 0059db30: TEST ESI,ESI
// 0059db32: JLE 0x0059db4f
//   XREF to: 0059db4f (CONDITIONAL_JUMP)
// 0059db34: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0059db38: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 0059db3c: MOV EDI,EBP
// 0059db3e: CMP EDX,dword ptr [ESI + 0x2857c]
//   Label: LAB_0059db3e
// 0059db44: JNZ 0x0059db94
//   XREF to: 0059db94 (CONDITIONAL_JUMP)
// 0059db46: CMP dword ptr [EDI + 0x8aac],0x0
// 0059db4d: JZ 0x0059db94
//   XREF to: 0059db94 (CONDITIONAL_JUMP)
// 0059db4f: CMP EBX,dword ptr [ESP + 0x20]
//   Label: LAB_0059db4f
//   XREF to: Stack[-0x14] (READ)
// 0059db53: JGE 0x0059db81
//   XREF to: 0059db81 (CONDITIONAL_JUMP)
// 0059db55: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 0059db59: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0059db5d: XOR ESI,ESI
// 0059db5f: IMUL EBX,EBX,0x24
//   Label: LAB_0059db5f
// 0059db62: ADD EBX,EDI
// 0059db64: MOV EBX,dword ptr [EBX + 0x2857c]
// 0059db6a: TEST EBX,EBX
// 0059db6c: JL 0x0059dbad
//   XREF to: 0059dbad (CONDITIONAL_JUMP)
// 0059db6e: CMP dword ptr [EBP + EBX*0x4 + 0x8aac],0x2
//   Label: LAB_0059db6e
// 0059db76: JNZ 0x0059dba5
//   XREF to: 0059dba5 (CONDITIONAL_JUMP)
// 0059db78: CMP ESI,0x2
//   Label: LAB_0059db78
// 0059db7b: JL 0x0059dac0
//   XREF to: 0059dac0 (CONDITIONAL_JUMP)
// 0059db81: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0059db81
//   XREF to: Stack[-0x28] (READ)
// 0059db85: MOV dword ptr [EAX + 0x8aac],0x2
// 0059db8f: JMP 0x0059dac0
//   XREF to: 0059dac0 (UNCONDITIONAL_JUMP)
// 0059db94: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0059db94
//   XREF to: Stack[-0x14] (READ)
// 0059db98: ADD ESI,0x24
// 0059db9b: INC EBX
// 0059db9c: ADD EDI,0x4
// 0059db9f: CMP EBX,EAX
// 0059dba1: JL 0x0059db3e
//   XREF to: 0059db3e (CONDITIONAL_JUMP)
// 0059dba3: JMP 0x0059db4f
//   XREF to: 0059db4f (UNCONDITIONAL_JUMP)
// 0059dba5: INC ESI
//   Label: LAB_0059dba5
// 0059dba6: CMP ESI,0x2
// 0059dba9: JL 0x0059db5f
//   XREF to: 0059db5f (CONDITIONAL_JUMP)
// 0059dbab: JMP 0x0059db78
//   XREF to: 0059db78 (UNCONDITIONAL_JUMP)
// 0059dbad: MOV EAX,0x64ed24
//   Label: LAB_0059dbad
//   XREF to: 0064ed24 (PARAM)
// 0059dbb2: MOV EDX,0x86b
// 0059dbb7: PUSH 0x64ed39
//   XREF to: 0064ed39 (DATA)
// 0059dbbc: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0059dbc1: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0059dbc7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059dbcc: ADD ESP,0x4
// 0059dbcf: JMP 0x0059db6e
//   XREF to: 0059db6e (UNCONDITIONAL_JUMP)
