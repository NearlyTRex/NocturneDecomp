// Name: core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
// Address: 0047ca50
// Address Range: [[0047ca50, 0047cbb4]]
// Convention: __cdecl
// Signature: int core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50(CKeyFramedModel * this_ptr, char * source_drive, char * source_directory, char * destination_drive, char * destination_directory)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047dad6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_raw_0062064f
//   TerminatedCString s_raw_00620653
//   TerminatedCString s_act_00620657
//   TerminatedCString s_act_0062065b
//   TerminatedCString s_opa_0062065f
//   TerminatedCString s_opa_00620663
// Function calls:
//   core_dmodel.cpp_copyFile_FUN_0047c930
//   crt_file.c_makepath_FUN_005febfc
//   crt_string.c_splitpath_FUN_005ff178

#include "nocturne.h"

int __cdecl
core_dmodel_cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
          (CKeyFramedModel *this_ptr,char *source_drive,char *source_directory,
          char *destination_drive,char *destination_directory)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char acStack_2f4 [232];
  char acStack_20c [4];
  char acStack_208 [8];
  char acStack_200 [4];
  char acStack_1fc [8];
  char acStack_1f4 [4];
  char acStack_1f0 [224];
  char local_110 [4];
  char acStack_10c [4];
  char acStack_108 [8];
  char acStack_100 [4];
  char acStack_fc [8];
  char acStack_f4 [4];
  char acStack_f0 [224];
  
  crt_string_c_splitpath_FUN_005ff178
            (this_ptr->model_filename,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  crt_file_c_makepath_FUN_005febfc
            (&stack0xfffffcec,source_drive,source_directory,acStack_10c,"raw");
  crt_file_c_makepath_FUN_005febfc
            (acStack_20c,destination_drive,destination_directory,acStack_108,"raw");
  iVar1 = core_dmodel_cpp_copyFile_FUN_0047c930(&stack0xfffffcf4,acStack_208,1);
  if (iVar1 != 0) {
    crt_file_c_makepath_FUN_005febfc
              (&stack0xfffffcf8,source_drive,source_directory,acStack_100,"act");
    crt_file_c_makepath_FUN_005febfc
              (acStack_200,destination_drive,destination_directory,acStack_fc,"act");
    iVar1 = core_dmodel_cpp_copyFile_FUN_0047c930(&stack0xfffffd00,acStack_1fc,1);
    if (iVar1 != 0) {
      crt_file_c_makepath_FUN_005febfc
                (&stack0xfffffd04,source_drive,source_directory,acStack_f4,"opa");
      crt_file_c_makepath_FUN_005febfc
                (acStack_1f4,destination_drive,destination_directory,acStack_f0,"opa");
      iVar1 = core_dmodel_cpp_copyFile_FUN_0047c930(acStack_2f4,acStack_1f0,0);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return iVar1;
}


// Assembly code:
// 0047ca50: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
// 0047ca51: PUSH ESI
// 0047ca52: PUSH EDI
// 0047ca53: PUSH EBP
// 0047ca54: SUB ESP,0x308
// 0047ca5a: MOV EBX,dword ptr [ESP + 0x320]
//   XREF to: Stack[0x8] (READ)
// 0047ca61: MOV EDI,dword ptr [ESP + 0x324]
//   XREF to: Stack[0xc] (READ)
// 0047ca68: MOV EBP,dword ptr [ESP + 0x328]
//   XREF to: Stack[0x10] (READ)
// 0047ca6f: MOV ESI,dword ptr [ESP + 0x32c]
//   XREF to: Stack[0x14] (READ)
// 0047ca76: PUSH 0x0
// 0047ca78: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x110] (DATA)
// 0047ca7f: PUSH EAX
// 0047ca80: PUSH 0x0
// 0047ca82: PUSH 0x0
// 0047ca84: MOV EDX,dword ptr [ESP + 0x32c]
//   XREF to: Stack[0x4] (READ)
// 0047ca8b: PUSH EDX
// 0047ca8c: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0047ca91: ADD ESP,0x14
// 0047ca94: PUSH 0x62064f
//   XREF to: 0062064f (DATA)
// 0047ca99: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x110] (DATA)
// 0047caa0: PUSH EAX
// 0047caa1: PUSH EDI
// 0047caa2: PUSH EBX
// 0047caa3: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x318] (DATA)
// 0047caa7: PUSH EAX
// 0047caa8: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0047caad: ADD ESP,0x14
// 0047cab0: PUSH 0x620653
//   XREF to: 00620653 (DATA)
// 0047cab5: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x110] (DATA)
// 0047cabc: PUSH EAX
// 0047cabd: PUSH ESI
// 0047cabe: PUSH EBP
// 0047cabf: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x214] (DATA)
// 0047cac6: PUSH EAX
// 0047cac7: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0047cacc: ADD ESP,0x14
// 0047cacf: PUSH 0x1
// 0047cad1: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x214] (DATA)
// 0047cad8: PUSH EAX
// 0047cad9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x318] (DATA)
// 0047cadd: PUSH EAX
// 0047cade: CALL core_dmodel.cpp_copyFile_FUN_0047c930
//   XREF to: 0047c930 (UNCONDITIONAL_CALL)
// 0047cae3: ADD ESP,0xc
// 0047cae6: TEST EAX,EAX
// 0047cae8: JNZ 0x0047caf5
//   XREF to: 0047caf5 (CONDITIONAL_JUMP)
// 0047caea: ADD ESP,0x308
//   Label: LAB_0047caea
// 0047caf0: POP EBP
// 0047caf1: POP EDI
// 0047caf2: POP ESI
// 0047caf3: POP EBX
// 0047caf4: RET
// 0047caf5: PUSH 0x620657
//   Label: LAB_0047caf5
//   XREF to: 00620657 (DATA)
// 0047cafa: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x110] (DATA)
// 0047cb01: PUSH EAX
// 0047cb02: PUSH EDI
// 0047cb03: PUSH EBX
// 0047cb04: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x318] (DATA)
// 0047cb08: PUSH EAX
// 0047cb09: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0047cb0e: ADD ESP,0x14
// 0047cb11: PUSH 0x62065b
//   XREF to: 0062065b (DATA)
// 0047cb16: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x110] (DATA)
// 0047cb1d: PUSH EAX
// 0047cb1e: PUSH ESI
// 0047cb1f: PUSH EBP
// 0047cb20: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x214] (DATA)
// 0047cb27: PUSH EAX
// 0047cb28: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0047cb2d: ADD ESP,0x14
// 0047cb30: PUSH 0x1
// 0047cb32: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x214] (DATA)
// 0047cb39: PUSH EAX
// 0047cb3a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x318] (DATA)
// 0047cb3e: PUSH EAX
// 0047cb3f: CALL core_dmodel.cpp_copyFile_FUN_0047c930
//   XREF to: 0047c930 (UNCONDITIONAL_CALL)
// 0047cb44: ADD ESP,0xc
// 0047cb47: TEST EAX,EAX
// 0047cb49: JZ 0x0047caea
//   XREF to: 0047caea (CONDITIONAL_JUMP)
// 0047cb4b: PUSH 0x62065f
//   XREF to: 0062065f (DATA)
// 0047cb50: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x110] (DATA)
// 0047cb57: PUSH EAX
// 0047cb58: PUSH EDI
// 0047cb59: PUSH EBX
// 0047cb5a: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x318] (DATA)
// 0047cb5e: PUSH EAX
// 0047cb5f: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0047cb64: ADD ESP,0x14
// 0047cb67: PUSH 0x620663
//   XREF to: 00620663 (DATA)
// 0047cb6c: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x110] (DATA)
// 0047cb73: PUSH EAX
// 0047cb74: PUSH ESI
// 0047cb75: PUSH EBP
// 0047cb76: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x214] (DATA)
// 0047cb7d: PUSH EAX
// 0047cb7e: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0047cb83: ADD ESP,0x14
// 0047cb86: PUSH 0x0
// 0047cb88: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x214] (DATA)
// 0047cb8f: PUSH EAX
// 0047cb90: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x318] (DATA)
// 0047cb94: PUSH EAX
// 0047cb95: CALL core_dmodel.cpp_copyFile_FUN_0047c930
//   XREF to: 0047c930 (UNCONDITIONAL_CALL)
// 0047cb9a: ADD ESP,0xc
// 0047cb9d: TEST EAX,EAX
// 0047cb9f: JZ 0x0047caea
//   XREF to: 0047caea (CONDITIONAL_JUMP)
// 0047cba5: MOV EAX,0x1
// 0047cbaa: ADD ESP,0x308
// 0047cbb0: POP EBP
// 0047cbb1: POP EDI
// 0047cbb2: POP ESI
// 0047cbb3: POP EBX
// 0047cbb4: RET
