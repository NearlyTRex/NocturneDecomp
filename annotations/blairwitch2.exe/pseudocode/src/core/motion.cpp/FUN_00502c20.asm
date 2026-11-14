; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_FUN_00502c20(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502c20
        ;   Label: core_motion.cpp_FUN_00502c20
    PUSH ESI                            ; 00502c21
    PUSH EDI                            ; 00502c22
    PUSH EBP                            ; 00502c23
    SUB ESP,0x8                         ; 00502c24
    MOV EDI,dword ptr [ESP + 0x20]      ; 00502c27
    PUSH 0x5df85d                       ; 00502c2b
    PUSH EDI                            ; 00502c30
    CALL crt_unknown.c_FUN_005b8010     ; 00502c31
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 00502c36
    PUSH 0x2                            ; 00502c39
    PUSH 0x5df875                       ; 00502c3b
    PUSH EDI                            ; 00502c40
    CALL crt_unknown.c_FUN_005b8010     ; 00502c41
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00502c46
    PUSH 0x5df879                       ; 00502c49
    PUSH EDI                            ; 00502c4e
    CALL crt_unknown.c_FUN_005b8010     ; 00502c4f
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 00502c54
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00502c57
    MOV EDX,dword ptr [EAX]             ; 00502c5b
    PUSH EDX                            ; 00502c5d
    PUSH 0x5df888                       ; 00502c5e
    PUSH EDI                            ; 00502c63
    CALL crt_unknown.c_FUN_005b8010     ; 00502c64
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00502c69
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00502c6c
    MOV ECX,dword ptr [EAX]             ; 00502c70
    XOR EBX,EBX                         ; 00502c72
    TEST ECX,ECX                        ; 00502c74
    JLE 0x00502ca0                      ; 00502c76
        ;   XREF to: 00502ca0 (CONDITIONAL_JUMP)  ; LAB_00502ca0
    LEA ESI,[EAX + 0x4]                 ; 00502c78
    PUSH ESI                            ; 00502c7b
        ;   Label: LAB_00502c7b
    PUSH 0x5df88c                       ; 00502c7c
    PUSH EDI                            ; 00502c81
    CALL crt_unknown.c_FUN_005b8010     ; 00502c82
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00502c87
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00502c8a
    INC EBX                             ; 00502c8e
    MOV EBP,dword ptr [EAX]             ; 00502c8f
    ADD ESI,0x1e                        ; 00502c91
    CMP EBX,EBP                         ; 00502c94
    JL 0x00502c7b                       ; 00502c96
        ;   XREF to: 00502c7b (CONDITIONAL_JUMP)  ; LAB_00502c7b
    LEA EAX,[EAX]                       ; 00502c98
    MOV EDX,EDX                         ; 00502c9e
    PUSH 0x5df890                       ; 00502ca0
        ;   Label: LAB_00502ca0
    PUSH EDI                            ; 00502ca5
    CALL crt_unknown.c_FUN_005b8010     ; 00502ca6
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 00502cab
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00502cae
    MOV EDX,dword ptr [EAX + 0x1c24]    ; 00502cb2
    PUSH EDX                            ; 00502cb8
    PUSH 0x5df8a1                       ; 00502cb9
    PUSH EDI                            ; 00502cbe
    CALL crt_unknown.c_FUN_005b8010     ; 00502cbf
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00502cc4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00502cc7
    XOR ECX,ECX                         ; 00502ccb
    MOV EBX,dword ptr [EAX + 0x1c24]    ; 00502ccd
    MOV dword ptr [ESP],ECX             ; 00502cd3
    TEST EBX,EBX                        ; 00502cd6
    JLE 0x00502efc                      ; 00502cd8
        ;   XREF to: 00502efc (CONDITIONAL_JUMP)  ; LAB_00502efc
    ADD EAX,0x1c28                      ; 00502cde
    MOV dword ptr [ESP + 0x4],EAX       ; 00502ce3
    MOV ECX,dword ptr [ESP]             ; 00502ce7
        ;   Label: LAB_00502ce7
    PUSH ECX                            ; 00502cea
    PUSH 0x5df8a5                       ; 00502ceb
    PUSH EDI                            ; 00502cf0
    MOV EBX,dword ptr [ESP + 0x10]      ; 00502cf1
    CALL crt_unknown.c_FUN_005b8010     ; 00502cf5
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00502cfa
    MOV ESI,dword ptr [EBX + 0x64]      ; 00502cfd
    PUSH ESI                            ; 00502d00
    MOV EBP,dword ptr [EBX + 0x60]      ; 00502d01
    PUSH EBP                            ; 00502d04
    MOV EDX,dword ptr [EBX + 0x24]      ; 00502d05
    PUSH EDX                            ; 00502d08
    SUB ESP,0x8                         ; 00502d09
    FLD float ptr [EBX + 0x20]          ; 00502d0c
    FSTP double ptr [ESP]               ; 00502d0f
    PUSH EBX                            ; 00502d12
    PUSH 0x5df8db                       ; 00502d13
    PUSH EDI                            ; 00502d18
    CALL crt_unknown.c_FUN_005b8010     ; 00502d19
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 00502d1e
    MOV ESI,dword ptr [ESP]             ; 00502d21
    PUSH ESI                            ; 00502d24
    PUSH 0x5df8ed                       ; 00502d25
    PUSH EDI                            ; 00502d2a
    CALL crt_unknown.c_FUN_005b8010     ; 00502d2b
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00502d30
    SUB ESP,0x8                         ; 00502d33
    FLD float ptr [EBX + 0x38]          ; 00502d36
    FSTP double ptr [ESP]               ; 00502d39
    MOV EBP,dword ptr [EBX + 0x34]      ; 00502d3c
    PUSH EBP                            ; 00502d3f
    MOV EDX,dword ptr [EBX + 0x28]      ; 00502d40
    PUSH EDX                            ; 00502d43
    PUSH 0x5df94a                       ; 00502d44
    PUSH EDI                            ; 00502d49
    CALL crt_unknown.c_FUN_005b8010     ; 00502d4a
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x18                        ; 00502d4f
    PUSH ESI                            ; 00502d52
    PUSH 0x5df954                       ; 00502d53
    PUSH EDI                            ; 00502d58
    CALL crt_unknown.c_FUN_005b8010     ; 00502d59
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00502d5e
    MOV ESI,dword ptr [EBX + 0x40]      ; 00502d61
    PUSH ESI                            ; 00502d64
    SUB ESP,0x8                         ; 00502d65
    FLD float ptr [EBX + 0x3c]          ; 00502d68
    FSTP double ptr [ESP]               ; 00502d6b
    MOV EBP,dword ptr [EBX + 0x30]      ; 00502d6e
    PUSH EBP                            ; 00502d71
    PUSH 0x5df9a7                       ; 00502d72
    PUSH EDI                            ; 00502d77
    CALL crt_unknown.c_FUN_005b8010     ; 00502d78
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x18                        ; 00502d7d
    MOV EAX,dword ptr [ESP]             ; 00502d80
    PUSH EAX                            ; 00502d83
    PUSH 0x5df9b1                       ; 00502d84
    PUSH EDI                            ; 00502d89
    CALL crt_unknown.c_FUN_005b8010     ; 00502d8a
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00502d8f
    SUB ESP,0x8                         ; 00502d92
    FLD float ptr [EBX + 0x54]          ; 00502d95
    FSTP double ptr [ESP]               ; 00502d98
    MOV EDX,dword ptr [EBX + 0x50]      ; 00502d9b
    PUSH EDX                            ; 00502d9e
    PUSH 0x5df9f5                       ; 00502d9f
    PUSH EDI                            ; 00502da4
    CALL crt_unknown.c_FUN_005b8010     ; 00502da5
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x14                        ; 00502daa
    MOV ECX,dword ptr [ESP]             ; 00502dad
    PUSH ECX                            ; 00502db0
    PUSH 0x5df9fc                       ; 00502db1
    PUSH EDI                            ; 00502db6
    CALL crt_unknown.c_FUN_005b8010     ; 00502db7
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00502dbc
    MOV ESI,dword ptr [EBX + 0x68]      ; 00502dbf
    PUSH ESI                            ; 00502dc2
    PUSH 0x5dfa74                       ; 00502dc3
    PUSH EDI                            ; 00502dc8
    XOR EBP,EBP                         ; 00502dc9
    CALL crt_unknown.c_FUN_005b8010     ; 00502dcb
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,dword ptr [EBX + 0x68]      ; 00502dd0
    ADD ESP,0xc                         ; 00502dd3
    TEST EDX,EDX                        ; 00502dd6
    JLE 0x00502e1f                      ; 00502dd8
        ;   XREF to: 00502e1f (CONDITIONAL_JUMP)  ; LAB_00502e1f
    XOR ESI,ESI                         ; 00502dda
    MOV EAX,dword ptr [EBX + 0x6c]      ; 00502ddc
        ;   Label: LAB_00502ddc
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x14] ; 00502ddf
    PUSH ECX                            ; 00502de3
    SUB ESP,0x8                         ; 00502de4
    FLD float ptr [ESI + EAX*0x1 + 0x10] ; 00502de7
    FSTP double ptr [ESP]               ; 00502deb
    SUB ESP,0x8                         ; 00502dee
    FLD float ptr [ESI + EAX*0x1 + 0xc] ; 00502df1
    FSTP double ptr [ESP]               ; 00502df5
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x8] ; 00502df8
    PUSH EDX                            ; 00502dfc
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00502dfd
    PUSH ECX                            ; 00502e01
    MOV EDX,dword ptr [ESI + EAX*0x1]   ; 00502e02
    PUSH EDX                            ; 00502e05
    PUSH 0x5dfa78                       ; 00502e06
    PUSH EDI                            ; 00502e0b
    ADD ESI,0x18                        ; 00502e0c
    INC EBP                             ; 00502e0f
    CALL crt_unknown.c_FUN_005b8010     ; 00502e10
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV ECX,dword ptr [EBX + 0x68]      ; 00502e15
    ADD ESP,0x28                        ; 00502e18
    CMP EBP,ECX                         ; 00502e1b
    JL 0x00502ddc                       ; 00502e1d
        ;   XREF to: 00502ddc (CONDITIONAL_JUMP)  ; LAB_00502ddc
    MOV ESI,dword ptr [ESP]             ; 00502e1f
        ;   Label: LAB_00502e1f
    PUSH ESI                            ; 00502e22
    PUSH 0x5dfa8b                       ; 00502e23
    PUSH EDI                            ; 00502e28
    CALL crt_unknown.c_FUN_005b8010     ; 00502e29
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00502e2e
    MOV EBP,dword ptr [EBX + 0x70]      ; 00502e31
    PUSH EBP                            ; 00502e34
    PUSH 0x5dfac0                       ; 00502e35
    PUSH EDI                            ; 00502e3a
    XOR EBP,EBP                         ; 00502e3b
    CALL crt_unknown.c_FUN_005b8010     ; 00502e3d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EAX,dword ptr [EBX + 0x70]      ; 00502e42
    ADD ESP,0xc                         ; 00502e45
    TEST EAX,EAX                        ; 00502e48
    JLE 0x00502e6f                      ; 00502e4a
        ;   XREF to: 00502e6f (CONDITIONAL_JUMP)  ; LAB_00502e6f
    MOV ESI,EBX                         ; 00502e4c
    MOV EDX,dword ptr [ESI + 0x78]      ; 00502e4e
        ;   Label: LAB_00502e4e
    PUSH EDX                            ; 00502e51
    MOV ECX,dword ptr [ESI + 0x74]      ; 00502e52
    PUSH ECX                            ; 00502e55
    PUSH 0x5dfac4                       ; 00502e56
    PUSH EDI                            ; 00502e5b
    ADD ESI,0x8                         ; 00502e5c
    INC EBP                             ; 00502e5f
    CALL crt_unknown.c_FUN_005b8010     ; 00502e60
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EAX,dword ptr [EBX + 0x70]      ; 00502e65
    ADD ESP,0x10                        ; 00502e68
    CMP EBP,EAX                         ; 00502e6b
    JL 0x00502e4e                       ; 00502e6d
        ;   XREF to: 00502e4e (CONDITIONAL_JUMP)  ; LAB_00502e4e
    MOV EDX,dword ptr [ESP]             ; 00502e6f
        ;   Label: LAB_00502e6f
    PUSH EDX                            ; 00502e72
    PUSH 0x5dfacb                       ; 00502e73
    PUSH EDI                            ; 00502e78
    CALL crt_unknown.c_FUN_005b8010     ; 00502e79
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00502e7e
    MOV ECX,dword ptr [EBX + 0xec]      ; 00502e81
    PUSH ECX                            ; 00502e87
    PUSH 0x5dfaec                       ; 00502e88
    PUSH EDI                            ; 00502e8d
    XOR EBP,EBP                         ; 00502e8e
    CALL crt_unknown.c_FUN_005b8010     ; 00502e90
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV ESI,dword ptr [EBX + 0xec]      ; 00502e95
    ADD ESP,0xc                         ; 00502e9b
    TEST ESI,ESI                        ; 00502e9e
    JLE 0x00502ec7                      ; 00502ea0
        ;   XREF to: 00502ec7 (CONDITIONAL_JUMP)  ; LAB_00502ec7
    MOV ESI,EBX                         ; 00502ea2
    MOV EAX,dword ptr [ESI + 0xf0]      ; 00502ea4
        ;   Label: LAB_00502ea4
    PUSH EAX                            ; 00502eaa
    PUSH 0x5dfaef                       ; 00502eab
    PUSH EDI                            ; 00502eb0
    ADD ESI,0x4                         ; 00502eb1
    INC EBP                             ; 00502eb4
    CALL crt_unknown.c_FUN_005b8010     ; 00502eb5
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,dword ptr [EBX + 0xec]      ; 00502eba
    ADD ESP,0xc                         ; 00502ec0
    CMP EBP,EDX                         ; 00502ec3
    JL 0x00502ea4                       ; 00502ec5
        ;   XREF to: 00502ea4 (CONDITIONAL_JUMP)  ; LAB_00502ea4
    PUSH 0x5dfaf3                       ; 00502ec7
        ;   Label: LAB_00502ec7
    PUSH EDI                            ; 00502ecc
    CALL crt_unknown.c_FUN_005b8010     ; 00502ecd
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 00502ed2
    MOV ESI,dword ptr [ESP + 0x4]       ; 00502ed5
    MOV EBP,dword ptr [ESP]             ; 00502ed9
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00502edc
    ADD ESI,0x118                       ; 00502ee0
    INC EBP                             ; 00502ee6
    MOV EDX,dword ptr [EBX + 0x1c24]    ; 00502ee7
    MOV dword ptr [ESP + 0x4],ESI       ; 00502eed
    MOV dword ptr [ESP],EBP             ; 00502ef1
    CMP EBP,EDX                         ; 00502ef4
    JL 0x00502ce7                       ; 00502ef6
        ;   XREF to: 00502ce7 (CONDITIONAL_JUMP)  ; LAB_00502ce7
    ADD ESP,0x8                         ; 00502efc
        ;   Label: LAB_00502efc
    POP EBP                             ; 00502eff
    POP EDI                             ; 00502f00
    POP ESI                             ; 00502f01
    POP EBX                             ; 00502f02
    RET                                 ; 00502f03

