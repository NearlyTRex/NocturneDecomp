// Name: core_skeledit.cpp_parseBoneParentToken_FUN_00592520
// Address: 00592520
// Address Range: [[00592520, 005925bc]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_parseBoneParentToken_FUN_00592520(char *token,int *out_index,int bone_count,int allow_patch)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_parseBoneParentToken_FUN_00592520(char *token,int *out_index,int bone_count,int allow_patch)

{
  int iVar1;
  
  __STK();
  iVar1 = _strcmp(token,"(");
  if (iVar1 == 0) {
    *out_index = 0;
  }
  else {
    iVar1 = _strcmp(token,")");
    if (iVar1 == 0) {
      *out_index = bone_count + -1;
      return 1;
    }
    if (allow_patch != 0) {
      iVar1 = _stricmp(token,"patch");
      if (iVar1 == 0) {
        *out_index = -1;
        return 1;
      }
    }
    iVar1 = sscanf(token,"%d",out_index);
    if (((iVar1 != 1) || (*out_index < 0)) || (bone_count <= *out_index)) {
      return 0;
    }
  }
  return 1;
}
