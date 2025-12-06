// Name: crt_io.c_InitializeStandardHandles_FUN_00608b20
// Address: 00608b20
// Address Range: [[00608b20, 00608b86]]
// Convention: __cdecl
// Signature: int crt_io.c_InitializeStandardHandles_FUN_00608b20(void)

#include "nocturne.h"

int __cdecl crt_io_c_InitializeStandardHandles_FUN_00608b20(void)

{
  HANDLE pvVar1;
  int iVar2;
  uint uStack00000004;
  uint uStack00000014;
  uint uStack00000024;
  
  pvVar1 = (*PTR_GetStdHandle_006115c0)(SYSTEM_STD_ERROR_HANDLE);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    uStack00000004 = 0x608b39;
    pvVar1 = crt_io_c_CreateFallbackHandle_FUN_00608b88();
  }
  uStack00000004 = 0x608b3f;
  crt_io_c_register_handle_FUN_00608990(pvVar1);
  pvVar1 = (*PTR_GetStdHandle_006115c0)(SYSTEM_STD_OUTPUT_HANDLE);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    uStack00000014 = 0x608b5b;
    pvVar1 = crt_io_c_CreateFallbackHandle_FUN_00608b88();
  }
  uStack00000014 = 0x608b61;
  crt_io_c_register_handle_FUN_00608990(pvVar1);
  pvVar1 = (*PTR_GetStdHandle_006115c0)(SYSTEM_STD_INPUT_HANDLE);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    uStack00000024 = 0x608b7d;
    pvVar1 = crt_io_c_CreateFallbackHandle_FUN_00608b88();
  }
  uStack00000024 = 0x608b83;
  iVar2 = crt_io_c_register_handle_FUN_00608990(pvVar1);
  return iVar2;
}
