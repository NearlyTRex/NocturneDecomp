// Name: FUN_00510da0
// Address: 00510da0
// Address Range: [[00510da0, 00510e69]]
// Convention: unknown
// Signature: void FUN_00510da0(CPackedBitmapSet *param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_00510da0(CPackedBitmapSet *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *str1;
  char *pcVar3;
  
  if (param_1->filename[0] == '\0') {
    if (-1 < param_3) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0
                (param_1->bitmap_array + param_3,param_2);
      return;
    }
    iVar1 = 0;
    if (0 < param_1->bitmap_count) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0
                  ((CPackedBitmap *)(param_1->bitmap_array->filename + iVar2),param_2);
        iVar2 = iVar2 + 0x24;
      } while (iVar1 < param_1->bitmap_count);
    }
  }
  else {
    pcVar3 = param_1->filename;
    do {
      str1 = pcVar3;
      if (*pcVar3 == '.') goto LAB_00510e22;
      if (*pcVar3 == '\0') break;
      str1 = pcVar3 + 1;
      if (*str1 == '.') goto LAB_00510e22;
      pcVar3 = pcVar3 + 2;
    } while (*str1 != '\0');
    str1 = (char *)0x0;
LAB_00510e22:
    if (str1 != (char *)0x0) {
      iVar1 = _stricmp(str1,(char *)0x5cc269);
      if (iVar1 == 0) {
        cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_00510a90(param_1,param_2,param_3);
        return;
      }
      iVar1 = _stricmp(str1,(char *)0x5cc26e);
      if (iVar1 == 0) {
        FUN_00510d70(param_1,param_2,param_3);
        return;
      }
    }
  }
  return;
}
