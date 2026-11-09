// Name: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00450700
// Address: 00450700
// Address Range: [[00450700, 00450813]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00450700(CDemonCamera *this_ptr,int alpha_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00450700(CDemonCamera *this_ptr,int alpha_index)

{
  uint *puVar1;
  byte bVar2;
  uint auStack_ffc [1021];
  
  bVar2 = 0;
  engine_matrix_c_FUN_004e6a90();
  puVar1 = (uint *)((int)this_ptr + (uint)bVar2 * -8 + alpha_index * 0xc + 0x11f0);
  *(uint *)(&this_ptr->field_0x11ec + alpha_index * 0xc) = auStack_ffc[0x3fa];
  *puVar1 = auStack_ffc[(uint)bVar2 * -2 + 0x3fb];
  puVar1[(uint)bVar2 * -2 + 1] = auStack_ffc[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
  *(uint *)(&this_ptr->field_0x124c + alpha_index * 4) = _DAT_01c6e2fc;
  *(uint *)(&this_ptr->field_0x126c + alpha_index * 4) = _DAT_01c6e300;
  *(uint *)(&this_ptr->field_0x128c + alpha_index * 4) = _DAT_01c6e304;
  *(uint *)(&this_ptr->field_0x12ac + alpha_index * 4) = _DAT_01c6e308;
  *(uint *)(&this_ptr->field_0x12cc + alpha_index * 4) = _DAT_01c6e30c;
  *(uint *)(&this_ptr->field_0x12ec + alpha_index * 4) = _DAT_01c6e310;
  *(uint *)(&this_ptr->field_0x130c + alpha_index * 4) = _DAT_01c6e314;
  *(uint *)(&this_ptr->field_0x132c + alpha_index * 4) = _DAT_01c6e318;
  *(uint *)(&this_ptr->field_0x134c + alpha_index * 4) = _DAT_01c6e31c;
  *(uint *)(&this_ptr->field_0x136c + alpha_index * 4) = _DAT_01d72644;
  *(uint *)(&this_ptr->field_0x138c + alpha_index * 4) = _DAT_01d72648;
  *(uint *)(&this_ptr->field_0x13ac + alpha_index * 4) = _DAT_01d7264c;
  *(uint *)(&this_ptr->field_0x13cc + alpha_index * 4) = _DAT_01d72650;
  *(uint *)(&this_ptr->field_0x13ec + alpha_index * 4) = _DAT_01d72654;
  *(uint *)(&this_ptr->field_0x140c + alpha_index * 4) = _DAT_01d72658;
  *(uint *)(&this_ptr->field_0x142c + alpha_index * 4) = _DAT_01d7265c;
  *(uint *)(&this_ptr->field_0x144c + alpha_index * 4) = _DAT_01d72660;
  *(uint *)(&this_ptr->field_0x146c + alpha_index * 4) = _DAT_01d72664;
  return;
}
