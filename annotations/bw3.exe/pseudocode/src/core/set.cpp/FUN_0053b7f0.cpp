// Name: core_set.cpp_FUN_0053b7f0
// Address: 0053b7f0
// Address Range: [[0053b7f0, 0053b99e]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0053b7f0(int *param_1,_FILE *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_0053b7f0(int *param_1,_FILE *param_2)

{
  int iVar1;
  int *piVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  _fscanf(param_2,"%*[^\n]\n");
  _fscanf(param_2,&DAT_005d0923);
  if ((local_24 < 1) || (3 < local_24)) {
    _DAT_01d71de0 = "..\\core\\set.cpp";
    _DAT_01d71de4 = 0x14ae;
    core_main_c_FUN_004e4330("Set saveState info is invalid version %d",local_24);
  }
  _fscanf(param_2,"%*[^\n]\n");
  _fscanf(param_2,&DAT_005d0968);
  if (*param_1 != local_20) {
    shape_edittool_cpp_FUN_0047cee0(g_CEditorToolsPtr,"The set has changed since you saved you game last.\nThere might be problems with the virtual director.");
  }
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < local_20) {
    do {
      _fscanf(param_2,&DAT_005d09d2);
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
          _fscanf(param_2,&DAT_005d09de);
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
          _fscanf(param_2,&DAT_005d09ea);
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
