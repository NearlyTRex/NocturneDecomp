// Name: crt_unknown.c_FUN_005a7f6c
// Address: 005a7f6c
// Address Range: [[005a7f6c, 005a81b5]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005a7f6c(int param_1,undefined4 param_2,HMODULE param_3)

#include "nocturne.h"

uint FUN_005a7f6c(int param_1,uint param_2,HMODULE param_3)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  LPSTR pCVar4;
  LPWSTR pWVar5;
  WCHAR *pWVar6;
  char *pcVar7;
  uint uVar8;
  
  g_INT_02d252b0 = param_1;
  g_PTR_02d252bc = (byte *)FUN_005adaac(param_2);
  if (g_PTR_02d252bc == (byte *)0x0) {
    uVar8 = 0;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(1);
    }
  }
  else {
    FUN_005abb90();
    g_CHAR_PTR_0060797d = GetEnvironmentStrings();
    g_CHAR_PTR_PTR_02d25924 = (char **)0x0;
    DVar3 = GetVersion();
    g_BYTE_00607983 = (byte)DVar3;
    g_SHORT_00607985 = (short)(DVar3 >> 0x10);
    g_UINT_00607987 = (uint)(ushort)g_SHORT_00607985;
    g_BYTE_00607984 = (byte)(DVar3 >> 8);
    g_UINT_0060798b = DVar3 & 0xff;
    g_UINT_0060798f = (uint)g_BYTE_00607984;
    g_UINT_00607993 = g_UINT_0060798b << 8 | g_UINT_0060798f;
    GetModuleFileNameA((HMODULE)0x0,g_CHAR_ARRAY_02d252c0,0x104);
    g_CHAR_PTR_00607944 = g_CHAR_ARRAY_02d252c0;
    FUN_005addd0(0,0x2d253c4,0x208);
    g_WCHAR_PTR_00607950 = (WCHAR *)0x2d253c4;
    pCVar4 = GetCommandLineA();
    g_CHAR_PTR_02d252b4 = (char *)FUN_005ade80(pCVar4);
    g_INT_00607940 = (int)g_CHAR_PTR_02d252b4;
    if (*g_CHAR_PTR_02d252b4 == '\"') {
      cVar1 = g_CHAR_PTR_02d252b4[1];
      pcVar7 = g_CHAR_PTR_02d252b4;
      while ((g_INT_00607940 = (int)(pcVar7 + 1), cVar1 != '\"' && (*(char *)g_INT_00607940 != '\0')
             )) {
        cVar1 = pcVar7[2];
        pcVar7 = (char *)g_INT_00607940;
      }
      if (*(char *)g_INT_00607940 != '\0') {
        g_INT_00607940 = (int)(pcVar7 + 2);
      }
    }
    else {
      for (; ((g_UCHAR_ARRAY_006074b8[(byte)(*(char *)g_INT_00607940 + 1)] & 2) == 0 &&
             (*(char *)g_INT_00607940 != '\0')); g_INT_00607940 = g_INT_00607940 + 1) {
      }
    }
    while ((g_UCHAR_ARRAY_006074b8[(byte)(*(char *)g_INT_00607940 + 1)] & 2) != 0) {
      g_INT_00607940 = g_INT_00607940 + 1;
    }
    pWVar5 = GetCommandLineW();
    if (pWVar5 == (LPWSTR)0x0) {
      pcVar7 = g_CHAR_ARRAY_005da848;
    }
    else {
      g_WCHAR_PTR_02d252b8 = (WCHAR *)FUN_005aded0(pWVar5);
      pcVar7 = (char *)g_WCHAR_PTR_02d252b8;
      if (*g_WCHAR_PTR_02d252b8 == L'\"') {
        WVar2 = g_WCHAR_PTR_02d252b8[1];
        pWVar6 = g_WCHAR_PTR_02d252b8;
        while ((pcVar7 = (char *)(pWVar6 + 1), WVar2 != L'\"' && (*(WCHAR *)pcVar7 != L'\0'))) {
          WVar2 = pWVar6[2];
          pWVar6 = (WCHAR *)pcVar7;
        }
        if (*(WCHAR *)pcVar7 != L'\0') {
          pcVar7 = (char *)(pWVar6 + 2);
        }
      }
      else {
        for (; ((g_UCHAR_ARRAY_006074b8[(byte)((char)*(WCHAR *)pcVar7 + 1)] & 2) == 0 &&
               (*(WCHAR *)pcVar7 != L'\0')); pcVar7 = (char *)((int)pcVar7 + 2)) {
        }
      }
      while ((g_UCHAR_ARRAY_006074b8[(byte)((char)*(WCHAR *)pcVar7 + 1)] & 2) != 0) {
        pcVar7 = (char *)((int)pcVar7 + 2);
      }
    }
    g_WCHAR_PTR_0060794c = (WCHAR *)pcVar7;
    if (param_1 != 0) {
      GetModuleFileNameA(param_3,g_CHAR_ARRAY_02d255cc,0x104);
      g_CHAR_PTR_00607948 = g_CHAR_ARRAY_02d255cc;
      FUN_005addd0(param_3,0x2d256d0,0x208);
      g_WCHAR_PTR_00607954 = (WCHAR *)0x2d256d0;
    }
    uVar8 = 1;
  }
  return uVar8;
}
