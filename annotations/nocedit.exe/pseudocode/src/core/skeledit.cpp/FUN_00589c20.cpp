// Name: core_skeledit.cpp_FUN_00589c20
// Address: 00589c20
// Address Range: [[00589c20, 00589f39]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589c20()
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d2d0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_dixie_wav_00649df5
//   TerminatedCString s_LOD_generation_complete_00649dff
//   TerminatedCString s_wt_00649e31
//   TerminatedCString s_core_skeledit_cpp_00649e34
//   TerminatedCString s_Can_t_create_mesh_precom_00649e49
//   TerminatedCString s_Use_the_file_and_select__00649e6c
//   TerminatedCString s_Rebuild_shadow_LOD_recre_00649e96
//   TerminatedCString s_Don_t_select_a_shadow_LO_00649eca
//   TerminatedCString s_Precomputed_LOD_exists_f_00649f1f
//   TerminatedCString s_Use_the_file_and_select__00649f54
//   TerminatedCString s_Rebuild_LODs_recreating__00649f76
//   TerminatedCString s_Don_t_select_LODs_at_thi_00649fa4
//   TerminatedCString s_Precomputed_LOD_exists_f_00649ff1
//   TerminatedCString s_rt_0064a017
//   TerminatedCString s_Error_loading_precompute_0064a01a
//   TerminatedCString s_Error_loading_precompute_0064a039
//   TerminatedCString s_No_precompute_file_exist_0064a058
//   TerminatedCString s_No_precompute_file_exist_0064a089
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_FUN_00589fa0
//   core_skeledit.cpp_FUN_00589fe0
//   core_skeledit.cpp_FUN_0058a0f0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870
//   shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0
//   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0
//   shape_meshlod.cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0
//   shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
//   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520
//   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
//   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

int core_skeledit_cpp_FUN_00589c20(void)

{
  int iVar1;
  CPickList *this_ptr;
  FILE *pFVar2;
  char *format_string;
  BADSPACEBASE *in_ESP;
  CLodMesh *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  CStrList_vtable *in_stack_fffff5b4;
  CStrList_vtable *in_stack_fffff5b8;
  CStrList_vtable *in_stack_fffff5bc;
  CStrList_vtable *in_stack_fffff5c0;
  uint in_stack_fffff5c4;
  undefined1 auStack_6b8 [20];
  CPickList CStack_6a4;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0xa84);
  if (*(int *)(in_stack_00000010 + 0x308) == 1) {
    iVar1 = 0;
  }
  else {
    shape_meshlod_cpp_CLodMesh_previewLodGeneration_FUN_0051d520
              (in_stack_0000000c,0,in_stack_00000014);
    iVar1 = shape_meshlod_cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0(in_stack_0000000c);
    if (iVar1 != 0) {
      if (*(int *)(in_stack_00000010 + 0x30c) == 0) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_6b8);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(auStack_6b8 + 4),"Use the file and select LODs now.");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(auStack_6b8 + 8),"Rebuild LODs, recreating the precompute file.");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(auStack_6b8 + 0xc),"Don't select LODs at this time.  I can always use the precompute file later.");
        iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)(auStack_6b8 + 0x10),"Precomputed LOD exists for this model",-1,
                           0);
        this_ptr = &CStack_6a4;
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff5a0);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffff5a4,"Use the file and select a shadow LOD now.");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffff5a8,"Rebuild shadow LOD, recreating the precompute file.");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffff5ac,"Don't select a shadow LOD at this time.  I can always use the precompute file later.");
        iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffff5b0,"Precomputed LOD exists for this model for shadow LOD",-1,0);
        this_ptr = (CPickList *)&stack0xfffff5b4;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (this_ptr,0,(uint)in_stack_fffff5b4,(uint)in_stack_fffff5b8,(uint)in_stack_fffff5bc,
                 (uint)in_stack_fffff5c0,in_stack_fffff5c4);
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return 0;
        }
        pFVar2 = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
                           (in_stack_0000000c,"wt");
        in_stack_0000000c->precompute_file = pFVar2;
        if (pFVar2 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x179;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
        }
        core_skeledit_cpp_FUN_0058a0f0();
        shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0(in_stack_0000000c,0,in_stack_00000014);
        sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
        sound_sndmain_cpp_startSfx_FUN_005a8e90("dixie.wav");
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"LOD generation complete!");
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        return 1;
      }
      pFVar2 = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
                         (in_stack_0000000c,"rt");
      in_stack_0000000c->precompute_file = pFVar2;
      if (pFVar2 == (FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error loading precompute file.");
        return -1;
      }
      core_skeledit_cpp_FUN_00589fa0();
      core_skeledit_cpp_FUN_00589fe0();
      iVar1 = shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0
                        (in_stack_0000000c,in_stack_0000000c->precompute_file);
      if (iVar1 != 0) {
        shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(in_stack_0000000c);
        return 1;
      }
      shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(in_stack_0000000c);
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error loading precompute file.");
      return -1;
    }
    format_string = "No precompute file exists.  Generate a LODs now?";
    if (*(int *)(in_stack_00000010 + 0x30c) != 0) {
      format_string = "No precompute file exists.  Generate an LOD for shadows now?";
    }
    iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,format_string);
    if (iVar1 != 0) {
      shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0(in_stack_0000000c,0,in_stack_00000014);
      sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
      sound_sndmain_cpp_startSfx_FUN_005a8e90("dixie.wav");
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"LOD generation complete!");
      sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
      return 1;
    }
  }
  return iVar1;
}


