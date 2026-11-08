; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c1cd6(void)
;
;
; XREF[7]:
;   FUN_0045f770 at 0045f798
;   FUN_0045f840 at 0045f8e4
;   FUN_005b5860 at 005b5885
;   FUN_005b5930 at 005b5a44
;   FUN_005b5dd0 at 005b5ee6
;   FUN_005b7c00 at 005b7c4a
;   FUN_005b7d60 at 005b7dac
;
; Called Functions:
;   FUN_005c1d69
;   FUN_005c7f06
;
; *****************************************************************************

section .text

    FLD ST0                             ; 005c1cd6
        ;   Label: FUN_005c1cd6
    FMUL ST0                            ; 005c1cd8
    FLD1                                ; 005c1cda
    FSUBRP                              ; 005c1cdc
    MOV AL,0x2                          ; 005c1cde
    CALL FUN_005c7f06                   ; 005c1ce0
        ;   XREF to: 005c7f06 (UNCONDITIONAL_CALL)  ; undefined FUN_005c7f06()
    CMP AL,0x0                          ; 005c1ce5
    JNZ 0x005c1cf0                      ; 005c1ce7
        ;   XREF to: 005c1cf0 (CONDITIONAL_JUMP)  ; LAB_005c1cf0
    FXCH                                ; 005c1ce9
    CALL FUN_005c1d69                   ; 005c1ceb
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    RET                                 ; 005c1cf0
        ;   Label: LAB_005c1cf0

