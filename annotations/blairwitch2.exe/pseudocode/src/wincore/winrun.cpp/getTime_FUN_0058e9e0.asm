; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_getTime_FUN_0058e9e0(void)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[36]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004b90d0 at 004b92f1
;   core_game.cpp_CGame_processFrame_FUN_004b5190 at 004b5244
;   core_game.cpp_CGame_process_FUN_004bd570 at 004bda5c
;   core_game.cpp_CGame_saveClockTime_FUN_004b3000 at 004b3000
;   core_game.cpp_CGame_updateDT_FUN_004b3010 at 004b3017
;   core_game.cpp_beginProfileTimer_FUN_004bd4d0 at 004bd4df
;   core_game.cpp_endProfileTimer_FUN_004bd4f0 at 004bd507
;   core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0 at 0050b959
;   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890 at 0050e8ba
;   core_netgame.cpp_CNetGame_init_FUN_0050b340 at 0050b35a
;   ... and 26 more
;
; Referenced Globals:
;   void* PTR_timeGetTime_005c844c = 001c891c
;   void* PTR_QueryPerformanceCounter_005c85f8 = 001c9074
;   double g_HighPartMultiplier = 4294967296
;   double g_TimeScaleFactor1 = 65536
;   double g_TimeScaleFactor2 = 18
;   DWORD g_PreviousCounterLow
;   int g_PreviousCounterHigh
;   _struct_19 g_PerformanceCounter
;   undefined4 g_PerformanceCounter.HighPart
;   double g_TimerCalibration
;   int g_AccumulatedGameTime
;   int[1] g_UseMultimediaTimer
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   QueryPerformanceCounter
;   timeGetTime
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0058e9e0
        ;   Label: wincore_winrun.cpp_getTime_FUN_0058e9e0
    PUSH EDI                            ; 0058e9e1
    PUSH EBP                            ; 0058e9e2
    MOV EBP,ESP                         ; 0058e9e3
    SUB ESP,0x24                        ; 0058e9e5
    AND ESP,0xfffffff8                  ; 0058e9e8
    CMP dword ptr [0x02662d84],0x0      ; 0058e9eb | g_UseMultimediaTimer
    JNZ 0x0058ea9a                      ; 0058e9f2
        ;   XREF to: 0058ea9a (CONDITIONAL_JUMP)  ; LAB_0058ea9a
    MOV EDI,0x2662d60                   ; 0058e9f8
    MOV ESI,0x2662d68                   ; 0058e9fd
    PUSH 0x2662d68                      ; 0058ea02 | g_PerformanceCounter
    MOVSD ES:EDI,ESI                    ; 0058ea07 | g_PerformanceCounter | g_PreviousCounterLow
    MOVSD ES:EDI,ESI                    ; 0058ea08 | g_PerformanceCounter.HighPart | g_PreviousCounterHigh
    CALL dword ptr CS:[0x5c85f8]        ; 0058ea09 | PTR_QueryPerformanceCounter_005c85f8
    FLD double ptr [0x005ee852]         ; 0058ea10 | g_HighPartMultiplier
    FILD dword ptr [0x02662d64]         ; 0058ea16 | g_PreviousCounterHigh
    FMUL ST1                            ; 0058ea1c
    FILD dword ptr [0x02662d6c]         ; 0058ea1e | g_PerformanceCounter.HighPart
    FMULP ST2                           ; 0058ea24
    XOR ECX,ECX                         ; 0058ea26
    MOV EAX,[0x02662d60]                ; 0058ea28 | g_PreviousCounterLow
    MOV dword ptr [ESP + 0x14],ECX      ; 0058ea2d
    MOV dword ptr [ESP + 0x10],EAX      ; 0058ea31
    MOV EAX,[0x02662d68]                ; 0058ea35 | g_PerformanceCounter
    MOV dword ptr [ESP + 0x1c],ECX      ; 0058ea3a
    MOV dword ptr [ESP + 0x18],EAX      ; 0058ea3e
    FILD qword ptr [ESP + 0x10]         ; 0058ea42
    FILD qword ptr [ESP + 0x18]         ; 0058ea46
    FADDP ST3,ST0                       ; 0058ea4a
    FADDP                               ; 0058ea4c
    FSUBP                               ; 0058ea4e
    FDIV double ptr [0x02662d78]        ; 0058ea50 | g_TimerCalibration
    FMUL double ptr [0x005ee85a]        ; 0058ea56 | g_TimeScaleFactor1
    FMUL double ptr [0x005ee862]        ; 0058ea5c | g_TimeScaleFactor2
    FLDZ                                ; 0058ea62
    FXCH                                ; 0058ea64
    FSTP double ptr [ESP]               ; 0058ea66
    FCOMP double ptr [ESP]              ; 0058ea69
    FNSTSW AX                           ; 0058ea6c
    SAHF                                ; 0058ea6e
    JNC 0x0058ea8f                      ; 0058ea6f
        ;   XREF to: 0058ea8f (CONDITIONAL_JUMP)  ; LAB_0058ea8f
    FLD double ptr [ESP]                ; 0058ea71
    MOV ESI,dword ptr [0x02662d80]      ; 0058ea74 | g_AccumulatedGameTime
    CALL crt_math.c_round_FUN_005b7ff0  ; 0058ea7a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [ESP + 0x20]        ; 0058ea7f
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058ea83
    ADD ESI,EAX                         ; 0058ea87
    MOV dword ptr [0x02662d80],ESI      ; 0058ea89 | g_AccumulatedGameTime
    MOV EAX,[0x02662d80]                ; 0058ea8f | g_AccumulatedGameTime
        ;   Label: LAB_0058ea8f
    MOV ESP,EBP                         ; 0058ea94
    POP EBP                             ; 0058ea96
    POP EDI                             ; 0058ea97
    POP ESI                             ; 0058ea98
    RET                                 ; 0058ea99
    CALL dword ptr CS:[0x5c844c]        ; 0058ea9a | PTR_timeGetTime_005c844c
        ;   Label: LAB_0058ea9a
    IMUL EAX,EAX,0x49c                  ; 0058eaa1
    MOV ESP,EBP                         ; 0058eaa7
    POP EBP                             ; 0058eaa9
    POP EDI                             ; 0058eaaa
    POP ESI                             ; 0058eaab
    RET                                 ; 0058eaac

