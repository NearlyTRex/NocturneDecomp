// Name: FUN_00403900
// Address: 00403900
// Address Range: [[00403900, 00403931]]
// Convention: unknown
// Signature: byte FUN_00403900(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

byte FUN_00403900(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  
  bVar1 = param_6 < param_2;
  if (param_2 < param_4) {
    bVar1 = bVar1 | 2;
  }
  if (param_5 < param_1) {
    bVar1 = bVar1 | 4;
  }
  if (param_1 < param_3) {
    bVar1 = bVar1 | 8;
  }
  return bVar1;
}
