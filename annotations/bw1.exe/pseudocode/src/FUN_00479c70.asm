; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00479c70(int param_1,undefined4 param_2,float *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005dabfd
;
; Called Functions:
;   FUN_004799e0
;   FUN_005c03a0
;   FUN_005c0b10
;   FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479c70
        ;   Label: FUN_00479c70
    PUSH ESI                            ; 00479c71
    PUSH EDI                            ; 00479c72
    PUSH EBP                            ; 00479c73
    SUB ESP,0xc                         ; 00479c74
    MOV EBX,dword ptr [ESP + 0x20]      ; 00479c77
    MOV EBP,dword ptr [ESP + 0x24]      ; 00479c7b
    PUSH EBP                            ; 00479c7f
    PUSH 0x1                            ; 00479c80
    PUSH 0x20                           ; 00479c82
    PUSH EBX                            ; 00479c84
    CALL FUN_005c0b10                   ; 00479c85
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00479c8a
    PUSH EBP                            ; 00479c8d
    PUSH 0x1                            ; 00479c8e
    PUSH 0x4                            ; 00479c90
    LEA EAX,[EBX + 0x20]                ; 00479c92
    PUSH EAX                            ; 00479c95
    CALL FUN_005c0b10                   ; 00479c96
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00479c9b
    PUSH EBP                            ; 00479c9e
    PUSH 0x1                            ; 00479c9f
    PUSH 0x4                            ; 00479ca1
    LEA EAX,[EBX + 0x24]                ; 00479ca3
    PUSH EAX                            ; 00479ca6
    CALL FUN_005c0b10                   ; 00479ca7
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00479cac
    PUSH EBX                            ; 00479caf
    CALL FUN_004799e0                   ; 00479cb0
        ;   XREF to: 004799e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004799e0()
    ADD ESP,0x4                         ; 00479cb5
    PUSH EBP                            ; 00479cb8
    PUSH 0x1                            ; 00479cb9
    PUSH 0xc                            ; 00479cbb
    LEA EAX,[EBX + 0x33c]               ; 00479cbd
    PUSH EAX                            ; 00479cc3
    CALL FUN_005c0b10                   ; 00479cc4
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00479cc9
    PUSH EBP                            ; 00479ccc
    PUSH 0x1                            ; 00479ccd
    PUSH 0xc                            ; 00479ccf
    LEA EAX,[EBX + 0x348]               ; 00479cd1
    PUSH EAX                            ; 00479cd7
    CALL FUN_005c0b10                   ; 00479cd8
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00479cdd
    PUSH EBP                            ; 00479ce0
    PUSH 0x1                            ; 00479ce1
    PUSH 0xc                            ; 00479ce3
    LEA EAX,[EBX + 0x354]               ; 00479ce5
    PUSH EAX                            ; 00479ceb
    CALL FUN_005c0b10                   ; 00479cec
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00479cf1
    PUSH EBP                            ; 00479cf4
    PUSH 0x1                            ; 00479cf5
    PUSH 0xc                            ; 00479cf7
    LEA EAX,[EBX + 0x360]               ; 00479cf9
    PUSH EAX                            ; 00479cff
    CALL FUN_005c0b10                   ; 00479d00
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00479d05
    PUSH EBP                            ; 00479d08
    PUSH 0x1                            ; 00479d09
    PUSH 0x4                            ; 00479d0b
    LEA EAX,[EBX + 0x38]                ; 00479d0d
    PUSH EAX                            ; 00479d10
    XOR ESI,ESI                         ; 00479d11
    CALL FUN_005c0b10                   ; 00479d13
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    MOV EDX,dword ptr [EBX + 0x38]      ; 00479d18
    ADD ESP,0x10                        ; 00479d1b
    TEST EDX,EDX                        ; 00479d1e
    JLE 0x00479d40                      ; 00479d20
        ;   XREF to: 00479d40 (CONDITIONAL_JUMP)  ; LAB_00479d40
    LEA EDI,[EBX + 0x44]                ; 00479d22
    PUSH EBP                            ; 00479d25
        ;   Label: LAB_00479d25
    PUSH 0x1                            ; 00479d26
    PUSH 0x10                           ; 00479d28
    PUSH EDI                            ; 00479d2a
    INC ESI                             ; 00479d2b
    CALL FUN_005c0b10                   ; 00479d2c
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00479d31
    MOV ECX,dword ptr [EBX + 0x38]      ; 00479d34
    ADD EDI,0x18                        ; 00479d37
    CMP ESI,ECX                         ; 00479d3a
    JL 0x00479d25                       ; 00479d3c
        ;   XREF to: 00479d25 (CONDITIONAL_JUMP)  ; LAB_00479d25
    MOV EAX,EAX                         ; 00479d3e
    PUSH EBP                            ; 00479d40
        ;   Label: LAB_00479d40
    PUSH 0x1                            ; 00479d41
    PUSH 0x4                            ; 00479d43
    LEA EAX,[EBX + 0x28]                ; 00479d45
    PUSH EAX                            ; 00479d48
    CALL FUN_005c0b10                   ; 00479d49
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00479d4e
    PUSH EBP                            ; 00479d51
    MOV ESI,dword ptr [EBX + 0x20]      ; 00479d52
    PUSH ESI                            ; 00479d55
    PUSH 0xc                            ; 00479d56
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00479d58
    PUSH EDI                            ; 00479d5b
    CALL FUN_005c0b10                   ; 00479d5c
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00479d61
    PUSH EBP                            ; 00479d64
    MOV EAX,dword ptr [EBX + 0x20]      ; 00479d65
    PUSH EAX                            ; 00479d68
    PUSH 0xc                            ; 00479d69
    MOV EDX,dword ptr [EBX + 0x30]      ; 00479d6b
    PUSH EDX                            ; 00479d6e
    CALL FUN_005c0b10                   ; 00479d6f
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00479d74
    PUSH 0x5dabf0                       ; 00479d77
    PUSH EBX                            ; 00479d7c
    CALL FUN_005c0f80                   ; 00479d7d
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 00479d82
    TEST EAX,EAX                        ; 00479d85
    JZ 0x00479f43                       ; 00479d87
        ;   XREF to: 00479f43 (CONDITIONAL_JUMP)  ; LAB_00479f43
    PUSH EBP                            ; 00479d8d
    MOV EDI,dword ptr [EBX + 0x24]      ; 00479d8e
    PUSH EDI                            ; 00479d91
    PUSH 0x48                           ; 00479d92
    PUSH 0x1b68944                      ; 00479d94
    XOR EDI,EDI                         ; 00479d99
    CALL FUN_005c0b10                   ; 00479d9b
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    MOV EBP,dword ptr [EBX + 0x24]      ; 00479da0
    ADD ESP,0x10                        ; 00479da3
    TEST EBP,EBP                        ; 00479da6
    JLE 0x00479e3a                      ; 00479da8
        ;   XREF to: 00479e3a (CONDITIONAL_JUMP)  ; LAB_00479e3a
    XOR EDX,EDX                         ; 00479dae
    XOR EAX,EAX                         ; 00479db0
    MOV ESI,dword ptr [EBX + 0x34]      ; 00479db2
        ;   Label: LAB_00479db2
    LEA ECX,[ESI + EAX*0x1]             ; 00479db5
    MOV ESI,dword ptr [EDX + 0x1b6894c] ; 00479db8
    MOV dword ptr [ECX],ESI             ; 00479dbe
    MOV ESI,dword ptr [EBX + 0x34]      ; 00479dc0
    LEA ECX,[ESI + EAX*0x1]             ; 00479dc3
    MOV ESI,dword ptr [EDX + 0x1b68950] ; 00479dc6
    MOV dword ptr [ECX + 0x4],ESI       ; 00479dcc
    MOV ECX,dword ptr [EBX + 0x34]      ; 00479dcf
    MOV ESI,dword ptr [EDX + 0x1b68954] ; 00479dd2
    MOV dword ptr [ECX + EAX*0x1 + 0x8],ESI ; 00479dd8
    MOV ECX,dword ptr [EBX + 0x34]      ; 00479ddc
    MOV ESI,dword ptr [EDX + 0x1b68958] ; 00479ddf
    MOV dword ptr [ECX + EAX*0x1 + 0xc],ESI ; 00479de5
    MOV ECX,dword ptr [EBX + 0x34]      ; 00479de9
    MOV ESI,dword ptr [EDX + 0x1b6895c] ; 00479dec
    MOV dword ptr [ECX + EAX*0x1 + 0x10],ESI ; 00479df2
    MOV ECX,dword ptr [EBX + 0x34]      ; 00479df6
    MOV ESI,dword ptr [EDX + 0x1b68968] ; 00479df9
    MOV dword ptr [ECX + EAX*0x1 + 0x14],ESI ; 00479dff
    MOV ECX,dword ptr [EBX + 0x34]      ; 00479e03
    MOV ESI,dword ptr [EDX + 0x1b68974] ; 00479e06
    MOV dword ptr [ECX + EAX*0x1 + 0x18],ESI ; 00479e0c
    CMP dword ptr [EDX + 0x1b68948],0x3 ; 00479e10
    JNZ 0x00479f2f                      ; 00479e17
        ;   XREF to: 00479f2f (CONDITIONAL_JUMP)  ; LAB_00479f2f
    MOV ESI,dword ptr [EBX + 0x34]      ; 00479e1d
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0xffffffff ; 00479e20
    ADD EAX,0x20                        ; 00479e28
        ;   Label: LAB_00479e28
    INC EDI                             ; 00479e2b
    MOV ECX,dword ptr [EBX + 0x24]      ; 00479e2c
    ADD EDX,0x48                        ; 00479e2f
    CMP EDI,ECX                         ; 00479e32
    JL 0x00479db2                       ; 00479e34
        ;   XREF to: 00479db2 (CONDITIONAL_JUMP)  ; LAB_00479db2
    MOV EDI,dword ptr [ESP + 0x28]      ; 00479e3a
        ;   Label: LAB_00479e3a
    TEST EDI,EDI                        ; 00479e3e
    JZ 0x00479ec0                       ; 00479e40
        ;   XREF to: 00479ec0 (CONDITIONAL_JUMP)
    FLD double ptr [0x005dabfd]         ; 00479e46 | DAT_005dabfd
    FLD float ptr [EDI]                 ; 00479e4c
    FMUL ST1                            ; 00479e4e
    FLD float ptr [EDI + 0x4]           ; 00479e50
    FMUL ST2                            ; 00479e53
    FLD float ptr [EDI + 0x8]           ; 00479e55
    FMULP ST3                           ; 00479e58
    MOV EBP,dword ptr [EBX + 0x20]      ; 00479e5a
    XOR ESI,ESI                         ; 00479e5d
    FXCH                                ; 00479e5f
    CALL FUN_005c03a0                   ; 00479e61
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 00479e66
    CALL FUN_005c03a0                   ; 00479e68
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 00479e6d
    CALL FUN_005c03a0                   ; 00479e6f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 00479e74
    FISTP dword ptr [ESP + 0x4]         ; 00479e76
    FXCH                                ; 00479e7a
    FISTP dword ptr [ESP + 0x8]         ; 00479e7c
    FISTP dword ptr [ESP]               ; 00479e80
    TEST EBP,EBP                        ; 00479e83
    JLE 0x00479ec0                      ; 00479e85
        ;   XREF to: 00479ec0 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00479e87
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00479e89
        ;   Label: LAB_00479e89
    MOV EAX,dword ptr [ESP]             ; 00479e8c
    SUB dword ptr [EDX + EDI*0x1],EAX   ; 00479e8f
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00479e92
    MOV EAX,dword ptr [ESP + 0x4]       ; 00479e95
    SUB dword ptr [EDX + EDI*0x1 + 0x4],EAX ; 00479e99
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00479e9d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00479ea0
    SUB dword ptr [EDX + EDI*0x1 + 0x8],EAX ; 00479ea4
    INC ESI                             ; 00479ea8
    MOV EDI,dword ptr [EBX + 0x20]      ; 00479ea9
    ADD EDX,0xc                         ; 00479eac
    CMP ESI,EDI                         ; 00479eaf
    JL 0x00479e89                       ; 00479eb1
        ;   XREF to: 00479e89 (CONDITIONAL_JUMP)  ; LAB_00479e89
    LEA EAX,[EAX]                       ; 00479eb3
    LEA EDX,[EDX]                       ; 00479eb9
    NOP                                 ; 00479ebf
    MOV ESI,dword ptr [EBX + 0x34]      ; 00479f2f
        ;   Label: LAB_00479f2f
    LEA ECX,[ESI + EAX*0x1]             ; 00479f32
    MOV ESI,dword ptr [EDX + 0x1b68980] ; 00479f35
    MOV dword ptr [ECX + 0x1c],ESI      ; 00479f3b
    JMP 0x00479e28                      ; 00479f3e
        ;   XREF to: 00479e28 (UNCONDITIONAL_JUMP)  ; LAB_00479e28
    PUSH EBP                            ; 00479f43
        ;   Label: LAB_00479f43
    MOV ECX,dword ptr [EBX + 0x24]      ; 00479f44
    PUSH ECX                            ; 00479f47
    PUSH 0x20                           ; 00479f48
    MOV ESI,dword ptr [EBX + 0x34]      ; 00479f4a
    PUSH ESI                            ; 00479f4d
    CALL FUN_005c0b10                   ; 00479f4e
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00479f53
    JMP 0x00479e3a                      ; 00479f56
        ;   XREF to: 00479e3a (UNCONDITIONAL_JUMP)  ; LAB_00479e3a

