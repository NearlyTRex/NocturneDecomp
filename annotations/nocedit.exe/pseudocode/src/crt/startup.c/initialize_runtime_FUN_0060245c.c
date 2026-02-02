// Name: crt_startup.c_initialize_runtime_FUN_0060245c
// Address: 0060245c
// Address Range: [[0060245c, 006026a5]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c_initialize_runtime_FUN_0060245c(HMODULE hModule,void *pThreadParam,int unused)

#include "nocturne.h"

void __cdecl
initialize_runtime(HMODULE hModule,void *pThreadParam,int unused)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  LPSTR str;
  LPWSTR str_00;
  WCHAR *pWVar4;
  char *pcVar5;
  void *unaff_EBP;
  int in_stack_00000004;
  HMODULE in_stack_0000000c;
  
  g_EmergencyExitFlag = in_stack_00000004;
  g_CurrentThreadTlsBlock = crt_startup_cpp_GetOrCreateThreadData_FUN_0060a23c(unaff_EBP);
  if (g_CurrentThreadTlsBlock == (void *)0x0) {
    if (in_stack_00000004 == 0) {
      (*g_ExitProcessFunc)(1);
      return;
    }
  }
  else {
    InitializeStandardHandles();
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
    GetModuleFileNameCompat((HMODULE)0x0,g_ExeFileNameBuffer_W,0x208);
    g_ExeFileNameW = g_ExeFileNameBuffer_W;
    str = (*g_GetCommandLineAFunc)();
    g_CommandLineA = strdup(str);
    g_WinMainCmdShow = (DWORD)g_CommandLineA;
    if (*g_CommandLineA == '\"') {
      cVar1 = g_CommandLineA[1];
      pcVar5 = g_CommandLineA;
      while ((g_WinMainCmdShow = (DWORD)(pcVar5 + 1), cVar1 != '\"' &&
             (*(char *)g_WinMainCmdShow != '\0'))) {
        cVar1 = pcVar5[2];
        pcVar5 = (char *)g_WinMainCmdShow;
      }
      if (*(char *)g_WinMainCmdShow != '\0') {
        g_WinMainCmdShow = (DWORD)(pcVar5 + 2);
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
    str_00 = (*g_GetCommandLineWFunc)();
    if (str_00 == (LPWSTR)0x0) {
      pcVar5 = g_EmptyStringBuffer;
    }
    else {
      g_CommandLineW = wcsdup(str_00);
      pcVar5 = (char *)g_CommandLineW;
      if (*g_CommandLineW == L'\"') {
        WVar2 = g_CommandLineW[1];
        pWVar4 = g_CommandLineW;
        while ((pcVar5 = (char *)(pWVar4 + 1), WVar2 != L'\"' && (*(WCHAR *)pcVar5 != L'\0'))) {
          WVar2 = pWVar4[2];
          pWVar4 = (WCHAR *)pcVar5;
        }
        if (*(WCHAR *)pcVar5 != L'\0') {
          pcVar5 = (char *)(pWVar4 + 2);
        }
      }
      else {
        for (; ((g_CharacterClassificationTable[(byte)((char)*(WCHAR *)pcVar5 + 1)] & 2) == 0 &&
               (*(WCHAR *)pcVar5 != L'\0')); pcVar5 = (char *)((int)pcVar5 + 2)) {
        }
      }
      while ((g_CharacterClassificationTable[(byte)((char)*(WCHAR *)pcVar5 + 1)] & 2) != 0) {
        pcVar5 = (char *)((int)pcVar5 + 2);
      }
    }
    g_CommandLineArgsW = (WCHAR *)pcVar5;
    if (in_stack_00000004 != 0) {
      (*g_GetModuleFileNameAFunc)(in_stack_0000000c,g_DllFileNameBuffer_A,0x104);
      g_DllFileNameA = g_DllFileNameBuffer_A;
      GetModuleFileNameCompat
                (in_stack_0000000c,g_DllFileNameBuffer_W,0x208);
      g_DllFileNameW = g_DllFileNameBuffer_W;
    }
  }
  return;
}
