// Name: core_podmain.cpp_CDemonPod_load_FUN_005152e0
// Address: 005152e0
// Address Range: [[005152e0, 00515463]]
// Convention: __cdecl
// Signature: void __cdecl core_podmain_cpp_CDemonPod_load_FUN_005152e0(CDemonPod *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_podmain_cpp_CDemonPod_load_FUN_005152e0(CDemonPod *this_ptr)

{
  _FILE *file;
  int iVar1;
  int iVar2;
  CFileFinder CStack_328;
  char acStack_214 [512];
  int iStack_14;
  
  file = _fopen("pod.ini",&DAT_005cca00);
  if (file == (_FILE *)0x0) {
    engine_dosio_cpp_CFileFinder_ctor_FUN_00465b60(&CStack_328);
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00465ba0(&CStack_328,"*.pod");
    while (CStack_328.filename[0] != '\0') {
      iVar1 = (*((this_ptr->base).vtable)->mount)(&this_ptr->base,CStack_328.filename);
      if (iVar1 == 0) {
        _DAT_01d71de0 = "..\\core\\podmain.cpp";
        _DAT_01d71de4 = 0x39;
        core_main_c_displayErrorAndQuit_FUN_004e4330("Can't mount %s: %s");
      }
      engine_dosio_cpp_CFileFinder_findNext_FUN_00465c20(&CStack_328);
    }
    engine_dosio_cpp_CFileFinder_closeSearch_FUN_00465ca0(&CStack_328);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00465b80(&CStack_328,0);
    return;
  }
  _fscanf(file,&DAT_005cca38);
  iVar1 = 0;
  if (0 < iStack_14) {
    do {
      _fscanf(file,&DAT_005cca3c);
      iVar2 = (*((this_ptr->base).vtable)->mount)(&this_ptr->base,acStack_214);
      if (iVar2 == 0) {
        _DAT_01d71de4 = 0x45;
        _DAT_01d71de0 = "..\\core\\podmain.cpp";
        core_main_c_displayErrorAndQuit_FUN_004e4330("Can't mount %s: %s");
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iStack_14);
  }
  _fclose(file);
  return;
}
