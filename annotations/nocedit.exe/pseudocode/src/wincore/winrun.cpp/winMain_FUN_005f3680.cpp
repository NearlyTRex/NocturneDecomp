// Name: wincore_winrun.cpp_winMain_FUN_005f3680
// Address: 005f3680
// Address Range: [[005f3680, 005f3915]]
// Convention: __stdcall
// Signature: int wincore_winrun.cpp_winMain_FUN_005f3680(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow1, int nCmdShow2)
// Cross-references:
//   crt_startup.cpp_WinMainBootstrap_FUN_00609e70 (00609e70) at 00609f0d [UNCONDITIONAL_CALL]
// Globals:
//   GetStockObject* GetStockObject = 002117a0
//   timeGetTime* timeGetTime = 00211884
//   BringWindowToTop* BringWindowToTop = 00211a42
//   CreateWindowExA* CreateWindowExA = 00211a7a
//   GetLastActivePopup* GetLastActivePopup = 00211af6
//   IsIconic* IsIconic = 00211b1e
//   LoadCursorA* LoadCursorA = 00211b2a
//   LoadIconA* LoadIconA = 00211b38
//   RegisterClassA* RegisterClassA = 00211b92
//   SetForegroundWindow* SetForegroundWindow = 00211be0
//   ShowWindow* ShowWindow = 00211c06
//   UpdateWindow* UpdateWindow = 00211c28
//   GetCommandLineA* GetCommandLineA = 00211df8
//   GetCurrentDirectoryA* GetCurrentDirectoryA = 00211e42
//   GetCurrentProcess* GetCurrentProcess = 00211e5a
//   GetModuleFileNameA* GetModuleFileNameA = 00211f42
//   GlobalMemoryStatus* GlobalMemoryStatus = 00212002
//   SetCurrentDirectoryA* SetCurrentDirectoryA = 00212138
//   SetThreadPriority* SetThreadPriority = 002121f6
//   TerminatedCString s_Nocturne_Editor_006581a7
//   TerminatedCString s_Nocturne_Editor_006581b7
//   char* g_ApplicationTitle = 006581a7
//   char* g_ApplicationTimerTitle = 006581b7
//   HWND g_MainWindowHandle
//   int g_TotalPhysicalMemory
//   int[513] g_MessageFlags
//   undefined4 g_WindowMessageHandlers[3]+3
//   char[256] g_ModuleFileName
//   undefined4 CHAR_ARRAY_03f98df1
//   char[256] g_CurrentDirectory
//   byte g_CommandLineBuffer
//   undefined1 DAT_03f98ff1
//   undefined1 DAT_03f98ff2
//   undefined1 DAT_03f98ff3
//   undefined1 DAT_03f98ff4
//   int g_ArgCount
//   char*[128] g_ArgVector
//   GroupIconResource Rsrc_GroupIcon_65_0 = GroupIcon
// Function calls:
//   BringWindowToTop
//   core_main.c_enterMainGameMenu_FUN_00512f40
//   core_main.c_finalizeGameSystems_FUN_00508570
//   core_main.c_initializeGameSystems_FUN_00507a60
//   CreateWindowExA
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdlib.c_srand_FUN_005feb80
//   GetCommandLineA
//   GetCurrentDirectoryA
//   GetModuleFileNameA
//   GetStockObject
//   GlobalMemoryStatus
//   IsIconic
//   LoadCursorA
//   RegisterClassA
//   SetCurrentDirectoryA
//   SetForegroundWindow
//   SetThreadPriority
//   ShowWindow
//   timeGetTime
//   UpdateWindow

#include "nocturne.h"

int __stdcall
wincore_winrun_cpp_winMain_FUN_005f3680
          (HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow1,int nCmdShow2)

