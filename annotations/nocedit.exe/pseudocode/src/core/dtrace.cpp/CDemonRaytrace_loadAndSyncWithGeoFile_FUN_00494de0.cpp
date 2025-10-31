// Name: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
// Address: 00494de0
// Address Range: [[00494de0, 00494f44]]
// Convention: __cdecl
// Signature: int core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0(CDemonRaytrace * this_ptr, char * filename)
// Cross-references:
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569d38 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005793d4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_00622916
//   TerminatedCString s_data_00622919
//   TerminatedCString s_core_dtrace_cpp_0062291e
//   TerminatedCString s_data_s_00622931
//   TerminatedCString s_Old_GEO_file_s_exists_in_00622939
//   TerminatedCString s_core_dtrace_cpp_0062299b
//   TerminatedCString s_rb_006229ae
//   TerminatedCString s_core_dtrace_cpp_006229b2
//   TerminatedCString s_Can_t_rewrite_POD_file_f_006229c5
//   TerminatedCString s_core_dtrace_cpp_006229f0
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   undefined4 DAT_02cee5ac
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0
//   core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040
//   core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_findFile_FUN_00481760
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

int __cdecl
core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
          (CDemonRaytrace *this_ptr,char *filename)

{
  FILE *pFVar1;
  int iVar2;
  long unaff_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char acStack_10c [252];
  
  pFVar1 = engine_dosio_c_getFile_FUN_00481a50("data",filename,"rb");
  if (pFVar1 == (FILE *)0x0) {
    return 0;
  }
  core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004947a0(this_ptr,pFVar1);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\dtrace.cpp",0x212);
  if (DAT_02cee5ac == 1) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffde8,"data\\%s",filename);
    iVar2 = engine_dosio_c_findFile_FUN_00481760((SFoundFileInfo *)&stack0xfffffdec);
    if ((iVar2 == 0) || (unaff_ESI == 0)) {
      core_dtrace_cpp_CDemonRaytrace_save_FUN_00495040(this_ptr,filename);
      return 1;
    }
    iVar2 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,"Old .GEO file %s exists in file:\n%s\nShall I patch it?\nIf you're not sure what this means, type N.");
    if (iVar2 != 0) {
      pFVar1 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (acStack_10c,(char *)0x0,"rb+","..\\core\\dtrace.cpp",0x21d);
      if (pFVar1 == (FILE *)0x0) {
        g_CurrentFilename = "..\\core\\dtrace.cpp";
        g_CurrentLineNumber = 0x21e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't rewrite .POD file for unknown reason");
      }
      crt_stdio_c_fseek_FUN_005ffacc(pFVar1,unaff_EBX,0);
      core_dtrace_cpp_CDemonRaytrace_saveBinary_FUN_00494f50(this_ptr,pFVar1);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\dtrace.cpp",0x221);
    }
  }
  return 1;
}


