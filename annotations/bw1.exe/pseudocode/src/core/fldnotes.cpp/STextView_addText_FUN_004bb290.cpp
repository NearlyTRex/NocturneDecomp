// Name: core_fldnotes.cpp_STextView_addText_FUN_004bb290
// Address: 004bb290
// Address Range: [[004bb290, 004bb2e7]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_STextView_addText_FUN_004bb290(STextView *this_ptr,char *text)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_STextView_addText_FUN_004bb290(STextView *this_ptr,char *text)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *text;
  iVar3 = 0;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = core_fldnotes_cpp_STextView_layoutChunk_FUN_004bb2f0(this_ptr,text);
    if (iVar2 < 0) break;
    if (iVar2 < 1) {
      iVar3 = iVar3 + 1;
      if (1 < iVar3) {
        core_fldnotes_cpp_STextView_addText_FUN_004bb290
                  (this_ptr,"ERROR: item won't fit<br>");
        return 1;
      }
    }
    else {
      text = text + iVar2;
    }
    cVar1 = *text;
  }
  return 0;
}
