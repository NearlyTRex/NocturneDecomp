// Name: cockpit_ckptutil.c_copyBitmapRegion_FUN_0042e220
// Address: 0042e220
// Address Range: [[0042e220, 0042e28d]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_copyBitmapRegion_FUN_0042e220(int param_1,int param_2,undefined4 param_3,void *param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

void cockpit_ckptutil_c_copyBitmapRegion_FUN_0042e220(int param_1,int param_2,uint param_3,void *param_4,int param_5,int param_6,int param_7,int param_8)

{
  OptimizedMemcpyFunc *pOVar1;
  void *dest_buffer;
  int iVar2;
  
  if ((param_4 != (void *)0x0) && (param_1 != 0)) {
    pOVar1 = cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_0042d150();
    dest_buffer = (void *)(param_1 + param_8 * param_2 + param_7);
    iVar2 = 0;
    if (0 < param_6) {
      do {
        iVar2 = iVar2 + 1;
        (*pOVar1)(dest_buffer,param_4,param_5);
        param_4 = (void *)((int)param_4 + param_5);
        dest_buffer = (void *)((int)dest_buffer + param_2);
      } while (iVar2 < param_6);
      return;
    }
  }
  return;
}
