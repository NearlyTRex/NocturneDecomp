; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpustack double crt_math.c_acos_FUN_00600162(double x)
;
;
; XREF[15]:
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 at 00472488
;   core_dirmat.cpp_atan2Custom_FUN_00472090 at 00472141
;   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 at 0047bada
;   core_dmodel.cpp_safeAcos_FUN_0047b170 at 0047b1c8
;   core_fire.cpp_CFireEffect_FUN_004c8230 at 004c8be8
;   core_fire.cpp_FUN_004bf1a0 at 004bf1df
;   core_stranger.cpp_CStranger_FUN_005be520 at 005bea48
;   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 at 005c478f
;   core_stranger.cpp_FUN_005c3750 at 005c379d
;   core_stranger.cpp_FUN_005c37e0 at 005c3898
;   ... and 5 more
;
; Referenced Globals:
;   float10 g_PiOver2 = 1.570796326794896558
;
; Called Functions:
;   crt_math.c_atan2_FUN_006013b1
;   crt_math.c_sqrt_FUN_0060710c
;
; *****************************************************************************

section .text

    PUSH AX                             ; 00600162
        ;   Label: crt_math.c_acos_FUN_00600162
    FLD ST0                             ; 00600164
    FMUL ST0                            ; 00600166
    FLD1                                ; 00600168
    FSUBRP                              ; 0060016a
    FTST                                ; 0060016c
    FNSTSW AX                           ; 0060016e
    SAHF                                ; 00600170
    JNZ 0x00600182                      ; 00600171 | LAB_00600182
        ;   XREF to: 00600182 (CONDITIONAL_JUMP)
    FCOMPP                              ; 00600173
    FNSTSW AX                           ; 00600175
    SAHF                                ; 00600177
    JA 0x0060017e                       ; 00600178 | LAB_0060017e
        ;   XREF to: 0060017e (CONDITIONAL_JUMP)
    FLDZ                                ; 0060017a
    JMP 0x00600180                      ; 0060017c | LAB_00600180
        ;   XREF to: 00600180 (UNCONDITIONAL_JUMP)
    FLDPI                               ; 0060017e
        ;   Label: LAB_0060017e
    JMP 0x0060019c                      ; 00600180 | LAB_0060019c
        ;   Label: LAB_00600180
        ;   XREF to: 0060019c (UNCONDITIONAL_JUMP)
    MOV AL,0x1                          ; 00600182
        ;   Label: LAB_00600182
    CALL crt_math.c_sqrt_FUN_0060710c   ; 00600184 | float10 crt_math.c_sqrt_FUN_0060710c(float10 value_to_sqrt, float10 original_value)
        ;   XREF to: 0060710c (UNCONDITIONAL_CALL)
    CMP AL,0x0                          ; 00600189
    JNZ 0x0060019c                      ; 0060018b | LAB_0060019c
        ;   XREF to: 0060019c (CONDITIONAL_JUMP)
    FXCH                                ; 0060018d
    CALL crt_math.c_atan2_FUN_006013b1  ; 0060018f | float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)
    FLD extended double ptr [0x00684b38] ; 00600194 | float10 g_PiOver2
    FSUBRP                              ; 0060019a
    POP AX                              ; 0060019c
        ;   Label: LAB_0060019c
    RET                                 ; 0060019e

