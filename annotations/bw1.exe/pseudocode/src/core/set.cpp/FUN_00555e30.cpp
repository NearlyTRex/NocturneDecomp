// Name: core_set.cpp_FUN_00555e30
// Address: 00555e30
// Address Range: [[00555e30, 00555fde]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00555e30(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_00555e30(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  _fscanf(param_2,"%*[^\n]\n");
  _fscanf(param_2,&DAT_005f0c7a,&local_24);
  if ((local_24 < 1) || (3 < local_24)) {
    _DAT_01d1d400 = "..\\core\\set.cpp";
    _DAT_01d1d404 = 0x1494;
    core_main_c_FUN_005030e0("Set saveState info is invalid version %d",local_24);
  }
  _fscanf(param_2,"%*[^\n]\n");
  _fscanf(param_2,&DAT_005f0cbf,&local_20);
  if (*param_1 != local_20) {
    shape_edittool_cpp_FUN_00494340(g_CEditorToolsPtr,"The set has changed since you saved you game last.\nThere might be problems with the virtual director.");
  }
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < local_20) {
    do {
      _fscanf(param_2,&DAT_005f0d29,&local_1c);
      if (iVar1 < *param_1) {
        piVar2[0x69] = local_1c;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x69;
    } while (iVar1 < local_20);
  }
  if ((1 < local_24) && (0 < local_20)) {
    do {
      _fscanf(param_2,"%*[^\n]\n");
      iVar1 = 0;
      piVar2 = param_1;
      if (0 < local_20) {
        do {
          _fscanf(param_2,&DAT_005f0d35,&local_18);
          if (iVar1 < *param_1) {
            piVar2[0x53] = local_18;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 0x69;
        } while (iVar1 < local_20);
      }
    } while (iVar1 + 1 < local_20);
  }
  if ((2 < local_24) && (0 < local_20)) {
    do {
      _fscanf(param_2,"%*[^\n]\n");
      iVar1 = 0;
      piVar2 = param_1;
      if (0 < local_20) {
        do {
          _fscanf(param_2,&DAT_005f0d41,&local_14);
          if (iVar1 < *param_1) {
            piVar2[0x54] = local_14;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 0x69;
        } while (iVar1 < local_20);
      }
    } while (iVar1 + 1 < local_20);
  }
  return;
}
