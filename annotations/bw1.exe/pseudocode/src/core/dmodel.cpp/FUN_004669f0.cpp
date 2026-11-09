// Name: core_dmodel.cpp_FUN_004669f0
// Address: 004669f0
// Address Range: [[004669f0, 00466bd9]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_FUN_004669f0(CKeyFramedModel *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_FUN_004669f0(CKeyFramedModel *this_ptr,_FILE *file)

{
  int iVar1;
  int iVar2;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  iVar1 = _fread(&local_2c,0x18,1,file);
  if (iVar1 != 1) goto LAB_00466a69;
  do {
    if ((local_2c < 3) || (4 < local_2c)) {
      _DAT_01d1d400 = "..\\core\\dmodel.cpp";
      _DAT_01d1d404 = 0xed;
      core_main_c_FUN_005030e0("KFM file is invalid version %d",local_2c);
    }
    local_14 = 0;
    if ((local_2c < 4) || (iVar1 = _fread(&local_14,4,1,file), iVar1 == 1))
    {
      core_dmodel_cpp_FUN_00467650(this_ptr,local_28,local_24,local_20,local_1c,local_18);
      iVar1 = _fread(*(uint *)&this_ptr->field_0x10c,
                         *(int *)&this_ptr->field_0x104 * *(int *)&this_ptr->field_0x100 * 0xc,1,
                         file);
      if ((iVar1 == 1) &&
         ((*(int *)&this_ptr->field_0x110 < 1 ||
          ((iVar1 = _fread(*(uint *)&this_ptr->field_0x114,
                               *(int *)&this_ptr->field_0x110 * 0x48,1,file), iVar1 == 1 &&
           (iVar1 = _fread(*(uint *)&this_ptr->field_0x118,
                               *(int *)&this_ptr->field_0x110 << 2,1,file), iVar1 == 1)))))) {
        if (0 < *(int *)&this_ptr->field_0x120) {
          memset(&this_ptr->field_0x124,0,0x120);
          for (iVar1 = 0; iVar1 < *(int *)&this_ptr->field_0x120; iVar1 = iVar1 + 1) {
            iVar2 = _fread(&this_ptr->field_0x124 + iVar1 * 0x48,0x18,1,file);
            if (iVar2 != 1) goto LAB_00466a69;
          }
        }
        iVar1 = _fread(&this_ptr->field_0x248,*(int *)&this_ptr->field_0x244 << 3,1,file);
        if (iVar1 == 1) {
          if (local_14 != 0) {
            core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00468340(this_ptr);
            return;
          }
          return;
        }
      }
    }
LAB_00466a69:
    _DAT_01d1d400 = "..\\core\\dmodel.cpp";
    _DAT_01d1d404 = 0xe7;
    core_main_c_FUN_005030e0("Error reading keyframed model file");
  } while( true );
}
