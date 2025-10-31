// Name: engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_005dd690
// Address: 005dd690
// Address Range: [[005dd690, 005dd75a]]
// Convention: __cdecl
// Signature: int engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_005dd690(CTextureCache * this_ptr, char * output_buffer)
// Cross-references:
//   engine_texture.cpp_getTextureCacheStats_FUN_005dd970 (005dd970) at 005dd97c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Texture_cache_has_wrappe_006553e2
//   TerminatedCString s_Total_d_32_d_64_d_128_d__00655416
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

int __cdecl
engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_005dd690
          (CTextureCache *this_ptr,char *output_buffer)

{
  CTextureCache *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18;
  int local_14;
  
  iVar5 = 0;
  iVar6 = 0;
  iVar2 = 0;
  iVar4 = 0;
  local_14 = 0;
  local_18 = 0;
  if (this_ptr->wrap_indicator == 0) {
    iVar3 = 0;
    pCVar1 = this_ptr;
    if (0 < this_ptr->current_texture_count) {
      do {
        if (pCVar1->texture_dimensions[0] == 0x20) {
          iVar5 = iVar5 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x40) {
          iVar6 = iVar6 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x80) {
          iVar2 = iVar2 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x100) {
          local_14 = local_14 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x200) {
          iVar4 = iVar4 + 1;
        }
        if (pCVar1->texture_dimensions[0] == 0x400) {
          local_18 = local_18 + 1;
        }
        iVar3 = iVar3 + 1;
        pCVar1 = (CTextureCache *)&pCVar1->max_texture_count;
      } while (iVar3 < this_ptr->current_texture_count);
    }
    iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0
                      (output_buffer,"Total: %d, 32: %d, 64: %d, 128: %d, 256: %d, 512: %d, 1024: %d",
                       this_ptr->current_texture_count,iVar5,iVar6,iVar2,local_14,iVar4,local_18);
    return iVar2;
  }
  iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer,"Texture cache has wrapped.  Make it bigger, please.");
  return iVar2;
}


// Assembly code:
// 005dd690: PUSH EBX
//   Label: engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_005dd690
// 005dd691: PUSH ESI
// 005dd692: PUSH EDI
// 005dd693: PUSH EBP
// 005dd694: SUB ESP,0x8
// 005dd697: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005dd69b: XOR ESI,ESI
// 005dd69d: XOR EDI,EDI
// 005dd69f: XOR ECX,ECX
// 005dd6a1: XOR EBX,EBX
// 005dd6a3: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005dd6a7: MOV EDX,dword ptr [EAX]
// 005dd6a9: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x18] (DATA)
// 005dd6ac: TEST EDX,EDX
// 005dd6ae: JNZ 0x005dd741
//   XREF to: 005dd741 (CONDITIONAL_JUMP)
// 005dd6b4: CMP dword ptr [EAX + 0x14008],0x0
// 005dd6bb: JLE 0x005dd708
//   XREF to: 005dd708 (CONDITIONAL_JUMP)
// 005dd6bd: CMP dword ptr [EAX + 0x8],0x20
//   Label: LAB_005dd6bd
// 005dd6c1: JNZ 0x005dd6c4
//   XREF to: 005dd6c4 (CONDITIONAL_JUMP)
// 005dd6c3: INC ESI
// 005dd6c4: CMP dword ptr [EAX + 0x8],0x40
//   Label: LAB_005dd6c4
// 005dd6c8: JNZ 0x005dd6cb
//   XREF to: 005dd6cb (CONDITIONAL_JUMP)
// 005dd6ca: INC EDI
// 005dd6cb: CMP dword ptr [EAX + 0x8],0x80
//   Label: LAB_005dd6cb
// 005dd6d2: JNZ 0x005dd6d5
//   XREF to: 005dd6d5 (CONDITIONAL_JUMP)
// 005dd6d4: INC ECX
// 005dd6d5: CMP dword ptr [EAX + 0x8],0x100
//   Label: LAB_005dd6d5
// 005dd6dc: JNZ 0x005dd6e2
//   XREF to: 005dd6e2 (CONDITIONAL_JUMP)
// 005dd6de: INC dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 005dd6e2: CMP dword ptr [EAX + 0x8],0x200
//   Label: LAB_005dd6e2
// 005dd6e9: JNZ 0x005dd6ec
//   XREF to: 005dd6ec (CONDITIONAL_JUMP)
// 005dd6eb: INC EBX
// 005dd6ec: CMP dword ptr [EAX + 0x8],0x400
//   Label: LAB_005dd6ec
// 005dd6f3: JNZ 0x005dd6f8
//   XREF to: 005dd6f8 (CONDITIONAL_JUMP)
// 005dd6f5: INC dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005dd6f8: MOV EBP,dword ptr [ESP + 0x1c]
//   Label: LAB_005dd6f8
//   XREF to: Stack[0x4] (READ)
// 005dd6fc: INC EDX
// 005dd6fd: ADD EAX,0x4
// 005dd700: CMP EDX,dword ptr [EBP + 0x14008]
// 005dd706: JL 0x005dd6bd
//   XREF to: 005dd6bd (CONDITIONAL_JUMP)
// 005dd708: MOV EDX,dword ptr [ESP]
//   Label: LAB_005dd708
//   XREF to: Stack[-0x18] (DATA)
// 005dd70b: PUSH EDX
// 005dd70c: PUSH EBX
// 005dd70d: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005dd711: PUSH EBX
// 005dd712: PUSH ECX
// 005dd713: PUSH EDI
// 005dd714: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 005dd718: PUSH ESI
// 005dd719: MOV ESI,dword ptr [EAX + 0x14008]
// 005dd71f: PUSH ESI
// 005dd720: PUSH 0x655416
//   XREF to: 00655416 (DATA)
// 005dd725: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 005dd729: PUSH EDI
// 005dd72a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005dd72f: ADD ESP,0x24
// 005dd732: ADD ESP,0x8
// 005dd735: POP EBP
// 005dd736: POP EDI
// 005dd737: POP ESI
// 005dd738: POP EBX
// 005dd739: LEA EAX,[EAX]
// 005dd73f: NOP
// 005dd740: RET
// 005dd741: PUSH 0x6553e2
//   Label: LAB_005dd741
//   XREF to: 006553e2 (DATA)
// 005dd746: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005dd74a: PUSH EAX
// 005dd74b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005dd750: ADD ESP,0x8
// 005dd753: ADD ESP,0x8
// 005dd756: POP EBP
// 005dd757: POP EDI
// 005dd758: POP ESI
// 005dd759: POP EBX
// 005dd75a: RET
