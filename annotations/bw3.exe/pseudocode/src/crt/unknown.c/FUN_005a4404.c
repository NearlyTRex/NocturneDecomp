// Name: crt_unknown.c_FUN_005a4404
// Address: 005a4404
// Address Range: [[005a4404, 005a4482]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005a4404(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a4404(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b4)();
  for (puVar2 = _DAT_02d252a0; puVar2 != (uint *)0x0; puVar2 = (uint *)*puVar2) {
    iVar1 = puVar2[1];
    if (param_1 == iVar1) {
      if ((*(byte *)(iVar1 + 0xc) & 3) != 0) {
        _fclose(iVar1,1);
      }
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
      return param_1;
    }
  }
  puVar2 = (uint *)&DAT_02d252a4;
  do {
    puVar3 = puVar2;
    puVar2 = (uint *)*puVar3;
    if (puVar2 == (uint *)0x0) {
      setErrno(4);
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
      return 0;
    }
  } while (param_1 != puVar2[1]);
  *puVar3 = *puVar2;
  *puVar2 = _DAT_02d252a0;
  _DAT_02d252a0 = puVar2;
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
  return param_1;
}
