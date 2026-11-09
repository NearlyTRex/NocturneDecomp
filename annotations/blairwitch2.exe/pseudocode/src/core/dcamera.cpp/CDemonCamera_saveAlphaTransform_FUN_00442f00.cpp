// Name: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00442f00
// Address: 00442f00
// Address Range: [[00442f00, 00443013]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00442f00(CDemonCamera *this_ptr,int alpha_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00442f00(CDemonCamera *this_ptr,int alpha_index)

{
  uint *puVar1;
  byte bVar2;
  uint auStack_ffc [1021];
  
  bVar2 = 0;
  engine_matrix_c_FUN_004ea3b0();
  puVar1 = (uint *)((int)this_ptr + (uint)bVar2 * -8 + alpha_index * 0xc + 0x11f0);
  *(uint *)(&this_ptr->field_0x11ec + alpha_index * 0xc) = auStack_ffc[0x3fa];
  *puVar1 = auStack_ffc[(uint)bVar2 * -2 + 0x3fb];
  puVar1[(uint)bVar2 * -2 + 1] = auStack_ffc[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
  *(uint *)(&this_ptr->field_0x124c + alpha_index * 4) = _DAT_01c38b9c;
  *(uint *)(&this_ptr->field_0x126c + alpha_index * 4) = _DAT_01c38ba0;
  *(uint *)(&this_ptr->field_0x128c + alpha_index * 4) = _DAT_01c38ba4;
  *(uint *)(&this_ptr->field_0x12ac + alpha_index * 4) = _DAT_01c38ba8;
  *(uint *)(&this_ptr->field_0x12cc + alpha_index * 4) = _DAT_01c38bac;
  *(uint *)(&this_ptr->field_0x12ec + alpha_index * 4) = _DAT_01c38bb0;
  *(uint *)(&this_ptr->field_0x130c + alpha_index * 4) = _DAT_01c38bb4;
  *(uint *)(&this_ptr->field_0x132c + alpha_index * 4) = _DAT_01c38bb8;
  *(uint *)(&this_ptr->field_0x134c + alpha_index * 4) = _DAT_01c38bbc;
  *(uint *)(&this_ptr->field_0x136c + alpha_index * 4) = _DAT_01d04fb8;
  *(uint *)(&this_ptr->field_0x138c + alpha_index * 4) = _DAT_01d04fbc;
  *(uint *)(&this_ptr->field_0x13ac + alpha_index * 4) = _DAT_01d04fc0;
  *(uint *)(&this_ptr->field_0x13cc + alpha_index * 4) = _DAT_01d04fc4;
  *(uint *)(&this_ptr->field_0x13ec + alpha_index * 4) = _DAT_01d04fc8;
  *(uint *)(&this_ptr->field_0x140c + alpha_index * 4) = _DAT_01d04fcc;
  *(uint *)(&this_ptr->field_0x142c + alpha_index * 4) = _DAT_01d04fd0;
  *(uint *)(&this_ptr->field_0x144c + alpha_index * 4) = _DAT_01d04fd4;
  *(uint *)(&this_ptr->field_0x146c + alpha_index * 4) = _DAT_01d04fd8;
  return;
}
