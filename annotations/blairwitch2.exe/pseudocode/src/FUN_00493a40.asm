; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00493a40(float *param_1,float *param_2,float *param_3,float param_4)
;
; Local Variables:
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0x118]:1  local_118
; undefined        Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0049cd50 at 0049cf29
;
; Referenced Globals:
;   undefined4 DAT_005d5386
;
; Called Functions:
;   FUN_00408d30
;   FUN_0040cfc0
;   FUN_005916b0
;   FUN_00591ad0
;   FUN_00591c10
;   FUN_00591de0
;   FUN_00592720
;   FUN_005b9989
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493a40
        ;   Label: FUN_00493a40
    PUSH ESI                            ; 00493a41
    PUSH EDI                            ; 00493a42
    PUSH EBP                            ; 00493a43
    SUB ESP,0x138                       ; 00493a44
    MOV EBX,dword ptr [ESP + 0x14c]     ; 00493a4a
    MOV EAX,dword ptr [ESP + 0x150]     ; 00493a51
    MOV EBP,dword ptr [ESP + 0x154]     ; 00493a58
    CMP EBX,EAX                         ; 00493a5f
    JNZ 0x00493b78                      ; 00493a61
        ;   XREF to: 00493b78 (CONDITIONAL_JUMP)  ; LAB_00493b78
    FLD float ptr [0x005d5386]          ; 00493a67 | DAT_005d5386
        ;   Label: LAB_00493a67
    FLD float ptr [EBP]                 ; 00493a6d
    FMUL ST1                            ; 00493a70
    FLD float ptr [EBP + 0x4]           ; 00493a72
    FMUL ST2                            ; 00493a75
    FLD float ptr [EBP + 0x8]           ; 00493a77
    FMULP ST3                           ; 00493a7a
    LEA EDI,[ESP + 0x114]               ; 00493a7c
    LEA ESI,[ESP + 0x108]               ; 00493a83
    FXCH                                ; 00493a8a
    FSTP float ptr [ESP + 0x108]        ; 00493a8c
    FSTP float ptr [ESP + 0x10c]        ; 00493a93
    FSTP float ptr [ESP + 0x110]        ; 00493a9a
    MOVSD ES:EDI,ESI                    ; 00493aa1
    MOVSD ES:EDI,ESI                    ; 00493aa2
    MOVSD ES:EDI,ESI                    ; 00493aa3
    LEA EAX,[ESP + 0xe4]                ; 00493aa4
    FLD float ptr [EBX]                 ; 00493aab
    FLD float ptr [EBX + 0x4]           ; 00493aad
    FLD float ptr [EBX + 0x8]           ; 00493ab0
    LEA EDI,[ESP + 0xe4]                ; 00493ab3
    LEA ESI,[ESP + 0xfc]                ; 00493aba
    FXCH ST2                            ; 00493ac1
    FADD float ptr [ESP + 0x114]        ; 00493ac3
    FXCH                                ; 00493aca
    FADD float ptr [ESP + 0x118]        ; 00493acc
    FXCH ST2                            ; 00493ad3
    FADD float ptr [ESP + 0x11c]        ; 00493ad5
    FXCH                                ; 00493adc
    FSTP float ptr [ESP + 0xfc]         ; 00493ade
    FXCH                                ; 00493ae5
    FSTP float ptr [ESP + 0x100]        ; 00493ae7
    FSTP float ptr [ESP + 0x104]        ; 00493aee
    MOVSD ES:EDI,ESI                    ; 00493af5
    MOVSD ES:EDI,ESI                    ; 00493af6
    MOVSD ES:EDI,ESI                    ; 00493af7
    CMP EBX,EAX                         ; 00493af8
    JZ 0x00493b19                       ; 00493afa
        ;   XREF to: 00493b19 (CONDITIONAL_JUMP)  ; LAB_00493b19
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00493afc
    MOV dword ptr [EBX],EAX             ; 00493b03
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00493b05
    MOV dword ptr [EBX + 0x4],EAX       ; 00493b0c
    MOV EAX,dword ptr [ESP + 0xec]      ; 00493b0f
    MOV dword ptr [EBX + 0x8],EAX       ; 00493b16
    FLD float ptr [EBP + 0x8]           ; 00493b19
        ;   Label: LAB_00493b19
    FMUL ST0                            ; 00493b1c
    FLD float ptr [EBP]                 ; 00493b1e
    FMUL ST0                            ; 00493b21
    FADDP                               ; 00493b23
    FSQRT                               ; 00493b25
    FLD float ptr [EBP + 0x4]           ; 00493b27
    CALL FUN_005b9989                   ; 00493b2a
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9989()
    MOV dword ptr [EBX + 0x1c],0x0      ; 00493b2f
    FCHS                                ; 00493b36
    FSTP float ptr [EBX + 0x14]         ; 00493b38
    FLD float ptr [EBP + 0x8]           ; 00493b3b
    FLD float ptr [EBP]                 ; 00493b3e
    CALL FUN_005b9989                   ; 00493b41
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9989()
    PUSH 0x3                            ; 00493b46
    PUSH 0x0                            ; 00493b48
    FSTP float ptr [EBX + 0x18]         ; 00493b4a
    CALL FUN_0040cfc0                   ; 00493b4d
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    MOV dword ptr [EBX + 0xc],0x1       ; 00493b52
    ADD ESP,0x8                         ; 00493b59
    MOV dword ptr [EBX + 0x20],EAX      ; 00493b5c
    MOV EAX,dword ptr [ESP + 0x158]     ; 00493b5f
    MOV dword ptr [EBX + 0x10],EAX      ; 00493b66
    TEST EAX,EAX                        ; 00493b69
    JNZ 0x00493b8d                      ; 00493b6b
        ;   XREF to: 00493b8d (CONDITIONAL_JUMP)  ; LAB_00493b8d
    ADD ESP,0x138                       ; 00493b6d
        ;   Label: LAB_00493b6d
    POP EBP                             ; 00493b73
    POP EDI                             ; 00493b74
    POP ESI                             ; 00493b75
    POP EBX                             ; 00493b76
    RET                                 ; 00493b77
    MOV EDX,dword ptr [EAX]             ; 00493b78
        ;   Label: LAB_00493b78
    MOV dword ptr [EBX],EDX             ; 00493b7a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00493b7c
    MOV dword ptr [EBX + 0x4],EDX       ; 00493b7f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00493b82
    MOV dword ptr [EBX + 0x8],EDX       ; 00493b85
    JMP 0x00493a67                      ; 00493b88
        ;   XREF to: 00493a67 (UNCONDITIONAL_JUMP)  ; LAB_00493a67
    LEA EAX,[EBX + 0x14]                ; 00493b8d
        ;   Label: LAB_00493b8d
    PUSH EAX                            ; 00493b90
    PUSH EBX                            ; 00493b91
    LEA EAX,[ESP + 0x38]                ; 00493b92
    PUSH EAX                            ; 00493b96
    CALL FUN_00591c10                   ; 00493b97
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    MOV EAX,dword ptr [EBX + 0x10]      ; 00493b9c
    ADD ESP,0xc                         ; 00493b9f
    LEA EDX,[EAX + 0x30]                ; 00493ba2
    PUSH EDX                            ; 00493ba5
    ADD EAX,0x20                        ; 00493ba6
    PUSH EAX                            ; 00493ba9
    LEA EAX,[ESP + 0x68]                ; 00493baa
    PUSH EAX                            ; 00493bae
    CALL FUN_00591ad0                   ; 00493baf
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00591ad0()
    ADD ESP,0xc                         ; 00493bb4
    LEA EAX,[ESP + 0x60]                ; 00493bb7
    PUSH EAX                            ; 00493bbb
    LEA EAX,[ESP + 0x34]                ; 00493bbc
    PUSH EAX                            ; 00493bc0
    LEA ESI,[ESP + 0x8]                 ; 00493bc1
    LEA EDI,[ESP + 0x98]                ; 00493bc5
    CALL FUN_005916b0                   ; 00493bcc
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 00493bd1
    LEA ESI,[ESP + 0x8]                 ; 00493bd6
    ADD ESP,0x8                         ; 00493bda
    LEA EAX,[ESP + 0x90]                ; 00493bdd
    MOVSD.REP ES:EDI,ESI                ; 00493be4
    PUSH EAX                            ; 00493be6
    LEA ESI,[ESP + 0xdc]                ; 00493be7
    LEA EDI,[ESP + 0xf4]                ; 00493bee
    CALL FUN_00592720                   ; 00493bf5
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined FUN_00592720()
    LEA ESI,[ESP + 0xdc]                ; 00493bfa
    LEA EAX,[ESP + 0xf4]                ; 00493c01
    ADD ESP,0x4                         ; 00493c08
    LEA EDX,[EBX + 0x24]                ; 00493c0b
    MOVSD ES:EDI,ESI                    ; 00493c0e
    MOVSD ES:EDI,ESI                    ; 00493c0f
    MOVSD ES:EDI,ESI                    ; 00493c10
    CMP EDX,EAX                         ; 00493c11
    JZ 0x00493c32                       ; 00493c13
        ;   XREF to: 00493c32 (CONDITIONAL_JUMP)  ; LAB_00493c32
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00493c15
    MOV dword ptr [EDX],EAX             ; 00493c1c
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00493c1e
    MOV dword ptr [EDX + 0x4],EAX       ; 00493c25
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00493c28
    MOV dword ptr [EDX + 0x8],EAX       ; 00493c2f
    LEA EAX,[ESP + 0x90]                ; 00493c32
        ;   Label: LAB_00493c32
    PUSH EAX                            ; 00493c39
    LEA ESI,[ESP + 0x124]               ; 00493c3a
    LEA EDI,[ESP + 0xd0]                ; 00493c41
    CALL FUN_00591de0                   ; 00493c48
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00591de0()
    LEA ESI,[ESP + 0x124]               ; 00493c4d
    LEA EAX,[ESP + 0xd0]                ; 00493c54
    ADD ESP,0x4                         ; 00493c5b
    LEA EDX,[EBX + 0x14]                ; 00493c5e
    MOVSD ES:EDI,ESI                    ; 00493c61
    MOVSD ES:EDI,ESI                    ; 00493c62
    MOVSD ES:EDI,ESI                    ; 00493c63
    CMP EDX,EAX                         ; 00493c64
    JZ 0x00493c85                       ; 00493c66
        ;   XREF to: 00493c85 (CONDITIONAL_JUMP)  ; LAB_00493c85
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00493c68
    MOV dword ptr [EDX],EAX             ; 00493c6f
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00493c71
    MOV dword ptr [EDX + 0x4],EAX       ; 00493c78
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00493c7b
    MOV dword ptr [EDX + 0x8],EAX       ; 00493c82
    PUSH EBP                            ; 00493c85
        ;   Label: LAB_00493c85
    MOV ECX,dword ptr [EBX + 0x10]      ; 00493c86
    LEA ESI,[ESP + 0xc4]                ; 00493c89
    PUSH ECX                            ; 00493c90
    LEA EDI,[ESP + 0x134]               ; 00493c91
    ADD EBX,0x30                        ; 00493c98
    CALL FUN_00408d30                   ; 00493c9b
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d30()
    LEA ESI,[ESP + 0xc8]                ; 00493ca0
    ADD ESP,0x8                         ; 00493ca7
    LEA EAX,[ESP + 0x12c]               ; 00493caa
    MOVSD ES:EDI,ESI                    ; 00493cb1
    MOVSD ES:EDI,ESI                    ; 00493cb2
    MOVSD ES:EDI,ESI                    ; 00493cb3
    CMP EBX,EAX                         ; 00493cb4
    JZ 0x00493b6d                       ; 00493cb6
        ;   XREF to: 00493b6d (CONDITIONAL_JUMP)  ; LAB_00493b6d
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00493cbc
    MOV dword ptr [EBX],EAX             ; 00493cc3
    MOV EAX,dword ptr [ESP + 0x130]     ; 00493cc5
    MOV dword ptr [EBX + 0x4],EAX       ; 00493ccc
    MOV EAX,dword ptr [ESP + 0x134]     ; 00493ccf
    MOV dword ptr [EBX + 0x8],EAX       ; 00493cd6
    ADD ESP,0x138                       ; 00493cd9
    POP EBP                             ; 00493cdf
    POP EDI                             ; 00493ce0
    POP ESI                             ; 00493ce1
    POP EBX                             ; 00493ce2
    RET                                 ; 00493ce3

