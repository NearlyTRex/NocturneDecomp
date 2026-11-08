// Name: FUN_005afddc
// Address: 005afddc
// Address Range: [[005afddc, 005afe4c]]
// Convention: unknown
// Signature: void FUN_005afddc(void)

#include "nocturne.h"

void FUN_005afddc(void)

{
  (*(code *)PTR_FUN_006079a4)(0);
  if (DAT_00607e80 == -1) {
    DAT_00607e80 = (int)CreateFileA("conin$",0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                    (HANDLE)0x0);
  }
  if (DAT_00607e84 == -1) {
    DAT_00607e84 = (int)CreateFileA("conout$",0x40000000,2,(LPSECURITY_ATTRIBUTES)0x0,3,0x80
                                    ,(HANDLE)0x0);
  }
  (*(code *)PTR_FUN_006079a8)(0);
  return;
}
