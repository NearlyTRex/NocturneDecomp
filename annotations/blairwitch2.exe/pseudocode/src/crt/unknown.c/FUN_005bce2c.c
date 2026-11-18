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
  
  g_EmergencyExitFlag = param_1;
  g_CurrentThreadTlsBlock = (byte *)FUN_005c293c(param_2);
  if (g_CurrentThreadTlsBlock == (byte *)0x0) {
    uVar8 = 0;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(1);
    }
  }
  else {
    FUN_005c0a90();
    g_EnvironmentStrings = GetEnvironmentStrings();
    g_EnvironmentBlock = (char **)0x0;
    DVar3 = GetVersion();
    g_WindowsMinorVersion = (byte)DVar3;
    g_WindowsPlatformVersion = (short)(DVar3 >> 0x10);
    g_WindowsPlatformVersionExt = (uint)(ushort)g_WindowsPlatformVersion;
    g_BYTE_0061f288 = (byte)(DVar3 >> 8);
    g_WindowsVersionLow = DVar3 & 0xff;
    g_WindowsVersionMid = (uint)g_BYTE_0061f288;
    g_WindowsVersionCombined = g_WindowsVersionLow << 8 | g_WindowsVersionMid;
    GetModuleFileNameA((HMODULE)0x0,g_ExeFileNameBuffer_A,0x104);
    g_ExeFileNameA = g_ExeFileNameBuffer_A;
    FUN_005c2c60(0,g_ExeFileNameBuffer_W,0x208);
    g_ExeFileNameW = g_ExeFileNameBuffer_W;
    pCVar4 = GetCommandLineA();
    g_CommandLineA = (char *)FUN_005c2d10(pCVar4);
    g_WinMainCmdShow = (int)g_CommandLineA;
    if (*g_CommandLineA == '\"') {
      cVar1 = g_CommandLineA[1];
      pcVar7 = g_CommandLineA;
      while ((g_WinMainCmdShow = (int)(pcVar7 + 1), cVar1 != '\"' &&
             (*(char *)g_WinMainCmdShow != '\0'))) {
        cVar1 = pcVar7[2];
        pcVar7 = (char *)g_WinMainCmdShow;
      }
      if (*(char *)g_WinMainCmdShow != '\0') {
        g_WinMainCmdShow = (int)(pcVar7 + 2);
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
    pWVar5 = GetCommandLineW();
    if (pWVar5 == (LPWSTR)0x0) {
      pcVar7 = g_EmptyStringBuffer;
    }
    else {
      g_CommandLineW = (WCHAR *)FUN_005c2d60(pWVar5);
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
    if (param_1 != 0) {
      GetModuleFileNameA(param_3,g_DllFileNameBuffer_A,0x104);
      g_DllFileNameA = g_DllFileNameBuffer_A;
      FUN_005c2c60(param_3,g_DllFileNameBuffer_W,0x208);
      g_DllFileNameW = g_DllFileNameBuffer_W;
    }
    uVar8 = 1;
  }
  return uVar8;
}
