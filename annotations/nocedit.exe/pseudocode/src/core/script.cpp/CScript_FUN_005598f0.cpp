// Name: core_script.cpp_CScript_FUN_005598f0
// Address: 005598f0
// Address Range: [[005598f0, 0055995b]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_005598f0(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_005598f0(CScript *this_ptr)

{
  void *ptr;
  int iVar1;
  int iVar2;
  
  if (*(int *)(this_ptr->unk4 + 0x1c) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(this_ptr->unk4 + 0x18)) {
      iVar1 = 0;
      do {
        ptr = *(void **)(*(int *)(this_ptr->unk4 + 0x1c) + iVar1 + 4);
        if (ptr != (void *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\script.cpp",0x1ce);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < *(int *)(this_ptr->unk4 + 0x18));
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(this_ptr->unk4 + 0x1c),"..\\core\\script.cpp",0x1d0);
    this_ptr->unk4[0x1c] = '\0';
    this_ptr->unk4[0x1d] = '\0';
    this_ptr->unk4[0x1e] = '\0';
    this_ptr->unk4[0x1f] = '\0';
  }
  this_ptr->unk4[0x18] = '\0';
  this_ptr->unk4[0x19] = '\0';
  this_ptr->unk4[0x1a] = '\0';
  this_ptr->unk4[0x1b] = '\0';
  return;
}
