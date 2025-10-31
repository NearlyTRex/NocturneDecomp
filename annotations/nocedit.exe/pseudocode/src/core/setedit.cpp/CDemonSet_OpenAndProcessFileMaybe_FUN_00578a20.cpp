// Name: core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20
// Address: 00578a20
// Address Range: [[00578a20, 00578c5e]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20(CDemonSet * this_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584b6c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_models_00646ad9
//   undefined4 s_odels_00646ada
//   undefined4 s_dels_00646adb
//   undefined4 s_els_00646adc
//   TerminatedCString s_s3d_00646ae0
//   TerminatedCString s_Import_set_00646ae6
//   TerminatedCString s_core_setedit_cpp_00646af1
//   TerminatedCString s_rt_00646b05
//   TerminatedCString s_Can_t_open_s_00646b08
//   TerminatedCString s_geo_00646b16
//   TerminatedCString s_a3d_00646b1a
//   TerminatedCString s_s3d_00646b1e
//   TerminatedCString s_core_setedit_cpp_00646b22
//   TerminatedCString s_Can_t_decide_how_to_proc_00646b36
//   TerminatedCString s_core_setedit_cpp_00646b6b
//   TerminatedCString s_zth_00646b7f
//   TerminatedCString s_data_00646b83
//   TerminatedCString s_thm_00646b88
//   TerminatedCString s_data_00646b8c
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CEditorTools g_CEditorToolsPtr
//   void* g_CKeysPtr
// Function calls:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80
//   core_setedit.cpp_ImportA3DBroken_FUN_00578c60
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20(CDemonSet *this_ptr)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  FILE *file_ptr;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char in_stack_fffffb38;
  char local_3d8 [8];
  char acStack_3d0 [256];
  char acStack_2d0 [4];
  char acStack_2cc [20];
  char acStack_2b8 [8];
  char acStack_2b0 [248];
  char acStack_1b8 [4];
  char acStack_1b4 [4];
  char acStack_1b0 [4];
  char acStack_1ac [220];
  char acStack_d0 [8];
  char acStack_c8 [184];
  
  pcVar4 = "models";
  pcVar5 = local_3d8;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                    (g_CEditorToolsPtr,"Import set",true,local_3d8);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return;
  }
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_3d8 + 4,(char *)0x0,"rt","..\\core\\setedit.cpp",0x36c);
  if (file_ptr != (FILE *)0x0) {
    engine_dosio_c_splitPath_FUN_00481f20
              (acStack_3d0,(char *)0x0,(char *)0x0,acStack_2d0,&stack0xfffffb30);
    engine_dosio_c_makePath_FUN_00481f50
              (this_ptr->geometry_filename,(char *)0x0,(char *)0x0,acStack_2cc,"geo");
    pcVar5 = &stack0xfffffb38;
    if (in_stack_fffffb38 == '.') {
      pcVar5 = &stack0xfffffb39;
    }
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,"a3d");
    if (iVar3 == 0) {
      core_setedit_cpp_ImportA3DBroken_FUN_00578c60();
    }
    else {
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,"s3d");
      if (iVar3 != 0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\setedit.cpp",0x38f);
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("Can't decide how to process file based on extension!",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
        return;
      }
      core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80();
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\setedit.cpp",0x399);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_1b8,(char *)0x0,"data",acStack_2b8,"zth");
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_1b4);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_1b0,(char *)0x0,"data",acStack_2b0,"thm");
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_1ac);
    return;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_d0,"Can't open %s",acStack_3d0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0(acStack_c8,0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
  return;
}


