// Name: shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
// Address: 0049f060
// Address Range: [[0049f060, 0049f0ea]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string, ...)
// Cross-references:
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 0044352e [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479968 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d891 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db92f [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd5b9 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538928 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a622 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80 (0053bc80) at 0053bcd2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00582109 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583cac [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005795c4 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00581262 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 005985eb [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c9a4 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005933f7 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_FUN_005dabe0 (005dabe0) at 005dad67 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051e195 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d844 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Yes_I_know_what_I_m_doin_00623058
//   TerminatedCString s_No_please_I_didn_t_mean__00623097
//   undefined4 DAT_02cf0130
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
          (CEditorTools *this_ptr,char *format_string,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CStrList_vtable *d2;
  
  crt_stdio_c_vsprintf_FUN_005fdba8
            (g_ConfirmationMessageBuffer + 0x400,format_string,(va_list_t *)&stack0xfffffff8);
  d2 = (CStrList_vtable *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xffffffec);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffff0,"^Yes, I know what I'm doing and I hate these annoying prompts.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffff4,"^No, please, I didn't mean to do it!");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
                    ((CStrList *)(g_ConfirmationMessageBuffer + 0x400),&stack0xfffffff8,1);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0xfffffffc,0,(uint)d2);
  return (uint)(iVar1 == 0);
}


// Assembly code:
// 0049f060: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
// 0049f061: SUB ESP,0x14
// 0049f064: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[0xc] (DATA)
// 0049f068: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0049f06c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x8] (DATA)
// 0049f070: PUSH EAX
// 0049f071: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0049f075: PUSH EDX
// 0049f076: PUSH 0x2cf0130
//   XREF to: 02cf0130 (DATA)
// 0049f07b: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 0049f080: ADD ESP,0xc
// 0049f083: MOV EAX,ESP
// 0049f085: XOR ECX,ECX
// 0049f087: PUSH EAX
// 0049f088: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 0049f08c: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 0049f091: ADD ESP,0x4
// 0049f094: PUSH 0x623058
//   XREF to: 00623058 (DATA)
// 0049f099: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f09d: PUSH EAX
// 0049f09e: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0049f0a3: ADD ESP,0x8
// 0049f0a6: PUSH 0x623097
//   XREF to: 00623097 (DATA)
// 0049f0ab: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f0af: PUSH EAX
// 0049f0b0: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0049f0b5: ADD ESP,0x8
// 0049f0b8: PUSH 0x1
// 0049f0ba: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f0be: PUSH EAX
// 0049f0bf: PUSH 0x2cf0130
//   XREF to: 02cf0130 (DATA)
// 0049f0c4: CALL shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0
//   XREF to: 0049e9d0 (UNCONDITIONAL_CALL)
// 0049f0c9: ADD ESP,0xc
// 0049f0cc: XOR EBX,EBX
// 0049f0ce: TEST EAX,EAX
// 0049f0d0: SETZ AL
// 0049f0d3: PUSH 0x0
// 0049f0d5: MOV BL,AL
// 0049f0d7: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f0db: PUSH EAX
// 0049f0dc: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 0049f0e1: ADD ESP,0x8
// 0049f0e4: MOV EAX,EBX
// 0049f0e6: ADD ESP,0x14
// 0049f0e9: POP EBX
// 0049f0ea: RET
