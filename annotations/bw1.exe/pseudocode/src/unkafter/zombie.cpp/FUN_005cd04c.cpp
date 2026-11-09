// Name: unkafter_zombie.cpp_FUN_005cd04c
// Address: 005cd04c
// Address Range: [[005cd04c, 005cd0bc]]
// Convention: unknown
// Signature: void unkafter_zombie_cpp_FUN_005cd04c(void)

#include "nocturne.h"

void unkafter_zombie_cpp_FUN_005cd04c(void)

{
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(0);
  if (DAT_00626adc == -1) {
    DAT_00626adc = (int)CreateFileA("conin$",0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                    (HANDLE)0x0);
  }
  if (DAT_00626ae0 == -1) {
    DAT_00626ae0 = (int)CreateFileA("conout$",0x40000000,2,(LPSECURITY_ATTRIBUTES)0x0,3,0x80
                                    ,(HANDLE)0x0);
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(0);
  return;
}
