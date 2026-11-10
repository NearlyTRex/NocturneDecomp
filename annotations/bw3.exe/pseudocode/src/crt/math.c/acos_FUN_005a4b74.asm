; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined2 crt_math_c_acos_FUN_005a4b74(void)
;
;
; XREF[13]:
;   core_dirmat.cpp_FUN_0045b9b0 at 0045bcfc
;   core_dirmat.cpp_angleFromSinCos_FUN_0045b8e0 at 0045b991
;   core_fire.cpp_FUN_004a2e20 at 004a36b4
;   core_fire.cpp_safeAcos_FUN_00496c0c at 00496c4f
;   core_prye.cpp_FUN_0051c1c0 at 0051c4f4
;   core_prye.cpp_FUN_005228be at 0052290d
;   core_prye.cpp_FUN_0052294e at 00522a10
;   core_prye.cpp_FUN_00522b00 at 00523463
;   core_prye.cpp_FUN_00523800 at 00523d2a
;   core_xform.cpp_angleFromSinCos_FUN_00583a40 at 00583af2
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_006075d0
;
; Called Functions:
;   crt_math.c_atan2_FUN_005a5cc1
;   crt_unknown.c_FUN_005aad76
;
; *****************************************************************************

section .text

    PUSH AX                             ; 005a4b74
        ;   Label: crt_math.c_acos_FUN_005a4b74
    FLD ST0                             ; 005a4b76
    FMUL ST0                            ; 005a4b78
    FLD1                                ; 005a4b7a
    FSUBRP                              ; 005a4b7c
    FTST                                ; 005a4b7e
    FNSTSW AX                           ; 005a4b80
    SAHF                                ; 005a4b82
    JNZ 0x005a4b94                      ; 005a4b83
        ;   XREF to: 005a4b94 (CONDITIONAL_JUMP)  ; LAB_005a4b94
    FCOMPP                              ; 005a4b85
    FNSTSW AX                           ; 005a4b87
    SAHF                                ; 005a4b89
    JA 0x005a4b90                       ; 005a4b8a
        ;   XREF to: 005a4b90 (CONDITIONAL_JUMP)  ; LAB_005a4b90
    FLDZ                                ; 005a4b8c
    JMP 0x005a4b92                      ; 005a4b8e
        ;   XREF to: 005a4b92 (UNCONDITIONAL_JUMP)  ; LAB_005a4b92
    FLDPI                               ; 005a4b90
        ;   Label: LAB_005a4b90
    JMP 0x005a4bae                      ; 005a4b92
        ;   XREF to: 005a4bae (UNCONDITIONAL_JUMP)  ; LAB_005a4bae
        ;   Label: LAB_005a4b92
    MOV AL,0x1                          ; 005a4b94
        ;   Label: LAB_005a4b94
    CALL crt_unknown.c_FUN_005aad76     ; 005a4b96
        ;   XREF to: 005aad76 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aad76()
    CMP AL,0x0                          ; 005a4b9b
    JNZ 0x005a4bae                      ; 005a4b9d
        ;   XREF to: 005a4bae (CONDITIONAL_JUMP)  ; LAB_005a4bae
    FXCH                                ; 005a4b9f
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 005a4ba1
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    FLD extended double ptr [0x006075d0] ; 005a4ba6 | DAT_006075d0
    FSUBRP                              ; 005a4bac
    POP AX                              ; 005a4bae
        ;   Label: LAB_005a4bae
    RET                                 ; 005a4bb0

