// Name: core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00440370
// Address: 00440370
// Address Range: [[00440370, 004404fa]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00440370(CDemonCamera *this_ptr,CDemonLight *light_source)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00440370(CDemonCamera *this_ptr,CDemonLight *light_source)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int local_20;
  int local_1c;
  int local_18;
  CDemonLight *local_14;
  
  local_1c = 0;
  if (0 < *(int *)&this_ptr->field_0x154) {
    local_18 = 0;
    local_20 = 0xaf5218;
    local_14 = light_source;
    do {
      iVar2 = (*(int *)&local_14->field_0x1888 - *(int *)&local_14->field_0x14c8) + 1;
      if (0 < iVar2) {
        puVar3 = (uint *)(*(int *)&light_source->field_0x1c48 + local_18 +
                         *(int *)&local_14->field_0x14c8 * 4);
        puVar9 = (uint *)
                 (*(int *)&light_source->field_0x1c4c + local_18 +
                 *(int *)&local_14->field_0x14c8 * 4);
        piVar4 = (int *)(*(int *)&light_source->field_0x1c50 + local_18 +
                        *(int *)&local_14->field_0x14c8 * 4);
        pcVar5 = (char *)(local_20 + *(int *)&local_14->field_0x14c8);
        _DAT_0150f454 = *(int *)&light_source->field_0x1c54;
        iVar8 = iVar2;
        do {
          iVar6 = iVar8 + -8;
          bVar1 = 7 < iVar8;
          iVar7 = iVar2;
          iVar8 = iVar6;
        } while (iVar6 != 0 && bVar1);
        do {
          iVar6 = iVar7 + -8;
          bVar1 = 7 < iVar7;
          iVar8 = iVar2;
          iVar7 = iVar6;
        } while (iVar6 != 0 && bVar1);
        do {
          iVar7 = iVar8 + -8;
          bVar1 = 7 < iVar8;
          iVar8 = iVar7;
        } while (iVar7 != 0 && bVar1);
        do {
          if ((*puVar3 != 0) && (*puVar3 <= (uint)*(ushort *)*puVar9)) {
            *pcVar5 = *pcVar5 + *(char *)(_DAT_0150f454 + *piVar4);
          }
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
          piVar4 = piVar4 + 1;
          pcVar5 = pcVar5 + 1;
          iVar8 = iVar2 + -1;
          bVar1 = 0 < iVar2;
          iVar2 = iVar8;
        } while (iVar8 != 0 && bVar1);
      }
      local_14 = (CDemonLight *)&local_14->field_0x4;
      local_20 = local_20 + 0x140;
      local_18 = local_18 + 0x500;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)&this_ptr->field_0x154);
  }
  return;
}
