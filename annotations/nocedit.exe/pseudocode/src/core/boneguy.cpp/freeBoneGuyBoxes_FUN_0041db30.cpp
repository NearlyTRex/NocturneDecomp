// Name: core_boneguy.cpp_freeBoneGuyBoxes_FUN_0041db30
// Address: 0041db30
// Address Range: [[0041db30, 0041db44]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_freeBoneGuyBoxes_FUN_0041db30(SBoneGuyBox **objs)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_freeBoneGuyBoxes_FUN_0041db30(SBoneGuyBox **objs)

{
  int iVar1;
  
  iVar1 = __arrfini(objs,0x14,&g_SBoneGuyBoxTypeInfo);
  return iVar1;
}
