// Name: cockpit_ckptutil.c_copyBitmapRegion_FUN_00432860
// Address: 00432860
// Address Range: [[00432860, 004328cd]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_copyBitmapRegion_FUN_00432860(void * src_buffer, int src_stride, void * dest_buffer, int copy_width, int copy_height, int src_x, int src_y)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_copyBitmapRegion_FUN_00432860
          (void *src_buffer,int src_stride,void *dest_buffer,int copy_width,int copy_height,
          int src_x,int src_y)

{
  OptimizedMemcpyFunc *pOVar1;
  void *dest_buffer_00;
  int iVar2;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_00000038;
  
  if ((copy_width != 0) && (src_buffer != (void *)0x0)) {
    pOVar1 = cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00431780();
    dest_buffer_00 =
         (void *)((int)src_buffer + in_stack_00000024 * (int)dest_buffer + in_stack_00000020);
    iVar2 = 0;
    if (0 < src_y) {
      do {
        iVar2 = iVar2 + 1;
        (*pOVar1)(dest_buffer_00,(void *)copy_width,copy_height);
        copy_width = copy_width + copy_height;
        dest_buffer_00 = (void *)((int)dest_buffer_00 + in_stack_00000028);
      } while (iVar2 < in_stack_00000038);
      return;
    }
  }
  return;
}
