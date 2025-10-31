// Name: engine_texture.cpp_CTextureCache_findTexture_FUN_005dd180
// Address: 005dd180
// Address Range: [[005dd180, 005dd1f2]]
// Convention: __cdecl
// Signature: int engine_texture.cpp_CTextureCache_findTexture_FUN_005dd180(CTextureCache * this_ptr, int hint_index, char * texture_name)
// Cross-references:
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 (005dd800) at 005dd835 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

int __cdecl
engine_texture_cpp_CTextureCache_findTexture_FUN_005dd180
          (CTextureCache *this_ptr,int hint_index,char *texture_name)

{
  int iVar1;
  int iVar2;
  char (*str1) [64];
  
  if (((-1 < hint_index) && (hint_index < this_ptr->max_texture_count)) &&
     (iVar2 = crt_string_c_strcmp_FUN_005fef20(this_ptr->texture_names[hint_index],texture_name),
     iVar2 == 0)) {
    return hint_index;
  }
  iVar2 = 0;
  if (0 < this_ptr->current_texture_count) {
    str1 = this_ptr->texture_names;
    do {
      iVar1 = crt_string_c_strcmp_FUN_005fef20(*str1,texture_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->current_texture_count);
  }
  return -1;
}


// Assembly code:
// 005dd180: PUSH EBX
//   Label: engine_texture.cpp_CTextureCache_findTexture_FUN_005dd180
// 005dd181: PUSH ESI
// 005dd182: PUSH EDI
// 005dd183: PUSH EBP
// 005dd184: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005dd188: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005dd18c: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005dd190: TEST EBX,EBX
// 005dd192: JL 0x005dd199
//   XREF to: 005dd199 (CONDITIONAL_JUMP)
// 005dd194: CMP EBX,dword ptr [EDI + 0x4]
// 005dd197: JL 0x005dd1d1
//   XREF to: 005dd1d1 (CONDITIONAL_JUMP)
// 005dd199: MOV ECX,dword ptr [EDI + 0x14008]
//   Label: LAB_005dd199
// 005dd19f: XOR EBX,EBX
// 005dd1a1: TEST ECX,ECX
// 005dd1a3: JLE 0x005dd1c7
//   XREF to: 005dd1c7 (CONDITIONAL_JUMP)
// 005dd1a5: LEA ESI,[EDI + 0x3008]
// 005dd1ab: PUSH EBP
//   Label: LAB_005dd1ab
// 005dd1ac: PUSH ESI
// 005dd1ad: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 005dd1b2: ADD ESP,0x8
// 005dd1b5: TEST EAX,EAX
// 005dd1b7: JZ 0x005dd1ec
//   XREF to: 005dd1ec (CONDITIONAL_JUMP)
// 005dd1b9: INC EBX
// 005dd1ba: MOV EAX,dword ptr [EDI + 0x14008]
// 005dd1c0: ADD ESI,0x40
// 005dd1c3: CMP EBX,EAX
// 005dd1c5: JL 0x005dd1ab
//   XREF to: 005dd1ab (CONDITIONAL_JUMP)
// 005dd1c7: MOV EAX,0xffffffff
//   Label: LAB_005dd1c7
// 005dd1cc: POP EBP
// 005dd1cd: POP EDI
// 005dd1ce: POP ESI
// 005dd1cf: POP EBX
// 005dd1d0: RET
// 005dd1d1: MOV EAX,EBX
//   Label: LAB_005dd1d1
// 005dd1d3: LEA ESI,[EDI + 0x3008]
// 005dd1d9: SHL EAX,0x6
// 005dd1dc: PUSH EBP
// 005dd1dd: ADD EAX,ESI
// 005dd1df: PUSH EAX
// 005dd1e0: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 005dd1e5: ADD ESP,0x8
// 005dd1e8: TEST EAX,EAX
// 005dd1ea: JNZ 0x005dd199
//   XREF to: 005dd199 (CONDITIONAL_JUMP)
// 005dd1ec: MOV EAX,EBX
//   Label: LAB_005dd1ec
// 005dd1ee: POP EBP
// 005dd1ef: POP EDI
// 005dd1f0: POP ESI
// 005dd1f1: POP EBX
// 005dd1f2: RET
