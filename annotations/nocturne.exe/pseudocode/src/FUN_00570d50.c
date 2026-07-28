// Name: FUN_00570d50
// Address: 00570d50
// Address Range: [[00570d50, 00570eaf] [00570f40, 00570f4f]]
// Convention: unknown
// Signature: undefined8 FUN_00570d50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00570d50(void)

{
  uint in_EAX;
  uint in_EDX;
  uint uVar1;
  float10 in_ST0;
  float10 in_ST1;
  ulonglong uVar2;
  uint uStack_2c;
  ushort uStack_28;
  uint uStack_20;
  ushort uStack_1c;
  
  uStack_20 = (uint)((unkuint10)in_ST0 >> 0x20);
  uStack_1c = (ushort)((unkuint10)in_ST0 >> 0x40);
  uStack_2c = (uint)((unkuint10)in_ST1 >> 0x20);
  uStack_28 = (ushort)((unkuint10)in_ST1 >> 0x40);
  if ((((CARRY4(uStack_2c,uStack_2c)) && (CARRY4(uStack_20,uStack_20))) &&
      ((uStack_28 & 0x7fff) != 0)) &&
     ((((uStack_1c & 0x7fff) != 0 && ((uStack_28 & 0x7fff) != 0x7fff)) &&
      ((uStack_1c & 0x7fff) != 0x7fff)))) {
    uVar1 = (uint)(ABS(in_ST0) <= ABS(in_ST1));
    function_dispatch(0xf);
    function_dispatch(0xf);
                    /* WARNING: Could not recover jumptable at 0x00570ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&PTR_FUN_005c4094)
                      [(uVar1 * 2 + (uint)CARRY4((uint)uStack_1c << 0x10,(uint)uStack_1c << 0x10)) *
                       2 + (uint)CARRY4((uint)uStack_28 << 0x10,(uint)uStack_28 << 0x10)])();
    return uVar2;
  }
  fpatan(in_ST1,in_ST0);
  return CONCAT44(in_EDX,in_EAX);
}
