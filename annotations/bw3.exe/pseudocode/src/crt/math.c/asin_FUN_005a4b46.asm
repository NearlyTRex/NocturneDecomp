; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_asin_FUN_005a4b46(void)
;
;
; XREF[7]:
;   core_dirmat.cpp_FUN_0045b9b0 at 0045ba54
;   core_dirmat.cpp_angleFromSinCos_FUN_0045b8e0 at 0045b908
;   core_xform.cpp_FUN_00585de0 at 00585e2a
;   core_xform.cpp_FUN_00585f40 at 00585f8c
;   core_xform.cpp_angleFromSinCos_FUN_00583a40 at 00583a65
;   core_xform.cpp_matrixToEulerAnglesZYX_FUN_00583fb0 at 005840c6
;   core_xform.cpp_matrixToEulerAngles_FUN_00583b10 at 00583c24
;
; Called Functions:
;   crt_math.c_atan2_FUN_005a5cc1
;   crt_unknown.c_FUN_005aad76
;
; *****************************************************************************

section .text

    FLD ST0                             ; 005a4b46
        ;   Label: crt_math.c_asin_FUN_005a4b46
    FMUL ST0                            ; 005a4b48
    FLD1                                ; 005a4b4a
    FSUBRP                              ; 005a4b4c
    MOV AL,0x2                          ; 005a4b4e
    CALL crt_unknown.c_FUN_005aad76     ; 005a4b50
        ;   XREF to: 005aad76 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aad76()
    CMP AL,0x0                          ; 005a4b55
    JNZ 0x005a4b60                      ; 005a4b57
        ;   XREF to: 005a4b60 (CONDITIONAL_JUMP)  ; LAB_005a4b60
    FXCH                                ; 005a4b59
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 005a4b5b
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    RET                                 ; 005a4b60
        ;   Label: LAB_005a4b60

