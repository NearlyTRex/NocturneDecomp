// Name: engine_winfont.cpp_CWinFont_dtor_FUN_005f2390
// Address: 005f2390
// Address Range: [[005f2390, 005f23ec]]
// Convention: __cdecl
// Signature: CWinFont * engine_winfont.cpp_CWinFont_dtor_FUN_005f2390(CWinFont * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   CFont_vtable g_CWinFontVTable
//   WatcomTypeInfo g_CWinFontTypeInfo
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   engine_palette.cpp_CFont_dtor_FUN_00544ec0
//   engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CWinFont * __cdecl
engine_winfont_cpp_CWinFont_dtor_FUN_005f2390(CWinFont *this_ptr,uint d1,uint d2,uint d3)

{
  CWinFont *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CWinFontTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base_font).vtable = &g_CWinFontVTable;
  engine_winfont_cpp_CWinFont_reset_FUN_005f2a30(this_ptr);
  ptr = (CWinFont *)engine_palette_cpp_CFont_dtor_FUN_00544ec0(&this_ptr->base_font);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005f2390: PUSH EBX
//   Label: engine_winfont.cpp_CWinFont_dtor_FUN_005f2390
// 005f2391: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f2395: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005f239a: JNZ 0x005f23c5
//   XREF to: 005f23c5 (CONDITIONAL_JUMP)
// 005f239c: PUSH EBX
// 005f239d: MOV dword ptr [EBX],0x665914
//   XREF to: 00665914 (DATA)
// 005f23a3: CALL engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
//   XREF to: 005f2a30 (UNCONDITIONAL_CALL)
// 005f23a8: ADD ESP,0x4
// 005f23ab: PUSH 0x1
// 005f23ad: PUSH EBX
// 005f23ae: CALL engine_palette.cpp_CFont_dtor_FUN_00544ec0
//   XREF to: 00544ec0 (UNCONDITIONAL_CALL)
// 005f23b3: ADD ESP,0x8
// 005f23b6: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005f23ba: MOV EBX,EAX
// 005f23bc: TEST DL,0x2
// 005f23bf: JNZ 0x005f23e0
//   XREF to: 005f23e0 (CONDITIONAL_JUMP)
// 005f23c1: MOV EAX,EBX
// 005f23c3: POP EBX
// 005f23c4: RET
// 005f23c5: PUSH 0x665930
//   Label: LAB_005f23c5
//   XREF to: 00665930 (DATA)
// 005f23ca: PUSH EBX
// 005f23cb: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005f23d0: ADD ESP,0x8
// 005f23d3: PUSH EAX
// 005f23d4: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005f23d9: ADD ESP,0x4
// 005f23dc: MOV EAX,EBX
// 005f23de: POP EBX
// 005f23df: RET
// 005f23e0: PUSH EAX
//   Label: LAB_005f23e0
// 005f23e1: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005f23e6: ADD ESP,0x4
// 005f23e9: MOV EAX,EBX
// 005f23eb: POP EBX
// 005f23ec: RET
