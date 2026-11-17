; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_getTime_FUN_00558a30(void)
;
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[37]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a08bf
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049ccc4
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a64bd
;   core_game.cpp_CGame_saveClockTime_FUN_0049a890 at 0049a890
;   core_game.cpp_CGame_updateDT_FUN_0049a8a0 at 0049a8a7
;   core_main.c_finalizeGameSystems_FUN_004c90e0 at 004c911e
;   core_main.c_showPromoScreen_FUN_004c8eb0 at 004c8ecf
;   core_main.c_waitWithSkip_FUN_004c8e10 at 004c8e18
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 at 004e9f19
;   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70 at 004ece9a
;   ... and 27 more
;
; Referenced Globals:
;   void* PTR_timeGetTime_005753ec = 0017584a
;   void* PTR_QueryPerformanceCounter_00575570 = 00175ef6
;   double DOUBLE_00597f31 = 4294967296
;   double DOUBLE_00597f39 = 65536
;   double DOUBLE_00597f41 = 18
;   DWORD g_DWORD_02de07d0
;   int g_INT_02de07d4
;   _struct_19 g_struct_19_02de07d8
;   undefined4 g_struct_19_02de07d8.HighPart
;   double g_DOUBLE_02de07e8
;   int g_INT_02de07f0
;   BOOL g_BOOL_02de07f4
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   QueryPerformanceCounter
;   timeGetTime
;
; *****************************************************************************

section .text

    SUB ESP,0x24                        ; 00558a30
        ;   Label: wincore_winrun.cpp_getTime_FUN_00558a30
    CMP dword ptr [0x02de07f4],0x0      ; 00558a33 | g_BOOL_02de07f4
    JZ 0x00558a4d                       ; 00558a3a
        ;   XREF to: 00558a4d (CONDITIONAL_JUMP)  ; LAB_00558a4d
    CALL dword ptr CS:[0x5753ec]        ; 00558a3c | PTR_timeGetTime_005753ec
    IMUL EAX,EAX,0x49c                  ; 00558a43
    ADD ESP,0x24                        ; 00558a49
    RET                                 ; 00558a4c
    PUSH EDI                            ; 00558a4d
        ;   Label: LAB_00558a4d
    PUSH ESI                            ; 00558a4e
    MOV EDI,0x2de07d0                   ; 00558a4f
    MOV ESI,0x2de07d8                   ; 00558a54
    PUSH 0x2de07d8                      ; 00558a59 | g_struct_19_02de07d8
    MOVSD ES:EDI,ESI                    ; 00558a5e | g_struct_19_02de07d8 | g_DWORD_02de07d0
    MOVSD ES:EDI,ESI                    ; 00558a5f | g_struct_19_02de07d8.HighPart | g_INT_02de07d4
    CALL dword ptr CS:[0x575570]        ; 00558a60 | PTR_QueryPerformanceCounter_00575570
    FLD double ptr [0x00597f31]         ; 00558a67 | DOUBLE_00597f31
    FILD dword ptr [0x02de07d4]         ; 00558a6d | g_INT_02de07d4
    FMUL ST1                            ; 00558a73
    FILD dword ptr [0x02de07dc]         ; 00558a75 | g_struct_19_02de07d8.HighPart
    FMULP ST2                           ; 00558a7b
    XOR ECX,ECX                         ; 00558a7d
    MOV EAX,[0x02de07d0]                ; 00558a7f | g_DWORD_02de07d0
    MOV dword ptr [ESP + 0x1c],ECX      ; 00558a84
    MOV dword ptr [ESP + 0x18],EAX      ; 00558a88
    MOV EAX,[0x02de07d8]                ; 00558a8c | g_struct_19_02de07d8
    MOV dword ptr [ESP + 0x24],ECX      ; 00558a91
    MOV dword ptr [ESP + 0x20],EAX      ; 00558a95
    FILD qword ptr [ESP + 0x18]         ; 00558a99
    FILD qword ptr [ESP + 0x20]         ; 00558a9d
    FADDP ST3,ST0                       ; 00558aa1
    FADDP                               ; 00558aa3
    FSUBP                               ; 00558aa5
    FLD ST0                             ; 00558aa7
    FDIV double ptr [0x02de07e8]        ; 00558aa9 | g_DOUBLE_02de07e8
    FMUL double ptr [0x00597f39]        ; 00558aaf | DOUBLE_00597f39
    FMUL double ptr [0x00597f41]        ; 00558ab5 | DOUBLE_00597f41
    MOV ESI,dword ptr [0x02de07f0]      ; 00558abb | g_INT_02de07f0
    FSTP ST1                            ; 00558ac1
    CALL crt_math.c_round_FUN_00563a30  ; 00558ac3
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x28]        ; 00558ac8
    MOV EAX,dword ptr [ESP + 0x28]      ; 00558acc
    ADD ESI,EAX                         ; 00558ad0
    MOV dword ptr [0x02de07f0],ESI      ; 00558ad2 | g_INT_02de07f0
    MOV EAX,ESI                         ; 00558ad8
    POP ESI                             ; 00558ada
    POP EDI                             ; 00558adb
    ADD ESP,0x24                        ; 00558adc
    RET                                 ; 00558adf

