// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_004f44d0
// Address: 004f44d0
// Address Range: [[004f44d0, 004f45d1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_004f44d0(CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_004f44d0(CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride)

{
  ushort *puVar1;
  ushort *src_buffer;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  uchar *dest_buffer_00;
  ushort *puVar5;
  int local_20;
  int local_1c;
  OptimizedMemcpyFunc *local_18;
  
  if (((this_ptr->row_offsets != (int *)0x0) && (this_ptr->packed_data != (ushort *)0x0)) &&
     (dest_buffer != (uchar *)0x0)) {
    local_1c = 0;
    if (row_stride == 8) {
      local_18 = cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_0042d150();
    }
    if (row_stride == 0x10) {
      local_18 = (OptimizedMemcpyFunc *)cockpit_ckptutil_c_get16BitConversionFunction_FUN_0042d170()
      ;
    }
    local_20 = 0;
    puVar5 = (ushort *)((int)this_ptr->packed_data + *this_ptr->row_offsets);
    do {
      puVar3 = this_ptr->packed_data;
      iVar4 = *(int *)((int)this_ptr->row_offsets + local_20 + 4);
      while (puVar5 < (ushort *)(iVar4 + (int)puVar3)) {
        puVar1 = puVar5 + 1;
        src_buffer = puVar5 + 2;
        uVar2 = *puVar5;
        puVar5 = (ushort *)((int)src_buffer + (*puVar1 + 3 & 0xfffffffc));
        dest_buffer_00 = dest_buffer + uVar2;
        if (row_stride == 0x10) {
          dest_buffer_00 = dest_buffer_00 + uVar2;
        }
        (*local_18)(dest_buffer_00,src_buffer,(uint)*puVar1);
      }
      local_20 = local_20 + 4;
      local_1c = local_1c + 1;
      dest_buffer = dest_buffer + bits_per_pixel;
    } while (local_1c < this_ptr->height);
  }
  return;
}
