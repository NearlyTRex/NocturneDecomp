// Name: engine_texture.cpp_CTextureCache_free_FUN_005dcb30
// Address: 005dcb30
// Address Range: [[005dcb30, 005dcbf4]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_CTextureCache_free_FUN_005dcb30(CTextureCache * cache)
// Cross-references:
//   engine_texture.cpp_CTextureCache_dtor_FUN_005dcb20 (005dcb20) at 005dcb25 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_CTextureCache_free_FUN_005dcb00 (005dcb00) at 005dcb05 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_clearTextureCache_FUN_005dd8e0 (005dd8e0) at 005dd8e7 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_freeTextureCache_FUN_005dd7a0 (005dd7a0) at 005dd7df [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_texture_cpp_00655142
//   TerminatedCString s_engine_texture_cpp_00655158
//   TerminatedCString s_engine_texture_cpp_0065516e
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_free_FUN_005dcb30(CTextureCache *cache)

{
  CTextureCache *pCVar1;
  CTextureCache *pCVar2;
  int iVar3;
  
  cache->current_texture_count = 0;
  iVar3 = 0;
  pCVar1 = cache;
  pCVar2 = cache;
  if (0 < cache->max_texture_count) {
    do {
      pCVar2->texture_names[0][0] = '\0';
      pCVar1->texture_dimensions[0] = 0;
      if (pCVar1->texture_data_ptrs[0] != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (pCVar1->texture_data_ptrs[0],"..\\engine\\texture.cpp",200);
        pCVar1->texture_data_ptrs[0] = (void *)0x0;
      }
      if (pCVar1->texture_opacity_ptrs[0] != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (pCVar1->texture_opacity_ptrs[0],"..\\engine\\texture.cpp",0xcc);
        pCVar1->texture_opacity_ptrs[0] = (void *)0x0;
      }
      if (pCVar1->texture_palette_ptrs[0] != (byte *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (pCVar1->texture_palette_ptrs[0],"..\\engine\\texture.cpp",0xd0);
        pCVar1->texture_palette_ptrs[0] = (byte *)0x0;
      }
      iVar3 = iVar3 + 1;
      pCVar1 = (CTextureCache *)&pCVar1->max_texture_count;
      pCVar2 = (CTextureCache *)(pCVar2->texture_dimensions + 0xe);
    } while (iVar3 < cache->max_texture_count);
  }
  cache->wrap_indicator = 0;
  return;
}


// Assembly code:
// 005dcb30: PUSH EBX
//   Label: engine_texture.cpp_CTextureCache_free_FUN_005dcb30
// 005dcb31: PUSH ESI
// 005dcb32: PUSH EDI
// 005dcb33: PUSH EBP
// 005dcb34: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005dcb38: MOV EDX,dword ptr [EBP + 0x4]
// 005dcb3b: MOV dword ptr [EBP + 0x14008],0x0
// 005dcb45: XOR EDI,EDI
// 005dcb47: TEST EDX,EDX
// 005dcb49: JLE 0x005dcbc7
//   XREF to: 005dcbc7 (CONDITIONAL_JUMP)
// 005dcb4f: MOV EBX,EBP
// 005dcb51: MOV ESI,EBP
// 005dcb53: MOV byte ptr [ESI + 0x3008],0x0
//   Label: LAB_005dcb53
// 005dcb5a: MOV EAX,dword ptr [EBX + 0x1008]
// 005dcb60: MOV dword ptr [EBX + 0x8],0x0
// 005dcb67: TEST EAX,EAX
// 005dcb69: JNZ 0x005dcbd3
//   XREF to: 005dcbd3 (CONDITIONAL_JUMP)
// 005dcb6b: MOV ECX,dword ptr [EBX + 0x2008]
//   Label: LAB_005dcb6b
// 005dcb71: TEST ECX,ECX
// 005dcb73: JZ 0x005dcb92
//   XREF to: 005dcb92 (CONDITIONAL_JUMP)
// 005dcb75: PUSH 0xcc
// 005dcb7a: PUSH 0x655158
//   XREF to: 00655158 (DATA)
// 005dcb7f: PUSH ECX
// 005dcb80: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005dcb85: ADD ESP,0xc
// 005dcb88: MOV dword ptr [EBX + 0x2008],0x0
// 005dcb92: MOV EDX,dword ptr [EBX + 0x13008]
//   Label: LAB_005dcb92
// 005dcb98: TEST EDX,EDX
// 005dcb9a: JZ 0x005dcbb9
//   XREF to: 005dcbb9 (CONDITIONAL_JUMP)
// 005dcb9c: PUSH 0xd0
// 005dcba1: PUSH 0x65516e
//   XREF to: 0065516e (DATA)
// 005dcba6: PUSH EDX
// 005dcba7: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005dcbac: ADD ESP,0xc
// 005dcbaf: MOV dword ptr [EBX + 0x13008],0x0
// 005dcbb9: ADD ESI,0x40
//   Label: LAB_005dcbb9
// 005dcbbc: INC EDI
// 005dcbbd: MOV ECX,dword ptr [EBP + 0x4]
// 005dcbc0: ADD EBX,0x4
// 005dcbc3: CMP EDI,ECX
// 005dcbc5: JL 0x005dcb53
//   XREF to: 005dcb53 (CONDITIONAL_JUMP)
// 005dcbc7: MOV dword ptr [EBP],0x0
//   Label: LAB_005dcbc7
// 005dcbce: POP EBP
// 005dcbcf: POP EDI
// 005dcbd0: POP ESI
// 005dcbd1: POP EBX
// 005dcbd2: RET
// 005dcbd3: PUSH 0xc8
//   Label: LAB_005dcbd3
// 005dcbd8: PUSH 0x655142
//   XREF to: 00655142 (DATA)
// 005dcbdd: PUSH EAX
// 005dcbde: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005dcbe3: ADD ESP,0xc
// 005dcbe6: MOV dword ptr [EBX + 0x1008],0x0
// 005dcbf0: JMP 0x005dcb6b
//   XREF to: 005dcb6b (UNCONDITIONAL_JUMP)
