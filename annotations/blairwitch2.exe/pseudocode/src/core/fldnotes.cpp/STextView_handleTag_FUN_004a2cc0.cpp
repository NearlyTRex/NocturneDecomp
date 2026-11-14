// Name: core_fldnotes.cpp_STextView_handleTag_FUN_004a2cc0
// Address: 004a2cc0
// Address Range: [[004a2cc0, 004a3091]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_STextView_handleTag_FUN_004a2cc0(STextView *this_ptr,char *tag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fldnotes_cpp_STextView_handleTag_FUN_004a2cc0(STextView *this_ptr,char *tag)

{
  int iVar1;
  int iVar2;
  SPageResourceBitmap *this_ptr_00;
  SPageResourceBitmap *resource;
  SPageResourceTwanaCharacter *this_ptr_01;
  SPageResourceTwanaEntry *resource_00;
  SPageResourceTwanaEntry *this_ptr_02;
  char local_220 [256];
  char local_120 [256];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = _stricmp(tag,&DAT_005d5b91);
  if (iVar1 == 0) {
    if ((this_ptr->margin_left != this_ptr->cursor_x) ||
       (this_ptr->margin_top != this_ptr->cursor_y)) {
      core_fldnotes_cpp_STextView_newLine_FUN_004a2bf0(this_ptr);
    }
    iVar1 = 1;
  }
  else {
    iVar1 = _stricmp(tag,&DAT_005d5b94);
    if (iVar1 == 0) {
      core_fldnotes_cpp_STextView_newPage_FUN_004a2c90(this_ptr);
      return 1;
    }
    iVar1 = _stricmp(tag,&DAT_005d5b97);
    if (iVar1 == 0) {
      this_ptr->underline = 1;
      return 1;
    }
    iVar1 = _stricmp(tag,&DAT_005d5b9a);
    if (iVar1 == 0) {
      this_ptr->underline = 0;
      return 1;
    }
    iVar1 = _strnicmp(tag,"image",5);
    if (iVar1 != 0) {
      iVar1 = _strnicmp(tag,"twanachar",9);
      if (iVar1 == 0) {
        local_14 = -1;
        sscanf(tag + 9," %s%n");
        if (local_14 < 3) {
          _sprintf(&DAT_01cab7f0,"Error parsing 'twanachar' parms: '%s'");
          return -1;
        }
        this_ptr_01 = (SPageResourceTwanaCharacter *)operator_new(0x4c);
        resource_00 = (SPageResourceTwanaEntry *)0x0;
        if (this_ptr_01 != (SPageResourceTwanaCharacter *)0x0) {
          resource_00 = (SPageResourceTwanaEntry *)
                        core_fldnotes_cpp_SPageResourceTwanaCharacter_ctor_FUN_004a2290
                                  (this_ptr_01,local_220);
        }
        if (resource_00 == (SPageResourceTwanaEntry *)0x0) {
          _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
          _DAT_01d046a4 = 0x5c7;
          core_main_c_FUN_004e4500("Out of memory");
        }
        iVar1 = core_fldnotes_cpp_STextView_ensureSpace_FUN_004a30a0
                          (this_ptr,(((SPageResourceBitmap *)&resource_00->base)->base).width,
                           (((SPageResourceBitmap *)&resource_00->base)->base).height);
        if (iVar1 != 0) {
          (((SPageResourceBitmap *)&resource_00->base)->base).x = this_ptr->cursor_x;
          (((SPageResourceBitmap *)&resource_00->base)->base).y = this_ptr->cursor_y;
          this_ptr->cursor_x =
               this_ptr->cursor_x + (((SPageResourceBitmap *)&resource_00->base)->base).width;
          core_fldnotes_cpp_STextView_addResource_FUN_004a2bb0(this_ptr,&resource_00->base);
          return 1;
        }
      }
      else {
        iVar1 = _stricmp(tag,"twanaentry");
        if (iVar1 != 0) {
          _sprintf(&DAT_01cab7f0,"Ignoring unknown markup tag: %s");
          return -1;
        }
        this_ptr_02 = (SPageResourceTwanaEntry *)operator_new(0x114);
        resource_00 = (SPageResourceTwanaEntry *)0x0;
        if (this_ptr_02 != (SPageResourceTwanaEntry *)0x0) {
          resource_00 = core_fldnotes_cpp_SPageResourceTwanaEntry_ctor_FUN_004a23c0(this_ptr_02);
        }
        if (resource_00 == (SPageResourceTwanaEntry *)0x0) {
          _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
          _DAT_01d046a4 = 0x5df;
          core_main_c_FUN_004e4500("Out of memory");
        }
        iVar1 = core_fldnotes_cpp_STextView_ensureSpace_FUN_004a30a0
                          (this_ptr,(((SPageResourceBitmap *)&resource_00->base)->base).width,
                           (((SPageResourceBitmap *)&resource_00->base)->base).height);
        if (iVar1 != 0) {
          (((SPageResourceBitmap *)&resource_00->base)->base).x = this_ptr->cursor_x;
          (((SPageResourceBitmap *)&resource_00->base)->base).y = this_ptr->cursor_y;
          this_ptr->cursor_x =
               this_ptr->cursor_x + (((SPageResourceBitmap *)&resource_00->base)->base).width;
          core_fldnotes_cpp_STextView_addResource_FUN_004a2bb0(this_ptr,&resource_00->base);
          return 1;
        }
      }
      (**(code **)(((SPageResourceBitmap *)&resource_00->base)->base).vtable)(resource_00,2);
      return 0;
    }
    local_18 = -1;
    sscanf(tag + 5,"%s %d %d%n");
    if (local_18 < 3) {
      _sprintf(&DAT_01cab7f0,"Error parsing 'image' tag parms: '%s'");
      return -1;
    }
    iVar2 = core_fldnotes_cpp_STextView_ensureSpace_FUN_004a30a0(this_ptr,local_20,local_1c);
    iVar1 = 0;
    if (iVar2 != 0) {
      this_ptr_00 = (SPageResourceBitmap *)operator_new(0x2c);
      resource = (SPageResourceBitmap *)0x0;
      if (this_ptr_00 != (SPageResourceBitmap *)0x0) {
        resource = core_fldnotes_cpp_SPageResourceBitmap_ctorFromFile_FUN_004a2170
                             (this_ptr_00,local_120,local_20,local_1c);
      }
      if (resource == (SPageResourceBitmap *)0x0) {
        _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
        _DAT_01d046a4 = 0x5b1;
        core_main_c_FUN_004e4500("Out of memory");
      }
      (resource->base).x = this_ptr->cursor_x;
      (resource->base).y = this_ptr->cursor_y;
      this_ptr->cursor_x = this_ptr->cursor_x + local_20;
      core_fldnotes_cpp_STextView_addResource_FUN_004a2bb0(this_ptr,&resource->base);
      return 1;
    }
  }
  return iVar1;
}
