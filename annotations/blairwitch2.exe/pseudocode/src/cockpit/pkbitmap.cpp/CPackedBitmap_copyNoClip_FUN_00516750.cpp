// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_00516750
// Address: 00516750
// Address Range: [[00516750, 00516882]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_00516750(CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_00516750(CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iStack_1c;
  int iStack_18;
  ColorConversionFunc *pCStack_14;
  
  if (this_ptr->row_offsets == (int *)0x0) {
    return;
  }
  if (this_ptr->packed_data == (ushort *)0x0) {
    return;
  }
  if (dest_buffer == (uchar *)0x0) {
    return;
  }
  iStack_18 = 0;
  if ((uint)row_stride < 0x10) {
    if (row_stride == 8) {
      pCStack_14 = (ColorConversionFunc *)
                   cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_0042c430();
      goto LAB_005167a0;
    }
  }
  else {
    if ((uint)row_stride < 0x11) {
      pCStack_14 = cockpit_ckptutil_c_get16BitConversionFunction_FUN_0042c450();
      goto LAB_005167a0;
    }
    if (row_stride == 0x20) {
      pCStack_14 = cockpit_ckptutil_c_getRGBConvertersionFunction_FUN_0042c420();
      goto LAB_005167a0;
    }
  }
  _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
  _DAT_01d046a4 = 0x2a0;
  core_main_c_displayErrorAndQuit_FUN_004e4500("CPackedBitmap::copyNoClip - invalid destBitsPerPixel: %d");
LAB_005167a0:
  iStack_1c = 0;
  puVar5 = (ushort *)((int)this_ptr->packed_data + *this_ptr->row_offsets);
  do {
    puVar2 = this_ptr->packed_data;
    iVar3 = *(int *)((int)this_ptr->row_offsets + iStack_1c + 4);
    for (; puVar5 < (ushort *)((int)puVar2 + iVar3);
        puVar5 = (ushort *)((uVar1 + 3 & 0xfffffffc) + (int)(puVar5 + 2))) {
      iVar4 = (int)((uint)*puVar5 * row_stride) >> 0x1f;
      uVar1 = puVar5[1];
      (*pCStack_14)(dest_buffer +
                    ((int)(((uint)*puVar5 * row_stride + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3)
                    ,puVar5 + 2,(uint)uVar1);
    }
    iStack_1c = iStack_1c + 4;
    iStack_18 = iStack_18 + 1;
    dest_buffer = dest_buffer + bits_per_pixel;
  } while (iStack_18 < this_ptr->height);
  return;
}
