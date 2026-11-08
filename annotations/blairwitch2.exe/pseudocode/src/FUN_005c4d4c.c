// Name: FUN_005c4d4c
// Address: 005c4d4c
// Address Range: [[005c4d4c, 005c4dbc]]
// Convention: unknown
// Signature: void FUN_005c4d4c(void)

#include "nocturne.h"

void FUN_005c4d4c(void)

{
  (*(code *)PTR_FUN_0061f2a8)(0);
  if (DAT_0061f75c == -1) {
    DAT_0061f75c = (int)CreateFileA("conin$",0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                    (HANDLE)0x0);
  }
  if (DAT_0061f760 == -1) {
    DAT_0061f760 = (int)CreateFileA("conout$",0x40000000,2,(LPSECURITY_ATTRIBUTES)0x0,3,0x80
                                    ,(HANDLE)0x0);
  }
  (*(code *)PTR_FUN_0061f2ac)(0);
  return;
}
