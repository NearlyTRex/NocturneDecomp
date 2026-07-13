// Name: FUN_00481e70
// Address: 00481e70
// Address Range: [[00481e70, 00481e83]]
// Convention: unknown
// Signature: bool FUN_00481e70(int param_1)

#include "nocturne.h"

bool FUN_00481e70(int param_1)

{
  return *(int *)(param_1 + 0x2cc) == 0;
}
