; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c6d40(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[10]:
;   FUN_0040a050 at 0040a812
;   FUN_0043a7a0 at 0043adb8
;   FUN_00485b40 at 004862d2
;   FUN_004c5250 at 004c5289
;   FUN_004cbdc0 at 004cc5b7
;   FUN_004d1070 at 004d1164
;   FUN_0052e940 at 0052ed1f
;   FUN_0053f170 at 0053f905
;   FUN_00575800 at 00576036
;   FUN_0057fc20 at 00580173
;
; Referenced Globals:
;   undefined4 s_s_7YEARS_RAW_005d93f9+1
;   undefined4 s_s_7YEARS_RAW_005d93f9+2
;   undefined4 s_s_7YEARS_RAW_005d93f9+3
;   undefined4 s_s_7YEARS_RAW_005d93f9+4
;   TerminatedCString s_glass_1_wav_2_0_005d9405
;   undefined4 DAT_005d941a
;   undefined4 DAT_005f22b0
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141c8
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_00449530
;   FUN_0046ca00
;   FUN_004c5bb0
;   FUN_0052dd80
;   FUN_00534480
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6d40
        ;   Label: FUN_004c6d40
    PUSH ESI                            ; 004c6d41
    PUSH EDI                            ; 004c6d42
    PUSH EBP                            ; 004c6d43
    SUB ESP,0x11c                       ; 004c6d44
    MOV EBX,dword ptr [ESP + 0x130]     ; 004c6d4a
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004c6d51
    JNZ 0x004c70d1                      ; 004c6d58
        ;   XREF to: 004c70d1 (CONDITIONAL_JUMP)  ; LAB_004c70d1
    MOV ECX,dword ptr [EBX + 0x344]     ; 004c6d5e
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004c6d64
    TEST ECX,ECX                        ; 004c6d6e
    JNZ 0x004c70dc                      ; 004c6d70
        ;   XREF to: 004c70dc (CONDITIONAL_JUMP)  ; LAB_004c70dc
    PUSH 0x5f22b0                       ; 004c6d76 | DAT_005f22b0
        ;   Label: LAB_004c6d76
    PUSH 0x4                            ; 004c6d7b
    LEA EAX,[ESP + 0x8]                 ; 004c6d7d
    PUSH EAX                            ; 004c6d81
    CALL FUN_005b7f5f                   ; 004c6d82
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    FLD float ptr [EBX + 0x2b4]         ; 004c6d87
    FMUL double ptr [0x005d941a]        ; 004c6d8d | DAT_005d941a
    LEA ESI,[ESP + 0xa4]                ; 004c6d93
    XOR EDI,EDI                         ; 004c6d9a
    ADD ESP,0xc                         ; 004c6d9c
    LEA EAX,[ESP + 0xbc]                ; 004c6d9f
    MOV dword ptr [ESP + 0xc0],EDI      ; 004c6da6
    PUSH EAX                            ; 004c6dad
    LEA EAX,[EBX + 0x3c]                ; 004c6dae
    MOV dword ptr [ESP + 0xc8],EDI      ; 004c6db1
    PUSH EAX                            ; 004c6db8
    FSTP float ptr [ESP + 0xc4]         ; 004c6db9
    LEA EDI,[ESP + 0x70]                ; 004c6dc0
    CALL FUN_00449530                   ; 004c6dc4
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0xa0]                ; 004c6dc9
    ADD ESP,0x8                         ; 004c6dd0
    LEA EAX,[EBX + 0x20]                ; 004c6dd3
    MOVSD ES:EDI,ESI                    ; 004c6dd6
    MOVSD ES:EDI,ESI                    ; 004c6dd7
    MOVSD ES:EDI,ESI                    ; 004c6dd8
    FLD float ptr [EAX]                 ; 004c6dd9
    FLD float ptr [EAX + 0x4]           ; 004c6ddb
    FLD float ptr [EAX + 0x8]           ; 004c6dde
    LEA EDI,[ESP + 0xf8]                ; 004c6de1
    LEA ESI,[ESP + 0x80]                ; 004c6de8
    FXCH ST2                            ; 004c6def
    FADD float ptr [ESP + 0x68]         ; 004c6df1
    FXCH                                ; 004c6df5
    FADD float ptr [ESP + 0x6c]         ; 004c6df7
    FXCH ST2                            ; 004c6dfb
    FADD float ptr [ESP + 0x70]         ; 004c6dfd
    FXCH                                ; 004c6e01
    FSTP float ptr [ESP + 0x80]         ; 004c6e03
    FXCH                                ; 004c6e0a
    FSTP float ptr [ESP + 0x84]         ; 004c6e0c
    FSTP float ptr [ESP + 0x88]         ; 004c6e13
    MOVSD ES:EDI,ESI                    ; 004c6e1a
    MOVSD ES:EDI,ESI                    ; 004c6e1b
    MOVSD ES:EDI,ESI                    ; 004c6e1c
    LEA EAX,[ESP + 0xf8]                ; 004c6e1d
    MOV ESI,ESP                         ; 004c6e24
    CMP ESI,EAX                         ; 004c6e26
    JZ 0x004c6e4a                       ; 004c6e28
        ;   XREF to: 004c6e4a (CONDITIONAL_JUMP)  ; LAB_004c6e4a
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004c6e2a
    MOV dword ptr [ESP],EAX             ; 004c6e31
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004c6e34
    MOV dword ptr [ESP + 0x4],EAX       ; 004c6e3b
    MOV EAX,dword ptr [ESP + 0x100]     ; 004c6e3f
    MOV dword ptr [ESP + 0x8],EAX       ; 004c6e46
    FLD float ptr [ESP + 0xc0]          ; 004c6e4a
        ;   Label: LAB_004c6e4a
    LEA EAX,[ESP + 0xbc]                ; 004c6e51
    LEA ESI,[ESP + 0xa4]                ; 004c6e58
    LEA EDI,[ESP + 0xd4]                ; 004c6e5f
    PUSH EAX                            ; 004c6e66
    LEA EAX,[EBX + 0x3c]                ; 004c6e67
    FADD float ptr [EBX + 0x2b8]        ; 004c6e6a
    PUSH EAX                            ; 004c6e70
    FSTP float ptr [ESP + 0xc8]         ; 004c6e71
    CALL FUN_00449530                   ; 004c6e78
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0xac]                ; 004c6e7d
    ADD ESP,0x8                         ; 004c6e84
    LEA EAX,[EBX + 0x20]                ; 004c6e87
    MOVSD ES:EDI,ESI                    ; 004c6e8a
    MOVSD ES:EDI,ESI                    ; 004c6e8b
    MOVSD ES:EDI,ESI                    ; 004c6e8c
    FLD float ptr [EAX]                 ; 004c6e8d
    FLD float ptr [EAX + 0x4]           ; 004c6e8f
    FLD float ptr [EAX + 0x8]           ; 004c6e92
    LEA EDI,[ESP + 0x5c]                ; 004c6e95
    LEA ESI,[ESP + 0xc8]                ; 004c6e99
    FXCH ST2                            ; 004c6ea0
    FADD float ptr [ESP + 0xd4]         ; 004c6ea2
    FXCH                                ; 004c6ea9
    FADD float ptr [ESP + 0xd8]         ; 004c6eab
    FXCH ST2                            ; 004c6eb2
    FADD float ptr [ESP + 0xdc]         ; 004c6eb4
    FXCH                                ; 004c6ebb
    FSTP float ptr [ESP + 0xc8]         ; 004c6ebd
    FXCH                                ; 004c6ec4
    FSTP float ptr [ESP + 0xcc]         ; 004c6ec6
    FSTP float ptr [ESP + 0xd0]         ; 004c6ecd
    MOVSD ES:EDI,ESI                    ; 004c6ed4
    MOVSD ES:EDI,ESI                    ; 004c6ed5
    MOVSD ES:EDI,ESI                    ; 004c6ed6
    LEA EAX,[ESP + 0xc]                 ; 004c6ed7
    LEA ESI,[ESP + 0x5c]                ; 004c6edb
    CMP EAX,ESI                         ; 004c6edf
    JZ 0x004c6efb                       ; 004c6ee1
        ;   XREF to: 004c6efb (CONDITIONAL_JUMP)  ; LAB_004c6efb
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004c6ee3
    MOV dword ptr [ESP + 0xc],EAX       ; 004c6ee7
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c6eeb
    MOV dword ptr [ESP + 0x10],EAX      ; 004c6eef
    MOV EAX,dword ptr [ESP + 0x64]      ; 004c6ef3
    MOV dword ptr [ESP + 0x14],EAX      ; 004c6ef7
    XOR byte ptr [ESP + 0xbf],0x80      ; 004c6efb
        ;   Label: LAB_004c6efb
    LEA EAX,[ESP + 0xbc]                ; 004c6f03
    PUSH EAX                            ; 004c6f0a
    LEA EAX,[EBX + 0x3c]                ; 004c6f0b
    PUSH EAX                            ; 004c6f0e
    LEA ESI,[ESP + 0xf4]                ; 004c6f0f
    LEA EDI,[ESP + 0x58]                ; 004c6f16
    CALL FUN_00449530                   ; 004c6f1a
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0xf4]                ; 004c6f1f
    ADD ESP,0x8                         ; 004c6f26
    LEA EAX,[EBX + 0x20]                ; 004c6f29
    MOVSD ES:EDI,ESI                    ; 004c6f2c
    MOVSD ES:EDI,ESI                    ; 004c6f2d
    MOVSD ES:EDI,ESI                    ; 004c6f2e
    FLD float ptr [EAX]                 ; 004c6f2f
    FLD float ptr [EAX + 0x4]           ; 004c6f31
    FLD float ptr [EAX + 0x8]           ; 004c6f34
    LEA EDI,[ESP + 0x8c]                ; 004c6f37
    LEA ESI,[ESP + 0x74]                ; 004c6f3e
    FXCH ST2                            ; 004c6f42
    FADD float ptr [ESP + 0x50]         ; 004c6f44
    FXCH                                ; 004c6f48
    FADD float ptr [ESP + 0x54]         ; 004c6f4a
    FXCH ST2                            ; 004c6f4e
    FADD float ptr [ESP + 0x58]         ; 004c6f50
    FXCH                                ; 004c6f54
    FSTP float ptr [ESP + 0x74]         ; 004c6f56
    FXCH                                ; 004c6f5a
    FSTP float ptr [ESP + 0x78]         ; 004c6f5c
    FSTP float ptr [ESP + 0x7c]         ; 004c6f60
    MOVSD ES:EDI,ESI                    ; 004c6f64
    MOVSD ES:EDI,ESI                    ; 004c6f65
    MOVSD ES:EDI,ESI                    ; 004c6f66
    LEA EAX,[ESP + 0x8c]                ; 004c6f67
    LEA ESI,[ESP + 0x18]                ; 004c6f6e
    CMP ESI,EAX                         ; 004c6f72
    JZ 0x004c6f97                       ; 004c6f74
        ;   XREF to: 004c6f97 (CONDITIONAL_JUMP)  ; LAB_004c6f97
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004c6f76
    MOV dword ptr [ESP + 0x18],EAX      ; 004c6f7d
    MOV EAX,dword ptr [ESP + 0x90]      ; 004c6f81
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c6f88
    MOV EAX,dword ptr [ESP + 0x94]      ; 004c6f8c
    MOV dword ptr [ESP + 0x20],EAX      ; 004c6f93
    XOR EAX,EAX                         ; 004c6f97
        ;   Label: LAB_004c6f97
    MOV dword ptr [ESP + 0xc0],EAX      ; 004c6f99
    LEA EAX,[ESP + 0xbc]                ; 004c6fa0
    PUSH EAX                            ; 004c6fa7
    LEA EAX,[EBX + 0x3c]                ; 004c6fa8
    PUSH EAX                            ; 004c6fab
    LEA ESI,[ESP + 0x118]               ; 004c6fac
    LEA EDI,[ESP + 0xe8]                ; 004c6fb3
    CALL FUN_00449530                   ; 004c6fba
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0x118]               ; 004c6fbf
    ADD ESP,0x8                         ; 004c6fc6
    LEA EAX,[EBX + 0x20]                ; 004c6fc9
    MOVSD ES:EDI,ESI                    ; 004c6fcc
    MOVSD ES:EDI,ESI                    ; 004c6fcd
    MOVSD ES:EDI,ESI                    ; 004c6fce
    FLD float ptr [EAX]                 ; 004c6fcf
    FLD float ptr [EAX + 0x4]           ; 004c6fd1
    FLD float ptr [EAX + 0x8]           ; 004c6fd4
    LEA EDI,[ESP + 0x104]               ; 004c6fd7
    LEA ESI,[ESP + 0xb0]                ; 004c6fde
    FXCH ST2                            ; 004c6fe5
    FADD float ptr [ESP + 0xe0]         ; 004c6fe7
    FXCH                                ; 004c6fee
    FADD float ptr [ESP + 0xe4]         ; 004c6ff0
    FXCH ST2                            ; 004c6ff7
    FADD float ptr [ESP + 0xe8]         ; 004c6ff9
    FXCH                                ; 004c7000
    FSTP float ptr [ESP + 0xb0]         ; 004c7002
    FXCH                                ; 004c7009
    FSTP float ptr [ESP + 0xb4]         ; 004c700b
    FSTP float ptr [ESP + 0xb8]         ; 004c7012
    MOVSD ES:EDI,ESI                    ; 004c7019
    MOVSD ES:EDI,ESI                    ; 004c701a
    MOVSD ES:EDI,ESI                    ; 004c701b
    LEA EAX,[ESP + 0x104]               ; 004c701c
    LEA ESI,[ESP + 0x24]                ; 004c7023
    CMP ESI,EAX                         ; 004c7027
    JZ 0x004c704c                       ; 004c7029
        ;   XREF to: 004c704c (CONDITIONAL_JUMP)  ; LAB_004c704c
    MOV EAX,dword ptr [ESP + 0x104]     ; 004c702b
    MOV dword ptr [ESP + 0x24],EAX      ; 004c7032
    MOV EAX,dword ptr [ESP + 0x108]     ; 004c7036
    MOV dword ptr [ESP + 0x28],EAX      ; 004c703d
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004c7041
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c7048
    LEA EAX,[EBX + 0x2c0]               ; 004c704c
        ;   Label: LAB_004c704c
    PUSH EAX                            ; 004c7052
    MOV EDX,dword ptr [0x0060b280]      ; 004c7053 | DAT_0060b280
    PUSH EDX                            ; 004c7059 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 004c705a
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    MOV ECX,dword ptr [0x006141c8]      ; 004c705f | DAT_006141c8
    ADD ESP,0x8                         ; 004c7065
    CMP ECX,0x40                        ; 004c7068
    JNZ 0x004c711f                      ; 004c706b
        ;   XREF to: 004c711f (CONDITIONAL_JUMP)  ; LAB_004c711f
    MOV EAX,0xf80000                    ; 004c7071
    MOV EBP,0x80000                     ; 004c7076
    MOV dword ptr [ESP + 0x30],EAX      ; 004c707b
    MOV dword ptr [ESP + 0x44],EBP      ; 004c707f
    MOV dword ptr [ESP + 0x34],EBP      ; 004c7083
    MOV dword ptr [ESP + 0x48],EAX      ; 004c7087
    MOV dword ptr [ESP + 0x38],EBP      ; 004c708b
    MOV dword ptr [ESP + 0x4c],EAX      ; 004c708f
    MOV dword ptr [ESP + 0x3c],EAX      ; 004c7093
    MOV dword ptr [ESP + 0x40],EBP      ; 004c7097
    PUSH 0x0                            ; 004c709b
        ;   Label: LAB_004c709b
    LEA EAX,[ESP + 0x34]                ; 004c709d
    PUSH EAX                            ; 004c70a1
    LEA EAX,[ESP + 0x48]                ; 004c70a2
    PUSH EAX                            ; 004c70a6
    LEA EAX,[ESP + 0xc]                 ; 004c70a7
    PUSH EAX                            ; 004c70ab
    PUSH EBX                            ; 004c70ac
    CALL FUN_004c5bb0                   ; 004c70ad
        ;   XREF to: 004c5bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c5bb0()
    ADD ESP,0x14                        ; 004c70b2
    PUSH 0x5d9405                       ; 004c70b5 | = "glass-1.wav@2.0"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c70ba
    PUSH EBX                            ; 004c70c0
    CALL dword ptr [EAX + 0x34]         ; 004c70c1
    MOV EDX,dword ptr [EBX + 0x4cc]     ; 004c70c4
    ADD ESP,0x8                         ; 004c70ca
    TEST EDX,EDX                        ; 004c70cd
    JNZ 0x004c714e                      ; 004c70cf
        ;   XREF to: 004c714e (CONDITIONAL_JUMP)  ; LAB_004c714e
    ADD ESP,0x11c                       ; 004c70d1
        ;   Label: LAB_004c70d1
    POP EBP                             ; 004c70d7
    POP EDI                             ; 004c70d8
    POP ESI                             ; 004c70d9
    POP EBX                             ; 004c70da
    RET                                 ; 004c70db
    MOV ESI,0x5d93fa                    ; 004c70dc | s_s_7YEARS_RAW_005d93f9+1
        ;   Label: LAB_004c70dc
    LEA EDI,[EBX + 0x2c8]               ; 004c70e1
    MOV dword ptr [EBX + 0x2d8],0xffff  ; 004c70e7
    PUSH EDI                            ; 004c70f1
    MOV AL,byte ptr [ESI]               ; 004c70f2 | s_s_7YEARS_RAW_005d93f9+1 | s_s_7YEARS_RAW_005d93f9+3
        ;   Label: LAB_004c70f2
    MOV byte ptr [EDI],AL               ; 004c70f4
    CMP AL,0x0                          ; 004c70f6
    JZ 0x004c710a                       ; 004c70f8
        ;   XREF to: 004c710a (CONDITIONAL_JUMP)  ; LAB_004c710a
    MOV AL,byte ptr [ESI + 0x1]         ; 004c70fa | s_s_7YEARS_RAW_005d93f9+2 | s_s_7YEARS_RAW_005d93f9+4
    ADD ESI,0x2                         ; 004c70fd
    MOV byte ptr [EDI + 0x1],AL         ; 004c7100
    ADD EDI,0x2                         ; 004c7103
    CMP AL,0x0                          ; 004c7106
    JNZ 0x004c70f2                      ; 004c7108
        ;   XREF to: 004c70f2 (CONDITIONAL_JUMP)  ; LAB_004c70f2
    POP EDI                             ; 004c710a
        ;   Label: LAB_004c710a
    MOV ESI,dword ptr [0x0061b5a8]      ; 004c710b | DAT_0061b5a8
    PUSH ESI                            ; 004c7111
    CALL FUN_00534480                   ; 004c7112
        ;   XREF to: 00534480 (UNCONDITIONAL_CALL)  ; undefined FUN_00534480()
    ADD ESP,0x4                         ; 004c7117
    JMP 0x004c6d76                      ; 004c711a
        ;   XREF to: 004c6d76 (UNCONDITIONAL_JUMP)  ; LAB_004c6d76
    MOV EDI,0xfe0000                    ; 004c711f
        ;   Label: LAB_004c711f
    MOV ESI,0x20000                     ; 004c7124
    MOV dword ptr [ESP + 0x30],EDI      ; 004c7129
    MOV dword ptr [ESP + 0x44],ESI      ; 004c712d
    MOV dword ptr [ESP + 0x34],ESI      ; 004c7131
    MOV dword ptr [ESP + 0x48],EDI      ; 004c7135
    MOV dword ptr [ESP + 0x38],ESI      ; 004c7139
    MOV dword ptr [ESP + 0x4c],EDI      ; 004c713d
    MOV dword ptr [ESP + 0x3c],EDI      ; 004c7141
    MOV dword ptr [ESP + 0x40],ESI      ; 004c7145
    JMP 0x004c709b                      ; 004c7149
        ;   XREF to: 004c709b (UNCONDITIONAL_JUMP)  ; LAB_004c709b
    PUSH EBX                            ; 004c714e
        ;   Label: LAB_004c714e
    MOV ECX,dword ptr [0x0061b5a8]      ; 004c714f | DAT_0061b5a8
    PUSH ECX                            ; 004c7155
    CALL FUN_0052dd80                   ; 004c7156
        ;   XREF to: 0052dd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0052dd80()
    ADD ESP,0x8                         ; 004c715b
    MOV dword ptr [EBX + 0xc98],0x1     ; 004c715e
    ADD ESP,0x11c                       ; 004c7168
    POP EBP                             ; 004c716e
    POP EDI                             ; 004c716f
    POP ESI                             ; 004c7170
    POP EBX                             ; 004c7171
    RET                                 ; 004c7172

