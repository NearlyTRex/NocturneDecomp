; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_004448f0(void)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; Referenced Globals:
;   undefined4 DAT_0057b96b
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004448f0
        ;   Label: FUN_004448f0
    FLD double ptr [ESP + 0xc]          ; 004448f3
    FLDLG2                              ; 004448f7
    FXCH                                ; 004448f9
    FYL2X                               ; 004448fb
    FMUL double ptr [0x0057b96b]        ; 004448fd | DAT_0057b96b
    FSTP double ptr [ESP]               ; 00444903
    MOV EAX,dword ptr [ESP]             ; 00444906
    MOV EDX,dword ptr [ESP + 0x4]       ; 00444909
    ADD ESP,0x8                         ; 0044490d
    RET                                 ; 00444910

