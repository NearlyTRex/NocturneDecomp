// Name: shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
// Address: 0049f0f0
// Address Range: [[0049f0f0, 0049f17a]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string, ...)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 (00494de0) at 00494e91 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053da09 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e8c2 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053cd0c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00578e74 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f427 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b410 (0057b410) at 0057b4b9 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b500 (0057b500) at 0057b5cb [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b600 (0057b600) at 0057b8d3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057cb03 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00598e58 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 (00595fc0) at 00596063 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589ee3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4378 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb4e3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004baa8b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b796b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b6ef2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc3aa [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_00534210 (00534210) at 00534235 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Yes_006230bc
//   TerminatedCString s_No_006230c1
//   char[1024] g_YesNoDialogBuffer
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
          (CEditorTools *this_ptr,char *format_string,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CStrList_vtable *d2;
  
  crt_stdio_c_vsprintf_FUN_005fdba8(g_YesNoDialogBuffer,format_string,(va_list_t *)&stack0xfffffff8)
  ;
  d2 = (CStrList_vtable *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xffffffec);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffff0,"^Yes");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffff4,"^No");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
                    ((CStrList *)g_YesNoDialogBuffer,&stack0xfffffff8,0);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0xfffffffc,0,(uint)d2);
  return (uint)(iVar1 == 0);
}


// Assembly code:
// 0049f0f0: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
// 0049f0f1: SUB ESP,0x14
// 0049f0f4: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[0xc] (DATA)
// 0049f0f8: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0049f0fc: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x8] (DATA)
// 0049f100: PUSH EAX
// 0049f101: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0049f105: PUSH EDX
// 0049f106: PUSH 0x2cf0530
//   XREF to: 02cf0530 (DATA)
// 0049f10b: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 0049f110: ADD ESP,0xc
// 0049f113: MOV EAX,ESP
// 0049f115: XOR ECX,ECX
// 0049f117: PUSH EAX
// 0049f118: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 0049f11c: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 0049f121: ADD ESP,0x4
// 0049f124: PUSH 0x6230bc
//   XREF to: 006230bc (DATA)
// 0049f129: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f12d: PUSH EAX
// 0049f12e: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0049f133: ADD ESP,0x8
// 0049f136: PUSH 0x6230c1
//   XREF to: 006230c1 (DATA)
// 0049f13b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f13f: PUSH EAX
// 0049f140: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0049f145: ADD ESP,0x8
// 0049f148: PUSH 0x0
// 0049f14a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f14e: PUSH EAX
// 0049f14f: PUSH 0x2cf0530
//   XREF to: 02cf0530 (DATA)
// 0049f154: CALL shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0
//   XREF to: 0049e9d0 (UNCONDITIONAL_CALL)
// 0049f159: ADD ESP,0xc
// 0049f15c: XOR EBX,EBX
// 0049f15e: TEST EAX,EAX
// 0049f160: SETZ AL
// 0049f163: PUSH 0x0
// 0049f165: MOV BL,AL
// 0049f167: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f16b: PUSH EAX
// 0049f16c: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 0049f171: ADD ESP,0x8
// 0049f174: MOV EAX,EBX
// 0049f176: ADD ESP,0x14
// 0049f179: POP EBX
// 0049f17a: RET
