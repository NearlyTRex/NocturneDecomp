// Name: crt_unknown.c_FUN_005c50fc
// Address: 005c50fc
// Address Range: [[005c50fc, 005c5345]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c50fc(int param_1,undefined4 param_2,HMODULE param_3)

#include "nocturne.h"

uint FUN_005c50fc(int param_1,uint param_2,HMODULE param_3)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  LPSTR pCVar4;
  LPWSTR pWVar5;
  WCHAR *pWVar6;
  char *pcVar7;
  uint uVar8;
  
  g_INT_02c9f060 = param_1;
  g_PTR_02c9f06c = (byte *)FUN_005cac3c(param_2);
  if (g_PTR_02c9f06c == (byte *)0x0) {
    uVar8 = 0;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(1);
    }
  }
  else {
    FUN_005c8d50();
    g_CHAR_PTR_006265d9 = GetEnvironmentStrings();
    g_CHAR_PTR_PTR_02c9f6d4 = (char **)0x0;
    DVar3 = GetVersion();
    g_BYTE_006265df = (byte)DVar3;
    g_SHORT_006265e1 = (short)(DVar3 >> 0x10);
    g_UINT_006265e3 = (uint)(ushort)g_SHORT_006265e1;
    g_BYTE_006265e0 = (byte)(DVar3 >> 8);
    g_UINT_006265e7 = DVar3 & 0xff;
    g_UINT_006265eb = (uint)g_BYTE_006265e0;
    g_UINT_006265ef = g_UINT_006265e7 << 8 | g_UINT_006265eb;
    GetModuleFileNameA((HMODULE)0x0,g_CHAR_ARRAY_02c9f070,0x104);
    g_CHAR_PTR_006265a0 = g_CHAR_ARRAY_02c9f070;
    FUN_005caf60(0,g_WCHAR_T_ARRAY_02c9f174,0x208);
    g_WCHAR_PTR_006265ac = g_WCHAR_T_ARRAY_02c9f174;
    pCVar4 = GetCommandLineA();
    g_CHAR_PTR_02c9f064 = (char *)FUN_005cb010(pCVar4);
    g_INT_0062659c = (int)g_CHAR_PTR_02c9f064;
    if (*g_CHAR_PTR_02c9f064 == '\"') {
      cVar1 = g_CHAR_PTR_02c9f064[1];
      pcVar7 = g_CHAR_PTR_02c9f064;
      while ((g_INT_0062659c = (int)(pcVar7 + 1), cVar1 != '\"' && (*(char *)g_INT_0062659c != '\0')
             )) {
        cVar1 = pcVar7[2];
        pcVar7 = (char *)g_INT_0062659c;
      }
      if (*(char *)g_INT_0062659c != '\0') {
        g_INT_0062659c = (int)(pcVar7 + 2);
      }
    }
    else {
      for (; ((g_UCHAR_ARRAY_00626114[(byte)(*(char *)g_INT_0062659c + 1)] & 2) == 0 &&
             (*(char *)g_INT_0062659c != '\0')); g_INT_0062659c = g_INT_0062659c + 1) {
      }
    }
    while ((g_UCHAR_ARRAY_00626114[(byte)(*(char *)g_INT_0062659c + 1)] & 2) != 0) {
      g_INT_0062659c = g_INT_0062659c + 1;
    }
    pWVar5 = GetCommandLineW();
    if (pWVar5 == (LPWSTR)0x0) {
      pcVar7 = g_CHAR_ARRAY_005fab8c;
    }
    else {
      g_WCHAR_PTR_02c9f068 = (WCHAR *)FUN_005cb060(pWVar5);
      pcVar7 = (char *)g_WCHAR_PTR_02c9f068;
      if (*g_WCHAR_PTR_02c9f068 == L'\"') {
        WVar2 = g_WCHAR_PTR_02c9f068[1];
        pWVar6 = g_WCHAR_PTR_02c9f068;
        while ((pcVar7 = (char *)(pWVar6 + 1), WVar2 != L'\"' && (*(WCHAR *)pcVar7 != L'\0'))) {
          WVar2 = pWVar6[2];
          pWVar6 = (WCHAR *)pcVar7;
        }
        if (*(WCHAR *)pcVar7 != L'\0') {
          pcVar7 = (char *)(pWVar6 + 2);
        }
      }
      else {
        for (; ((g_UCHAR_ARRAY_00626114[(byte)((char)*(WCHAR *)pcVar7 + 1)] & 2) == 0 &&
               (*(WCHAR *)pcVar7 != L'\0')); pcVar7 = (char *)((int)pcVar7 + 2)) {
        }
      }
      while ((g_UCHAR_ARRAY_00626114[(byte)((char)*(WCHAR *)pcVar7 + 1)] & 2) != 0) {
        pcVar7 = (char *)((int)pcVar7 + 2);
      }
    }
    g_WCHAR_PTR_006265a8 = (WCHAR *)pcVar7;
    if (param_1 != 0) {
      GetModuleFileNameA(param_3,g_CHAR_ARRAY_02c9f37c,0x104);
      g_CHAR_PTR_006265a4 = g_CHAR_ARRAY_02c9f37c;
      FUN_005caf60(param_3,g_WCHAR_T_ARRAY_02c9f480,0x208);
      g_WCHAR_PTR_006265b0 = g_WCHAR_T_ARRAY_02c9f480;
    }
    uVar8 = 1;
  }
  return uVar8;
}
