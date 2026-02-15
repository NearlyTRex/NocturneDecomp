; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __fpustack crt_math_c_asin_FUN_00600b94(float10 sine_value)
;
;
; XREF[5]:
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 at 00472201
;   core_dirmat.cpp_atan2Custom_FUN_00472090 at 004720b8
;   core_xform.cpp_atan2Approximation_FUN_005f55c0 at 005f55e8
;   core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0 at 005f5f60
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690 at 005f5a20
;
; Called Functions:
;   crt_math.c_atan2_FUN_006013b1
;   crt_math.c_sqrt_FUN_0060710c
;
; *****************************************************************************

section .text

    FLD ST0                             ; 00600b94
        ;   Label: crt_math.c_asin_FUN_00600b94
    FMUL ST0                            ; 00600b96
    FLD1                                ; 00600b98
    FSUBRP                              ; 00600b9a
    MOV AL,0x2                          ; 00600b9c
    CALL crt_math.c_sqrt_FUN_0060710c   ; 00600b9e
        ;   XREF to: 0060710c (UNCONDITIONAL_CALL)  ; double crt_math.c_sqrt_FUN_0060710c(double value)
    CMP AL,0x0                          ; 00600ba3
    JNZ 0x00600bae                      ; 00600ba5
        ;   XREF to: 00600bae (CONDITIONAL_JUMP)  ; LAB_00600bae
    FXCH                                ; 00600ba7
    CALL crt_math.c_atan2_FUN_006013b1  ; 00600ba9
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    RET                                 ; 00600bae
        ;   Label: LAB_00600bae

