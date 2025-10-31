// Name: core_script.cpp_FUN_00566180
// Address: 00566180
// Address Range: [[00566180, 00566229]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566180()
// Cross-references:
//   core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190 (0053d190) at 0053d1ef [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wt_00643f5e
//   TerminatedCString s_world_00643f61
//   TerminatedCString s_Can_t_create_world_s_00643f67
//   TerminatedCString s_s_00643f7d
//   TerminatedCString s_core_script_cpp_00643f81
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_0310fd10
// Function calls:
//   core_script.cpp_FUN_00566800
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00566180(undefined4 param_1, undefined4 param_2) */

void core_script_cpp_FUN_00566180(void)

{
  CBitFont *font_ptr;
  int iVar1;
  FILE *file_ptr;
  int iVar2;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  font_ptr = (CBitFont *)(in_stack_00000004 + 0x38);
  iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
  if (iVar1 < 1) {
    return;
  }
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("world",in_stack_00000008,"wt");
  if (file_ptr != (FILE *)0x0) {
    iVar1 = 0;
    DAT_0310fd10 = 0;
    while( true ) {
      iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
      if (iVar2 <= iVar1) break;
      core_script_cpp_FUN_00566800();
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)font_ptr,iVar1);
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%s\n");
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\script.cpp",0x1a65);
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't create world\\%s",in_stack_00000008);
  return;
}


// Assembly code:
// 00566180: PUSH EBX
//   Label: core_script.cpp_FUN_00566180
// 00566181: PUSH ESI
// 00566182: PUSH EDI
// 00566183: PUSH EBP
// 00566184: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00566188: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056618c: LEA ESI,[EBP + 0x38]
// 0056618f: PUSH ESI
// 00566190: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00566195: ADD ESP,0x4
// 00566198: CMP EAX,0x1
// 0056619b: JGE 0x005661a2
//   XREF to: 005661a2 (CONDITIONAL_JUMP)
// 0056619d: POP EBP
// 0056619e: POP EDI
// 0056619f: POP ESI
// 005661a0: POP EBX
// 005661a1: RET
// 005661a2: PUSH 0x643f5e
//   Label: LAB_005661a2
//   XREF to: 00643f5e (DATA)
// 005661a7: PUSH EBX
// 005661a8: PUSH 0x643f61
//   XREF to: 00643f61 (DATA)
// 005661ad: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005661b2: ADD ESP,0xc
// 005661b5: MOV EDI,EAX
// 005661b7: TEST EAX,EAX
// 005661b9: JZ 0x005661f8
//   XREF to: 005661f8 (CONDITIONAL_JUMP)
// 005661bb: XOR EDX,EDX
// 005661bd: XOR EBX,EBX
// 005661bf: MOV dword ptr [0x0310fd10],EDX
//   XREF to: 0310fd10 (WRITE)
// 005661c5: PUSH ESI
//   Label: LAB_005661c5
// 005661c6: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 005661cb: ADD ESP,0x4
// 005661ce: CMP EBX,EAX
// 005661d0: JGE 0x00566212
//   XREF to: 00566212 (CONDITIONAL_JUMP)
// 005661d2: PUSH EBX
// 005661d3: PUSH EBP
// 005661d4: CALL core_script.cpp_FUN_00566800
//   XREF to: 00566800 (UNCONDITIONAL_CALL)
// 005661d9: ADD ESP,0x8
// 005661dc: PUSH EBX
// 005661dd: PUSH ESI
// 005661de: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005661e3: ADD ESP,0x8
// 005661e6: PUSH EAX
// 005661e7: PUSH 0x643f7d
//   XREF to: 00643f7d (DATA)
// 005661ec: PUSH EDI
// 005661ed: INC EBX
// 005661ee: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005661f3: ADD ESP,0xc
// 005661f6: JMP 0x005661c5
//   XREF to: 005661c5 (UNCONDITIONAL_JUMP)
// 005661f8: PUSH EBX
//   Label: LAB_005661f8
// 005661f9: PUSH 0x643f67
//   XREF to: 00643f67 (DATA)
// 005661fe: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00566204: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00566205: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0056620a: ADD ESP,0xc
// 0056620d: POP EBP
// 0056620e: POP EDI
// 0056620f: POP ESI
// 00566210: POP EBX
// 00566211: RET
// 00566212: PUSH 0x1a65
//   Label: LAB_00566212
// 00566217: PUSH 0x643f81
//   XREF to: 00643f81 (DATA)
// 0056621c: PUSH EDI
// 0056621d: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00566222: ADD ESP,0xc
// 00566225: POP EBP
// 00566226: POP EDI
// 00566227: POP ESI
// 00566228: POP EBX
// 00566229: RET
