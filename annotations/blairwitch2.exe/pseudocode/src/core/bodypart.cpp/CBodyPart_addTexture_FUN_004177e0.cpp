// Name: core_bodypart.cpp_CBodyPart_addTexture_FUN_004177e0
// Address: 004177e0
// Address Range: [[004177e0, 004178bd]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_004177e0(CBodyPart *this_ptr,char *texture_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_004177e0(CBodyPart *this_ptr,char *texture_name)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x2e8) {
    pcVar4 = &this_ptr->field_0x2f4;
    do {
      iVar2 = _stricmp(pcVar4,texture_name);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x18;
    } while (iVar3 < *(int *)&this_ptr->field_0x2e8);
  }
  if (9 < *(int *)&this_ptr->field_0x2e8) {
    _DAT_01d046a0 = "..\\core\\bodypart.cpp";
    _DAT_01d046a4 = 0x47a;
    core_main_c_FUN_004e4500("Too many body part textures!");
  }
  memset
            (&this_ptr->field_0x2ec + *(int *)&this_ptr->field_0x2e8 * 0x18,0,0x18);
  pcVar4 = &this_ptr->field_0x2f4 + *(int *)&this_ptr->field_0x2e8 * 0x18;
  do {
    cVar1 = *texture_name;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar3 = *(int *)&this_ptr->field_0x2e8;
  *(int *)&this_ptr->field_0x2e8 = iVar3 + 1;
  return iVar3;
}
