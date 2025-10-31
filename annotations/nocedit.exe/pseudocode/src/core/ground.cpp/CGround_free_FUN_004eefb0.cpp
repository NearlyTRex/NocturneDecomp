// Name: core_ground.cpp_CGround_free_FUN_004eefb0
// Address: 004eefb0
// Address Range: [[004eefb0, 004ef020]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_free_FUN_004eefb0(CGround * this_ptr)
// Cross-references:
//   core_ground.cpp_CGround_dtor_FUN_004eeee0 (004eeee0) at 004eeee6 [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_init_FUN_004eef00 (004eef00) at 004eef06 [UNCONDITIONAL_CALL]
//   core_terrain.cpp_CTerrain_dtor_FUN_005e1f30 (005e1f30) at 005e1f37 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_ground_cpp_0062e71f
//   TerminatedCString s_core_ground_cpp_0062e732
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   core_texlist.cpp_CTextureList_dtor_FUN_005dbdf0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_free_FUN_004eefb0(CGround *this_ptr)

{
  CTextureList *ptr;
  
  if (this_ptr->terrain_data != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->terrain_data,"..\\core\\ground.cpp",0xe7);
    this_ptr->terrain_data = (void *)0x0;
  }
  g_CurrentDebugLine = 0xeb;
  g_CurrentDebugFilename = "..\\core\\ground.cpp";
  if (this_ptr->texture_list == (CTextureList *)0x0) {
    this_ptr->texture_list = (CTextureList *)0x0;
    return;
  }
  ptr = core_texlist_cpp_CTextureList_dtor_FUN_005dbdf0(this_ptr->texture_list);
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  this_ptr->texture_list = (CTextureList *)0x0;
  return;
}


// Assembly code:
// 004eefb0: PUSH EBX
//   Label: core_ground.cpp_CGround_free_FUN_004eefb0
// 004eefb1: PUSH ESI
// 004eefb2: PUSH EDI
// 004eefb3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004eefb7: MOV EDX,dword ptr [EBX + 0x24]
// 004eefba: TEST EDX,EDX
// 004eefbc: JNZ 0x004eefe6
//   XREF to: 004eefe6 (CONDITIONAL_JUMP)
// 004eefbe: MOV EDI,0xeb
//   Label: LAB_004eefbe
// 004eefc3: MOV ESI,0x62e732
//   XREF to: 0062e732 (DATA)
// 004eefc8: MOV EAX,dword ptr [EBX + 0x28]
// 004eefcb: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 004eefd1: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 004eefd7: TEST EAX,EAX
// 004eefd9: JNZ 0x004ef002
//   XREF to: 004ef002 (CONDITIONAL_JUMP)
// 004eefdb: MOV dword ptr [EBX + 0x28],0x0
// 004eefe2: POP EDI
// 004eefe3: POP ESI
// 004eefe4: POP EBX
// 004eefe5: RET
// 004eefe6: PUSH 0xe7
//   Label: LAB_004eefe6
// 004eefeb: PUSH 0x62e71f
//   XREF to: 0062e71f (DATA)
// 004eeff0: PUSH EDX
// 004eeff1: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004eeff6: ADD ESP,0xc
// 004eeff9: MOV dword ptr [EBX + 0x24],0x0
// 004ef000: JMP 0x004eefbe
//   XREF to: 004eefbe (UNCONDITIONAL_JUMP)
// 004ef002: PUSH 0x0
//   Label: LAB_004ef002
// 004ef004: PUSH EAX
// 004ef005: CALL core_texlist.cpp_CTextureList_dtor_FUN_005dbdf0
//   XREF to: 005dbdf0 (UNCONDITIONAL_CALL)
// 004ef00a: ADD ESP,0x8
// 004ef00d: PUSH EAX
// 004ef00e: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004ef013: ADD ESP,0x4
// 004ef016: MOV dword ptr [EBX + 0x28],0x0
// 004ef01d: POP EDI
// 004ef01e: POP ESI
// 004ef01f: POP EBX
// 004ef020: RET
