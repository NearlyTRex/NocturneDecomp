; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_asin_FUN_005b98f6(void)
;
;
; XREF[8]:
;   core_dirmat.cpp_FUN_00449610 at 00449638
;   core_dirmat.cpp_FUN_004496e0 at 00449784
;   core_xform.cpp_FUN_00591d10 at 00591d35
;   core_xform.cpp_FUN_00591de0 at 00591ef4
;   core_xform.cpp_FUN_00592280 at 00592396
;   core_xform.cpp_FUN_005940b0 at 005940fa
;   core_xform.cpp_FUN_00594210 at 0059425c
;   unkaddr_0059d350.cpp_FUN_0059dd00 at 0059de8e
;
; Called Functions:
;   crt_math.c_atan2_FUN_005b9989
;   crt_unknown.c_FUN_005bfc46
;
; *****************************************************************************

section .text

    FLD ST0                             ; 005b98f6
        ;   Label: crt_math.c_asin_FUN_005b98f6
    FMUL ST0                            ; 005b98f8
    FLD1                                ; 005b98fa
    FSUBRP                              ; 005b98fc
    MOV AL,0x2                          ; 005b98fe
    CALL crt_unknown.c_FUN_005bfc46     ; 005b9900
        ;   XREF to: 005bfc46 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfc46()
    CMP AL,0x0                          ; 005b9905
    JNZ 0x005b9910                      ; 005b9907
        ;   XREF to: 005b9910 (CONDITIONAL_JUMP)  ; LAB_005b9910
    FXCH                                ; 005b9909
    CALL crt_math.c_atan2_FUN_005b9989  ; 005b990b
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    RET                                 ; 005b9910
        ;   Label: LAB_005b9910

