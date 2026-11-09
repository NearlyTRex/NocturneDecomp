// Name: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_004545b0
// Address: 004545b0
// Address Range: [[004545b0, 004546c3]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_004545b0(CDemonCamera *this_ptr,int alpha_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_004545b0(CDemonCamera *this_ptr,int alpha_index)

{
  uint *puVar1;
  byte bVar2;
  uint auStack_ffc [1021];
  
  bVar2 = 0;
  engine_matrix_c_FUN_00509050();
  puVar1 = (uint *)((int)this_ptr + (uint)bVar2 * -8 + alpha_index * 0xc + 0x11f0);
  *(uint *)(&this_ptr->field_0x11ec + alpha_index * 0xc) = auStack_ffc[0x3fa];
  *puVar1 = auStack_ffc[(uint)bVar2 * -2 + 0x3fb];
  puVar1[(uint)bVar2 * -2 + 1] = auStack_ffc[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
  *(uint *)(&this_ptr->field_0x124c + alpha_index * 4) = _DAT_01c51d5c;
  *(uint *)(&this_ptr->field_0x126c + alpha_index * 4) = _DAT_01c51d60;
  *(uint *)(&this_ptr->field_0x128c + alpha_index * 4) = _DAT_01c51d64;
  *(uint *)(&this_ptr->field_0x12ac + alpha_index * 4) = _DAT_01c51d68;
  *(uint *)(&this_ptr->field_0x12cc + alpha_index * 4) = _DAT_01c51d6c;
  *(uint *)(&this_ptr->field_0x12ec + alpha_index * 4) = _DAT_01c51d70;
  *(uint *)(&this_ptr->field_0x130c + alpha_index * 4) = _DAT_01c51d74;
  *(uint *)(&this_ptr->field_0x132c + alpha_index * 4) = _DAT_01c51d78;
  *(uint *)(&this_ptr->field_0x134c + alpha_index * 4) = _DAT_01c51d7c;
  *(uint *)(&this_ptr->field_0x136c + alpha_index * 4) = _DAT_01d1dd18;
  *(uint *)(&this_ptr->field_0x138c + alpha_index * 4) = _DAT_01d1dd1c;
  *(uint *)(&this_ptr->field_0x13ac + alpha_index * 4) = _DAT_01d1dd20;
  *(uint *)(&this_ptr->field_0x13cc + alpha_index * 4) = _DAT_01d1dd24;
  *(uint *)(&this_ptr->field_0x13ec + alpha_index * 4) = _DAT_01d1dd28;
  *(uint *)(&this_ptr->field_0x140c + alpha_index * 4) = _DAT_01d1dd2c;
  *(uint *)(&this_ptr->field_0x142c + alpha_index * 4) = _DAT_01d1dd30;
  *(uint *)(&this_ptr->field_0x144c + alpha_index * 4) = _DAT_01d1dd34;
  *(uint *)(&this_ptr->field_0x146c + alpha_index * 4) = _DAT_01d1dd38;
  return;
}
