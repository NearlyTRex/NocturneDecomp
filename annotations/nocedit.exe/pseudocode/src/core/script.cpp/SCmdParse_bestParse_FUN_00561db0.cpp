// Name: core_script.cpp_SCmdParse_bestParse_FUN_00561db0
// Address: 00561db0
// Address Range: [[00561db0, 00561fca]]
// Convention: unknown
// Signature: undefined core_script.cpp_SCmdParse_bestParse_FUN_00561db0()
// Cross-references:
//   core_script.cpp_FUN_00561690 (00561690) at 005616cd [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565d4c [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565e70 (00565e70) at 00565f27 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565f70 (00565f70) at 00565fcf [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_script_cpp_00643b09
//   TerminatedCString s_SCmdParse_bestParse_too__00643b1c
//   TerminatedCString s_Choose_command_form_00643b45
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_script.cpp_FUN_00562620
//   core_script.cpp_SCmdParse_parse_FUN_00561fd0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_SCmdParse_bestParse(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5) */

undefined4 core_script_cpp_SCmdParse_bestParse_FUN_00561db0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int in_stack_00000008;
  int in_stack_00000014;
  undefined1 *d2;
  char **in_stack_fffffb9c;
  CStrList_vtable *in_stack_fffffba0;
  CStrList_vtable *in_stack_fffffba4;
  CStrList_vtable *in_stack_fffffba8;
  int aiStack_c4 [22];
  int local_6c [19];
  int iStack_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  iVar5 = 0;
  iVar6 = 0;
  local_14 = 2;
  local_18 = 0;
  if (0 < in_stack_00000014) {
    do {
      iVar3 = core_script_cpp_SCmdParse_parse_FUN_00561fd0();
      if (local_1c <= iVar3) {
        iStack_20 = core_script_cpp_FUN_00562620();
        if (-1 < iStack_20) {
          if (local_18 < iVar3) {
            iVar5 = 0;
            local_18 = iVar3;
            local_1c = 0;
          }
          else if (0x13 < iVar5) {
            g_CurrentFilename = "..\\core\\script.cpp";
            g_CurrentLineNumber = 0x1289;
            core_main_c_displayErrorAndQuit_FUN_00506f10("SCmdParse::bestParse - too many matches!");
          }
          iVar2 = local_1c;
          local_6c[iVar5] = local_1c;
          iVar3 = local_6c[0];
          local_6c[iVar5 + -0x14] = iVar6;
          if (iVar2 != iVar3) {
            local_18 = 1;
          }
          iVar5 = iVar5 + 1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < in_stack_00000014);
  }
  d2 = &stack0xfffffb9c;
  if (iVar5 < 1) {
    return 0xffffffff;
  }
  iVar6 = 0;
  if (local_18 != 0) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb9c);
    if (0 < iVar5) {
      do {
        piVar1 = (int *)((int)aiStack_c4 + iVar6);
        iVar6 = iVar6 + 4;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffb94,*(char **)(*piVar1 * 4 + in_stack_00000008));
      } while (iVar6 < iVar5 * 4);
    }
    iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffffb94,"Choose command form",-1,0);
    if (iVar5 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffb98,0,(uint)d2,(uint)in_stack_fffffb9c,
                 (uint)in_stack_fffffba0,(uint)in_stack_fffffba4,(uint)in_stack_fffffba8);
      return 0xffffffff;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffb98,0,(uint)d2,(uint)in_stack_fffffb9c,
               (uint)in_stack_fffffba0,(uint)in_stack_fffffba4,(uint)in_stack_fffffba8);
  }
  core_script_cpp_SCmdParse_parse_FUN_00561fd0();
  uVar4 = core_script_cpp_FUN_00562620();
  return uVar4;
}


