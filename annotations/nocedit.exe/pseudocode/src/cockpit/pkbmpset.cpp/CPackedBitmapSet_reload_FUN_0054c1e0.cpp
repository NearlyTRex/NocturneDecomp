// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0
// Address: 0054c1e0
// Address Range: [[0054c1e0, 0054c3cf]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0(CPackedBitmapSet * this_ptr)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500 (0054c500) at 0054c5bd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_0063f5fb
//   TerminatedCString s_art_0063f5fe
//   TerminatedCString s_Unable_to_open_s_in_CPac_0063f602
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f639
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f651
//   TerminatedCString s_Can_t_allocate_u_bytes_f_0063f669
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f6b3
//   TerminatedCString s_Error_reading_from_s_in__0063f6cb
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f704
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f71c
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f734
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_0054c1e0(CPackedBitmapSet *this_ptr)

{
  FILE *pFVar1;
  void *pvVar2;
  SIZE_T SVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  SIZE_T size;
  int iVar5;
  void *unaff_retaddr;
  FILE *in_stack_00000008;
  int in_stack_00000024;
  int in_stack_00000028;
  char acStack_e0 [4];
  char acStack_dc [104];
  char acStack_74 [4];
  char acStack_70 [96];
  
  pFVar1 = engine_dosio_c_getFile_FUN_00481a50("art",this_ptr->filename,"rb");
  if (pFVar1 == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_e0,"Unable to open %s in CPackedBitmapSet::reloadJoinedRAW",this_ptr->filename);
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 0x108;
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_dc);
  }
  size = this_ptr->extension * this_ptr->base_path;
  pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\cockpit\\pkbmpset.cpp",0x110);
  if (pvVar2 == (void *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffec8,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW",size);
    g_CurrentLineNumber = 0x115;
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffecc);
  }
  iVar4 = 0;
  if (0 < this_ptr->bitmap_count) {
    iVar5 = 0;
    do {
      if ((in_stack_00000024 < 0) || (iVar4 == in_stack_00000024)) {
        SVar3 = crt_stdio_c_fread_FUN_005fd990(unaff_retaddr,size,1,(FILE *)this_ptr);
        if (SVar3 != 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_74,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW",pFVar1);
          g_CurrentLineNumber = 0x128;
          g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_70);
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
                  ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar5),
                   (uchar *)this_ptr->filename,this_ptr->extension);
      }
      else {
        crt_stdio_c_fseek_FUN_005ffacc((FILE *)this_ptr,size,1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x24;
    } while (iVar4 < this_ptr->bitmap_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(unaff_retaddr,"..\\cockpit\\pkbmpset.cpp",0x132);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000008,"..\\cockpit\\pkbmpset.cpp",0x133);
  if (in_stack_00000028 == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(this_ptr);
  return;
}


// Assembly code:
// 0054c1e0: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0
// 0054c1e1: PUSH ESI
// 0054c1e2: PUSH EDI
// 0054c1e3: PUSH EBP
// 0054c1e4: SUB ESP,0x138
// 0054c1ea: MOV ESI,dword ptr [ESP + 0x14c]
//   XREF to: Stack[0x4] (READ)
// 0054c1f1: PUSH 0x63f5fb
//   XREF to: 0063f5fb (DATA)
// 0054c1f6: LEA EBX,[ESI + 0x8]
// 0054c1f9: PUSH EBX
// 0054c1fa: PUSH 0x63f5fe
//   XREF to: 0063f5fe (DATA)
// 0054c1ff: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0054c204: ADD ESP,0xc
// 0054c207: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054c20e: TEST EAX,EAX
// 0054c210: JZ 0x0054c303
//   XREF to: 0054c303 (CONDITIONAL_JUMP)
// 0054c216: MOV EBP,dword ptr [ESI + 0x1c]
//   Label: LAB_0054c216
// 0054c219: IMUL EBP,dword ptr [ESI + 0x20]
// 0054c21d: PUSH 0x110
// 0054c222: PUSH 0x63f651
//   XREF to: 0063f651 (DATA)
// 0054c227: PUSH EBP
// 0054c228: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0054c22d: ADD ESP,0xc
// 0054c230: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0054c237: TEST EAX,EAX
// 0054c239: JNZ 0x0054c26e
//   XREF to: 0054c26e (CONDITIONAL_JUMP)
// 0054c23b: PUSH EBP
// 0054c23c: PUSH 0x63f669
//   XREF to: 0063f669 (DATA)
// 0054c241: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 0054c245: PUSH EAX
// 0054c246: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054c24b: MOV EAX,0x115
// 0054c250: ADD ESP,0xc
// 0054c253: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0054c258: MOV EAX,ESP
// 0054c25a: MOV EDI,0x63f6b3
//   XREF to: 0063f6b3 (DATA)
// 0054c25f: PUSH EAX
// 0054c260: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0054c266: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054c26b: ADD ESP,0x4
// 0054c26e: MOV EDX,dword ptr [ESI]
//   Label: LAB_0054c26e
// 0054c270: XOR EBX,EBX
// 0054c272: TEST EDX,EDX
// 0054c274: JLE 0x0054c2b6
//   XREF to: 0054c2b6 (CONDITIONAL_JUMP)
// 0054c276: LEA EAX,[ESI + 0x8]
// 0054c279: XOR EDI,EDI
// 0054c27b: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0054c282: MOV EAX,dword ptr [ESP + 0x154]
//   Label: LAB_0054c282
//   XREF to: Stack[0xc] (READ)
// 0054c289: TEST EAX,EAX
// 0054c28b: JL 0x0054c33e
//   XREF to: 0054c33e (CONDITIONAL_JUMP)
// 0054c291: CMP EBX,EAX
// 0054c293: JZ 0x0054c33e
//   XREF to: 0054c33e (CONDITIONAL_JUMP)
// 0054c299: PUSH 0x1
// 0054c29b: PUSH EBP
// 0054c29c: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x14] (READ)
// 0054c2a3: PUSH EAX
// 0054c2a4: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 0054c2a9: ADD ESP,0xc
//   Label: LAB_0054c2a9
// 0054c2ac: INC EBX
// 0054c2ad: MOV ECX,dword ptr [ESI]
// 0054c2af: ADD EDI,0x24
// 0054c2b2: CMP EBX,ECX
// 0054c2b4: JL 0x0054c282
//   XREF to: 0054c282 (CONDITIONAL_JUMP)
// 0054c2b6: PUSH 0x132
//   Label: LAB_0054c2b6
// 0054c2bb: PUSH 0x63f71c
//   XREF to: 0063f71c (DATA)
// 0054c2c0: MOV EBX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x18] (READ)
// 0054c2c7: PUSH EBX
// 0054c2c8: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0054c2cd: ADD ESP,0xc
// 0054c2d0: PUSH 0x133
// 0054c2d5: PUSH 0x63f734
//   XREF to: 0063f734 (DATA)
// 0054c2da: MOV EDI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x14] (READ)
// 0054c2e1: PUSH EDI
// 0054c2e2: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0054c2e7: ADD ESP,0xc
// 0054c2ea: CMP dword ptr [ESP + 0x150],0x0
//   XREF to: Stack[0x8] (READ)
// 0054c2f2: JNZ 0x0054c3bc
//   XREF to: 0054c3bc (CONDITIONAL_JUMP)
// 0054c2f8: ADD ESP,0x138
// 0054c2fe: POP EBP
// 0054c2ff: POP EDI
// 0054c300: POP ESI
// 0054c301: POP EBX
// 0054c302: RET
// 0054c303: PUSH EBX
//   Label: LAB_0054c303
// 0054c304: PUSH 0x63f602
//   XREF to: 0063f602 (DATA)
// 0054c309: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0xe4] (DATA)
// 0054c30d: PUSH EAX
// 0054c30e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054c313: MOV EDX,0x63f639
//   XREF to: 0063f639 (DATA)
// 0054c318: ADD ESP,0xc
// 0054c31b: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0xe4] (DATA)
// 0054c31f: MOV ECX,0x108
// 0054c324: PUSH EAX
// 0054c325: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0054c32b: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0054c331: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054c336: ADD ESP,0x4
// 0054c339: JMP 0x0054c216
//   XREF to: 0054c216 (UNCONDITIONAL_JUMP)
// 0054c33e: MOV ECX,dword ptr [ESP + 0x134]
//   Label: LAB_0054c33e
//   XREF to: Stack[-0x14] (READ)
// 0054c345: PUSH ECX
// 0054c346: PUSH 0x1
// 0054c348: PUSH EBP
// 0054c349: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x18] (READ)
// 0054c350: PUSH EAX
// 0054c351: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054c356: ADD ESP,0x10
// 0054c359: CMP EAX,0x1
// 0054c35c: JZ 0x0054c3a0
//   XREF to: 0054c3a0 (CONDITIONAL_JUMP)
// 0054c35e: MOV EDX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x1c] (READ)
// 0054c365: PUSH EDX
// 0054c366: PUSH 0x63f6cb
//   XREF to: 0063f6cb (DATA)
// 0054c36b: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0x80] (DATA)
// 0054c372: PUSH EAX
// 0054c373: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054c378: MOV EAX,0x128
// 0054c37d: ADD ESP,0xc
// 0054c380: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0054c385: LEA EAX,[ESP + 0xc8]
//   XREF to: Stack[-0x80] (DATA)
// 0054c38c: MOV ECX,0x63f704
//   XREF to: 0063f704 (DATA)
// 0054c391: PUSH EAX
// 0054c392: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054c398: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054c39d: ADD ESP,0x4
// 0054c3a0: MOV EDX,dword ptr [ESI + 0x1c]
//   Label: LAB_0054c3a0
// 0054c3a3: PUSH EDX
// 0054c3a4: MOV ECX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x18] (READ)
// 0054c3ab: MOV EAX,dword ptr [ESI + 0x4]
// 0054c3ae: PUSH ECX
// 0054c3af: ADD EAX,EDI
// 0054c3b1: PUSH EAX
// 0054c3b2: CALL cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
//   XREF to: 0054b0e0 (UNCONDITIONAL_CALL)
// 0054c3b7: JMP 0x0054c2a9
//   XREF to: 0054c2a9 (UNCONDITIONAL_JUMP)
// 0054c3bc: PUSH ESI
//   Label: LAB_0054c3bc
// 0054c3bd: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710
//   XREF to: 0054c710 (UNCONDITIONAL_CALL)
// 0054c3c2: ADD ESP,0x4
// 0054c3c5: ADD ESP,0x138
// 0054c3cb: POP EBP
// 0054c3cc: POP EDI
// 0054c3cd: POP ESI
// 0054c3ce: POP EBX
// 0054c3cf: RET
