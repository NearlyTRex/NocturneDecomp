; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00470a2c(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020 at 00450350
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

    PUSH EBP                            ; 00470a2c
        ;   Label: core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00470a2c
    MOV EBP,ESP                         ; 00470a2d
    PUSH ESI                            ; 00470a2f
    PUSH EDI                            ; 00470a30
    PUSH EBP                            ; 00470a31
    MOV ECX,dword ptr [EBP + 0x18]      ; 00470a32
    MOV EDI,dword ptr [EBP + 0x8]       ; 00470a35
    MOV ESI,dword ptr [EBP + 0xc]       ; 00470a38
    MOV EBX,dword ptr [EBP + 0x10]      ; 00470a3b
    MOV EBP,dword ptr [EBP + 0x14]      ; 00470a3e
    PXOR MM7,MM7                        ; 00470a41
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 00470a44 | DAT_01c6e2bc
    PUNPCKLBW MM5,MM7                   ; 00470a4b
    PSLLW MM5,0x6                       ; 00470a4e
    MOV EAX,dword ptr [EBX]             ; 00470a52
    MOV EAX,dword ptr [EBX + 0x20]      ; 00470a54
    MOV EAX,dword ptr [EBX + 0x40]      ; 00470a57
    MOV EAX,dword ptr [EBX + 0x60]      ; 00470a5a
    MOV EAX,dword ptr [EBX + 0x80]      ; 00470a5d
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00470a63
    MOV EAX,dword ptr [EBX + 0xc0]      ; 00470a69
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00470a6f
    MOV EAX,dword ptr [EBX + 0x100]     ; 00470a75
    MOV EAX,dword ptr [EBX + 0x120]     ; 00470a7b
    MOV EDX,dword ptr [EBP]             ; 00470a81
    MOV EDX,dword ptr [EBP + 0x20]      ; 00470a84
    MOV EDX,dword ptr [EBP + 0x40]      ; 00470a87
    MOV EDX,dword ptr [EBP + 0x60]      ; 00470a8a
    MOV EDX,dword ptr [EBP + 0x80]      ; 00470a8d
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00470a93
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00470a99
    MOV EDX,dword ptr [EBP + 0xe0]      ; 00470a9f
    MOV EDX,dword ptr [EBP + 0x100]     ; 00470aa5
    MOV EDX,dword ptr [EBP + 0x120]     ; 00470aab
    MOV EAX,dword ptr [ESI]             ; 00470ab1
    MOV EAX,dword ptr [ESI + 0x20]      ; 00470ab3
    MOV EAX,dword ptr [ESI + 0x40]      ; 00470ab6
    MOV EAX,dword ptr [ESI + 0x60]      ; 00470ab9
    MOV EAX,dword ptr [ESI + 0x80]      ; 00470abc
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00470ac2
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00470ac8
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00470ace
    MOV EAX,dword ptr [ESI + 0x100]     ; 00470ad4
    MOV EAX,dword ptr [ESI + 0x120]     ; 00470ada
    MOV EAX,dword ptr [ESI + 0x140]     ; 00470ae0
    MOV EAX,dword ptr [ESI + 0x160]     ; 00470ae6
    MOV EAX,dword ptr [ESI + 0x180]     ; 00470aec
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00470af2
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00470af8
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00470afe
    MOV EAX,dword ptr [ESI + 0x200]     ; 00470b04
    MOV EAX,dword ptr [ESI + 0x220]     ; 00470b0a
    MOV EAX,dword ptr [ESI + 0x240]     ; 00470b10
    MOV EAX,dword ptr [ESI + 0x260]     ; 00470b16
    MOV EAX,dword ptr [ESI + 0x280]     ; 00470b1c
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00470b22
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00470b28
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00470b2e
    MOV EAX,dword ptr [ESI + 0x300]     ; 00470b34
    MOV EAX,dword ptr [ESI + 0x320]     ; 00470b3a
    MOV EAX,dword ptr [ESI + 0x340]     ; 00470b40
    MOV EAX,dword ptr [ESI + 0x360]     ; 00470b46
    MOV EAX,dword ptr [ESI + 0x380]     ; 00470b4c
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00470b52
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00470b58
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00470b5e
    MOV EAX,dword ptr [ESI + 0x400]     ; 00470b64
    MOV EAX,dword ptr [ESI + 0x420]     ; 00470b6a
    MOV EAX,dword ptr [ESI + 0x440]     ; 00470b70
    MOV EAX,dword ptr [ESI + 0x460]     ; 00470b76
    MOV EAX,dword ptr [ESI + 0x480]     ; 00470b7c
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00470b82
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00470b88
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00470b8e
    MOV EAX,dword ptr [ESI + 0x500]     ; 00470b94
    MOV EAX,dword ptr [ESI + 0x520]     ; 00470b9a
    MOV EAX,dword ptr [ESI + 0x540]     ; 00470ba0
    MOV EAX,dword ptr [ESI + 0x560]     ; 00470ba6
    MOV EAX,dword ptr [ESI + 0x580]     ; 00470bac
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00470bb2
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00470bb8
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00470bbe
    MOV EAX,dword ptr [ESI + 0x600]     ; 00470bc4
    MOV EAX,dword ptr [ESI + 0x620]     ; 00470bca
    MOV EAX,dword ptr [ESI + 0x640]     ; 00470bd0
    MOV EAX,dword ptr [ESI + 0x660]     ; 00470bd6
    MOV EAX,dword ptr [ESI + 0x680]     ; 00470bdc
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00470be2
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00470be8
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00470bee
    MOV EAX,dword ptr [ESI + 0x700]     ; 00470bf4
    MOV EAX,dword ptr [ESI + 0x720]     ; 00470bfa
    MOV EAX,dword ptr [ESI + 0x740]     ; 00470c00
    MOV EAX,dword ptr [ESI + 0x760]     ; 00470c06
    MOV EAX,dword ptr [ESI + 0x780]     ; 00470c0c
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00470c12
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00470c18
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00470c1e
    MOV EAX,dword ptr [ESI + 0x800]     ; 00470c24
    MOV EAX,dword ptr [ESI + 0x820]     ; 00470c2a
    MOV EAX,dword ptr [ESI + 0x840]     ; 00470c30
    MOV EAX,dword ptr [ESI + 0x860]     ; 00470c36
    MOV EAX,dword ptr [ESI + 0x880]     ; 00470c3c
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00470c42
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00470c48
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00470c4e
    MOV EAX,dword ptr [ESI + 0x900]     ; 00470c54
    MOV EAX,dword ptr [ESI + 0x920]     ; 00470c5a
    MOV EAX,dword ptr [ESI + 0x940]     ; 00470c60
    MOV EAX,dword ptr [ESI + 0x960]     ; 00470c66
    MOV EAX,dword ptr [ESI + 0x980]     ; 00470c6c
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00470c72
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00470c78
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00470c7e
    MOV EAX,[0x00b9e14c]                ; 00470c84 | DAT_00b9e14c
    MOV EAX,[0x00b9e16c]                ; 00470c89 | DAT_00b9e16c
    MOV EAX,[0x00b9e18c]                ; 00470c8e | DAT_00b9e18c
    MOV EAX,[0x00b9e1ac]                ; 00470c93 | DAT_00b9e1ac
    MOV EAX,[0x00b9e1cc]                ; 00470c98 | DAT_00b9e1cc
    MOV EAX,[0x00b9e1ec]                ; 00470c9d | DAT_00b9e1ec
    MOV EAX,[0x00b9e20c]                ; 00470ca2 | DAT_00b9e20c
    MOV EAX,[0x00b9e22c]                ; 00470ca7 | DAT_00b9e22c
    MOV EAX,[0x00b9e24c]                ; 00470cac | DAT_00b9e24c
    MOV EAX,[0x00b9e26c]                ; 00470cb1 | DAT_00b9e26c
    MOV EAX,[0x00b9e28c]                ; 00470cb6 | DAT_00b9e28c
    MOV EAX,[0x00b9e2ac]                ; 00470cbb | DAT_00b9e2ac
    MOV EAX,[0x00b9e2cc]                ; 00470cc0 | DAT_00b9e2cc
    MOV EAX,[0x00b9e2ec]                ; 00470cc5 | DAT_00b9e2ec
    MOV EAX,[0x00b9e30c]                ; 00470cca | DAT_00b9e30c
    MOV EAX,[0x00b9e32c]                ; 00470ccf | DAT_00b9e32c
    MOV EAX,[0x00b9e34c]                ; 00470cd4 | DAT_00b9e34c
    MOV EAX,[0x00b9e36c]                ; 00470cd9 | DAT_00b9e36c
    MOV EAX,[0x00b9e38c]                ; 00470cde | DAT_00b9e38c
    MOV EAX,[0x00b9e3ac]                ; 00470ce3 | DAT_00b9e3ac
    MOV EAX,[0x00b9e3cc]                ; 00470ce8 | DAT_00b9e3cc
    MOV EAX,[0x00b9e3ec]                ; 00470ced | DAT_00b9e3ec
    MOV EAX,[0x00b9e40c]                ; 00470cf2 | DAT_00b9e40c
    MOV EAX,[0x00b9e42c]                ; 00470cf7 | DAT_00b9e42c
    MOV EAX,[0x00b9e44c]                ; 00470cfc | DAT_00b9e44c
    MOV EAX,[0x00b9e46c]                ; 00470d01 | DAT_00b9e46c
    MOV EAX,[0x00b9e48c]                ; 00470d06 | DAT_00b9e48c
    MOV EAX,[0x00b9e4ac]                ; 00470d0b | DAT_00b9e4ac
    MOV EAX,[0x00b9e4cc]                ; 00470d10 | DAT_00b9e4cc
    MOV EAX,[0x00b9e4ec]                ; 00470d15 | DAT_00b9e4ec
    MOV EAX,[0x00b9e50c]                ; 00470d1a | DAT_00b9e50c
    MOV EAX,[0x00b9e52c]                ; 00470d1f | DAT_00b9e52c
    MOV EAX,[0x005fa0e0]                ; 00470d24 | DAT_005fa0e0
    MOV EAX,[0x005fa100]                ; 00470d29 | DAT_005fa100
    MOV EAX,[0x005fa120]                ; 00470d2e | DAT_005fa120
    MOV EAX,[0x005fa140]                ; 00470d33 | DAT_005fa140
    MOV EAX,[0x005fa160]                ; 00470d38 | DAT_005fa160
    MOV EAX,[0x005fa180]                ; 00470d3d | DAT_005fa180
    MOV EAX,[0x005fa1a0]                ; 00470d42 | DAT_005fa1a0
    MOV EAX,[0x005fa1c0]                ; 00470d47 | DAT_005fa1c0
    MOV EAX,[0x005fa1e0]                ; 00470d4c | DAT_005fa1e0
    MOV EAX,[0x005fa200]                ; 00470d51 | DAT_005fa200
    MOV EAX,[0x005fa220]                ; 00470d56 | DAT_005fa220
    MOV EAX,[0x005fa240]                ; 00470d5b | DAT_005fa240
    MOV EAX,[0x005fa260]                ; 00470d60 | DAT_005fa260
    MOV EAX,[0x005fa280]                ; 00470d65 | DAT_005fa280
    MOV EAX,[0x005fa2a0]                ; 00470d6a | DAT_005fa2a0
    MOV EAX,[0x005fa2c0]                ; 00470d6f | DAT_005fa2c0
    MOV EAX,[0x005fa2e0]                ; 00470d74 | DAT_005fa2e0
    MOV EAX,[0x005fa300]                ; 00470d79 | DAT_005fa300
    MOV EAX,[0x005fa320]                ; 00470d7e | DAT_005fa320
    MOV EAX,[0x005fa340]                ; 00470d83 | DAT_005fa340
    MOV EAX,[0x005fa360]                ; 00470d88 | DAT_005fa360
    MOV EAX,[0x005fa380]                ; 00470d8d | DAT_005fa380
    MOV EAX,[0x005fa3a0]                ; 00470d92 | DAT_005fa3a0
    MOV EAX,[0x005fa3c0]                ; 00470d97 | DAT_005fa3c0
    MOV EAX,[0x005fa3e0]                ; 00470d9c | DAT_005fa3e0
    MOV EAX,[0x005fa400]                ; 00470da1 | DAT_005fa400
    MOV EAX,[0x005fa420]                ; 00470da6 | DAT_005fa420
    MOV EAX,[0x005fa440]                ; 00470dab | DAT_005fa440
    MOV EAX,[0x005fa460]                ; 00470db0 | DAT_005fa460
    MOV EAX,[0x005fa480]                ; 00470db5 | DAT_005fa480
    MOV EAX,[0x005fa4a0]                ; 00470dba | DAT_005fa4a0
    MOV EAX,[0x005fa4c0]                ; 00470dbf | DAT_005fa4c0
    MOV EAX,[0x005fa4e0]                ; 00470dc4 | DAT_005fa4e0
    MOV EAX,[0x005fa500]                ; 00470dc9 | DAT_005fa500
    MOV EAX,[0x005fa520]                ; 00470dce | DAT_005fa520
    MOV EAX,[0x005fa540]                ; 00470dd3 | DAT_005fa540
    MOV EAX,[0x005fa560]                ; 00470dd8 | DAT_005fa560
    MOV EAX,[0x005fa580]                ; 00470ddd | DAT_005fa580
    MOV EAX,[0x005fa5a0]                ; 00470de2 | DAT_005fa5a0
    MOV EAX,[0x005fa5c0]                ; 00470de7 | DAT_005fa5c0
    MOV EAX,[0x005fa5e0]                ; 00470dec | DAT_005fa5e0
    MOV EAX,[0x005fa600]                ; 00470df1 | DAT_005fa600
    MOV EAX,[0x005fa620]                ; 00470df6 | DAT_005fa620
    MOV EAX,[0x005fa640]                ; 00470dfb | DAT_005fa640
    MOV EAX,[0x005fa660]                ; 00470e00 | DAT_005fa660
    MOV EAX,[0x005fa680]                ; 00470e05 | DAT_005fa680
    MOV EAX,[0x005fa6a0]                ; 00470e0a | DAT_005fa6a0
    MOV EAX,[0x005fa6c0]                ; 00470e0f | DAT_005fa6c0
    MOV EAX,[0x005fa6e0]                ; 00470e14 | DAT_005fa6e0
    MOV EAX,[0x005fa700]                ; 00470e19 | DAT_005fa700
    MOV EAX,[0x005fa720]                ; 00470e1e | DAT_005fa720
    MOV EAX,[0x005fa740]                ; 00470e23 | DAT_005fa740
    MOV EAX,[0x005fa760]                ; 00470e28 | DAT_005fa760
    MOV EAX,[0x005fa780]                ; 00470e2d | DAT_005fa780
    MOV EAX,[0x005fa7a0]                ; 00470e32 | DAT_005fa7a0
    MOV EAX,[0x005fa7c0]                ; 00470e37 | DAT_005fa7c0
    MOV EAX,[0x005fa7e0]                ; 00470e3c | DAT_005fa7e0
    MOV EAX,[0x005fa800]                ; 00470e41 | DAT_005fa800
    MOV EAX,[0x005fa820]                ; 00470e46 | DAT_005fa820
    MOV EAX,[0x005fa840]                ; 00470e4b | DAT_005fa840
    MOV EAX,[0x005fa860]                ; 00470e50 | DAT_005fa860
    MOV EAX,[0x005fa880]                ; 00470e55 | DAT_005fa880
    MOV EAX,[0x005fa8a0]                ; 00470e5a | DAT_005fa8a0
    MOV EAX,[0x005fa8c0]                ; 00470e5f | DAT_005fa8c0
    JMP 0x00470e70                      ; 00470e64
        ;   XREF to: 00470e70 (UNCONDITIONAL_JUMP)  ; LAB_00470e70
    MOVZX EDX,byte ptr [EBX]            ; 00470e70
        ;   Label: LAB_00470e70
    MOVQ MM0,qword ptr [ESI]            ; 00470e73
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00470e76 | DAT_00b9e14c
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 00470e7e
    MOVZX EAX,byte ptr [EBP]            ; 00470e82
    MOVD MM6,dword ptr [EDX*0x4 + 0xb9e14c] ; 00470e86 | DAT_00b9e14c
    MOVQ MM1,MM0                        ; 00470e8e
    PUNPCKLBW MM6,MM7                   ; 00470e91
    PUNPCKLBW MM0,MM7                   ; 00470e94
    SHR EDX,0x1                         ; 00470e97
    PSRLQ MM1,0x20                      ; 00470e99
    PUNPCKLBW MM2,MM7                   ; 00470e9d
    ADD EAX,EDX                         ; 00470ea0
    PADDW MM6,MM2                       ; 00470ea2
    PUNPCKLBW MM1,MM7                   ; 00470ea5
    PMULLW MM0,MM2                      ; 00470ea8
    PSRLW MM6,0x1                       ; 00470eab
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 00470eaf | DAT_005fa0e0
    PMULLW MM1,MM6                      ; 00470eb7
    MOVQ MM2,MM3                        ; 00470eba
    MOVQ MM4,MM5                        ; 00470ebd
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00470ec0 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 00470ec7
    PMULHW MM1,MM2                      ; 00470eca
    PMULHW MM4,MM3                      ; 00470ecd
    PADDW MM0,MM4                       ; 00470ed0
    PADDW MM1,MM4                       ; 00470ed3
    PADDW MM0,qword ptr [0x005f8b68]    ; 00470ed6 | DAT_005f8b68
    PADDW MM1,qword ptr [0x005f8b70]    ; 00470edd | DAT_005f8b70
    PSRLW MM0,0x4                       ; 00470ee4
    PSRLW MM1,0x4                       ; 00470ee8
    PACKUSWB MM0,MM1                    ; 00470eec
    ADD ESI,0x8                         ; 00470eef
    INC EBX                             ; 00470ef2
    INC EBP                             ; 00470ef3
    MOVQ qword ptr [EDI],MM0            ; 00470ef4
    ADD EDI,0x8                         ; 00470ef7
    SUB ECX,0x2                         ; 00470efa
    JG 0x00470e70                       ; 00470efd
        ;   XREF to: 00470e70 (CONDITIONAL_JUMP)  ; LAB_00470e70
    POP EBP                             ; 00470f03
    EMMS                                ; 00470f04
    POP EDI                             ; 00470f06
    POP ESI                             ; 00470f07
    LEAVE                               ; 00470f08
    RET                                 ; 00470f09

