; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9ce0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c4518
;   undefined4 DAT_005c4520
;   undefined4 DAT_005c4528
;   undefined4 DAT_005c4530
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_00408890
;   FUN_0045b800
;   FUN_0046e5e0
;   FUN_004e4330
;   FUN_004f3ff0
;   FUN_005a3120
;   FUN_005a3260
;   FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9ce0
        ;   Label: FUN_004c9ce0
    PUSH ESI                            ; 004c9ce1
    PUSH EDI                            ; 004c9ce2
    PUSH EBP                            ; 004c9ce3
    MOV EBP,ESP                         ; 004c9ce4
    SUB ESP,0x128                       ; 004c9ce6
    AND ESP,0xfffffff8                  ; 004c9cec
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c9cef
    PUSH EBX                            ; 004c9cf2
    CALL FUN_00408890                   ; 004c9cf3
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 004c9cf8
    LEA EAX,[EBX + 0x164]               ; 004c9cfb
    PUSH EAX                            ; 004c9d01
    MOV EDX,dword ptr [0x005f2afc]      ; 004c9d02 | DAT_005f2afc
    PUSH EDX                            ; 004c9d08
    CALL FUN_0046e5e0                   ; 004c9d09
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    MOV ECX,dword ptr [EBX + 0x218]     ; 004c9d0e
    ADD ESP,0x8                         ; 004c9d14
    TEST ECX,ECX                        ; 004c9d17
    JNZ 0x004c9ec1                      ; 004c9d19
        ;   XREF to: 004c9ec1 (CONDITIONAL_JUMP)  ; LAB_004c9ec1
    FLD float ptr [EBX + 0x158]         ; 004c9d1f
        ;   Label: LAB_004c9d1f
    FMUL double ptr [0x005c4520]        ; 004c9d25 | DAT_005c4520
    CALL FUN_005a3120                   ; 004c9d2b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x124]       ; 004c9d30
    MOV EAX,dword ptr [ESP + 0x124]     ; 004c9d37
    INC EAX                             ; 004c9d3e
    MOV dword ptr [EBX + 0xb5c],EAX     ; 004c9d3f
    CMP EAX,0x4                         ; 004c9d45
    JLE 0x004c9d54                      ; 004c9d48
        ;   XREF to: 004c9d54 (CONDITIONAL_JUMP)  ; LAB_004c9d54
    MOV dword ptr [EBX + 0xb5c],0x4     ; 004c9d4a
    FLD float ptr [EBX + 0x15c]         ; 004c9d54
        ;   Label: LAB_004c9d54
    FMUL double ptr [0x005c4520]        ; 004c9d5a | DAT_005c4520
    CALL FUN_005a3120                   ; 004c9d60
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x124]       ; 004c9d65
    MOV EAX,dword ptr [ESP + 0x124]     ; 004c9d6c
    INC EAX                             ; 004c9d73
    MOV dword ptr [EBX + 0xb60],EAX     ; 004c9d74
    CMP EAX,0x4                         ; 004c9d7a
    JLE 0x004c9d89                      ; 004c9d7d
        ;   XREF to: 004c9d89 (CONDITIONAL_JUMP)  ; LAB_004c9d89
    MOV dword ptr [EBX + 0xb60],0x4     ; 004c9d7f
    MOV EAX,dword ptr [EBX + 0xb60]     ; 004c9d89
        ;   Label: LAB_004c9d89
    MOV EDX,dword ptr [EBX + 0xb5c]     ; 004c9d8f
    INC EAX                             ; 004c9d95
    INC EDX                             ; 004c9d96
    IMUL EDX,EAX                        ; 004c9d97
    MOV ESI,dword ptr [EBX + 0xb60]     ; 004c9d9a
    MOV EAX,dword ptr [EBX + 0xb5c]     ; 004c9da0
    IMUL EAX,ESI                        ; 004c9da6
    MOV dword ptr [EBX + 0xb64],EDX     ; 004c9da9
    MOV EDI,dword ptr [EBX + 0xb64]     ; 004c9daf
    MOV dword ptr [EBX + 0xb68],EAX     ; 004c9db5
    CMP EDI,0x19                        ; 004c9dbb
    JLE 0x004ca19d                      ; 004c9dbe
        ;   XREF to: 004ca19d (CONDITIONAL_JUMP)  ; LAB_004ca19d
    MOV ESI,dword ptr [EBX + 0xb68]     ; 004c9dc4
        ;   Label: LAB_004c9dc4
    PUSH ESI                            ; 004c9dca
    MOV EDI,dword ptr [EBX + 0xb64]     ; 004c9dcb
    PUSH EDI                            ; 004c9dd1
    MOV EDX,0x5c445c                    ; 004c9dd2
    MOV ECX,0x86                        ; 004c9dd7
    PUSH 0x5c446e                       ; 004c9ddc
    MOV dword ptr [0x01d71de0],EDX      ; 004c9de1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004c9de7 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004c9ded
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 004c9df2
    FILD dword ptr [EBX + 0xb5c]        ; 004c9df5
        ;   Label: LAB_004c9df5
    FDIVR float ptr [EBX + 0x158]       ; 004c9dfb
    FILD dword ptr [EBX + 0xb60]        ; 004c9e01
    FDIVR float ptr [EBX + 0x15c]       ; 004c9e07
    XOR EAX,EAX                         ; 004c9e0d
    XOR EDI,EDI                         ; 004c9e0f
    MOV dword ptr [ESP + 0x11c],EAX     ; 004c9e11
    FXCH                                ; 004c9e18
    FSTP float ptr [ESP + 0x118]        ; 004c9e1a
    MOV dword ptr [ESP + 0xa8],EAX      ; 004c9e21
    MOV dword ptr [ESP + 0xac],EAX      ; 004c9e28
    MOV dword ptr [ESP + 0xb0],EAX      ; 004c9e2f
    LEA EAX,[EBX + 0x3bc]               ; 004c9e36
    FSTP float ptr [ESP + 0x110]        ; 004c9e3c
    MOV dword ptr [ESP + 0x10c],EAX     ; 004c9e43
    MOV EAX,dword ptr [EBX + 0xb60]     ; 004c9e4a
        ;   Label: LAB_004c9e4a
    MOV EDX,dword ptr [ESP + 0x11c]     ; 004c9e50
    INC EAX                             ; 004c9e57
    CMP EAX,EDX                         ; 004c9e58
    JLE 0x004ca278                      ; 004c9e5a
        ;   XREF to: 004ca278 (CONDITIONAL_JUMP)  ; LAB_004ca278
    IMUL EDX,EDI,0xc                    ; 004c9e60
    FLD float ptr [EBX + 0x158]         ; 004c9e63
    FCHS                                ; 004c9e69
    FMUL double ptr [0x005c4520]        ; 004c9e6b | DAT_005c4520
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004c9e71
    XOR ESI,ESI                         ; 004c9e78
    FSTP float ptr [ESP + 0xa8]         ; 004c9e7a
    LEA ECX,[EDI*0x4 + 0x0]             ; 004c9e81
    ADD EDX,EAX                         ; 004c9e88
    ADD ECX,EBX                         ; 004c9e8a
    MOV EAX,dword ptr [EBX + 0xb5c]     ; 004c9e8c
        ;   Label: LAB_004c9e8c
    INC EAX                             ; 004c9e92
    CMP ESI,EAX                         ; 004c9e93
    JL 0x004ca1ab                       ; 004c9e95
        ;   XREF to: 004ca1ab (CONDITIONAL_JUMP)  ; LAB_004ca1ab
    FLD float ptr [ESP + 0xac]          ; 004c9e9b
    MOV EDX,dword ptr [ESP + 0x11c]     ; 004c9ea2
    FADD float ptr [ESP + 0x110]        ; 004c9ea9
    INC EDX                             ; 004c9eb0
    FSTP float ptr [ESP + 0xac]         ; 004c9eb1
    MOV dword ptr [ESP + 0x11c],EDX     ; 004c9eb8
    JMP 0x004c9e4a                      ; 004c9ebf
        ;   XREF to: 004c9e4a (UNCONDITIONAL_JUMP)  ; LAB_004c9e4a
    XOR ESI,ESI                         ; 004c9ec1
        ;   Label: LAB_004c9ec1
    MOV dword ptr [ESP + 0xf8],ESI      ; 004c9ec3
    MOV dword ptr [ESP + 0xf4],ESI      ; 004c9eca
    MOV dword ptr [ESP + 0xf0],ESI      ; 004c9ed1
    FLD float ptr [EBX + 0x158]         ; 004c9ed8
    FMUL float ptr [0x005c4518]         ; 004c9ede | DAT_005c4518
    LEA EAX,[ESP + 0xf0]                ; 004c9ee4
    LEA EDI,[ESP + 0x54]                ; 004c9eeb
    PUSH EAX                            ; 004c9eef
    LEA EAX,[EBX + 0x3c]                ; 004c9ef0
    LEA ESI,[ESP + 0x100]               ; 004c9ef3
    PUSH EAX                            ; 004c9efa
    FSTP float ptr [ESP + 0xf8]         ; 004c9efb
    CALL FUN_0045b800                   ; 004c9f02
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0x104]               ; 004c9f07
    ADD ESP,0x8                         ; 004c9f0e
    LEA EAX,[EBX + 0x20]                ; 004c9f11
    MOVSD ES:EDI,ESI                    ; 004c9f14
    MOVSD ES:EDI,ESI                    ; 004c9f15
    MOVSD ES:EDI,ESI                    ; 004c9f16
    LEA EDX,[ESP + 0x48]                ; 004c9f17
    FLD float ptr [EAX + 0x4]           ; 004c9f1b
    FLD float ptr [EAX + 0x8]           ; 004c9f1e
    FLD float ptr [EAX]                 ; 004c9f21
    LEA EDI,[ESP + 0x60]                ; 004c9f23
    LEA ESI,[ESP + 0x3c]                ; 004c9f27
    LEA EAX,[ESP + 0x60]                ; 004c9f2b
    FADD float ptr [ESP + 0x54]         ; 004c9f2f
    FXCH ST2                            ; 004c9f33
    FADD float ptr [ESP + 0x58]         ; 004c9f35
    FXCH                                ; 004c9f39
    FADD float ptr [ESP + 0x5c]         ; 004c9f3b
    FXCH ST2                            ; 004c9f3f
    FSTP float ptr [ESP + 0x3c]         ; 004c9f41
    FSTP float ptr [ESP + 0x40]         ; 004c9f45
    FSTP float ptr [ESP + 0x44]         ; 004c9f49
    MOVSD ES:EDI,ESI                    ; 004c9f4d
    MOVSD ES:EDI,ESI                    ; 004c9f4e
    MOVSD ES:EDI,ESI                    ; 004c9f4f
    CMP EDX,EAX                         ; 004c9f50
    JZ 0x004c9f6c                       ; 004c9f52
        ;   XREF to: 004c9f6c (CONDITIONAL_JUMP)  ; LAB_004c9f6c
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c9f54
    MOV dword ptr [ESP + 0x48],EAX      ; 004c9f58
    MOV EAX,dword ptr [ESP + 0x64]      ; 004c9f5c
    MOV dword ptr [ESP + 0x4c],EAX      ; 004c9f60
    MOV EAX,dword ptr [ESP + 0x68]      ; 004c9f64
    MOV dword ptr [ESP + 0x50],EAX      ; 004c9f68
    XOR byte ptr [ESP + 0xf3],0x80      ; 004c9f6c
        ;   Label: LAB_004c9f6c
    LEA EAX,[ESP + 0xf0]                ; 004c9f74
    PUSH EAX                            ; 004c9f7b
    LEA EAX,[EBX + 0x3c]                ; 004c9f7c
    PUSH EAX                            ; 004c9f7f
    LEA ESI,[ESP + 0x80]                ; 004c9f80
    LEA EDI,[ESP + 0xd4]                ; 004c9f87
    CALL FUN_0045b800                   ; 004c9f8e
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0x80]                ; 004c9f93
    ADD ESP,0x8                         ; 004c9f9a
    LEA EAX,[EBX + 0x20]                ; 004c9f9d
    MOVSD ES:EDI,ESI                    ; 004c9fa0
    MOVSD ES:EDI,ESI                    ; 004c9fa1
    MOVSD ES:EDI,ESI                    ; 004c9fa2
    LEA EDX,[ESP + 0x9c]                ; 004c9fa3
    FLD float ptr [EAX + 0x4]           ; 004c9faa
    FLD float ptr [EAX + 0x8]           ; 004c9fad
    FLD float ptr [EAX]                 ; 004c9fb0
    LEA EDI,[ESP + 0xe4]                ; 004c9fb2
    LEA ESI,[ESP + 0xc0]                ; 004c9fb9
    LEA EAX,[ESP + 0xe4]                ; 004c9fc0
    FADD float ptr [ESP + 0xcc]         ; 004c9fc7
    FXCH ST2                            ; 004c9fce
    FADD float ptr [ESP + 0xd0]         ; 004c9fd0
    FXCH                                ; 004c9fd7
    FADD float ptr [ESP + 0xd4]         ; 004c9fd9
    FXCH ST2                            ; 004c9fe0
    FSTP float ptr [ESP + 0xc0]         ; 004c9fe2
    FSTP float ptr [ESP + 0xc4]         ; 004c9fe9
    FSTP float ptr [ESP + 0xc8]         ; 004c9ff0
    MOVSD ES:EDI,ESI                    ; 004c9ff7
    MOVSD ES:EDI,ESI                    ; 004c9ff8
    MOVSD ES:EDI,ESI                    ; 004c9ff9
    CMP EDX,EAX                         ; 004c9ffa
    JZ 0x004ca028                       ; 004c9ffc
        ;   XREF to: 004ca028 (CONDITIONAL_JUMP)  ; LAB_004ca028
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c9ffe
    MOV dword ptr [ESP + 0x9c],EAX      ; 004ca005
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004ca00c
    MOV dword ptr [ESP + 0xa0],EAX      ; 004ca013
    MOV EAX,dword ptr [ESP + 0xec]      ; 004ca01a
    MOV dword ptr [ESP + 0xa4],EAX      ; 004ca021
    MOV EAX,dword ptr [EBX + 0x15c]     ; 004ca028
        ;   Label: LAB_004ca028
    MOV dword ptr [ESP + 0xf4],EAX      ; 004ca02e
    LEA EAX,[ESP + 0xf0]                ; 004ca035
    PUSH EAX                            ; 004ca03c
    LEA EAX,[EBX + 0x3c]                ; 004ca03d
    PUSH EAX                            ; 004ca040
    LEA ESI,[ESP + 0x8]                 ; 004ca041
    LEA EDI,[ESP + 0x8c]                ; 004ca045
    CALL FUN_0045b800                   ; 004ca04c
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0x8]                 ; 004ca051
    ADD ESP,0x8                         ; 004ca055
    LEA EAX,[EBX + 0x20]                ; 004ca058
    MOVSD ES:EDI,ESI                    ; 004ca05b
    MOVSD ES:EDI,ESI                    ; 004ca05c
    MOVSD ES:EDI,ESI                    ; 004ca05d
    LEA EDX,[ESP + 0xb4]                ; 004ca05e
    FLD float ptr [EAX + 0x4]           ; 004ca065
    FLD float ptr [EAX + 0x8]           ; 004ca068
    FLD float ptr [EAX]                 ; 004ca06b
    LEA EDI,[ESP + 0xb4]                ; 004ca06d
    LEA ESI,[ESP + 0x6c]                ; 004ca074
    LEA EAX,[ESP + 0x30]                ; 004ca078
    FADD float ptr [ESP + 0x84]         ; 004ca07c
    FXCH ST2                            ; 004ca083
    FADD float ptr [ESP + 0x88]         ; 004ca085
    FXCH                                ; 004ca08c
    FADD float ptr [ESP + 0x8c]         ; 004ca08e
    FXCH ST2                            ; 004ca095
    FSTP float ptr [ESP + 0x6c]         ; 004ca097
    FSTP float ptr [ESP + 0x70]         ; 004ca09b
    FSTP float ptr [ESP + 0x74]         ; 004ca09f
    MOVSD ES:EDI,ESI                    ; 004ca0a3
    MOVSD ES:EDI,ESI                    ; 004ca0a4
    MOVSD ES:EDI,ESI                    ; 004ca0a5
    CMP EAX,EDX                         ; 004ca0a6
    JZ 0x004ca0cb                       ; 004ca0a8
        ;   XREF to: 004ca0cb (CONDITIONAL_JUMP)  ; LAB_004ca0cb
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004ca0aa
    MOV dword ptr [ESP + 0x30],EAX      ; 004ca0b1
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004ca0b5
    MOV dword ptr [ESP + 0x34],EAX      ; 004ca0bc
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004ca0c0
    MOV dword ptr [ESP + 0x38],EAX      ; 004ca0c7
    MOV DL,byte ptr [ESP + 0xf3]        ; 004ca0cb
        ;   Label: LAB_004ca0cb
    LEA EAX,[ESP + 0xf0]                ; 004ca0d2
    LEA ESI,[ESP + 0xc]                 ; 004ca0d9
    PUSH EAX                            ; 004ca0dd
    LEA EAX,[EBX + 0x3c]                ; 004ca0de
    XOR DL,0x80                         ; 004ca0e1
    PUSH EAX                            ; 004ca0e4
    LEA EDI,[ESP + 0x20]                ; 004ca0e5
    MOV byte ptr [ESP + 0xfb],DL        ; 004ca0e9
    CALL FUN_0045b800                   ; 004ca0f0
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0x14]                ; 004ca0f5
    ADD ESP,0x8                         ; 004ca0f9
    LEA EAX,[EBX + 0x20]                ; 004ca0fc
    MOVSD ES:EDI,ESI                    ; 004ca0ff
    MOVSD ES:EDI,ESI                    ; 004ca100
    MOVSD ES:EDI,ESI                    ; 004ca101
    LEA EDX,[ESP + 0x24]                ; 004ca102
    FLD float ptr [EAX + 0x4]           ; 004ca106
    FLD float ptr [EAX + 0x8]           ; 004ca109
    FLD float ptr [EAX]                 ; 004ca10c
    LEA EDI,[ESP + 0xd8]                ; 004ca10e
    LEA ESI,[ESP + 0x90]                ; 004ca115
    LEA EAX,[ESP + 0xd8]                ; 004ca11c
    FADD float ptr [ESP + 0x18]         ; 004ca123
    FXCH ST2                            ; 004ca127
    FADD float ptr [ESP + 0x1c]         ; 004ca129
    FXCH                                ; 004ca12d
    FADD float ptr [ESP + 0x20]         ; 004ca12f
    FXCH ST2                            ; 004ca133
    FSTP float ptr [ESP + 0x90]         ; 004ca135
    FSTP float ptr [ESP + 0x94]         ; 004ca13c
    FSTP float ptr [ESP + 0x98]         ; 004ca143
    MOVSD ES:EDI,ESI                    ; 004ca14a
    MOVSD ES:EDI,ESI                    ; 004ca14b
    MOVSD ES:EDI,ESI                    ; 004ca14c
    CMP EDX,EAX                         ; 004ca14d
    JZ 0x004ca172                       ; 004ca14f
        ;   XREF to: 004ca172 (CONDITIONAL_JUMP)  ; LAB_004ca172
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ca151
    MOV dword ptr [ESP + 0x24],EAX      ; 004ca158
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004ca15c
    MOV dword ptr [ESP + 0x28],EAX      ; 004ca163
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004ca167
    MOV dword ptr [ESP + 0x2c],EAX      ; 004ca16e
    LEA EAX,[ESP + 0x24]                ; 004ca172
        ;   Label: LAB_004ca172
    PUSH EAX                            ; 004ca176
    LEA EAX,[ESP + 0x34]                ; 004ca177
    PUSH EAX                            ; 004ca17b
    LEA EAX,[ESP + 0xa4]                ; 004ca17c
    PUSH EAX                            ; 004ca183
    LEA EAX,[ESP + 0x54]                ; 004ca184
    PUSH EAX                            ; 004ca188
    LEA EAX,[EBX + 0x21c]               ; 004ca189
    PUSH EAX                            ; 004ca18f
    CALL FUN_004f3ff0                   ; 004ca190
        ;   XREF to: 004f3ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3ff0()
    ADD ESP,0x14                        ; 004ca195
    JMP 0x004c9d1f                      ; 004ca198
        ;   XREF to: 004c9d1f (UNCONDITIONAL_JUMP)  ; LAB_004c9d1f
    CMP EAX,0x10                        ; 004ca19d
        ;   Label: LAB_004ca19d
    JG 0x004c9dc4                       ; 004ca1a0
        ;   XREF to: 004c9dc4 (CONDITIONAL_JUMP)  ; LAB_004c9dc4
    JMP 0x004c9df5                      ; 004ca1a6
        ;   XREF to: 004c9df5 (UNCONDITIONAL_JUMP)  ; LAB_004c9df5
    LEA EAX,[ESP + 0xa8]                ; 004ca1ab
        ;   Label: LAB_004ca1ab
    CMP EDX,EAX                         ; 004ca1b2
    JZ 0x004ca1d3                       ; 004ca1b4
        ;   XREF to: 004ca1d3 (CONDITIONAL_JUMP)  ; LAB_004ca1d3
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004ca1b6
    MOV dword ptr [EDX],EAX             ; 004ca1bd
    MOV EAX,dword ptr [ESP + 0xac]      ; 004ca1bf
    MOV dword ptr [EDX + 0x4],EAX       ; 004ca1c6
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004ca1c9
    MOV dword ptr [EDX + 0x8],EAX       ; 004ca1d0
    MOV dword ptr [ESP + 0x124],ESI     ; 004ca1d3
        ;   Label: LAB_004ca1d3
    FILD dword ptr [EBX + 0xb5c]        ; 004ca1da
    FILD dword ptr [ESP + 0x124]        ; 004ca1e0
    FDIVRP                              ; 004ca1e7
    FLD double ptr [0x005c4528]         ; 004ca1e9 | DAT_005c4528
    FXCH                                ; 004ca1ef
    FMUL ST1                            ; 004ca1f1
    FLD double ptr [0x005c4530]         ; 004ca1f3 | DAT_005c4530
    FXCH                                ; 004ca1f9
    FADD ST0,ST1                        ; 004ca1fb
    CALL FUN_005a3120                   ; 004ca1fd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x124]       ; 004ca202
    MOV EAX,dword ptr [ESP + 0x124]     ; 004ca209
    MOV dword ptr [ECX + 0x614],EAX     ; 004ca210
    MOV EAX,dword ptr [EBX + 0xb60]     ; 004ca216
    SUB EAX,dword ptr [ESP + 0x11c]     ; 004ca21c
    MOV dword ptr [ESP + 0x124],EAX     ; 004ca223
    FILD dword ptr [ESP + 0x124]        ; 004ca22a
    FILD dword ptr [EBX + 0xb60]        ; 004ca231
    FDIVP                               ; 004ca237
    FMULP ST2                           ; 004ca239
    ADD ECX,0x4                         ; 004ca23b
    FADDP                               ; 004ca23e
    CALL FUN_005a3120                   ; 004ca240
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x124]       ; 004ca245
    MOV EAX,dword ptr [ESP + 0x124]     ; 004ca24c
    ADD EDX,0xc                         ; 004ca253
    MOV dword ptr [ECX + 0x674],EAX     ; 004ca256
    INC EDI                             ; 004ca25c
    FLD float ptr [ESP + 0xa8]          ; 004ca25d
    FADD float ptr [ESP + 0x118]        ; 004ca264
    INC ESI                             ; 004ca26b
    FSTP float ptr [ESP + 0xa8]         ; 004ca26c
    JMP 0x004c9e8c                      ; 004ca273
        ;   XREF to: 004c9e8c (UNCONDITIONAL_JUMP)  ; LAB_004c9e8c
    XOR ECX,ECX                         ; 004ca278
        ;   Label: LAB_004ca278
    MOV EDI,dword ptr [EBX + 0xb60]     ; 004ca27a
    MOV dword ptr [ESP + 0x120],ECX     ; 004ca280
    MOV dword ptr [ESP + 0x108],ECX     ; 004ca287
    TEST EDI,EDI                        ; 004ca28e
    JLE 0x004ca3be                      ; 004ca290
        ;   XREF to: 004ca3be (CONDITIONAL_JUMP)  ; LAB_004ca3be
    LEA EAX,[EBX + 0x6dc]               ; 004ca296
    MOV dword ptr [ESP + 0x114],EAX     ; 004ca29c
    MOV EDX,dword ptr [EBX + 0xb5c]     ; 004ca2a3
        ;   Label: LAB_004ca2a3
    XOR ESI,ESI                         ; 004ca2a9
    TEST EDX,EDX                        ; 004ca2ab
    JLE 0x004ca3a1                      ; 004ca2ad
        ;   XREF to: 004ca3a1 (CONDITIONAL_JUMP)  ; LAB_004ca3a1
    IMUL EAX,dword ptr [ESP + 0x108],0x48 ; 004ca2b3
    ADD EAX,dword ptr [ESP + 0x114]     ; 004ca2bb
    MOV dword ptr [EAX + 0x4],0x4       ; 004ca2c2
        ;   Label: LAB_004ca2c2
    MOV dword ptr [EAX + 0x14],0x0      ; 004ca2c9
    MOV EDX,dword ptr [EAX + 0x14]      ; 004ca2d0
    MOV dword ptr [EAX + 0x10],EDX      ; 004ca2d3
    MOV dword ptr [EAX + 0xc],EDX       ; 004ca2d6
    MOV dword ptr [EAX + 0x8],EDX       ; 004ca2d9
    MOV EDX,dword ptr [EBX + 0xb5c]     ; 004ca2dc
    MOV ECX,dword ptr [ESP + 0x120]     ; 004ca2e2
    INC EDX                             ; 004ca2e9
    IMUL EDX,ECX                        ; 004ca2ea
    ADD EDX,ESI                         ; 004ca2ed
    MOV dword ptr [EAX + 0x18],EDX      ; 004ca2ef
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x614] ; 004ca2f2
    MOV dword ptr [EAX + 0x1c],EDI      ; 004ca2f9
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x678] ; 004ca2fc
    MOV dword ptr [EAX + 0x20],EDI      ; 004ca303
    LEA EDI,[EDX + 0x1]                 ; 004ca306
    MOV dword ptr [EAX + 0x24],EDI      ; 004ca309
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x618] ; 004ca30c
    MOV dword ptr [EAX + 0x28],EDI      ; 004ca313
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x67c] ; 004ca316
    MOV dword ptr [EAX + 0x2c],ECX      ; 004ca31d
    MOV ECX,dword ptr [EBX + 0xb5c]     ; 004ca320
    ADD ECX,EDX                         ; 004ca326
    ADD ECX,0x2                         ; 004ca328
    MOV dword ptr [EAX + 0x30],ECX      ; 004ca32b
    MOV ECX,dword ptr [EBX + 0xb5c]     ; 004ca32e
    ADD ECX,EDX                         ; 004ca334
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x61c] ; 004ca336
    MOV dword ptr [EAX + 0x34],ECX      ; 004ca33d
    MOV ECX,dword ptr [EBX + 0xb5c]     ; 004ca340
    ADD ECX,EDX                         ; 004ca346
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x680] ; 004ca348
    MOV dword ptr [EAX + 0x38],ECX      ; 004ca34f
    MOV ECX,dword ptr [EBX + 0xb5c]     ; 004ca352
    ADD ECX,EDX                         ; 004ca358
    INC ECX                             ; 004ca35a
    MOV dword ptr [EAX + 0x3c],ECX      ; 004ca35b
    MOV ECX,dword ptr [EBX + 0xb5c]     ; 004ca35e
    ADD ECX,EDX                         ; 004ca364
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x618] ; 004ca366
    MOV dword ptr [EAX + 0x40],ECX      ; 004ca36d
    ADD EDX,dword ptr [EBX + 0xb5c]     ; 004ca370
    ADD EAX,0x48                        ; 004ca376
    MOV EDX,dword ptr [EBX + EDX*0x4 + 0x67c] ; 004ca379
    MOV dword ptr [EAX + -0x4],EDX      ; 004ca380
    MOV EDX,dword ptr [ESP + 0x108]     ; 004ca383
    INC ESI                             ; 004ca38a
    INC EDX                             ; 004ca38b
    MOV ECX,dword ptr [EBX + 0xb5c]     ; 004ca38c
    MOV dword ptr [ESP + 0x108],EDX     ; 004ca392
    CMP ESI,ECX                         ; 004ca399
    JL 0x004ca2c2                       ; 004ca39b
        ;   XREF to: 004ca2c2 (CONDITIONAL_JUMP)  ; LAB_004ca2c2
    MOV ECX,dword ptr [ESP + 0x120]     ; 004ca3a1
        ;   Label: LAB_004ca3a1
    INC ECX                             ; 004ca3a8
    MOV ESI,dword ptr [EBX + 0xb60]     ; 004ca3a9
    MOV dword ptr [ESP + 0x120],ECX     ; 004ca3af
    CMP ECX,ESI                         ; 004ca3b6
    JL 0x004ca2a3                       ; 004ca3b8
        ;   XREF to: 004ca2a3 (CONDITIONAL_JUMP)  ; LAB_004ca2a3
    CMP dword ptr [EBX + 0x1ac],0xfde8  ; 004ca3be
        ;   Label: LAB_004ca3be
    SETLE AL                            ; 004ca3c8
    AND EAX,0xff                        ; 004ca3cb
    PUSH 0x5c44a3                       ; 004ca3d0
    MOV dword ptr [EBX + 0xfc],EAX      ; 004ca3d5
    LEA EAX,[EBX + 0x1b4]               ; 004ca3db
    PUSH EAX                            ; 004ca3e1
    CALL FUN_005a3260                   ; 004ca3e2
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004ca3e7
    TEST EAX,EAX                        ; 004ca3ea
    JNZ 0x004ca3f5                      ; 004ca3ec
        ;   XREF to: 004ca3f5 (CONDITIONAL_JUMP)  ; LAB_004ca3f5
    MOV byte ptr [EBX + 0x1b4],0x0      ; 004ca3ee
    MOV DH,byte ptr [EBX + 0x1b4]       ; 004ca3f5
        ;   Label: LAB_004ca3f5
    MOV dword ptr [EBX + 0x104],0x0     ; 004ca3fb
    TEST DH,DH                          ; 004ca405
    JNZ 0x004ca413                      ; 004ca407
        ;   XREF to: 004ca413 (CONDITIONAL_JUMP)  ; LAB_004ca413
    MOV dword ptr [EBX + 0x104],0x1     ; 004ca409
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 004ca413
        ;   Label: LAB_004ca413
    MOV dword ptr [EBX + 0xb6c],0x0     ; 004ca419
    TEST EAX,EAX                        ; 004ca423
    JNZ 0x004ca42e                      ; 004ca425
        ;   XREF to: 004ca42e (CONDITIONAL_JUMP)  ; LAB_004ca42e
    MOV ESP,EBP                         ; 004ca427
        ;   Label: LAB_004ca427
    POP EBP                             ; 004ca429
    POP EDI                             ; 004ca42a
    POP ESI                             ; 004ca42b
    POP EBX                             ; 004ca42c
    RET                                 ; 004ca42d
    PUSH 0x5c44a8                       ; 004ca42e
        ;   Label: LAB_004ca42e
    LEA EDI,[EBX + 0x3ac]               ; 004ca433
    PUSH EDI                            ; 004ca439
    CALL FUN_005a3d00                   ; 004ca43a
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 004ca43f
    TEST EAX,EAX                        ; 004ca442
    JNZ 0x004ca427                      ; 004ca444
        ;   XREF to: 004ca427 (CONDITIONAL_JUMP)  ; LAB_004ca427
    PUSH 0x5c44b3                       ; 004ca446
    LEA EAX,[EBX + 0x16c]               ; 004ca44b
    PUSH EAX                            ; 004ca451
    CALL FUN_005a3260                   ; 004ca452
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004ca457
    TEST EAX,EAX                        ; 004ca45a
    JZ 0x004ca524                       ; 004ca45c
        ;   XREF to: 004ca524 (CONDITIONAL_JUMP)  ; LAB_004ca524
    PUSH 0x5c44cc                       ; 004ca462
        ;   Label: LAB_004ca462
    LEA EAX,[EBX + 0x16c]               ; 004ca467
    PUSH EAX                            ; 004ca46d
    CALL FUN_005a3260                   ; 004ca46e
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004ca473
    TEST EAX,EAX                        ; 004ca476
    JNZ 0x004ca49f                      ; 004ca478
        ;   XREF to: 004ca49f (CONDITIONAL_JUMP)  ; LAB_004ca49f
    MOV ESI,0x5c44d8                    ; 004ca47a
    LEA EDI,[EBX + 0x3ac]               ; 004ca47f
    PUSH EDI                            ; 004ca485
    MOV AL,byte ptr [ESI]               ; 004ca486
        ;   Label: LAB_004ca486
    MOV byte ptr [EDI],AL               ; 004ca488
    CMP AL,0x0                          ; 004ca48a
    JZ 0x004ca49e                       ; 004ca48c
        ;   XREF to: 004ca49e (CONDITIONAL_JUMP)  ; LAB_004ca49e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ca48e
    ADD ESI,0x2                         ; 004ca491
    MOV byte ptr [EDI + 0x1],AL         ; 004ca494
    ADD EDI,0x2                         ; 004ca497
    CMP AL,0x0                          ; 004ca49a
    JNZ 0x004ca486                      ; 004ca49c
        ;   XREF to: 004ca486 (CONDITIONAL_JUMP)  ; LAB_004ca486
    POP EDI                             ; 004ca49e
        ;   Label: LAB_004ca49e
    PUSH 0x5c44e5                       ; 004ca49f
        ;   Label: LAB_004ca49f
    LEA EAX,[EBX + 0x16c]               ; 004ca4a4
    PUSH EAX                            ; 004ca4aa
    CALL FUN_005a3260                   ; 004ca4ab
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004ca4b0
    TEST EAX,EAX                        ; 004ca4b3
    JNZ 0x004ca4dc                      ; 004ca4b5
        ;   XREF to: 004ca4dc (CONDITIONAL_JUMP)  ; LAB_004ca4dc
    MOV ESI,0x5c44f1                    ; 004ca4b7
    LEA EDI,[EBX + 0x3ac]               ; 004ca4bc
    PUSH EDI                            ; 004ca4c2
    MOV AL,byte ptr [ESI]               ; 004ca4c3
        ;   Label: LAB_004ca4c3
    MOV byte ptr [EDI],AL               ; 004ca4c5
    CMP AL,0x0                          ; 004ca4c7
    JZ 0x004ca4db                       ; 004ca4c9
        ;   XREF to: 004ca4db (CONDITIONAL_JUMP)  ; LAB_004ca4db
    MOV AL,byte ptr [ESI + 0x1]         ; 004ca4cb
    ADD ESI,0x2                         ; 004ca4ce
    MOV byte ptr [EDI + 0x1],AL         ; 004ca4d1
    ADD EDI,0x2                         ; 004ca4d4
    CMP AL,0x0                          ; 004ca4d7
    JNZ 0x004ca4c3                      ; 004ca4d9
        ;   XREF to: 004ca4c3 (CONDITIONAL_JUMP)  ; LAB_004ca4c3
    POP EDI                             ; 004ca4db
        ;   Label: LAB_004ca4db
    PUSH 0x5c44fe                       ; 004ca4dc
        ;   Label: LAB_004ca4dc
    LEA EAX,[EBX + 0x16c]               ; 004ca4e1
    PUSH EAX                            ; 004ca4e7
    CALL FUN_005a3260                   ; 004ca4e8
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004ca4ed
    TEST EAX,EAX                        ; 004ca4f0
    JNZ 0x004ca427                      ; 004ca4f2
        ;   XREF to: 004ca427 (CONDITIONAL_JUMP)  ; LAB_004ca427
    MOV ESI,0x5c450a                    ; 004ca4f8
    LEA EDI,[EBX + 0x3ac]               ; 004ca4fd
    PUSH EDI                            ; 004ca503
    MOV AL,byte ptr [ESI]               ; 004ca504
        ;   Label: LAB_004ca504
    MOV byte ptr [EDI],AL               ; 004ca506
    CMP AL,0x0                          ; 004ca508
    JZ 0x004ca51c                       ; 004ca50a
        ;   XREF to: 004ca51c (CONDITIONAL_JUMP)  ; LAB_004ca51c
    MOV AL,byte ptr [ESI + 0x1]         ; 004ca50c
    ADD ESI,0x2                         ; 004ca50f
    MOV byte ptr [EDI + 0x1],AL         ; 004ca512
    ADD EDI,0x2                         ; 004ca515
    CMP AL,0x0                          ; 004ca518
    JNZ 0x004ca504                      ; 004ca51a
        ;   XREF to: 004ca504 (CONDITIONAL_JUMP)  ; LAB_004ca504
    POP EDI                             ; 004ca51c
        ;   Label: LAB_004ca51c
    MOV ESP,EBP                         ; 004ca51d
    POP EBP                             ; 004ca51f
    POP EDI                             ; 004ca520
    POP ESI                             ; 004ca521
    POP EBX                             ; 004ca522
    RET                                 ; 004ca523
    MOV ESI,0x5c44bf                    ; 004ca524
        ;   Label: LAB_004ca524
    PUSH EDI                            ; 004ca529
    MOV AL,byte ptr [ESI]               ; 004ca52a
        ;   Label: LAB_004ca52a
    MOV byte ptr [EDI],AL               ; 004ca52c
    CMP AL,0x0                          ; 004ca52e
    JZ 0x004ca542                       ; 004ca530
        ;   XREF to: 004ca542 (CONDITIONAL_JUMP)  ; LAB_004ca542
    MOV AL,byte ptr [ESI + 0x1]         ; 004ca532
    ADD ESI,0x2                         ; 004ca535
    MOV byte ptr [EDI + 0x1],AL         ; 004ca538
    ADD EDI,0x2                         ; 004ca53b
    CMP AL,0x0                          ; 004ca53e
    JNZ 0x004ca52a                      ; 004ca540
        ;   XREF to: 004ca52a (CONDITIONAL_JUMP)  ; LAB_004ca52a
    POP EDI                             ; 004ca542
        ;   Label: LAB_004ca542
    JMP 0x004ca462                      ; 004ca543
        ;   XREF to: 004ca462 (UNCONDITIONAL_JUMP)  ; LAB_004ca462

