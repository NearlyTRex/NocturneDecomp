; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(undefined4 param_1,float *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[55]:
;   FUN_0040f740 at 0040f77a
;   FUN_00414e70 at 00414e99
;   FUN_004161a0 at 00416268
;   FUN_0041ea00 at 0041ea74
;   FUN_0041eaf0 at 0041eb3d
;   FUN_00421540 at 004215ee
;   FUN_00437ab0 at 00437af8
;   FUN_0043cbc0 at 0043cbe9
;   FUN_00450c90 at 00450cea
;   FUN_00481d90 at 00481db9
;   ... and 45 more
;
; Referenced Globals:
;   double DOUBLE_0057dc2d = 256
;   double DOUBLE_0057dc35 = 0.318309886192889
;   double DOUBLE_0057dc3d = 32768
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_matrix.c_matrixPushAndTransform_FUN_004cd380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460aa0
        ;   Label: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
    PUSH EBP                            ; 00460aa1
    SUB ESP,0xc                         ; 00460aa2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00460aa5
    MOV EDX,dword ptr [ESP + 0x20]      ; 00460aa9
    TEST EDX,EDX                        ; 00460aad
    JNZ 0x00460b1c                      ; 00460aaf
        ;   XREF to: 00460b1c (CONDITIONAL_JUMP)  ; LAB_00460b1c
    FLD double ptr [0x0057dc35]         ; 00460ab1 | DOUBLE_0057dc35
    FLD float ptr [EAX + 0x4]           ; 00460ab7
    FMUL ST1                            ; 00460aba
    FLD float ptr [EAX + 0x8]           ; 00460abc
    FMUL ST2                            ; 00460abf
    FLD float ptr [EAX]                 ; 00460ac1
    FMULP ST3                           ; 00460ac3
    FXCH                                ; 00460ac5
    FLD double ptr [0x0057dc3d]         ; 00460ac7 | DOUBLE_0057dc3d
    FXCH                                ; 00460acd
    FMUL ST1                            ; 00460acf
    PUSH EDX                            ; 00460ad1
    FXCH ST2                            ; 00460ad2
    FMUL ST1                            ; 00460ad4
    PUSH EDX                            ; 00460ad6
    FXCH ST3                            ; 00460ad7
    FMULP                               ; 00460ad9
    PUSH EDX                            ; 00460adb
    FXCH                                ; 00460adc
    CALL crt_math.c_round_FUN_00563a30  ; 00460ade
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 00460ae3
    CALL crt_math.c_round_FUN_00563a30  ; 00460ae5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 00460aea
    FISTP dword ptr [ESP + 0x10]        ; 00460aec
    FXCH                                ; 00460af0
    FISTP dword ptr [ESP + 0xc]         ; 00460af2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00460af6
    MOV ECX,dword ptr [ESP + 0xc]       ; 00460afa
    PUSH EDX                            ; 00460afe
    CALL crt_math.c_round_FUN_00563a30  ; 00460aff
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH ECX                            ; 00460b04
    FISTP dword ptr [ESP + 0x14]        ; 00460b05
    MOV EBX,dword ptr [ESP + 0x14]      ; 00460b09
    PUSH EBX                            ; 00460b0d
    CALL engine_matrix.c_matrixPushAndTransform_FUN_004cd380 ; 00460b0e
        ;   XREF to: 004cd380 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_matrixPushAndTransform_FUN_004cd380()
    ADD ESP,0x18                        ; 00460b13
    ADD ESP,0xc                         ; 00460b16
    POP EBP                             ; 00460b19
    POP EBX                             ; 00460b1a
    RET                                 ; 00460b1b
    PUSH EDI                            ; 00460b1c
        ;   Label: LAB_00460b1c
    PUSH ESI                            ; 00460b1d
    FLD double ptr [0x0057dc2d]         ; 00460b1e | DOUBLE_0057dc2d
    FLD float ptr [EDX + 0x8]           ; 00460b24
    FMUL ST1                            ; 00460b27
    FLD float ptr [EDX + 0x4]           ; 00460b29
    FMUL ST2                            ; 00460b2c
    FLD float ptr [EDX]                 ; 00460b2e
    FMULP ST3                           ; 00460b30
    FLD double ptr [0x0057dc35]         ; 00460b32 | DOUBLE_0057dc35
    FLD float ptr [EAX + 0x4]           ; 00460b38
    FMUL ST1                            ; 00460b3b
    FLD float ptr [EAX + 0x8]           ; 00460b3d
    FMUL ST2                            ; 00460b40
    FLD float ptr [EAX]                 ; 00460b42
    FMULP ST3                           ; 00460b44
    FXCH                                ; 00460b46
    FLD double ptr [0x0057dc3d]         ; 00460b48 | DOUBLE_0057dc3d
    FXCH                                ; 00460b4e
    FMUL ST1                            ; 00460b50
    FXCH ST2                            ; 00460b52
    FMUL ST1                            ; 00460b54
    FXCH ST3                            ; 00460b56
    FMULP                               ; 00460b58
    FXCH ST4                            ; 00460b5a
    CALL crt_math.c_round_FUN_00563a30  ; 00460b5c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 00460b61
    CALL crt_math.c_round_FUN_00563a30  ; 00460b63
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST5                            ; 00460b68
    CALL crt_math.c_round_FUN_00563a30  ; 00460b6a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 00460b6f
    FISTP dword ptr [ESP + 0x8]         ; 00460b71
    FXCH ST4                            ; 00460b75
    FISTP dword ptr [ESP + 0x10]        ; 00460b77
    FXCH                                ; 00460b7b
    FISTP dword ptr [ESP + 0xc]         ; 00460b7d
    MOV ECX,dword ptr [ESP + 0x8]       ; 00460b81
    MOV EBX,dword ptr [ESP + 0x10]      ; 00460b85
    MOV ESI,dword ptr [ESP + 0xc]       ; 00460b89
    FXCH ST2                            ; 00460b8d
    CALL crt_math.c_round_FUN_00563a30  ; 00460b8f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 00460b94
    CALL crt_math.c_round_FUN_00563a30  ; 00460b96
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH ECX                            ; 00460b9b
    FXCH ST2                            ; 00460b9c
    FISTP dword ptr [ESP + 0x10]        ; 00460b9e
    PUSH EBX                            ; 00460ba2
    FXCH                                ; 00460ba3
    FISTP dword ptr [ESP + 0x18]        ; 00460ba5
    PUSH ESI                            ; 00460ba9
    MOV EDI,dword ptr [ESP + 0x18]      ; 00460baa
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00460bae
    PUSH EDI                            ; 00460bb2
    CALL crt_math.c_round_FUN_00563a30  ; 00460bb3
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH EBP                            ; 00460bb8
    FISTP dword ptr [ESP + 0x24]        ; 00460bb9
    MOV EAX,dword ptr [ESP + 0x24]      ; 00460bbd
    PUSH EAX                            ; 00460bc1
    CALL engine_matrix.c_matrixPushAndTransform_FUN_004cd380 ; 00460bc2
        ;   XREF to: 004cd380 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_matrixPushAndTransform_FUN_004cd380()
    ADD ESP,0x18                        ; 00460bc7
    POP ESI                             ; 00460bca
    POP EDI                             ; 00460bcb
    ADD ESP,0xc                         ; 00460bcc
    POP EBP                             ; 00460bcf
    POP EBX                             ; 00460bd0
    RET                                 ; 00460bd1