// Assembly code:
// 00578a20: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20
// 00578a21: PUSH ESI
// 00578a22: PUSH EDI
// 00578a23: PUSH EBP
// 00578a24: SUB ESP,0x4c8
// 00578a2a: MOV EBP,dword ptr [ESP + 0x4dc]
//   XREF to: Stack[0x4] (READ)
// 00578a31: MOV ESI,0x646ad9
//   XREF to: 00646ad9 (DATA)
// 00578a36: LEA EDI,[ESP + 0x100]
//   XREF to: Stack[-0x3d8] (DATA)
// 00578a3d: PUSH EDI
// 00578a3e: MOV AL,byte ptr [ESI]
//   Label: LAB_00578a3e
//   XREF to: 00646ad9 (READ)
//   XREF to: 00646adb (READ)
// 00578a40: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x3d8] (DATA)
// 00578a42: CMP AL,0x0
// 00578a44: JZ 0x00578a56
//   XREF to: 00578a56 (CONDITIONAL_JUMP)
// 00578a46: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00646ada (READ)
//   XREF to: 00646adc (READ)
// 00578a49: ADD ESI,0x2
// 00578a4c: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x3d7] (WRITE)
// 00578a4f: ADD EDI,0x2
// 00578a52: CMP AL,0x0
// 00578a54: JNZ 0x00578a3e
//   XREF to: 00578a3e (CONDITIONAL_JUMP)
// 00578a56: POP EDI
//   Label: LAB_00578a56
// 00578a57: PUSH 0x1
// 00578a59: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x3d8] (DATA)
// 00578a60: PUSH EAX
// 00578a61: PUSH 0x646ae0
//   XREF to: 00646ae0 (DATA)
// 00578a66: PUSH 0x646ae6
//   XREF to: 00646ae6 (DATA)
// 00578a6b: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00578a71: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00578a72: CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   XREF to: 0049f420 (UNCONDITIONAL_CALL)
// 00578a77: ADD ESP,0x14
// 00578a7a: TEST EAX,EAX
// 00578a7c: JNZ 0x00578a89
//   XREF to: 00578a89 (CONDITIONAL_JUMP)
// 00578a7e: ADD ESP,0x4c8
// 00578a84: POP EBP
// 00578a85: POP EDI
// 00578a86: POP ESI
// 00578a87: POP EBX
// 00578a88: RET
// 00578a89: PUSH 0x36c
//   Label: LAB_00578a89
// 00578a8e: PUSH 0x646af1
//   XREF to: 00646af1 (DATA)
// 00578a93: PUSH 0x646b05
//   XREF to: 00646b05 (DATA)
// 00578a98: PUSH 0x0
// 00578a9a: LEA EAX,[ESP + 0x110]
//   XREF to: Stack[-0x3d8] (DATA)
// 00578aa1: PUSH EAX
// 00578aa2: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00578aa7: ADD ESP,0x14
// 00578aaa: MOV EBX,EAX
// 00578aac: TEST EAX,EAX
// 00578aae: JZ 0x00578ba4
//   XREF to: 00578ba4 (CONDITIONAL_JUMP)
// 00578ab4: MOV EAX,ESP
// 00578ab6: PUSH EAX
// 00578ab7: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x2d8] (DATA)
// 00578abe: PUSH EAX
// 00578abf: PUSH 0x0
// 00578ac1: PUSH 0x0
// 00578ac3: LEA EAX,[ESP + 0x110]
//   XREF to: Stack[-0x3d8] (DATA)
// 00578aca: PUSH EAX
// 00578acb: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 00578ad0: ADD ESP,0x14
// 00578ad3: PUSH 0x646b16
//   XREF to: 00646b16 (DATA)
// 00578ad8: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x2d8] (DATA)
// 00578adf: PUSH EAX
// 00578ae0: PUSH 0x0
// 00578ae2: PUSH 0x0
// 00578ae4: LEA EAX,[EBP + 0x14d0f0]
// 00578aea: PUSH EAX
// 00578aeb: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 00578af0: ADD ESP,0x14
// 00578af3: MOV AH,byte ptr [ESP]
//   XREF to: Stack[-0x4d8] (DATA)
// 00578af6: MOV ESI,ESP
// 00578af8: CMP AH,0x2e
// 00578afb: JNZ 0x00578afe
//   XREF to: 00578afe (CONDITIONAL_JUMP)
// 00578afd: INC ESI
// 00578afe: PUSH 0x646b1a
//   Label: LAB_00578afe
//   XREF to: 00646b1a (DATA)
// 00578b03: PUSH ESI
// 00578b04: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00578b09: ADD ESP,0x8
// 00578b0c: TEST EAX,EAX
// 00578b0e: JNZ 0x00578bf9
//   XREF to: 00578bf9 (CONDITIONAL_JUMP)
// 00578b14: PUSH EBX
// 00578b15: PUSH EBP
// 00578b16: CALL core_setedit.cpp_ImportA3DBroken_FUN_00578c60
//   XREF to: 00578c60 (UNCONDITIONAL_CALL)
// 00578b1b: ADD ESP,0x8
//   Label: LAB_00578b1b
// 00578b1e: PUSH 0x399
// 00578b23: PUSH 0x646b6b
//   XREF to: 00646b6b (DATA)
// 00578b28: PUSH EBX
// 00578b29: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00578b2e: ADD ESP,0xc
// 00578b31: PUSH 0x646b7f
//   XREF to: 00646b7f (DATA)
// 00578b36: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x2d8] (DATA)
// 00578b3d: PUSH EAX
// 00578b3e: PUSH 0x646b83
//   XREF to: 00646b83 (DATA)
// 00578b43: PUSH 0x0
// 00578b45: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x1d8] (DATA)
// 00578b4c: PUSH EAX
// 00578b4d: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 00578b52: ADD ESP,0x14
// 00578b55: LEA EAX,[ESP + 0x300]
//   XREF to: Stack[-0x1d8] (DATA)
// 00578b5c: PUSH EAX
// 00578b5d: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00578b62: ADD ESP,0x4
// 00578b65: PUSH 0x646b88
//   XREF to: 00646b88 (DATA)
// 00578b6a: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x2d8] (DATA)
// 00578b71: PUSH EAX
// 00578b72: PUSH 0x646b8c
//   XREF to: 00646b8c (DATA)
// 00578b77: PUSH 0x0
// 00578b79: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x1d8] (DATA)
// 00578b80: PUSH EAX
// 00578b81: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 00578b86: ADD ESP,0x14
// 00578b89: LEA EAX,[ESP + 0x300]
//   XREF to: Stack[-0x1d8] (DATA)
// 00578b90: PUSH EAX
// 00578b91: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00578b96: ADD ESP,0x4
// 00578b99: ADD ESP,0x4c8
// 00578b9f: POP EBP
// 00578ba0: POP EDI
// 00578ba1: POP ESI
// 00578ba2: POP EBX
// 00578ba3: RET
// 00578ba4: LEA EAX,[ESP + 0x100]
//   Label: LAB_00578ba4
//   XREF to: Stack[-0x3d8] (DATA)
// 00578bab: PUSH EAX
// 00578bac: PUSH 0x646b08
//   XREF to: 00646b08 (DATA)
// 00578bb1: LEA EAX,[ESP + 0x408]
//   XREF to: Stack[-0xd8] (DATA)
// 00578bb8: PUSH EAX
// 00578bb9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00578bbe: ADD ESP,0xc
// 00578bc1: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00578bc6: PUSH 0x0
// 00578bc8: PUSH 0x0
// 00578bca: LEA EAX,[ESP + 0x408]
//   XREF to: Stack[-0xd8] (DATA)
// 00578bd1: PUSH EAX
// 00578bd2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00578bd7: ADD ESP,0xc
// 00578bda: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00578bdf: MOV EBX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 00578be5: PUSH EBX
//   XREF to: 02dcd7d4 (DATA)
// 00578be6: CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   XREF to: 00502460 (UNCONDITIONAL_CALL)
// 00578beb: ADD ESP,0x4
// 00578bee: ADD ESP,0x4c8
// 00578bf4: POP EBP
// 00578bf5: POP EDI
// 00578bf6: POP ESI
// 00578bf7: POP EBX
// 00578bf8: RET
// 00578bf9: PUSH 0x646b1e
//   Label: LAB_00578bf9
//   XREF to: 00646b1e (DATA)
// 00578bfe: PUSH ESI
// 00578bff: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00578c04: ADD ESP,0x8
// 00578c07: TEST EAX,EAX
// 00578c09: JNZ 0x00578c17
//   XREF to: 00578c17 (CONDITIONAL_JUMP)
// 00578c0b: PUSH EBX
// 00578c0c: PUSH EBP
// 00578c0d: CALL core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80
//   XREF to: 00578d80 (UNCONDITIONAL_CALL)
// 00578c12: JMP 0x00578b1b
//   XREF to: 00578b1b (UNCONDITIONAL_JUMP)
// 00578c17: PUSH 0x38f
//   Label: LAB_00578c17
// 00578c1c: PUSH 0x646b22
//   XREF to: 00646b22 (DATA)
// 00578c21: PUSH EBX
// 00578c22: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00578c27: ADD ESP,0xc
// 00578c2a: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00578c2f: PUSH 0x0
// 00578c31: PUSH 0x0
// 00578c33: PUSH 0x646b36
//   XREF to: 00646b36 (DATA)
// 00578c38: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00578c3d: ADD ESP,0xc
// 00578c40: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00578c45: MOV ECX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 00578c4b: PUSH ECX
//   XREF to: 02dcd7d4 (DATA)
// 00578c4c: CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   XREF to: 00502460 (UNCONDITIONAL_CALL)
// 00578c51: ADD ESP,0x4
// 00578c54: ADD ESP,0x4c8
// 00578c5a: POP EBP
// 00578c5b: POP EDI
// 00578c5c: POP ESI
// 00578c5d: POP EBX
// 00578c5e: RET
