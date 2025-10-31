// Name: engine_texture.cpp_CTextureCache_ctor_FUN_005dcab0
// Address: 005dcab0
// Address Range: [[005dcab0, 005dcaf5]]
// Convention: __cdecl
// Signature: CTextureCache * engine_texture.cpp_CTextureCache_ctor_FUN_005dcab0(CTextureCache * this_ptr, int max_texture_count)
// Cross-references:
//   engine_texture.cpp_initTextureCache_FUN_005dd760 (005dd760) at 005dd787 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CTextureCache * __cdecl
engine_texture_cpp_CTextureCache_ctor_FUN_005dcab0(CTextureCache *this_ptr,int max_texture_count)

{
  CTextureCache *pCVar1;
  int *piVar2;
  
  this_ptr->current_texture_count = 0;
  this_ptr->max_texture_count = max_texture_count;
  pCVar1 = this_ptr;
  do {
    piVar2 = &pCVar1->max_texture_count;
    pCVar1->texture_data_ptrs[0] = (void *)0x0;
    pCVar1->texture_opacity_ptrs[0] = (void *)0x0;
    pCVar1->texture_palette_ptrs[0] = (byte *)0x0;
    pCVar1->texture_dimensions[0] = 0;
    pCVar1 = (CTextureCache *)piVar2;
  } while (piVar2 != (int *)this_ptr->field_4096);
  this_ptr->wrap_indicator = 0;
  return this_ptr;
}


// Assembly code:
// 005dcab0: PUSH EBX
//   Label: engine_texture.cpp_CTextureCache_ctor_FUN_005dcab0
// 005dcab1: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dcab5: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005dcab9: MOV dword ptr [ECX + 0x14008],0x0
// 005dcac3: MOV dword ptr [ECX + 0x4],EAX
// 005dcac6: MOV EAX,ECX
// 005dcac8: LEA EDX,[ECX + 0x1000]
// 005dcace: XOR EBX,EBX
// 005dcad0: ADD EAX,0x4
//   Label: LAB_005dcad0
// 005dcad3: MOV dword ptr [EAX + 0x1004],EBX
// 005dcad9: MOV dword ptr [EAX + 0x2004],EBX
// 005dcadf: MOV dword ptr [EAX + 0x13004],EBX
// 005dcae5: MOV dword ptr [EAX + 0x4],EBX
// 005dcae8: CMP EAX,EDX
// 005dcaea: JNZ 0x005dcad0
//   XREF to: 005dcad0 (CONDITIONAL_JUMP)
// 005dcaec: MOV EAX,ECX
// 005dcaee: MOV dword ptr [ECX],0x0
// 005dcaf4: POP EBX
// 005dcaf5: RET
