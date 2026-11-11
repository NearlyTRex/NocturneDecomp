// Name: core_fldnotes.cpp_SNotesMap_revealCircle_FUN_004bc5a0
// Address: 004bc5a0
// Address Range: [[004bc5a0, 004bc683]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_revealCircle_FUN_004bc5a0(SNotesMap *this_ptr,int param_2,int param_3,int param_4)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SNotesMap_revealCircle_FUN_004bc5a0(SNotesMap *this_ptr,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  if ((param_2 != this_ptr->last_reveal_x) || (param_3 != this_ptr->last_reveal_y)) {
    local_10 = -param_4;
    if (local_10 <= param_4) {
      local_14 = local_10 + param_3;
      do {
        iVar2 = -param_4;
        if (-param_4 == param_4 || SBORROW4(iVar2,param_4) != param_4 * -2 < 0) {
          iVar3 = param_2 + iVar2;
          do {
            iVar1 = iVar2 * iVar2 + local_10 * local_10;
            if (iVar1 <= param_4 * param_4) {
              core_fldnotes_cpp_SNotesMap_revealPixel_FUN_004bc690
                        (this_ptr,iVar3,local_14,0xff - (iVar1 * 0xff) / (param_4 * param_4));
            }
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 1;
          } while (iVar2 <= param_4);
        }
        local_14 = local_14 + 1;
        local_10 = local_10 + 1;
      } while (local_10 <= param_4);
    }
    this_ptr->last_reveal_x = param_2;
    this_ptr->last_reveal_y = param_3;
  }
  return;
}
