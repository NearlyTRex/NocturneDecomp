; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004d0e70(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004d0e70
        ;   Label: core_game.cpp_FUN_004d0e70
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d0e73
    MOV EAX,[0x0061d95c]                ; 004d0e77 | g_CGamePtr
    FLD float ptr [EAX + 0x294]         ; 004d0e7c
    FMUL float ptr [ESP + 0x10]         ; 004d0e82
    FDIV float ptr [ESP + 0xc]          ; 004d0e86
    FLDZ                                ; 004d0e8a
    FXCH                                ; 004d0e8c
    FSTP float ptr [ESP]                ; 004d0e8e
    FCOMP float ptr [EDX]               ; 004d0e91
    FNSTSW AX                           ; 004d0e93
    SAHF                                ; 004d0e95
    JBE 0x004d0eb8                      ; 004d0e96
        ;   XREF to: 004d0eb8 (CONDITIONAL_JUMP)  ; LAB_004d0eb8
    FLD float ptr [EDX]                 ; 004d0e98
    FADD float ptr [ESP]                ; 004d0e9a
    FLDZ                                ; 004d0e9d
    FXCH                                ; 004d0e9f
    FSTP float ptr [EDX]                ; 004d0ea1
    FCOMP float ptr [EDX]               ; 004d0ea3
    FNSTSW AX                           ; 004d0ea5
    SAHF                                ; 004d0ea7
    JC 0x004d0eae                       ; 004d0ea8
        ;   XREF to: 004d0eae (CONDITIONAL_JUMP)  ; LAB_004d0eae
    ADD ESP,0x4                         ; 004d0eaa
        ;   Label: LAB_004d0eaa
    RET                                 ; 004d0ead
    MOV dword ptr [EDX],0x0             ; 004d0eae
        ;   Label: LAB_004d0eae
    ADD ESP,0x4                         ; 004d0eb4
    RET                                 ; 004d0eb7
    FLD float ptr [EDX]                 ; 004d0eb8
        ;   Label: LAB_004d0eb8
    FSUB float ptr [ESP]                ; 004d0eba
    FLDZ                                ; 004d0ebd
    FXCH                                ; 004d0ebf
    FSTP float ptr [EDX]                ; 004d0ec1
    FCOMP float ptr [EDX]               ; 004d0ec3
    FNSTSW AX                           ; 004d0ec5
    SAHF                                ; 004d0ec7
    JBE 0x004d0eaa                      ; 004d0ec8
        ;   XREF to: 004d0eaa (CONDITIONAL_JUMP)  ; LAB_004d0eaa
    MOV dword ptr [EDX],0x0             ; 004d0eca
    ADD ESP,0x4                         ; 004d0ed0
    RET                                 ; 004d0ed3

