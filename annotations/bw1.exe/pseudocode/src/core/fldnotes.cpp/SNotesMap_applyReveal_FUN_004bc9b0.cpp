// Name: core_fldnotes.cpp_SNotesMap_applyReveal_FUN_004bc9b0
// Address: 004bc9b0
// Address Range: [[004bc9b0, 004bca54]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_applyReveal_FUN_004bc9b0(SNotesMap *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SNotesMap_applyReveal_FUN_004bc9b0(SNotesMap *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < (this_ptr->image).height) {
    do {
      iVar1 = 0;
      if (0 < (this_ptr->image).width) {
        do {
          (this_ptr->image).opa[iVar3] =
               (char)(((uint)(byte)(this_ptr->reveal_mask).opa
                                   [(this_ptr->reveal_mask).width *
                                    (((this_ptr->reveal_mask).height * iVar2) /
                                    (this_ptr->image).height) +
                                    ((this_ptr->reveal_mask).width * iVar1) /
                                    (this_ptr->image).width] *
                      (uint)*(byte *)(iVar3 + (int)this_ptr->saved_alpha)) / 0xff);
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar1 < (this_ptr->image).width);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (this_ptr->image).height);
  }
  this_ptr->reveal_dirty = 0;
  return;
}
