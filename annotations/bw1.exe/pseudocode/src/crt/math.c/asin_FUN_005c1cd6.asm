; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_asin_FUN_005c1cd6(void)
;
;
; XREF[7]:
;   core_dirmat.cpp_FUN_0045f840 at 0045f8e4
;   core_dirmat.cpp_angleFromSinCos_FUN_0045f770 at 0045f798
;   core_xform.cpp_FUN_005b7c00 at 005b7c4a
;   core_xform.cpp_FUN_005b7d60 at 005b7dac
;   core_xform.cpp_angleFromSinCos_FUN_005b5860 at 005b5885
;   core_xform.cpp_matrixToEulerAnglesZYX_FUN_005b5dd0 at 005b5ee6
;   core_xform.cpp_matrixToEulerAngles_FUN_005b5930 at 005b5a44
;
; Called Functions:
;   crt_math.c_atan2_FUN_005c1d69
;   crt_unknown.c_FUN_005c7f06
;
; *****************************************************************************

section .text

    FLD ST0                             ; 005c1cd6
        ;   Label: crt_math.c_asin_FUN_005c1cd6
    FMUL ST0                            ; 005c1cd8
    FLD1                                ; 005c1cda
    FSUBRP                              ; 005c1cdc
    MOV AL,0x2                          ; 005c1cde
    CALL crt_unknown.c_FUN_005c7f06     ; 005c1ce0
        ;   XREF to: 005c7f06 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7f06()
    CMP AL,0x0                          ; 005c1ce5
    JNZ 0x005c1cf0                      ; 005c1ce7
        ;   XREF to: 005c1cf0 (CONDITIONAL_JUMP)  ; LAB_005c1cf0
    FXCH                                ; 005c1ce9
    CALL crt_math.c_atan2_FUN_005c1d69  ; 005c1ceb
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    RET                                 ; 005c1cf0
        ;   Label: LAB_005c1cf0

