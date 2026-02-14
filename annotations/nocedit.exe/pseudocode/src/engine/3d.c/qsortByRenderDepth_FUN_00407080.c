// Name: engine_3d.c_qsortByRenderDepth_FUN_00407080
// Address: 00407080
// Address Range: [[00407080, 004070b0]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_qsortByRenderDepth_FUN_00407080(SRenderBufferEntry **entry1_ptr,SRenderBufferEntry **entry2_ptr)

#include "nocturne.h"

int __cdecl engine_3d_c_qsortByRenderDepth_FUN_00407080(SRenderBufferEntry **entry1_ptr,SRenderBufferEntry **entry2_ptr)

{
  if ((*entry1_ptr)->min_z_value < (*entry2_ptr)->min_z_value) {
    return 1;
  }
  if ((*entry2_ptr)->min_z_value < (*entry1_ptr)->min_z_value) {
    return -1;
  }
  return 0;
}
