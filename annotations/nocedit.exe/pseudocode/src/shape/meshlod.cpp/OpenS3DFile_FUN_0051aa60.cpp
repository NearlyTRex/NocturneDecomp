// Name: shape_meshlod.cpp_OpenS3DFile_FUN_0051aa60
// Address: 0051aa60
// Address Range: [[0051aa60, 0051ad52]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_OpenS3DFile_FUN_0051aa60()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a9d0 (0051a9d0) at 0051aa12 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_00637b30
//   TerminatedCString s_shape_meshlod_cpp_00637b34
//   TerminatedCString s_Corruption_in_S3D_detect_00637b49
//   TerminatedCString s_shape_meshlod_cpp_00637b65
//   TerminatedCString s_Can_t_import_S3D_file_ve_00637b7a
//   TerminatedCString s_d_d_d_d_d_d_d_00637bbc
//   TerminatedCString s_anon_00637bd2
//   TerminatedCString s_raw_00637bd9
//   TerminatedCString s_d_d_f_f_d_f_f_d_f_f_00637bdd
//   TerminatedCString s_f_f_f_00637bff
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_file.c_makepath_FUN_005febfc
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_string.c_splitpath_FUN_005ff178
//   shape_meshlod.cpp_CallocSomething1_FUN_00515ac0
//   shape_meshlod.cpp_FUN_0051b330

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_OpenS3DFile(undefined4 param_1, undefined4 param_2) */

void shape_meshlod_cpp_OpenS3DFile_FUN_0051aa60(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar2;
  int *in_stack_00000004;
  FILE *in_stack_00000008;
  char acStack_118 [4];
  char acStack_114 [232];
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",local_2c);
  if (iVar2 == 1) goto LAB_0051aad4;
LAB_0051aab1:
  do {
    do {
      g_CurrentFilename = "..\\shape\\meshlod.cpp";
      g_CurrentLineNumber = 0x1080;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Corruption in S3D detected!");
LAB_0051aad4:
      if ((local_28 < 0x66) || (0x67 < local_28)) {
        g_CurrentFilename = "..\\shape\\meshlod.cpp";
        g_CurrentLineNumber = 0x1084;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("Can't import S3D file version %d, I can only do up to version %d.",local_28,0x67);
      }
      iVar2 = 1;
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
        if (iVar1 < 0) break;
      } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (in_stack_00000008,"%d,%d,%d,%d,%d,%d,%d\n",&stack0xfffffff4,
                         &stack0xfffffff8,local_20,local_18,local_1c,local_14,&stack0xfffffff0);
    } while (iVar2 != 7);
    shape_meshlod_cpp_CallocSomething1_FUN_00515ac0();
    for (iVar2 = unaff_EBP + 1; 0 < iVar2; iVar2 = iVar2 + -1) {
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
        if (iVar1 < 0) goto LAB_0051abcf;
      } while (iVar1 != 10);
    }
LAB_0051abcf:
    iVar2 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    for (iVar2 = 0; iVar2 < in_stack_00000004[4]; iVar2 = iVar2 + 1) {
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n",&stack0xfffffde0);
      if (iVar1 != 1) goto LAB_0051aab1;
      crt_string_c_splitpath_FUN_005ff178
                (&stack0xfffffde4,(char *)0x0,(char *)0x0,acStack_118,(char *)0x0);
      crt_file_c_makepath_FUN_005febfc
                ((char *)(iVar2 * 0x48 + in_stack_00000004[5] + 8),(char *)0x0,(char *)0x0,
                 acStack_114,"raw");
    }
    iVar2 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    for (iVar2 = 0; iVar2 < in_stack_00000004[2]; iVar2 = iVar2 + 1) {
      iVar1 = in_stack_00000004[3] + iVar2 * 0x8c;
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (in_stack_00000008,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",iVar1,iVar1 + 0x10,
                         iVar1 + 0x1c,iVar1 + 0x20,iVar1 + 0x14,iVar1 + 0x24,iVar1 + 0x28,
                         iVar1 + 0x18,iVar1 + 0x2c,iVar1 + 0x30);
      if (iVar1 != 10) goto LAB_0051aab1;
    }
    iVar2 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    iVar2 = 0;
    while( true ) {
      if (*in_stack_00000004 <= iVar2) {
        in_stack_00000004[6] = 1;
        in_stack_00000004[7] = 2;
        in_stack_00000004[8] = 0;
        shape_meshlod_cpp_FUN_0051b330();
        return;
      }
      iVar1 = in_stack_00000004[1] + iVar2 * 0x4c4;
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (in_stack_00000008,"%f,%f,%f\n",iVar1,iVar1 + 4,iVar1 + 8);
      if (iVar1 != 3) break;
      iVar2 = iVar2 + 1;
    }
  } while( true );
}


