; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7(undefined4 *param_1,undefined4 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   FUN_004470f0 at 00447402
;
; Referenced Globals:
;   undefined8 DAT_005b4788
;   undefined8 DAT_005b4790
;   undefined4 DAT_005b5d00
;   undefined4 DAT_005b5d20
;   undefined4 DAT_005b5d40
;   undefined4 DAT_005b5d60
;   undefined4 DAT_005b5d80
;   undefined4 DAT_005b5da0
;   undefined4 DAT_005b5dc0
;   undefined4 DAT_005b5de0
;   undefined4 DAT_005b5e00
;   undefined4 DAT_005b5e20
;   undefined4 DAT_005b5e40
;   undefined4 DAT_005b5e60
;   undefined4 DAT_005b5e80
;   ... and 85 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004657a7
        ;   Label: core_dstrender.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7
    MOV EBP,ESP                         ; 004657a8
    PUSH ESI                            ; 004657aa
    PUSH EDI                            ; 004657ab
    PUSH EBP                            ; 004657ac
    MOV ECX,dword ptr [EBP + 0x18]      ; 004657ad
    MOV EDI,dword ptr [EBP + 0x8]       ; 004657b0
    MOV ESI,dword ptr [EBP + 0xc]       ; 004657b3
    MOV EBX,dword ptr [EBP + 0x10]      ; 004657b6
    MOV EBP,dword ptr [EBP + 0x14]      ; 004657b9
    PXOR MM7,MM7                        ; 004657bc
    MOVD MM5,dword ptr [0x01c039a8]     ; 004657bf | DAT_01c039a8
    PUNPCKLBW MM5,MM7                   ; 004657c6
    PSLLW MM5,0x6                       ; 004657c9
    MOV EAX,dword ptr [EBX]             ; 004657cd
    MOV EAX,dword ptr [EBX + 0x20]      ; 004657cf
    MOV EAX,dword ptr [EBX + 0x40]      ; 004657d2
    MOV EAX,dword ptr [EBX + 0x60]      ; 004657d5
    MOV EAX,dword ptr [EBX + 0x80]      ; 004657d8
    MOV EAX,dword ptr [EBX + 0xa0]      ; 004657de
    MOV EAX,dword ptr [EBX + 0xc0]      ; 004657e4
    MOV EAX,dword ptr [EBX + 0xe0]      ; 004657ea
    MOV EAX,dword ptr [EBX + 0x100]     ; 004657f0
    MOV EAX,dword ptr [EBX + 0x120]     ; 004657f6
    MOV EDX,dword ptr [EBP]             ; 004657fc
    MOV EDX,dword ptr [EBP + 0x20]      ; 004657ff
    MOV EDX,dword ptr [EBP + 0x40]      ; 00465802
    MOV EDX,dword ptr [EBP + 0x60]      ; 00465805
    MOV EDX,dword ptr [EBP + 0x80]      ; 00465808
    MOV EDX,dword ptr [EBP + 0xa0]      ; 0046580e
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00465814
    MOV EDX,dword ptr [EBP + 0xe0]      ; 0046581a
    MOV EDX,dword ptr [EBP + 0x100]     ; 00465820
    MOV EDX,dword ptr [EBP + 0x120]     ; 00465826
    MOV EAX,dword ptr [ESI]             ; 0046582c
    MOV EAX,dword ptr [ESI + 0x20]      ; 0046582e
    MOV EAX,dword ptr [ESI + 0x40]      ; 00465831
    MOV EAX,dword ptr [ESI + 0x60]      ; 00465834
    MOV EAX,dword ptr [ESI + 0x80]      ; 00465837
    MOV EAX,dword ptr [ESI + 0xa0]      ; 0046583d
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00465843
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00465849
    MOV EAX,dword ptr [ESI + 0x100]     ; 0046584f
    MOV EAX,dword ptr [ESI + 0x120]     ; 00465855
    MOV EAX,dword ptr [ESI + 0x140]     ; 0046585b
    MOV EAX,dword ptr [ESI + 0x160]     ; 00465861
    MOV EAX,dword ptr [ESI + 0x180]     ; 00465867
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 0046586d
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00465873
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00465879
    MOV EAX,dword ptr [ESI + 0x200]     ; 0046587f
    MOV EAX,dword ptr [ESI + 0x220]     ; 00465885
    MOV EAX,dword ptr [ESI + 0x240]     ; 0046588b
    MOV EAX,dword ptr [ESI + 0x260]     ; 00465891
    MOV EAX,dword ptr [ESI + 0x280]     ; 00465897
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 0046589d
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 004658a3
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 004658a9
    MOV EAX,dword ptr [ESI + 0x300]     ; 004658af
    MOV EAX,dword ptr [ESI + 0x320]     ; 004658b5
    MOV EAX,dword ptr [ESI + 0x340]     ; 004658bb
    MOV EAX,dword ptr [ESI + 0x360]     ; 004658c1
    MOV EAX,dword ptr [ESI + 0x380]     ; 004658c7
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 004658cd
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 004658d3
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 004658d9
    MOV EAX,dword ptr [ESI + 0x400]     ; 004658df
    MOV EAX,dword ptr [ESI + 0x420]     ; 004658e5
    MOV EAX,dword ptr [ESI + 0x440]     ; 004658eb
    MOV EAX,dword ptr [ESI + 0x460]     ; 004658f1
    MOV EAX,dword ptr [ESI + 0x480]     ; 004658f7
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 004658fd
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00465903
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00465909
    MOV EAX,dword ptr [ESI + 0x500]     ; 0046590f
    MOV EAX,dword ptr [ESI + 0x520]     ; 00465915
    MOV EAX,dword ptr [ESI + 0x540]     ; 0046591b
    MOV EAX,dword ptr [ESI + 0x560]     ; 00465921
    MOV EAX,dword ptr [ESI + 0x580]     ; 00465927
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 0046592d
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00465933
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00465939
    MOV EAX,dword ptr [ESI + 0x600]     ; 0046593f
    MOV EAX,dword ptr [ESI + 0x620]     ; 00465945
    MOV EAX,dword ptr [ESI + 0x640]     ; 0046594b
    MOV EAX,dword ptr [ESI + 0x660]     ; 00465951
    MOV EAX,dword ptr [ESI + 0x680]     ; 00465957
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 0046595d
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00465963
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00465969
    MOV EAX,dword ptr [ESI + 0x700]     ; 0046596f
    MOV EAX,dword ptr [ESI + 0x720]     ; 00465975
    MOV EAX,dword ptr [ESI + 0x740]     ; 0046597b
    MOV EAX,dword ptr [ESI + 0x760]     ; 00465981
    MOV EAX,dword ptr [ESI + 0x780]     ; 00465987
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 0046598d
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00465993
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00465999
    MOV EAX,dword ptr [ESI + 0x800]     ; 0046599f
    MOV EAX,dword ptr [ESI + 0x820]     ; 004659a5
    MOV EAX,dword ptr [ESI + 0x840]     ; 004659ab
    MOV EAX,dword ptr [ESI + 0x860]     ; 004659b1
    MOV EAX,dword ptr [ESI + 0x880]     ; 004659b7
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 004659bd
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 004659c3
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 004659c9
    MOV EAX,dword ptr [ESI + 0x900]     ; 004659cf
    MOV EAX,dword ptr [ESI + 0x920]     ; 004659d5
    MOV EAX,dword ptr [ESI + 0x940]     ; 004659db
    MOV EAX,dword ptr [ESI + 0x960]     ; 004659e1
    MOV EAX,dword ptr [ESI + 0x980]     ; 004659e7
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 004659ed
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 004659f3
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 004659f9
    MOV EAX,[0x00b0e1fc]                ; 004659ff | DAT_00b0e1fc
    MOV EAX,[0x00b0e21c]                ; 00465a04 | DAT_00b0e21c
    MOV EAX,[0x00b0e23c]                ; 00465a09 | DAT_00b0e23c
    MOV EAX,[0x00b0e25c]                ; 00465a0e | DAT_00b0e25c
    MOV EAX,[0x00b0e27c]                ; 00465a13 | DAT_00b0e27c
    MOV EAX,[0x00b0e29c]                ; 00465a18 | DAT_00b0e29c
    MOV EAX,[0x00b0e2bc]                ; 00465a1d | DAT_00b0e2bc
    MOV EAX,[0x00b0e2dc]                ; 00465a22 | DAT_00b0e2dc
    MOV EAX,[0x00b0e2fc]                ; 00465a27 | DAT_00b0e2fc
    MOV EAX,[0x00b0e31c]                ; 00465a2c | DAT_00b0e31c
    MOV EAX,[0x00b0e33c]                ; 00465a31 | DAT_00b0e33c
    MOV EAX,[0x00b0e35c]                ; 00465a36 | DAT_00b0e35c
    MOV EAX,[0x00b0e37c]                ; 00465a3b | DAT_00b0e37c
    MOV EAX,[0x00b0e39c]                ; 00465a40 | DAT_00b0e39c
    MOV EAX,[0x00b0e3bc]                ; 00465a45 | DAT_00b0e3bc
    MOV EAX,[0x00b0e3dc]                ; 00465a4a | DAT_00b0e3dc
    MOV EAX,[0x00b0e3fc]                ; 00465a4f | DAT_00b0e3fc
    MOV EAX,[0x00b0e41c]                ; 00465a54 | DAT_00b0e41c
    MOV EAX,[0x00b0e43c]                ; 00465a59 | DAT_00b0e43c
    MOV EAX,[0x00b0e45c]                ; 00465a5e | DAT_00b0e45c
    MOV EAX,[0x00b0e47c]                ; 00465a63 | DAT_00b0e47c
    MOV EAX,[0x00b0e49c]                ; 00465a68 | DAT_00b0e49c
    MOV EAX,[0x00b0e4bc]                ; 00465a6d | DAT_00b0e4bc
    MOV EAX,[0x00b0e4dc]                ; 00465a72 | DAT_00b0e4dc
    MOV EAX,[0x00b0e4fc]                ; 00465a77 | DAT_00b0e4fc
    MOV EAX,[0x00b0e51c]                ; 00465a7c | DAT_00b0e51c
    MOV EAX,[0x00b0e53c]                ; 00465a81 | DAT_00b0e53c
    MOV EAX,[0x00b0e55c]                ; 00465a86 | DAT_00b0e55c
    MOV EAX,[0x00b0e57c]                ; 00465a8b | DAT_00b0e57c
    MOV EAX,[0x00b0e59c]                ; 00465a90 | DAT_00b0e59c
    MOV EAX,[0x00b0e5bc]                ; 00465a95 | DAT_00b0e5bc
    MOV EAX,[0x00b0e5dc]                ; 00465a9a | DAT_00b0e5dc
    MOV EAX,[0x005b5d00]                ; 00465a9f | DAT_005b5d00
    MOV EAX,[0x005b5d20]                ; 00465aa4 | DAT_005b5d20
    MOV EAX,[0x005b5d40]                ; 00465aa9 | DAT_005b5d40
    MOV EAX,[0x005b5d60]                ; 00465aae | DAT_005b5d60
    MOV EAX,[0x005b5d80]                ; 00465ab3 | DAT_005b5d80
    MOV EAX,[0x005b5da0]                ; 00465ab8 | DAT_005b5da0
    MOV EAX,[0x005b5dc0]                ; 00465abd | DAT_005b5dc0
    MOV EAX,[0x005b5de0]                ; 00465ac2 | DAT_005b5de0
    MOV EAX,[0x005b5e00]                ; 00465ac7 | DAT_005b5e00
    MOV EAX,[0x005b5e20]                ; 00465acc | DAT_005b5e20
    MOV EAX,[0x005b5e40]                ; 00465ad1 | DAT_005b5e40
    MOV EAX,[0x005b5e60]                ; 00465ad6 | DAT_005b5e60
    MOV EAX,[0x005b5e80]                ; 00465adb | DAT_005b5e80
    MOV EAX,[0x005b5ea0]                ; 00465ae0 | DAT_005b5ea0
    MOV EAX,[0x005b5ec0]                ; 00465ae5 | DAT_005b5ec0
    MOV EAX,[0x005b5ee0]                ; 00465aea | DAT_005b5ee0
    MOV EAX,[0x005b5f00]                ; 00465aef | DAT_005b5f00
    MOV EAX,[0x005b5f20]                ; 00465af4 | DAT_005b5f20
    MOV EAX,[0x005b5f40]                ; 00465af9 | DAT_005b5f40
    MOV EAX,[0x005b5f60]                ; 00465afe | DAT_005b5f60
    MOV EAX,[0x005b5f80]                ; 00465b03 | DAT_005b5f80
    MOV EAX,[0x005b5fa0]                ; 00465b08 | DAT_005b5fa0
    MOV EAX,[0x005b5fc0]                ; 00465b0d | DAT_005b5fc0
    MOV EAX,[0x005b5fe0]                ; 00465b12 | DAT_005b5fe0
    MOV EAX,[0x005b6000]                ; 00465b17 | DAT_005b6000
    MOV EAX,[0x005b6020]                ; 00465b1c | DAT_005b6020
    MOV EAX,[0x005b6040]                ; 00465b21 | DAT_005b6040
    MOV EAX,[0x005b6060]                ; 00465b26 | DAT_005b6060
    MOV EAX,[0x005b6080]                ; 00465b2b | DAT_005b6080
    MOV EAX,[0x005b60a0]                ; 00465b30 | DAT_005b60a0
    MOV EAX,[0x005b60c0]                ; 00465b35 | DAT_005b60c0
    MOV EAX,[0x005b60e0]                ; 00465b3a | DAT_005b60e0
    MOV EAX,[0x005b6100]                ; 00465b3f | DAT_005b6100
    MOV EAX,[0x005b6120]                ; 00465b44 | DAT_005b6120
    MOV EAX,[0x005b6140]                ; 00465b49 | DAT_005b6140
    MOV EAX,[0x005b6160]                ; 00465b4e | DAT_005b6160
    MOV EAX,[0x005b6180]                ; 00465b53 | DAT_005b6180
    MOV EAX,[0x005b61a0]                ; 00465b58 | DAT_005b61a0
    MOV EAX,[0x005b61c0]                ; 00465b5d | DAT_005b61c0
    MOV EAX,[0x005b61e0]                ; 00465b62 | DAT_005b61e0
    MOV EAX,[0x005b6200]                ; 00465b67 | DAT_005b6200
    MOV EAX,[0x005b6220]                ; 00465b6c | DAT_005b6220
    MOV EAX,[0x005b6240]                ; 00465b71 | DAT_005b6240
    MOV EAX,[0x005b6260]                ; 00465b76 | DAT_005b6260
    MOV EAX,[0x005b6280]                ; 00465b7b | DAT_005b6280
    MOV EAX,[0x005b62a0]                ; 00465b80 | DAT_005b62a0
    MOV EAX,[0x005b62c0]                ; 00465b85 | DAT_005b62c0
    MOV EAX,[0x005b62e0]                ; 00465b8a | DAT_005b62e0
    MOV EAX,[0x005b6300]                ; 00465b8f | DAT_005b6300
    MOV EAX,[0x005b6320]                ; 00465b94 | DAT_005b6320
    MOV EAX,[0x005b6340]                ; 00465b99 | DAT_005b6340
    MOV EAX,[0x005b6360]                ; 00465b9e | DAT_005b6360
    MOV EAX,[0x005b6380]                ; 00465ba3 | DAT_005b6380
    MOV EAX,[0x005b63a0]                ; 00465ba8 | DAT_005b63a0
    MOV EAX,[0x005b63c0]                ; 00465bad | DAT_005b63c0
    MOV EAX,[0x005b63e0]                ; 00465bb2 | DAT_005b63e0
    MOV EAX,[0x005b6400]                ; 00465bb7 | DAT_005b6400
    MOV EAX,[0x005b6420]                ; 00465bbc | DAT_005b6420
    MOV EAX,[0x005b6440]                ; 00465bc1 | DAT_005b6440
    MOV EAX,[0x005b6460]                ; 00465bc6 | DAT_005b6460
    MOV EAX,[0x005b6480]                ; 00465bcb | DAT_005b6480
    MOV EAX,[0x005b64a0]                ; 00465bd0 | DAT_005b64a0
    MOV EAX,[0x005b64c0]                ; 00465bd5 | DAT_005b64c0
    MOV EAX,[0x005b64e0]                ; 00465bda | DAT_005b64e0
    MOVZX EDX,byte ptr [EBX]            ; 00465bdf
        ;   Label: LAB_00465bdf
    MOVD MM0,dword ptr [ESI]            ; 00465be2
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00465be5 | DAT_00b0e1fc
    MOVZX EAX,byte ptr [EBP]            ; 00465bed
    PUNPCKLBW MM0,MM7                   ; 00465bf1
    SHR EDX,0x1                         ; 00465bf4
    PUNPCKLBW MM2,MM7                   ; 00465bf6
    ADD EAX,EDX                         ; 00465bf9
    PMULLW MM0,MM2                      ; 00465bfb
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 00465bfe | DAT_005b5d00
    MOVQ MM2,MM3                        ; 00465c06
    MOVQ MM4,MM5                        ; 00465c09
    PXOR MM2,qword ptr [0x005b64f8]     ; 00465c0c | DAT_005b64f8
    PMULHW MM0,MM2                      ; 00465c13
    PMULHW MM4,MM3                      ; 00465c16
    PADDW MM0,MM4                       ; 00465c19
    PADDW MM0,qword ptr [0x005b4788]    ; 00465c1c | DAT_005b4788
    PSRLW MM0,0x4                       ; 00465c23
    PACKUSWB MM0,MM7                    ; 00465c27
    MOVD dword ptr [EDI],MM0            ; 00465c2a
    ADD ESI,0x4                         ; 00465c2d
    INC EBX                             ; 00465c30
    INC EBP                             ; 00465c31
    ADD EDI,0x4                         ; 00465c32
    MOVZX EDX,byte ptr [EBX]            ; 00465c35
    MOVD MM0,dword ptr [ESI]            ; 00465c38
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00465c3b | DAT_00b0e1fc
    MOVZX EAX,byte ptr [EBP]            ; 00465c43
    PUNPCKLBW MM0,MM7                   ; 00465c47
    SHR EDX,0x1                         ; 00465c4a
    PUNPCKLBW MM2,MM7                   ; 00465c4c
    ADD EAX,EDX                         ; 00465c4f
    PMULLW MM0,MM2                      ; 00465c51
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 00465c54 | DAT_005b5d00
    MOVQ MM2,MM3                        ; 00465c5c
    MOVQ MM4,MM5                        ; 00465c5f
    PXOR MM2,qword ptr [0x005b64f8]     ; 00465c62 | DAT_005b64f8
    PMULHW MM0,MM2                      ; 00465c69
    PMULHW MM4,MM3                      ; 00465c6c
    PADDW MM0,MM4                       ; 00465c6f
    PADDW MM0,qword ptr [0x005b4790]    ; 00465c72 | DAT_005b4790
    PSRLW MM0,0x4                       ; 00465c79
    PACKUSWB MM0,MM7                    ; 00465c7d
    MOVD dword ptr [EDI],MM0            ; 00465c80
    ADD ESI,0x4                         ; 00465c83
    INC EBX                             ; 00465c86
    INC EBP                             ; 00465c87
    ADD EDI,0x4                         ; 00465c88
    SUB ECX,0x2                         ; 00465c8b
    JG 0x00465bdf                       ; 00465c8e
        ;   XREF to: 00465bdf (CONDITIONAL_JUMP)  ; LAB_00465bdf
    POP EBP                             ; 00465c94
    EMMS                                ; 00465c95
    POP EDI                             ; 00465c97
    POP ESI                             ; 00465c98
    LEAVE                               ; 00465c99
    RET                                 ; 00465c9a

