; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049edc0(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77850
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0049edc0
        ;   Label: FUN_0049edc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049edc3
    MOV EAX,[0x005b9354]                ; 0049edc7 | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0049edcc | DAT_01c77850
    FMUL float ptr [ESP + 0x10]         ; 0049edd2
    FDIV float ptr [ESP + 0xc]          ; 0049edd6
    FLDZ                                ; 0049edda
    FXCH                                ; 0049eddc
    FSTP float ptr [ESP]                ; 0049edde
    FCOMP float ptr [EDX]               ; 0049ede1
    FNSTSW AX                           ; 0049ede3
    SAHF                                ; 0049ede5
    JBE 0x0049ee08                      ; 0049ede6
        ;   XREF to: 0049ee08 (CONDITIONAL_JUMP)  ; LAB_0049ee08
    FLD float ptr [EDX]                 ; 0049ede8
    FADD float ptr [ESP]                ; 0049edea
    FLDZ                                ; 0049eded
    FXCH                                ; 0049edef
    FSTP float ptr [EDX]                ; 0049edf1
    FCOMP float ptr [EDX]               ; 0049edf3
    FNSTSW AX                           ; 0049edf5
    SAHF                                ; 0049edf7
    JC 0x0049edfe                       ; 0049edf8
        ;   XREF to: 0049edfe (CONDITIONAL_JUMP)  ; LAB_0049edfe
    ADD ESP,0x4                         ; 0049edfa
        ;   Label: LAB_0049edfa
    RET                                 ; 0049edfd
    MOV dword ptr [EDX],0x0             ; 0049edfe
        ;   Label: LAB_0049edfe
    ADD ESP,0x4                         ; 0049ee04
    RET                                 ; 0049ee07
    FLD float ptr [EDX]                 ; 0049ee08
        ;   Label: LAB_0049ee08
    FSUB float ptr [ESP]                ; 0049ee0a
    FLDZ                                ; 0049ee0d
    FXCH                                ; 0049ee0f
    FSTP float ptr [EDX]                ; 0049ee11
    FCOMP float ptr [EDX]               ; 0049ee13
    FNSTSW AX                           ; 0049ee15
    SAHF                                ; 0049ee17
    JBE 0x0049edfa                      ; 0049ee18
        ;   XREF to: 0049edfa (CONDITIONAL_JUMP)  ; LAB_0049edfa
    MOV dword ptr [EDX],0x0             ; 0049ee1a
    ADD ESP,0x4                         ; 0049ee20
    RET                                 ; 0049ee23

