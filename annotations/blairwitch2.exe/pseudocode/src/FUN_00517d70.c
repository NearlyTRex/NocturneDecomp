// Name: FUN_00517d70
// Address: 00517d70
// Address Range: [[00517d70, 00517e39]]
// Convention: unknown
// Signature: void FUN_00517d70(CPackedBitmapSet *param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_00517d70(CPackedBitmapSet *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *str1;
  char *pcVar3;
  
  if (param_1->filename[0] == '\0') {
    if (-1 < param_3) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_00516d70
                (param_1->bitmap_array + param_3,param_2);
      return;
    }
    iVar1 = 0;
    if (0 < param_1->bitmap_count) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_00516d70
                  ((CPackedBitmap *)(param_1->bitmap_array->filename + iVar2),param_2);
        iVar2 = iVar2 + 0x24;
      } while (iVar1 < param_1->bitmap_count);
    }
  }
  else {
    pcVar3 = param_1->filename;
    do {
      str1 = pcVar3;
      if (*pcVar3 == '.') goto LAB_00517df2;
      if (*pcVar3 == '\0') break;
      str1 = pcVar3 + 1;
      if (*str1 == '.') goto LAB_00517df2;
      pcVar3 = pcVar3 + 2;
    } while (*str1 != '\0');
    str1 = (char *)0x0;
LAB_00517df2:
    if (str1 != (char *)0x0) {
      iVar1 = _stricmp(str1,(char *)0x5e21a6);
      if (iVar1 == 0) {
        cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_00517a60(param_1,param_2,param_3);
        return;
      }
      iVar1 = _stricmp(str1,(char *)0x5e21ab);
      if (iVar1 == 0) {
        FUN_00517d40(param_1,param_2,param_3);
        return;
      }
    }
  }
  return;
}
