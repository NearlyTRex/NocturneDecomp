; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482c80(float *param_1,float *param_2,float *param_3,float param_4)
;
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   FUN_0048ab60 at 0048ad21
;
; Referenced Globals:
;   undefined4 DAT_005810b8
;
; Called Functions:
;   FUN_0040a220
;   FUN_0040de00
;   FUN_0055aa00
;   FUN_0055ae80
;   FUN_0055afb0
;   FUN_0055b180
;   FUN_0055bc00
;   FUN_00566c81
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482c80
        ;   Label: FUN_00482c80
    PUSH ESI                            ; 00482c81
    PUSH EDI                            ; 00482c82
    PUSH EBP                            ; 00482c83
    SUB ESP,0xfc                        ; 00482c84
    MOV EBX,dword ptr [ESP + 0x110]     ; 00482c8a
    MOV EAX,dword ptr [ESP + 0x114]     ; 00482c91
    MOV EBP,dword ptr [ESP + 0x118]     ; 00482c98
    CMP EBX,EAX                         ; 00482c9f
    JNZ 0x00482d88                      ; 00482ca1
        ;   XREF to: 00482d88 (CONDITIONAL_JUMP)  ; LAB_00482d88
    FLD float ptr [0x005810b8]          ; 00482ca7 | DAT_005810b8
        ;   Label: LAB_00482ca7
    FLD float ptr [EBP]                 ; 00482cad
    FMUL ST1                            ; 00482cb0
    FSTP float ptr [ESP + 0xc0]         ; 00482cb2
    FLD float ptr [EBP + 0x4]           ; 00482cb9
    FMUL ST1                            ; 00482cbc
    FSTP float ptr [ESP + 0xc4]         ; 00482cbe
    FMUL float ptr [EBP + 0x8]          ; 00482cc5
    FSTP float ptr [ESP + 0xc8]         ; 00482cc8
    FLD float ptr [EBX]                 ; 00482ccf
    FADD float ptr [ESP + 0xc0]         ; 00482cd1
    FSTP float ptr [ESP + 0xd8]         ; 00482cd8
    FLD float ptr [EBX + 0x4]           ; 00482cdf
    FADD float ptr [ESP + 0xc4]         ; 00482ce2
    FSTP float ptr [ESP + 0xdc]         ; 00482ce9
    FLD float ptr [EBX + 0x8]           ; 00482cf0
    FADD float ptr [ESP + 0xc8]         ; 00482cf3
    LEA EAX,[ESP + 0xd8]                ; 00482cfa
    FSTP float ptr [ESP + 0xe0]         ; 00482d01
    CMP EBX,EAX                         ; 00482d08
    JZ 0x00482d29                       ; 00482d0a
        ;   XREF to: 00482d29 (CONDITIONAL_JUMP)  ; LAB_00482d29
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00482d0c
    MOV dword ptr [EBX],EAX             ; 00482d13
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00482d15
    MOV dword ptr [EBX + 0x4],EAX       ; 00482d1c
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00482d1f
    MOV dword ptr [EBX + 0x8],EAX       ; 00482d26
    FLD float ptr [EBP + 0x8]           ; 00482d29
        ;   Label: LAB_00482d29
    FMUL ST0                            ; 00482d2c
    FLD float ptr [EBP]                 ; 00482d2e
    FMUL ST0                            ; 00482d31
    FADDP                               ; 00482d33
    FSQRT                               ; 00482d35
    FLD float ptr [EBP + 0x4]           ; 00482d37
    CALL FUN_00566c81                   ; 00482d3a
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined FUN_00566c81()
    MOV dword ptr [EBX + 0x1c],0x0      ; 00482d3f
    FCHS                                ; 00482d46
    FSTP float ptr [EBX + 0x14]         ; 00482d48
    FLD float ptr [EBP + 0x8]           ; 00482d4b
    FLD float ptr [EBP]                 ; 00482d4e
    CALL FUN_00566c81                   ; 00482d51
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined FUN_00566c81()
    PUSH 0x3                            ; 00482d56
    PUSH 0x0                            ; 00482d58
    FSTP float ptr [EBX + 0x18]         ; 00482d5a
    CALL FUN_0040de00                   ; 00482d5d
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040de00()
    MOV dword ptr [EBX + 0xc],0x1       ; 00482d62
    ADD ESP,0x8                         ; 00482d69
    MOV dword ptr [EBX + 0x20],EAX      ; 00482d6c
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00482d6f
    MOV dword ptr [EBX + 0x10],EAX      ; 00482d76
    TEST EAX,EAX                        ; 00482d79
    JNZ 0x00482d9d                      ; 00482d7b
        ;   XREF to: 00482d9d (CONDITIONAL_JUMP)  ; LAB_00482d9d
    ADD ESP,0xfc                        ; 00482d7d
        ;   Label: LAB_00482d7d
    POP EBP                             ; 00482d83
    POP EDI                             ; 00482d84
    POP ESI                             ; 00482d85
    POP EBX                             ; 00482d86
    RET                                 ; 00482d87
    MOV EDX,dword ptr [EAX]             ; 00482d88
        ;   Label: LAB_00482d88
    MOV dword ptr [EBX],EDX             ; 00482d8a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00482d8c
    MOV dword ptr [EBX + 0x4],EDX       ; 00482d8f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00482d92
    MOV dword ptr [EBX + 0x8],EDX       ; 00482d95
    JMP 0x00482ca7                      ; 00482d98
        ;   XREF to: 00482ca7 (UNCONDITIONAL_JUMP)  ; LAB_00482ca7
    LEA EAX,[EBX + 0x14]                ; 00482d9d
        ;   Label: LAB_00482d9d
    PUSH EAX                            ; 00482da0
    PUSH EBX                            ; 00482da1
    LEA EAX,[ESP + 0x8]                 ; 00482da2
    PUSH EAX                            ; 00482da6
    CALL FUN_0055afb0                   ; 00482da7
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055afb0()
    MOV EAX,dword ptr [EBX + 0x10]      ; 00482dac
    ADD ESP,0xc                         ; 00482daf
    LEA EDX,[EAX + 0x30]                ; 00482db2
    PUSH EDX                            ; 00482db5
    ADD EAX,0x20                        ; 00482db6
    PUSH EAX                            ; 00482db9
    LEA EAX,[ESP + 0x38]                ; 00482dba
    PUSH EAX                            ; 00482dbe
    CALL FUN_0055ae80                   ; 00482dbf
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae80()
    ADD ESP,0xc                         ; 00482dc4
    LEA EAX,[ESP + 0x30]                ; 00482dc7
    PUSH EAX                            ; 00482dcb
    LEA EAX,[ESP + 0x4]                 ; 00482dcc
    PUSH EAX                            ; 00482dd0
    LEA ESI,[ESP + 0x98]                ; 00482dd1
    LEA EDI,[ESP + 0x68]                ; 00482dd8
    CALL FUN_0055aa00                   ; 00482ddc
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aa00()
    ADD ESP,0x8                         ; 00482de1
    LEA EAX,[ESP + 0xcc]                ; 00482de4
    MOV ECX,0xc                         ; 00482deb
    PUSH EAX                            ; 00482df0
    LEA EAX,[ESP + 0x64]                ; 00482df1
    LEA ESI,[ESP + 0x94]                ; 00482df5
    PUSH EAX                            ; 00482dfc
    MOVSD.REP ES:EDI,ESI                ; 00482dfd
    CALL FUN_0055bc00                   ; 00482dff
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055bc00()
    LEA EDX,[EBX + 0x24]                ; 00482e04
    ADD ESP,0x8                         ; 00482e07
    CMP EDX,EAX                         ; 00482e0a
    JZ 0x00482e1e                       ; 00482e0c
        ;   XREF to: 00482e1e (CONDITIONAL_JUMP)  ; LAB_00482e1e
    MOV ECX,dword ptr [EAX]             ; 00482e0e
    MOV dword ptr [EDX],ECX             ; 00482e10
    MOV ECX,dword ptr [EAX + 0x4]       ; 00482e12
    MOV dword ptr [EDX + 0x4],ECX       ; 00482e15
    MOV ECX,dword ptr [EAX + 0x8]       ; 00482e18
    MOV dword ptr [EDX + 0x8],ECX       ; 00482e1b
    LEA EAX,[ESP + 0xf0]                ; 00482e1e
        ;   Label: LAB_00482e1e
    PUSH EAX                            ; 00482e25
    LEA EAX,[ESP + 0x64]                ; 00482e26
    PUSH EAX                            ; 00482e2a
    CALL FUN_0055b180                   ; 00482e2b
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b180()
    LEA EDX,[EBX + 0x14]                ; 00482e30
    ADD ESP,0x8                         ; 00482e33
    CMP EDX,EAX                         ; 00482e36
    JZ 0x00482e4a                       ; 00482e38
        ;   XREF to: 00482e4a (CONDITIONAL_JUMP)  ; LAB_00482e4a
    MOV ECX,dword ptr [EAX]             ; 00482e3a
    MOV dword ptr [EDX],ECX             ; 00482e3c
    MOV ECX,dword ptr [EAX + 0x4]       ; 00482e3e
    MOV dword ptr [EDX + 0x4],ECX       ; 00482e41
    MOV ECX,dword ptr [EAX + 0x8]       ; 00482e44
    MOV dword ptr [EDX + 0x8],ECX       ; 00482e47
    PUSH EBP                            ; 00482e4a
        ;   Label: LAB_00482e4a
    LEA EAX,[ESP + 0xe8]                ; 00482e4b
    PUSH EAX                            ; 00482e52
    MOV ECX,dword ptr [EBX + 0x10]      ; 00482e53
    PUSH ECX                            ; 00482e56
    ADD EBX,0x30                        ; 00482e57
    CALL FUN_0040a220                   ; 00482e5a
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a220()
    ADD ESP,0xc                         ; 00482e5f
    CMP EBX,EAX                         ; 00482e62
    JZ 0x00482d7d                       ; 00482e64
        ;   XREF to: 00482d7d (CONDITIONAL_JUMP)  ; LAB_00482d7d
    MOV EDX,dword ptr [EAX]             ; 00482e6a
    MOV dword ptr [EBX],EDX             ; 00482e6c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00482e6e
    MOV dword ptr [EBX + 0x4],EDX       ; 00482e71
    MOV EDX,dword ptr [EAX + 0x8]       ; 00482e74
    MOV dword ptr [EBX + 0x8],EDX       ; 00482e77
    ADD ESP,0xfc                        ; 00482e7a
    POP EBP                             ; 00482e80
    POP EDI                             ; 00482e81
    POP ESI                             ; 00482e82
    POP EBX                             ; 00482e83
    RET                                 ; 00482e84

