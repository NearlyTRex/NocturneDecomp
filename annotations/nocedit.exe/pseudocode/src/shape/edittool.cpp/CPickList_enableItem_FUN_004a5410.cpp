// Name: shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
// Address: 004a5410
// Address Range: [[004a5410, 004a54d8]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_enableItem_FUN_004a5410(CPickList * this_ptr, int item_index, bool enable_flag)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db83d [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e27e1 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e1c30 (004e1c30) at 004e1c78 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623ab6
//   TerminatedCString s_CPickList_enableItem_inv_00623acc
//   TerminatedCString s_shape_edittool_cpp_00623af2
//   TerminatedCString s_shape_edittool_cpp_00623b08
//   TerminatedCString s_Out_of_memory_00623b1e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
          (CPickList *this_ptr,int item_index,bool enable_flag)

{
  int *piVar1;
  int in_stack_00000010;
  
  if ((item_index < 0) || ((this_ptr->base_strlist).item_count <= item_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x1025;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::enableItem - invalid index");
  }
  if (this_ptr->enabled_capacity <= item_index) {
    piVar1 = (int *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                              (this_ptr->enabled_array,(this_ptr->base_strlist).item_count << 2,
                               "..\\shape\\edittool.cpp",0x102b);
    this_ptr->enabled_array = piVar1;
    if (piVar1 == (int *)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0x102c;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
    }
    while (this_ptr->enabled_capacity < (this_ptr->base_strlist).item_count) {
      this_ptr->enabled_array[this_ptr->enabled_capacity] = 1;
      this_ptr->enabled_capacity = this_ptr->enabled_capacity + 1;
    }
  }
  this_ptr->enabled_array[item_index] = (uint)(in_stack_00000010 != 0);
  return;
}


// Assembly code:
// 004a5410: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
// 004a5411: PUSH ESI
// 004a5412: PUSH EDI
// 004a5413: PUSH EBP
// 004a5414: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a5418: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a541c: TEST ESI,ESI
// 004a541e: JL 0x004a5424
//   XREF to: 004a5424 (CONDITIONAL_JUMP)
// 004a5420: CMP ESI,dword ptr [EBX]
// 004a5422: JL 0x004a5447
//   XREF to: 004a5447 (CONDITIONAL_JUMP)
// 004a5424: MOV ECX,0x623ab6
//   Label: LAB_004a5424
//   XREF to: 00623ab6 (PARAM)
// 004a5429: MOV EDI,0x1025
// 004a542e: PUSH 0x623acc
//   XREF to: 00623acc (DATA)
// 004a5433: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a5439: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a543f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a5444: ADD ESP,0x4
// 004a5447: CMP ESI,dword ptr [EBX + 0x194]
//   Label: LAB_004a5447
// 004a544d: JGE 0x004a546a
//   XREF to: 004a546a (CONDITIONAL_JUMP)
// 004a544f: CMP dword ptr [ESP + 0x1c],0x0
//   Label: LAB_004a544f
//   XREF to: Stack[0xc] (READ)
// 004a5454: SETNZ AL
// 004a5457: MOV EDX,dword ptr [EBX + 0x198]
// 004a545d: AND EAX,0xff
// 004a5462: MOV dword ptr [EDX + ESI*0x4],EAX
// 004a5465: POP EBP
// 004a5466: POP EDI
// 004a5467: POP ESI
// 004a5468: POP EBX
// 004a5469: RET
// 004a546a: PUSH 0x102b
//   Label: LAB_004a546a
// 004a546f: MOV EAX,dword ptr [EBX]
// 004a5471: PUSH 0x623af2
//   XREF to: 00623af2 (DATA)
// 004a5476: SHL EAX,0x2
// 004a5479: PUSH EAX
// 004a547a: MOV EAX,dword ptr [EBX + 0x198]
// 004a5480: PUSH EAX
// 004a5481: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004a5486: ADD ESP,0x10
// 004a5489: MOV dword ptr [EBX + 0x198],EAX
// 004a548f: TEST EAX,EAX
// 004a5491: JZ 0x004a54b4
//   XREF to: 004a54b4 (CONDITIONAL_JUMP)
// 004a5493: MOV EBP,dword ptr [EBX]
//   Label: LAB_004a5493
// 004a5495: MOV EAX,dword ptr [EBX + 0x194]
// 004a549b: CMP EAX,EBP
// 004a549d: JGE 0x004a544f
//   XREF to: 004a544f (CONDITIONAL_JUMP)
// 004a549f: MOV EDX,dword ptr [EBX + 0x198]
// 004a54a5: MOV dword ptr [EDX + EAX*0x4],0x1
// 004a54ac: INC dword ptr [EBX + 0x194]
// 004a54b2: JMP 0x004a5493
//   XREF to: 004a5493 (UNCONDITIONAL_JUMP)
// 004a54b4: MOV ECX,0x623b08
//   Label: LAB_004a54b4
//   XREF to: 00623b08 (PARAM)
// 004a54b9: MOV EDI,0x102c
// 004a54be: PUSH 0x623b1e
//   XREF to: 00623b1e (DATA)
// 004a54c3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a54c9: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a54cf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a54d4: ADD ESP,0x4
// 004a54d7: JMP 0x004a5493
//   XREF to: 004a5493 (UNCONDITIONAL_JUMP)
