// Name: core_ground.cpp_CGround_init_FUN_004eef00
// Address: 004eef00
// Address Range: [[004eef00, 004eefaa]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_init_FUN_004eef00(CGround * this_ptr)
// Cross-references:
//   core_terrain.cpp_CTerrain_ctor_FUN_005e1ef0 (005e1ef0) at 005e1f02 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_ground_cpp_0062e696
//   TerminatedCString s_core_ground_cpp_0062e6a9
//   TerminatedCString s_CGround_init_Out_of_memo_0062e6bc
//   TerminatedCString s_core_ground_cpp_0062e6da
//   TerminatedCString s_core_ground_cpp_0062e6ed
//   TerminatedCString s_CGround_init_Out_of_memo_0062e700
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_ground.cpp_CGround_free_FUN_004eefb0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_init_FUN_004eef00(CGround *this_ptr)

{
  void *pvVar1;
  CTextureList *this_ptr_00;
  
  core_ground_cpp_CGround_free_FUN_004eefb0(this_ptr);
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->width * this_ptr->height * 4,"..\\core\\ground.cpp",0xd2);
  this_ptr->terrain_data = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0xd3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CGround::init - Out of memory");
  }
  this_ptr_00 = (CTextureList *)
                shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1a5ec,"..\\core\\ground.cpp",0xd7);
  if (this_ptr_00 != (CTextureList *)0x0) {
    this_ptr_00 = core_texlist_cpp_CTextureList_ctor_FUN_005dbdd0(this_ptr_00);
  }
  this_ptr->texture_list = this_ptr_00;
  if (this_ptr_00 != (CTextureList *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\ground.cpp";
  g_CurrentLineNumber = 0xd8;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CGround::init - Out of memory2");
  return;
}


// Assembly code:
// 004eef00: PUSH EBX
//   Label: core_ground.cpp_CGround_init_FUN_004eef00
// 004eef01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004eef05: PUSH EBX
// 004eef06: CALL core_ground.cpp_CGround_free_FUN_004eefb0
//   XREF to: 004eefb0 (UNCONDITIONAL_CALL)
// 004eef0b: MOV EAX,dword ptr [EBX]
// 004eef0d: IMUL EAX,dword ptr [EBX + 0x4]
// 004eef11: ADD ESP,0x4
// 004eef14: PUSH 0xd2
// 004eef19: PUSH 0x62e696
//   XREF to: 0062e696 (DATA)
// 004eef1e: SHL EAX,0x2
// 004eef21: PUSH EAX
// 004eef22: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004eef27: ADD ESP,0xc
// 004eef2a: MOV dword ptr [EBX + 0x24],EAX
// 004eef2d: TEST EAX,EAX
// 004eef2f: JZ 0x004eef5e
//   XREF to: 004eef5e (CONDITIONAL_JUMP)
// 004eef31: PUSH 0xd7
//   Label: LAB_004eef31
// 004eef36: PUSH 0x62e6da
//   XREF to: 0062e6da (DATA)
// 004eef3b: PUSH 0x1a5ec
// 004eef40: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004eef45: ADD ESP,0xc
// 004eef48: TEST EAX,EAX
// 004eef4a: JZ 0x004eef55
//   XREF to: 004eef55 (CONDITIONAL_JUMP)
// 004eef4c: PUSH EAX
// 004eef4d: CALL core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0
//   XREF to: 005dbdd0 (UNCONDITIONAL_CALL)
// 004eef52: ADD ESP,0x4
// 004eef55: MOV dword ptr [EBX + 0x28],EAX
//   Label: LAB_004eef55
// 004eef58: TEST EAX,EAX
// 004eef5a: JZ 0x004eef87
//   XREF to: 004eef87 (CONDITIONAL_JUMP)
// 004eef5c: POP EBX
// 004eef5d: RET
// 004eef5e: PUSH EDI
//   Label: LAB_004eef5e
// 004eef5f: PUSH ESI
// 004eef60: MOV ESI,0x62e6a9
//   XREF to: 0062e6a9 (DATA)
// 004eef65: MOV EDI,0xd3
// 004eef6a: PUSH 0x62e6bc
//   XREF to: 0062e6bc (DATA)
// 004eef6f: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004eef75: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004eef7b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004eef80: ADD ESP,0x4
// 004eef83: POP ESI
// 004eef84: POP EDI
// 004eef85: JMP 0x004eef31
//   XREF to: 004eef31 (UNCONDITIONAL_JUMP)
// 004eef87: MOV EAX,0x62e6ed
//   Label: LAB_004eef87
//   XREF to: 0062e6ed (PARAM)
// 004eef8c: MOV EDX,0xd8
// 004eef91: PUSH 0x62e700
//   XREF to: 0062e700 (DATA)
// 004eef96: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004eef9b: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004eefa1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004eefa6: ADD ESP,0x4
// 004eefa9: POP EBX
// 004eefaa: RET
