// Name: core_fldnotes.cpp_SNotesMap_revealCircle_FUN_004bc5a0
// Address: 004bc5a0
// Address Range: [[004bc5a0, 004bc683]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_revealCircle_FUN_004bc5a0(SNotesMap *this_ptr,int x,int y,int radius)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SNotesMap_revealCircle_FUN_004bc5a0(SNotesMap *this_ptr,int x,int y,int radius)

{
  int iVar1;
  int iVar2;
  int x_00;
  int local_14;
  int local_10;
  
  if ((x != this_ptr->last_reveal_x) || (y != this_ptr->last_reveal_y)) {
    local_10 = -radius;
    if (local_10 <= radius) {
      local_14 = local_10 + y;
      do {
        iVar2 = -radius;
        if (-radius == radius || SBORROW4(iVar2,radius) != radius * -2 < 0) {
          x_00 = x + iVar2;
          do {
            iVar1 = iVar2 * iVar2 + local_10 * local_10;
            if (iVar1 <= radius * radius) {
              core_fldnotes_cpp_SNotesMap_revealPixel_FUN_004bc690
                        (this_ptr,x_00,local_14,0xff - (iVar1 * 0xff) / (radius * radius));
            }
            iVar2 = iVar2 + 1;
            x_00 = x_00 + 1;
          } while (iVar2 <= radius);
        }
        local_14 = local_14 + 1;
        local_10 = local_10 + 1;
      } while (local_10 <= radius);
    }
    this_ptr->last_reveal_x = x;
    this_ptr->last_reveal_y = y;
  }
  return;
}
