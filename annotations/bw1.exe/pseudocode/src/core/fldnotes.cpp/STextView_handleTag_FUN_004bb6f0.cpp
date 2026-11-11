// Name: core_fldnotes.cpp_STextView_handleTag_FUN_004bb6f0
// Address: 004bb6f0
// Address Range: [[004bb6f0, 004bbac1]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_STextView_handleTag_FUN_004bb6f0(STextView *this_ptr,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_fldnotes_cpp_STextView_handleTag_FUN_004bb6f0(STextView *this_ptr,char *param_2)

{
  int iVar1;
  uint uVar2;
  SPageResourceBitmap *this_ptr_00;
  int *piVar3;
  SPageResourceTwanaCharacter *this_ptr_01;
  SPageResourceTwanaEntry *pSVar4;
  SPageResourceTwanaEntry *this_ptr_02;
  char local_220 [256];
  char local_120 [256];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = _stricmp(param_2,&DAT_005dfa0c);
  if (iVar1 == 0) {
    if ((this_ptr->margin_left != this_ptr->cursor_x) ||
       (this_ptr->margin_top != this_ptr->cursor_y)) {
      core_fldnotes_cpp_STextView_newLine_FUN_004bb630(this_ptr);
    }
    uVar2 = 1;
  }
  else {
    iVar1 = _stricmp(param_2,&DAT_005dfa0f);
    if (iVar1 == 0) {
      core_fldnotes_cpp_STextView_newPage_FUN_004bb6c0(this_ptr);
      return 1;
    }
    iVar1 = _stricmp(param_2,&DAT_005dfa12);
    if (iVar1 == 0) {
      this_ptr->underline = 1;
      return 1;
    }
    iVar1 = _stricmp(param_2,&DAT_005dfa15);
    if (iVar1 == 0) {
      this_ptr->underline = 0;
      return 1;
    }
    iVar1 = _strnicmp(param_2,"image",5);
    if (iVar1 != 0) {
      iVar1 = _strnicmp(param_2,"twanachar",9);
      if (iVar1 == 0) {
        local_14 = -1;
        sscanf(param_2 + 9," %s%n");
        if (local_14 < 3) {
          _sprintf(&DAT_01cc4270,"Error parsing 'twanachar' parms: '%s'");
          return 0xffffffff;
        }
        this_ptr_01 = (SPageResourceTwanaCharacter *)operator_new(0x4c);
        pSVar4 = (SPageResourceTwanaEntry *)0x0;
        if (this_ptr_01 != (SPageResourceTwanaCharacter *)0x0) {
          pSVar4 = (SPageResourceTwanaEntry *)
                   core_fldnotes_cpp_SPageResourceTwanaCharacter_ctor_FUN_004bab60
                             (this_ptr_01,local_220);
        }
        if (pSVar4 == (SPageResourceTwanaEntry *)0x0) {
          _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
          _DAT_01d1d404 = 0x620;
          core_main_c_FUN_005030e0("Out of memory");
        }
        iVar1 = core_fldnotes_cpp_STextView_ensureSpace_FUN_004bbad0
                          (this_ptr,(pSVar4->base).width,(pSVar4->base).height);
        if (iVar1 != 0) {
          (pSVar4->base).x = this_ptr->cursor_x;
          (pSVar4->base).y = this_ptr->cursor_y;
          this_ptr->cursor_x = this_ptr->cursor_x + (pSVar4->base).width;
          core_fldnotes_cpp_STextView_addResource_FUN_004bb5f0(this_ptr,pSVar4);
          return 1;
        }
      }
      else {
        iVar1 = _stricmp(param_2,"twanaentry");
        if (iVar1 != 0) {
          _sprintf(&DAT_01cc4270,"Ignoring unknown markup tag: %s");
          return 0xffffffff;
        }
        this_ptr_02 = (SPageResourceTwanaEntry *)operator_new(0x118);
        pSVar4 = (SPageResourceTwanaEntry *)0x0;
        if (this_ptr_02 != (SPageResourceTwanaEntry *)0x0) {
          pSVar4 = core_fldnotes_cpp_SPageResourceTwanaEntry_ctor_FUN_004bac90(this_ptr_02);
        }
        if (pSVar4 == (SPageResourceTwanaEntry *)0x0) {
          _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
          _DAT_01d1d404 = 0x638;
          core_main_c_FUN_005030e0("Out of memory");
        }
        iVar1 = core_fldnotes_cpp_STextView_ensureSpace_FUN_004bbad0
                          (this_ptr,(pSVar4->base).width,(pSVar4->base).height);
        if (iVar1 != 0) {
          (pSVar4->base).x = this_ptr->cursor_x;
          (pSVar4->base).y = this_ptr->cursor_y;
          this_ptr->cursor_x = this_ptr->cursor_x + (pSVar4->base).width;
          core_fldnotes_cpp_STextView_addResource_FUN_004bb5f0(this_ptr,pSVar4);
          return 1;
        }
      }
      (**(code **)(pSVar4->base).vtable)(pSVar4,2);
      return 0;
    }
    local_18 = -1;
    sscanf(param_2 + 5,"%s %d %d%n");
    if (local_18 < 3) {
      _sprintf(&DAT_01cc4270,"Error parsing 'image' tag parms: '%s'");
      return 0xffffffff;
    }
    iVar1 = core_fldnotes_cpp_STextView_ensureSpace_FUN_004bbad0(this_ptr,local_20,local_1c);
    uVar2 = 0;
    if (iVar1 != 0) {
      this_ptr_00 = (SPageResourceBitmap *)operator_new(0x2c);
      piVar3 = (int *)0x0;
      if (this_ptr_00 != (SPageResourceBitmap *)0x0) {
        piVar3 = core_fldnotes_cpp_SPageResourceBitmap_ctorFromFile_FUN_004baa40
                           (this_ptr_00,local_120,local_20,local_1c);
      }
      if (piVar3 == (int *)0x0) {
        _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
        _DAT_01d1d404 = 0x60a;
        core_main_c_FUN_005030e0("Out of memory");
      }
      *piVar3 = this_ptr->cursor_x;
      piVar3[1] = this_ptr->cursor_y;
      this_ptr->cursor_x = this_ptr->cursor_x + local_20;
      core_fldnotes_cpp_STextView_addResource_FUN_004bb5f0(this_ptr,piVar3);
      return 1;
    }
  }
  return uVar2;
}
