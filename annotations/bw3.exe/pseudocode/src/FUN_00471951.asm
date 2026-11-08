; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00471951(undefined4 *param_1,undefined4 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   FUN_00450020 at 00450313
;
; Referenced Globals:
;   undefined8 DAT_005f8b68
;   undefined8 DAT_005f8b70
;   undefined4 DAT_005fa0e0
;   undefined4 DAT_005fa100
;   undefined4 DAT_005fa120
;   undefined4 DAT_005fa140
;   undefined4 DAT_005fa160
;   undefined4 DAT_005fa180
;   undefined4 DAT_005fa1a0
;   undefined4 DAT_005fa1c0
;   undefined4 DAT_005fa1e0
;   undefined4 DAT_005fa200
;   undefined4 DAT_005fa220
;   undefined4 DAT_005fa240
;   undefined4 DAT_005fa260
;   ... and 85 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00471951
        ;   Label: FUN_00471951
    MOV EBP,ESP                         ; 00471952
    PUSH ESI                            ; 00471954
    PUSH EDI                            ; 00471955
    PUSH EBP                            ; 00471956
    MOV ECX,dword ptr [EBP + 0x18]      ; 00471957
    MOV EDI,dword ptr [EBP + 0x8]       ; 0047195a
    MOV ESI,dword ptr [EBP + 0xc]       ; 0047195d
    MOV EBX,dword ptr [EBP + 0x10]      ; 00471960
    MOV EBP,dword ptr [EBP + 0x14]      ; 00471963
    PXOR MM7,MM7                        ; 00471966
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 00471969 | DAT_01c6e2bc
    PUNPCKLBW MM5,MM7                   ; 00471970
    PSLLW MM5,0x6                       ; 00471973
    MOV EAX,dword ptr [EBX]             ; 00471977
    MOV EAX,dword ptr [EBX + 0x20]      ; 00471979
    MOV EAX,dword ptr [EBX + 0x40]      ; 0047197c
    MOV EAX,dword ptr [EBX + 0x60]      ; 0047197f
    MOV EAX,dword ptr [EBX + 0x80]      ; 00471982
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00471988
    MOV EAX,dword ptr [EBX + 0xc0]      ; 0047198e
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00471994
    MOV EAX,dword ptr [EBX + 0x100]     ; 0047199a
    MOV EAX,dword ptr [EBX + 0x120]     ; 004719a0
    MOV EDX,dword ptr [EBP]             ; 004719a6
    MOV EDX,dword ptr [EBP + 0x20]      ; 004719a9
    MOV EDX,dword ptr [EBP + 0x40]      ; 004719ac
    MOV EDX,dword ptr [EBP + 0x60]      ; 004719af
    MOV EDX,dword ptr [EBP + 0x80]      ; 004719b2
    MOV EDX,dword ptr [EBP + 0xa0]      ; 004719b8
    MOV EDX,dword ptr [EBP + 0xc0]      ; 004719be
    MOV EDX,dword ptr [EBP + 0xe0]      ; 004719c4
    MOV EDX,dword ptr [EBP + 0x100]     ; 004719ca
    MOV EDX,dword ptr [EBP + 0x120]     ; 004719d0
    MOV EAX,dword ptr [ESI]             ; 004719d6
    MOV EAX,dword ptr [ESI + 0x20]      ; 004719d8
    MOV EAX,dword ptr [ESI + 0x40]      ; 004719db
    MOV EAX,dword ptr [ESI + 0x60]      ; 004719de
    MOV EAX,dword ptr [ESI + 0x80]      ; 004719e1
    MOV EAX,dword ptr [ESI + 0xa0]      ; 004719e7
    MOV EAX,dword ptr [ESI + 0xc0]      ; 004719ed
    MOV EAX,dword ptr [ESI + 0xe0]      ; 004719f3
    MOV EAX,dword ptr [ESI + 0x100]     ; 004719f9
    MOV EAX,dword ptr [ESI + 0x120]     ; 004719ff
    MOV EAX,dword ptr [ESI + 0x140]     ; 00471a05
    MOV EAX,dword ptr [ESI + 0x160]     ; 00471a0b
    MOV EAX,dword ptr [ESI + 0x180]     ; 00471a11
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00471a17
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00471a1d
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00471a23
    MOV EAX,dword ptr [ESI + 0x200]     ; 00471a29
    MOV EAX,dword ptr [ESI + 0x220]     ; 00471a2f
    MOV EAX,dword ptr [ESI + 0x240]     ; 00471a35
    MOV EAX,dword ptr [ESI + 0x260]     ; 00471a3b
    MOV EAX,dword ptr [ESI + 0x280]     ; 00471a41
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00471a47
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00471a4d
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00471a53
    MOV EAX,dword ptr [ESI + 0x300]     ; 00471a59
    MOV EAX,dword ptr [ESI + 0x320]     ; 00471a5f
    MOV EAX,dword ptr [ESI + 0x340]     ; 00471a65
    MOV EAX,dword ptr [ESI + 0x360]     ; 00471a6b
    MOV EAX,dword ptr [ESI + 0x380]     ; 00471a71
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00471a77
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00471a7d
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00471a83
    MOV EAX,dword ptr [ESI + 0x400]     ; 00471a89
    MOV EAX,dword ptr [ESI + 0x420]     ; 00471a8f
    MOV EAX,dword ptr [ESI + 0x440]     ; 00471a95
    MOV EAX,dword ptr [ESI + 0x460]     ; 00471a9b
    MOV EAX,dword ptr [ESI + 0x480]     ; 00471aa1
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00471aa7
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00471aad
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00471ab3
    MOV EAX,dword ptr [ESI + 0x500]     ; 00471ab9
    MOV EAX,dword ptr [ESI + 0x520]     ; 00471abf
    MOV EAX,dword ptr [ESI + 0x540]     ; 00471ac5
    MOV EAX,dword ptr [ESI + 0x560]     ; 00471acb
    MOV EAX,dword ptr [ESI + 0x580]     ; 00471ad1
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00471ad7
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00471add
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00471ae3
    MOV EAX,dword ptr [ESI + 0x600]     ; 00471ae9
    MOV EAX,dword ptr [ESI + 0x620]     ; 00471aef
    MOV EAX,dword ptr [ESI + 0x640]     ; 00471af5
    MOV EAX,dword ptr [ESI + 0x660]     ; 00471afb
    MOV EAX,dword ptr [ESI + 0x680]     ; 00471b01
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00471b07
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00471b0d
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00471b13
    MOV EAX,dword ptr [ESI + 0x700]     ; 00471b19
    MOV EAX,dword ptr [ESI + 0x720]     ; 00471b1f
    MOV EAX,dword ptr [ESI + 0x740]     ; 00471b25
    MOV EAX,dword ptr [ESI + 0x760]     ; 00471b2b
    MOV EAX,dword ptr [ESI + 0x780]     ; 00471b31
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00471b37
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00471b3d
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00471b43
    MOV EAX,dword ptr [ESI + 0x800]     ; 00471b49
    MOV EAX,dword ptr [ESI + 0x820]     ; 00471b4f
    MOV EAX,dword ptr [ESI + 0x840]     ; 00471b55
    MOV EAX,dword ptr [ESI + 0x860]     ; 00471b5b
    MOV EAX,dword ptr [ESI + 0x880]     ; 00471b61
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00471b67
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00471b6d
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00471b73
    MOV EAX,dword ptr [ESI + 0x900]     ; 00471b79
    MOV EAX,dword ptr [ESI + 0x920]     ; 00471b7f
    MOV EAX,dword ptr [ESI + 0x940]     ; 00471b85
    MOV EAX,dword ptr [ESI + 0x960]     ; 00471b8b
    MOV EAX,dword ptr [ESI + 0x980]     ; 00471b91
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00471b97
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00471b9d
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00471ba3
    MOV EAX,[0x00b9e14c]                ; 00471ba9 | DAT_00b9e14c
    MOV EAX,[0x00b9e16c]                ; 00471bae | DAT_00b9e16c
    MOV EAX,[0x00b9e18c]                ; 00471bb3 | DAT_00b9e18c
    MOV EAX,[0x00b9e1ac]                ; 00471bb8 | DAT_00b9e1ac
    MOV EAX,[0x00b9e1cc]                ; 00471bbd | DAT_00b9e1cc
    MOV EAX,[0x00b9e1ec]                ; 00471bc2 | DAT_00b9e1ec
    MOV EAX,[0x00b9e20c]                ; 00471bc7 | DAT_00b9e20c
    MOV EAX,[0x00b9e22c]                ; 00471bcc | DAT_00b9e22c
    MOV EAX,[0x00b9e24c]                ; 00471bd1 | DAT_00b9e24c
    MOV EAX,[0x00b9e26c]                ; 00471bd6 | DAT_00b9e26c
    MOV EAX,[0x00b9e28c]                ; 00471bdb | DAT_00b9e28c
    MOV EAX,[0x00b9e2ac]                ; 00471be0 | DAT_00b9e2ac
    MOV EAX,[0x00b9e2cc]                ; 00471be5 | DAT_00b9e2cc
    MOV EAX,[0x00b9e2ec]                ; 00471bea | DAT_00b9e2ec
    MOV EAX,[0x00b9e30c]                ; 00471bef | DAT_00b9e30c
    MOV EAX,[0x00b9e32c]                ; 00471bf4 | DAT_00b9e32c
    MOV EAX,[0x00b9e34c]                ; 00471bf9 | DAT_00b9e34c
    MOV EAX,[0x00b9e36c]                ; 00471bfe | DAT_00b9e36c
    MOV EAX,[0x00b9e38c]                ; 00471c03 | DAT_00b9e38c
    MOV EAX,[0x00b9e3ac]                ; 00471c08 | DAT_00b9e3ac
    MOV EAX,[0x00b9e3cc]                ; 00471c0d | DAT_00b9e3cc
    MOV EAX,[0x00b9e3ec]                ; 00471c12 | DAT_00b9e3ec
    MOV EAX,[0x00b9e40c]                ; 00471c17 | DAT_00b9e40c
    MOV EAX,[0x00b9e42c]                ; 00471c1c | DAT_00b9e42c
    MOV EAX,[0x00b9e44c]                ; 00471c21 | DAT_00b9e44c
    MOV EAX,[0x00b9e46c]                ; 00471c26 | DAT_00b9e46c
    MOV EAX,[0x00b9e48c]                ; 00471c2b | DAT_00b9e48c
    MOV EAX,[0x00b9e4ac]                ; 00471c30 | DAT_00b9e4ac
    MOV EAX,[0x00b9e4cc]                ; 00471c35 | DAT_00b9e4cc
    MOV EAX,[0x00b9e4ec]                ; 00471c3a | DAT_00b9e4ec
    MOV EAX,[0x00b9e50c]                ; 00471c3f | DAT_00b9e50c
    MOV EAX,[0x00b9e52c]                ; 00471c44 | DAT_00b9e52c
    MOV EAX,[0x005fa0e0]                ; 00471c49 | DAT_005fa0e0
    MOV EAX,[0x005fa100]                ; 00471c4e | DAT_005fa100
    MOV EAX,[0x005fa120]                ; 00471c53 | DAT_005fa120
    MOV EAX,[0x005fa140]                ; 00471c58 | DAT_005fa140
    MOV EAX,[0x005fa160]                ; 00471c5d | DAT_005fa160
    MOV EAX,[0x005fa180]                ; 00471c62 | DAT_005fa180
    MOV EAX,[0x005fa1a0]                ; 00471c67 | DAT_005fa1a0
    MOV EAX,[0x005fa1c0]                ; 00471c6c | DAT_005fa1c0
    MOV EAX,[0x005fa1e0]                ; 00471c71 | DAT_005fa1e0
    MOV EAX,[0x005fa200]                ; 00471c76 | DAT_005fa200
    MOV EAX,[0x005fa220]                ; 00471c7b | DAT_005fa220
    MOV EAX,[0x005fa240]                ; 00471c80 | DAT_005fa240
    MOV EAX,[0x005fa260]                ; 00471c85 | DAT_005fa260
    MOV EAX,[0x005fa280]                ; 00471c8a | DAT_005fa280
    MOV EAX,[0x005fa2a0]                ; 00471c8f | DAT_005fa2a0
    MOV EAX,[0x005fa2c0]                ; 00471c94 | DAT_005fa2c0
    MOV EAX,[0x005fa2e0]                ; 00471c99 | DAT_005fa2e0
    MOV EAX,[0x005fa300]                ; 00471c9e | DAT_005fa300
    MOV EAX,[0x005fa320]                ; 00471ca3 | DAT_005fa320
    MOV EAX,[0x005fa340]                ; 00471ca8 | DAT_005fa340
    MOV EAX,[0x005fa360]                ; 00471cad | DAT_005fa360
    MOV EAX,[0x005fa380]                ; 00471cb2 | DAT_005fa380
    MOV EAX,[0x005fa3a0]                ; 00471cb7 | DAT_005fa3a0
    MOV EAX,[0x005fa3c0]                ; 00471cbc | DAT_005fa3c0
    MOV EAX,[0x005fa3e0]                ; 00471cc1 | DAT_005fa3e0
    MOV EAX,[0x005fa400]                ; 00471cc6 | DAT_005fa400
    MOV EAX,[0x005fa420]                ; 00471ccb | DAT_005fa420
    MOV EAX,[0x005fa440]                ; 00471cd0 | DAT_005fa440
    MOV EAX,[0x005fa460]                ; 00471cd5 | DAT_005fa460
    MOV EAX,[0x005fa480]                ; 00471cda | DAT_005fa480
    MOV EAX,[0x005fa4a0]                ; 00471cdf | DAT_005fa4a0
    MOV EAX,[0x005fa4c0]                ; 00471ce4 | DAT_005fa4c0
    MOV EAX,[0x005fa4e0]                ; 00471ce9 | DAT_005fa4e0
    MOV EAX,[0x005fa500]                ; 00471cee | DAT_005fa500
    MOV EAX,[0x005fa520]                ; 00471cf3 | DAT_005fa520
    MOV EAX,[0x005fa540]                ; 00471cf8 | DAT_005fa540
    MOV EAX,[0x005fa560]                ; 00471cfd | DAT_005fa560
    MOV EAX,[0x005fa580]                ; 00471d02 | DAT_005fa580
    MOV EAX,[0x005fa5a0]                ; 00471d07 | DAT_005fa5a0
    MOV EAX,[0x005fa5c0]                ; 00471d0c | DAT_005fa5c0
    MOV EAX,[0x005fa5e0]                ; 00471d11 | DAT_005fa5e0
    MOV EAX,[0x005fa600]                ; 00471d16 | DAT_005fa600
    MOV EAX,[0x005fa620]                ; 00471d1b | DAT_005fa620
    MOV EAX,[0x005fa640]                ; 00471d20 | DAT_005fa640
    MOV EAX,[0x005fa660]                ; 00471d25 | DAT_005fa660
    MOV EAX,[0x005fa680]                ; 00471d2a | DAT_005fa680
    MOV EAX,[0x005fa6a0]                ; 00471d2f | DAT_005fa6a0
    MOV EAX,[0x005fa6c0]                ; 00471d34 | DAT_005fa6c0
    MOV EAX,[0x005fa6e0]                ; 00471d39 | DAT_005fa6e0
    MOV EAX,[0x005fa700]                ; 00471d3e | DAT_005fa700
    MOV EAX,[0x005fa720]                ; 00471d43 | DAT_005fa720
    MOV EAX,[0x005fa740]                ; 00471d48 | DAT_005fa740
    MOV EAX,[0x005fa760]                ; 00471d4d | DAT_005fa760
    MOV EAX,[0x005fa780]                ; 00471d52 | DAT_005fa780
    MOV EAX,[0x005fa7a0]                ; 00471d57 | DAT_005fa7a0
    MOV EAX,[0x005fa7c0]                ; 00471d5c | DAT_005fa7c0
    MOV EAX,[0x005fa7e0]                ; 00471d61 | DAT_005fa7e0
    MOV EAX,[0x005fa800]                ; 00471d66 | DAT_005fa800
    MOV EAX,[0x005fa820]                ; 00471d6b | DAT_005fa820
    MOV EAX,[0x005fa840]                ; 00471d70 | DAT_005fa840
    MOV EAX,[0x005fa860]                ; 00471d75 | DAT_005fa860
    MOV EAX,[0x005fa880]                ; 00471d7a | DAT_005fa880
    MOV EAX,[0x005fa8a0]                ; 00471d7f | DAT_005fa8a0
    MOV EAX,[0x005fa8c0]                ; 00471d84 | DAT_005fa8c0
    MOVZX EDX,byte ptr [EBX]            ; 00471d89
        ;   Label: LAB_00471d89
    MOVD MM0,dword ptr [ESI]            ; 00471d8c
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00471d8f | DAT_00b9e14c
    MOVZX EAX,byte ptr [EBP]            ; 00471d97
    PUNPCKLBW MM0,MM7                   ; 00471d9b
    SHR EDX,0x1                         ; 00471d9e
    PUNPCKLBW MM2,MM7                   ; 00471da0
    ADD EAX,EDX                         ; 00471da3
    PMULLW MM0,MM2                      ; 00471da5
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 00471da8 | DAT_005fa0e0
    MOVQ MM2,MM3                        ; 00471db0
    MOVQ MM4,MM5                        ; 00471db3
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00471db6 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 00471dbd
    PMULHW MM4,MM3                      ; 00471dc0
    PADDW MM0,MM4                       ; 00471dc3
    PADDW MM0,qword ptr [0x005f8b68]    ; 00471dc6 | DAT_005f8b68
    PSRLW MM0,0x4                       ; 00471dcd
    PACKUSWB MM0,MM7                    ; 00471dd1
    MOVD dword ptr [EDI],MM0            ; 00471dd4
    ADD ESI,0x4                         ; 00471dd7
    INC EBX                             ; 00471dda
    INC EBP                             ; 00471ddb
    ADD EDI,0x4                         ; 00471ddc
    MOVZX EDX,byte ptr [EBX]            ; 00471ddf
    MOVD MM0,dword ptr [ESI]            ; 00471de2
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00471de5 | DAT_00b9e14c
    MOVZX EAX,byte ptr [EBP]            ; 00471ded
    PUNPCKLBW MM0,MM7                   ; 00471df1
    SHR EDX,0x1                         ; 00471df4
    PUNPCKLBW MM2,MM7                   ; 00471df6
    ADD EAX,EDX                         ; 00471df9
    PMULLW MM0,MM2                      ; 00471dfb
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 00471dfe | DAT_005fa0e0
    MOVQ MM2,MM3                        ; 00471e06
    MOVQ MM4,MM5                        ; 00471e09
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00471e0c | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 00471e13
    PMULHW MM4,MM3                      ; 00471e16
    PADDW MM0,MM4                       ; 00471e19
    PADDW MM0,qword ptr [0x005f8b70]    ; 00471e1c | DAT_005f8b70
    PSRLW MM0,0x4                       ; 00471e23
    PACKUSWB MM0,MM7                    ; 00471e27
    MOVD dword ptr [EDI],MM0            ; 00471e2a
    ADD ESI,0x4                         ; 00471e2d
    INC EBX                             ; 00471e30
    INC EBP                             ; 00471e31
    ADD EDI,0x4                         ; 00471e32
    SUB ECX,0x2                         ; 00471e35
    JG 0x00471d89                       ; 00471e38
        ;   XREF to: 00471d89 (CONDITIONAL_JUMP)  ; LAB_00471d89
    POP EBP                             ; 00471e3e
    EMMS                                ; 00471e3f
    POP EDI                             ; 00471e41
    POP ESI                             ; 00471e42
    LEAVE                               ; 00471e43
    RET                                 ; 00471e44

