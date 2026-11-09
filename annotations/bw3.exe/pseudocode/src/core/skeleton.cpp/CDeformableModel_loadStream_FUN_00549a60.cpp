// Name: core_skeleton.cpp_CDeformableModel_loadStream_FUN_00549a60
// Address: 00549a60
// Address Range: [[00549a60, 0054a2bb]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00549a60(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00549a60(CDeformableModel *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  uint local_8c;
  byte local_88 [4];
  byte local_84 [4];
  int local_80;
  byte local_7c [4];
  byte local_78 [4];
  ushort local_74 [2];
  byte local_70 [4];
  byte local_6c [4];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  byte local_30 [4];
  byte local_2c [4];
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = _fscanf(file_handle,&DAT_005d1b5a,&local_64);
  if (iVar1 == 1) goto LAB_00549ac4;
LAB_00549aa1:
  do {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x4d7;
    core_main_c_FUN_004e4330("Deformable model file is corrupt");
LAB_00549ac4:
    if (0x00000007 < local_64) {
      _DAT_01d71de0 = "..\\core\\skeleton.cpp";
      _DAT_01d71de4 = 0x4da;
      core_main_c_FUN_004e4330("Can't load model of version %d, this .exe can only handle up to version %d",local_64,0x00000007);
    }
    if (local_64 < 3) {
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d\n",&local_50,&local_4c,&local_48,&local_44,
                         &local_60,&local_40);
      if (iVar1 != 6) goto LAB_00549aa1;
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00548460(this_ptr,1,1,local_44,local_40);
      core_skeleton_cpp_FUN_00548580(this_ptr,0,local_50,local_4c,local_48);
    }
    else {
      if (local_64 < 5) {
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = _fscanf(file_handle,"%d,%d,%d,%d\n",&local_5c,&local_54,&local_60,&local_68);
        if (iVar1 != 4) goto LAB_00549aa1;
        local_58 = 1;
      }
      else {
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_5c,&local_58,&local_54,&local_60,
                           &local_68);
        if (iVar1 != 5) goto LAB_00549aa1;
      }
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00548460
                (this_ptr,local_5c,local_58,local_54,local_68);
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      for (iVar1 = 0; iVar1 < *(int *)this_ptr; iVar1 = iVar1 + 1) {
        iVar2 = _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_3c,&local_38,&local_34,
                           &this_ptr->field_0x4 + iVar1 * 8,&this_ptr->field_0x4 + iVar1 * 8 + 4);
        if (iVar2 != 5) goto LAB_00549aa1;
        core_skeleton_cpp_FUN_00548580(this_ptr,iVar1,local_3c,local_38,local_34);
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = _fscanf(file_handle,"%[^\n]\n",&this_ptr->field_0x355c);
    if (iVar1 != 1) goto LAB_00549aa1;
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    if (local_64 < 3) {
      for (iVar1 = 0; iVar1 < *(int *)&this_ptr->field_0xc00; iVar1 = iVar1 + 1) {
        puVar3 = &this_ptr->field_0xc04 + iVar1 * 0x60;
        iVar2 = _fscanf(file_handle,"\"%[^\"]\",%d,%d,%d\n",puVar3,puVar3 + 0x20,puVar3 + 0x34,
                           puVar3 + 0x48);
        if (iVar2 != 4) goto LAB_00549aa1;
        for (iVar2 = 0; iVar2 < *(int *)(&this_ptr->field_0xc4c + iVar1 * 0x60); iVar2 = iVar2 + 1)
        {
          iVar5 = _fscanf(file_handle,&DAT_005d1c76,
                             &this_ptr->field_0xc50 + iVar2 * 4 + iVar1 * 0x60);
          if (iVar5 != 1) goto LAB_00549aa1;
        }
      }
    }
    else {
      for (iVar1 = 0; iVar1 < *(int *)&this_ptr->field_0xc00; iVar1 = iVar1 + 1) {
        puVar3 = &this_ptr->field_0xc04 + iVar1 * 0x60;
        if (local_64 < 6) {
          _fscanf(file_handle,"\"%[^\"]\", %d\n",puVar3,puVar3 + 0x48);
        }
        else {
          _fscanf(file_handle,"\"%[^\"]\", %d, %d\n",puVar3,puVar3 + 0x5c,puVar3 + 0x48);
        }
        for (iVar2 = 0; iVar2 < *(int *)(&this_ptr->field_0xc4c + iVar1 * 0x60); iVar2 = iVar2 + 1)
        {
          _fscanf(file_handle,&DAT_005d1c59,&this_ptr->field_0xc50 + iVar2 * 4 + iVar1 * 0x60);
        }
        for (iVar2 = 0; iVar2 < *(int *)this_ptr; iVar2 = iVar2 + 1) {
          _fscanf(file_handle,"%d,%d\n",&this_ptr->field_0xc24 + iVar2 * 4 + iVar1 * 0x60,
                     &this_ptr->field_0xc38 + iVar2 * 4 + iVar1 * 0x60);
        }
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (local_20 = 0; local_20 < *(int *)this_ptr; local_20 = local_20 + 1) {
      for (local_18 = 0; local_18 < *(int *)(&this_ptr->field_0x2c + local_20 * 4);
          local_18 = local_18 + 1) {
        pbVar6 = (byte *)(*(int *)(&this_ptr->field_0x40 + local_20 * 4) + local_18 * 0x34);
        iVar1 = _fscanf(file_handle,&DAT_005d1c7a,local_30);
        if (iVar1 != 1) goto LAB_00549aa1;
        *pbVar6 = local_30[0];
        for (iVar1 = 0; iVar1 < (int)(uint)*pbVar6; iVar1 = iVar1 + 1) {
          pbVar4 = pbVar6 + iVar1 * 0xc + 0x10;
          iVar2 = _fscanf(file_handle,"%d,%f,%f,%f,%f\n",local_2c,pbVar6 + iVar1 * 4 + 4,pbVar4
                             ,pbVar4 + 4,pbVar4 + 8);
          if (iVar2 != 5) goto LAB_00549aa1;
          pbVar6[iVar1 + 1] = local_2c[0];
        }
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (local_14 = 0; local_14 < *(int *)this_ptr; local_14 = local_14 + 1) {
      for (iVar1 = 0; iVar2 = local_14,
          iVar1 < *(int *)(&this_ptr->field_0x54 + local_14 * 4) +
                  *(int *)(&this_ptr->field_0x68 + local_14 * 4); iVar1 = iVar1 + 1) {
        local_1c = *(int *)(&this_ptr->field_0x7c + local_14 * 4) + iVar1 * 0x12;
        iVar5 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&local_28,local_74,&local_80,
                           &local_8c,local_70,local_7c,local_88,local_6c,local_78,local_84);
        if (iVar5 != 10) goto LAB_00549aa1;
        *(uint *)(*(int *)(&this_ptr->field_0x90 + iVar2 * 4) + iVar1 * 4) = local_28;
        iVar2 = 0;
        do {
          puVar7 = (ushort *)(iVar2 * 2 + local_1c);
          *puVar7 = local_74[iVar2 * 2];
          local_24 = *(int *)(local_7c + iVar2 * 4 + -4) >> 8;
          puVar7[3] = (short)((uint)*(int *)(local_7c + iVar2 * 4 + -4) >> 8);
          iVar5 = iVar2 * 4;
          iVar2 = iVar2 + 1;
          puVar7[6] = (short)((uint)*(uint *)(local_88 + iVar5 + -4) >> 8);
        } while (iVar2 < 3);
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < *(int *)this_ptr; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < *(int *)(&this_ptr->field_0x68 + iVar1 * 4); iVar2 = iVar2 + 1) {
        iVar5 = _fscanf(file_handle,&DAT_005d1cad,
                           *(int *)(&this_ptr->field_0xa4 + iVar1 * 4) + iVar2 * 4);
        if (iVar5 != 1) goto LAB_00549aa1;
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < *(int *)&this_ptr->field_0xb8; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < *(int *)&this_ptr->field_0xbc; iVar2 = iVar2 + 1) {
        iVar5 = _fscanf(file_handle,"%[^\n]\n",
                           &this_ptr->field_0xc8 + iVar2 * 0x48 + iVar1 * 0x240);
        if (iVar5 != 1) goto LAB_00549aa1;
      }
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_60; iVar1 = iVar1 + 1) {
      puVar3 = &this_ptr->field_0x2290 + iVar1 * 0xc;
      iVar2 = _fscanf(file_handle,"%f,%f,%f\n",puVar3,puVar3 + 4,puVar3 + 8);
      if (iVar2 != 3) goto LAB_00549aa1;
    }
    if (local_64 < 2) {
      *(uint *)&this_ptr->field_0x228c = 0x3f800000;
      *(uint *)&this_ptr->field_0x2288 = *(uint *)&this_ptr->field_0x228c;
      *(uint *)&this_ptr->field_0x2284 = *(uint *)&this_ptr->field_0x2288;
      break;
    }
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x2284,&this_ptr->field_0x2288,
                       &this_ptr->field_0x228c);
  } while (iVar1 != 3);
  if (local_64 < 4) {
    *(uint *)&this_ptr->field_0x2748 = 0;
    *(uint *)&this_ptr->field_0x2744 = *(uint *)&this_ptr->field_0x2748;
    *(uint *)&this_ptr->field_0x2740 = *(uint *)&this_ptr->field_0x2744;
  }
  else {
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x2740,&this_ptr->field_0x2744,
               &this_ptr->field_0x2748);
  }
  if (6 < local_64) {
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_60; iVar1 = iVar1 + 1) {
      _fscanf(file_handle,&DAT_005d1cd6,&this_ptr->field_0x323c + iVar1 * 4)
      ;
    }
  }
  if (local_64 < 7) {
    core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0054b5b0(this_ptr);
  }
  if (((byte)file_handle[0xc] & 0x20) != 0) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x5a6;
    core_main_c_FUN_004e4330("CDeformableModel::loadStream - error reading file!");
    return;
  }
  return;
}
