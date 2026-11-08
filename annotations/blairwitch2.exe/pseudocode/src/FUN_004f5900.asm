; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f5900(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d0988c
;   undefined4 DAT_01d09890
;   undefined4 DAT_01d09894
;   undefined4 DAT_01d09898
;   undefined4 DAT_01d0989c
;   undefined4 DAT_01d098a0
;   undefined4 DAT_01d098a4
;   undefined4 DAT_01d098a8
;   undefined4 DAT_01d098ac
;   undefined4 DAT_01d098b0
;   undefined4 DAT_01d098b4
;   undefined4 DAT_01d098b8
;   undefined4 DAT_01d09918
;   undefined4 DAT_01d0991c
;   undefined4 DAT_01d12118
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004f5900
        ;   Label: FUN_004f5900
    SUB ESP,0x10                        ; 004f5901
    MOV EDX,dword ptr [0x01d0991c]      ; 004f5904 | DAT_01d0991c
    TEST EDX,EDX                        ; 004f590a
    JZ 0x004f5bb4                       ; 004f590c
        ;   XREF to: 004f5bb4 (CONDITIONAL_JUMP)  ; LAB_004f5bb4
    MOV EAX,[0x01d09918]                ; 004f5912 | DAT_01d09918
    FLD float ptr [EAX + 0x4]           ; 004f5917
    FMUL float ptr [0x01d09898]         ; 004f591a | DAT_01d09898
    FLD float ptr [EAX + 0x4]           ; 004f5920
    FMUL float ptr [0x01d0989c]         ; 004f5923 | DAT_01d0989c
    FLD float ptr [EAX + 0x4]           ; 004f5929
    FMUL float ptr [0x01d098a0]         ; 004f592c | DAT_01d098a0
    FLD float ptr [EAX + 0xc]           ; 004f5932
    FMUL float ptr [0x01d0988c]         ; 004f5935 | DAT_01d0988c
    FLD float ptr [EAX]                 ; 004f593b
    FMUL float ptr [0x01d0988c]         ; 004f593d | DAT_01d0988c
    FLD float ptr [EAX + 0xc]           ; 004f5943
    FXCH                                ; 004f5946
    FADDP ST5,ST0                       ; 004f5948
    FMUL float ptr [0x01d09890]         ; 004f594a | DAT_01d09890
    FLD float ptr [EAX + 0x8]           ; 004f5950
    FMUL float ptr [0x01d098a4]         ; 004f5953 | DAT_01d098a4
    FLD float ptr [EAX]                 ; 004f5959
    FXCH                                ; 004f595b
    FADDP ST6,ST0                       ; 004f595d
    FMUL float ptr [0x01d09890]         ; 004f595f | DAT_01d09890
    FXCH ST5                            ; 004f5965
    FSTP float ptr [0x01d12118]         ; 004f5967 | DAT_01d12118
    FLD float ptr [EAX + 0xc]           ; 004f596d
    FXCH ST5                            ; 004f5970
    FADDP ST4,ST0                       ; 004f5972
    FXCH ST4                            ; 004f5974
    FMUL float ptr [0x01d09894]         ; 004f5976 | DAT_01d09894
    FLD float ptr [EAX + 0x8]           ; 004f597c
    FMUL float ptr [0x01d098a8]         ; 004f597f | DAT_01d098a8
    FLD float ptr [EAX]                 ; 004f5985
    FXCH                                ; 004f5987
    FADDP ST5,ST0                       ; 004f5989
    FMUL float ptr [0x01d09894]         ; 004f598b | DAT_01d09894
    FXCH ST4                            ; 004f5991
    FSTP float ptr [0x01d1211c]         ; 004f5993 | DAT_01d1211c
    FLD float ptr [EAX + 0x18]          ; 004f5999
    FXCH ST4                            ; 004f599c
    FADDP ST3,ST0                       ; 004f599e
    FXCH ST3                            ; 004f59a0
    FMUL float ptr [0x01d0988c]         ; 004f59a2 | DAT_01d0988c
    FLD float ptr [EAX + 0x8]           ; 004f59a8
    FMUL float ptr [0x01d098ac]         ; 004f59ab | DAT_01d098ac
    FLD float ptr [EAX + 0x10]          ; 004f59b1
    FXCH                                ; 004f59b4
    FADDP ST4,ST0                       ; 004f59b6
    FMUL float ptr [0x01d09898]         ; 004f59b8 | DAT_01d09898
    FXCH ST3                            ; 004f59be
    FSTP float ptr [0x01d12120]         ; 004f59c0 | DAT_01d12120
    FLD float ptr [EAX + 0x18]          ; 004f59c6
    FXCH ST3                            ; 004f59c9
    FADDP ST2,ST0                       ; 004f59cb
    FXCH ST2                            ; 004f59cd
    FMUL float ptr [0x01d09890]         ; 004f59cf | DAT_01d09890
    FLD float ptr [EAX + 0x14]          ; 004f59d5
    FMUL float ptr [0x01d098a4]         ; 004f59d8 | DAT_01d098a4
    FLD float ptr [EAX + 0x10]          ; 004f59de
    FXCH                                ; 004f59e1
    FADDP ST3,ST0                       ; 004f59e3
    FMUL float ptr [0x01d0989c]         ; 004f59e5 | DAT_01d0989c
    FXCH ST2                            ; 004f59eb
    FSTP float ptr [0x01d12128]         ; 004f59ed | DAT_01d12128
    FLD float ptr [EAX + 0x18]          ; 004f59f3
    FMUL float ptr [0x01d09894]         ; 004f59f6 | DAT_01d09894
    FXCH ST2                            ; 004f59fc
    FADDP ST5,ST0                       ; 004f59fe
    XOR ECX,ECX                         ; 004f5a00
    FLD float ptr [EAX + 0x14]          ; 004f5a02
    FMUL float ptr [0x01d098a8]         ; 004f5a05 | DAT_01d098a8
    FLD float ptr [EAX + 0x10]          ; 004f5a0b
    FXCH                                ; 004f5a0e
    FADDP ST6,ST0                       ; 004f5a10
    FMUL float ptr [0x01d098a0]         ; 004f5a12 | DAT_01d098a0
    FXCH ST5                            ; 004f5a18
    FSTP float ptr [0x01d1212c]         ; 004f5a1a | DAT_01d1212c
    FLD float ptr [EAX + 0x28]          ; 004f5a20
    FMUL float ptr [EAX + 0xc]          ; 004f5a23
    FXCH ST5                            ; 004f5a26
    FADDP ST4,ST0                       ; 004f5a28
    MOV dword ptr [0x01d12124],ECX      ; 004f5a2a | DAT_01d12124
    FLD float ptr [EAX + 0x14]          ; 004f5a30
    FMUL float ptr [0x01d098ac]         ; 004f5a33 | DAT_01d098ac
    FLD float ptr [EAX + 0x1c]          ; 004f5a39
    FXCH                                ; 004f5a3c
    FADDP ST5,ST0                       ; 004f5a3e
    FMUL float ptr [0x01d09898]         ; 004f5a40 | DAT_01d09898
    FXCH ST4                            ; 004f5a46
    FSTP float ptr [0x01d12130]         ; 004f5a48 | DAT_01d12130
    FLD float ptr [EAX + 0x1c]          ; 004f5a4e
    FMUL float ptr [0x01d0989c]         ; 004f5a51 | DAT_01d0989c
    FLD float ptr [EAX + 0x1c]          ; 004f5a57
    FXCH ST5                            ; 004f5a5a
    FADDP ST4,ST0                       ; 004f5a5c
    FXCH ST4                            ; 004f5a5e
    FMUL float ptr [0x01d098a0]         ; 004f5a60 | DAT_01d098a0
    FLD float ptr [EAX + 0x20]          ; 004f5a66
    FMUL float ptr [0x01d098a4]         ; 004f5a69 | DAT_01d098a4
    FXCH ST5                            ; 004f5a6f
    FADDP ST2,ST0                       ; 004f5a71
    FLD float ptr [EAX + 0x24]          ; 004f5a73
    FCHS                                ; 004f5a76
    FST float ptr [ESP + 0x4]           ; 004f5a78
    FMUL float ptr [EAX]                ; 004f5a7c
    FXCH                                ; 004f5a7e
    FADDP ST3,ST0                       ; 004f5a80
    FXCH ST4                            ; 004f5a82
    FADDP ST3,ST0                       ; 004f5a84
    FLD float ptr [EAX + 0x20]          ; 004f5a86
    FMUL float ptr [0x01d098a8]         ; 004f5a89 | DAT_01d098a8
    FLD float ptr [EAX + 0x20]          ; 004f5a8f
    FMUL float ptr [0x01d098ac]         ; 004f5a92 | DAT_01d098ac
    FXCH ST5                            ; 004f5a98
    FSUBRP ST6,ST0                      ; 004f5a9a
    MOV dword ptr [0x01d12134],ECX      ; 004f5a9c | DAT_01d12134
    FLD float ptr [EAX + 0x2c]          ; 004f5aa2
    FMUL float ptr [EAX + 0x18]         ; 004f5aa5
    MOV dword ptr [0x01d12144],ECX      ; 004f5aa8 | DAT_01d12144
    FXCH                                ; 004f5aae
    FADDP ST2,ST0                       ; 004f5ab0
    FXCH ST4                            ; 004f5ab2
    FADDP ST2,ST0                       ; 004f5ab4
    FXCH ST2                            ; 004f5ab6
    FSTP float ptr [0x01d12138]         ; 004f5ab8 | DAT_01d12138
    FXCH                                ; 004f5abe
    FSTP float ptr [0x01d1213c]         ; 004f5ac0 | DAT_01d1213c
    FXCH                                ; 004f5ac6
    FSUBP ST2,ST0                       ; 004f5ac8
    FSTP float ptr [0x01d12140]         ; 004f5aca | DAT_01d12140
    FSTP float ptr [ESP + 0xc]          ; 004f5ad0
    PUSH EDI                            ; 004f5ad4
    FLD float ptr [ESP + 0x10]          ; 004f5ad5
    FLD ST0                             ; 004f5ad9
    FMUL float ptr [0x01d0988c]         ; 004f5adb | DAT_01d0988c
    FLD ST1                             ; 004f5ae1
    FMUL float ptr [0x01d09890]         ; 004f5ae3 | DAT_01d09890
    FXCH ST2                            ; 004f5ae9
    FMUL float ptr [0x01d09894]         ; 004f5aeb | DAT_01d09894
    FLD float ptr [ESP + 0x8]           ; 004f5af1
    FLD ST0                             ; 004f5af5
    FMUL float ptr [EAX + 0x4]          ; 004f5af7
    FXCH                                ; 004f5afa
    FMUL float ptr [EAX + 0x8]          ; 004f5afc
    FLD float ptr [EAX + 0x28]          ; 004f5aff
    FMUL float ptr [EAX + 0x10]         ; 004f5b02
    FLD float ptr [EAX + 0x28]          ; 004f5b05
    FMUL float ptr [EAX + 0x14]         ; 004f5b08
    FXCH                                ; 004f5b0b
    FSUBP ST3,ST0                       ; 004f5b0d
    FSUBP                               ; 004f5b0f
    FLD float ptr [EAX + 0x2c]          ; 004f5b11
    FMUL float ptr [EAX + 0x1c]         ; 004f5b14
    FLD float ptr [EAX + 0x2c]          ; 004f5b17
    FMUL float ptr [EAX + 0x20]         ; 004f5b1a
    FXCH                                ; 004f5b1d
    FSUBP ST3,ST0                       ; 004f5b1f
    FXCH ST2                            ; 004f5b21
    FST float ptr [ESP + 0xc]           ; 004f5b23
    FMUL float ptr [0x01d09898]         ; 004f5b27 | DAT_01d09898
    FLD float ptr [ESP + 0xc]           ; 004f5b2d
    FMUL float ptr [0x01d0989c]         ; 004f5b31 | DAT_01d0989c
    FXCH ST3                            ; 004f5b37
    FSUBP ST2,ST0                       ; 004f5b39
    FLD float ptr [ESP + 0xc]           ; 004f5b3b
    FMUL float ptr [0x01d098a0]         ; 004f5b3f | DAT_01d098a0
    FXCH                                ; 004f5b45
    FADDP ST5,ST0                       ; 004f5b47
    FXCH ST2                            ; 004f5b49
    FADDP ST5,ST0                       ; 004f5b4b
    FLD ST0                             ; 004f5b4d
    FMUL float ptr [0x01d098a4]         ; 004f5b4f | DAT_01d098a4
    FLD ST1                             ; 004f5b55
    FMUL float ptr [0x01d098a8]         ; 004f5b57 | DAT_01d098a8
    FXCH ST3                            ; 004f5b5d
    FADDP ST4,ST0                       ; 004f5b5f
    MOV EDI,0x3f800000                  ; 004f5b61
    FXCH                                ; 004f5b66
    FMUL float ptr [0x01d098ac]         ; 004f5b68 | DAT_01d098ac
    MOV dword ptr [0x01d12154],EDI      ; 004f5b6e | DAT_01d12154
    FXCH                                ; 004f5b74
    FADDP ST4,ST0                       ; 004f5b76
    FXCH                                ; 004f5b78
    FADDP ST4,ST0                       ; 004f5b7a
    FADDP                               ; 004f5b7c
    FLD float ptr [0x01d098b0]          ; 004f5b7e | DAT_01d098b0
    FLD float ptr [0x01d098b4]          ; 004f5b84 | DAT_01d098b4
    FLD float ptr [0x01d098b8]          ; 004f5b8a | DAT_01d098b8
    FXCH ST2                            ; 004f5b90
    FADDP ST4,ST0                       ; 004f5b92
    FADDP ST4,ST0                       ; 004f5b94
    FADDP                               ; 004f5b96
    FXCH                                ; 004f5b98
    FSTP float ptr [0x01d12148]         ; 004f5b9a | DAT_01d12148
    FXCH                                ; 004f5ba0
    FSTP float ptr [0x01d1214c]         ; 004f5ba2 | DAT_01d1214c
    FSTP float ptr [0x01d12150]         ; 004f5ba8 | DAT_01d12150
    POP EDI                             ; 004f5bae
    ADD ESP,0x10                        ; 004f5baf
    POP EBP                             ; 004f5bb2
    RET                                 ; 004f5bb3
    FLD float ptr [0x01d098b0]          ; 004f5bb4 | DAT_01d098b0
        ;   Label: LAB_004f5bb4
    FLD float ptr [0x01d098b4]          ; 004f5bba | DAT_01d098b4
    FLD float ptr [0x01d098b8]          ; 004f5bc0 | DAT_01d098b8
    MOV EBP,0x3f800000                  ; 004f5bc6
    MOV EAX,[0x01d09918]                ; 004f5bcb | DAT_01d09918
    MOV dword ptr [0x01d1211c],EDX      ; 004f5bd0 | DAT_01d1211c
    MOV dword ptr [0x01d12120],EDX      ; 004f5bd6 | DAT_01d12120
    MOV dword ptr [0x01d12124],EDX      ; 004f5bdc | DAT_01d12124
    MOV dword ptr [0x01d12128],EDX      ; 004f5be2 | DAT_01d12128
    MOV dword ptr [0x01d12130],EDX      ; 004f5be8 | DAT_01d12130
    MOV dword ptr [0x01d12134],EDX      ; 004f5bee | DAT_01d12134
    MOV dword ptr [0x01d12138],EDX      ; 004f5bf4 | DAT_01d12138
    MOV dword ptr [0x01d1213c],EDX      ; 004f5bfa | DAT_01d1213c
    MOV dword ptr [0x01d12144],EDX      ; 004f5c00 | DAT_01d12144
    MOV dword ptr [0x01d12118],EBP      ; 004f5c06 | DAT_01d12118
    MOV dword ptr [0x01d1212c],EBP      ; 004f5c0c | DAT_01d1212c
    MOV dword ptr [0x01d12140],EBP      ; 004f5c12 | DAT_01d12140
    MOV dword ptr [0x01d12154],EBP      ; 004f5c18 | DAT_01d12154
    FXCH ST2                            ; 004f5c1e
    FSUB float ptr [EAX + 0x24]         ; 004f5c20
    FXCH                                ; 004f5c23
    FSUB float ptr [EAX + 0x28]         ; 004f5c25
    FXCH ST2                            ; 004f5c28
    FSUB float ptr [EAX + 0x2c]         ; 004f5c2a
    FXCH                                ; 004f5c2d
    FSTP float ptr [0x01d12148]         ; 004f5c2f | DAT_01d12148
    FXCH                                ; 004f5c35
    FSTP float ptr [0x01d1214c]         ; 004f5c37 | DAT_01d1214c
    FSTP float ptr [0x01d12150]         ; 004f5c3d | DAT_01d12150
    ADD ESP,0x10                        ; 004f5c43
    POP EBP                             ; 004f5c46
    RET                                 ; 004f5c47

