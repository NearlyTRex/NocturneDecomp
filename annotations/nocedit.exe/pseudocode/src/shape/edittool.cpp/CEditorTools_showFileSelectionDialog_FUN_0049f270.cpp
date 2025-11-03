// Name: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
// Address: 0049f270
// Address Range: [[0049f270, 0049f41a]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, bool auto_select_flag)
// Cross-references:
//   core_bodypart.cpp_FUN_0041b280 (0041b280) at 0041b2aa [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043deec [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 004431a0 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d69d [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bda51 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930 (004bd930) at 004bd95b [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_FUN_004e36f0 (004e36f0) at 004e37a5 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e179c [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e2856 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e2f10 (004e2f10) at 004e2f49 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052bceb [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005384c2 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053cd6f [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e530 (0054e530) at 0054e66a [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563573 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584b40 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f5ee [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00598410 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 005991ad [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_No_files_found_006230e2
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_makePath_FUN_00481f50
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
          (CEditorTools *this_ptr,char *search_pattern,char *directory,char *target_filename,
          bool auto_select_flag)

{
  int iVar1;
  char *pcVar2;
  char *output_buffer;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  undefined3 in_stack_00000015;
  byte in_stack_00000024;
  char **in_stack_fffff74c;
  CPickList *this_ptr_00;
  CStrList_vtable *in_stack_fffff750;
  CStrList_vtable *pCVar4;
  CStrList_vtable *in_stack_fffff754;
  CStrList_vtable *in_stack_fffff758;
  CStrList_vtable *in_stack_fffff75c;
  CStrList_vtable *in_stack_fffff760;
  CStrList_vtable *in_stack_fffff764;
  undefined1 auStack_504 [4];
  char acStack_500 [4];
  CStrList_vtable aCStack_4fc [17];
  undefined1 auStack_308 [4];
  undefined1 auStack_304 [4];
  char acStack_300 [4];
  CStrList_vtable aCStack_2fc [18];
  char acStack_100 [4];
  CStrList_vtable aCStack_fc [8];
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff744);
  shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
            ((CStrList *)&stack0xfffff748,target_filename,(char *)_auto_select_flag);
  if ((int)in_stack_fffff74c < 1) {
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("No files found");
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740((CEditorTools *)target_filename,pcVar2);
    this_ptr_00 = (CPickList *)&stack0xfffff754;
    iVar1 = 0;
    pCVar4 = (CStrList_vtable *)0x0;
  }
  else {
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffff74c);
    pcVar3 = (char *)0xffffffff;
    pcVar2 = pcVar3;
    if (((in_stack_00000024 & 1) != 0) && (output_buffer = (char *)0x0, 0 < (int)in_stack_fffff750))
    {
      do {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xfffff750,(int)auStack_308,output_buffer,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xfffff754,(int)auStack_504,output_buffer,1);
        engine_dosio_c_makePath_FUN_00481f50
                  (acStack_100,(char *)0x0,(char *)0x0,acStack_300,acStack_500);
        in_stack_fffff754 = aCStack_fc;
        pCVar4 = (CStrList_vtable *)0x49f33a;
        in_stack_fffff758 = _auto_select_flag;
        iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                          ((char *)in_stack_fffff754,(char *)_auto_select_flag);
        pcVar2 = output_buffer;
        if (iVar1 == 0) break;
        output_buffer = output_buffer + 1;
        pcVar2 = pcVar3;
      } while ((int)output_buffer < (int)pCVar4);
    }
    pcVar2 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               ((CPickList *)&stack0xfffff750,(char *)_auto_select_flag,(int)pcVar2,
                                0);
    this_ptr_00 = (CPickList *)&stack0xfffff754;
    if ((int)pcVar2 < 0) {
      pCVar4 = (CStrList_vtable *)0x0;
      iVar1 = 0;
    }
    else {
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                ((CStrList *)&stack0xfffff754,(int)auStack_304,pcVar2,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                ((CStrList *)&stack0xfffff758,(int)acStack_500,pcVar2,1);
      in_stack_fffff758 = aCStack_4fc;
      in_stack_fffff754 = aCStack_2fc;
      pCVar4 = (CStrList_vtable *)0x0;
      engine_dosio_c_makePath_FUN_00481f50
                ((char *)_auto_select_flag,(char *)0x0,(char *)0x0,(char *)in_stack_fffff754,
                 (char *)in_stack_fffff758);
      this_ptr_00 = (CPickList *)&stack0xfffff760;
      in_stack_fffff75c = (CStrList_vtable *)0x0;
      iVar1 = 1;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (this_ptr_00,(uint)pCVar4,(uint)in_stack_fffff754,(uint)in_stack_fffff758,
             (uint)in_stack_fffff75c,(uint)in_stack_fffff760,(uint)in_stack_fffff764);
  return iVar1;
}


// Assembly code:
// 0049f270: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
// 0049f271: PUSH ESI
// 0049f272: PUSH EDI
// 0049f273: PUSH EBP
// 0049f274: SUB ESP,0x8ac
// 0049f27a: MOV ESI,dword ptr [ESP + 0x8d0]
//   XREF to: Stack[0x14] (READ)
// 0049f281: MOV EAX,ESP
// 0049f283: PUSH EAX
// 0049f284: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0049f289: ADD ESP,0x4
// 0049f28c: MOV EDX,dword ptr [ESP + 0x8cc]
//   XREF to: Stack[0x10] (READ)
// 0049f293: PUSH EDX
// 0049f294: MOV ECX,dword ptr [ESP + 0x8cc]
//   XREF to: Stack[0xc] (READ)
// 0049f29b: PUSH ECX
// 0049f29c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x8bc] (DATA)
// 0049f2a0: PUSH EAX
// 0049f2a1: CALL shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
//   XREF to: 004a35b0 (UNCONDITIONAL_CALL)
// 0049f2a6: ADD ESP,0xc
// 0049f2a9: CMP dword ptr [ESP],0x1
//   XREF to: Stack[-0x8bc] (DATA)
// 0049f2ad: JL 0x0049f3d7
//   XREF to: 0049f3d7 (CONDITIONAL_JUMP)
// 0049f2b3: MOV EAX,ESP
// 0049f2b5: PUSH EAX
// 0049f2b6: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0049f2bb: ADD ESP,0x4
// 0049f2be: MOV AH,byte ptr [ESP + 0x8d4]
//   XREF to: Stack[0x18] (READ)
// 0049f2c5: MOV EDI,0xffffffff
// 0049f2ca: TEST AH,0x1
// 0049f2cd: JZ 0x0049f347
//   XREF to: 0049f347 (CONDITIONAL_JUMP)
// 0049f2cf: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x8bc] (DATA)
// 0049f2d2: XOR EBX,EBX
// 0049f2d4: TEST EBP,EBP
// 0049f2d6: JLE 0x0049f347
//   XREF to: 0049f347 (CONDITIONAL_JUMP)
// 0049f2d8: PUSH 0x0
//   Label: LAB_0049f2d8
// 0049f2da: PUSH EBX
// 0049f2db: LEA EAX,[ESP + 0x5b0]
//   XREF to: Stack[-0x314] (DATA)
// 0049f2e2: PUSH EAX
// 0049f2e3: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x8bc] (DATA)
// 0049f2e7: PUSH EAX
// 0049f2e8: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0049f2ed: ADD ESP,0x10
// 0049f2f0: PUSH 0x1
// 0049f2f2: PUSH EBX
// 0049f2f3: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x514] (DATA)
// 0049f2fa: PUSH EAX
// 0049f2fb: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x8bc] (DATA)
// 0049f2ff: PUSH EAX
// 0049f300: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0049f305: ADD ESP,0x10
// 0049f308: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x514] (DATA)
// 0049f30f: PUSH EAX
// 0049f310: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x314] (DATA)
// 0049f317: PUSH EAX
// 0049f318: PUSH 0x0
// 0049f31a: PUSH 0x0
// 0049f31c: LEA EAX,[ESP + 0x7b8]
//   XREF to: Stack[-0x114] (DATA)
// 0049f323: PUSH EAX
// 0049f324: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 0049f329: ADD ESP,0x14
// 0049f32c: PUSH ESI
// 0049f32d: LEA EAX,[ESP + 0x7ac]
//   XREF to: Stack[-0x114] (DATA)
// 0049f334: PUSH EAX
// 0049f335: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0049f33a: ADD ESP,0x8
// 0049f33d: TEST EAX,EAX
// 0049f33f: JNZ 0x0049f3ff
//   XREF to: 0049f3ff (CONDITIONAL_JUMP)
// 0049f345: MOV EDI,EBX
// 0049f347: PUSH 0x0
//   Label: LAB_0049f347
// 0049f349: PUSH EDI
// 0049f34a: MOV ECX,dword ptr [ESP + 0x8cc]
//   XREF to: Stack[0x8] (READ)
// 0049f351: PUSH ECX
// 0049f352: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x8bc] (DATA)
// 0049f356: PUSH EAX
// 0049f357: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0049f35c: MOV EBX,EAX
// 0049f35e: ADD ESP,0x10
// 0049f361: TEST EAX,EAX
// 0049f363: JL 0x0049f410
//   XREF to: 0049f410 (CONDITIONAL_JUMP)
// 0049f369: PUSH 0x0
// 0049f36b: PUSH EAX
// 0049f36c: LEA EAX,[ESP + 0x5b0]
//   XREF to: Stack[-0x314] (DATA)
// 0049f373: PUSH EAX
// 0049f374: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x8bc] (DATA)
// 0049f378: PUSH EAX
// 0049f379: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0049f37e: ADD ESP,0x10
// 0049f381: PUSH 0x1
// 0049f383: PUSH EBX
// 0049f384: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x514] (DATA)
// 0049f38b: PUSH EAX
// 0049f38c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x8bc] (DATA)
// 0049f390: PUSH EAX
// 0049f391: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0049f396: ADD ESP,0x10
// 0049f399: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x514] (DATA)
// 0049f3a0: PUSH EAX
// 0049f3a1: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x314] (DATA)
// 0049f3a8: PUSH EAX
// 0049f3a9: PUSH 0x0
// 0049f3ab: PUSH 0x0
// 0049f3ad: PUSH ESI
// 0049f3ae: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 0049f3b3: ADD ESP,0x14
// 0049f3b6: PUSH 0x0
// 0049f3b8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x8bc] (DATA)
// 0049f3bc: PUSH EAX
// 0049f3bd: MOV EBX,0x1
// 0049f3c2: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   Label: LAB_0049f3c2
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0049f3c7: ADD ESP,0x8
// 0049f3ca: MOV EAX,EBX
// 0049f3cc: ADD ESP,0x8ac
// 0049f3d2: POP EBP
// 0049f3d3: POP EDI
// 0049f3d4: POP ESI
// 0049f3d5: POP EBX
// 0049f3d6: RET
// 0049f3d7: PUSH 0x6230e2
//   Label: LAB_0049f3d7
//   XREF to: 006230e2 (DATA)
// 0049f3dc: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0049f3e1: ADD ESP,0x4
// 0049f3e4: PUSH EAX
// 0049f3e5: MOV EAX,dword ptr [ESP + 0x8c4]
//   XREF to: Stack[0x4] (READ)
// 0049f3ec: PUSH EAX
// 0049f3ed: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0049f3f2: ADD ESP,0x8
// 0049f3f5: XOR EBX,EBX
// 0049f3f7: PUSH EBX
// 0049f3f8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x8bc] (DATA)
// 0049f3fc: PUSH EAX
// 0049f3fd: JMP 0x0049f3c2
//   XREF to: 0049f3c2 (UNCONDITIONAL_JUMP)
// 0049f3ff: MOV EDX,dword ptr [ESP]
//   Label: LAB_0049f3ff
//   XREF to: Stack[-0x8bc] (DATA)
// 0049f402: INC EBX
// 0049f403: CMP EBX,EDX
// 0049f405: JL 0x0049f2d8
//   XREF to: 0049f2d8 (CONDITIONAL_JUMP)
// 0049f40b: JMP 0x0049f347
//   XREF to: 0049f347 (UNCONDITIONAL_JUMP)
// 0049f410: PUSH 0x0
//   Label: LAB_0049f410
// 0049f412: XOR EBX,EAX
// 0049f414: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x8bc] (DATA)
// 0049f418: PUSH EAX
// 0049f419: JMP 0x0049f3c2
//   XREF to: 0049f3c2 (UNCONDITIONAL_JUMP)