{
  char cVar1;
  byte bVar2;
  HWND existingWindow;
  HWND activePopup;
  BOOL BVar3;
  DWORD seed;
  byte *pbVar4;
  byte *pbVar5;
  HANDLE currentProcess;
  int iVar6;
  uint uVar7;
  WNDCLASSA *stackProbe;
  BADSPACEBASE *in_ESP;
  byte *pbVar8;
  char *pcVar9;
  byte bVar10;
  WNDCLASSA windowClass;
  _MEMORYSTATUS memStatus;
  
  bVar10 = 0;
  existingWindow = (*FindWindowA)(g_ApplicationTitle,(LPCSTR)0x0);
  stackProbe = &windowClass;
  if (existingWindow != (HWND)0x0) {
    activePopup = (*GetLastActivePopup)(existingWindow);
    if (activePopup != (HWND)0x0) {
      existingWindow = activePopup;
    }
    (*BringWindowToTop)(existingWindow);
    BVar3 = (*IsIconic)(existingWindow);
    if (BVar3 != 0) {
      (*ShowWindow)(existingWindow,9);
    }
    (*SetForegroundWindow)(existingWindow);
    return 0;
  }
  do {
    iVar6 = *(int *)stackProbe;
    stackProbe = (WNDCLASSA *)((int)stackProbe + -0x80);
  } while (iVar6 < (int)stackProbe);
  seed = (*timeGetTime)();
  crt_stdlib_c_srand_FUN_005feb80(seed);
  pbVar8 = &g_CommandLineBuffer;
  pbVar4 = (byte *)(*GetCommandLineA)();
  do {
    bVar2 = *pbVar4;
    *pbVar8 = bVar2;
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    pbVar4 = pbVar4 + 2;
    pbVar8[1] = bVar2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  pbVar4 = &g_CommandLineBuffer;
  if (g_CommandLineBuffer != 0) {
    pbVar8 = pbVar4;
    iVar6 = g_ArgCount << 2;
    do {
      do {
        pbVar5 = pbVar8;
        pbVar8 = pbVar5 + 1;
      } while (0x20 < *pbVar5);
      *pbVar5 = 0;
      g_ArgCount = g_ArgCount + 1;
      *(byte **)((int)g_ArgVector + iVar6) = pbVar4;
      bVar2 = *pbVar8;
      pbVar4 = pbVar8;
      while (bVar2 == 0x20) {
        pbVar8 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bVar2 = *pbVar8;
      }
      pbVar8 = pbVar4;
      iVar6 = iVar6 + 4;
    } while (*pbVar4 != 0);
  }
  (*GetCurrentDirectoryA)(0x100,g_CurrentDirectory);
  (*GetModuleFileNameA)(hInstance,g_ModuleFileName,0x100);
  uVar7 = 0xffffffff;
  pcVar9 = g_ModuleFileName;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  do {
    uVar7 = uVar7 - 1;
    if ((int)uVar7 < 1) goto LAB_005f37d1;
  } while (g_ModuleFileName[uVar7] != '\\');
  g_ModuleFileName[uVar7] = '\0';
LAB_005f37d1:
  (*SetCurrentDirectoryA)(g_ModuleFileName);
  windowClass.lpfnWndProc = wincore_winrun_cpp_mainWindowProc_FUN_005f3150;
  windowClass.cbClsExtra = 0;
  windowClass.cbWndExtra = 0;
  windowClass.hInstance = hInstance;
  windowClass.style = 3;
  windowClass.hIcon = (*LoadIconA)(hInstance,(LPCSTR)0x65);
  windowClass.hCursor = (*LoadCursorA)((HINSTANCE)0x0,(LPCSTR)0x7f00);
  windowClass.hbrBackground = (HBRUSH)(*GetStockObject)(4);
  windowClass.lpszClassName = g_ApplicationTitle;
  windowClass.lpszMenuName = (LPCSTR)0x0;
  (*RegisterClassA)(&windowClass);
  g_MainWindowHandle =
       (*CreateWindowExA)(0x40000,g_ApplicationTitle,g_ApplicationTimerTitle,0x80000000,0,0,0,0,
                          (HWND)0x0,(HMENU)0x0,hInstance,(LPVOID)0x0);
  if (g_MainWindowHandle == (HWND)0x0) {
    return 0;
  }
  (*ShowWindow)(g_MainWindowHandle,nCmdShow1);
  (*UpdateWindow)(g_MainWindowHandle);
  currentProcess = (*GetCurrentProcess)();
  (*SetThreadPriority)(currentProcess,1);
  crt_memory_c_memset_FUN_005fde40(&memStatus,0,0x20);
  memStatus.dwLength = 0x20;
  (*GlobalMemoryStatus)(&memStatus);
  g_TotalPhysicalMemory = memStatus.dwTotalPhys;
  g_MessageFlags[0] = memStatus.dwAvailPageFile;
  core_main_c_initializeGameSystems_FUN_00507a60();
  core_main_c_enterMainGameMenu_FUN_00512f40();
  core_main_c_finalizeGameSystems_FUN_00508570();
  return 0;
}


// Assembly code:
// 005f3680: PUSH EBX
//   Label: wincore_winrun.cpp_winMain_FUN_005f3680
// 005f3681: PUSH ESI
// 005f3682: PUSH EDI
// 005f3683: PUSH EBP
// 005f3684: SUB ESP,0x48
// 005f3687: MOV EBP,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x4] (READ)
// 005f368b: PUSH 0x0
// 005f368d: MOV EDX,dword ptr [0x0068499c]
//   XREF to: 006581a7 (PARAM)
//   XREF to: 0068499c (READ)
// 005f3693: PUSH EDX
//   XREF to: 006581a7 (DATA)
// 005f3694: CALL dword ptr CS:[0x6114a0]
//   XREF to: register:00000000 (WRITE)
//   XREF to: 006114a0 (READ)
// 005f369b: MOV EDI,EAX
// 005f369d: TEST EAX,EAX
// 005f369f: JZ 0x005f36e1
//   XREF to: 005f36e1 (CONDITIONAL_JUMP)
// 005f36a1: PUSH EAX
// 005f36a2: CALL dword ptr CS:[0x6114b0]
//   XREF to: register:00000000 (WRITE)
//   XREF to: 006114b0 (READ)
// 005f36a9: TEST EAX,EAX
// 005f36ab: JZ 0x005f36af
//   XREF to: 005f36af (CONDITIONAL_JUMP)
// 005f36ad: MOV EDI,EAX
// 005f36af: PUSH EDI
//   Label: LAB_005f36af
// 005f36b0: CALL dword ptr CS:[0x611488]
//   XREF to: EXTERNAL:0000002e (COMPUTED_CALL)
//   XREF to: 00611488 (READ)
// 005f36b7: PUSH EDI
// 005f36b8: CALL dword ptr CS:[0x6114b8]
//   XREF to: EXTERNAL:0000003a (COMPUTED_CALL)
//   XREF to: 006114b8 (READ)
// 005f36bf: TEST EAX,EAX
// 005f36c1: JZ 0x005f36cd
//   XREF to: 005f36cd (CONDITIONAL_JUMP)
// 005f36c3: PUSH 0x9
// 005f36c5: PUSH EDI
// 005f36c6: CALL dword ptr CS:[0x6114f4]
//   XREF to: EXTERNAL:00000049 (COMPUTED_CALL)
//   XREF to: 006114f4 (READ)
// 005f36cd: PUSH EDI
//   Label: LAB_005f36cd
// 005f36ce: CALL dword ptr CS:[0x6114ec]
//   XREF to: EXTERNAL:00000047 (COMPUTED_CALL)
//   XREF to: 006114ec (READ)
// 005f36d5: XOR EAX,EAX
// 005f36d7: ADD ESP,0x48
// 005f36da: POP EBP
// 005f36db: POP EDI
// 005f36dc: POP ESI
// 005f36dd: POP EBX
// 005f36de: RET 0x10
// 005f36e1: MOV EBX,ESP
//   Label: LAB_005f36e1
// 005f36e3: MOV EAX,ESP
// 005f36e5: SUB EAX,0x40000
// 005f36ea: MOV EAX,dword ptr [EBX]
//   Label: LAB_005f36ea
//   XREF to: register:0000000c (WRITE)
// 005f36ec: SUB EBX,0x80
// 005f36f2: CMP EBX,EAX
// 005f36f4: JG 0x005f36ea
//   XREF to: 005f36ea (CONDITIONAL_JUMP)
// 005f36f6: CALL dword ptr CS:[0x61141c]
//   XREF to: EXTERNAL:00000015 (COMPUTED_CALL)
//   XREF to: 0061141c (READ)
// 005f36fd: PUSH EAX
// 005f36fe: CALL crt_stdlib.c_srand_FUN_005feb80
//   XREF to: 005feb80 (UNCONDITIONAL_CALL)
// 005f3703: ADD ESP,0x4
// 005f3706: MOV EDI,0x3f98ff0
//   XREF to: 03f98ff0 (DATA)
// 005f370b: CALL dword ptr CS:[0x611568]
//   XREF to: EXTERNAL:00000065 (COMPUTED_CALL)
//   XREF to: 00611568 (READ)
// 005f3712: MOV ESI,EAX
// 005f3714: PUSH EDI
//   XREF to: 03f98ff0 (DATA)
// 005f3715: MOV AL,byte ptr [ESI]
//   Label: LAB_005f3715
// 005f3717: MOV byte ptr [EDI],AL
//   XREF to: 03f98ff0 (WRITE)
//   XREF to: 03f98ff2 (WRITE)
// 005f3719: CMP AL,0x0
// 005f371b: JZ 0x005f372d
//   XREF to: 005f372d (CONDITIONAL_JUMP)
// 005f371d: MOV AL,byte ptr [ESI + 0x1]
// 005f3720: ADD ESI,0x2
// 005f3723: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 03f98ff1 (WRITE)
//   XREF to: 03f98ff3 (WRITE)
// 005f3726: ADD EDI,0x2
// 005f3729: CMP AL,0x0
// 005f372b: JNZ 0x005f3715
//   XREF to: 005f3715 (CONDITIONAL_JUMP)
// 005f372d: POP EDI
//   Label: LAB_005f372d
// 005f372e: MOV DL,byte ptr [0x03f98ff0]
//   XREF to: 03f98ff0 (READ)
// 005f3734: MOV EAX,EDI
//   XREF to: 03f98ff0 (PARAM)
// 005f3736: TEST DL,DL
// 005f3738: JZ 0x005f3784
//   XREF to: 005f3784 (CONDITIONAL_JUMP)
// 005f373a: MOV ECX,dword ptr [0x03f990f0]
//   XREF to: 03f990f0 (READ)
// 005f3740: SHL ECX,0x2
// 005f3743: MOV BL,byte ptr [EAX]
//   Label: LAB_005f3743
//   XREF to: 03f98ff0 (READ)
//   XREF to: 03f98ff1 (READ)
//   XREF to: 03f98ff2 (READ)
//   XREF to: 03f98ff3 (READ)
// 005f3745: LEA EDX,[EAX + 0x1]
//   XREF to: 03f98ff1 (DATA)
// 005f3748: CMP BL,0x20
// 005f374b: JBE 0x005f3751
//   XREF to: 005f3751 (CONDITIONAL_JUMP)
// 005f374d: MOV EAX,EDX
// 005f374f: JMP 0x005f3743
//   XREF to: 005f3743 (UNCONDITIONAL_JUMP)
// 005f3751: MOV EBX,dword ptr [0x03f990f0]
//   Label: LAB_005f3751
//   XREF to: 03f990f0 (READ)
// 005f3757: ADD ECX,0x4
// 005f375a: MOV byte ptr [EAX],0x0
//   XREF to: 03f98ff0 (WRITE)
//   XREF to: 03f98ff1 (WRITE)
// 005f375d: INC EBX
// 005f375e: MOV dword ptr [ECX + 0x3f990f0],EDI
//   XREF to: 03f990f0 (DATA)
//   XREF to: 03f98ff0 (DATA)
//   XREF to: 03f990f4 (DATA)
// 005f3764: MOV dword ptr [0x03f990f0],EBX
//   XREF to: 03f990f0 (WRITE)
// 005f376a: MOV BH,byte ptr [EDX]
//   XREF to: 03f98ff1 (READ)
//   XREF to: 03f98ff2 (READ)
// 005f376c: MOV EAX,EDX
// 005f376e: CMP BH,0x20
// 005f3771: JNZ 0x005f377c
//   XREF to: 005f377c (CONDITIONAL_JUMP)
// 005f3773: MOV DL,byte ptr [EAX + 0x1]
//   Label: LAB_005f3773
//   XREF to: 03f98ff2 (READ)
//   XREF to: 03f98ff3 (READ)
//   XREF to: 03f98ff4 (READ)
// 005f3776: INC EAX
//   XREF to: 03f98ff2 (PARAM)
// 005f3777: CMP DL,0x20
// 005f377a: JZ 0x005f3773
//   XREF to: 005f3773 (CONDITIONAL_JUMP)
// 005f377c: MOV DH,byte ptr [EAX]
//   Label: LAB_005f377c
//   XREF to: 03f98ff1 (READ)
//   XREF to: 03f98ff2 (READ)
//   XREF to: 03f98ff3 (READ)
//   XREF to: 03f98ff4 (READ)
// 005f377e: MOV EDI,EAX
// 005f3780: TEST DH,DH
// 005f3782: JNZ 0x005f3743
//   XREF to: 005f3743 (CONDITIONAL_JUMP)
// 005f3784: PUSH 0x3f98ef0
//   Label: LAB_005f3784
//   XREF to: 03f98ef0 (DATA)
// 005f3789: PUSH 0x100
// 005f378e: CALL dword ptr CS:[0x611578]
//   XREF to: EXTERNAL:00000069 (COMPUTED_CALL)
//   XREF to: 00611578 (READ)
// 005f3795: PUSH 0x100
// 005f379a: PUSH 0x3f98df0
//   XREF to: 03f98df0 (DATA)
// 005f379f: PUSH EBP
// 005f37a0: MOV EDI,0x3f98df0
//   XREF to: 03f98df0 (DATA)
// 005f37a5: CALL dword ptr CS:[0x6115ac]
//   XREF to: EXTERNAL:00000076 (COMPUTED_CALL)
//   XREF to: 006115ac (READ)
// 005f37ac: SUB ECX,ECX
// 005f37ae: DEC ECX
// 005f37af: XOR EAX,EAX
// 005f37b1: SCASB.REPNE ES:EDI
//   XREF to: 03f98df0 (READ)
//   XREF to: 03f98df1 (READ)
// 005f37b3: NOT ECX
// 005f37b5: DEC ECX
// 005f37b6: MOV EAX,ECX
// 005f37b8: TEST ECX,ECX
// 005f37ba: JLE 0x005f37d1
//   XREF to: 005f37d1 (CONDITIONAL_JUMP)
// 005f37bc: CMP byte ptr [EAX + 0x3f98df0],0x5c
//   Label: LAB_005f37bc
//   XREF to: 03f98def (READ)
//   XREF to: 03f98df0 (READ)
//   XREF to: 03f98df1 (READ)
// 005f37c3: JNZ 0x005f387a
//   XREF to: 005f387a (CONDITIONAL_JUMP)
// 005f37c9: XOR BH,BH
// 005f37cb: MOV byte ptr [EAX + 0x3f98df0],BH
//   XREF to: 03f98def (WRITE)
//   XREF to: 03f98df0 (WRITE)
//   XREF to: 03f98df1 (WRITE)
// 005f37d1: PUSH 0x3f98df0
//   Label: LAB_005f37d1
//   XREF to: 03f98df0 (DATA)
// 005f37d6: MOV EBX,0x5f3150
//   XREF to: 005f3150 (PARAM)
// 005f37db: CALL dword ptr CS:[0x611614]
//   XREF to: EXTERNAL:00000090 (COMPUTED_CALL)
//   XREF to: 00611614 (READ)
// 005f37e2: XOR ESI,ESI
// 005f37e4: MOV ECX,0x3
// 005f37e9: PUSH 0x65
// 005f37eb: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: 005f3150 (DATA)
// 005f37ef: MOV dword ptr [ESP + 0xc],ESI
// 005f37f3: MOV dword ptr [ESP + 0x10],ESI
// 005f37f7: PUSH EBP
// 005f37f8: MOV dword ptr [ESP + 0x18],EBP
// 005f37fc: MOV dword ptr [ESP + 0x8],ECX
// 005f3800: CALL dword ptr CS:[0x6114c0]
//   XREF to: 03fbf43c (DATA)
//   XREF to: 006114c0 (READ)
// 005f3807: PUSH 0x7f00
// 005f380c: PUSH ESI
// 005f380d: MOV dword ptr [ESP + 0x1c],EAX
// 005f3811: CALL dword ptr CS:[0x6114bc]
//   XREF to: EXTERNAL:0000003b (COMPUTED_CALL)
//   XREF to: 006114bc (READ)
// 005f3818: PUSH 0x4
// 005f381a: MOV dword ptr [ESP + 0x1c],EAX
// 005f381e: CALL dword ptr CS:[0x6113e0]
//   XREF to: EXTERNAL:00000007 (COMPUTED_CALL)
//   XREF to: 006113e0 (READ)
// 005f3825: MOV dword ptr [ESP + 0x1c],EAX
// 005f3829: MOV EAX,[0x0068499c]
//   XREF to: 0068499c (READ)
// 005f382e: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: 006581a7 (DATA)
// 005f3832: MOV EAX,ESP
// 005f3834: PUSH EAX
// 005f3835: MOV dword ptr [ESP + 0x24],ESI
// 005f3839: CALL dword ptr CS:[0x6114d8]
//   XREF to: EXTERNAL:00000042 (COMPUTED_CALL)
//   XREF to: 006114d8 (READ)
// 005f3840: PUSH ESI
// 005f3841: PUSH EBP
// 005f3842: PUSH ESI
// 005f3843: PUSH ESI
// 005f3844: PUSH ESI
// 005f3845: PUSH ESI
// 005f3846: PUSH ESI
// 005f3847: PUSH ESI
// 005f3848: PUSH 0x80000000
// 005f384d: MOV EDX,dword ptr [0x006849a0]
//   XREF to: 006581b7 (PARAM)
//   XREF to: 006849a0 (READ)
// 005f3853: PUSH EDX
//   XREF to: 006581b7 (DATA)
// 005f3854: MOV ECX,dword ptr [0x0068499c]
//   XREF to: 006581a7 (PARAM)
//   XREF to: 0068499c (READ)
// 005f385a: PUSH ECX
//   XREF to: 006581a7 (DATA)
// 005f385b: PUSH 0x40000
// 005f3860: CALL dword ptr CS:[0x611494]
//   XREF to: EXTERNAL:00000031 (COMPUTED_CALL)
//   XREF to: 00611494 (READ)
// 005f3867: MOV [0x03f98468],EAX
//   XREF to: 03f98468 (WRITE)
// 005f386c: TEST EAX,EAX
// 005f386e: JNZ 0x005f3888
//   XREF to: 005f3888 (CONDITIONAL_JUMP)
// 005f3870: ADD ESP,0x48
// 005f3873: POP EBP
// 005f3874: POP EDI
// 005f3875: POP ESI
// 005f3876: POP EBX
// 005f3877: RET 0x10
// 005f387a: DEC EAX
//   Label: LAB_005f387a
// 005f387b: TEST EAX,EAX
// 005f387d: JG 0x005f37bc
//   XREF to: 005f37bc (CONDITIONAL_JUMP)
// 005f3883: JMP 0x005f37d1
//   XREF to: 005f37d1 (UNCONDITIONAL_JUMP)
// 005f3888: MOV EBX,dword ptr [ESP + 0x68]
//   Label: LAB_005f3888
// 005f388c: PUSH EBX
// 005f388d: PUSH EAX
// 005f388e: CALL dword ptr CS:[0x6114f4]
//   XREF to: EXTERNAL:00000049 (COMPUTED_CALL)
//   XREF to: 006114f4 (READ)
// 005f3895: MOV ESI,dword ptr [0x03f98468]
//   XREF to: 03f98468 (READ)
// 005f389b: PUSH ESI
// 005f389c: CALL dword ptr CS:[0x6114fc]
//   XREF to: EXTERNAL:0000004b (COMPUTED_CALL)
//   XREF to: 006114fc (READ)
// 005f38a3: CALL dword ptr CS:[0x61157c]
//   XREF to: register:00000000 (WRITE)
//   XREF to: 0061157c (READ)
// 005f38aa: PUSH 0x1
// 005f38ac: PUSH EAX
// 005f38ad: CALL dword ptr CS:[0x61163c]
//   XREF to: EXTERNAL:0000009a (COMPUTED_CALL)
//   XREF to: 0061163c (READ)
// 005f38b4: PUSH 0x20
// 005f38b6: PUSH 0x0
// 005f38b8: LEA EAX,[ESP + 0x30]
// 005f38bc: PUSH EAX
// 005f38bd: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005f38c2: ADD ESP,0xc
// 005f38c5: LEA EAX,[ESP + 0x28]
// 005f38c9: MOV EDI,0x20
// 005f38ce: PUSH EAX
// 005f38cf: MOV dword ptr [ESP + 0x2c],EDI
// 005f38d3: CALL dword ptr CS:[0x6115d8]
//   XREF to: EXTERNAL:00000081 (COMPUTED_CALL)
//   XREF to: 006115d8 (READ)
// 005f38da: MOV EAX,dword ptr [ESP + 0x30]
// 005f38de: PUSH 0x3f990f4
//   XREF to: 03f990f4 (DATA)
// 005f38e3: MOV EBP,dword ptr [0x03f990f0]
//   XREF to: 03f990f0 (READ)
// 005f38e9: MOV [0x03f98474],EAX
//   XREF to: 03f98474 (WRITE)
// 005f38ee: MOV EAX,dword ptr [ESP + 0x40]
// 005f38f2: PUSH EBP
// 005f38f3: MOV [0x03f98478],EAX
//   XREF to: 03f98478 (WRITE)
// 005f38f8: CALL core_main.c_initializeGameSystems_FUN_00507a60
//   XREF to: 00507a60 (UNCONDITIONAL_CALL)
// 005f38fd: ADD ESP,0x8
// 005f3900: CALL core_main.c_enterMainGameMenu_FUN_00512f40
//   XREF to: 00507a50 (UNCONDITIONAL_CALL)
// 005f3905: CALL core_main.c_finalizeGameSystems_FUN_00508570
//   XREF to: 00508570 (UNCONDITIONAL_CALL)
// 005f390a: XOR EAX,EAX
// 005f390c: ADD ESP,0x48
// 005f390f: POP EBP
// 005f3910: POP EDI
// 005f3911: POP ESI
// 005f3912: POP EBX
// 005f3913: RET 0x10
