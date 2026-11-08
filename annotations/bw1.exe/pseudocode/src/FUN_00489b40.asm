; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00489b40(uint *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   FUN_00453ed0 at 004540e8
;
; Referenced Globals:
;   undefined8 DAT_00618618
;   undefined8 DAT_00618620
;   undefined4 DAT_00619b60
;   undefined4 DAT_0061a358
;   undefined4 DAT_00623f38
;   undefined4 DAT_00623f58
;   undefined4 DAT_00623f78
;   undefined4 DAT_00623f80
;   undefined4 DAT_00623fa0
;   undefined4 DAT_00623fc0
;   undefined4 DAT_00b8189c
;   undefined4 DAT_01c51d1c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00489b40
        ;   Label: FUN_00489b40
    MOV EBP,ESP                         ; 00489b41
    PUSH ESI                            ; 00489b43
    PUSH EDI                            ; 00489b44
    PUSH EBP                            ; 00489b45
    MOV ECX,dword ptr [EBP + 0x18]      ; 00489b46
    MOV EDI,dword ptr [EBP + 0x8]       ; 00489b49
    MOV ESI,dword ptr [EBP + 0xc]       ; 00489b4c
    MOV EBX,dword ptr [EBP + 0x10]      ; 00489b4f
    MOV EBP,dword ptr [EBP + 0x14]      ; 00489b52
    PXOR MM7,MM7                        ; 00489b55
    MOVD MM5,dword ptr [0x01c51d1c]     ; 00489b58 | DAT_01c51d1c
    PUNPCKLBW MM5,MM7                   ; 00489b5f
    PSLLW MM5,0x6                       ; 00489b62
    MOV EAX,dword ptr [ESI]             ; 00489b66
    MOV EAX,dword ptr [ESI + 0x20]      ; 00489b68
    MOV EAX,dword ptr [ESI + 0x40]      ; 00489b6b
    MOV EAX,dword ptr [ESI + 0x60]      ; 00489b6e
    MOV EAX,dword ptr [ESI + 0x80]      ; 00489b71
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00489b77
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00489b7d
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00489b83
    MOV EAX,dword ptr [ESI + 0x100]     ; 00489b89
    MOV EAX,dword ptr [ESI + 0x120]     ; 00489b8f
    MOV EAX,dword ptr [ESI + 0x140]     ; 00489b95
    MOV EAX,dword ptr [ESI + 0x160]     ; 00489b9b
    MOV EAX,dword ptr [ESI + 0x180]     ; 00489ba1
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00489ba7
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00489bad
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00489bb3
    MOV EAX,dword ptr [ESI + 0x200]     ; 00489bb9
    MOV EAX,dword ptr [ESI + 0x220]     ; 00489bbf
    MOV EAX,dword ptr [ESI + 0x240]     ; 00489bc5
    MOV EAX,dword ptr [ESI + 0x260]     ; 00489bcb
    MOV EAX,dword ptr [ESI + 0x280]     ; 00489bd1
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00489bd7
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00489bdd
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00489be3
    MOV EAX,dword ptr [ESI + 0x300]     ; 00489be9
    MOV EAX,dword ptr [ESI + 0x320]     ; 00489bef
    MOV EAX,dword ptr [ESI + 0x340]     ; 00489bf5
    MOV EAX,dword ptr [ESI + 0x360]     ; 00489bfb
    MOV EAX,dword ptr [ESI + 0x380]     ; 00489c01
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00489c07
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00489c0d
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00489c13
    MOV EAX,dword ptr [ESI + 0x400]     ; 00489c19
    MOV EAX,dword ptr [ESI + 0x420]     ; 00489c1f
    MOV EAX,dword ptr [ESI + 0x440]     ; 00489c25
    MOV EAX,dword ptr [ESI + 0x460]     ; 00489c2b
    MOV EAX,dword ptr [ESI + 0x480]     ; 00489c31
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00489c37
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00489c3d
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00489c43
    MOV EAX,dword ptr [ESI + 0x500]     ; 00489c49
    MOV EAX,dword ptr [ESI + 0x520]     ; 00489c4f
    MOV EAX,dword ptr [ESI + 0x540]     ; 00489c55
    MOV EAX,dword ptr [ESI + 0x560]     ; 00489c5b
    MOV EAX,dword ptr [ESI + 0x580]     ; 00489c61
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00489c67
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00489c6d
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00489c73
    MOV EAX,dword ptr [ESI + 0x600]     ; 00489c79
    MOV EAX,dword ptr [ESI + 0x620]     ; 00489c7f
    MOV EAX,dword ptr [ESI + 0x640]     ; 00489c85
    MOV EAX,dword ptr [ESI + 0x660]     ; 00489c8b
    MOV EAX,dword ptr [ESI + 0x680]     ; 00489c91
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00489c97
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00489c9d
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00489ca3
    MOV EAX,dword ptr [ESI + 0x700]     ; 00489ca9
    MOV EAX,dword ptr [ESI + 0x720]     ; 00489caf
    MOV EAX,dword ptr [ESI + 0x740]     ; 00489cb5
    MOV EAX,dword ptr [ESI + 0x760]     ; 00489cbb
    MOV EAX,dword ptr [ESI + 0x780]     ; 00489cc1
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00489cc7
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00489ccd
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00489cd3
    MOV EAX,dword ptr [ESI + 0x800]     ; 00489cd9
    MOV EAX,dword ptr [ESI + 0x820]     ; 00489cdf
    MOV EAX,dword ptr [ESI + 0x840]     ; 00489ce5
    MOV EAX,dword ptr [ESI + 0x860]     ; 00489ceb
    MOV EAX,dword ptr [ESI + 0x880]     ; 00489cf1
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00489cf7
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00489cfd
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00489d03
    MOV EAX,dword ptr [ESI + 0x900]     ; 00489d09
    MOV EAX,dword ptr [ESI + 0x920]     ; 00489d0f
    MOV EAX,dword ptr [ESI + 0x940]     ; 00489d15
    MOV EAX,dword ptr [ESI + 0x960]     ; 00489d1b
    MOV EAX,dword ptr [ESI + 0x980]     ; 00489d21
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00489d27
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00489d2d
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00489d33
    MOV EAX,dword ptr [EBX + 0x140]     ; 00489d39
    MOV EAX,dword ptr [EBX + 0x160]     ; 00489d3f
    MOV EAX,dword ptr [EBX + 0x180]     ; 00489d45
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 00489d4b
    MOV EAX,dword ptr [EBX + 0x1c0]     ; 00489d51
    MOV EAX,dword ptr [EBX + 0x1e0]     ; 00489d57
    MOV EAX,dword ptr [EBX + 0x200]     ; 00489d5d
    MOV EAX,dword ptr [EBX + 0x220]     ; 00489d63
    MOV EAX,dword ptr [EBX + 0x240]     ; 00489d69
    MOV EAX,dword ptr [EBX + 0x260]     ; 00489d6f
    JMP 0x00489d80                      ; 00489d75
        ;   XREF to: 00489d80 (UNCONDITIONAL_JUMP)  ; LAB_00489d80
    MOVZX EDX,byte ptr [EBX]            ; 00489d80
        ;   Label: LAB_00489d80
    MOVZX EAX,byte ptr [EBX + 0x140]    ; 00489d83
    ADD EDX,EAX                         ; 00489d8a
    MOVQ MM0,qword ptr [ESI]            ; 00489d8c
    SHR EDX,0x1                         ; 00489d8f
    MOVZX EAX,byte ptr [EBX + 0x141]    ; 00489d91
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 00489d98 | DAT_00b8189c
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 00489da0
    MOVQ MM1,MM0                        ; 00489da4
    ADD EDX,EAX                         ; 00489da7
    MOVZX EAX,byte ptr [EBP]            ; 00489da9
    SHR EDX,0x1                         ; 00489dad
    PUNPCKLBW MM0,MM7                   ; 00489daf
    MOVD MM6,dword ptr [EDX*0x4 + 0xb8189c] ; 00489db2 | DAT_00b8189c
    PSRLQ MM1,0x20                      ; 00489dba
    SHR EDX,0x1                         ; 00489dbe
    PUNPCKLBW MM6,MM7                   ; 00489dc0
    PUNPCKLBW MM2,MM7                   ; 00489dc3
    ADD EAX,EDX                         ; 00489dc6
    PADDW MM6,MM2                       ; 00489dc8
    PUNPCKLBW MM1,MM7                   ; 00489dcb
    PMULLW MM0,MM2                      ; 00489dce
    PSRLW MM6,0x1                       ; 00489dd1
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 00489dd5 | DAT_00619b60
    PMULLW MM1,MM6                      ; 00489ddd
    MOVQ MM2,MM3                        ; 00489de0
    MOVQ MM4,MM5                        ; 00489de3
    PXOR MM2,qword ptr [0x0061a358]     ; 00489de6 | DAT_0061a358
    PMULHW MM0,MM2                      ; 00489ded
    PMULHW MM1,MM2                      ; 00489df0
    PMULHW MM4,MM3                      ; 00489df3
    PADDW MM0,MM4                       ; 00489df6
    PADDW MM1,MM4                       ; 00489df9
    PADDW MM0,qword ptr [0x00618618]    ; 00489dfc | DAT_00618618
    PADDW MM1,qword ptr [0x00618620]    ; 00489e03 | DAT_00618620
    PSRLW MM0,0x4                       ; 00489e0a
    PSRLW MM1,0x4                       ; 00489e0e
    PACKUSWB MM0,MM7                    ; 00489e12
    PACKUSWB MM1,MM7                    ; 00489e15
    MOVQ MM2,MM0                        ; 00489e18
    MOVQ MM3,MM0                        ; 00489e1b
    PAND MM0,qword ptr [0x00623f78]     ; 00489e1e | DAT_00623f78
    PAND MM2,qword ptr [0x00623f58]     ; 00489e25 | DAT_00623f58
    PAND MM3,qword ptr [0x00623f38]     ; 00489e2c | DAT_00623f38
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 00489e33 | DAT_00623fc0
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 00489e3a | DAT_00623fa0
    PSRLQ MM3,qword ptr [0x00623f80]    ; 00489e41 | DAT_00623f80
    POR MM0,MM2                         ; 00489e48
    POR MM0,MM3                         ; 00489e4b
    MOVQ MM2,MM1                        ; 00489e4e
    MOVQ MM3,MM1                        ; 00489e51
    PAND MM1,qword ptr [0x00623f78]     ; 00489e54 | DAT_00623f78
    PAND MM2,qword ptr [0x00623f58]     ; 00489e5b | DAT_00623f58
    PAND MM3,qword ptr [0x00623f38]     ; 00489e62 | DAT_00623f38
    PSRLQ MM1,qword ptr [0x00623fc0]    ; 00489e69 | DAT_00623fc0
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 00489e70 | DAT_00623fa0
    PSRLQ MM3,qword ptr [0x00623f80]    ; 00489e77 | DAT_00623f80
    POR MM1,MM2                         ; 00489e7e
    POR MM1,MM3                         ; 00489e81
    PSLLQ MM1,0x10                      ; 00489e84
    POR MM0,MM1                         ; 00489e88
    ADD ESI,0x8                         ; 00489e8b
    INC EBX                             ; 00489e8e
    INC EBP                             ; 00489e8f
    MOVD dword ptr [EDI],MM0            ; 00489e90
    ADD EDI,0x4                         ; 00489e93
    SUB ECX,0x2                         ; 00489e96
    JG 0x00489d80                       ; 00489e99
        ;   XREF to: 00489d80 (CONDITIONAL_JUMP)  ; LAB_00489d80
    POP EBP                             ; 00489e9f
    EMMS                                ; 00489ea0
    POP EDI                             ; 00489ea2
    POP ESI                             ; 00489ea3
    LEAVE                               ; 00489ea4
    RET                                 ; 00489ea5

