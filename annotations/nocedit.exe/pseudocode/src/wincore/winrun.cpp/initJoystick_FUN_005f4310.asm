; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_winrun.cpp_initJoystick_FUN_005f4310(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507bd5
;
; Referenced Globals:
;   joyGetDevCapsA* joyGetDevCapsA = 0021181c
;   GetModuleHandleA* GetModuleHandleA = 00211f6e
;   GetProcAddress* GetProcAddress = 00211f8e
;   TerminatedCString s_winmm_dll_006581c7
;   TerminatedCString s_joyGetPosEx_006581d1
;   int g_JoystickNumButtons = 0x4
;   int g_JoystickPresent
;   int g_JoystickHasPOV
;   FARPROC g_joyGetPosEx
;   HMODULE g_WinmmDll
;
; *****************************************************************************

section .text

    SUB ESP,0x194                       ; 005f4310
        ;   Label: wincore_winrun.cpp_initJoystick_FUN_005f4310
    PUSH 0x6581c7                       ; 005f4316 | = "winmm.dll" | s_winmm_dll_006581c7 = winmm.dll
    CALL dword ptr CS:[0x6115b4]        ; 005f431b | GetModuleHandleA * GetModuleHandleA
    MOV [0x03f994f8],EAX                ; 005f4322 | HMODULE g_WinmmDll
    TEST EAX,EAX                        ; 005f4327
    JZ 0x005f433d                       ; 005f4329 | LAB_005f433d
        ;   XREF to: 005f433d (CONDITIONAL_JUMP)
    PUSH 0x6581d1                       ; 005f432b | = "joyGetPosEx" | s_joyGetPosEx_006581d1 = joyGetPosEx
    PUSH EAX                            ; 005f4330
    CALL dword ptr CS:[0x6115bc]        ; 005f4331 | GetProcAddress * GetProcAddress
    MOV [0x03f994f4],EAX                ; 005f4338 | FARPROC g_joyGetPosEx
    PUSH 0x194                          ; 005f433d
        ;   Label: LAB_005f433d
    LEA EAX,[ESP + 0x4]                 ; 005f4342
    PUSH EAX                            ; 005f4346
    PUSH 0x0                            ; 005f4347
    CALL dword ptr CS:[0x611404]        ; 005f4349 | joyGetDevCapsA * joyGetDevCapsA
    TEST EAX,EAX                        ; 005f4350
    JNZ 0x005f4381                      ; 005f4352 | LAB_005f4381
        ;   XREF to: 005f4381 (CONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0x60],0x10     ; 005f4354
    SETNZ AL                            ; 005f4359
    AND EAX,0xff                        ; 005f435c
    MOV [0x02d0521c],EAX                ; 005f4361 | int g_JoystickHasPOV
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005f4366
    MOV [0x006793ac],EAX                ; 005f436a | int g_JoystickNumButtons
    CMP EAX,0x8                         ; 005f436f
    JG 0x005f438d                       ; 005f4372 | LAB_005f438d
        ;   XREF to: 005f438d (CONDITIONAL_JUMP)
    ADD ESP,0x194                       ; 005f4374
        ;   Label: LAB_005f4374
    LEA EAX,[EAX]                       ; 005f437a
    PUSH EBX                            ; 005f4381
        ;   Label: LAB_005f4381
    XOR EBX,EBX                         ; 005f4382
    MOV dword ptr [0x02d0520c],EBX      ; 005f4384 | int g_JoystickPresent
    POP EBX                             ; 005f438a
    JMP 0x005f4374                      ; 005f438b | LAB_005f4374
        ;   XREF to: 005f4374 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x006793ac],0x8      ; 005f438d | int g_JoystickNumButtons
        ;   Label: LAB_005f438d
    ADD ESP,0x194                       ; 005f4397
    RET                                 ; 005f439d

