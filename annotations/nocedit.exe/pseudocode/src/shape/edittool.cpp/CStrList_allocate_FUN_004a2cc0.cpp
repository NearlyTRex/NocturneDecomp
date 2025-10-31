// Name: shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
// Address: 004a2cc0
// Address Range: [[004a2cc0, 004a2d76]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0(CStrList * this_ptr, int new_capacity)
// Cross-references:
//   shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0 (004a2ac0) at 004a2ae5 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80 (004a2d80) at 004a2d94 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insert_FUN_004a2bc0 (004a2bc0) at 004a2c08 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623726
//   TerminatedCString s_CStrList_allocate_Can_t__0062373c
//   TerminatedCString s_shape_edittool_cpp_00623764
//   TerminatedCString s_CStrList_allocate_invali_0062377a
//   TerminatedCString s_shape_edittool_cpp_006237a1
//   TerminatedCString s_shape_edittool_cpp_006237b7
//   TerminatedCString s_CStrList_insert_out_of_m_006237cd
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_004a2cc0(CStrList *this_ptr,int new_capacity)

{
  char **ppcVar1;
  
  if (new_capacity < this_ptr->item_count) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xb4c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::allocate - Can't shrink list!");
  }
  if (new_capacity < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xb4d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::allocate - invalid count: %d",new_capacity);
  }
  if (this_ptr->capacity < new_capacity) {
    this_ptr->capacity = new_capacity;
    ppcVar1 = (char **)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                 (this_ptr->data_array,new_capacity * 4,
                                  "..\\shape\\edittool.cpp",0xb50);
    this_ptr->data_array = ppcVar1;
    if (ppcVar1 == (char **)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0xb51;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}


// Assembly code:
// 004a2cc0: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
// 004a2cc1: PUSH ESI
// 004a2cc2: PUSH EDI
// 004a2cc3: PUSH EBP
// 004a2cc4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a2cc8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a2ccc: CMP ESI,dword ptr [EBX]
// 004a2cce: JL 0x004a2d02
//   XREF to: 004a2d02 (CONDITIONAL_JUMP)
// 004a2cd0: CMP ESI,0x1
//   Label: LAB_004a2cd0
// 004a2cd3: JGE 0x004a2cf8
//   XREF to: 004a2cf8 (CONDITIONAL_JUMP)
// 004a2cd5: PUSH ESI
// 004a2cd6: MOV EBP,0x623764
//   XREF to: 00623764 (DATA)
// 004a2cdb: MOV EAX,0xb4d
// 004a2ce0: PUSH 0x62377a
//   XREF to: 0062377a (DATA)
// 004a2ce5: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004a2ceb: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004a2cf0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a2cf5: ADD ESP,0x8
// 004a2cf8: CMP ESI,dword ptr [EBX + 0x4]
//   Label: LAB_004a2cf8
// 004a2cfb: JG 0x004a2d27
//   XREF to: 004a2d27 (CONDITIONAL_JUMP)
// 004a2cfd: POP EBP
//   Label: LAB_004a2cfd
// 004a2cfe: POP EDI
// 004a2cff: POP ESI
// 004a2d00: POP EBX
// 004a2d01: RET
// 004a2d02: MOV ECX,0x623726
//   Label: LAB_004a2d02
//   XREF to: 00623726 (PARAM)
// 004a2d07: MOV EDI,0xb4c
// 004a2d0c: PUSH 0x62373c
//   XREF to: 0062373c (DATA)
// 004a2d11: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a2d17: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a2d1d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a2d22: ADD ESP,0x4
// 004a2d25: JMP 0x004a2cd0
//   XREF to: 004a2cd0 (UNCONDITIONAL_JUMP)
// 004a2d27: PUSH 0xb50
//   Label: LAB_004a2d27
// 004a2d2c: PUSH 0x6237a1
//   XREF to: 006237a1 (DATA)
// 004a2d31: MOV dword ptr [EBX + 0x4],ESI
// 004a2d34: LEA EAX,[ESI*0x4 + 0x0]
// 004a2d3b: PUSH EAX
// 004a2d3c: MOV ECX,dword ptr [EBX + 0x8]
// 004a2d3f: PUSH ECX
// 004a2d40: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004a2d45: ADD ESP,0x10
// 004a2d48: MOV dword ptr [EBX + 0x8],EAX
// 004a2d4b: TEST EAX,EAX
// 004a2d4d: JNZ 0x004a2cfd
//   XREF to: 004a2cfd (CONDITIONAL_JUMP)
// 004a2d4f: MOV EDI,0x6237b7
//   XREF to: 006237b7 (DATA)
// 004a2d54: MOV EBP,0xb51
// 004a2d59: PUSH 0x6237cd
//   XREF to: 006237cd (DATA)
// 004a2d5e: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004a2d64: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004a2d6a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a2d6f: ADD ESP,0x4
// 004a2d72: POP EBP
// 004a2d73: POP EDI
// 004a2d74: POP ESI
// 004a2d75: POP EBX
// 004a2d76: RET
