// Name: crt_startup.c_initialize_runtime_FUN_0060245c
// Address: 0060245c
// Address Range: [[0060245c, 006026a5]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c_initialize_runtime_FUN_0060245c(HMODULE hModule,void *pThreadParam,int unused)

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
  
  g_EmergencyExitFlag = (int)hModule;
  g_CurrentThreadTlsBlock = (void *)func_0x0060a23c(pThreadParam);
  if (g_CurrentThreadTlsBlock == (void *)0x0) {
    if (hModule == (HMODULE)0x0) {
      (*g_ExitProcessFunc)(1);
      return;
    }
  }
  else {
    func_0x00608b20();
    g_EnvironmentStrings = (*g_GetEnvironmentStringsFunc)();
    g_EnvironmentBlock = (char **)0x0;
    DVar3 = (*g_GetVersionFunc)();
    g_WindowsMinorVersion = (BYTE)DVar3;
    g_WindowsPlatformVersion = (WORD)(DVar3 >> 0x10);
    g_WindowsPlatformVersionExt = (uint)g_WindowsPlatformVersion;
    g_WindowsMajorVersion = (byte)(DVar3 >> 8);
    g_WindowsVersionLow = DVar3 & 0xff;
    g_WindowsVersionMid = (uint)g_WindowsMajorVersion;
    g_WindowsVersionCombined = g_WindowsVersionLow << 8 | g_WindowsVersionMid;
    (*g_GetModuleFileNameAFunc)((HMODULE)0x0,g_ExeFileNameBuffer_A,0x104);
    g_ExeFileNameA = g_ExeFileNameBuffer_A;
    func_0x0060a560(0,g_ExeFileNameBuffer_W,0x208);
    g_ExeFileNameW = g_ExeFileNameBuffer_W;
    pCVar4 = (*g_GetCommandLineAFunc)();
    g_CommandLineA = (char *)func_0x0060a610(pCVar4);
    g_WinMainCmdShow = (DWORD)g_CommandLineA;
    if (*g_CommandLineA == '\"') {
      cVar1 = g_CommandLineA[1];
      pcVar7 = g_CommandLineA;
      while ((g_WinMainCmdShow = (DWORD)(pcVar7 + 1), cVar1 != '\"' &&
             (*(char *)g_WinMainCmdShow != '\0'))) {
        cVar1 = pcVar7[2];
        pcVar7 = (char *)g_WinMainCmdShow;
      }
      if (*(char *)g_WinMainCmdShow != '\0') {
        g_WinMainCmdShow = (DWORD)(pcVar7 + 2);
      }
    }
    else {
      for (; ((g_CharacterClassificationTable[(byte)(*(char *)g_WinMainCmdShow + 1)] & 2) == 0 &&
             (*(char *)g_WinMainCmdShow != '\0')); g_WinMainCmdShow = g_WinMainCmdShow + 1) {
      }
    }
    while ((g_CharacterClassificationTable[(byte)(*(char *)g_WinMainCmdShow + 1)] & 2) != 0) {
      g_WinMainCmdShow = g_WinMainCmdShow + 1;
    }
    pWVar5 = (*g_GetCommandLineWFunc)();
    if (pWVar5 == (LPWSTR)0x0) {
      pcVar7 = g_EmptyStringBuffer;
    }
    else {
      g_CommandLineW = (WCHAR *)func_0x0060a660(pWVar5);
      pcVar7 = (char *)g_CommandLineW;
      if (*g_CommandLineW == L'\"') {
        WVar2 = g_CommandLineW[1];
        pWVar6 = g_CommandLineW;
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
    g_CommandLineArgsW = (WCHAR *)pcVar7;
    if (hModule != (HMODULE)0x0) {
      (*g_GetModuleFileNameAFunc)((HMODULE)unused,g_DllFileNameBuffer_A,0x104);
      g_DllFileNameA = g_DllFileNameBuffer_A;
      func_0x0060a560(unused,g_DllFileNameBuffer_W,0x208);
      g_DllFileNameW = g_DllFileNameBuffer_W;
    }
  }
  return;
}
