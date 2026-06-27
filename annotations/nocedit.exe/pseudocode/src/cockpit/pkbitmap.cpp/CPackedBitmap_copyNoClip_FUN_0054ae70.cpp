// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70
// Address: 0054ae70
// Address Range: [[0054ae70, 0054afa2]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_0054ae70(CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_0054ae70(CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride)

{
  int iVar4;
  ushort *puVar5;
  int local_1c;
  int local_18;
  OptimizedMemcpyFunc *local_14;
  char *pcVar2;
  ushort uVar1;
  int iVar3;
  
  if (this_ptr->row_offsets == (int *)0x0) {
    return;
  }
  if (this_ptr->packed_data == (ushort *)0x0) {
    return;
  }
  if (dest_buffer == (uchar *)0x0) {
    return;
  }
  local_18 = 0;
  if ((uint)row_stride < 0x10) {
    if (row_stride == 8) {
      local_14 = cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00431780();
      goto LAB_0054aec0;
    }
  }
  else {
    if ((uint)row_stride < 0x11) {
      local_14 = (OptimizedMemcpyFunc *)cockpit_ckptutil_c_get16BitConversionFunction_FUN_004317a0()
      ;
      goto LAB_0054aec0;
    }
    if (row_stride == 0x20) {
      local_14 = (OptimizedMemcpyFunc *)
                 cockpit_ckptutil_c_getRGBConvertersionFunction_FUN_00431770();
      goto LAB_0054aec0;
    }
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 0x29e;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CPackedBitmap::copyNoClip - invalid destBitsPerPixel: %d",row_stride);
LAB_0054aec0:
  local_1c = 0;
  puVar5 = (ushort *)((int)this_ptr->packed_data + *this_ptr->row_offsets);
  do {
    pcVar2 = (char *)this_ptr->packed_data;
    iVar3 = *(int *)((int)this_ptr->row_offsets + local_1c + 4);
    for (; puVar5 < pcVar2 + iVar3;
        puVar5 = (ushort *)((uVar1 + 3 & 0xfffffffc) + (int)(puVar5 + 2))) {
      iVar4 = (int)((uint)*puVar5 * row_stride) >> 0x1f;
      uVar1 = puVar5[1];
      (*local_14)(dest_buffer +
                  ((int)(((uint)*puVar5 * row_stride + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3),
                  puVar5 + 2,(uint)uVar1);
    }
    local_1c = local_1c + 4;
    local_18 = local_18 + 1;
    dest_buffer = dest_buffer + bits_per_pixel;
  } while (local_18 < this_ptr->height);
  return;
}
