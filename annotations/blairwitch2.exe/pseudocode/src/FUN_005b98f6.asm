; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b98f6(void)
;
;
; XREF[8]:
;   FUN_00449610 at 00449638
;   FUN_004496e0 at 00449784
;   FUN_00591d10 at 00591d35
;   FUN_00591de0 at 00591ef4
;   FUN_00592280 at 00592396
;   FUN_005940b0 at 005940fa
;   FUN_00594210 at 0059425c
;   FUN_0059dd00 at 0059de8e
;
; Called Functions:
;   FUN_005b9989
;   FUN_005bfc46
;
; *****************************************************************************

section .text

    FLD ST0                             ; 005b98f6
        ;   Label: FUN_005b98f6
    FMUL ST0                            ; 005b98f8
    FLD1                                ; 005b98fa
    FSUBRP                              ; 005b98fc
    MOV AL,0x2                          ; 005b98fe
    CALL FUN_005bfc46                   ; 005b9900
        ;   XREF to: 005bfc46 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfc46()
    CMP AL,0x0                          ; 005b9905
    JNZ 0x005b9910                      ; 005b9907
        ;   XREF to: 005b9910 (CONDITIONAL_JUMP)  ; LAB_005b9910
    FXCH                                ; 005b9909
    CALL FUN_005b9989                   ; 005b990b
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9989()
    RET                                 ; 005b9910
        ;   Label: LAB_005b9910

