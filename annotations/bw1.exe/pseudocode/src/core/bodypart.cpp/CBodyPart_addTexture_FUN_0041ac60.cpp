// Name: core_bodypart.cpp_CBodyPart_addTexture_FUN_0041ac60
// Address: 0041ac60
// Address Range: [[0041ac60, 0041ad3d]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_0041ac60(CBodyPart *this_ptr,char *texture_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_0041ac60(CBodyPart *this_ptr,char *texture_name)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x18c) {
    pcVar4 = &this_ptr->field_0x198;
    do {
      iVar2 = _stricmp(pcVar4,texture_name);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x18;
    } while (iVar3 < *(int *)&this_ptr->field_0x18c);
  }
  if (9 < *(int *)&this_ptr->field_0x18c) {
    _DAT_01d1d400 = "..\\core\\bodypart.cpp";
    _DAT_01d1d404 = 0x48d;
    core_main_c_FUN_005030e0("Too many body part textures!");
  }
  memset
            (&this_ptr->field_0x190 + *(int *)&this_ptr->field_0x18c * 0x18,0,0x18);
  pcVar4 = &this_ptr->field_0x198 + *(int *)&this_ptr->field_0x18c * 0x18;
  do {
    cVar1 = *texture_name;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar3 = *(int *)&this_ptr->field_0x18c;
  *(int *)&this_ptr->field_0x18c = iVar3 + 1;
  return iVar3;
}
