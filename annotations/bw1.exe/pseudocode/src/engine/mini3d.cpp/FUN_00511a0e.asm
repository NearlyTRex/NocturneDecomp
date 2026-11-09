; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00511a0e(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2257c
;   undefined4 DAT_01d22580
;   undefined4 DAT_01d24ffc
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045fd80
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 00511a0e
        ;   Label: engine_mini3d.cpp_FUN_00511a0e
    PUSH EBX                            ; 00511a10
    PUSH ESI                            ; 00511a11
    PUSH EDI                            ; 00511a12
    PUSH EBP                            ; 00511a13
    SUB ESP,0x4c                        ; 00511a14
    MOV EDI,dword ptr [ESP + 0x60]      ; 00511a17
    MOV ESI,dword ptr [ESP + 0x64]      ; 00511a1b
    MOV EDX,dword ptr [0x01d22580]      ; 00511a1f | DAT_01d22580
    INC EDX                             ; 00511a25
    MOV dword ptr [0x01d22580],EDX      ; 00511a26 | DAT_01d22580
    CMP EDX,0x9                         ; 00511a2c
    JLE 0x00511a54                      ; 00511a2f
        ;   XREF to: 00511a54 (CONDITIONAL_JUMP)  ; LAB_00511a54
    MOV EBX,0x5e8b77                    ; 00511a31
    MOV EBP,0x3df                       ; 00511a36
    PUSH 0x5e8b8c                       ; 00511a3b
    MOV dword ptr [0x01d1d400],EBX      ; 00511a40 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00511a46 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00511a4c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00511a51
    MOV EAX,[0x01d22580]                ; 00511a54 | DAT_01d22580
        ;   Label: LAB_00511a54
    SHL EAX,0x2                         ; 00511a59
    MOV EBX,EAX                         ; 00511a5c
    SHL EAX,0x4                         ; 00511a5e
    SUB EAX,EBX                         ; 00511a61
    MOV EBX,0x1d22584                   ; 00511a63
    PUSH EDI                            ; 00511a68
    ADD EBX,EAX                         ; 00511a69
    LEA EAX,[ESP + 0x1c]                ; 00511a6b
    PUSH EAX                            ; 00511a6f
    LEA EAX,[ESP + 0x8]                 ; 00511a70
    PUSH EAX                            ; 00511a74
    CALL core_dirmat.cpp_FUN_0045fd80   ; 00511a75
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045fd80()
    ADD ESP,0xc                         ; 00511a7a
    LEA EAX,[EDI + 0x8]                 ; 00511a7d
    PUSH EAX                            ; 00511a80
    LEA EAX,[ESP + 0x8]                 ; 00511a81
    PUSH EAX                            ; 00511a85
    LEA EAX,[ESP + 0x14]                ; 00511a86
    PUSH EAX                            ; 00511a8a
    CALL core_dirmat.cpp_FUN_0045fd80   ; 00511a8b
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045fd80()
    ADD ESP,0xc                         ; 00511a90
    ADD EDI,0x4                         ; 00511a93
    PUSH EDI                            ; 00511a96
    LEA EAX,[ESP + 0x24]                ; 00511a97
    PUSH EAX                            ; 00511a9b
    LEA EAX,[ESP + 0x10]                ; 00511a9c
    PUSH EAX                            ; 00511aa0
    CALL core_dirmat.cpp_FUN_0045fd80   ; 00511aa1
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045fd80()
    ADD ESP,0xc                         ; 00511aa6
    FLD float ptr [ESP + 0x8]           ; 00511aa9
    FMUL float ptr [ESP]                ; 00511aad
    FLD float ptr [ESP + 0x8]           ; 00511ab0
    FMUL float ptr [ESP + 0x18]         ; 00511ab4
    FLD float ptr [ESP + 0xc]           ; 00511ab8
    FMUL float ptr [ESP + 0x18]         ; 00511abc
    FLD float ptr [ESP + 0x4]           ; 00511ac0
    FMUL float ptr [ESP + 0x18]         ; 00511ac4
    FLD ST3                             ; 00511ac8
    FMUL float ptr [ESP + 0xc]          ; 00511aca
    MOV EAX,[0x01d2257c]                ; 00511ace | DAT_01d2257c
    FLD float ptr [ESP + 0x20]          ; 00511ad3
    FMUL float ptr [ESP + 0x4]          ; 00511ad7
    FLD float ptr [EAX + 0x24]          ; 00511adb
    FSUB float ptr [ESI]                ; 00511ade
    FSTP float ptr [ESP + 0x10]         ; 00511ae0
    FLD float ptr [EAX + 0x28]          ; 00511ae4
    FSUB float ptr [ESI + 0x4]          ; 00511ae7
    FSTP float ptr [ESP + 0x24]         ; 00511aea
    FLD float ptr [EAX + 0x2c]          ; 00511aee
    FXCH ST6                            ; 00511af1
    FMUL float ptr [ESP + 0x4]          ; 00511af3
    FXCH                                ; 00511af7
    FADDP ST2,ST0                       ; 00511af9
    FXCH ST5                            ; 00511afb
    FSUB float ptr [ESI + 0x8]          ; 00511afd
    FXCH                                ; 00511b00
    FSTP float ptr [ESP + 0x2c]         ; 00511b02
    FLD float ptr [ESP + 0x20]          ; 00511b06
    FCHS                                ; 00511b0a
    FMUL float ptr [ESP + 0xc]          ; 00511b0c
    FLD float ptr [ESP + 0x20]          ; 00511b10
    FXCH                                ; 00511b14
    FADDP ST6,ST0                       ; 00511b16
    FMUL float ptr [ESP]                ; 00511b18
    FXCH ST5                            ; 00511b1b
    FSTP float ptr [ESP + 0x48]         ; 00511b1d
    FLD float ptr [ESP + 0x20]          ; 00511b21
    FMUL float ptr [ESP + 0x18]         ; 00511b25
    FLD float ptr [ESP]                 ; 00511b29
    FCHS                                ; 00511b2c
    FSTP float ptr [ESP + 0x3c]         ; 00511b2e
    FLD ST5                             ; 00511b32
    FMUL float ptr [ESP + 0xc]          ; 00511b34
    FXCH ST5                            ; 00511b38
    FSTP float ptr [ESP + 0x38]         ; 00511b3a
    FXCH ST5                            ; 00511b3e
    FMUL float ptr [ESP + 0x4]          ; 00511b40
    FXCH ST3                            ; 00511b44
    FSTP float ptr [ESP + 0x30]         ; 00511b46
    FLD float ptr [ESP + 0x10]          ; 00511b4a
    FMUL float ptr [ESP + 0x38]         ; 00511b4e
    FXCH ST2                            ; 00511b52
    FSTP float ptr [ESP + 0x44]         ; 00511b54
    FLD float ptr [ESP + 0x8]           ; 00511b58
    FCHS                                ; 00511b5c
    FMUL float ptr [ESP + 0x4]          ; 00511b5e
    FLD float ptr [ESP + 0xc]           ; 00511b62
    FXCH                                ; 00511b66
    FADDP ST5,ST0                       ; 00511b68
    FMUL float ptr [ESP + 0x8]          ; 00511b6a
    FXCH ST4                            ; 00511b6e
    FSTP float ptr [ESP + 0x28]         ; 00511b70
    FLD float ptr [ESP + 0x24]          ; 00511b74
    FMUL float ptr [ESP + 0x3c]         ; 00511b78
    FLD float ptr [ESP + 0x10]          ; 00511b7c
    FMUL float ptr [ESP + 0x2c]         ; 00511b80
    FXCH                                ; 00511b84
    FADDP ST3,ST0                       ; 00511b86
    FXCH ST5                            ; 00511b88
    FSTP float ptr [ESP + 0x40]         ; 00511b8a
    FLD ST0                             ; 00511b8e
    FMUL float ptr [ESP + 0x40]         ; 00511b90
    FLD float ptr [ESP + 0x10]          ; 00511b94
    FXCH ST5                            ; 00511b98
    FADDP ST4,ST0                       ; 00511b9a
    FXCH ST4                            ; 00511b9c
    FMUL float ptr [ESP + 0x48]         ; 00511b9e
    FXCH ST3                            ; 00511ba2
    FSTP float ptr [ESP + 0x34]         ; 00511ba4
    FLD float ptr [ESP + 0x24]          ; 00511ba8
    FMUL float ptr [ESP + 0x30]         ; 00511bac
    FLD float ptr [ESP + 0x24]          ; 00511bb0
    FXCH                                ; 00511bb4
    FADDP ST6,ST0                       ; 00511bb6
    FMUL float ptr [ESP + 0x44]         ; 00511bb8
    FLD ST1                             ; 00511bbc
    FMUL float ptr [ESP + 0x28]         ; 00511bbe
    FXCH                                ; 00511bc2
    FADDP ST4,ST0                       ; 00511bc4
    FXCH ST4                            ; 00511bc6
    FADDP ST2,ST0                       ; 00511bc8
    FMUL float ptr [ESP + 0x34]         ; 00511bca
    FXCH                                ; 00511bce
    FSTP float ptr [EBX + 0x2c]         ; 00511bd0
    FXCH ST2                            ; 00511bd3
    FADDP ST3,ST0                       ; 00511bd5
    FADDP                               ; 00511bd7
    FXCH                                ; 00511bd9
    FSTP float ptr [EBX + 0x24]         ; 00511bdb
    FSTP float ptr [EBX + 0x28]         ; 00511bde
    FLD float ptr [EAX + 0x30]          ; 00511be1
    FMUL float ptr [ESP + 0x2c]         ; 00511be4
    FLD float ptr [EAX + 0x34]          ; 00511be8
    FMUL float ptr [ESP + 0x30]         ; 00511beb
    FADDP                               ; 00511bef
    FLD float ptr [EAX + 0x38]          ; 00511bf1
    FMUL float ptr [ESP + 0x28]         ; 00511bf4
    FADDP                               ; 00511bf8
    FSTP float ptr [EBX + 0x30]         ; 00511bfa
    FLD float ptr [EAX + 0x30]          ; 00511bfd
    FMUL float ptr [ESP + 0x48]         ; 00511c00
    FLD float ptr [ESP + 0x44]          ; 00511c04
    FLD float ptr [EAX + 0x34]          ; 00511c08
    FMUL ST1                            ; 00511c0b
    FADDP ST2,ST0                       ; 00511c0d
    FLD float ptr [ESP + 0x34]          ; 00511c0f
    FLD float ptr [EAX + 0x38]          ; 00511c13
    FMUL ST1                            ; 00511c16
    FADDP ST3,ST0                       ; 00511c18
    FXCH ST2                            ; 00511c1a
    FSTP float ptr [EBX + 0x34]         ; 00511c1c
    FLD float ptr [ESP + 0x38]          ; 00511c1f
    FLD float ptr [EAX + 0x30]          ; 00511c23
    FMUL ST1                            ; 00511c26
    FLD float ptr [ESP + 0x3c]          ; 00511c28
    FLD float ptr [EAX + 0x34]          ; 00511c2c
    FMUL ST1                            ; 00511c2f
    FADDP ST2,ST0                       ; 00511c31
    FLD float ptr [ESP + 0x40]          ; 00511c33
    FLD float ptr [EAX + 0x38]          ; 00511c37
    FMUL ST1                            ; 00511c3a
    FADDP ST3,ST0                       ; 00511c3c
    FLD float ptr [ESP + 0x30]          ; 00511c3e
    FXCH ST3                            ; 00511c42
    FSTP float ptr [EBX + 0x38]         ; 00511c44
    FXCH ST2                            ; 00511c47
    FMUL float ptr [EAX + 0xc]          ; 00511c49
    FLD float ptr [ESP + 0x2c]          ; 00511c4c
    FMUL float ptr [EAX]                ; 00511c50
    FADDP                               ; 00511c52
    FLD float ptr [ESP + 0x28]          ; 00511c54
    FMUL float ptr [EAX + 0x18]         ; 00511c58
    FADDP                               ; 00511c5b
    FLD float ptr [ESP + 0x2c]          ; 00511c5d
    FXCH                                ; 00511c61
    FSTP float ptr [EBX]                ; 00511c63
    FMUL float ptr [EAX + 0x4]          ; 00511c65
    FLD float ptr [ESP + 0x30]          ; 00511c68
    FMUL float ptr [EAX + 0x10]         ; 00511c6c
    FADDP                               ; 00511c6f
    FLD float ptr [ESP + 0x28]          ; 00511c71
    FMUL float ptr [EAX + 0x1c]         ; 00511c75
    FADDP                               ; 00511c78
    FLD float ptr [ESP + 0x2c]          ; 00511c7a
    FXCH                                ; 00511c7e
    FSTP float ptr [EBX + 0x4]          ; 00511c80
    FMUL float ptr [EAX + 0x8]          ; 00511c83
    FLD float ptr [ESP + 0x30]          ; 00511c86
    FMUL float ptr [EAX + 0x14]         ; 00511c8a
    FADDP                               ; 00511c8d
    FLD float ptr [ESP + 0x28]          ; 00511c8f
    FMUL float ptr [EAX + 0x20]         ; 00511c93
    FADDP                               ; 00511c96
    FLD ST4                             ; 00511c98
    FXCH                                ; 00511c9a
    FSTP float ptr [EBX + 0x8]          ; 00511c9c
    FMUL float ptr [EAX + 0xc]          ; 00511c9f
    FLD float ptr [ESP + 0x48]          ; 00511ca2
    FMUL float ptr [EAX]                ; 00511ca6
    FADDP                               ; 00511ca8
    FLD ST5                             ; 00511caa
    FMUL float ptr [EAX + 0x18]         ; 00511cac
    FADDP                               ; 00511caf
    FLD float ptr [ESP + 0x48]          ; 00511cb1
    FXCH                                ; 00511cb5
    FSTP float ptr [EBX + 0xc]          ; 00511cb7
    FMUL float ptr [EAX + 0x4]          ; 00511cba
    FLD ST4                             ; 00511cbd
    FMUL float ptr [EAX + 0x10]         ; 00511cbf
    FADDP                               ; 00511cc2
    FLD ST5                             ; 00511cc4
    FMUL float ptr [EAX + 0x1c]         ; 00511cc6
    FADDP                               ; 00511cc9
    FSTP float ptr [EBX + 0x10]         ; 00511ccb
    FLD float ptr [ESP + 0x48]          ; 00511cce
    FMUL float ptr [EAX + 0x8]          ; 00511cd2
    FXCH ST4                            ; 00511cd5
    FMUL float ptr [EAX + 0x14]         ; 00511cd7
    FADDP ST4,ST0                       ; 00511cda
    FXCH ST4                            ; 00511cdc
    FMUL float ptr [EAX + 0x20]         ; 00511cde
    FADDP ST3,ST0                       ; 00511ce1
    FLD ST3                             ; 00511ce3
    FXCH ST3                            ; 00511ce5
    FSTP float ptr [EBX + 0x14]         ; 00511ce7
    FXCH ST2                            ; 00511cea
    FMUL float ptr [EAX + 0xc]          ; 00511cec
    FLD ST1                             ; 00511cef
    FMUL float ptr [EAX]                ; 00511cf1
    FADDP                               ; 00511cf3
    FLD ST2                             ; 00511cf5
    FMUL float ptr [EAX + 0x18]         ; 00511cf7
    FADDP                               ; 00511cfa
    FLD ST1                             ; 00511cfc
    FXCH                                ; 00511cfe
    FSTP float ptr [EBX + 0x18]         ; 00511d00
    FMUL float ptr [EAX + 0x4]          ; 00511d03
    FLD ST3                             ; 00511d06
    FMUL float ptr [EAX + 0x10]         ; 00511d08
    FADDP                               ; 00511d0b
    FLD ST2                             ; 00511d0d
    FMUL float ptr [EAX + 0x1c]         ; 00511d0f
    FADDP                               ; 00511d12
    FSTP float ptr [EBX + 0x1c]         ; 00511d14
    FMUL float ptr [EAX + 0x8]          ; 00511d17
    FXCH ST2                            ; 00511d1a
    FMUL float ptr [EAX + 0x14]         ; 00511d1c
    FADDP ST2,ST0                       ; 00511d1f
    FMUL float ptr [EAX + 0x20]         ; 00511d21
    MOV dword ptr [0x01d2257c],EBX      ; 00511d24 | DAT_01d2257c
    MOV EAX,0x1                         ; 00511d2a
    FADDP                               ; 00511d2f
    MOV [0x01d24ffc],EAX                ; 00511d31 | DAT_01d24ffc
    FSTP float ptr [EBX + 0x20]         ; 00511d36
    ADD ESP,0x4c                        ; 00511d39
    POP EBP                             ; 00511d3c
    POP EDI                             ; 00511d3d
    POP ESI                             ; 00511d3e
    POP EBX                             ; 00511d3f
    RET                                 ; 00511d40

