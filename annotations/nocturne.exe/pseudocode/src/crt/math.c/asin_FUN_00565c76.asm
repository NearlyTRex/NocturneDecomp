; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __fpustack_safe crt_math_c_asin_FUN_00565c76(void)
;
;
; XREF[3]:
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0 at 0044dc71
;   core_xform.cpp_matrixToEulerAnglesZYX_FUN_0055b6c0 at 0055b7e9
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180 at 0055b2a9
;
; Called Functions:
;   crt_math.c_atan2_FUN_00566c81
;   FUN_0056c5a8
;
; *****************************************************************************

section .text

    FLD ST0                             ; 00565c76
        ;   Label: crt_math.c_asin_FUN_00565c76
    FMUL ST0                            ; 00565c78
    FLD1                                ; 00565c7a
    FSUBRP                              ; 00565c7c
    MOV AL,0x2                          ; 00565c7e
    CALL FUN_0056c5a8                   ; 00565c80
        ;   XREF to: 0056c5a8 (UNCONDITIONAL_CALL)  ; undefined FUN_0056c5a8()
    CMP AL,0x0                          ; 00565c85
    JNZ 0x00565c90                      ; 00565c87
        ;   XREF to: 00565c90 (CONDITIONAL_JUMP)  ; LAB_00565c90
    FXCH                                ; 00565c89
    CALL crt_math.c_atan2_FUN_00566c81  ; 00565c8b
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    RET                                 ; 00565c90
        ;   Label: LAB_00565c90