// Assembly code:
// 0051aa60: PUSH EBX
//   Label: shape_meshlod.cpp_OpenS3DFile_FUN_0051aa60
// 0051aa61: PUSH ESI
// 0051aa62: PUSH EDI
// 0051aa63: PUSH EBP
// 0051aa64: SUB ESP,0x224
// 0051aa6a: MOV ESI,dword ptr [ESP + 0x238]
//   XREF to: Stack[0x4] (READ)
// 0051aa71: MOV EBX,dword ptr [ESP + 0x23c]
//   XREF to: Stack[0x8] (READ)
// 0051aa78: MOV EDI,0x1
// 0051aa7d: MOV EBP,EBX
// 0051aa7f: PUSH EBP
//   Label: LAB_0051aa7f
// 0051aa80: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051aa85: ADD ESP,0x4
// 0051aa88: TEST EAX,EAX
// 0051aa8a: JL 0x0051aa96
//   XREF to: 0051aa96 (CONDITIONAL_JUMP)
// 0051aa8c: CMP EAX,0xa
// 0051aa8f: JNZ 0x0051aa7f
//   XREF to: 0051aa7f (CONDITIONAL_JUMP)
// 0051aa91: DEC EDI
// 0051aa92: TEST EDI,EDI
// 0051aa94: JG 0x0051aa7f
//   XREF to: 0051aa7f (CONDITIONAL_JUMP)
// 0051aa96: LEA EAX,[ESP + 0x204]
//   Label: LAB_0051aa96
//   XREF to: Stack[-0x30] (DATA)
// 0051aa9d: PUSH EAX
// 0051aa9e: PUSH 0x637b30
//   XREF to: 00637b30 (DATA)
// 0051aaa3: PUSH EBX
// 0051aaa4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051aaa9: ADD ESP,0xc
// 0051aaac: CMP EAX,0x1
// 0051aaaf: JZ 0x0051aad4
//   XREF to: 0051aad4 (CONDITIONAL_JUMP)
// 0051aab1: MOV EDX,0x637b34
//   Label: LAB_0051aab1
//   XREF to: 00637b34 (DATA)
// 0051aab6: MOV ECX,0x1080
// 0051aabb: PUSH 0x637b49
//   XREF to: 00637b49 (DATA)
// 0051aac0: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0051aac6: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0051aacc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051aad1: ADD ESP,0x4
// 0051aad4: MOV EDI,dword ptr [ESP + 0x204]
//   Label: LAB_0051aad4
//   XREF to: Stack[-0x30] (READ)
// 0051aadb: CMP EDI,0x66
// 0051aade: JGE 0x0051abc1
//   XREF to: 0051abc1 (CONDITIONAL_JUMP)
// 0051aae4: PUSH 0x67
//   Label: LAB_0051aae4
// 0051aae6: MOV ECX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x30] (READ)
// 0051aaed: PUSH ECX
// 0051aaee: MOV EAX,0x637b65
//   XREF to: 00637b65 (DATA)
// 0051aaf3: MOV EDX,0x1084
// 0051aaf8: PUSH 0x637b7a
//   XREF to: 00637b7a (DATA)
// 0051aafd: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0051ab02: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0051ab08: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051ab0d: ADD ESP,0xc
// 0051ab10: MOV EDI,0x1
//   Label: LAB_0051ab10
// 0051ab15: MOV EBP,EBX
// 0051ab17: PUSH EBP
//   Label: LAB_0051ab17
// 0051ab18: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051ab1d: ADD ESP,0x4
// 0051ab20: TEST EAX,EAX
// 0051ab22: JL 0x0051ab2e
//   XREF to: 0051ab2e (CONDITIONAL_JUMP)
// 0051ab24: CMP EAX,0xa
// 0051ab27: JNZ 0x0051ab17
//   XREF to: 0051ab17 (CONDITIONAL_JUMP)
// 0051ab29: DEC EDI
// 0051ab2a: TEST EDI,EDI
// 0051ab2c: JG 0x0051ab17
//   XREF to: 0051ab17 (CONDITIONAL_JUMP)
// 0051ab2e: LEA EAX,[ESP + 0x218]
//   Label: LAB_0051ab2e
//   XREF to: Stack[-0x1c] (DATA)
// 0051ab35: PUSH EAX
// 0051ab36: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0x20] (DATA)
// 0051ab3d: PUSH EAX
// 0051ab3e: LEA EAX,[ESP + 0x214]
//   XREF to: Stack[-0x28] (DATA)
// 0051ab45: PUSH EAX
// 0051ab46: LEA EAX,[ESP + 0x21c]
//   XREF to: Stack[-0x24] (DATA)
// 0051ab4d: PUSH EAX
// 0051ab4e: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0x2c] (DATA)
// 0051ab55: PUSH EAX
// 0051ab56: LEA EAX,[ESP + 0x234]
//   XREF to: Stack[-0x14] (DATA)
// 0051ab5d: PUSH EAX
// 0051ab5e: LEA EAX,[ESP + 0x234]
//   XREF to: Stack[-0x18] (DATA)
// 0051ab65: PUSH EAX
// 0051ab66: PUSH 0x637bbc
//   XREF to: 00637bbc (DATA)
// 0051ab6b: PUSH EBX
// 0051ab6c: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051ab71: ADD ESP,0x24
// 0051ab74: CMP EAX,0x7
// 0051ab77: JNZ 0x0051aab1
//   XREF to: 0051aab1 (CONDITIONAL_JUMP)
// 0051ab7d: MOV EDI,dword ptr [ESP + 0x21c]
//   XREF to: Stack[-0x18] (READ)
// 0051ab84: PUSH EDI
// 0051ab85: MOV EBP,dword ptr [ESP + 0x224]
//   XREF to: Stack[-0x14] (READ)
// 0051ab8c: PUSH EBP
// 0051ab8d: MOV EAX,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x2c] (READ)
// 0051ab94: PUSH EAX
// 0051ab95: PUSH ESI
// 0051ab96: CALL shape_meshlod.cpp_CallocSomething1_FUN_00515ac0
//   XREF to: 00515ac0 (UNCONDITIONAL_CALL)
// 0051ab9b: ADD ESP,0x10
// 0051ab9e: MOV EDI,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x24] (READ)
// 0051aba5: MOV EBP,EBX
// 0051aba7: INC EDI
// 0051aba8: TEST EDI,EDI
//   Label: LAB_0051aba8
// 0051abaa: JLE 0x0051abcf
//   XREF to: 0051abcf (CONDITIONAL_JUMP)
// 0051abac: PUSH EBP
//   Label: LAB_0051abac
// 0051abad: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051abb2: ADD ESP,0x4
// 0051abb5: TEST EAX,EAX
// 0051abb7: JL 0x0051abcf
//   XREF to: 0051abcf (CONDITIONAL_JUMP)
// 0051abb9: CMP EAX,0xa
// 0051abbc: JNZ 0x0051abac
//   XREF to: 0051abac (CONDITIONAL_JUMP)
// 0051abbe: DEC EDI
// 0051abbf: JMP 0x0051aba8
//   XREF to: 0051aba8 (UNCONDITIONAL_JUMP)
// 0051abc1: CMP EDI,0x67
//   Label: LAB_0051abc1
// 0051abc4: JG 0x0051aae4
//   XREF to: 0051aae4 (CONDITIONAL_JUMP)
// 0051abca: JMP 0x0051ab10
//   XREF to: 0051ab10 (UNCONDITIONAL_JUMP)
// 0051abcf: MOV EDI,0x1
//   Label: LAB_0051abcf
// 0051abd4: MOV EBP,EBX
// 0051abd6: PUSH EBP
//   Label: LAB_0051abd6
// 0051abd7: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051abdc: ADD ESP,0x4
// 0051abdf: TEST EAX,EAX
// 0051abe1: JL 0x0051abed
//   XREF to: 0051abed (CONDITIONAL_JUMP)
// 0051abe3: CMP EAX,0xa
// 0051abe6: JNZ 0x0051abd6
//   XREF to: 0051abd6 (CONDITIONAL_JUMP)
// 0051abe8: DEC EDI
// 0051abe9: TEST EDI,EDI
// 0051abeb: JG 0x0051abd6
//   XREF to: 0051abd6 (CONDITIONAL_JUMP)
// 0051abed: XOR EDI,EDI
//   Label: LAB_0051abed
// 0051abef: CMP EDI,dword ptr [ESI + 0x10]
//   Label: LAB_0051abef
// 0051abf2: JGE 0x0051ac5a
//   XREF to: 0051ac5a (CONDITIONAL_JUMP)
// 0051abf4: MOV EAX,ESP
// 0051abf6: PUSH EAX
// 0051abf7: PUSH 0x637bd2
//   XREF to: 00637bd2 (DATA)
// 0051abfc: PUSH EBX
// 0051abfd: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051ac02: ADD ESP,0xc
// 0051ac05: CMP EAX,0x1
// 0051ac08: JNZ 0x0051aab1
//   XREF to: 0051aab1 (CONDITIONAL_JUMP)
// 0051ac0e: PUSH 0x0
// 0051ac10: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x130] (DATA)
// 0051ac17: PUSH EAX
// 0051ac18: PUSH 0x0
// 0051ac1a: PUSH 0x0
// 0051ac1c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x234] (DATA)
// 0051ac20: PUSH EAX
// 0051ac21: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0051ac26: ADD ESP,0x14
// 0051ac29: PUSH 0x637bd9
//   XREF to: 00637bd9 (DATA)
// 0051ac2e: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x130] (DATA)
// 0051ac35: PUSH EAX
// 0051ac36: LEA EAX,[EDI*0x8 + 0x0]
// 0051ac3d: ADD EAX,EDI
// 0051ac3f: MOV EDX,dword ptr [ESI + 0x14]
// 0051ac42: SHL EAX,0x3
// 0051ac45: PUSH 0x0
// 0051ac47: ADD EAX,EDX
// 0051ac49: PUSH 0x0
// 0051ac4b: ADD EAX,0x8
// 0051ac4e: PUSH EAX
// 0051ac4f: INC EDI
// 0051ac50: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0051ac55: ADD ESP,0x14
// 0051ac58: JMP 0x0051abef
//   XREF to: 0051abef (UNCONDITIONAL_JUMP)
// 0051ac5a: MOV EDI,0x1
//   Label: LAB_0051ac5a
// 0051ac5f: MOV EBP,EBX
// 0051ac61: PUSH EBP
//   Label: LAB_0051ac61
// 0051ac62: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051ac67: ADD ESP,0x4
// 0051ac6a: TEST EAX,EAX
// 0051ac6c: JL 0x0051ac78
//   XREF to: 0051ac78 (CONDITIONAL_JUMP)
// 0051ac6e: CMP EAX,0xa
// 0051ac71: JNZ 0x0051ac61
//   XREF to: 0051ac61 (CONDITIONAL_JUMP)
// 0051ac73: DEC EDI
// 0051ac74: TEST EDI,EDI
// 0051ac76: JG 0x0051ac61
//   XREF to: 0051ac61 (CONDITIONAL_JUMP)
// 0051ac78: XOR EDI,EDI
//   Label: LAB_0051ac78
// 0051ac7a: CMP EDI,dword ptr [ESI + 0x8]
//   Label: LAB_0051ac7a
// 0051ac7d: JGE 0x0051acd8
//   XREF to: 0051acd8 (CONDITIONAL_JUMP)
// 0051ac7f: LEA EAX,[EDI*0x8 + 0x0]
// 0051ac86: ADD EAX,EDI
// 0051ac88: SHL EAX,0x2
// 0051ac8b: SUB EAX,EDI
// 0051ac8d: LEA EDX,[EAX*0x4 + 0x0]
// 0051ac94: MOV EAX,dword ptr [ESI + 0xc]
// 0051ac97: ADD EAX,EDX
// 0051ac99: LEA EDX,[EAX + 0x30]
// 0051ac9c: PUSH EDX
// 0051ac9d: LEA EDX,[EAX + 0x2c]
// 0051aca0: PUSH EDX
// 0051aca1: LEA EDX,[EAX + 0x18]
// 0051aca4: PUSH EDX
// 0051aca5: LEA EDX,[EAX + 0x28]
// 0051aca8: PUSH EDX
// 0051aca9: LEA EDX,[EAX + 0x24]
// 0051acac: PUSH EDX
// 0051acad: LEA EDX,[EAX + 0x14]
// 0051acb0: PUSH EDX
// 0051acb1: LEA EDX,[EAX + 0x20]
// 0051acb4: PUSH EDX
// 0051acb5: LEA EDX,[EAX + 0x1c]
// 0051acb8: PUSH EDX
// 0051acb9: LEA EDX,[EAX + 0x10]
// 0051acbc: PUSH EDX
// 0051acbd: PUSH EAX
// 0051acbe: PUSH 0x637bdd
//   XREF to: 00637bdd (DATA)
// 0051acc3: PUSH EBX
// 0051acc4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051acc9: ADD ESP,0x30
// 0051accc: CMP EAX,0xa
// 0051accf: JNZ 0x0051aab1
//   XREF to: 0051aab1 (CONDITIONAL_JUMP)
// 0051acd5: INC EDI
// 0051acd6: JMP 0x0051ac7a
//   XREF to: 0051ac7a (UNCONDITIONAL_JUMP)
// 0051acd8: MOV EDI,0x1
//   Label: LAB_0051acd8
// 0051acdd: MOV EBP,EBX
// 0051acdf: PUSH EBP
//   Label: LAB_0051acdf
// 0051ace0: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051ace5: ADD ESP,0x4
// 0051ace8: TEST EAX,EAX
// 0051acea: JL 0x0051acf6
//   XREF to: 0051acf6 (CONDITIONAL_JUMP)
// 0051acec: CMP EAX,0xa
// 0051acef: JNZ 0x0051acdf
//   XREF to: 0051acdf (CONDITIONAL_JUMP)
// 0051acf1: DEC EDI
// 0051acf2: TEST EDI,EDI
// 0051acf4: JG 0x0051acdf
//   XREF to: 0051acdf (CONDITIONAL_JUMP)
// 0051acf6: XOR EDI,EDI
//   Label: LAB_0051acf6
// 0051acf8: CMP EDI,dword ptr [ESI]
//   Label: LAB_0051acf8
// 0051acfa: JL 0x0051ad25
//   XREF to: 0051ad25 (CONDITIONAL_JUMP)
// 0051acfc: MOV dword ptr [ESI + 0x18],0x1
// 0051ad03: MOV dword ptr [ESI + 0x1c],0x2
// 0051ad0a: PUSH ESI
// 0051ad0b: MOV dword ptr [ESI + 0x20],0x0
// 0051ad12: CALL shape_meshlod.cpp_FUN_0051b330
//   XREF to: 0051b330 (UNCONDITIONAL_CALL)
// 0051ad17: ADD ESP,0x4
// 0051ad1a: ADD ESP,0x224
// 0051ad20: POP EBP
// 0051ad21: POP EDI
// 0051ad22: POP ESI
// 0051ad23: POP EBX
// 0051ad24: RET
// 0051ad25: IMUL EDX,EDI,0x4c4
//   Label: LAB_0051ad25
// 0051ad2b: MOV EAX,dword ptr [ESI + 0x4]
// 0051ad2e: ADD EAX,EDX
// 0051ad30: LEA EDX,[EAX + 0x8]
// 0051ad33: PUSH EDX
// 0051ad34: LEA EDX,[EAX + 0x4]
// 0051ad37: PUSH EDX
// 0051ad38: PUSH EAX
// 0051ad39: PUSH 0x637bff
//   XREF to: 00637bff (DATA)
// 0051ad3e: PUSH EBX
// 0051ad3f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051ad44: ADD ESP,0x14
// 0051ad47: CMP EAX,0x3
// 0051ad4a: JNZ 0x0051aab1
//   XREF to: 0051aab1 (CONDITIONAL_JUMP)
// 0051ad50: INC EDI
// 0051ad51: JMP 0x0051acf8
//   XREF to: 0051acf8 (UNCONDITIONAL_JUMP)
