; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534ca0(int param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005eca94
;   undefined4 DAT_005eca9c
;   undefined4 DAT_00612560
;   undefined4 DAT_01e7d364
;   undefined4 DAT_01e7d368
;   undefined4 DAT_01e7d36c
;   undefined4 DAT_01e7d370
;   undefined4 DAT_01e7d374
;   undefined4 DAT_01e7d378
;   undefined4 DAT_01e7d37c
;   undefined4 DAT_01e7d380
;   undefined4 DAT_01e7d384
;   undefined4 DAT_01e7d388
;   undefined4 DAT_01e7d38c
;   undefined4 DAT_01e7d390
;   ... and 11 more
;
; Called Functions:
;   FUN_00482f00
;   FUN_004837b0
;   FUN_00483d70
;   FUN_00483e60
;   FUN_00484f00
;   FUN_00580173
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534ca0
        ;   Label: FUN_00534ca0
    PUSH ESI                            ; 00534ca1
    PUSH EDI                            ; 00534ca2
    PUSH EBP                            ; 00534ca3
    MOV EBP,ESP                         ; 00534ca4
    SUB ESP,0x6c                        ; 00534ca6
    AND ESP,0xfffffff8                  ; 00534ca9
    MOV EDX,dword ptr [0x00612560]      ; 00534cac | DAT_00612560
    PUSH EDX                            ; 00534cb2
    CALL FUN_00483e60                   ; 00534cb3
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 00534cb8
    TEST EAX,EAX                        ; 00534cbb
    JZ 0x00534cc6                       ; 00534cbd
        ;   XREF to: 00534cc6 (CONDITIONAL_JUMP)  ; LAB_00534cc6
    MOV ESP,EBP                         ; 00534cbf
    POP EBP                             ; 00534cc1
    POP EDI                             ; 00534cc2
    POP ESI                             ; 00534cc3
    POP EBX                             ; 00534cc4
    RET                                 ; 00534cc5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00534cc6
        ;   Label: LAB_00534cc6
    FILD dword ptr [EAX + 0x24]         ; 00534cc9
    FMUL float ptr [0x01fe5c50]         ; 00534ccc | DAT_01fe5c50
    XOR ECX,ECX                         ; 00534cd2
    FADD float ptr [0x01fe5c2c]         ; 00534cd4 | DAT_01fe5c2c
    MOV dword ptr [ESP + 0x4],ECX       ; 00534cda
    FSTP float ptr [ESP]                ; 00534cde
    FILD dword ptr [EAX + 0x2c]         ; 00534ce1
    FMUL float ptr [0x01fe5c58]         ; 00534ce4 | DAT_01fe5c58
    MOV EAX,ESP                         ; 00534cea
    MOV EBX,dword ptr [0x00612560]      ; 00534cec | DAT_00612560
    PUSH EAX                            ; 00534cf2
    FADD float ptr [0x01fe5c34]         ; 00534cf3 | DAT_01fe5c34
    PUSH EBX                            ; 00534cf9
    FSTP float ptr [ESP + 0x10]         ; 00534cfa
    CALL FUN_004837b0                   ; 00534cfe
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 00534d03
    PUSH 0x622730                       ; 00534d06
    MOV ESI,dword ptr [0x00612560]      ; 00534d0b | DAT_00612560
    PUSH ESI                            ; 00534d11
    MOV EDI,0x4                         ; 00534d12
    CALL FUN_00484f00                   ; 00534d17
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    MOV EDX,0x1                         ; 00534d1c
    MOV ESI,0x2                         ; 00534d21
    ADD ESP,0x8                         ; 00534d26
    MOV dword ptr [0x01e7d364],EDI      ; 00534d29 | DAT_01e7d364
    XOR EAX,EAX                         ; 00534d2f
    MOV EDI,0x800000                    ; 00534d31
    MOV [0x01e7d368],EAX                ; 00534d36 | DAT_01e7d368
    MOV [0x01e7d36c],EAX                ; 00534d3b | DAT_01e7d36c
    MOV [0x01e7d370],EAX                ; 00534d40 | DAT_01e7d370
    MOV [0x01e7d374],EAX                ; 00534d45 | DAT_01e7d374
    MOV [0x01e7d378],EAX                ; 00534d4a | DAT_01e7d378
    MOV dword ptr [0x01e7d384],EDX      ; 00534d4f | DAT_01e7d384
    MOV dword ptr [0x01e7d390],ESI      ; 00534d55 | DAT_01e7d390
    PUSH EAX                            ; 00534d5b
    MOV EDX,0x3                         ; 00534d5c
    MOV ESI,dword ptr [0x00612560]      ; 00534d61 | DAT_00612560
    MOV dword ptr [0x01e7d37c],EDI      ; 00534d67 | DAT_01e7d37c
    MOV dword ptr [0x01e7d380],EDI      ; 00534d6d | DAT_01e7d380
    MOV dword ptr [0x01e7d388],EDI      ; 00534d73 | DAT_01e7d388
    MOV dword ptr [0x01e7d38c],EDI      ; 00534d79 | DAT_01e7d38c
    MOV dword ptr [0x01e7d394],EDI      ; 00534d7f | DAT_01e7d394
    MOV dword ptr [0x01e7d398],EDI      ; 00534d85 | DAT_01e7d398
    MOV dword ptr [0x01e7d3a0],EDI      ; 00534d8b | DAT_01e7d3a0
    PUSH ESI                            ; 00534d91
    MOV dword ptr [0x01e7d3a4],EDI      ; 00534d92 | DAT_01e7d3a4
    MOV dword ptr [0x01e7d39c],EDX      ; 00534d98 | DAT_01e7d39c
    CALL FUN_00483d70                   ; 00534d9e
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d70()
    ADD ESP,0x8                         ; 00534da3
    MOV EAX,dword ptr [EBP + 0x18]      ; 00534da6
    SHL EAX,0x8                         ; 00534da9
    MOV dword ptr [ESP + 0x58],EAX      ; 00534dac
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00534db0
    SHL EAX,0x8                         ; 00534db3
    MOV dword ptr [ESP + 0x5c],EAX      ; 00534db6
    MOV EAX,dword ptr [EBP + 0x20]      ; 00534dba
    SHL EAX,0x8                         ; 00534dbd
    XOR EDI,EDI                         ; 00534dc0
    MOV dword ptr [ESP + 0x60],EAX      ; 00534dc2
    MOV EAX,dword ptr [EBP + 0x24]      ; 00534dc6
    MOV dword ptr [ESP + 0xc],EDI       ; 00534dc9
    SHL EAX,0x8                         ; 00534dcd
    MOV dword ptr [ESP + 0x50],EDI      ; 00534dd0
    MOV dword ptr [ESP + 0x54],EAX      ; 00534dd4
    MOV EAX,dword ptr [ESP + 0x50]      ; 00534dd8
        ;   Label: LAB_00534dd8
    MOV ECX,dword ptr [EBP + 0x14]      ; 00534ddc
    XOR EDX,EDX                         ; 00534ddf
    ADD EAX,ECX                         ; 00534de1
    MOV dword ptr [ESP + 0x14],EDX      ; 00534de3
    MOV dword ptr [ESP + 0x64],EAX      ; 00534de7
    MOV EAX,dword ptr [ESP + 0x64]      ; 00534deb
        ;   Label: LAB_00534deb
    MOV EBX,dword ptr [EAX + 0x9c70]    ; 00534def
    CMP EBX,0xfffffc19                  ; 00534df5
    JGE 0x00534e4a                      ; 00534dfb
        ;   XREF to: 00534e4a (CONDITIONAL_JUMP)  ; LAB_00534e4a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00534dfd
        ;   Label: LAB_00534dfd
    MOV EDI,dword ptr [ESP + 0x64]      ; 00534e01
    INC EAX                             ; 00534e05
    ADD EDI,0x190                       ; 00534e06
    MOV dword ptr [ESP + 0x14],EAX      ; 00534e0c
    MOV dword ptr [ESP + 0x64],EDI      ; 00534e10
    CMP EAX,0x64                        ; 00534e14
    JL 0x00534deb                       ; 00534e17
        ;   XREF to: 00534deb (CONDITIONAL_JUMP)  ; LAB_00534deb
    MOV EBX,dword ptr [ESP + 0xc]       ; 00534e19
    MOV ECX,dword ptr [ESP + 0x50]      ; 00534e1d
    INC EBX                             ; 00534e21
    ADD ECX,0x4                         ; 00534e22
    MOV dword ptr [ESP + 0xc],EBX       ; 00534e25
    MOV dword ptr [ESP + 0x50],ECX      ; 00534e29
    CMP EBX,0x64                        ; 00534e2d
    JL 0x00534dd8                       ; 00534e30
        ;   XREF to: 00534dd8 (CONDITIONAL_JUMP)  ; LAB_00534dd8
    PUSH 0x1                            ; 00534e32
    MOV EDI,dword ptr [0x00612560]      ; 00534e34 | DAT_00612560
    PUSH EDI                            ; 00534e3a
    CALL FUN_00483d70                   ; 00534e3b
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d70()
    ADD ESP,0x8                         ; 00534e40
    MOV ESP,EBP                         ; 00534e43
    POP EBP                             ; 00534e45
    POP EDI                             ; 00534e46
    POP ESI                             ; 00534e47
    POP EBX                             ; 00534e48
    RET                                 ; 00534e49
    CMP EBX,0x3e7                       ; 00534e4a
        ;   Label: LAB_00534e4a
    JG 0x00534dfd                       ; 00534e50
        ;   XREF to: 00534dfd (CONDITIONAL_JUMP)  ; LAB_00534dfd
    FLD float ptr [0x005eca94]          ; 00534e52 | DAT_005eca94
    FLD float ptr [0x01fe5c50]          ; 00534e58 | DAT_01fe5c50
    FMUL ST1                            ; 00534e5e
    FLD float ptr [0x01fe5c54]          ; 00534e60 | DAT_01fe5c54
    FMUL ST2                            ; 00534e66
    FLD float ptr [0x01fe5c58]          ; 00534e68 | DAT_01fe5c58
    FMULP ST3                           ; 00534e6e
    FLD double ptr [0x005eca9c]         ; 00534e70 | DAT_005eca9c
    FLD float ptr [0x01fe5c30]          ; 00534e76 | DAT_01fe5c30
    FMUL ST1                            ; 00534e7c
    LEA EDI,[ESP + 0x24]                ; 00534e7e
    MOV EAX,dword ptr [EAX + 0x30]      ; 00534e82
    LEA ESI,[ESP + 0xc]                 ; 00534e85
    MOV dword ptr [ESP + 0x10],EAX      ; 00534e89
    FXCH ST3                            ; 00534e8d
    FSTP float ptr [ESP + 0x3c]         ; 00534e8f
    MOVSD ES:EDI,ESI                    ; 00534e93
    MOVSD ES:EDI,ESI                    ; 00534e94
    MOVSD ES:EDI,ESI                    ; 00534e95
    FXCH                                ; 00534e96
    FSTP float ptr [ESP + 0x40]         ; 00534e98
    LEA EDI,[ESP + 0x18]                ; 00534e9c
    LEA ESI,[ESP + 0x3c]                ; 00534ea0
    MOV EAX,dword ptr [ESP + 0x24]      ; 00534ea4
    FXCH ST2                            ; 00534ea8
    FSTP float ptr [ESP + 0x44]         ; 00534eaa
    MOV dword ptr [ESP + 0x68],EAX      ; 00534eae
    MOVSD ES:EDI,ESI                    ; 00534eb2
    MOVSD ES:EDI,ESI                    ; 00534eb3
    MOVSD ES:EDI,ESI                    ; 00534eb4
    FILD dword ptr [ESP + 0x68]         ; 00534eb5
    MOV EAX,dword ptr [ESP + 0x28]      ; 00534eb9
    FMUL float ptr [ESP + 0x18]         ; 00534ebd
    MOV dword ptr [ESP + 0x68],EAX      ; 00534ec1
    FILD dword ptr [ESP + 0x68]         ; 00534ec5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00534ec9
    FMUL float ptr [ESP + 0x1c]         ; 00534ecd
    MOV dword ptr [ESP + 0x68],EAX      ; 00534ed1
    FILD dword ptr [ESP + 0x68]         ; 00534ed5
    FMUL float ptr [ESP + 0x20]         ; 00534ed9
    MOV EDX,dword ptr [0x00612560]      ; 00534edd | DAT_00612560
    FXCH ST2                            ; 00534ee3
    CALL FUN_005c03a0                   ; 00534ee5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x30]        ; 00534eea
    LEA EAX,[ESP + 0x30]                ; 00534eee
    FADDP ST2,ST0                       ; 00534ef2
    PUSH EAX                            ; 00534ef4
    CALL FUN_005c03a0                   ; 00534ef5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 00534efa
    FADDP ST2,ST0                       ; 00534efc
    FISTP dword ptr [ESP + 0x3c]        ; 00534efe
    CALL FUN_005c03a0                   ; 00534f02
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x38]        ; 00534f07
    MOV EAX,dword ptr [EDX]             ; 00534f0b
    PUSH EAX                            ; 00534f0d
    CALL FUN_00580173                   ; 00534f0e
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 00534f13
    MOV EAX,dword ptr [ESP + 0x30]      ; 00534f16
    MOV dword ptr [ESP + 0x68],EAX      ; 00534f1a
    MOV EDX,dword ptr [0x00612560]      ; 00534f1e | DAT_00612560
    FILD dword ptr [ESP + 0x68]         ; 00534f24
    LEA EAX,[ESP + 0x30]                ; 00534f28
    FLD ST0                             ; 00534f2c
    FADD float ptr [ESP + 0x18]         ; 00534f2e
    PUSH EAX                            ; 00534f32
    FSTP ST1                            ; 00534f33
    CALL FUN_005c03a0                   ; 00534f35
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x34]        ; 00534f3a
    MOV EAX,dword ptr [EDX]             ; 00534f3e
    ADD EAX,0x30                        ; 00534f40
    PUSH EAX                            ; 00534f43
    CALL FUN_00580173                   ; 00534f44
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 00534f49
    MOV EAX,dword ptr [ESP + 0x38]      ; 00534f4c
    MOV dword ptr [ESP + 0x68],EAX      ; 00534f50
    MOV EDX,dword ptr [0x00612560]      ; 00534f54 | DAT_00612560
    FILD dword ptr [ESP + 0x68]         ; 00534f5a
    LEA EAX,[ESP + 0x30]                ; 00534f5e
    FLD ST0                             ; 00534f62
    FADD float ptr [ESP + 0x20]         ; 00534f64
    PUSH EAX                            ; 00534f68
    FSTP ST1                            ; 00534f69
    CALL FUN_005c03a0                   ; 00534f6b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x3c]        ; 00534f70
    MOV EAX,dword ptr [EDX]             ; 00534f74
    ADD EAX,0x60                        ; 00534f76
    PUSH EAX                            ; 00534f79
    CALL FUN_00580173                   ; 00534f7a
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 00534f7f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00534f82
    MOV dword ptr [ESP + 0x68],EAX      ; 00534f86
    LEA EDX,[ESP + 0x30]                ; 00534f8a
    FILD dword ptr [ESP + 0x68]         ; 00534f8e
    FLD ST0                             ; 00534f92
    FSUB float ptr [ESP + 0x18]         ; 00534f94
    MOV EAX,[0x00612560]                ; 00534f98 | DAT_00612560
    FSTP ST1                            ; 00534f9d
    CALL FUN_005c03a0                   ; 00534f9f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x30]        ; 00534fa4
    MOV EAX,dword ptr [EAX]             ; 00534fa8
    PUSH EDX                            ; 00534faa
    ADD EAX,0x90                        ; 00534fab
    PUSH EAX                            ; 00534fb0
    CALL FUN_00580173                   ; 00534fb1
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 00534fb6
    MOV EAX,[0x00612560]                ; 00534fb9 | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 00534fbe
    MOV ECX,dword ptr [ESP + 0x58]      ; 00534fc0
    MOV dword ptr [EDX + 0x20],ECX      ; 00534fc4
    MOV EDX,dword ptr [EAX]             ; 00534fc7
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00534fc9
    MOV dword ptr [EDX + 0x24],ECX      ; 00534fcd
    MOV EDX,dword ptr [EAX]             ; 00534fd0
    MOV ECX,dword ptr [ESP + 0x60]      ; 00534fd2
    MOV dword ptr [EDX + 0x28],ECX      ; 00534fd6
    MOV EDX,dword ptr [EAX]             ; 00534fd9
    MOV ECX,dword ptr [ESP + 0x54]      ; 00534fdb
    MOV dword ptr [EDX + 0x2c],ECX      ; 00534fdf
    MOV EDX,dword ptr [EAX]             ; 00534fe2
    MOV ECX,dword ptr [ESP + 0x58]      ; 00534fe4
    MOV dword ptr [EDX + 0x50],ECX      ; 00534fe8
    MOV EDX,dword ptr [EAX]             ; 00534feb
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00534fed
    MOV dword ptr [EDX + 0x54],ECX      ; 00534ff1
    MOV EDX,dword ptr [EAX]             ; 00534ff4
    MOV ECX,dword ptr [ESP + 0x60]      ; 00534ff6
    MOV dword ptr [EDX + 0x58],ECX      ; 00534ffa
    MOV EDX,dword ptr [EAX]             ; 00534ffd
    MOV ECX,dword ptr [ESP + 0x54]      ; 00534fff
    MOV dword ptr [EDX + 0x5c],ECX      ; 00535003
    MOV EDX,dword ptr [EAX]             ; 00535006
    MOV ECX,dword ptr [ESP + 0x58]      ; 00535008
    MOV dword ptr [EDX + 0x80],ECX      ; 0053500c
    MOV EDX,dword ptr [EAX]             ; 00535012
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00535014
    MOV dword ptr [EDX + 0x84],ECX      ; 00535018
    MOV EDX,dword ptr [EAX]             ; 0053501e
    MOV ECX,dword ptr [ESP + 0x60]      ; 00535020
    MOV dword ptr [EDX + 0x88],ECX      ; 00535024
    MOV EDX,dword ptr [EAX]             ; 0053502a
    MOV ECX,dword ptr [ESP + 0x54]      ; 0053502c
    MOV dword ptr [EDX + 0x8c],ECX      ; 00535030
    MOV EDX,dword ptr [EAX]             ; 00535036
    MOV ECX,dword ptr [ESP + 0x58]      ; 00535038
    MOV dword ptr [EDX + 0xb0],ECX      ; 0053503c
    MOV EDX,dword ptr [EAX]             ; 00535042
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00535044
    MOV dword ptr [EDX + 0xb4],ECX      ; 00535048
    MOV EDX,dword ptr [EAX]             ; 0053504e
    MOV ECX,dword ptr [ESP + 0x60]      ; 00535050
    MOV dword ptr [EDX + 0xb8],ECX      ; 00535054
    PUSH 0x1e7d360                      ; 0053505a
    MOV EDX,dword ptr [EAX]             ; 0053505f
    MOV ECX,dword ptr [ESP + 0x58]      ; 00535061
    PUSH EAX                            ; 00535065
    MOV dword ptr [EDX + 0xbc],ECX      ; 00535066
    CALL FUN_00482f00                   ; 0053506c
        ;   XREF to: 00482f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00482f00()
    ADD ESP,0x8                         ; 00535071
    JMP 0x00534dfd                      ; 00535074
        ;   XREF to: 00534dfd (UNCONDITIONAL_JUMP)  ; LAB_00534dfd

