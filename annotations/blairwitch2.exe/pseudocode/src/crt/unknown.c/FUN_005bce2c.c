// Name: crt_unknown.c_FUN_005bce2c
// Address: 005bce2c
// Address Range: [[005bce2c, 005bd075]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005bce2c(int param_1,undefined4 param_2,HMODULE param_3)

#include "nocturne.h"

uint FUN_005bce2c(int param_1,uint param_2,HMODULE param_3)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  LPSTR pCVar4;
  LPWSTR pWVar5;
  WCHAR *pWVar6;
  char *pcVar7;
  uint uVar8;
  
  g_INT_02680170 = param_1;
  g_PTR_0268017c = (byte *)FUN_005c293c(param_2);
  if (g_PTR_0268017c == (byte *)0x0) {
    uVar8 = 0;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(1);
    }
  }
  else {
    FUN_005c0a90();
    g_CHAR_PTR_0061f281 = GetEnvironmentStrings();
    g_CHAR_PTR_PTR_026807e4 = (char **)0x0;
    DVar3 = GetVersion();
    g_BYTE_0061f287 = (byte)DVar3;
    g_SHORT_0061f289 = (short)(DVar3 >> 0x10);
    g_UINT_0061f28b = (uint)(ushort)g_SHORT_0061f289;
    g_BYTE_0061f288 = (byte)(DVar3 >> 8);
    g_UINT_0061f28f = DVar3 & 0xff;
    g_UINT_0061f293 = (uint)g_BYTE_0061f288;
    g_UINT_0061f297 = g_UINT_0061f28f << 8 | g_UINT_0061f293;
    GetModuleFileNameA((HMODULE)0x0,g_CHAR_ARRAY_02680180,0x104);
    g_CHAR_PTR_0061f248 = g_CHAR_ARRAY_02680180;
    FUN_005c2c60(0,0x2680284,0x208);
    g_WCHAR_PTR_0061f254 = (WCHAR *)0x2680284;
    pCVar4 = GetCommandLineA();
    g_CHAR_PTR_02680174 = (char *)FUN_005c2d10(pCVar4);
    g_INT_0061f244 = (int)g_CHAR_PTR_02680174;
    if (*g_CHAR_PTR_02680174 == '\"') {
      cVar1 = g_CHAR_PTR_02680174[1];
      pcVar7 = g_CHAR_PTR_02680174;
      while ((g_INT_0061f244 = (int)(pcVar7 + 1), cVar1 != '\"' && (*(char *)g_INT_0061f244 != '\0')
             )) {
        cVar1 = pcVar7[2];
        pcVar7 = (char *)g_INT_0061f244;
      }
      if (*(char *)g_INT_0061f244 != '\0') {
        g_INT_0061f244 = (int)(pcVar7 + 2);
      }
    }
    else {
      for (; ((g_UCHAR_ARRAY_0061ed94[(byte)(*(char *)g_INT_0061f244 + 1)] & 2) == 0 &&
             (*(char *)g_INT_0061f244 != '\0')); g_INT_0061f244 = g_INT_0061f244 + 1) {
      }
    }
    while ((g_UCHAR_ARRAY_0061ed94[(byte)(*(char *)g_INT_0061f244 + 1)] & 2) != 0) {
      g_INT_0061f244 = g_INT_0061f244 + 1;
    }
    pWVar5 = GetCommandLineW();
    if (pWVar5 == (LPWSTR)0x0) {
      pcVar7 = g_CHAR_ARRAY_005f19e4;
    }
    else {
      g_WCHAR_PTR_02680178 = (WCHAR *)FUN_005c2d60(pWVar5);
      pcVar7 = (char *)g_WCHAR_PTR_02680178;
      if (*g_WCHAR_PTR_02680178 == L'\"') {
        WVar2 = g_WCHAR_PTR_02680178[1];
        pWVar6 = g_WCHAR_PTR_02680178;
        while ((pcVar7 = (char *)(pWVar6 + 1), WVar2 != L'\"' && (*(WCHAR *)pcVar7 != L'\0'))) {
          WVar2 = pWVar6[2];
          pWVar6 = (WCHAR *)pcVar7;
        }
        if (*(WCHAR *)pcVar7 != L'\0') {
          pcVar7 = (char *)(pWVar6 + 2);
        }
      }
      else {
        for (; ((g_UCHAR_ARRAY_0061ed94[(byte)((char)*(WCHAR *)pcVar7 + 1)] & 2) == 0 &&
               (*(WCHAR *)pcVar7 != L'\0')); pcVar7 = (char *)((int)pcVar7 + 2)) {
        }
      }
      while ((g_UCHAR_ARRAY_0061ed94[(byte)((char)*(WCHAR *)pcVar7 + 1)] & 2) != 0) {
        pcVar7 = (char *)((int)pcVar7 + 2);
      }
    }
    g_WCHAR_PTR_0061f250 = (WCHAR *)pcVar7;
    if (param_1 != 0) {
      GetModuleFileNameA(param_3,g_CHAR_ARRAY_0268048c,0x104);
      g_CHAR_PTR_0061f24c = g_CHAR_ARRAY_0268048c;
      FUN_005c2c60(param_3,0x2680590,0x208);
      g_WCHAR_PTR_0061f258 = (WCHAR *)0x2680590;
    }
    uVar8 = 1;
  }
  return uVar8;
}
