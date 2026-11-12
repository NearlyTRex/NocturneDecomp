; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_getTime_FUN_005b2420(void)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[36]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d2a00
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d8523
;   core_game.cpp_CGame_saveClockTime_FUN_004cbf10 at 004cbf10
;   core_game.cpp_FUN_004cbf20 at 004cbfc5
;   core_game.cpp_FUN_004ce580 at 004ce624
;   core_game.cpp_beginProfileTimer_FUN_004d7fbc at 004d7fcf
;   core_game.cpp_endProfileTimer_FUN_004d7fe0 at 004d7ff7
;   core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0 at 0052cb39
;   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0052fa80 at 0052faaa
;   core_netgame.cpp_CNetGame_init_FUN_0052c520 at 0052c53a
;   ... and 26 more
;
; Referenced Globals:
;   void* PTR_timeGetTime_005d0458 = 001d0934
;   void* PTR_QueryPerformanceCounter_005d060c = 001d10b0
;   undefined4 DAT_005f9c2a
;   undefined4 DAT_005f9c32
;   undefined4 DAT_005f9c3a
;   undefined4 DAT_02c9a5a0
;   undefined4 DAT_02c9a5a4
;   undefined4 DAT_02c9a5a8
;   undefined4 DAT_02c9a5ac
;   undefined4 DAT_02c9a5b8
;   undefined4 DAT_02c9a5c0
;   undefined4 DAT_02c9a5c4
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   QueryPerformanceCounter
;   timeGetTime
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b2420
        ;   Label: wincore_winrun.cpp_getTime_FUN_005b2420
    PUSH EDI                            ; 005b2421
    PUSH EBP                            ; 005b2422
    MOV EBP,ESP                         ; 005b2423
    SUB ESP,0x24                        ; 005b2425
    AND ESP,0xfffffff8                  ; 005b2428
    CMP dword ptr [0x02c9a5c4],0x0      ; 005b242b | DAT_02c9a5c4
    JNZ 0x005b24da                      ; 005b2432
        ;   XREF to: 005b24da (CONDITIONAL_JUMP)  ; LAB_005b24da
    MOV EDI,0x2c9a5a0                   ; 005b2438
    MOV ESI,0x2c9a5a8                   ; 005b243d
    PUSH 0x2c9a5a8                      ; 005b2442 | DAT_02c9a5a8
    MOVSD ES:EDI,ESI                    ; 005b2447 | DAT_02c9a5a8 | DAT_02c9a5a0
    MOVSD ES:EDI,ESI                    ; 005b2448 | DAT_02c9a5ac | DAT_02c9a5a4
    CALL dword ptr CS:[0x5d060c]        ; 005b2449 | PTR_QueryPerformanceCounter_005d060c
    FLD double ptr [0x005f9c2a]         ; 005b2450 | DAT_005f9c2a
    FILD dword ptr [0x02c9a5a4]         ; 005b2456 | DAT_02c9a5a4
    FMUL ST1                            ; 005b245c
    FILD dword ptr [0x02c9a5ac]         ; 005b245e | DAT_02c9a5ac
    FMULP ST2                           ; 005b2464
    XOR ECX,ECX                         ; 005b2466
    MOV EAX,[0x02c9a5a0]                ; 005b2468 | DAT_02c9a5a0
    MOV dword ptr [ESP + 0x14],ECX      ; 005b246d
    MOV dword ptr [ESP + 0x10],EAX      ; 005b2471
    MOV EAX,[0x02c9a5a8]                ; 005b2475 | DAT_02c9a5a8
    MOV dword ptr [ESP + 0x1c],ECX      ; 005b247a
    MOV dword ptr [ESP + 0x18],EAX      ; 005b247e
    FILD qword ptr [ESP + 0x10]         ; 005b2482
    FILD qword ptr [ESP + 0x18]         ; 005b2486
    FADDP ST3,ST0                       ; 005b248a
    FADDP                               ; 005b248c
    FSUBP                               ; 005b248e
    FDIV double ptr [0x02c9a5b8]        ; 005b2490 | DAT_02c9a5b8
    FMUL double ptr [0x005f9c32]        ; 005b2496 | DAT_005f9c32
    FMUL double ptr [0x005f9c3a]        ; 005b249c | DAT_005f9c3a
    FLDZ                                ; 005b24a2
    FXCH                                ; 005b24a4
    FSTP double ptr [ESP]               ; 005b24a6
    FCOMP double ptr [ESP]              ; 005b24a9
    FNSTSW AX                           ; 005b24ac
    SAHF                                ; 005b24ae
    JNC 0x005b24cf                      ; 005b24af
        ;   XREF to: 005b24cf (CONDITIONAL_JUMP)  ; LAB_005b24cf
    FLD double ptr [ESP]                ; 005b24b1
    MOV ESI,dword ptr [0x02c9a5c0]      ; 005b24b4 | DAT_02c9a5c0
    CALL crt_math.c_round_FUN_005c03a0  ; 005b24ba
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x20]        ; 005b24bf
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b24c3
    ADD ESI,EAX                         ; 005b24c7
    MOV dword ptr [0x02c9a5c0],ESI      ; 005b24c9 | DAT_02c9a5c0
    MOV EAX,[0x02c9a5c0]                ; 005b24cf | DAT_02c9a5c0
        ;   Label: LAB_005b24cf
    MOV ESP,EBP                         ; 005b24d4
    POP EBP                             ; 005b24d6
    POP EDI                             ; 005b24d7
    POP ESI                             ; 005b24d8
    RET                                 ; 005b24d9
    CALL dword ptr CS:[0x5d0458]        ; 005b24da | PTR_timeGetTime_005d0458
        ;   Label: LAB_005b24da
    IMUL EAX,EAX,0x49c                  ; 005b24e1
    MOV ESP,EBP                         ; 005b24e7
    POP EBP                             ; 005b24e9
    POP EDI                             ; 005b24ea
    POP ESI                             ; 005b24eb
    RET                                 ; 005b24ec

