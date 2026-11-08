; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00407cc0(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
;
; XREF[2]:
;   FUN_00404590 at 00404616
;   FUN_00407c40 at 00407ca5
;
; Referenced Globals:
;   undefined4 DAT_0070c5b4
;   undefined4 DAT_0070c5b8
;   undefined4 DAT_0070c5c4
;   undefined4 DAT_0070c5c8
;   undefined4 DAT_0070c5e4
;   undefined4 DAT_0070c5e8
;   undefined4 DAT_0070c5f4
;   undefined4 DAT_0070c5f8
;
; Called Functions:
;   FUN_004011a0
;   FUN_00430650
;   FUN_00430750
;   FUN_00430850
;   FUN_00430950
;   FUN_004e8f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407cc0
        ;   Label: FUN_00407cc0
    PUSH ESI                            ; 00407cc1
    PUSH EDI                            ; 00407cc2
    PUSH EBP                            ; 00407cc3
    SUB ESP,0x30                        ; 00407cc4
    MOV EAX,dword ptr [ESP + 0x54]      ; 00407cc7
    AND EAX,dword ptr [ESP + 0x84]      ; 00407ccb
    TEST EAX,0x80000000                 ; 00407cd2
    JNZ 0x00407ec7                      ; 00407cd7
        ;   XREF to: 00407ec7 (CONDITIONAL_JUMP)  ; LAB_00407ec7
    XOR EBX,EBX                         ; 00407cdd
        ;   Label: LAB_00407cdd
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407cdf
        ;   Label: LAB_00407cdf
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407ce3
    JLE 0x00407d10                      ; 00407ce7
        ;   XREF to: 00407d10 (CONDITIONAL_JUMP)  ; LAB_00407d10
    MOV EAX,ESP                         ; 00407ce9
    PUSH EAX                            ; 00407ceb
    LEA EAX,[ESP + 0x78]                ; 00407cec
    PUSH EAX                            ; 00407cf0
    LEA EAX,[ESP + 0x4c]                ; 00407cf1
    PUSH EAX                            ; 00407cf5
    LEA EDI,[ESP + 0x80]                ; 00407cf6
    LEA ESI,[ESP + 0xc]                 ; 00407cfd
    CALL FUN_00430650                   ; 00407d01
        ;   XREF to: 00430650 (UNCONDITIONAL_CALL)  ; undefined FUN_00430650()
    MOV ECX,0xc                         ; 00407d06
    ADD ESP,0xc                         ; 00407d0b
    MOVSD.REP ES:EDI,ESI                ; 00407d0e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407d10
        ;   Label: LAB_00407d10
    MOV ESI,dword ptr [ESP + 0x74]      ; 00407d14
    NEG EAX                             ; 00407d18
    CMP EAX,ESI                         ; 00407d1a
    JLE 0x00407d45                      ; 00407d1c
        ;   XREF to: 00407d45 (CONDITIONAL_JUMP)  ; LAB_00407d45
    MOV EAX,ESP                         ; 00407d1e
    PUSH EAX                            ; 00407d20
    LEA EAX,[ESP + 0x78]                ; 00407d21
    PUSH EAX                            ; 00407d25
    LEA EAX,[ESP + 0x4c]                ; 00407d26
    PUSH EAX                            ; 00407d2a
    LEA EDI,[ESP + 0x80]                ; 00407d2b
    LEA ESI,[ESP + 0xc]                 ; 00407d32
    CALL FUN_00430750                   ; 00407d36
        ;   XREF to: 00430750 (UNCONDITIONAL_CALL)  ; undefined FUN_00430750()
    MOV ECX,0xc                         ; 00407d3b
    ADD ESP,0xc                         ; 00407d40
    MOVSD.REP ES:EDI,ESI                ; 00407d43
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407d45
        ;   Label: LAB_00407d45
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407d49
    JLE 0x00407d76                      ; 00407d4d
        ;   XREF to: 00407d76 (CONDITIONAL_JUMP)  ; LAB_00407d76
    MOV EAX,ESP                         ; 00407d4f
    PUSH EAX                            ; 00407d51
    LEA EAX,[ESP + 0x78]                ; 00407d52
    PUSH EAX                            ; 00407d56
    LEA EAX,[ESP + 0x4c]                ; 00407d57
    PUSH EAX                            ; 00407d5b
    LEA EDI,[ESP + 0x80]                ; 00407d5c
    LEA ESI,[ESP + 0xc]                 ; 00407d63
    CALL FUN_00430850                   ; 00407d67
        ;   XREF to: 00430850 (UNCONDITIONAL_CALL)  ; undefined FUN_00430850()
    MOV ECX,0xc                         ; 00407d6c
    ADD ESP,0xc                         ; 00407d71
    MOVSD.REP ES:EDI,ESI                ; 00407d74
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407d76
        ;   Label: LAB_00407d76
    MOV EBP,dword ptr [ESP + 0x78]      ; 00407d7a
    NEG EAX                             ; 00407d7e
    CMP EAX,EBP                         ; 00407d80
    JLE 0x00407dab                      ; 00407d82
        ;   XREF to: 00407dab (CONDITIONAL_JUMP)  ; LAB_00407dab
    MOV EAX,ESP                         ; 00407d84
    PUSH EAX                            ; 00407d86
    LEA EAX,[ESP + 0x78]                ; 00407d87
    PUSH EAX                            ; 00407d8b
    LEA EAX,[ESP + 0x4c]                ; 00407d8c
    PUSH EAX                            ; 00407d90
    LEA EDI,[ESP + 0x80]                ; 00407d91
    LEA ESI,[ESP + 0xc]                 ; 00407d98
    CALL FUN_00430950                   ; 00407d9c
        ;   XREF to: 00430950 (UNCONDITIONAL_CALL)  ; undefined FUN_00430950()
    MOV ECX,0xc                         ; 00407da1
    ADD ESP,0xc                         ; 00407da6
    MOVSD.REP ES:EDI,ESI                ; 00407da9
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407dab
        ;   Label: LAB_00407dab
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407daf
    JLE 0x00407dd9                      ; 00407db3
        ;   XREF to: 00407dd9 (CONDITIONAL_JUMP)  ; LAB_00407dd9
    MOV EAX,ESP                         ; 00407db5
    PUSH EAX                            ; 00407db7
    LEA EAX,[ESP + 0x48]                ; 00407db8
    PUSH EAX                            ; 00407dbc
    LEA EAX,[ESP + 0x7c]                ; 00407dbd
    PUSH EAX                            ; 00407dc1
    LEA EDI,[ESP + 0x50]                ; 00407dc2
    LEA ESI,[ESP + 0xc]                 ; 00407dc6
    CALL FUN_00430650                   ; 00407dca
        ;   XREF to: 00430650 (UNCONDITIONAL_CALL)  ; undefined FUN_00430650()
    MOV ECX,0xc                         ; 00407dcf
    ADD ESP,0xc                         ; 00407dd4
    MOVSD.REP ES:EDI,ESI                ; 00407dd7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407dd9
        ;   Label: LAB_00407dd9
    MOV ECX,dword ptr [ESP + 0x44]      ; 00407ddd
    NEG EAX                             ; 00407de1
    CMP EAX,ECX                         ; 00407de3
    JLE 0x00407e0b                      ; 00407de5
        ;   XREF to: 00407e0b (CONDITIONAL_JUMP)  ; LAB_00407e0b
    MOV EAX,ESP                         ; 00407de7
    PUSH EAX                            ; 00407de9
    LEA EAX,[ESP + 0x48]                ; 00407dea
    PUSH EAX                            ; 00407dee
    LEA EAX,[ESP + 0x7c]                ; 00407def
    PUSH EAX                            ; 00407df3
    LEA EDI,[ESP + 0x50]                ; 00407df4
    LEA ESI,[ESP + 0xc]                 ; 00407df8
    CALL FUN_00430750                   ; 00407dfc
        ;   XREF to: 00430750 (UNCONDITIONAL_CALL)  ; undefined FUN_00430750()
    MOV ECX,0xc                         ; 00407e01
    ADD ESP,0xc                         ; 00407e06
    MOVSD.REP ES:EDI,ESI                ; 00407e09
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407e0b
        ;   Label: LAB_00407e0b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407e0f
    JLE 0x00407e39                      ; 00407e13
        ;   XREF to: 00407e39 (CONDITIONAL_JUMP)  ; LAB_00407e39
    MOV EAX,ESP                         ; 00407e15
    PUSH EAX                            ; 00407e17
    LEA EAX,[ESP + 0x48]                ; 00407e18
    PUSH EAX                            ; 00407e1c
    LEA EAX,[ESP + 0x7c]                ; 00407e1d
    PUSH EAX                            ; 00407e21
    LEA EDI,[ESP + 0x50]                ; 00407e22
    LEA ESI,[ESP + 0xc]                 ; 00407e26
    CALL FUN_00430850                   ; 00407e2a
        ;   XREF to: 00430850 (UNCONDITIONAL_CALL)  ; undefined FUN_00430850()
    MOV ECX,0xc                         ; 00407e2f
    ADD ESP,0xc                         ; 00407e34
    MOVSD.REP ES:EDI,ESI                ; 00407e37
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407e39
        ;   Label: LAB_00407e39
    MOV EDI,dword ptr [ESP + 0x48]      ; 00407e3d
    NEG EAX                             ; 00407e41
    CMP EAX,EDI                         ; 00407e43
    JLE 0x00407e6b                      ; 00407e45
        ;   XREF to: 00407e6b (CONDITIONAL_JUMP)  ; LAB_00407e6b
    MOV EAX,ESP                         ; 00407e47
    PUSH EAX                            ; 00407e49
    LEA EAX,[ESP + 0x48]                ; 00407e4a
    PUSH EAX                            ; 00407e4e
    LEA EAX,[ESP + 0x7c]                ; 00407e4f
    PUSH EAX                            ; 00407e53
    LEA EDI,[ESP + 0x50]                ; 00407e54
    LEA ESI,[ESP + 0xc]                 ; 00407e58
    CALL FUN_00430950                   ; 00407e5c
        ;   XREF to: 00430950 (UNCONDITIONAL_CALL)  ; undefined FUN_00430950()
    MOV ECX,0xc                         ; 00407e61
    ADD ESP,0xc                         ; 00407e66
    MOVSD.REP ES:EDI,ESI                ; 00407e69
    INC EBX                             ; 00407e6b
        ;   Label: LAB_00407e6b
    CMP EBX,0x2                         ; 00407e6c
    JL 0x00407cdf                       ; 00407e6f
        ;   XREF to: 00407cdf (CONDITIONAL_JUMP)  ; LAB_00407cdf
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407e75
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00407e79
    CMP EAX,EBP                         ; 00407e7d
    JG 0x00407ebf                       ; 00407e7f
        ;   XREF to: 00407ebf (CONDITIONAL_JUMP)  ; LAB_00407ebf
    MOV EBX,EBP                         ; 00407e81
    NEG EBX                             ; 00407e83
    CMP EBX,EAX                         ; 00407e85
    JG 0x00407ebf                       ; 00407e87
        ;   XREF to: 00407ebf (CONDITIONAL_JUMP)  ; LAB_00407ebf
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407e89
    CMP EAX,EBP                         ; 00407e8d
    JG 0x00407ebf                       ; 00407e8f
        ;   XREF to: 00407ebf (CONDITIONAL_JUMP)  ; LAB_00407ebf
    CMP EBX,EAX                         ; 00407e91
    JG 0x00407ebf                       ; 00407e93
        ;   XREF to: 00407ebf (CONDITIONAL_JUMP)  ; LAB_00407ebf
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407e95
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00407e99
    CMP EAX,EBX                         ; 00407e9d
    JG 0x00407ebf                       ; 00407e9f
        ;   XREF to: 00407ebf (CONDITIONAL_JUMP)  ; LAB_00407ebf
    NEG EBX                             ; 00407ea1
    CMP EBX,EAX                         ; 00407ea3
    JG 0x00407ebf                       ; 00407ea5
        ;   XREF to: 00407ebf (CONDITIONAL_JUMP)  ; LAB_00407ebf
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407ea7
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00407eab
    CMP EAX,EDI                         ; 00407eaf
    JG 0x00407ebf                       ; 00407eb1
        ;   XREF to: 00407ebf (CONDITIONAL_JUMP)  ; LAB_00407ebf
    CMP EBX,EAX                         ; 00407eb3
    JG 0x00407ebf                       ; 00407eb5
        ;   XREF to: 00407ebf (CONDITIONAL_JUMP)  ; LAB_00407ebf
    TEST EBP,EBP                        ; 00407eb7
    JLE 0x00407ebf                      ; 00407eb9
        ;   XREF to: 00407ebf (CONDITIONAL_JUMP)  ; LAB_00407ebf
    TEST EDI,EDI                        ; 00407ebb
    JG 0x00407ed0                       ; 00407ebd
        ;   XREF to: 00407ed0 (CONDITIONAL_JUMP)  ; LAB_00407ed0
    ADD ESP,0x30                        ; 00407ebf
        ;   Label: LAB_00407ebf
    POP EBP                             ; 00407ec2
    POP EDI                             ; 00407ec3
    POP ESI                             ; 00407ec4
    POP EBX                             ; 00407ec5
    RET                                 ; 00407ec6
    TEST AL,0xff                        ; 00407ec7
        ;   Label: LAB_00407ec7
    JNZ 0x00407ebf                      ; 00407ec9
        ;   XREF to: 00407ebf (CONDITIONAL_JUMP)  ; LAB_00407ebf
    JMP 0x00407cdd                      ; 00407ecb
        ;   XREF to: 00407cdd (UNCONDITIONAL_JUMP)  ; LAB_00407cdd
    MOV ECX,0xc                         ; 00407ed0
        ;   Label: LAB_00407ed0
    LEA ESI,[ESP + 0x44]                ; 00407ed5
    MOV EDI,0x70c5b4                    ; 00407ed9 | DAT_0070c5b4
    MOVSD.REP ES:EDI,ESI                ; 00407ede | DAT_0070c5b4 | DAT_0070c5b8
    MOV ECX,0xc                         ; 00407ee0
    LEA ESI,[ESP + 0x74]                ; 00407ee5
    MOV EDI,0x70c5e4                    ; 00407ee9 | DAT_0070c5e4
    PUSH 0x4e1e                         ; 00407eee
    MOVSD.REP ES:EDI,ESI                ; 00407ef3 | DAT_0070c5e4 | DAT_0070c5e8
    CALL FUN_004e8f50                   ; 00407ef5
        ;   XREF to: 004e8f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8f50()
    ADD ESP,0x4                         ; 00407efa
    PUSH 0x4e1f                         ; 00407efd
    CALL FUN_004e8f50                   ; 00407f02
        ;   XREF to: 004e8f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8f50()
    MOV EAX,[0x0070c5f8]                ; 00407f07 | DAT_0070c5f8
    ADD ESP,0x4                         ; 00407f0c
    SAR EAX,0x10                        ; 00407f0f
    PUSH EAX                            ; 00407f12
    MOV EAX,[0x0070c5f4]                ; 00407f13 | DAT_0070c5f4
    SAR EAX,0x10                        ; 00407f18
    PUSH EAX                            ; 00407f1b
    MOV EAX,[0x0070c5c8]                ; 00407f1c | DAT_0070c5c8
    SAR EAX,0x10                        ; 00407f21
    PUSH EAX                            ; 00407f24
    MOV EAX,[0x0070c5c4]                ; 00407f25 | DAT_0070c5c4
    SAR EAX,0x10                        ; 00407f2a
    PUSH EAX                            ; 00407f2d
    CALL FUN_004011a0                   ; 00407f2e
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    ADD ESP,0x10                        ; 00407f33
    ADD ESP,0x30                        ; 00407f36
    POP EBP                             ; 00407f39
    POP EDI                             ; 00407f3a
    POP ESI                             ; 00407f3b
    POP EBX                             ; 00407f3c
    RET                                 ; 00407f3d

