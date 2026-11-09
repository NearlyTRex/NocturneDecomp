; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * engine_model_c_FUN_00500970(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   crt_unknown.c_FUN_005b7790
;   engine_boss.c_FUN_0041a510
;   engine_model.c_FUN_005008f0
;   engine_model.c_loadModelFile_FUN_00500720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500970
        ;   Label: engine_model.c_FUN_00500970
    PUSH EDI                            ; 00500971
    PUSH EBP                            ; 00500972
    SUB ESP,0x154                       ; 00500973
    MOV EAX,dword ptr [ESP + 0x164]     ; 00500979
    MOV dword ptr [ESP + 0x130],ESI     ; 00500980
    MOV EDX,dword ptr [EAX]             ; 00500987
    MOV EBX,EAX                         ; 00500989
    CMP EDX,0x20                        ; 0050098b
    JZ 0x00500d80                       ; 0050098e
        ;   XREF to: 00500d80 (CONDITIONAL_JUMP)  ; LAB_00500d80
    CMP EDX,0x26                        ; 00500994
    JZ 0x00500dce                       ; 00500997
        ;   XREF to: 00500dce (CONDITIONAL_JUMP)  ; LAB_00500dce
    LEA EDX,[EAX + 0x8]                 ; 0050099d
    MOV dword ptr [ESP + 0x138],EDX     ; 005009a0
    LEA EDX,[EAX + 0x14]                ; 005009a7
    MOV ESI,dword ptr [EAX]             ; 005009aa
    MOV dword ptr [ESP + 0x12c],EDX     ; 005009ac
    CMP ESI,0x14                        ; 005009b3
    JNZ 0x00500df3                      ; 005009b6
        ;   XREF to: 00500df3 (CONDITIONAL_JUMP)  ; LAB_00500df3
    MOV EAX,0x7fffffff                  ; 005009bc
        ;   Label: LAB_005009bc
    MOV EDX,EAX                         ; 005009c1
    MOV ECX,dword ptr [EBX + 0x4]       ; 005009c3
    SAR EDX,0x1f                        ; 005009c6
    IDIV ECX                            ; 005009c9
    ADD EAX,EAX                         ; 005009cb
    MOV dword ptr [ESP + 0x134],EAX     ; 005009cd
    MOV EAX,dword ptr [ESP + 0x138]     ; 005009d4
    CMP dword ptr [EAX],0x2             ; 005009db
    JZ 0x00500a13                       ; 005009de
        ;   XREF to: 00500a13 (CONDITIONAL_JUMP)  ; LAB_00500a13
    PUSH 0x5df06e                       ; 005009e0
    LEA EAX,[ESP + 0x4]                 ; 005009e5
    PUSH EAX                            ; 005009e9
    MOV ESI,0x5df091                    ; 005009ea
    CALL crt_unknown.c_FUN_005b7790     ; 005009ef
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x8                         ; 005009f4
    MOV EAX,ESP                         ; 005009f7
    MOV EDI,0x177                       ; 005009f9
    PUSH EAX                            ; 005009fe
    MOV dword ptr [0x01d046a0],ESI      ; 005009ff | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00500a05 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00500a0b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00500a10
    MOV EBP,0x80000000                  ; 00500a13
        ;   Label: LAB_00500a13
    MOV EAX,0x7fffffff                  ; 00500a18
    XOR EDX,EDX                         ; 00500a1d
    MOV EDI,EBP                         ; 00500a1f
    MOV ESI,EBP                         ; 00500a21
    MOV dword ptr [ESP + 0x140],EAX     ; 00500a23
    MOV ECX,EAX                         ; 00500a2a
    MOV EBX,EAX                         ; 00500a2c
    MOV dword ptr [ESP + 0x13c],EBP     ; 00500a2e
    MOV EAX,dword ptr [ESP + 0x138]     ; 00500a35
    MOV dword ptr [ESP + 0x144],EDX     ; 00500a3c
    MOV dword ptr [ESP + 0x148],EDX     ; 00500a43
    MOV EBP,dword ptr [EAX + 0x8]       ; 00500a4a
    MOV dword ptr [ESP + 0x14c],EDX     ; 00500a4d
    TEST EBP,EBP                        ; 00500a54
    JLE 0x00500afb                      ; 00500a56
        ;   XREF to: 00500afb (CONDITIONAL_JUMP)  ; LAB_00500afb
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00500a5c
    MOV EBP,dword ptr [EAX]             ; 00500a63
        ;   Label: LAB_00500a63
    CMP ESI,EBP                         ; 00500a65
    JGE 0x00500a6b                      ; 00500a67
        ;   XREF to: 00500a6b (CONDITIONAL_JUMP)  ; LAB_00500a6b
    MOV ESI,EBP                         ; 00500a69
    MOV EBP,dword ptr [EAX + 0x4]       ; 00500a6b
        ;   Label: LAB_00500a6b
    CMP EDI,EBP                         ; 00500a6e
    JGE 0x00500a74                      ; 00500a70
        ;   XREF to: 00500a74 (CONDITIONAL_JUMP)  ; LAB_00500a74
    MOV EDI,EBP                         ; 00500a72
    MOV EBP,dword ptr [EAX + 0x8]       ; 00500a74
        ;   Label: LAB_00500a74
    CMP EBP,dword ptr [ESP + 0x13c]     ; 00500a77
    JLE 0x00500a87                      ; 00500a7e
        ;   XREF to: 00500a87 (CONDITIONAL_JUMP)  ; LAB_00500a87
    MOV dword ptr [ESP + 0x13c],EBP     ; 00500a80
    MOV EBP,dword ptr [EAX]             ; 00500a87
        ;   Label: LAB_00500a87
    CMP EBX,EBP                         ; 00500a89
    JLE 0x00500a8f                      ; 00500a8b
        ;   XREF to: 00500a8f (CONDITIONAL_JUMP)  ; LAB_00500a8f
    MOV EBX,EBP                         ; 00500a8d
    MOV EBP,dword ptr [EAX + 0x4]       ; 00500a8f
        ;   Label: LAB_00500a8f
    CMP ECX,EBP                         ; 00500a92
    JLE 0x00500a98                      ; 00500a94
        ;   XREF to: 00500a98 (CONDITIONAL_JUMP)  ; LAB_00500a98
    MOV ECX,EBP                         ; 00500a96
    MOV EBP,dword ptr [EAX + 0x8]       ; 00500a98
        ;   Label: LAB_00500a98
    CMP EBP,dword ptr [ESP + 0x140]     ; 00500a9b
    JGE 0x00500aab                      ; 00500aa2
        ;   XREF to: 00500aab (CONDITIONAL_JUMP)  ; LAB_00500aab
    MOV dword ptr [ESP + 0x140],EBP     ; 00500aa4
    FILD dword ptr [EAX]                ; 00500aab
        ;   Label: LAB_00500aab
    FILD dword ptr [EAX + 0x4]          ; 00500aad
    FILD dword ptr [EAX + 0x8]          ; 00500ab0
    MOV EBP,dword ptr [ESP + 0x138]     ; 00500ab3
    ADD EAX,0xc                         ; 00500aba
    INC EDX                             ; 00500abd
    FXCH ST2                            ; 00500abe
    FADD float ptr [ESP + 0x14c]        ; 00500ac0
    FXCH                                ; 00500ac7
    FADD float ptr [ESP + 0x148]        ; 00500ac9
    FXCH ST2                            ; 00500ad0
    FADD float ptr [ESP + 0x144]        ; 00500ad2
    FXCH                                ; 00500ad9
    FSTP float ptr [ESP + 0x14c]        ; 00500adb
    FXCH                                ; 00500ae2
    FSTP float ptr [ESP + 0x148]        ; 00500ae4
    FSTP float ptr [ESP + 0x144]        ; 00500aeb
    CMP EDX,dword ptr [EBP + 0x8]       ; 00500af2
    JL 0x00500a63                       ; 00500af5
        ;   XREF to: 00500a63 (CONDITIONAL_JUMP)  ; LAB_00500a63
    MOV EAX,dword ptr [ESP + 0x134]     ; 00500afb
        ;   Label: LAB_00500afb
    MOV EDX,ESI                         ; 00500b02
    IMUL EDX                            ; 00500b04
    SHRD EAX,EDX,0x10                   ; 00500b06
    MOV ESI,EAX                         ; 00500b0a
    MOV dword ptr [ESP + 0xc4],EAX      ; 00500b0c
    MOV EDX,EDI                         ; 00500b13
    MOV EAX,dword ptr [ESP + 0x134]     ; 00500b15
    IMUL EDX                            ; 00500b1c
    SHRD EAX,EDX,0x10                   ; 00500b1e
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00500b22
    MOV dword ptr [ESP + 0xc8],EAX      ; 00500b29
    MOV EAX,dword ptr [ESP + 0x134]     ; 00500b30
    IMUL EDX                            ; 00500b37
    SHRD EAX,EDX,0x10                   ; 00500b39
    MOV dword ptr [ESP + 0xcc],EAX      ; 00500b3d
    MOV EDX,EBX                         ; 00500b44
    MOV EAX,dword ptr [ESP + 0x134]     ; 00500b46
    IMUL EDX                            ; 00500b4d
    SHRD EAX,EDX,0x10                   ; 00500b4f
    MOV EBX,EAX                         ; 00500b53
    MOV dword ptr [ESP + 0xb8],EAX      ; 00500b55
    MOV EDX,ECX                         ; 00500b5c
    MOV EAX,dword ptr [ESP + 0x134]     ; 00500b5e
    IMUL EDX                            ; 00500b65
    SHRD EAX,EDX,0x10                   ; 00500b67
    MOV EDX,dword ptr [ESP + 0x140]     ; 00500b6b
    MOV dword ptr [ESP + 0xbc],EAX      ; 00500b72
    MOV EAX,dword ptr [ESP + 0x134]     ; 00500b79
    IMUL EDX                            ; 00500b80
    SHRD EAX,EDX,0x10                   ; 00500b82
    MOV dword ptr [ESP + 0xc0],EAX      ; 00500b86
    MOV EAX,dword ptr [ESP + 0x138]     ; 00500b8d
    FLD float ptr [ESP + 0x14c]         ; 00500b94
    FILD dword ptr [EAX + 0x8]          ; 00500b9b
    FLD1                                ; 00500b9e
    FDIVRP                              ; 00500ba0
    FXCH                                ; 00500ba2
    FMUL ST1                            ; 00500ba4
    FLD float ptr [ESP + 0x148]         ; 00500ba6
    FMUL ST2                            ; 00500bad
    FLD float ptr [ESP + 0x144]         ; 00500baf
    FMULP ST3                           ; 00500bb6
    MOV EAX,dword ptr [ESP + 0x134]     ; 00500bb8
    FXCH                                ; 00500bbf
    FSTP float ptr [ESP + 0x14c]        ; 00500bc1
    FSTP float ptr [ESP + 0x148]        ; 00500bc8
    FLD float ptr [ESP + 0x14c]         ; 00500bcf
    CALL crt_math.c_round_FUN_005b7ff0  ; 00500bd6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x150]       ; 00500bdb
    MOV EDX,dword ptr [ESP + 0x150]     ; 00500be2
    FSTP float ptr [ESP + 0x144]        ; 00500be9
    IMUL EDX                            ; 00500bf0
    SHRD EAX,EDX,0x10                   ; 00500bf2
    FLD float ptr [ESP + 0x148]         ; 00500bf6
    MOV dword ptr [ESP + 0xd0],EAX      ; 00500bfd
    CALL crt_math.c_round_FUN_005b7ff0  ; 00500c04
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x150]       ; 00500c09
    MOV EAX,dword ptr [ESP + 0x134]     ; 00500c10
    MOV EDX,dword ptr [ESP + 0x150]     ; 00500c17
    IMUL EDX                            ; 00500c1e
    SHRD EAX,EDX,0x10                   ; 00500c20
    FLD float ptr [ESP + 0x144]         ; 00500c24
    MOV dword ptr [ESP + 0xd4],EAX      ; 00500c2b
    CALL crt_math.c_round_FUN_005b7ff0  ; 00500c32
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x150]       ; 00500c37
    MOV EAX,dword ptr [ESP + 0x134]     ; 00500c3e
    MOV EDX,dword ptr [ESP + 0x150]     ; 00500c45
    IMUL EDX                            ; 00500c4c
    SHRD EAX,EDX,0x10                   ; 00500c4e
    MOV dword ptr [ESP + 0xd8],EAX      ; 00500c52
    MOV EAX,ESI                         ; 00500c59
    CDQ                                 ; 00500c5b
    XOR EAX,EDX                         ; 00500c5c
    SUB EAX,EDX                         ; 00500c5e
    MOV ECX,EAX                         ; 00500c60
    MOV dword ptr [ESP + 0xe0],EAX      ; 00500c62
    MOV EAX,EBX                         ; 00500c69
    CDQ                                 ; 00500c6b
    XOR EAX,EDX                         ; 00500c6c
    SUB EAX,EDX                         ; 00500c6e
    CMP ECX,EAX                         ; 00500c70
    JGE 0x00500c82                      ; 00500c72
        ;   XREF to: 00500c82 (CONDITIONAL_JUMP)  ; LAB_00500c82
    MOV EAX,EBX                         ; 00500c74
    CDQ                                 ; 00500c76
    XOR EAX,EDX                         ; 00500c77
    SUB EAX,EDX                         ; 00500c79
    MOV dword ptr [ESP + 0xe0],EAX      ; 00500c7b
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00500c82
        ;   Label: LAB_00500c82
    CDQ                                 ; 00500c89
    XOR EAX,EDX                         ; 00500c8a
    SUB EAX,EDX                         ; 00500c8c
    MOV ECX,EAX                         ; 00500c8e
    MOV dword ptr [ESP + 0xe4],EAX      ; 00500c90
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00500c97
    CDQ                                 ; 00500c9e
    XOR EAX,EDX                         ; 00500c9f
    SUB EAX,EDX                         ; 00500ca1
    CMP ECX,EAX                         ; 00500ca3
    JGE 0x00500cba                      ; 00500ca5
        ;   XREF to: 00500cba (CONDITIONAL_JUMP)  ; LAB_00500cba
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00500ca7
    CDQ                                 ; 00500cae
    XOR EAX,EDX                         ; 00500caf
    SUB EAX,EDX                         ; 00500cb1
    MOV dword ptr [ESP + 0xe4],EAX      ; 00500cb3
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00500cba
        ;   Label: LAB_00500cba
    CDQ                                 ; 00500cc1
    XOR EAX,EDX                         ; 00500cc2
    SUB EAX,EDX                         ; 00500cc4
    MOV ECX,EAX                         ; 00500cc6
    MOV dword ptr [ESP + 0xe8],EAX      ; 00500cc8
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00500ccf
    CDQ                                 ; 00500cd6
    XOR EAX,EDX                         ; 00500cd7
    SUB EAX,EDX                         ; 00500cd9
    CMP ECX,EAX                         ; 00500cdb
    JGE 0x00500cf2                      ; 00500cdd
        ;   XREF to: 00500cf2 (CONDITIONAL_JUMP)  ; LAB_00500cf2
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00500cdf
    CDQ                                 ; 00500ce6
    XOR EAX,EDX                         ; 00500ce7
    SUB EAX,EDX                         ; 00500ce9
    MOV dword ptr [ESP + 0xe8],EAX      ; 00500ceb
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00500cf2
        ;   Label: LAB_00500cf2
    MOV dword ptr [ESP + 0x150],EAX     ; 00500cf9
    FILD dword ptr [ESP + 0x150]        ; 00500d00
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00500d07
    FLD ST0                             ; 00500d0e
    MOV dword ptr [ESP + 0x150],EAX     ; 00500d10
    FMULP                               ; 00500d17
    FILD dword ptr [ESP + 0x150]        ; 00500d19
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00500d20
    FMUL ST0                            ; 00500d27
    MOV dword ptr [ESP + 0x150],EAX     ; 00500d29
    FADDP                               ; 00500d30
    FILD dword ptr [ESP + 0x150]        ; 00500d32
    FMUL ST0                            ; 00500d39
    FADDP                               ; 00500d3b
    FSQRT                               ; 00500d3d
    MOV ECX,0xd                         ; 00500d3f
    LEA EDI,[ESP + 0x50]                ; 00500d44
    LEA ESI,[ESP + 0xb8]                ; 00500d48
    CALL crt_math.c_round_FUN_005b7ff0  ; 00500d4f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xdc]        ; 00500d54
    MOVSD.REP ES:EDI,ESI                ; 00500d5b
        ;   Label: LAB_00500d5b
    MOV ECX,0xd                         ; 00500d5d
    MOV EDI,dword ptr [ESP + 0x130]     ; 00500d62
    LEA ESI,[ESP + 0x50]                ; 00500d69
    MOVSD.REP ES:EDI,ESI                ; 00500d6d
    MOV EAX,dword ptr [ESP + 0x130]     ; 00500d6f
    ADD ESP,0x154                       ; 00500d76
    POP EBP                             ; 00500d7c
    POP EDI                             ; 00500d7d
    POP EBX                             ; 00500d7e
    RET                                 ; 00500d7f
    ADD EAX,0x18                        ; 00500d80
        ;   Label: LAB_00500d80
    PUSH EAX                            ; 00500d83
    CALL engine_model.c_loadModelFile_FUN_00500720 ; 00500d84
        ;   XREF to: 00500720 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_loadModelFile_FUN_00500720()
    ADD ESP,0x4                         ; 00500d89
    LEA ESI,[ESP + 0xec]                ; 00500d8c
    PUSH EAX                            ; 00500d93
    LEA EDI,[ESP + 0xbc]                ; 00500d94
    MOV EBX,EAX                         ; 00500d9b
    CALL engine_model.c_FUN_00500970    ; 00500d9d
        ;   XREF to: 00500970 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_FUN_00500970()
    ADD ESP,0x4                         ; 00500da2
    MOV ECX,0xd                         ; 00500da5
    LEA ESI,[ESP + 0xec]                ; 00500daa
    PUSH EBX                            ; 00500db1
    MOVSD.REP ES:EDI,ESI                ; 00500db2
    CALL engine_model.c_FUN_005008f0    ; 00500db4
        ;   XREF to: 005008f0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_FUN_005008f0()
    MOV ECX,0xd                         ; 00500db9
    LEA EDI,[ESP + 0x54]                ; 00500dbe
    LEA ESI,[ESP + 0xbc]                ; 00500dc2
    ADD ESP,0x4                         ; 00500dc9
    JMP 0x00500d5b                      ; 00500dcc
        ;   XREF to: 00500d5b (UNCONDITIONAL_JUMP)  ; LAB_00500d5b
    PUSH EAX                            ; 00500dce
        ;   Label: LAB_00500dce
    LEA ESI,[ESP + 0x88]                ; 00500dcf
    LEA EDI,[ESP + 0x54]                ; 00500dd6
    CALL engine_boss.c_FUN_0041a510     ; 00500dda
        ;   XREF to: 0041a510 (UNCONDITIONAL_CALL)  ; undefined engine_boss.c_FUN_0041a510()
    MOV ECX,0xd                         ; 00500ddf
    LEA ESI,[ESP + 0x88]                ; 00500de4
    ADD ESP,0x4                         ; 00500deb
    JMP 0x00500d5b                      ; 00500dee
        ;   XREF to: 00500d5b (UNCONDITIONAL_JUMP)  ; LAB_00500d5b
    MOV EDI,0x5df044                    ; 00500df3
        ;   Label: LAB_00500df3
    MOV EBP,0x173                       ; 00500df8
    PUSH 0x5df056                       ; 00500dfd
    MOV dword ptr [0x01d046a0],EDI      ; 00500e02 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00500e08 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00500e0e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00500e13
    JMP 0x005009bc                      ; 00500e16
        ;   XREF to: 005009bc (UNCONDITIONAL_JUMP)  ; LAB_005009bc

