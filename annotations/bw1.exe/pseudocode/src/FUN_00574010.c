// Name: FUN_00574010
// Address: 00574010
// Address Range: [[00572b80, 00572b82] [00574010, 00574072]]
// Convention: unknown
// Signature: undefined4 FUN_00574010(double param_1,double param_2,double param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00574010(double param_1,double param_2,double param_3,float param_4)

{
  if ((param_3 - *(double *)(&DAT_02c7fc18 + _DAT_02c7fc88 * 8)) *
      (param_3 - *(double *)(&DAT_02c7fc18 + _DAT_02c7fc88 * 8)) +
      (param_2 - *(double *)(&DAT_02c7fc08 + _DAT_02c7fc88 * 8)) *
      (param_2 - *(double *)(&DAT_02c7fc08 + _DAT_02c7fc88 * 8)) +
      (param_1 - *(double *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8)) *
      (param_1 - *(double *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8)) <=
      (double)param_4 * (double)param_4) {
    return 1;
  }
  return 0;
}
