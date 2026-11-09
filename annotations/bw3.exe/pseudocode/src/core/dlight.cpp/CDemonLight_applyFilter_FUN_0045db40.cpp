// Name: core_dlight.cpp_CDemonLight_applyFilter_FUN_0045db40
// Address: 0045db40
// Address Range: [[0045db40, 0045de59]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_applyFilter_FUN_0045db40(CDemonLight *this_ptr,CDemonFilter *filter_ptr,int filter_index,int filter_pos_x,int filter_pos_y)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_applyFilter_FUN_0045db40(CDemonLight *this_ptr,CDemonFilter *filter_ptr,int filter_index,int filter_pos_x,int filter_pos_y)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  byte local_40;
  uint local_38;
  byte *local_34;
  int local_30;
  
  *(uint *)&this_ptr->field_0x1c54 = *(uint *)&filter_ptr->field_0x48;
  *(uint *)&this_ptr->field_0x1c58 = *(uint *)filter_ptr;
  *(uint *)&this_ptr->field_0x1c5c = *(uint *)&filter_ptr->field_0x4;
  iVar2 = *(int *)&this_ptr->field_0x1c58;
  *(uint *)&this_ptr->field_0x1c60 = 0;
  for (; 1 < iVar2; iVar2 = iVar2 >> 1) {
    *(int *)&this_ptr->field_0x1c60 = *(int *)&this_ptr->field_0x1c60 + 1;
  }
  *(uint *)&this_ptr->field_0x1cc8 = 8;
  *(uint *)&this_ptr->field_0x1c64 = *(uint *)&this_ptr->field_0x1c60;
  iVar2 = *(int *)&this_ptr->field_0x1cc0;
  *(uint *)&this_ptr->field_0x1ccc = 8;
  for (; 1 < iVar2; iVar2 = iVar2 >> 1) {
    *(int *)&this_ptr->field_0x1cc8 = *(int *)&this_ptr->field_0x1cc8 + 1;
    *(int *)&this_ptr->field_0x1ccc = *(int *)&this_ptr->field_0x1ccc + 1;
  }
  for (iVar2 = *(int *)&this_ptr->field_0x1c58; iVar2 < 0x100; iVar2 = iVar2 * 2) {
    *(int *)&this_ptr->field_0x1cc8 = *(int *)&this_ptr->field_0x1cc8 + 1;
    *(int *)&this_ptr->field_0x1ccc = *(int *)&this_ptr->field_0x1ccc + 1;
  }
  *(int *)&this_ptr->field_0x1ccc = *(int *)&this_ptr->field_0x1ccc - filter_index;
  *(int *)&this_ptr->field_0x1cc8 = *(int *)&this_ptr->field_0x1cc8 - filter_index;
  local_34 = *(byte **)&this_ptr->field_0x1c6c;
  *(int *)&this_ptr->field_0x1c68 = *(int *)&this_ptr->field_0x1c58 + -1;
  if (local_34 != (byte *)0x0) {
    uVar6 = filter_pos_x & 0xff;
    local_30 = 0;
    if (0 < *(int *)&this_ptr->field_0x1c5c) {
      local_38 = filter_pos_y >> 8;
      do {
        local_38 = local_38 + 1;
        uVar3 = *(int *)&this_ptr->field_0x1c5c - 1;
        iVar2 = *(int *)&this_ptr->field_0x1c54 +
                (local_30 + (filter_pos_y >> 8) & uVar3) * *(int *)&this_ptr->field_0x1c58;
        iVar7 = *(int *)&this_ptr->field_0x1c54 +
                (uVar3 & local_38) * *(int *)&this_ptr->field_0x1c58;
        iVar4 = 0;
        puVar5 = local_34;
        uVar3 = filter_pos_x >> 8;
        if (0 < *(int *)&this_ptr->field_0x1c58) {
          do {
            uVar8 = *(int *)&this_ptr->field_0x1c58 - 1;
            uVar10 = (filter_pos_x >> 8) + iVar4 & uVar8;
            uVar8 = uVar3 + 1 & uVar8;
            local_40 = (byte)
                       ((filter_pos_y & 0xffU) *
                        (*(byte *)(uVar8 + iVar7) * uVar6 +
                        (uint)*(byte *)(uVar10 + iVar7) * (0xff - uVar6)) +
                        (0xff - (filter_pos_y & 0xffU)) *
                        (*(byte *)(iVar2 + uVar8) * uVar6 +
                        (0xff - uVar6) * (uint)*(byte *)(uVar10 + iVar2)) >> 0x10);
            *puVar5 = local_40;
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 1;
            uVar3 = uVar3 + 1;
          } while (iVar4 < *(int *)&this_ptr->field_0x1c58);
        }
        local_30 = local_30 + 1;
        local_34 = local_34 + *(int *)&this_ptr->field_0x1c58;
      } while (local_30 < *(int *)&this_ptr->field_0x1c5c);
    }
    *(uint *)&this_ptr->field_0x1c54 = *(uint *)&this_ptr->field_0x1c6c;
  }
  pcVar9 = &filter_ptr->field_0x8;
  pcVar11 = &this_ptr->field_0x1c74;
  do {
    cVar1 = *pcVar9;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  return;
}
