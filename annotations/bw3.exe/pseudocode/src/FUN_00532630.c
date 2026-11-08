// Name: FUN_00532630
// Address: 00532630
// Address Range: [[00532630, 005326a3]]
// Convention: unknown
// Signature: void FUN_00532630(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00532630(void)

{
  int iVar1;
  float10 fVar2;
  
  _DAT_0207bab8 = 0;
  _DAT_0207babc = 0;
  if ((*(int *)(0x01D2130C + 0x24c) == 0) &&
     (iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x20b68) != 0) {
      _DAT_0207bab8 = *(uint *)(iVar1 + 0x20b70);
    }
    iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    _DAT_0207babc = *(uint *)(iVar1 + 0x20b8c);
    fVar2 = (float10)fcos((float10)*(float *)(iVar1 + 0x20b90));
    _DAT_0207bac0 = (float)(fVar2 + (float10)_DAT_005d010f);
  }
  return;
}
