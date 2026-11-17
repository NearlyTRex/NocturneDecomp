// Name: crt_startup.c_initialize_runtime_FUN_0056720c
// Address: 0056720c
// Address Range: [[0056720c, 00567455]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c_initialize_runtime_FUN_0056720c(HMODULE hModule,void *pThreadParam,int unused)

#include "nocturne.h"

void __cdecl initialize_runtime(HMODULE hModule,void *pThreadParam,int unused)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  LPSTR pCVar4;
  LPWSTR pWVar5;
  WCHAR *pWVar6;
  char *pcVar7;
  
  g_INT_02de4e30 = (int)hModule;
  g_PTR_02de4e3c = (byte *)FUN_0056e56c(pThreadParam);
  if (g_PTR_02de4e3c == (byte *)0x0) {
    if (hModule == (HMODULE)0x0) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(1);
    }
  }
  else {
    FUN_0056e1a0();
    g_CHAR_PTR_005c1d09 = GetEnvironmentStrings();
    g_CHAR_PTR_PTR_02de54a4 = (char **)0x0;
    DVar3 = GetVersion();
    g_BYTE_005c1d0f = (BYTE)DVar3;
    g_WORD_005c1d11 = (WORD)(DVar3 >> 0x10);
    g_UINT_005c1d13 = (uint)g_WORD_005c1d11;
    g_BYTE_005c1d10 = (byte)(DVar3 >> 8);
    g_UINT_005c1d17 = DVar3 & 0xff;
    g_UINT_005c1d1b = (uint)g_BYTE_005c1d10;
    g_UINT_005c1d1f = g_UINT_005c1d17 << 8 | g_UINT_005c1d1b;
    GetModuleFileNameA((HMODULE)0x0,g_CHAR_ARRAY_02de4e40,0x104);
    g_CHAR_PTR_005c1cd0 = g_CHAR_ARRAY_02de4e40;
    FUN_0056e890(0,g_WCHAR_T_ARRAY_02de4f44,0x208);
    g_WCHAR_PTR_005c1cdc = g_WCHAR_T_ARRAY_02de4f44;
    pCVar4 = GetCommandLineA();
    g_CHAR_PTR_02de4e34 = (char *)FUN_0056e940(pCVar4);
    g_DWORD_005c1ccc = (DWORD)g_CHAR_PTR_02de4e34;
    if (*g_CHAR_PTR_02de4e34 == '\"') {
      cVar1 = g_CHAR_PTR_02de4e34[1];
      pcVar7 = g_CHAR_PTR_02de4e34;
      while ((g_DWORD_005c1ccc = (DWORD)(pcVar7 + 1), cVar1 != '\"' &&
             (*(char *)g_DWORD_005c1ccc != '\0'))) {
        cVar1 = pcVar7[2];
        pcVar7 = (char *)g_DWORD_005c1ccc;
      }
      if (*(char *)g_DWORD_005c1ccc != '\0') {
        g_DWORD_005c1ccc = (DWORD)(pcVar7 + 2);
      }
    }
    else {
      for (; ((g_CharacterClassificationTable[(byte)(*(char *)g_DWORD_005c1ccc + 1)] & 2) == 0 &&
             (*(char *)g_DWORD_005c1ccc != '\0')); g_DWORD_005c1ccc = g_DWORD_005c1ccc + 1) {
      }
    }
    while ((g_CharacterClassificationTable[(byte)(*(char *)g_DWORD_005c1ccc + 1)] & 2) != 0) {
      g_DWORD_005c1ccc = g_DWORD_005c1ccc + 1;
    }
    pWVar5 = GetCommandLineW();
    if (pWVar5 == (LPWSTR)0x0) {
      pcVar7 = g_CHAR_ARRAY_00598b2c;
    }
    else {
      g_WCHAR_PTR_02de4e38 = (WCHAR *)FUN_0056e990(pWVar5);
      pcVar7 = (char *)g_WCHAR_PTR_02de4e38;
      if (*g_WCHAR_PTR_02de4e38 == L'\"') {
        WVar2 = g_WCHAR_PTR_02de4e38[1];
        pWVar6 = g_WCHAR_PTR_02de4e38;
        while ((pcVar7 = (char *)(pWVar6 + 1), WVar2 != L'\"' && (*(WCHAR *)pcVar7 != L'\0'))) {
          WVar2 = pWVar6[2];
          pWVar6 = (WCHAR *)pcVar7;
        }
        if (*(WCHAR *)pcVar7 != L'\0') {
          pcVar7 = (char *)(pWVar6 + 2);
        }
      }
      else {
        for (; ((g_CharacterClassificationTable[(byte)((char)*(WCHAR *)pcVar7 + 1)] & 2) == 0 &&
               (*(WCHAR *)pcVar7 != L'\0')); pcVar7 = (char *)((int)pcVar7 + 2)) {
        }
      }
      while ((g_CharacterClassificationTable[(byte)((char)*(WCHAR *)pcVar7 + 1)] & 2) != 0) {
        pcVar7 = (char *)((int)pcVar7 + 2);
      }
    }
    g_WCHAR_PTR_005c1cd8 = (WCHAR *)pcVar7;
    if (hModule != (HMODULE)0x0) {
      GetModuleFileNameA((HMODULE)unused,g_CHAR_ARRAY_02de514c,0x104);
      g_CHAR_PTR_005c1cd4 = g_CHAR_ARRAY_02de514c;
      FUN_0056e890(unused,g_WCHAR_T_ARRAY_02de5250,0x208);
      g_WCHAR_PTR_005c1ce0 = g_WCHAR_T_ARRAY_02de5250;
    }
  }
  return;
}
