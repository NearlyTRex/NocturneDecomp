; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_winrun_cpp_getTime_FUN_005f2dc0(void)
;
;
; XREF[46]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004ddd40
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da3ce
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e3440
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80 at 004d7d80
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 at 004d7d97
;   core_game.cpp_beginProfileTimer_FUN_004e30f0 at 004e30ff
;   core_game.cpp_endProfileTimer_FUN_004e3110 at 004e3127
;   core_main.c_finalizeGameSystems_FUN_00508570 at 005085c0
;   core_main.c_showPromoScreen_FUN_00508340 at 0050835f
;   core_main.c_waitWithSkip_FUN_005082a0 at 005082a8
;   ... and 36 more
;
; Referenced Globals:
;   TIME_GET_TIME_FUNC* g_timeGetTimeFunc = 00211884
;   QUERY_PERFORMANCE_COUNTER_FUNC* g_QueryPerformanceCounterFunc = 002120a8
;   double g_HighPartMultiplier = 4294967296
;   double g_TimeScaleFactor1 = 65536
;   double g_TimeScaleFactor2 = 18
;   DWORD g_PreviousCounterLow
;   DWORD g_PreviousCounterHigh
;   LARGE_INTEGER g_PerformanceCounter
;   undefined4 g_PerformanceCounter+4
;   double g_TimerCalibration
;   int g_AccumulatedGameTime
;   BOOL g_UseMultimediaTimer
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   QueryPerformanceCounter
;   timeGetTime
;
; *****************************************************************************

section .text

    SUB ESP,0x24                        ; 005f2dc0
        ;   Label: wincore_winrun.cpp_getTime_FUN_005f2dc0
    CMP dword ptr [0x03f96bc4],0x0      ; 005f2dc3 | g_UseMultimediaTimer
    JZ 0x005f2ddd                       ; 005f2dca
        ;   XREF to: 005f2ddd (CONDITIONAL_JUMP)  ; LAB_005f2ddd
    CALL dword ptr CS:[0x61141c]        ; 005f2dcc | g_timeGetTimeFunc
    IMUL EAX,EAX,0x49c                  ; 005f2dd3
    ADD ESP,0x24                        ; 005f2dd9
    RET                                 ; 005f2ddc
    PUSH EDI                            ; 005f2ddd
        ;   Label: LAB_005f2ddd
    PUSH ESI                            ; 005f2dde
    MOV EDI,0x3f96ba0                   ; 005f2ddf | g_PreviousCounterLow
    MOV ESI,0x3f96ba8                   ; 005f2de4 | g_PerformanceCounter
    PUSH 0x3f96ba8                      ; 005f2de9 | g_PerformanceCounter
    MOVSD ES:EDI,ESI                    ; 005f2dee | g_PreviousCounterLow | g_PerformanceCounter
    MOVSD ES:EDI,ESI                    ; 005f2def | g_PreviousCounterHigh | g_PerformanceCounter+4
    CALL dword ptr CS:[0x6115f8]        ; 005f2df0 | g_QueryPerformanceCounterFunc
    FLD double ptr [0x00657f34]         ; 005f2df7 | g_HighPartMultiplier
    FILD dword ptr [0x03f96ba4]         ; 005f2dfd | g_PreviousCounterHigh
    FMUL ST1                            ; 005f2e03
    FILD dword ptr [0x03f96bac]         ; 005f2e05 | g_PerformanceCounter+4
    FMULP ST2                           ; 005f2e0b
    XOR ECX,ECX                         ; 005f2e0d
    MOV EAX,[0x03f96ba0]                ; 005f2e0f | g_PreviousCounterLow
    MOV dword ptr [ESP + 0x1c],ECX      ; 005f2e14
    MOV dword ptr [ESP + 0x18],EAX      ; 005f2e18
    MOV EAX,[0x03f96ba8]                ; 005f2e1c | g_PerformanceCounter
    MOV dword ptr [ESP + 0x24],ECX      ; 005f2e21
    MOV dword ptr [ESP + 0x20],EAX      ; 005f2e25
    FILD qword ptr [ESP + 0x18]         ; 005f2e29
    FILD qword ptr [ESP + 0x20]         ; 005f2e2d
    FADDP ST3,ST0                       ; 005f2e31
    FADDP                               ; 005f2e33
    FSUBP                               ; 005f2e35
    FLD ST0                             ; 005f2e37
    FDIV double ptr [0x03f96bb8]        ; 005f2e39 | g_TimerCalibration
    FMUL double ptr [0x00657f3c]        ; 005f2e3f | g_TimeScaleFactor1
    FMUL double ptr [0x00657f44]        ; 005f2e45 | g_TimeScaleFactor2
    MOV ESI,dword ptr [0x03f96bc0]      ; 005f2e4b | g_AccumulatedGameTime
    FSTP ST1                            ; 005f2e51
    CALL crt_math.c_round_FUN_005fe6b0  ; 005f2e53
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x28]        ; 005f2e58
    MOV EAX,dword ptr [ESP + 0x28]      ; 005f2e5c
    ADD ESI,EAX                         ; 005f2e60
    MOV dword ptr [0x03f96bc0],ESI      ; 005f2e62 | g_AccumulatedGameTime
    MOV EAX,ESI                         ; 005f2e68
    POP ESI                             ; 005f2e6a
    POP EDI                             ; 005f2e6b
    ADD ESP,0x24                        ; 005f2e6c
    RET                                 ; 005f2e6f

