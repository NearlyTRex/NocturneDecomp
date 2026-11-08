; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00471a60(uint *param_1,undefined4 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   FUN_00442820 at 0044299c
;
; Referenced Globals:
;   undefined8 DAT_00611308
;   undefined8 DAT_00611310
;   undefined4 DAT_00612880
;   undefined4 DAT_006128a0
;   undefined4 DAT_006128c0
;   undefined4 DAT_006128e0
;   undefined4 DAT_00612900
;   undefined4 DAT_00612920
;   undefined4 DAT_00612940
;   undefined4 DAT_00612960
;   undefined4 DAT_00612980
;   undefined4 DAT_006129a0
;   undefined4 DAT_006129c0
;   undefined4 DAT_006129e0
;   undefined4 DAT_00612a00
;   ... and 91 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00471a60
        ;   Label: FUN_00471a60
    MOV EBP,ESP                         ; 00471a61
    PUSH ESI                            ; 00471a63
    PUSH EDI                            ; 00471a64
    PUSH EBP                            ; 00471a65
    MOV ECX,dword ptr [EBP + 0x18]      ; 00471a66
    MOV EDI,dword ptr [EBP + 0x8]       ; 00471a69
    MOV ESI,dword ptr [EBP + 0xc]       ; 00471a6c
    MOV EBX,dword ptr [EBP + 0x10]      ; 00471a6f
    MOV EBP,dword ptr [EBP + 0x14]      ; 00471a72
    PXOR MM7,MM7                        ; 00471a75
    MOVD MM5,dword ptr [0x01c38b5c]     ; 00471a78 | DAT_01c38b5c
    PUNPCKLBW MM5,MM7                   ; 00471a7f
    PSLLW MM5,0x6                       ; 00471a82
    MOV EAX,dword ptr [EBX]             ; 00471a86
    MOV EAX,dword ptr [EBX + 0x20]      ; 00471a88
    MOV EAX,dword ptr [EBX + 0x40]      ; 00471a8b
    MOV EAX,dword ptr [EBX + 0x60]      ; 00471a8e
    MOV EAX,dword ptr [EBX + 0x80]      ; 00471a91
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00471a97
    MOV EAX,dword ptr [EBX + 0xc0]      ; 00471a9d
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00471aa3
    MOV EAX,dword ptr [EBX + 0x100]     ; 00471aa9
    MOV EAX,dword ptr [EBX + 0x120]     ; 00471aaf
    MOV EDX,dword ptr [EBP]             ; 00471ab5
    MOV EDX,dword ptr [EBP + 0x20]      ; 00471ab8
    MOV EDX,dword ptr [EBP + 0x40]      ; 00471abb
    MOV EDX,dword ptr [EBP + 0x60]      ; 00471abe
    MOV EDX,dword ptr [EBP + 0x80]      ; 00471ac1
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00471ac7
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00471acd
    MOV EDX,dword ptr [EBP + 0xe0]      ; 00471ad3
    MOV EDX,dword ptr [EBP + 0x100]     ; 00471ad9
    MOV EDX,dword ptr [EBP + 0x120]     ; 00471adf
    MOV EAX,dword ptr [ESI]             ; 00471ae5
    MOV EAX,dword ptr [ESI + 0x20]      ; 00471ae7
    MOV EAX,dword ptr [ESI + 0x40]      ; 00471aea
    MOV EAX,dword ptr [ESI + 0x60]      ; 00471aed
    MOV EAX,dword ptr [ESI + 0x80]      ; 00471af0
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00471af6
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00471afc
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00471b02
    MOV EAX,dword ptr [ESI + 0x100]     ; 00471b08
    MOV EAX,dword ptr [ESI + 0x120]     ; 00471b0e
    MOV EAX,dword ptr [ESI + 0x140]     ; 00471b14
    MOV EAX,dword ptr [ESI + 0x160]     ; 00471b1a
    MOV EAX,dword ptr [ESI + 0x180]     ; 00471b20
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00471b26
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00471b2c
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00471b32
    MOV EAX,dword ptr [ESI + 0x200]     ; 00471b38
    MOV EAX,dword ptr [ESI + 0x220]     ; 00471b3e
    MOV EAX,dword ptr [ESI + 0x240]     ; 00471b44
    MOV EAX,dword ptr [ESI + 0x260]     ; 00471b4a
    MOV EAX,dword ptr [ESI + 0x280]     ; 00471b50
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00471b56
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00471b5c
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00471b62
    MOV EAX,dword ptr [ESI + 0x300]     ; 00471b68
    MOV EAX,dword ptr [ESI + 0x320]     ; 00471b6e
    MOV EAX,dword ptr [ESI + 0x340]     ; 00471b74
    MOV EAX,dword ptr [ESI + 0x360]     ; 00471b7a
    MOV EAX,dword ptr [ESI + 0x380]     ; 00471b80
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00471b86
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00471b8c
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00471b92
    MOV EAX,dword ptr [ESI + 0x400]     ; 00471b98
    MOV EAX,dword ptr [ESI + 0x420]     ; 00471b9e
    MOV EAX,dword ptr [ESI + 0x440]     ; 00471ba4
    MOV EAX,dword ptr [ESI + 0x460]     ; 00471baa
    MOV EAX,dword ptr [ESI + 0x480]     ; 00471bb0
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00471bb6
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00471bbc
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00471bc2
    MOV EAX,dword ptr [ESI + 0x500]     ; 00471bc8
    MOV EAX,dword ptr [ESI + 0x520]     ; 00471bce
    MOV EAX,dword ptr [ESI + 0x540]     ; 00471bd4
    MOV EAX,dword ptr [ESI + 0x560]     ; 00471bda
    MOV EAX,dword ptr [ESI + 0x580]     ; 00471be0
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00471be6
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00471bec
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00471bf2
    MOV EAX,dword ptr [ESI + 0x600]     ; 00471bf8
    MOV EAX,dword ptr [ESI + 0x620]     ; 00471bfe
    MOV EAX,dword ptr [ESI + 0x640]     ; 00471c04
    MOV EAX,dword ptr [ESI + 0x660]     ; 00471c0a
    MOV EAX,dword ptr [ESI + 0x680]     ; 00471c10
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00471c16
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00471c1c
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00471c22
    MOV EAX,dword ptr [ESI + 0x700]     ; 00471c28
    MOV EAX,dword ptr [ESI + 0x720]     ; 00471c2e
    MOV EAX,dword ptr [ESI + 0x740]     ; 00471c34
    MOV EAX,dword ptr [ESI + 0x760]     ; 00471c3a
    MOV EAX,dword ptr [ESI + 0x780]     ; 00471c40
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00471c46
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00471c4c
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00471c52
    MOV EAX,dword ptr [ESI + 0x800]     ; 00471c58
    MOV EAX,dword ptr [ESI + 0x820]     ; 00471c5e
    MOV EAX,dword ptr [ESI + 0x840]     ; 00471c64
    MOV EAX,dword ptr [ESI + 0x860]     ; 00471c6a
    MOV EAX,dword ptr [ESI + 0x880]     ; 00471c70
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00471c76
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00471c7c
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00471c82
    MOV EAX,dword ptr [ESI + 0x900]     ; 00471c88
    MOV EAX,dword ptr [ESI + 0x920]     ; 00471c8e
    MOV EAX,dword ptr [ESI + 0x940]     ; 00471c94
    MOV EAX,dword ptr [ESI + 0x960]     ; 00471c9a
    MOV EAX,dword ptr [ESI + 0x980]     ; 00471ca0
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00471ca6
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00471cac
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00471cb2
    MOV EAX,[0x00b6639c]                ; 00471cb8 | DAT_00b6639c
    MOV EAX,[0x00b663bc]                ; 00471cbd | DAT_00b663bc
    MOV EAX,[0x00b663dc]                ; 00471cc2 | DAT_00b663dc
    MOV EAX,[0x00b663fc]                ; 00471cc7 | DAT_00b663fc
    MOV EAX,[0x00b6641c]                ; 00471ccc | DAT_00b6641c
    MOV EAX,[0x00b6643c]                ; 00471cd1 | DAT_00b6643c
    MOV EAX,[0x00b6645c]                ; 00471cd6 | DAT_00b6645c
    MOV EAX,[0x00b6647c]                ; 00471cdb | DAT_00b6647c
    MOV EAX,[0x00b6649c]                ; 00471ce0 | DAT_00b6649c
    MOV EAX,[0x00b664bc]                ; 00471ce5 | DAT_00b664bc
    MOV EAX,[0x00b664dc]                ; 00471cea | DAT_00b664dc
    MOV EAX,[0x00b664fc]                ; 00471cef | DAT_00b664fc
    MOV EAX,[0x00b6651c]                ; 00471cf4 | DAT_00b6651c
    MOV EAX,[0x00b6653c]                ; 00471cf9 | DAT_00b6653c
    MOV EAX,[0x00b6655c]                ; 00471cfe | DAT_00b6655c
    MOV EAX,[0x00b6657c]                ; 00471d03 | DAT_00b6657c
    MOV EAX,[0x00b6659c]                ; 00471d08 | DAT_00b6659c
    MOV EAX,[0x00b665bc]                ; 00471d0d | DAT_00b665bc
    MOV EAX,[0x00b665dc]                ; 00471d12 | DAT_00b665dc
    MOV EAX,[0x00b665fc]                ; 00471d17 | DAT_00b665fc
    MOV EAX,[0x00b6661c]                ; 00471d1c | DAT_00b6661c
    MOV EAX,[0x00b6663c]                ; 00471d21 | DAT_00b6663c
    MOV EAX,[0x00b6665c]                ; 00471d26 | DAT_00b6665c
    MOV EAX,[0x00b6667c]                ; 00471d2b | DAT_00b6667c
    MOV EAX,[0x00b6669c]                ; 00471d30 | DAT_00b6669c
    MOV EAX,[0x00b666bc]                ; 00471d35 | DAT_00b666bc
    MOV EAX,[0x00b666dc]                ; 00471d3a | DAT_00b666dc
    MOV EAX,[0x00b666fc]                ; 00471d3f | DAT_00b666fc
    MOV EAX,[0x00b6671c]                ; 00471d44 | DAT_00b6671c
    MOV EAX,[0x00b6673c]                ; 00471d49 | DAT_00b6673c
    MOV EAX,[0x00b6675c]                ; 00471d4e | DAT_00b6675c
    MOV EAX,[0x00b6677c]                ; 00471d53 | DAT_00b6677c
    MOV EAX,[0x00612880]                ; 00471d58 | DAT_00612880
    MOV EAX,[0x006128a0]                ; 00471d5d | DAT_006128a0
    MOV EAX,[0x006128c0]                ; 00471d62 | DAT_006128c0
    MOV EAX,[0x006128e0]                ; 00471d67 | DAT_006128e0
    MOV EAX,[0x00612900]                ; 00471d6c | DAT_00612900
    MOV EAX,[0x00612920]                ; 00471d71 | DAT_00612920
    MOV EAX,[0x00612940]                ; 00471d76 | DAT_00612940
    MOV EAX,[0x00612960]                ; 00471d7b | DAT_00612960
    MOV EAX,[0x00612980]                ; 00471d80 | DAT_00612980
    MOV EAX,[0x006129a0]                ; 00471d85 | DAT_006129a0
    MOV EAX,[0x006129c0]                ; 00471d8a | DAT_006129c0
    MOV EAX,[0x006129e0]                ; 00471d8f | DAT_006129e0
    MOV EAX,[0x00612a00]                ; 00471d94 | DAT_00612a00
    MOV EAX,[0x00612a20]                ; 00471d99 | DAT_00612a20
    MOV EAX,[0x00612a40]                ; 00471d9e | DAT_00612a40
    MOV EAX,[0x00612a60]                ; 00471da3 | DAT_00612a60
    MOV EAX,[0x00612a80]                ; 00471da8 | DAT_00612a80
    MOV EAX,[0x00612aa0]                ; 00471dad | DAT_00612aa0
    MOV EAX,[0x00612ac0]                ; 00471db2 | DAT_00612ac0
    MOV EAX,[0x00612ae0]                ; 00471db7 | DAT_00612ae0
    MOV EAX,[0x00612b00]                ; 00471dbc | DAT_00612b00
    MOV EAX,[0x00612b20]                ; 00471dc1 | DAT_00612b20
    MOV EAX,[0x00612b40]                ; 00471dc6 | DAT_00612b40
    MOV EAX,[0x00612b60]                ; 00471dcb | DAT_00612b60
    MOV EAX,[0x00612b80]                ; 00471dd0 | DAT_00612b80
    MOV EAX,[0x00612ba0]                ; 00471dd5 | DAT_00612ba0
    MOV EAX,[0x00612bc0]                ; 00471dda | DAT_00612bc0
    MOV EAX,[0x00612be0]                ; 00471ddf | DAT_00612be0
    MOV EAX,[0x00612c00]                ; 00471de4 | DAT_00612c00
    MOV EAX,[0x00612c20]                ; 00471de9 | DAT_00612c20
    MOV EAX,[0x00612c40]                ; 00471dee | DAT_00612c40
    MOV EAX,[0x00612c60]                ; 00471df3 | DAT_00612c60
    MOV EAX,[0x00612c80]                ; 00471df8 | DAT_00612c80
    MOV EAX,[0x00612ca0]                ; 00471dfd | DAT_00612ca0
    MOV EAX,[0x00612cc0]                ; 00471e02 | DAT_00612cc0
    MOV EAX,[0x00612ce0]                ; 00471e07 | DAT_00612ce0
    MOV EAX,[0x00612d00]                ; 00471e0c | DAT_00612d00
    MOV EAX,[0x00612d20]                ; 00471e11 | DAT_00612d20
    MOV EAX,[0x00612d40]                ; 00471e16 | DAT_00612d40
    MOV EAX,[0x00612d60]                ; 00471e1b | DAT_00612d60
    MOV EAX,[0x00612d80]                ; 00471e20 | DAT_00612d80
    MOV EAX,[0x00612da0]                ; 00471e25 | DAT_00612da0
    MOV EAX,[0x00612dc0]                ; 00471e2a | DAT_00612dc0
    MOV EAX,[0x00612de0]                ; 00471e2f | DAT_00612de0
    MOV EAX,[0x00612e00]                ; 00471e34 | DAT_00612e00
    MOV EAX,[0x00612e20]                ; 00471e39 | DAT_00612e20
    MOV EAX,[0x00612e40]                ; 00471e3e | DAT_00612e40
    MOV EAX,[0x00612e60]                ; 00471e43 | DAT_00612e60
    MOV EAX,[0x00612e80]                ; 00471e48 | DAT_00612e80
    MOV EAX,[0x00612ea0]                ; 00471e4d | DAT_00612ea0
    MOV EAX,[0x00612ec0]                ; 00471e52 | DAT_00612ec0
    MOV EAX,[0x00612ee0]                ; 00471e57 | DAT_00612ee0
    MOV EAX,[0x00612f00]                ; 00471e5c | DAT_00612f00
    MOV EAX,[0x00612f20]                ; 00471e61 | DAT_00612f20
    MOV EAX,[0x00612f40]                ; 00471e66 | DAT_00612f40
    MOV EAX,[0x00612f60]                ; 00471e6b | DAT_00612f60
    MOV EAX,[0x00612f80]                ; 00471e70 | DAT_00612f80
    MOV EAX,[0x00612fa0]                ; 00471e75 | DAT_00612fa0
    MOV EAX,[0x00612fc0]                ; 00471e7a | DAT_00612fc0
    MOV EAX,[0x00612fe0]                ; 00471e7f | DAT_00612fe0
    MOV EAX,[0x00613000]                ; 00471e84 | DAT_00613000
    MOV EAX,[0x00613020]                ; 00471e89 | DAT_00613020
    MOV EAX,[0x00613040]                ; 00471e8e | DAT_00613040
    MOV EAX,[0x00613060]                ; 00471e93 | DAT_00613060
    MOVZX EDX,byte ptr [EBX]            ; 00471e98
        ;   Label: LAB_00471e98
    MOVD MM0,dword ptr [ESI]            ; 00471e9b
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 00471e9e | DAT_00b6639c
    MOVZX EAX,byte ptr [EBP]            ; 00471ea6
    PUNPCKLBW MM0,MM7                   ; 00471eaa
    SHR EDX,0x1                         ; 00471ead
    PUNPCKLBW MM2,MM7                   ; 00471eaf
    ADD EAX,EDX                         ; 00471eb2
    PMULLW MM0,MM2                      ; 00471eb4
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 00471eb7 | DAT_00612880
    MOVQ MM2,MM3                        ; 00471ebf
    MOVQ MM4,MM5                        ; 00471ec2
    PXOR MM2,qword ptr [0x00613078]     ; 00471ec5 | DAT_00613078
    PMULHW MM0,MM2                      ; 00471ecc
    PMULHW MM4,MM3                      ; 00471ecf
    PADDW MM0,MM4                       ; 00471ed2
    PADDW MM0,qword ptr [0x00611308]    ; 00471ed5 | DAT_00611308
    PSRLW MM0,0x4                       ; 00471edc
    PACKUSWB MM0,MM7                    ; 00471ee0
    MOVQ MM2,MM0                        ; 00471ee3
    MOVQ MM3,MM0                        ; 00471ee6
    PAND MM0,qword ptr [0x0061c928]     ; 00471ee9 | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 00471ef0 | DAT_0061c908
    PAND MM3,qword ptr [0x0061c8e8]     ; 00471ef7 | DAT_0061c8e8
    PSRLQ MM0,qword ptr [0x0061c970]    ; 00471efe | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 00471f05 | DAT_0061c950
    PSRLQ MM3,qword ptr [0x0061c930]    ; 00471f0c | DAT_0061c930
    POR MM0,MM2                         ; 00471f13
    POR MM0,MM3                         ; 00471f16
    MOVQ MM6,MM0                        ; 00471f19
    ADD ESI,0x4                         ; 00471f1c
    INC EBX                             ; 00471f1f
    INC EBP                             ; 00471f20
    MOVZX EDX,byte ptr [EBX]            ; 00471f21
    MOVD MM0,dword ptr [ESI]            ; 00471f24
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 00471f27 | DAT_00b6639c
    MOVZX EAX,byte ptr [EBP]            ; 00471f2f
    PUNPCKLBW MM0,MM7                   ; 00471f33
    SHR EDX,0x1                         ; 00471f36
    PUNPCKLBW MM2,MM7                   ; 00471f38
    ADD EAX,EDX                         ; 00471f3b
    PMULLW MM0,MM2                      ; 00471f3d
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 00471f40 | DAT_00612880
    MOVQ MM2,MM3                        ; 00471f48
    MOVQ MM4,MM5                        ; 00471f4b
    PXOR MM2,qword ptr [0x00613078]     ; 00471f4e | DAT_00613078
    PMULHW MM0,MM2                      ; 00471f55
    PMULHW MM4,MM3                      ; 00471f58
    PADDW MM0,MM4                       ; 00471f5b
    PADDW MM0,qword ptr [0x00611310]    ; 00471f5e | DAT_00611310
    PSRLW MM0,0x4                       ; 00471f65
    PACKUSWB MM0,MM7                    ; 00471f69
    MOVQ MM2,MM0                        ; 00471f6c
    MOVQ MM3,MM0                        ; 00471f6f
    PAND MM0,qword ptr [0x0061c928]     ; 00471f72 | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 00471f79 | DAT_0061c908
    PAND MM3,qword ptr [0x0061c8e8]     ; 00471f80 | DAT_0061c8e8
    PSRLQ MM0,qword ptr [0x0061c970]    ; 00471f87 | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 00471f8e | DAT_0061c950
    PSRLQ MM3,qword ptr [0x0061c930]    ; 00471f95 | DAT_0061c930
    POR MM0,MM2                         ; 00471f9c
    POR MM0,MM3                         ; 00471f9f
    PSLLQ MM0,0x10                      ; 00471fa2
    POR MM0,MM6                         ; 00471fa6
    MOVD dword ptr [EDI],MM0            ; 00471fa9
    ADD ESI,0x4                         ; 00471fac
    INC EBX                             ; 00471faf
    INC EBP                             ; 00471fb0
    ADD EDI,0x4                         ; 00471fb1
    SUB ECX,0x2                         ; 00471fb4
    JG 0x00471e98                       ; 00471fb7
        ;   XREF to: 00471e98 (CONDITIONAL_JUMP)  ; LAB_00471e98
    POP EBP                             ; 00471fbd
    EMMS                                ; 00471fbe
    POP EDI                             ; 00471fc0
    POP ESI                             ; 00471fc1
    LEAVE                               ; 00471fc2
    RET                                 ; 00471fc3