// Assembly code:
// 00589c20: PUSH 0xa84
//   Label: core_skeledit.cpp_FUN_00589c20
// 00589c25: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00589c2a: PUSH EBX
// 00589c2b: PUSH ESI
// 00589c2c: PUSH EDI
// 00589c2d: PUSH EBP
// 00589c2e: SUB ESP,0xa60
// 00589c34: MOV EBX,dword ptr [ESP + 0xa74]
//   XREF to: Stack[0x4] (READ)
// 00589c3b: MOV EDI,dword ptr [ESP + 0xa78]
//   XREF to: Stack[0x8] (READ)
// 00589c42: MOV EBP,dword ptr [ESP + 0xa7c]
//   XREF to: Stack[0xc] (READ)
// 00589c49: CMP dword ptr [EDI + 0x308],0x1
// 00589c50: JNZ 0x00589c5f
//   XREF to: 00589c5f (CONDITIONAL_JUMP)
// 00589c52: XOR EAX,EAX
// 00589c54: ADD ESP,0xa60
//   Label: LAB_00589c54
// 00589c5a: POP EBP
// 00589c5b: POP EDI
// 00589c5c: POP ESI
// 00589c5d: POP EBX
// 00589c5e: RET
// 00589c5f: PUSH EBP
//   Label: LAB_00589c5f
// 00589c60: PUSH 0x0
// 00589c62: PUSH EBX
// 00589c63: CALL shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520
//   XREF to: 0051d520 (UNCONDITIONAL_CALL)
// 00589c68: ADD ESP,0xc
// 00589c6b: PUSH EBX
// 00589c6c: CALL shape_meshlod.cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0
//   XREF to: 0051b6f0 (UNCONDITIONAL_CALL)
// 00589c71: ADD ESP,0x4
// 00589c74: TEST EAX,EAX
// 00589c76: JZ 0x00589ec7
//   XREF to: 00589ec7 (CONDITIONAL_JUMP)
// 00589c7c: CMP dword ptr [EDI + 0x30c],0x0
// 00589c83: JZ 0x00589d0f
//   XREF to: 00589d0f (CONDITIONAL_JUMP)
// 00589c89: MOV EAX,ESP
// 00589c8b: PUSH EAX
// 00589c8c: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00589c91: ADD ESP,0x4
// 00589c94: PUSH 0x649e6c
//   XREF to: 00649e6c (DATA)
// 00589c99: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa70] (DATA)
// 00589c9d: PUSH EAX
// 00589c9e: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00589ca3: ADD ESP,0x8
// 00589ca6: PUSH 0x649e96
//   XREF to: 00649e96 (DATA)
// 00589cab: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa70] (DATA)
// 00589caf: PUSH EAX
// 00589cb0: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00589cb5: ADD ESP,0x8
// 00589cb8: PUSH 0x649eca
//   XREF to: 00649eca (DATA)
// 00589cbd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa70] (DATA)
// 00589cc1: PUSH EAX
// 00589cc2: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00589cc7: ADD ESP,0x8
// 00589cca: PUSH 0x0
// 00589ccc: PUSH -0x1
// 00589cce: PUSH 0x649f1f
//   XREF to: 00649f1f (DATA)
// 00589cd3: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xa70] (DATA)
// 00589cd7: PUSH EAX
// 00589cd8: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00589cdd: ADD ESP,0x10
// 00589ce0: PUSH 0x0
// 00589ce2: MOV ESI,EAX
// 00589ce4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa70] (DATA)
// 00589ce8: PUSH EAX
//   Label: LAB_00589ce8
// 00589ce9: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00589cee: ADD ESP,0x8
// 00589cf1: TEST ESI,ESI
// 00589cf3: JZ 0x00589d87
//   XREF to: 00589d87 (CONDITIONAL_JUMP)
// 00589cf9: CMP ESI,0x1
// 00589cfc: JZ 0x00589e3a
//   XREF to: 00589e3a (CONDITIONAL_JUMP)
// 00589d02: XOR EAX,EAX
// 00589d04: ADD ESP,0xa60
// 00589d0a: POP EBP
// 00589d0b: POP EDI
// 00589d0c: POP ESI
// 00589d0d: POP EBX
// 00589d0e: RET
// 00589d0f: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_00589d0f
//   XREF to: Stack[-0x6c8] (DATA)
// 00589d16: PUSH EAX
// 00589d17: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00589d1c: ADD ESP,0x4
// 00589d1f: PUSH 0x649f54
//   XREF to: 00649f54 (DATA)
// 00589d24: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x6c8] (DATA)
// 00589d2b: PUSH EAX
// 00589d2c: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00589d31: ADD ESP,0x8
// 00589d34: PUSH 0x649f76
//   XREF to: 00649f76 (DATA)
// 00589d39: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x6c8] (DATA)
// 00589d40: PUSH EAX
// 00589d41: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00589d46: ADD ESP,0x8
// 00589d49: PUSH 0x649fa4
//   XREF to: 00649fa4 (DATA)
// 00589d4e: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x6c8] (DATA)
// 00589d55: PUSH EAX
// 00589d56: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00589d5b: ADD ESP,0x8
// 00589d5e: PUSH 0x0
// 00589d60: PUSH -0x1
// 00589d62: PUSH 0x649ff1
//   XREF to: 00649ff1 (DATA)
// 00589d67: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0x6c8] (DATA)
// 00589d6e: PUSH EAX
// 00589d6f: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00589d74: ADD ESP,0x10
// 00589d77: PUSH 0x0
// 00589d79: MOV ESI,EAX
// 00589d7b: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x6c8] (DATA)
// 00589d82: JMP 0x00589ce8
//   XREF to: 00589ce8 (UNCONDITIONAL_JUMP)
// 00589d87: PUSH 0x64a017
//   Label: LAB_00589d87
//   XREF to: 0064a017 (DATA)
// 00589d8c: PUSH EBX
// 00589d8d: CALL shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
//   XREF to: 0051b770 (UNCONDITIONAL_CALL)
// 00589d92: ADD ESP,0x8
// 00589d95: MOV dword ptr [EBX + 0x38],EAX
// 00589d98: TEST EAX,EAX
// 00589d9a: JZ 0x00589dea
//   XREF to: 00589dea (CONDITIONAL_JUMP)
// 00589d9c: LEA EAX,[ESP + 0x750]
//   XREF to: Stack[-0x320] (DATA)
// 00589da3: PUSH EAX
// 00589da4: CALL core_skeledit.cpp_FUN_00589fa0
//   XREF to: 00589fa0 (UNCONDITIONAL_CALL)
// 00589da9: ADD ESP,0x4
// 00589dac: MOV EDI,dword ptr [EBX + 0x38]
// 00589daf: PUSH EDI
// 00589db0: LEA EAX,[ESP + 0x754]
//   XREF to: Stack[-0x320] (DATA)
// 00589db7: PUSH EAX
// 00589db8: CALL core_skeledit.cpp_FUN_00589fe0
//   XREF to: 00589fe0 (UNCONDITIONAL_CALL)
// 00589dbd: ADD ESP,0x8
// 00589dc0: MOV EBP,dword ptr [EBX + 0x38]
// 00589dc3: PUSH EBP
// 00589dc4: PUSH EBX
// 00589dc5: CALL shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0
//   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)
// 00589dca: ADD ESP,0x8
// 00589dcd: TEST EAX,EAX
// 00589dcf: JZ 0x00589e0e
//   XREF to: 00589e0e (CONDITIONAL_JUMP)
// 00589dd1: PUSH EBX
// 00589dd2: CALL shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870
//   XREF to: 0051b870 (UNCONDITIONAL_CALL)
// 00589dd7: MOV EAX,0x1
// 00589ddc: ADD ESP,0x4
// 00589ddf: ADD ESP,0xa60
// 00589de5: POP EBP
// 00589de6: POP EDI
// 00589de7: POP ESI
// 00589de8: POP EBX
// 00589de9: RET
// 00589dea: PUSH 0x64a01a
//   Label: LAB_00589dea
//   XREF to: 0064a01a (DATA)
// 00589def: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00589df5: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00589df6: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00589dfb: MOV EAX,0xffffffff
// 00589e00: ADD ESP,0x8
// 00589e03: ADD ESP,0xa60
// 00589e09: POP EBP
// 00589e0a: POP EDI
// 00589e0b: POP ESI
// 00589e0c: POP EBX
// 00589e0d: RET
// 00589e0e: PUSH EBX
//   Label: LAB_00589e0e
// 00589e0f: CALL shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870
//   XREF to: 0051b870 (UNCONDITIONAL_CALL)
// 00589e14: ADD ESP,0x4
// 00589e17: PUSH 0x64a039
//   XREF to: 0064a039 (DATA)
// 00589e1c: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 00589e21: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00589e22: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00589e27: MOV EAX,0xffffffff
// 00589e2c: ADD ESP,0x8
// 00589e2f: ADD ESP,0xa60
// 00589e35: POP EBP
// 00589e36: POP EDI
// 00589e37: POP ESI
// 00589e38: POP EBX
// 00589e39: RET
// 00589e3a: PUSH 0x649e31
//   Label: LAB_00589e3a
//   XREF to: 00649e31 (DATA)
// 00589e3f: PUSH EBX
// 00589e40: MOV ESI,EBX
// 00589e42: CALL shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
//   XREF to: 0051b770 (UNCONDITIONAL_CALL)
// 00589e47: ADD ESP,0x8
// 00589e4a: MOV dword ptr [EBX + 0x38],EAX
// 00589e4d: TEST EAX,EAX
// 00589e4f: JNZ 0x00589e73
//   XREF to: 00589e73 (CONDITIONAL_JUMP)
// 00589e51: MOV ECX,0x649e34
//   XREF to: 00649e34 (DATA)
// 00589e56: MOV EAX,0x179
// 00589e5b: PUSH 0x649e49
//   XREF to: 00649e49 (DATA)
// 00589e60: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00589e66: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00589e6b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00589e70: ADD ESP,0x4
// 00589e73: MOV EDX,dword ptr [ESI + 0x38]
//   Label: LAB_00589e73
// 00589e76: PUSH EDX
// 00589e77: PUSH EDI
// 00589e78: CALL core_skeledit.cpp_FUN_0058a0f0
//   XREF to: 0058a0f0 (UNCONDITIONAL_CALL)
// 00589e7d: ADD ESP,0x8
// 00589e80: PUSH EBP
// 00589e81: PUSH 0x0
// 00589e83: PUSH EBX
// 00589e84: CALL shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0
//   XREF to: 00516ba0 (UNCONDITIONAL_CALL)
// 00589e89: ADD ESP,0xc
// 00589e8c: CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
//   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
// 00589e91: PUSH 0x649df5
//   XREF to: 00649df5 (DATA)
// 00589e96: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 00589e9b: ADD ESP,0x4
// 00589e9e: PUSH 0x649dff
//   XREF to: 00649dff (DATA)
// 00589ea3: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00589ea9: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00589eaa: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00589eaf: ADD ESP,0x8
// 00589eb2: CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 00589eb7: MOV EAX,0x1
// 00589ebc: ADD ESP,0xa60
// 00589ec2: POP EBP
// 00589ec3: POP EDI
// 00589ec4: POP ESI
// 00589ec5: POP EBX
// 00589ec6: RET
// 00589ec7: MOV ECX,dword ptr [EDI + 0x30c]
//   Label: LAB_00589ec7
// 00589ecd: MOV EAX,0x64a058
//   XREF to: 0064a058 (DATA)
// 00589ed2: TEST ECX,ECX
// 00589ed4: JZ 0x00589edb
//   XREF to: 00589edb (CONDITIONAL_JUMP)
// 00589ed6: MOV EAX,0x64a089
//   XREF to: 0064a089 (DATA)
// 00589edb: PUSH EAX
//   Label: LAB_00589edb
//   XREF to: 0064a089 (DATA)
//   XREF to: 0064a058 (DATA)
// 00589edc: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00589ee2: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00589ee3: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 00589ee8: ADD ESP,0x8
// 00589eeb: TEST EAX,EAX
// 00589eed: JZ 0x00589c54
//   XREF to: 00589c54 (CONDITIONAL_JUMP)
// 00589ef3: PUSH EBP
// 00589ef4: PUSH 0x0
// 00589ef6: PUSH EBX
// 00589ef7: CALL shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0
//   XREF to: 00516ba0 (UNCONDITIONAL_CALL)
// 00589efc: ADD ESP,0xc
// 00589eff: CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
//   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
// 00589f04: PUSH 0x649df5
//   XREF to: 00649df5 (DATA)
// 00589f09: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 00589f0e: ADD ESP,0x4
// 00589f11: PUSH 0x649dff
//   XREF to: 00649dff (DATA)
// 00589f16: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00589f1c: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00589f1d: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00589f22: ADD ESP,0x8
// 00589f25: CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 00589f2a: MOV EAX,0x1
// 00589f2f: ADD ESP,0xa60
// 00589f35: POP EBP
// 00589f36: POP EDI
// 00589f37: POP ESI
// 00589f38: POP EBX
// 00589f39: RET
