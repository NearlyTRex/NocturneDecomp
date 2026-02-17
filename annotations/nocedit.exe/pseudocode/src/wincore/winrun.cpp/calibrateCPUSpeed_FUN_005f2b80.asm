; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005f2b80(void)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507bd0
;
; Referenced Globals:
;   TIME_BEGIN_PERIOD_FUNC* g_timeBeginPeriodFunc = 00211862
;   MESSAGE_BOX_A_FUNC* g_MessageBoxAFunc = 00211b44
;   QUERY_PERFORMANCE_COUNTER_FUNC* g_QueryPerformanceCounterFunc = 002120a8
;   QUERY_PERFORMANCE_FREQUENCY_FUNC* g_QueryPerformanceFrequencyFunc = 002120c2
;   TerminatedCString s_Unable_to_set_timer_00657f14
;   double g_RelatedToQPC3 = 4294967296
;   TerminatedCString s_Nocturne_Editor_006581b7
;   char* g_ApplicationTimerTitle = 006581b7
;   int g_CalibratedCPUSpeed
;   _struct_19 g_PerformanceCounter
;   _struct_19 g_PerformanceFrequency
;   undefined4 g_PerformanceFrequency+4
;   double g_TimerCalibration
;   BOOL g_UseMultimediaTimer
;   HWND g_MainWindowHandle
;   ... and 1 more
;
; Called Functions:
;   MessageBoxA
;   QueryPerformanceCounter
;   QueryPerformanceFrequency
;   timeBeginPeriod
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2b80
        ;   Label: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80
    PUSH ESI                            ; 005f2b81
    PUSH EDI                            ; 005f2b82
    PUSH EBP                            ; 005f2b83
    MOV EBP,ESP                         ; 005f2b84
    SUB ESP,0x10                        ; 005f2b86
    PUSH 0x3f96bb0                      ; 005f2b89 | g_PerformanceFrequency
    CALL dword ptr CS:[0x6115fc]        ; 005f2b8e | g_QueryPerformanceFrequencyFunc
    CMP EAX,0x1                         ; 005f2b95
    JNZ 0x005f2d5a                      ; 005f2b98
        ;   XREF to: 005f2d5a (CONDITIONAL_JUMP)  ; LAB_005f2d5a
    FILD dword ptr [0x03f96bb4]         ; 005f2b9e | g_PerformanceFrequency+4
    FMUL double ptr [0x00657f2c]        ; 005f2ba4 | g_RelatedToQPC3
    XOR EDX,EDX                         ; 005f2baa
    MOV EAX,[0x03f96bb0]                ; 005f2bac | g_PerformanceFrequency
    MOV dword ptr [EBP + -0xc],EDX      ; 005f2bb1
    MOV dword ptr [EBP + -0x10],EAX     ; 005f2bb4
    FILD qword ptr [EBP + -0x10]        ; 005f2bb7
    FADDP                               ; 005f2bba
    PUSH 0x3f96ba8                      ; 005f2bbc | g_PerformanceCounter
    FSTP double ptr [0x03f96bb8]        ; 005f2bc1 | g_TimerCalibration
    CALL dword ptr CS:[0x6115f8]        ; 005f2bc7 | g_QueryPerformanceCounterFunc
    XOR EAX,EAX                         ; 005f2bce
        ;   Label: LAB_005f2bce
    MOV dword ptr [EBP + -0x8],EAX      ; 005f2bd0
    MOV dword ptr [EBP + -0x4],EAX      ; 005f2bd3
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 005f2bd6
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_005f2bd6
    PUSH EAX                            ; 005f2bdb
    MOV EBX,0x0                         ; 005f2bdc
    ADD EBX,0x1                         ; 005f2be1
        ;   Label: LAB_005f2be1
    ADD EBX,0x1                         ; 005f2be4
    ADD EBX,0x1                         ; 005f2be7
    ADD EBX,0x1                         ; 005f2bea
    ADD EBX,0x1                         ; 005f2bed
    ADD EBX,0x1                         ; 005f2bf0
    ADD EBX,0x1                         ; 005f2bf3
    ADD EBX,0x1                         ; 005f2bf6
    ADD EBX,0x1                         ; 005f2bf9
    ADD EBX,0x1                         ; 005f2bfc
    ADD EBX,0x1                         ; 005f2bff
    ADD EBX,0x1                         ; 005f2c02
    ADD EBX,0x1                         ; 005f2c05
    ADD EBX,0x1                         ; 005f2c08
    ADD EBX,0x1                         ; 005f2c0b
    ADD EBX,0x1                         ; 005f2c0e
    ADD EBX,0x1                         ; 005f2c11
    ADD EBX,0x1                         ; 005f2c14
    ADD EBX,0x1                         ; 005f2c17
    ADD EBX,0x1                         ; 005f2c1a
    ADD EBX,0x1                         ; 005f2c1d
    ADD EBX,0x1                         ; 005f2c20
    ADD EBX,0x1                         ; 005f2c23
    ADD EBX,0x1                         ; 005f2c26
    ADD EBX,0x1                         ; 005f2c29
    ADD EBX,0x1                         ; 005f2c2c
    ADD EBX,0x1                         ; 005f2c2f
    ADD EBX,0x1                         ; 005f2c32
    ADD EBX,0x1                         ; 005f2c35
    ADD EBX,0x1                         ; 005f2c38
    ADD EBX,0x1                         ; 005f2c3b
    ADD EBX,0x1                         ; 005f2c3e
    ADD EBX,0x1                         ; 005f2c41
    ADD EBX,0x1                         ; 005f2c44
    ADD EBX,0x1                         ; 005f2c47
    ADD EBX,0x1                         ; 005f2c4a
    ADD EBX,0x1                         ; 005f2c4d
    ADD EBX,0x1                         ; 005f2c50
    ADD EBX,0x1                         ; 005f2c53
    ADD EBX,0x1                         ; 005f2c56
    ADD EBX,0x1                         ; 005f2c59
    ADD EBX,0x1                         ; 005f2c5c
    ADD EBX,0x1                         ; 005f2c5f
    ADD EBX,0x1                         ; 005f2c62
    ADD EBX,0x1                         ; 005f2c65
    ADD EBX,0x1                         ; 005f2c68
    ADD EBX,0x1                         ; 005f2c6b
    ADD EBX,0x1                         ; 005f2c6e
    ADD EBX,0x1                         ; 005f2c71
    ADD EBX,0x1                         ; 005f2c74
    ADD EBX,0x1                         ; 005f2c77
    ADD EBX,0x1                         ; 005f2c7a
    ADD EBX,0x1                         ; 005f2c7d
    ADD EBX,0x1                         ; 005f2c80
    ADD EBX,0x1                         ; 005f2c83
    ADD EBX,0x1                         ; 005f2c86
    ADD EBX,0x1                         ; 005f2c89
    ADD EBX,0x1                         ; 005f2c8c
    ADD EBX,0x1                         ; 005f2c8f
    ADD EBX,0x1                         ; 005f2c92
    ADD EBX,0x1                         ; 005f2c95
    ADD EBX,0x1                         ; 005f2c98
    ADD EBX,0x1                         ; 005f2c9b
    ADD EBX,0x1                         ; 005f2c9e
    ADD EBX,0x1                         ; 005f2ca1
    ADD EBX,0x1                         ; 005f2ca4
    ADD EBX,0x1                         ; 005f2ca7
    ADD EBX,0x1                         ; 005f2caa
    ADD EBX,0x1                         ; 005f2cad
    ADD EBX,0x1                         ; 005f2cb0
    ADD EBX,0x1                         ; 005f2cb3
    ADD EBX,0x1                         ; 005f2cb6
    ADD EBX,0x1                         ; 005f2cb9
    ADD EBX,0x1                         ; 005f2cbc
    ADD EBX,0x1                         ; 005f2cbf
    ADD EBX,0x1                         ; 005f2cc2
    ADD EBX,0x1                         ; 005f2cc5
    ADD EBX,0x1                         ; 005f2cc8
    ADD EBX,0x1                         ; 005f2ccb
    ADD EBX,0x1                         ; 005f2cce
    ADD EBX,0x1                         ; 005f2cd1
    ADD EBX,0x1                         ; 005f2cd4
    ADD EBX,0x1                         ; 005f2cd7
    ADD EBX,0x1                         ; 005f2cda
    ADD EBX,0x1                         ; 005f2cdd
    ADD EBX,0x1                         ; 005f2ce0
    ADD EBX,0x1                         ; 005f2ce3
    ADD EBX,0x1                         ; 005f2ce6
    ADD EBX,0x1                         ; 005f2ce9
    ADD EBX,0x1                         ; 005f2cec
    ADD EBX,0x1                         ; 005f2cef
    ADD EBX,0x1                         ; 005f2cf2
    ADD EBX,0x1                         ; 005f2cf5
    ADD EBX,0x1                         ; 005f2cf8
    ADD EBX,0x1                         ; 005f2cfb
    ADD EBX,0x1                         ; 005f2cfe
    ADD EBX,0x1                         ; 005f2d01
    ADD EBX,0x1                         ; 005f2d04
    ADD EBX,0x1                         ; 005f2d07
    CMP EBX,0x5f5e100                   ; 005f2d0a
    JC 0x005f2be1                       ; 005f2d10
        ;   XREF to: 005f2be1 (CONDITIONAL_JUMP)  ; LAB_005f2be1
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 005f2d16
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    POP EBX                             ; 005f2d1b
    SUB EAX,EBX                         ; 005f2d1c
    MOV EBX,EAX                         ; 005f2d1e
    MOV EAX,0x7080000                   ; 005f2d20
    CDQ                                 ; 005f2d25
    DIV EBX                             ; 005f2d26
    ADD dword ptr [EBP + 0xfffffff8],EAX ; 005f2d28
    MOV ECX,dword ptr [EBP + -0x4]      ; 005f2d2e
    INC ECX                             ; 005f2d31
    MOV dword ptr [EBP + -0x4],ECX      ; 005f2d32
    CMP ECX,0x5                         ; 005f2d35
    JL 0x005f2bd6                       ; 005f2d38
        ;   XREF to: 005f2bd6 (CONDITIONAL_JUMP)  ; LAB_005f2bd6
    MOV ECX,0x5                         ; 005f2d3e
    MOV EAX,dword ptr [EBP + -0x8]      ; 005f2d43
    MOV EDX,dword ptr [EBP + -0x8]      ; 005f2d46
    SAR EDX,0x1f                        ; 005f2d49
    IDIV ECX                            ; 005f2d4c
    MOV [0x02d05250],EAX                ; 005f2d4e | g_CalibratedCPUSpeed
    MOV ESP,EBP                         ; 005f2d53
    POP EBP                             ; 005f2d55
    POP EDI                             ; 005f2d56
    POP ESI                             ; 005f2d57
    POP EBX                             ; 005f2d58
    RET                                 ; 005f2d59
    MOV ECX,0x1                         ; 005f2d5a
        ;   Label: LAB_005f2d5a
    PUSH ECX                            ; 005f2d5f
    MOV dword ptr [0x03f96bc4],ECX      ; 005f2d60 | g_UseMultimediaTimer
    CALL dword ptr CS:[0x611414]        ; 005f2d66 | g_timeBeginPeriodFunc
    TEST EAX,EAX                        ; 005f2d6d
    JZ 0x005f2bce                       ; 005f2d6f
        ;   XREF to: 005f2bce (CONDITIONAL_JUMP)  ; LAB_005f2bce
    PUSH 0x31                           ; 005f2d75
    MOV EBX,dword ptr [0x006849a0]      ; 005f2d77 | = "Nocturne Editor" | g_ApplicationTimerTitle
    PUSH EBX                            ; 005f2d7d | = "Nocturne Editor"
    PUSH 0x657f14                       ; 005f2d7e | = "Unable to set timer"
    MOV ESI,dword ptr [0x03f98468]      ; 005f2d83 | g_MainWindowHandle
    PUSH ESI                            ; 005f2d89
    CALL dword ptr CS:[0x6114c4]        ; 005f2d8a | g_MessageBoxAFunc
    CMP EAX,0x2                         ; 005f2d91
    JNZ 0x005f2bce                      ; 005f2d94
        ;   XREF to: 005f2bce (CONDITIONAL_JUMP)  ; LAB_005f2bce
    MOV dword ptr [0x03f9846c],0x1      ; 005f2d9a | g_InputDisabled
    JMP 0x005f2bce                      ; 005f2da4
        ;   XREF to: 005f2bce (UNCONDITIONAL_JUMP)  ; LAB_005f2bce

