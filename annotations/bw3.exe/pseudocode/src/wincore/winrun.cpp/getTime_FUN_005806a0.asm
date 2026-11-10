; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int wincore_winrun_cpp_getTime_FUN_005806a0(void)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[35]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bb33c
;   core_game.cpp_CGame_process_FUN_004bf4b0 at 004bf973
;   core_game.cpp_CGame_saveClockTime_FUN_004b4430 at 004b4430
;   core_game.cpp_FUN_004b4440 at 004b44e5
;   core_game.cpp_FUN_004b6f30 at 004b6fd4
;   core_game.cpp_beginProfileTimer_FUN_004bf40c at 004bf41f
;   core_game.cpp_endProfileTimer_FUN_004bf430 at 004bf447
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 at 00504439
;   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370 at 0050739a
;   core_netgame.cpp_CNetGame_init_FUN_00503e20 at 00503e3a
;   ... and 25 more
;
; Referenced Globals:
;   void* PTR_timeGetTime_005b3458 = 001b3934
;   void* PTR_QueryPerformanceCounter_005b360c = 001b40b6
;   undefined4 DAT_005d7c4b
;   undefined4 DAT_005d7c53
;   undefined4 DAT_005d7c5b
;   undefined4 DAT_02d202b0
;   undefined4 DAT_02d202b4
;   undefined4 DAT_02d202b8
;   undefined4 DAT_02d202bc
;   undefined4 DAT_02d202c8
;   undefined4 DAT_02d202d0
;   undefined4 DAT_02d202d4
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   QueryPerformanceCounter
;   timeGetTime
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005806a0
        ;   Label: wincore_winrun.cpp_getTime_FUN_005806a0
    PUSH EDI                            ; 005806a1
    PUSH EBP                            ; 005806a2
    MOV EBP,ESP                         ; 005806a3
    SUB ESP,0x24                        ; 005806a5
    AND ESP,0xfffffff8                  ; 005806a8
    CMP dword ptr [0x02d202d4],0x0      ; 005806ab | DAT_02d202d4
    JNZ 0x0058075a                      ; 005806b2
        ;   XREF to: 0058075a (CONDITIONAL_JUMP)  ; LAB_0058075a
    MOV EDI,0x2d202b0                   ; 005806b8
    MOV ESI,0x2d202b8                   ; 005806bd
    PUSH 0x2d202b8                      ; 005806c2 | DAT_02d202b8
    MOVSD ES:EDI,ESI                    ; 005806c7 | DAT_02d202b8 | DAT_02d202b0
    MOVSD ES:EDI,ESI                    ; 005806c8 | DAT_02d202bc | DAT_02d202b4
    CALL dword ptr CS:[0x5b360c]        ; 005806c9 | PTR_QueryPerformanceCounter_005b360c
    FLD double ptr [0x005d7c4b]         ; 005806d0 | DAT_005d7c4b
    FILD dword ptr [0x02d202b4]         ; 005806d6 | DAT_02d202b4
    FMUL ST1                            ; 005806dc
    FILD dword ptr [0x02d202bc]         ; 005806de | DAT_02d202bc
    FMULP ST2                           ; 005806e4
    XOR ECX,ECX                         ; 005806e6
    MOV EAX,[0x02d202b0]                ; 005806e8 | DAT_02d202b0
    MOV dword ptr [ESP + 0x14],ECX      ; 005806ed
    MOV dword ptr [ESP + 0x10],EAX      ; 005806f1
    MOV EAX,[0x02d202b8]                ; 005806f5 | DAT_02d202b8
    MOV dword ptr [ESP + 0x1c],ECX      ; 005806fa
    MOV dword ptr [ESP + 0x18],EAX      ; 005806fe
    FILD qword ptr [ESP + 0x10]         ; 00580702
    FILD qword ptr [ESP + 0x18]         ; 00580706
    FADDP ST3,ST0                       ; 0058070a
    FADDP                               ; 0058070c
    FSUBP                               ; 0058070e
    FDIV double ptr [0x02d202c8]        ; 00580710 | DAT_02d202c8
    FMUL double ptr [0x005d7c53]        ; 00580716 | DAT_005d7c53
    FMUL double ptr [0x005d7c5b]        ; 0058071c | DAT_005d7c5b
    FLDZ                                ; 00580722
    FXCH                                ; 00580724
    FSTP double ptr [ESP]               ; 00580726
    FCOMP double ptr [ESP]              ; 00580729
    FNSTSW AX                           ; 0058072c
    SAHF                                ; 0058072e
    JNC 0x0058074f                      ; 0058072f
        ;   XREF to: 0058074f (CONDITIONAL_JUMP)  ; LAB_0058074f
    FLD double ptr [ESP]                ; 00580731
    MOV ESI,dword ptr [0x02d202d0]      ; 00580734 | DAT_02d202d0
    CALL crt_math.c_round_FUN_005a3120  ; 0058073a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x20]        ; 0058073f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00580743
    ADD ESI,EAX                         ; 00580747
    MOV dword ptr [0x02d202d0],ESI      ; 00580749 | DAT_02d202d0
    MOV EAX,[0x02d202d0]                ; 0058074f | DAT_02d202d0
        ;   Label: LAB_0058074f
    MOV ESP,EBP                         ; 00580754
    POP EBP                             ; 00580756
    POP EDI                             ; 00580757
    POP ESI                             ; 00580758
    RET                                 ; 00580759
    CALL dword ptr CS:[0x5b3458]        ; 0058075a | PTR_timeGetTime_005b3458
        ;   Label: LAB_0058075a
    IMUL EAX,EAX,0x49c                  ; 00580761
    MOV ESP,EBP                         ; 00580767
    POP EBP                             ; 00580769
    POP EDI                             ; 0058076a
    POP ESI                             ; 0058076b
    RET                                 ; 0058076c

