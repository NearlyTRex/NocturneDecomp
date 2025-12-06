// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70
// Address: 0054ae70
// Address Range: [[0054ae70, 0054afa2]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70(CPackedBitmap * this_ptr, uchar * dest_buffer, int bits_per_pixel, int row_stride)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_0054ae70
          (CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  OptimizedMemcpyFunc *unaff_EBP;
  uchar *puVar6;
  int in_stack_00000014;
  int local_18;
  int local_14;
  
  if (this_ptr->row_pointers == (void **)0x0) {
    return;
  }
  if (this_ptr->packed_data == (char *)0x0) {
    return;
  }
  if (dest_buffer == (uchar *)0x0) {
    return;
  }
  if ((uint)row_stride < 0x10) {
    if (row_stride == 8) {
      unaff_EBP = cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00431780();
      goto LAB_0054aec0;
    }
  }
  else {
    if ((uint)row_stride < 0x11) {
      unaff_EBP = (OptimizedMemcpyFunc *)
                  cockpit_ckptutil_c_get16BitConversionFunction_FUN_004317a0();
      goto LAB_0054aec0;
    }
    if (row_stride == 0x20) {
      unaff_EBP = (OptimizedMemcpyFunc *)
                  cockpit_ckptutil_c_getRGBConvertersionFunction_FUN_00431770();
      goto LAB_0054aec0;
    }
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 0x29e;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CPackedBitmap::copyNoClip - invalid destBitsPerPixel: %d",row_stride);
LAB_0054aec0:
  local_18 = local_14 << 2;
  puVar5 = (ushort *)(*(int *)(dest_buffer + 0x14) + **(int **)(dest_buffer + 0x20));
  puVar6 = dest_buffer;
  do {
    iVar2 = *(int *)(dest_buffer + 0x14);
    iVar3 = *(int *)(*(int *)(dest_buffer + 0x20) + local_18 + 4);
    for (; puVar5 < (ushort *)(iVar2 + iVar3);
        puVar5 = (ushort *)((uVar1 + 3 & 0xfffffffc) + (int)(puVar5 + 2))) {
      iVar4 = (int)((uint)*puVar5 * in_stack_00000014) >> 0x1f;
      uVar1 = puVar5[1];
      (*unaff_EBP)(puVar6 + ((int)(((uint)*puVar5 * in_stack_00000014 + iVar4 * -8) -
                                  (uint)(iVar4 << 2 < 0)) >> 3),puVar5 + 2,(uint)uVar1);
    }
    local_18 = local_18 + 4;
    local_14 = local_14 + 1;
    puVar6 = puVar6 + row_stride;
  } while (local_14 < *(int *)(dest_buffer + 0x1c));
  return;
}
