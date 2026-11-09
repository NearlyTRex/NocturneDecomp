; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b764e(float *param_1,float param_2,float param_3)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004b764e
        ;   Label: core_game.cpp_FUN_004b764e
    SUB ESP,0x4                         ; 004b7650
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7653
    MOV EAX,[0x00616494]                ; 004b7657 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004b765c
    FMUL float ptr [ESP + 0x10]         ; 004b7662
    FDIV float ptr [ESP + 0xc]          ; 004b7666
    FLDZ                                ; 004b766a
    FXCH                                ; 004b766c
    FSTP float ptr [ESP]                ; 004b766e
    FCOMP float ptr [EDX]               ; 004b7671
    FNSTSW AX                           ; 004b7673
    SAHF                                ; 004b7675
    JBE 0x004b7698                      ; 004b7676
        ;   XREF to: 004b7698 (CONDITIONAL_JUMP)  ; LAB_004b7698
    FLD float ptr [EDX]                 ; 004b7678
    FADD float ptr [ESP]                ; 004b767a
    FLDZ                                ; 004b767d
    FXCH                                ; 004b767f
    FSTP float ptr [EDX]                ; 004b7681
    FCOMP float ptr [EDX]               ; 004b7683
    FNSTSW AX                           ; 004b7685
    SAHF                                ; 004b7687
    JC 0x004b768e                       ; 004b7688
        ;   XREF to: 004b768e (CONDITIONAL_JUMP)  ; LAB_004b768e
    ADD ESP,0x4                         ; 004b768a
        ;   Label: LAB_004b768a
    RET                                 ; 004b768d
    MOV dword ptr [EDX],0x0             ; 004b768e
        ;   Label: LAB_004b768e
    ADD ESP,0x4                         ; 004b7694
    RET                                 ; 004b7697
    FLD float ptr [EDX]                 ; 004b7698
        ;   Label: LAB_004b7698
    FSUB float ptr [ESP]                ; 004b769a
    FLDZ                                ; 004b769d
    FXCH                                ; 004b769f
    FSTP float ptr [EDX]                ; 004b76a1
    FCOMP float ptr [EDX]               ; 004b76a3
    FNSTSW AX                           ; 004b76a5
    SAHF                                ; 004b76a7
    JBE 0x004b768a                      ; 004b76a8
        ;   XREF to: 004b768a (CONDITIONAL_JUMP)  ; LAB_004b768a
    MOV dword ptr [EDX],0x0             ; 004b76aa
    ADD ESP,0x4                         ; 004b76b0
    RET                                 ; 004b76b3

