// Name: shape_edittool.cpp_CPickList_ctor_FUN_00481fc0
// Address: 00481fc0
// Address Range: [[00481fc0, 004820af]]
// Convention: __cdecl
// Signature: CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(CPickList *this_ptr)

#include "nocturne.h"

CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(CPickList *this_ptr)

{
  char cVar1;
  CStrList *pCVar2;
  CEdScrollBar *pCVar3;
  CEdButton *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = shape_edittool_cpp_CStrList_ctor_FUN_00480d20((CStrList *)this_ptr);
  pCVar3 = shape_edittool_cpp_CEdScrollBar_ctor_FUN_00484310
                     ((CEdScrollBar *)&pCVar2[0x1b].field_0xc);
  pCVar4 = shape_edittool_cpp_CEdButton_ctor_FUN_00484e20((CEdButton *)(pCVar3 + 0x38));
  pCVar4 = shape_edittool_cpp_CEdButton_ctor_FUN_00484e20(pCVar4 + 1);
  *(byte ***)&pCVar4[-4].field_0xc4 = &g_CPickListVTable;
  *(uint *)&pCVar4[-2].field_0xe0 = 0;
  *(uint *)(pCVar4 + 1) = 0xffffffff;
  *(uint *)&pCVar4[-2].field_0x9c = 0;
  *(uint *)&pCVar4[-2].field_0xa0 = 0;
  *(uint *)&pCVar4[-2].field_0xa4 = 0;
  *(uint *)&pCVar4[-2].field_0xa8 = 0;
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d286c);
  pcVar6 = &pCVar4[-3].field_0x30;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Cancel");
  pcVar6 = &pCVar4[-3].field_0x94;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar4[-3].field_0x28 = 0xffffffff;
  *(uint *)&pCVar4[-3].field_0x2c = 0;
  return (CPickList *)&pCVar4[-4].field_0xb8;
}
