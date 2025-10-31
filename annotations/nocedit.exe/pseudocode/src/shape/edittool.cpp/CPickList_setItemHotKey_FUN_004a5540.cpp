// Name: shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
// Address: 004a5540
// Address Range: [[004a5540, 004a5601]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540(CPickList * this_ptr, int item_index, int hotkey_code)
// Cross-references:
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 00578889 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90 (004b2f90) at 004b3048 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623b6b
//   TerminatedCString s_CPickList_setItemHotKey__00623b81
//   TerminatedCString s_shape_edittool_cpp_00623baa
//   TerminatedCString s_shape_edittool_cpp_00623bc0
//   TerminatedCString s_Out_of_memory_00623bd6
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540
          (CPickList *this_ptr,int item_index,int hotkey_code)

{
  int *piVar1;
  int in_stack_00000010;
  
  if ((item_index < 0) || ((this_ptr->base_strlist).item_count <= item_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x104e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::setItemHotKey - invalid index");
  }
  if (this_ptr->hotkey_capacity <= item_index) {
    piVar1 = (int *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                              (this_ptr->hotkey_array,(this_ptr->base_strlist).item_count << 2,
                               "..\\shape\\edittool.cpp",0x1054);
    this_ptr->hotkey_array = piVar1;
    if (piVar1 == (int *)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0x1055;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
    }
    while (this_ptr->hotkey_capacity < (this_ptr->base_strlist).item_count) {
      this_ptr->hotkey_array[this_ptr->hotkey_capacity] = -1;
      this_ptr->hotkey_capacity = this_ptr->hotkey_capacity + 1;
    }
  }
  this_ptr->hotkey_array[item_index] = in_stack_00000010;
  return;
}


// Assembly code:
// 004a5540: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
// 004a5541: PUSH ESI
// 004a5542: PUSH EDI
// 004a5543: PUSH EBP
// 004a5544: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a5548: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a554c: TEST ESI,ESI
// 004a554e: JL 0x004a5554
//   XREF to: 004a5554 (CONDITIONAL_JUMP)
// 004a5550: CMP ESI,dword ptr [EBX]
// 004a5552: JL 0x004a5577
//   XREF to: 004a5577 (CONDITIONAL_JUMP)
// 004a5554: MOV ECX,0x623b6b
//   Label: LAB_004a5554
//   XREF to: 00623b6b (PARAM)
// 004a5559: MOV EDI,0x104e
// 004a555e: PUSH 0x623b81
//   XREF to: 00623b81 (DATA)
// 004a5563: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a5569: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a556f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a5574: ADD ESP,0x4
// 004a5577: CMP ESI,dword ptr [EBX + 0x19c]
//   Label: LAB_004a5577
// 004a557d: JGE 0x004a5591
//   XREF to: 004a5591 (CONDITIONAL_JUMP)
// 004a557f: MOV EAX,dword ptr [EBX + 0x1a0]
//   Label: LAB_004a557f
// 004a5585: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a5589: MOV dword ptr [EAX + ESI*0x4],EDX
// 004a558c: POP EBP
// 004a558d: POP EDI
// 004a558e: POP ESI
// 004a558f: POP EBX
// 004a5590: RET
// 004a5591: PUSH 0x1054
//   Label: LAB_004a5591
// 004a5596: MOV EAX,dword ptr [EBX]
// 004a5598: PUSH 0x623baa
//   XREF to: 00623baa (DATA)
// 004a559d: SHL EAX,0x2
// 004a55a0: PUSH EAX
// 004a55a1: MOV EAX,dword ptr [EBX + 0x1a0]
// 004a55a7: PUSH EAX
// 004a55a8: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004a55ad: ADD ESP,0x10
// 004a55b0: MOV dword ptr [EBX + 0x1a0],EAX
// 004a55b6: TEST EAX,EAX
// 004a55b8: JZ 0x004a55dd
//   XREF to: 004a55dd (CONDITIONAL_JUMP)
// 004a55ba: MOV EBP,dword ptr [EBX]
//   Label: LAB_004a55ba
// 004a55bc: MOV EAX,dword ptr [EBX + 0x19c]
// 004a55c2: CMP EAX,EBP
// 004a55c4: JGE 0x004a557f
//   XREF to: 004a557f (CONDITIONAL_JUMP)
// 004a55c6: MOV EDX,EAX
// 004a55c8: MOV EAX,dword ptr [EBX + 0x1a0]
// 004a55ce: MOV dword ptr [EAX + EDX*0x4],0xffffffff
// 004a55d5: INC dword ptr [EBX + 0x19c]
// 004a55db: JMP 0x004a55ba
//   XREF to: 004a55ba (UNCONDITIONAL_JUMP)
// 004a55dd: MOV ECX,0x623bc0
//   Label: LAB_004a55dd
//   XREF to: 00623bc0 (PARAM)
// 004a55e2: MOV EDI,0x1055
// 004a55e7: PUSH 0x623bd6
//   XREF to: 00623bd6 (DATA)
// 004a55ec: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a55f2: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a55f8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a55fd: ADD ESP,0x4
// 004a5600: JMP 0x004a55ba
//   XREF to: 004a55ba (UNCONDITIONAL_JUMP)
