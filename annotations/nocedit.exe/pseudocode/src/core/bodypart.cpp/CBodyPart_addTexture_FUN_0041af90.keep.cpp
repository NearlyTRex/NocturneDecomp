// Name: core_bodypart.cpp_CBodyPart_addTexture_FUN_0041af90
// Address: 0041af90
// MANUAL RECONSTRUCTION
// Address Range: [[0041af90, 0041b06d]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_0041af90(CBodyPart *this_ptr,char *texture_name)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_0041af90(CBodyPart *this_ptr,char *texture_name)

{
  int iVar2;
  int iVar3;

  for (iVar3 = 0; iVar3 < this_ptr->texture_count; iVar3 = iVar3 + 1) {
    iVar2 = _stricmp(this_ptr->textures[iVar3].texture_name,texture_name);
    if (iVar2 == 0) {
      return iVar3;
    }
  }
  if (9 < this_ptr->texture_count) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0x47a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many body part textures!");
  }
  memset(this_ptr->textures + this_ptr->texture_count,0,0x18);
  strcpy(this_ptr->textures[this_ptr->texture_count].texture_name,texture_name);
  iVar3 = this_ptr->texture_count;
  this_ptr->texture_count = iVar3 + 1;
  return iVar3;
}
