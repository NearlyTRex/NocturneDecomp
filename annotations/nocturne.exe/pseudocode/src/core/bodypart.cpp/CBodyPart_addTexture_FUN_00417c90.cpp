// Name: core_bodypart.cpp_CBodyPart_addTexture_FUN_00417c90
// Address: 00417c90
// Address Range: [[00417c90, 00417d6d]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_00417c90(CBodyPart *this_ptr,char *texture_name)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_00417c90(CBodyPart *this_ptr,char *texture_name)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  if (0 < this_ptr->texture_count) {
    pcVar4 = this_ptr->textures[0].texture_name;
    do {
      iVar2 = _stricmp(pcVar4,texture_name);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x18;
    } while (iVar3 < this_ptr->texture_count);
  }
  if (9 < this_ptr->texture_count) {
    g_CHAR_PTR_01cc4800 = "..\\core\\bodypart.cpp";
    g_INT_01cc4804 = 0x47a;
    core_main_c_FUN_004c8440("Too many body part textures!");
  }
  memset(this_ptr->textures + this_ptr->texture_count,0,0x18);
  pcVar4 = this_ptr->textures[this_ptr->texture_count].texture_name;
  do {
    cVar1 = *texture_name;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar3 = this_ptr->texture_count;
  this_ptr->texture_count = iVar3 + 1;
  return iVar3;
}
