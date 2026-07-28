// Name: crt_unknown.c_FUN_005656a4
// Address: 005656a4
// Address Range: [[005656a4, 00565722]]
// Convention: unknown
// Signature: _FILE * crt_unknown_c_FUN_005656a4(_FILE *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_FILE * FUN_005656a4(_FILE *param_1)

{
  _FILE *file_handle;
  uint *puVar1;
  uint *puVar2;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad0)();
  for (puVar1 = _DAT_02de4e20; puVar1 != (uint *)0x0; puVar1 = (uint *)*puVar1) {
    file_handle = (_FILE *)puVar1[1];
    if (param_1 == file_handle) {
      if ((file_handle->_flag & 3) != 0) {
        _fclose(file_handle,1);
      }
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
      return param_1;
    }
  }
  puVar1 = (uint *)&DAT_02de4e24;
  do {
    puVar2 = puVar1;
    puVar1 = (uint *)*puVar2;
    if (puVar1 == (uint *)0x0) {
      setErrno(4);
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
      return (_FILE *)0x0;
    }
  } while (param_1 != (_FILE *)puVar1[1]);
  *puVar2 = *puVar1;
  *puVar1 = _DAT_02de4e20;
  _DAT_02de4e20 = puVar1;
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
  return param_1;
}