// Assembly code:
// 00561db0: PUSH EBX
//   Label: core_script.cpp_SCmdParse_bestParse_FUN_00561db0
// 00561db1: PUSH ESI
// 00561db2: PUSH EDI
// 00561db3: PUSH EBP
// 00561db4: SUB ESP,0x454
// 00561dba: MOV EDX,0x2
// 00561dbf: MOV ESI,dword ptr [ESP + 0x478]
//   XREF to: Stack[0x14] (READ)
// 00561dc6: XOR EBX,EBX
// 00561dc8: XOR EDI,EDI
// 00561dca: MOV dword ptr [ESP + 0x450],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00561dd1: MOV dword ptr [ESP + 0x44c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00561dd8: TEST ESI,ESI
// 00561dda: JLE 0x00561e1f
//   XREF to: 00561e1f (CONDITIONAL_JUMP)
// 00561ddc: MOV EBP,dword ptr [ESP + 0x474]
//   XREF to: Stack[0x10] (READ)
// 00561de3: MOV ECX,dword ptr [EBP]
//   Label: LAB_00561de3
// 00561de6: PUSH ECX
// 00561de7: MOV ESI,dword ptr [ESP + 0x470]
//   XREF to: Stack[0x8] (READ)
// 00561dee: PUSH ESI
// 00561def: MOV EAX,dword ptr [ESP + 0x470]
//   XREF to: Stack[0x4] (READ)
// 00561df6: PUSH EAX
// 00561df7: CALL core_script.cpp_SCmdParse_parse_FUN_00561fd0
//   XREF to: 00561fd0 (UNCONDITIONAL_CALL)
// 00561dfc: ADD ESP,0xc
// 00561dff: MOV EDX,dword ptr [ESP + 0x450]
//   XREF to: Stack[-0x14] (READ)
// 00561e06: MOV ESI,EAX
// 00561e08: CMP EAX,EDX
// 00561e0a: JGE 0x00561efd
//   XREF to: 00561efd (CONDITIONAL_JUMP)
// 00561e10: MOV EAX,dword ptr [ESP + 0x478]
//   Label: LAB_00561e10
//   XREF to: Stack[0x14] (READ)
// 00561e17: INC EDI
// 00561e18: ADD EBP,0x4
// 00561e1b: CMP EDI,EAX
// 00561e1d: JL 0x00561de3
//   XREF to: 00561de3 (CONDITIONAL_JUMP)
// 00561e1f: CMP EBX,0x1
//   Label: LAB_00561e1f
// 00561e22: JL 0x00561f98
//   XREF to: 00561f98 (CONDITIONAL_JUMP)
// 00561e28: MOV EDX,dword ptr [ESP + 0x44c]
//   XREF to: Stack[-0x18] (READ)
// 00561e2f: XOR ESI,ESI
// 00561e31: TEST EDX,EDX
// 00561e33: JZ 0x00561eaf
//   XREF to: 00561eaf (CONDITIONAL_JUMP)
// 00561e39: MOV EAX,ESP
// 00561e3b: PUSH EAX
// 00561e3c: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00561e41: ADD ESP,0x4
// 00561e44: TEST EBX,EBX
// 00561e46: JLE 0x00561e80
//   XREF to: 00561e80 (CONDITIONAL_JUMP)
// 00561e48: MOV EDI,dword ptr [ESP + 0x474]
//   XREF to: Stack[0x10] (READ)
// 00561e4f: SHL EBX,0x2
// 00561e52: MOV EAX,dword ptr [ESP + ESI*0x1 + 0x3a8]
//   Label: LAB_00561e52
// 00561e59: SHL EAX,0x2
// 00561e5c: ADD EAX,EDI
// 00561e5e: MOV EBP,dword ptr [EAX]
// 00561e60: PUSH EBP
// 00561e61: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x464] (DATA)
// 00561e65: PUSH EAX
// 00561e66: ADD ESI,0x4
// 00561e69: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00561e6e: ADD ESP,0x8
// 00561e71: CMP ESI,EBX
// 00561e73: JL 0x00561e52
//   XREF to: 00561e52 (CONDITIONAL_JUMP)
// 00561e75: LEA EAX,[EAX]
// 00561e7b: LEA EDX,[EDX]
// 00561e7e: MOV EBX,EBX
// 00561e80: PUSH 0x0
//   Label: LAB_00561e80
// 00561e82: PUSH -0x1
// 00561e84: PUSH 0x643b45
//   XREF to: 00643b45 (DATA)
// 00561e89: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x464] (DATA)
// 00561e8d: PUSH EAX
// 00561e8e: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00561e93: ADD ESP,0x10
// 00561e96: MOV ESI,EAX
// 00561e98: TEST EAX,EAX
// 00561e9a: JL 0x00561faa
//   XREF to: 00561faa (CONDITIONAL_JUMP)
// 00561ea0: PUSH 0x0
// 00561ea2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x464] (DATA)
// 00561ea6: PUSH EAX
// 00561ea7: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00561eac: ADD ESP,0x8
// 00561eaf: MOV EAX,dword ptr [ESP + ESI*0x4 + 0x3a8]
//   Label: LAB_00561eaf
// 00561eb6: MOV EDX,dword ptr [ESP + 0x474]
//   XREF to: Stack[0x10] (READ)
// 00561ebd: SHL EAX,0x2
// 00561ec0: ADD EAX,EDX
// 00561ec2: MOV ECX,dword ptr [EAX]
// 00561ec4: PUSH ECX
// 00561ec5: MOV EBX,dword ptr [ESP + 0x470]
//   XREF to: Stack[0x8] (READ)
// 00561ecc: PUSH EBX
// 00561ecd: MOV ESI,dword ptr [ESP + 0x470]
//   XREF to: Stack[0x4] (READ)
// 00561ed4: PUSH ESI
// 00561ed5: CALL core_script.cpp_SCmdParse_parse_FUN_00561fd0
//   XREF to: 00561fd0 (UNCONDITIONAL_CALL)
// 00561eda: ADD ESP,0xc
// 00561edd: MOV EDI,dword ptr [ESP + 0x470]
//   XREF to: Stack[0xc] (READ)
// 00561ee4: PUSH EDI
// 00561ee5: PUSH ESI
// 00561ee6: CALL core_script.cpp_FUN_00562620
//   XREF to: 00562620 (UNCONDITIONAL_CALL)
// 00561eeb: ADD ESP,0x8
// 00561eee: MOV ESI,EAX
// 00561ef0: MOV EAX,ESI
// 00561ef2: ADD ESP,0x454
// 00561ef8: POP EBP
// 00561ef9: POP EDI
// 00561efa: POP ESI
// 00561efb: POP EBX
// 00561efc: RET
// 00561efd: MOV ECX,dword ptr [ESP + 0x470]
//   Label: LAB_00561efd
//   XREF to: Stack[0xc] (READ)
// 00561f04: PUSH ECX
// 00561f05: MOV EAX,dword ptr [ESP + 0x46c]
//   XREF to: Stack[0x4] (READ)
// 00561f0c: PUSH EAX
// 00561f0d: CALL core_script.cpp_FUN_00562620
//   XREF to: 00562620 (UNCONDITIONAL_CALL)
// 00561f12: ADD ESP,0x8
// 00561f15: MOV dword ptr [ESP + 0x448],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00561f1c: TEST EAX,EAX
// 00561f1e: JL 0x00561e10
//   XREF to: 00561e10 (CONDITIONAL_JUMP)
// 00561f24: CMP ESI,dword ptr [ESP + 0x450]
//   XREF to: Stack[-0x14] (READ)
// 00561f2b: JLE 0x00561f6e
//   XREF to: 00561f6e (CONDITIONAL_JUMP)
// 00561f2d: XOR EBX,EBX
// 00561f2f: MOV dword ptr [ESP + 0x450],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00561f36: MOV dword ptr [ESP + 0x44c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00561f3d: MOV ESI,dword ptr [ESP + 0x448]
//   Label: LAB_00561f3d
//   XREF to: Stack[-0x1c] (READ)
// 00561f44: MOV dword ptr [ESP + EBX*0x4 + 0x3f8],ESI
// 00561f4b: MOV EDX,dword ptr [ESP + 0x3f8]
//   XREF to: Stack[-0x6c] (READ)
// 00561f52: MOV dword ptr [ESP + EBX*0x4 + 0x3a8],EDI
// 00561f59: CMP ESI,EDX
// 00561f5b: JZ 0x00561f68
//   XREF to: 00561f68 (CONDITIONAL_JUMP)
// 00561f5d: MOV dword ptr [ESP + 0x44c],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 00561f68: INC EBX
//   Label: LAB_00561f68
// 00561f69: JMP 0x00561e10
//   XREF to: 00561e10 (UNCONDITIONAL_JUMP)
// 00561f6e: CMP EBX,0x14
//   Label: LAB_00561f6e
// 00561f71: JL 0x00561f3d
//   XREF to: 00561f3d (CONDITIONAL_JUMP)
// 00561f73: MOV ECX,0x643b09
//   XREF to: 00643b09 (PARAM)
// 00561f78: MOV ESI,0x1289
// 00561f7d: PUSH 0x643b1c
//   XREF to: 00643b1c (DATA)
// 00561f82: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00561f88: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00561f8e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00561f93: ADD ESP,0x4
// 00561f96: JMP 0x00561f3d
//   XREF to: 00561f3d (UNCONDITIONAL_JUMP)
// 00561f98: MOV ESI,0xffffffff
//   Label: LAB_00561f98
// 00561f9d: MOV EAX,ESI
// 00561f9f: ADD ESP,0x454
// 00561fa5: POP EBP
// 00561fa6: POP EDI
// 00561fa7: POP ESI
// 00561fa8: POP EBX
// 00561fa9: RET
// 00561faa: PUSH 0x0
//   Label: LAB_00561faa
// 00561fac: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x464] (DATA)
// 00561fb0: PUSH EAX
// 00561fb1: MOV ESI,0xffffffff
// 00561fb6: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00561fbb: ADD ESP,0x8
// 00561fbe: MOV EAX,ESI
// 00561fc0: ADD ESP,0x454
// 00561fc6: POP EBP
// 00561fc7: POP EDI
// 00561fc8: POP ESI
// 00561fc9: POP EBX
// 00561fca: RET
