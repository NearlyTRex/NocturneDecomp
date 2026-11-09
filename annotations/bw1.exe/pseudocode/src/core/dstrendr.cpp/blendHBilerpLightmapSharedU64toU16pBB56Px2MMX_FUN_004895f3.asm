; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_004895f3(uint *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0 at 0045409a
;
; Referenced Globals:
;   undefined8 DAT_00618608
;   undefined8 DAT_00618610
;   undefined4 DAT_00619b60
;   undefined4 DAT_00619b80
;   undefined4 DAT_00619ba0
;   undefined4 DAT_00619bc0
;   undefined4 DAT_00619be0
;   undefined4 DAT_00619c00
;   undefined4 DAT_00619c20
;   undefined4 DAT_00619c40
;   undefined4 DAT_00619c60
;   undefined4 DAT_00619c80
;   undefined4 DAT_00619ca0
;   undefined4 DAT_00619cc0
;   undefined4 DAT_00619ce0
;   ... and 91 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004895f3
        ;   Label: core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_004895f3
    MOV EBP,ESP                         ; 004895f4
    PUSH ESI                            ; 004895f6
    PUSH EDI                            ; 004895f7
    PUSH EBP                            ; 004895f8
    MOV ECX,dword ptr [EBP + 0x18]      ; 004895f9
    MOV EDI,dword ptr [EBP + 0x8]       ; 004895fc
    MOV ESI,dword ptr [EBP + 0xc]       ; 004895ff
    MOV EBX,dword ptr [EBP + 0x10]      ; 00489602
    MOV EBP,dword ptr [EBP + 0x14]      ; 00489605
    PXOR MM7,MM7                        ; 00489608
    MOVD MM5,dword ptr [0x01c51d1c]     ; 0048960b | DAT_01c51d1c
    PUNPCKLBW MM5,MM7                   ; 00489612
    PSLLW MM5,0x6                       ; 00489615
    MOV EAX,dword ptr [EBX]             ; 00489619
    MOV EAX,dword ptr [EBX + 0x20]      ; 0048961b
    MOV EAX,dword ptr [EBX + 0x40]      ; 0048961e
    MOV EAX,dword ptr [EBX + 0x60]      ; 00489621
    MOV EAX,dword ptr [EBX + 0x80]      ; 00489624
    MOV EAX,dword ptr [EBX + 0xa0]      ; 0048962a
    MOV EAX,dword ptr [EBX + 0xc0]      ; 00489630
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00489636
    MOV EAX,dword ptr [EBX + 0x100]     ; 0048963c
    MOV EAX,dword ptr [EBX + 0x120]     ; 00489642
    MOV EDX,dword ptr [EBP]             ; 00489648
    MOV EDX,dword ptr [EBP + 0x20]      ; 0048964b
    MOV EDX,dword ptr [EBP + 0x40]      ; 0048964e
    MOV EDX,dword ptr [EBP + 0x60]      ; 00489651
    MOV EDX,dword ptr [EBP + 0x80]      ; 00489654
    MOV EDX,dword ptr [EBP + 0xa0]      ; 0048965a
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00489660
    MOV EDX,dword ptr [EBP + 0xe0]      ; 00489666
    MOV EDX,dword ptr [EBP + 0x100]     ; 0048966c
    MOV EDX,dword ptr [EBP + 0x120]     ; 00489672
    MOV EAX,dword ptr [ESI]             ; 00489678
    MOV EAX,dword ptr [ESI + 0x20]      ; 0048967a
    MOV EAX,dword ptr [ESI + 0x40]      ; 0048967d
    MOV EAX,dword ptr [ESI + 0x60]      ; 00489680
    MOV EAX,dword ptr [ESI + 0x80]      ; 00489683
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00489689
    MOV EAX,dword ptr [ESI + 0xc0]      ; 0048968f
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00489695
    MOV EAX,dword ptr [ESI + 0x100]     ; 0048969b
    MOV EAX,dword ptr [ESI + 0x120]     ; 004896a1
    MOV EAX,dword ptr [ESI + 0x140]     ; 004896a7
    MOV EAX,dword ptr [ESI + 0x160]     ; 004896ad
    MOV EAX,dword ptr [ESI + 0x180]     ; 004896b3
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 004896b9
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 004896bf
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 004896c5
    MOV EAX,dword ptr [ESI + 0x200]     ; 004896cb
    MOV EAX,dword ptr [ESI + 0x220]     ; 004896d1
    MOV EAX,dword ptr [ESI + 0x240]     ; 004896d7
    MOV EAX,dword ptr [ESI + 0x260]     ; 004896dd
    MOV EAX,dword ptr [ESI + 0x280]     ; 004896e3
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 004896e9
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 004896ef
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 004896f5
    MOV EAX,dword ptr [ESI + 0x300]     ; 004896fb
    MOV EAX,dword ptr [ESI + 0x320]     ; 00489701
    MOV EAX,dword ptr [ESI + 0x340]     ; 00489707
    MOV EAX,dword ptr [ESI + 0x360]     ; 0048970d
    MOV EAX,dword ptr [ESI + 0x380]     ; 00489713
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00489719
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0048971f
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00489725
    MOV EAX,dword ptr [ESI + 0x400]     ; 0048972b
    MOV EAX,dword ptr [ESI + 0x420]     ; 00489731
    MOV EAX,dword ptr [ESI + 0x440]     ; 00489737
    MOV EAX,dword ptr [ESI + 0x460]     ; 0048973d
    MOV EAX,dword ptr [ESI + 0x480]     ; 00489743
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00489749
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 0048974f
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00489755
    MOV EAX,dword ptr [ESI + 0x500]     ; 0048975b
    MOV EAX,dword ptr [ESI + 0x520]     ; 00489761
    MOV EAX,dword ptr [ESI + 0x540]     ; 00489767
    MOV EAX,dword ptr [ESI + 0x560]     ; 0048976d
    MOV EAX,dword ptr [ESI + 0x580]     ; 00489773
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00489779
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 0048977f
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00489785
    MOV EAX,dword ptr [ESI + 0x600]     ; 0048978b
    MOV EAX,dword ptr [ESI + 0x620]     ; 00489791
    MOV EAX,dword ptr [ESI + 0x640]     ; 00489797
    MOV EAX,dword ptr [ESI + 0x660]     ; 0048979d
    MOV EAX,dword ptr [ESI + 0x680]     ; 004897a3
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 004897a9
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 004897af
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 004897b5
    MOV EAX,dword ptr [ESI + 0x700]     ; 004897bb
    MOV EAX,dword ptr [ESI + 0x720]     ; 004897c1
    MOV EAX,dword ptr [ESI + 0x740]     ; 004897c7
    MOV EAX,dword ptr [ESI + 0x760]     ; 004897cd
    MOV EAX,dword ptr [ESI + 0x780]     ; 004897d3
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 004897d9
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 004897df
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 004897e5
    MOV EAX,dword ptr [ESI + 0x800]     ; 004897eb
    MOV EAX,dword ptr [ESI + 0x820]     ; 004897f1
    MOV EAX,dword ptr [ESI + 0x840]     ; 004897f7
    MOV EAX,dword ptr [ESI + 0x860]     ; 004897fd
    MOV EAX,dword ptr [ESI + 0x880]     ; 00489803
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00489809
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 0048980f
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00489815
    MOV EAX,dword ptr [ESI + 0x900]     ; 0048981b
    MOV EAX,dword ptr [ESI + 0x920]     ; 00489821
    MOV EAX,dword ptr [ESI + 0x940]     ; 00489827
    MOV EAX,dword ptr [ESI + 0x960]     ; 0048982d
    MOV EAX,dword ptr [ESI + 0x980]     ; 00489833
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00489839
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 0048983f
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00489845
    MOV EAX,[0x00b8189c]                ; 0048984b | DAT_00b8189c
    MOV EAX,[0x00b818bc]                ; 00489850 | DAT_00b818bc
    MOV EAX,[0x00b818dc]                ; 00489855 | DAT_00b818dc
    MOV EAX,[0x00b818fc]                ; 0048985a | DAT_00b818fc
    MOV EAX,[0x00b8191c]                ; 0048985f | DAT_00b8191c
    MOV EAX,[0x00b8193c]                ; 00489864 | DAT_00b8193c
    MOV EAX,[0x00b8195c]                ; 00489869 | DAT_00b8195c
    MOV EAX,[0x00b8197c]                ; 0048986e | DAT_00b8197c
    MOV EAX,[0x00b8199c]                ; 00489873 | DAT_00b8199c
    MOV EAX,[0x00b819bc]                ; 00489878 | DAT_00b819bc
    MOV EAX,[0x00b819dc]                ; 0048987d | DAT_00b819dc
    MOV EAX,[0x00b819fc]                ; 00489882 | DAT_00b819fc
    MOV EAX,[0x00b81a1c]                ; 00489887 | DAT_00b81a1c
    MOV EAX,[0x00b81a3c]                ; 0048988c | DAT_00b81a3c
    MOV EAX,[0x00b81a5c]                ; 00489891 | DAT_00b81a5c
    MOV EAX,[0x00b81a7c]                ; 00489896 | DAT_00b81a7c
    MOV EAX,[0x00b81a9c]                ; 0048989b | DAT_00b81a9c
    MOV EAX,[0x00b81abc]                ; 004898a0 | DAT_00b81abc
    MOV EAX,[0x00b81adc]                ; 004898a5 | DAT_00b81adc
    MOV EAX,[0x00b81afc]                ; 004898aa | DAT_00b81afc
    MOV EAX,[0x00b81b1c]                ; 004898af | DAT_00b81b1c
    MOV EAX,[0x00b81b3c]                ; 004898b4 | DAT_00b81b3c
    MOV EAX,[0x00b81b5c]                ; 004898b9 | DAT_00b81b5c
    MOV EAX,[0x00b81b7c]                ; 004898be | DAT_00b81b7c
    MOV EAX,[0x00b81b9c]                ; 004898c3 | DAT_00b81b9c
    MOV EAX,[0x00b81bbc]                ; 004898c8 | DAT_00b81bbc
    MOV EAX,[0x00b81bdc]                ; 004898cd | DAT_00b81bdc
    MOV EAX,[0x00b81bfc]                ; 004898d2 | DAT_00b81bfc
    MOV EAX,[0x00b81c1c]                ; 004898d7 | DAT_00b81c1c
    MOV EAX,[0x00b81c3c]                ; 004898dc | DAT_00b81c3c
    MOV EAX,[0x00b81c5c]                ; 004898e1 | DAT_00b81c5c
    MOV EAX,[0x00b81c7c]                ; 004898e6 | DAT_00b81c7c
    MOV EAX,[0x00619b60]                ; 004898eb | DAT_00619b60
    MOV EAX,[0x00619b80]                ; 004898f0 | DAT_00619b80
    MOV EAX,[0x00619ba0]                ; 004898f5 | DAT_00619ba0
    MOV EAX,[0x00619bc0]                ; 004898fa | DAT_00619bc0
    MOV EAX,[0x00619be0]                ; 004898ff | DAT_00619be0
    MOV EAX,[0x00619c00]                ; 00489904 | DAT_00619c00
    MOV EAX,[0x00619c20]                ; 00489909 | DAT_00619c20
    MOV EAX,[0x00619c40]                ; 0048990e | DAT_00619c40
    MOV EAX,[0x00619c60]                ; 00489913 | DAT_00619c60
    MOV EAX,[0x00619c80]                ; 00489918 | DAT_00619c80
    MOV EAX,[0x00619ca0]                ; 0048991d | DAT_00619ca0
    MOV EAX,[0x00619cc0]                ; 00489922 | DAT_00619cc0
    MOV EAX,[0x00619ce0]                ; 00489927 | DAT_00619ce0
    MOV EAX,[0x00619d00]                ; 0048992c | DAT_00619d00
    MOV EAX,[0x00619d20]                ; 00489931 | DAT_00619d20
    MOV EAX,[0x00619d40]                ; 00489936 | DAT_00619d40
    MOV EAX,[0x00619d60]                ; 0048993b | DAT_00619d60
    MOV EAX,[0x00619d80]                ; 00489940 | DAT_00619d80
    MOV EAX,[0x00619da0]                ; 00489945 | DAT_00619da0
    MOV EAX,[0x00619dc0]                ; 0048994a | DAT_00619dc0
    MOV EAX,[0x00619de0]                ; 0048994f | DAT_00619de0
    MOV EAX,[0x00619e00]                ; 00489954 | DAT_00619e00
    MOV EAX,[0x00619e20]                ; 00489959 | DAT_00619e20
    MOV EAX,[0x00619e40]                ; 0048995e | DAT_00619e40
    MOV EAX,[0x00619e60]                ; 00489963 | DAT_00619e60
    MOV EAX,[0x00619e80]                ; 00489968 | DAT_00619e80
    MOV EAX,[0x00619ea0]                ; 0048996d | DAT_00619ea0
    MOV EAX,[0x00619ec0]                ; 00489972 | DAT_00619ec0
    MOV EAX,[0x00619ee0]                ; 00489977 | DAT_00619ee0
    MOV EAX,[0x00619f00]                ; 0048997c | DAT_00619f00
    MOV EAX,[0x00619f20]                ; 00489981 | DAT_00619f20
    MOV EAX,[0x00619f40]                ; 00489986 | DAT_00619f40
    MOV EAX,[0x00619f60]                ; 0048998b | DAT_00619f60
    MOV EAX,[0x00619f80]                ; 00489990 | DAT_00619f80
    MOV EAX,[0x00619fa0]                ; 00489995 | DAT_00619fa0
    MOV EAX,[0x00619fc0]                ; 0048999a | DAT_00619fc0
    MOV EAX,[0x00619fe0]                ; 0048999f | DAT_00619fe0
    MOV EAX,[0x0061a000]                ; 004899a4 | DAT_0061a000
    MOV EAX,[0x0061a020]                ; 004899a9 | DAT_0061a020
    MOV EAX,[0x0061a040]                ; 004899ae | DAT_0061a040
    MOV EAX,[0x0061a060]                ; 004899b3 | DAT_0061a060
    MOV EAX,[0x0061a080]                ; 004899b8 | DAT_0061a080
    MOV EAX,[0x0061a0a0]                ; 004899bd | DAT_0061a0a0
    MOV EAX,[0x0061a0c0]                ; 004899c2 | DAT_0061a0c0
    MOV EAX,[0x0061a0e0]                ; 004899c7 | DAT_0061a0e0
    MOV EAX,[0x0061a100]                ; 004899cc | DAT_0061a100
    MOV EAX,[0x0061a120]                ; 004899d1 | DAT_0061a120
    MOV EAX,[0x0061a140]                ; 004899d6 | DAT_0061a140
    MOV EAX,[0x0061a160]                ; 004899db | DAT_0061a160
    MOV EAX,[0x0061a180]                ; 004899e0 | DAT_0061a180
    MOV EAX,[0x0061a1a0]                ; 004899e5 | DAT_0061a1a0
    MOV EAX,[0x0061a1c0]                ; 004899ea | DAT_0061a1c0
    MOV EAX,[0x0061a1e0]                ; 004899ef | DAT_0061a1e0
    MOV EAX,[0x0061a200]                ; 004899f4 | DAT_0061a200
    MOV EAX,[0x0061a220]                ; 004899f9 | DAT_0061a220
    MOV EAX,[0x0061a240]                ; 004899fe | DAT_0061a240
    MOV EAX,[0x0061a260]                ; 00489a03 | DAT_0061a260
    MOV EAX,[0x0061a280]                ; 00489a08 | DAT_0061a280
    MOV EAX,[0x0061a2a0]                ; 00489a0d | DAT_0061a2a0
    MOV EAX,[0x0061a2c0]                ; 00489a12 | DAT_0061a2c0
    MOV EAX,[0x0061a2e0]                ; 00489a17 | DAT_0061a2e0
    MOV EAX,[0x0061a300]                ; 00489a1c | DAT_0061a300
    MOV EAX,[0x0061a320]                ; 00489a21 | DAT_0061a320
    MOV EAX,[0x0061a340]                ; 00489a26 | DAT_0061a340
    JMP 0x00489a30                      ; 00489a2b
        ;   XREF to: 00489a30 (UNCONDITIONAL_JUMP)  ; LAB_00489a30
    MOVZX EDX,byte ptr [EBX]            ; 00489a30
        ;   Label: LAB_00489a30
    MOVQ MM0,qword ptr [ESI]            ; 00489a33
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 00489a36 | DAT_00b8189c
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 00489a3e
    MOVZX EAX,byte ptr [EBP]            ; 00489a42
    MOVD MM6,dword ptr [EDX*0x4 + 0xb8189c] ; 00489a46 | DAT_00b8189c
    MOVQ MM1,MM0                        ; 00489a4e
    PUNPCKLBW MM6,MM7                   ; 00489a51
    PUNPCKLBW MM0,MM7                   ; 00489a54
    SHR EDX,0x1                         ; 00489a57
    PSRLQ MM1,0x20                      ; 00489a59
    PUNPCKLBW MM2,MM7                   ; 00489a5d
    ADD EAX,EDX                         ; 00489a60
    PADDW MM6,MM2                       ; 00489a62
    PUNPCKLBW MM1,MM7                   ; 00489a65
    PMULLW MM0,MM2                      ; 00489a68
    PSRLW MM6,0x1                       ; 00489a6b
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 00489a6f | DAT_00619b60
    PMULLW MM1,MM6                      ; 00489a77
    MOVQ MM2,MM3                        ; 00489a7a
    MOVQ MM4,MM5                        ; 00489a7d
    PXOR MM2,qword ptr [0x0061a358]     ; 00489a80 | DAT_0061a358
    PMULHW MM0,MM2                      ; 00489a87
    PMULHW MM1,MM2                      ; 00489a8a
    PMULHW MM4,MM3                      ; 00489a8d
    PADDW MM0,MM4                       ; 00489a90
    PADDW MM1,MM4                       ; 00489a93
    PADDW MM0,qword ptr [0x00618608]    ; 00489a96 | DAT_00618608
    PADDW MM1,qword ptr [0x00618610]    ; 00489a9d | DAT_00618610
    PSRLW MM0,0x4                       ; 00489aa4
    PSRLW MM1,0x4                       ; 00489aa8
    PACKUSWB MM0,MM7                    ; 00489aac
    PACKUSWB MM1,MM7                    ; 00489aaf
    MOVQ MM2,MM0                        ; 00489ab2
    MOVQ MM3,MM0                        ; 00489ab5
    PAND MM0,qword ptr [0x00623f78]     ; 00489ab8 | DAT_00623f78
    PAND MM2,qword ptr [0x00623f58]     ; 00489abf | DAT_00623f58
    PAND MM3,qword ptr [0x00623f38]     ; 00489ac6 | DAT_00623f38
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 00489acd | DAT_00623fc0
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 00489ad4 | DAT_00623fa0
    PSRLQ MM3,qword ptr [0x00623f80]    ; 00489adb | DAT_00623f80
    POR MM0,MM2                         ; 00489ae2
    POR MM0,MM3                         ; 00489ae5
    MOVQ MM2,MM1                        ; 00489ae8
    MOVQ MM3,MM1                        ; 00489aeb
    PAND MM1,qword ptr [0x00623f78]     ; 00489aee | DAT_00623f78
    PAND MM2,qword ptr [0x00623f58]     ; 00489af5 | DAT_00623f58
    PAND MM3,qword ptr [0x00623f38]     ; 00489afc | DAT_00623f38
    PSRLQ MM1,qword ptr [0x00623fc0]    ; 00489b03 | DAT_00623fc0
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 00489b0a | DAT_00623fa0
    PSRLQ MM3,qword ptr [0x00623f80]    ; 00489b11 | DAT_00623f80
    POR MM1,MM2                         ; 00489b18
    POR MM1,MM3                         ; 00489b1b
    PSLLQ MM1,0x10                      ; 00489b1e
    POR MM0,MM1                         ; 00489b22
    ADD ESI,0x8                         ; 00489b25
    INC EBX                             ; 00489b28
    INC EBP                             ; 00489b29
    MOVD dword ptr [EDI],MM0            ; 00489b2a
    ADD EDI,0x4                         ; 00489b2d
    SUB ECX,0x2                         ; 00489b30
    JG 0x00489a30                       ; 00489b33
        ;   XREF to: 00489a30 (CONDITIONAL_JUMP)  ; LAB_00489a30
    POP EBP                             ; 00489b39
    EMMS                                ; 00489b3a
    POP EDI                             ; 00489b3c
    POP ESI                             ; 00489b3d
    LEAVE                               ; 00489b3e
    RET                                 ; 00489b3f