// Assembly code:
// 00494de0: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
// 00494de1: PUSH ESI
// 00494de2: PUSH EDI
// 00494de3: PUSH EBP
// 00494de4: SUB ESP,0x214
// 00494dea: MOV EDI,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x4] (READ)
// 00494df1: MOV ESI,dword ptr [ESP + 0x22c]
//   XREF to: Stack[0x8] (READ)
// 00494df8: PUSH 0x622916
//   XREF to: 00622916 (DATA)
// 00494dfd: PUSH ESI
// 00494dfe: PUSH 0x622919
//   XREF to: 00622919 (DATA)
// 00494e03: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00494e08: MOV EBX,EAX
// 00494e0a: ADD ESP,0xc
// 00494e0d: TEST EAX,EAX
// 00494e0f: JNZ 0x00494e1c
//   XREF to: 00494e1c (CONDITIONAL_JUMP)
// 00494e11: ADD ESP,0x214
// 00494e17: POP EBP
// 00494e18: POP EDI
// 00494e19: POP ESI
// 00494e1a: POP EBX
// 00494e1b: RET
// 00494e1c: PUSH EAX
//   Label: LAB_00494e1c
// 00494e1d: PUSH EDI
// 00494e1e: CALL core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0
//   XREF to: 004947a0 (UNCONDITIONAL_CALL)
// 00494e23: ADD ESP,0x8
// 00494e26: PUSH 0x212
// 00494e2b: PUSH 0x62291e
//   XREF to: 0062291e (DATA)
// 00494e30: PUSH EBX
// 00494e31: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00494e36: MOV EDX,dword ptr [0x02cee5ac]
//   XREF to: 02cee5ac (READ)
// 00494e3c: ADD ESP,0xc
// 00494e3f: CMP EDX,0x1
// 00494e42: JNZ 0x00494f1b
//   XREF to: 00494f1b (CONDITIONAL_JUMP)
// 00494e48: PUSH ESI
// 00494e49: PUSH 0x622931
//   XREF to: 00622931 (DATA)
// 00494e4e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x224] (DATA)
// 00494e52: PUSH EAX
// 00494e53: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00494e58: ADD ESP,0xc
// 00494e5b: MOV EAX,ESP
// 00494e5d: PUSH EAX
// 00494e5e: CALL engine_dosio.c_findFile_FUN_00481760
//   XREF to: 00481760 (UNCONDITIONAL_CALL)
// 00494e63: ADD ESP,0x4
// 00494e66: TEST EAX,EAX
// 00494e68: JZ 0x00494f2b
//   XREF to: 00494f2b (CONDITIONAL_JUMP)
// 00494e6e: CMP dword ptr [ESP + 0x208],0x0
//   XREF to: Stack[-0x1c] (READ)
// 00494e76: JZ 0x00494f2b
//   XREF to: 00494f2b (CONDITIONAL_JUMP)
// 00494e7c: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x124] (DATA)
// 00494e83: PUSH EAX
// 00494e84: PUSH ESI
// 00494e85: PUSH 0x622939
//   XREF to: 00622939 (DATA)
// 00494e8a: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00494e90: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00494e91: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 00494e96: ADD ESP,0x10
// 00494e99: TEST EAX,EAX
// 00494e9b: JZ 0x00494f1b
//   XREF to: 00494f1b (CONDITIONAL_JUMP)
// 00494ea1: PUSH 0x21d
// 00494ea6: PUSH 0x62299b
//   XREF to: 0062299b (DATA)
// 00494eab: PUSH 0x6229ae
//   XREF to: 006229ae (DATA)
// 00494eb0: PUSH 0x0
// 00494eb2: LEA EAX,[ESP + 0x110]
//   XREF to: Stack[-0x124] (DATA)
// 00494eb9: PUSH EAX
// 00494eba: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00494ebf: ADD ESP,0x14
// 00494ec2: MOV EBX,EAX
// 00494ec4: TEST EAX,EAX
// 00494ec6: JNZ 0x00494eeb
//   XREF to: 00494eeb (CONDITIONAL_JUMP)
// 00494ec8: MOV ESI,0x6229b2
//   XREF to: 006229b2 (DATA)
// 00494ecd: MOV EBP,0x21e
// 00494ed2: PUSH 0x6229c5
//   XREF to: 006229c5 (DATA)
// 00494ed7: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00494edd: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00494ee3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00494ee8: ADD ESP,0x4
// 00494eeb: PUSH 0x0
//   Label: LAB_00494eeb
// 00494eed: MOV EAX,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x24] (READ)
// 00494ef4: PUSH EAX
// 00494ef5: PUSH EBX
// 00494ef6: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 00494efb: ADD ESP,0xc
// 00494efe: PUSH EBX
// 00494eff: PUSH EDI
// 00494f00: CALL core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50
//   XREF to: 00494f50 (UNCONDITIONAL_CALL)
// 00494f05: ADD ESP,0x8
// 00494f08: PUSH 0x221
// 00494f0d: PUSH 0x6229f0
//   XREF to: 006229f0 (DATA)
// 00494f12: PUSH EBX
// 00494f13: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00494f18: ADD ESP,0xc
// 00494f1b: MOV EAX,0x1
//   Label: LAB_00494f1b
// 00494f20: ADD ESP,0x214
// 00494f26: POP EBP
// 00494f27: POP EDI
// 00494f28: POP ESI
// 00494f29: POP EBX
// 00494f2a: RET
// 00494f2b: PUSH ESI
//   Label: LAB_00494f2b
// 00494f2c: PUSH EDI
// 00494f2d: CALL core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040
//   XREF to: 00495040 (UNCONDITIONAL_CALL)
// 00494f32: ADD ESP,0x8
// 00494f35: MOV EAX,0x1
// 00494f3a: ADD ESP,0x214
// 00494f40: POP EBP
// 00494f41: POP EDI
// 00494f42: POP ESI
// 00494f43: POP EBX
// 00494f44: RET
