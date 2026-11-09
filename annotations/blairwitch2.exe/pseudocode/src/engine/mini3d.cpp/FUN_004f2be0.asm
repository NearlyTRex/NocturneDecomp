; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f2be0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09918
;   undefined4 DAT_01d0991c
;   undefined4 DAT_01d0c398
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449c20
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2be0
        ;   Label: engine_mini3d.cpp_FUN_004f2be0
    PUSH ESI                            ; 004f2be1
    PUSH EDI                            ; 004f2be2
    PUSH EBP                            ; 004f2be3
    SUB ESP,0x4c                        ; 004f2be4
    MOV EDI,dword ptr [ESP + 0x60]      ; 004f2be7
    MOV ESI,dword ptr [ESP + 0x64]      ; 004f2beb
    MOV EDX,dword ptr [0x01d0991c]      ; 004f2bef | DAT_01d0991c
    INC EDX                             ; 004f2bf5
    MOV dword ptr [0x01d0991c],EDX      ; 004f2bf6 | DAT_01d0991c
    CMP EDX,0x9                         ; 004f2bfc
    JLE 0x004f2c24                      ; 004f2bff
        ;   XREF to: 004f2c24 (CONDITIONAL_JUMP)  ; LAB_004f2c24
    MOV EBX,0x5ddaf0                    ; 004f2c01
    MOV EBP,0x3cf                       ; 004f2c06
    PUSH 0x5ddb05                       ; 004f2c0b
    MOV dword ptr [0x01d046a0],EBX      ; 004f2c10 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004f2c16 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f2c1c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f2c21
    MOV EAX,[0x01d0991c]                ; 004f2c24 | DAT_01d0991c
        ;   Label: LAB_004f2c24
    SHL EAX,0x2                         ; 004f2c29
    MOV EBX,EAX                         ; 004f2c2c
    SHL EAX,0x4                         ; 004f2c2e
    SUB EAX,EBX                         ; 004f2c31
    MOV EBX,0x1d09920                   ; 004f2c33
    PUSH EDI                            ; 004f2c38
    ADD EBX,EAX                         ; 004f2c39
    LEA EAX,[ESP + 0x1c]                ; 004f2c3b
    PUSH EAX                            ; 004f2c3f
    LEA EAX,[ESP + 0x8]                 ; 004f2c40
    PUSH EAX                            ; 004f2c44
    CALL core_dirmat.cpp_FUN_00449c20   ; 004f2c45
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449c20()
    ADD ESP,0xc                         ; 004f2c4a
    LEA EAX,[EDI + 0x8]                 ; 004f2c4d
    PUSH EAX                            ; 004f2c50
    LEA EAX,[ESP + 0x8]                 ; 004f2c51
    PUSH EAX                            ; 004f2c55
    LEA EAX,[ESP + 0x14]                ; 004f2c56
    PUSH EAX                            ; 004f2c5a
    CALL core_dirmat.cpp_FUN_00449c20   ; 004f2c5b
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449c20()
    ADD ESP,0xc                         ; 004f2c60
    ADD EDI,0x4                         ; 004f2c63
    PUSH EDI                            ; 004f2c66
    LEA EAX,[ESP + 0x24]                ; 004f2c67
    PUSH EAX                            ; 004f2c6b
    LEA EAX,[ESP + 0x10]                ; 004f2c6c
    PUSH EAX                            ; 004f2c70
    CALL core_dirmat.cpp_FUN_00449c20   ; 004f2c71
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449c20()
    ADD ESP,0xc                         ; 004f2c76
    FLD float ptr [ESP + 0x8]           ; 004f2c79
    FMUL float ptr [ESP]                ; 004f2c7d
    FLD float ptr [ESP + 0x8]           ; 004f2c80
    FMUL float ptr [ESP + 0x18]         ; 004f2c84
    FLD float ptr [ESP + 0xc]           ; 004f2c88
    FMUL float ptr [ESP + 0x18]         ; 004f2c8c
    FLD float ptr [ESP + 0x4]           ; 004f2c90
    FMUL float ptr [ESP + 0x18]         ; 004f2c94
    FLD ST3                             ; 004f2c98
    FMUL float ptr [ESP + 0xc]          ; 004f2c9a
    MOV EAX,[0x01d09918]                ; 004f2c9e | DAT_01d09918
    FLD float ptr [ESP + 0x20]          ; 004f2ca3
    FMUL float ptr [ESP + 0x4]          ; 004f2ca7
    FLD float ptr [EAX + 0x24]          ; 004f2cab
    FSUB float ptr [ESI]                ; 004f2cae
    FSTP float ptr [ESP + 0x10]         ; 004f2cb0
    FLD float ptr [EAX + 0x28]          ; 004f2cb4
    FSUB float ptr [ESI + 0x4]          ; 004f2cb7
    FSTP float ptr [ESP + 0x24]         ; 004f2cba
    FLD float ptr [EAX + 0x2c]          ; 004f2cbe
    FXCH ST6                            ; 004f2cc1
    FMUL float ptr [ESP + 0x4]          ; 004f2cc3
    FXCH                                ; 004f2cc7
    FADDP ST2,ST0                       ; 004f2cc9
    FXCH ST5                            ; 004f2ccb
    FSUB float ptr [ESI + 0x8]          ; 004f2ccd
    FXCH                                ; 004f2cd0
    FSTP float ptr [ESP + 0x2c]         ; 004f2cd2
    FLD float ptr [ESP + 0x20]          ; 004f2cd6
    FCHS                                ; 004f2cda
    FMUL float ptr [ESP + 0xc]          ; 004f2cdc
    FLD float ptr [ESP + 0x20]          ; 004f2ce0
    FXCH                                ; 004f2ce4
    FADDP ST6,ST0                       ; 004f2ce6
    FMUL float ptr [ESP]                ; 004f2ce8
    FXCH ST5                            ; 004f2ceb
    FSTP float ptr [ESP + 0x48]         ; 004f2ced
    FLD float ptr [ESP + 0x20]          ; 004f2cf1
    FMUL float ptr [ESP + 0x18]         ; 004f2cf5
    FLD float ptr [ESP]                 ; 004f2cf9
    FCHS                                ; 004f2cfc
    FSTP float ptr [ESP + 0x3c]         ; 004f2cfe
    FLD ST5                             ; 004f2d02
    FMUL float ptr [ESP + 0xc]          ; 004f2d04
    FXCH ST5                            ; 004f2d08
    FSTP float ptr [ESP + 0x38]         ; 004f2d0a
    FXCH ST5                            ; 004f2d0e
    FMUL float ptr [ESP + 0x4]          ; 004f2d10
    FXCH ST3                            ; 004f2d14
    FSTP float ptr [ESP + 0x30]         ; 004f2d16
    FLD float ptr [ESP + 0x10]          ; 004f2d1a
    FMUL float ptr [ESP + 0x38]         ; 004f2d1e
    FXCH ST2                            ; 004f2d22
    FSTP float ptr [ESP + 0x44]         ; 004f2d24
    FLD float ptr [ESP + 0x8]           ; 004f2d28
    FCHS                                ; 004f2d2c
    FMUL float ptr [ESP + 0x4]          ; 004f2d2e
    FLD float ptr [ESP + 0xc]           ; 004f2d32
    FXCH                                ; 004f2d36
    FADDP ST5,ST0                       ; 004f2d38
    FMUL float ptr [ESP + 0x8]          ; 004f2d3a
    FXCH ST4                            ; 004f2d3e
    FSTP float ptr [ESP + 0x28]         ; 004f2d40
    FLD float ptr [ESP + 0x24]          ; 004f2d44
    FMUL float ptr [ESP + 0x3c]         ; 004f2d48
    FLD float ptr [ESP + 0x10]          ; 004f2d4c
    FMUL float ptr [ESP + 0x2c]         ; 004f2d50
    FXCH                                ; 004f2d54
    FADDP ST3,ST0                       ; 004f2d56
    FXCH ST5                            ; 004f2d58
    FSTP float ptr [ESP + 0x40]         ; 004f2d5a
    FLD ST0                             ; 004f2d5e
    FMUL float ptr [ESP + 0x40]         ; 004f2d60
    FLD float ptr [ESP + 0x10]          ; 004f2d64
    FXCH ST5                            ; 004f2d68
    FADDP ST4,ST0                       ; 004f2d6a
    FXCH ST4                            ; 004f2d6c
    FMUL float ptr [ESP + 0x48]         ; 004f2d6e
    FXCH ST3                            ; 004f2d72
    FSTP float ptr [ESP + 0x34]         ; 004f2d74
    FLD float ptr [ESP + 0x24]          ; 004f2d78
    FMUL float ptr [ESP + 0x30]         ; 004f2d7c
    FLD float ptr [ESP + 0x24]          ; 004f2d80
    FXCH                                ; 004f2d84
    FADDP ST6,ST0                       ; 004f2d86
    FMUL float ptr [ESP + 0x44]         ; 004f2d88
    FLD ST1                             ; 004f2d8c
    FMUL float ptr [ESP + 0x28]         ; 004f2d8e
    FXCH                                ; 004f2d92
    FADDP ST4,ST0                       ; 004f2d94
    FXCH ST4                            ; 004f2d96
    FADDP ST2,ST0                       ; 004f2d98
    FMUL float ptr [ESP + 0x34]         ; 004f2d9a
    FXCH                                ; 004f2d9e
    FSTP float ptr [EBX + 0x2c]         ; 004f2da0
    FXCH ST2                            ; 004f2da3
    FADDP ST3,ST0                       ; 004f2da5
    FADDP                               ; 004f2da7
    FXCH                                ; 004f2da9
    FSTP float ptr [EBX + 0x24]         ; 004f2dab
    FSTP float ptr [EBX + 0x28]         ; 004f2dae
    FLD float ptr [EAX + 0x30]          ; 004f2db1
    FMUL float ptr [ESP + 0x2c]         ; 004f2db4
    FLD float ptr [EAX + 0x34]          ; 004f2db8
    FMUL float ptr [ESP + 0x30]         ; 004f2dbb
    FADDP                               ; 004f2dbf
    FLD float ptr [EAX + 0x38]          ; 004f2dc1
    FMUL float ptr [ESP + 0x28]         ; 004f2dc4
    FADDP                               ; 004f2dc8
    FSTP float ptr [EBX + 0x30]         ; 004f2dca
    FLD float ptr [EAX + 0x30]          ; 004f2dcd
    FMUL float ptr [ESP + 0x48]         ; 004f2dd0
    FLD float ptr [ESP + 0x44]          ; 004f2dd4
    FLD float ptr [EAX + 0x34]          ; 004f2dd8
    FMUL ST1                            ; 004f2ddb
    FADDP ST2,ST0                       ; 004f2ddd
    FLD float ptr [ESP + 0x34]          ; 004f2ddf
    FLD float ptr [EAX + 0x38]          ; 004f2de3
    FMUL ST1                            ; 004f2de6
    FADDP ST3,ST0                       ; 004f2de8
    FXCH ST2                            ; 004f2dea
    FSTP float ptr [EBX + 0x34]         ; 004f2dec
    FLD float ptr [ESP + 0x38]          ; 004f2def
    FLD float ptr [EAX + 0x30]          ; 004f2df3
    FMUL ST1                            ; 004f2df6
    FLD float ptr [ESP + 0x3c]          ; 004f2df8
    FLD float ptr [EAX + 0x34]          ; 004f2dfc
    FMUL ST1                            ; 004f2dff
    FADDP ST2,ST0                       ; 004f2e01
    FLD float ptr [ESP + 0x40]          ; 004f2e03
    FLD float ptr [EAX + 0x38]          ; 004f2e07
    FMUL ST1                            ; 004f2e0a
    FADDP ST3,ST0                       ; 004f2e0c
    FLD float ptr [ESP + 0x30]          ; 004f2e0e
    FXCH ST3                            ; 004f2e12
    FSTP float ptr [EBX + 0x38]         ; 004f2e14
    FXCH ST2                            ; 004f2e17
    FMUL float ptr [EAX + 0xc]          ; 004f2e19
    FLD float ptr [ESP + 0x2c]          ; 004f2e1c
    FMUL float ptr [EAX]                ; 004f2e20
    FADDP                               ; 004f2e22
    FLD float ptr [ESP + 0x28]          ; 004f2e24
    FMUL float ptr [EAX + 0x18]         ; 004f2e28
    FADDP                               ; 004f2e2b
    FLD float ptr [ESP + 0x2c]          ; 004f2e2d
    FXCH                                ; 004f2e31
    FSTP float ptr [EBX]                ; 004f2e33
    FMUL float ptr [EAX + 0x4]          ; 004f2e35
    FLD float ptr [ESP + 0x30]          ; 004f2e38
    FMUL float ptr [EAX + 0x10]         ; 004f2e3c
    FADDP                               ; 004f2e3f
    FLD float ptr [ESP + 0x28]          ; 004f2e41
    FMUL float ptr [EAX + 0x1c]         ; 004f2e45
    FADDP                               ; 004f2e48
    FLD float ptr [ESP + 0x2c]          ; 004f2e4a
    FXCH                                ; 004f2e4e
    FSTP float ptr [EBX + 0x4]          ; 004f2e50
    FMUL float ptr [EAX + 0x8]          ; 004f2e53
    FLD float ptr [ESP + 0x30]          ; 004f2e56
    FMUL float ptr [EAX + 0x14]         ; 004f2e5a
    FADDP                               ; 004f2e5d
    FLD float ptr [ESP + 0x28]          ; 004f2e5f
    FMUL float ptr [EAX + 0x20]         ; 004f2e63
    FADDP                               ; 004f2e66
    FLD ST4                             ; 004f2e68
    FXCH                                ; 004f2e6a
    FSTP float ptr [EBX + 0x8]          ; 004f2e6c
    FMUL float ptr [EAX + 0xc]          ; 004f2e6f
    FLD float ptr [ESP + 0x48]          ; 004f2e72
    FMUL float ptr [EAX]                ; 004f2e76
    FADDP                               ; 004f2e78
    FLD ST5                             ; 004f2e7a
    FMUL float ptr [EAX + 0x18]         ; 004f2e7c
    FADDP                               ; 004f2e7f
    FLD float ptr [ESP + 0x48]          ; 004f2e81
    FXCH                                ; 004f2e85
    FSTP float ptr [EBX + 0xc]          ; 004f2e87
    FMUL float ptr [EAX + 0x4]          ; 004f2e8a
    FLD ST4                             ; 004f2e8d
    FMUL float ptr [EAX + 0x10]         ; 004f2e8f
    FADDP                               ; 004f2e92
    FLD ST5                             ; 004f2e94
    FMUL float ptr [EAX + 0x1c]         ; 004f2e96
    FADDP                               ; 004f2e99
    FSTP float ptr [EBX + 0x10]         ; 004f2e9b
    FLD float ptr [ESP + 0x48]          ; 004f2e9e
    FMUL float ptr [EAX + 0x8]          ; 004f2ea2
    FXCH ST4                            ; 004f2ea5
    FMUL float ptr [EAX + 0x14]         ; 004f2ea7
    FADDP ST4,ST0                       ; 004f2eaa
    FXCH ST4                            ; 004f2eac
    FMUL float ptr [EAX + 0x20]         ; 004f2eae
    FADDP ST3,ST0                       ; 004f2eb1
    FLD ST3                             ; 004f2eb3
    FXCH ST3                            ; 004f2eb5
    FSTP float ptr [EBX + 0x14]         ; 004f2eb7
    FXCH ST2                            ; 004f2eba
    FMUL float ptr [EAX + 0xc]          ; 004f2ebc
    FLD ST1                             ; 004f2ebf
    FMUL float ptr [EAX]                ; 004f2ec1
    FADDP                               ; 004f2ec3
    FLD ST2                             ; 004f2ec5
    FMUL float ptr [EAX + 0x18]         ; 004f2ec7
    FADDP                               ; 004f2eca
    FLD ST1                             ; 004f2ecc
    FXCH                                ; 004f2ece
    FSTP float ptr [EBX + 0x18]         ; 004f2ed0
    FMUL float ptr [EAX + 0x4]          ; 004f2ed3
    FLD ST3                             ; 004f2ed6
    FMUL float ptr [EAX + 0x10]         ; 004f2ed8
    FADDP                               ; 004f2edb
    FLD ST2                             ; 004f2edd
    FMUL float ptr [EAX + 0x1c]         ; 004f2edf
    FADDP                               ; 004f2ee2
    FSTP float ptr [EBX + 0x1c]         ; 004f2ee4
    FMUL float ptr [EAX + 0x8]          ; 004f2ee7
    FXCH ST2                            ; 004f2eea
    FMUL float ptr [EAX + 0x14]         ; 004f2eec
    FADDP ST2,ST0                       ; 004f2eef
    FMUL float ptr [EAX + 0x20]         ; 004f2ef1
    MOV dword ptr [0x01d09918],EBX      ; 004f2ef4 | DAT_01d09918
    MOV EAX,0x1                         ; 004f2efa
    FADDP                               ; 004f2eff
    MOV [0x01d0c398],EAX                ; 004f2f01 | DAT_01d0c398
    FSTP float ptr [EBX + 0x20]         ; 004f2f06
    ADD ESP,0x4c                        ; 004f2f09
    POP EBP                             ; 004f2f0c
    POP EDI                             ; 004f2f0d
    POP ESI                             ; 004f2f0e
    POP EBX                             ; 004f2f0f
    RET                                 ; 004f2f10

