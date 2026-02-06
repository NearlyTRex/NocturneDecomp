; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_dampControlAxis_FUN_004dc370(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004dc370
        ;   Label: core_game.cpp_dampControlAxis_FUN_004dc370
    MOV EDX,dword ptr [ESP + 0x8]       ; 004dc373
    MOV EAX,[0x0067b654]                ; 004dc377 | g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004dc37c | g_CGameInstance.delta_time_float
    FMUL float ptr [ESP + 0x10]         ; 004dc382
    FDIV float ptr [ESP + 0xc]          ; 004dc386
    FLDZ                                ; 004dc38a
    FXCH                                ; 004dc38c
    FSTP float ptr [ESP]                ; 004dc38e
    FCOMP float ptr [EDX]               ; 004dc391
    FNSTSW AX                           ; 004dc393
    SAHF                                ; 004dc395
    JBE 0x004dc3b8                      ; 004dc396
        ;   XREF to: 004dc3b8 (CONDITIONAL_JUMP)  ; LAB_004dc3b8
    FLD float ptr [EDX]                 ; 004dc398
    FADD float ptr [ESP]                ; 004dc39a
    FLDZ                                ; 004dc39d
    FXCH                                ; 004dc39f
    FSTP float ptr [EDX]                ; 004dc3a1
    FCOMP float ptr [EDX]               ; 004dc3a3
    FNSTSW AX                           ; 004dc3a5
    SAHF                                ; 004dc3a7
    JC 0x004dc3ae                       ; 004dc3a8
        ;   XREF to: 004dc3ae (CONDITIONAL_JUMP)  ; LAB_004dc3ae
    ADD ESP,0x4                         ; 004dc3aa
        ;   Label: LAB_004dc3aa
    RET                                 ; 004dc3ad
    MOV dword ptr [EDX],0x0             ; 004dc3ae
        ;   Label: LAB_004dc3ae
    ADD ESP,0x4                         ; 004dc3b4
    RET                                 ; 004dc3b7
    FLD float ptr [EDX]                 ; 004dc3b8
        ;   Label: LAB_004dc3b8
    FSUB float ptr [ESP]                ; 004dc3ba
    FLDZ                                ; 004dc3bd
    FXCH                                ; 004dc3bf
    FSTP float ptr [EDX]                ; 004dc3c1
    FCOMP float ptr [EDX]               ; 004dc3c3
    FNSTSW AX                           ; 004dc3c5
    SAHF                                ; 004dc3c7
    JBE 0x004dc3aa                      ; 004dc3c8
        ;   XREF to: 004dc3aa (CONDITIONAL_JUMP)  ; LAB_004dc3aa
    MOV dword ptr [EDX],0x0             ; 004dc3ca
    ADD ESP,0x4                         ; 004dc3d0
    RET                                 ; 004dc3d3

