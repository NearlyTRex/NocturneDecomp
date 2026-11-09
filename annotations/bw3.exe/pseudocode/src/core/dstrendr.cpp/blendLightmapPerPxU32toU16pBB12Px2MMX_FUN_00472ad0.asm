; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00472ad0(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020 at 0045019c
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
;   ... and 91 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00472ad0
        ;   Label: core_dstrendr.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00472ad0
    MOV EBP,ESP                         ; 00472ad1
    PUSH ESI                            ; 00472ad3
    PUSH EDI                            ; 00472ad4
    PUSH EBP                            ; 00472ad5
    MOV ECX,dword ptr [EBP + 0x18]      ; 00472ad6
    MOV EDI,dword ptr [EBP + 0x8]       ; 00472ad9
    MOV ESI,dword ptr [EBP + 0xc]       ; 00472adc
    MOV EBX,dword ptr [EBP + 0x10]      ; 00472adf
    MOV EBP,dword ptr [EBP + 0x14]      ; 00472ae2
    PXOR MM7,MM7                        ; 00472ae5
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 00472ae8 | DAT_01c6e2bc
    PUNPCKLBW MM5,MM7                   ; 00472aef
    PSLLW MM5,0x6                       ; 00472af2
    MOV EAX,dword ptr [EBX]             ; 00472af6
    MOV EAX,dword ptr [EBX + 0x20]      ; 00472af8
    MOV EAX,dword ptr [EBX + 0x40]      ; 00472afb
    MOV EAX,dword ptr [EBX + 0x60]      ; 00472afe
    MOV EAX,dword ptr [EBX + 0x80]      ; 00472b01
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00472b07
    MOV EAX,dword ptr [EBX + 0xc0]      ; 00472b0d
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00472b13
    MOV EAX,dword ptr [EBX + 0x100]     ; 00472b19
    MOV EAX,dword ptr [EBX + 0x120]     ; 00472b1f
    MOV EDX,dword ptr [EBP]             ; 00472b25
    MOV EDX,dword ptr [EBP + 0x20]      ; 00472b28
    MOV EDX,dword ptr [EBP + 0x40]      ; 00472b2b
    MOV EDX,dword ptr [EBP + 0x60]      ; 00472b2e
    MOV EDX,dword ptr [EBP + 0x80]      ; 00472b31
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00472b37
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00472b3d
    MOV EDX,dword ptr [EBP + 0xe0]      ; 00472b43
    MOV EDX,dword ptr [EBP + 0x100]     ; 00472b49
    MOV EDX,dword ptr [EBP + 0x120]     ; 00472b4f
    MOV EAX,dword ptr [ESI]             ; 00472b55
    MOV EAX,dword ptr [ESI + 0x20]      ; 00472b57
    MOV EAX,dword ptr [ESI + 0x40]      ; 00472b5a
    MOV EAX,dword ptr [ESI + 0x60]      ; 00472b5d
    MOV EAX,dword ptr [ESI + 0x80]      ; 00472b60
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00472b66
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00472b6c
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00472b72
    MOV EAX,dword ptr [ESI + 0x100]     ; 00472b78
    MOV EAX,dword ptr [ESI + 0x120]     ; 00472b7e
    MOV EAX,dword ptr [ESI + 0x140]     ; 00472b84
    MOV EAX,dword ptr [ESI + 0x160]     ; 00472b8a
    MOV EAX,dword ptr [ESI + 0x180]     ; 00472b90
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00472b96
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00472b9c
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00472ba2
    MOV EAX,dword ptr [ESI + 0x200]     ; 00472ba8
    MOV EAX,dword ptr [ESI + 0x220]     ; 00472bae
    MOV EAX,dword ptr [ESI + 0x240]     ; 00472bb4
    MOV EAX,dword ptr [ESI + 0x260]     ; 00472bba
    MOV EAX,dword ptr [ESI + 0x280]     ; 00472bc0
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00472bc6
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00472bcc
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00472bd2
    MOV EAX,dword ptr [ESI + 0x300]     ; 00472bd8
    MOV EAX,dword ptr [ESI + 0x320]     ; 00472bde
    MOV EAX,dword ptr [ESI + 0x340]     ; 00472be4
    MOV EAX,dword ptr [ESI + 0x360]     ; 00472bea
    MOV EAX,dword ptr [ESI + 0x380]     ; 00472bf0
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00472bf6
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00472bfc
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00472c02
    MOV EAX,dword ptr [ESI + 0x400]     ; 00472c08
    MOV EAX,dword ptr [ESI + 0x420]     ; 00472c0e
    MOV EAX,dword ptr [ESI + 0x440]     ; 00472c14
    MOV EAX,dword ptr [ESI + 0x460]     ; 00472c1a
    MOV EAX,dword ptr [ESI + 0x480]     ; 00472c20
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00472c26
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00472c2c
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00472c32
    MOV EAX,dword ptr [ESI + 0x500]     ; 00472c38
    MOV EAX,dword ptr [ESI + 0x520]     ; 00472c3e
    MOV EAX,dword ptr [ESI + 0x540]     ; 00472c44
    MOV EAX,dword ptr [ESI + 0x560]     ; 00472c4a
    MOV EAX,dword ptr [ESI + 0x580]     ; 00472c50
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00472c56
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00472c5c
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00472c62
    MOV EAX,dword ptr [ESI + 0x600]     ; 00472c68
    MOV EAX,dword ptr [ESI + 0x620]     ; 00472c6e
    MOV EAX,dword ptr [ESI + 0x640]     ; 00472c74
    MOV EAX,dword ptr [ESI + 0x660]     ; 00472c7a
    MOV EAX,dword ptr [ESI + 0x680]     ; 00472c80
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00472c86
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00472c8c
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00472c92
    MOV EAX,dword ptr [ESI + 0x700]     ; 00472c98
    MOV EAX,dword ptr [ESI + 0x720]     ; 00472c9e
    MOV EAX,dword ptr [ESI + 0x740]     ; 00472ca4
    MOV EAX,dword ptr [ESI + 0x760]     ; 00472caa
    MOV EAX,dword ptr [ESI + 0x780]     ; 00472cb0
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00472cb6
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00472cbc
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00472cc2
    MOV EAX,dword ptr [ESI + 0x800]     ; 00472cc8
    MOV EAX,dword ptr [ESI + 0x820]     ; 00472cce
    MOV EAX,dword ptr [ESI + 0x840]     ; 00472cd4
    MOV EAX,dword ptr [ESI + 0x860]     ; 00472cda
    MOV EAX,dword ptr [ESI + 0x880]     ; 00472ce0
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00472ce6
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00472cec
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00472cf2
    MOV EAX,dword ptr [ESI + 0x900]     ; 00472cf8
    MOV EAX,dword ptr [ESI + 0x920]     ; 00472cfe
    MOV EAX,dword ptr [ESI + 0x940]     ; 00472d04
    MOV EAX,dword ptr [ESI + 0x960]     ; 00472d0a
    MOV EAX,dword ptr [ESI + 0x980]     ; 00472d10
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00472d16
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00472d1c
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00472d22
    MOV EAX,[0x00b9e14c]                ; 00472d28 | DAT_00b9e14c
    MOV EAX,[0x00b9e16c]                ; 00472d2d | DAT_00b9e16c
    MOV EAX,[0x00b9e18c]                ; 00472d32 | DAT_00b9e18c
    MOV EAX,[0x00b9e1ac]                ; 00472d37 | DAT_00b9e1ac
    MOV EAX,[0x00b9e1cc]                ; 00472d3c | DAT_00b9e1cc
    MOV EAX,[0x00b9e1ec]                ; 00472d41 | DAT_00b9e1ec
    MOV EAX,[0x00b9e20c]                ; 00472d46 | DAT_00b9e20c
    MOV EAX,[0x00b9e22c]                ; 00472d4b | DAT_00b9e22c
    MOV EAX,[0x00b9e24c]                ; 00472d50 | DAT_00b9e24c
    MOV EAX,[0x00b9e26c]                ; 00472d55 | DAT_00b9e26c
    MOV EAX,[0x00b9e28c]                ; 00472d5a | DAT_00b9e28c
    MOV EAX,[0x00b9e2ac]                ; 00472d5f | DAT_00b9e2ac
    MOV EAX,[0x00b9e2cc]                ; 00472d64 | DAT_00b9e2cc
    MOV EAX,[0x00b9e2ec]                ; 00472d69 | DAT_00b9e2ec
    MOV EAX,[0x00b9e30c]                ; 00472d6e | DAT_00b9e30c
    MOV EAX,[0x00b9e32c]                ; 00472d73 | DAT_00b9e32c
    MOV EAX,[0x00b9e34c]                ; 00472d78 | DAT_00b9e34c
    MOV EAX,[0x00b9e36c]                ; 00472d7d | DAT_00b9e36c
    MOV EAX,[0x00b9e38c]                ; 00472d82 | DAT_00b9e38c
    MOV EAX,[0x00b9e3ac]                ; 00472d87 | DAT_00b9e3ac
    MOV EAX,[0x00b9e3cc]                ; 00472d8c | DAT_00b9e3cc
    MOV EAX,[0x00b9e3ec]                ; 00472d91 | DAT_00b9e3ec
    MOV EAX,[0x00b9e40c]                ; 00472d96 | DAT_00b9e40c
    MOV EAX,[0x00b9e42c]                ; 00472d9b | DAT_00b9e42c
    MOV EAX,[0x00b9e44c]                ; 00472da0 | DAT_00b9e44c
    MOV EAX,[0x00b9e46c]                ; 00472da5 | DAT_00b9e46c
    MOV EAX,[0x00b9e48c]                ; 00472daa | DAT_00b9e48c
    MOV EAX,[0x00b9e4ac]                ; 00472daf | DAT_00b9e4ac
    MOV EAX,[0x00b9e4cc]                ; 00472db4 | DAT_00b9e4cc
    MOV EAX,[0x00b9e4ec]                ; 00472db9 | DAT_00b9e4ec
    MOV EAX,[0x00b9e50c]                ; 00472dbe | DAT_00b9e50c
    MOV EAX,[0x00b9e52c]                ; 00472dc3 | DAT_00b9e52c
    MOV EAX,[0x005fa0e0]                ; 00472dc8 | DAT_005fa0e0
    MOV EAX,[0x005fa100]                ; 00472dcd | DAT_005fa100
    MOV EAX,[0x005fa120]                ; 00472dd2 | DAT_005fa120
    MOV EAX,[0x005fa140]                ; 00472dd7 | DAT_005fa140
    MOV EAX,[0x005fa160]                ; 00472ddc | DAT_005fa160
    MOV EAX,[0x005fa180]                ; 00472de1 | DAT_005fa180
    MOV EAX,[0x005fa1a0]                ; 00472de6 | DAT_005fa1a0
    MOV EAX,[0x005fa1c0]                ; 00472deb | DAT_005fa1c0
    MOV EAX,[0x005fa1e0]                ; 00472df0 | DAT_005fa1e0
    MOV EAX,[0x005fa200]                ; 00472df5 | DAT_005fa200
    MOV EAX,[0x005fa220]                ; 00472dfa | DAT_005fa220
    MOV EAX,[0x005fa240]                ; 00472dff | DAT_005fa240
    MOV EAX,[0x005fa260]                ; 00472e04 | DAT_005fa260
    MOV EAX,[0x005fa280]                ; 00472e09 | DAT_005fa280
    MOV EAX,[0x005fa2a0]                ; 00472e0e | DAT_005fa2a0
    MOV EAX,[0x005fa2c0]                ; 00472e13 | DAT_005fa2c0
    MOV EAX,[0x005fa2e0]                ; 00472e18 | DAT_005fa2e0
    MOV EAX,[0x005fa300]                ; 00472e1d | DAT_005fa300
    MOV EAX,[0x005fa320]                ; 00472e22 | DAT_005fa320
    MOV EAX,[0x005fa340]                ; 00472e27 | DAT_005fa340
    MOV EAX,[0x005fa360]                ; 00472e2c | DAT_005fa360
    MOV EAX,[0x005fa380]                ; 00472e31 | DAT_005fa380
    MOV EAX,[0x005fa3a0]                ; 00472e36 | DAT_005fa3a0
    MOV EAX,[0x005fa3c0]                ; 00472e3b | DAT_005fa3c0
    MOV EAX,[0x005fa3e0]                ; 00472e40 | DAT_005fa3e0
    MOV EAX,[0x005fa400]                ; 00472e45 | DAT_005fa400
    MOV EAX,[0x005fa420]                ; 00472e4a | DAT_005fa420
    MOV EAX,[0x005fa440]                ; 00472e4f | DAT_005fa440
    MOV EAX,[0x005fa460]                ; 00472e54 | DAT_005fa460
    MOV EAX,[0x005fa480]                ; 00472e59 | DAT_005fa480
    MOV EAX,[0x005fa4a0]                ; 00472e5e | DAT_005fa4a0
    MOV EAX,[0x005fa4c0]                ; 00472e63 | DAT_005fa4c0
    MOV EAX,[0x005fa4e0]                ; 00472e68 | DAT_005fa4e0
    MOV EAX,[0x005fa500]                ; 00472e6d | DAT_005fa500
    MOV EAX,[0x005fa520]                ; 00472e72 | DAT_005fa520
    MOV EAX,[0x005fa540]                ; 00472e77 | DAT_005fa540
    MOV EAX,[0x005fa560]                ; 00472e7c | DAT_005fa560
    MOV EAX,[0x005fa580]                ; 00472e81 | DAT_005fa580
    MOV EAX,[0x005fa5a0]                ; 00472e86 | DAT_005fa5a0
    MOV EAX,[0x005fa5c0]                ; 00472e8b | DAT_005fa5c0
    MOV EAX,[0x005fa5e0]                ; 00472e90 | DAT_005fa5e0
    MOV EAX,[0x005fa600]                ; 00472e95 | DAT_005fa600
    MOV EAX,[0x005fa620]                ; 00472e9a | DAT_005fa620
    MOV EAX,[0x005fa640]                ; 00472e9f | DAT_005fa640
    MOV EAX,[0x005fa660]                ; 00472ea4 | DAT_005fa660
    MOV EAX,[0x005fa680]                ; 00472ea9 | DAT_005fa680
    MOV EAX,[0x005fa6a0]                ; 00472eae | DAT_005fa6a0
    MOV EAX,[0x005fa6c0]                ; 00472eb3 | DAT_005fa6c0
    MOV EAX,[0x005fa6e0]                ; 00472eb8 | DAT_005fa6e0
    MOV EAX,[0x005fa700]                ; 00472ebd | DAT_005fa700
    MOV EAX,[0x005fa720]                ; 00472ec2 | DAT_005fa720
    MOV EAX,[0x005fa740]                ; 00472ec7 | DAT_005fa740
    MOV EAX,[0x005fa760]                ; 00472ecc | DAT_005fa760
    MOV EAX,[0x005fa780]                ; 00472ed1 | DAT_005fa780
    MOV EAX,[0x005fa7a0]                ; 00472ed6 | DAT_005fa7a0
    MOV EAX,[0x005fa7c0]                ; 00472edb | DAT_005fa7c0
    MOV EAX,[0x005fa7e0]                ; 00472ee0 | DAT_005fa7e0
    MOV EAX,[0x005fa800]                ; 00472ee5 | DAT_005fa800
    MOV EAX,[0x005fa820]                ; 00472eea | DAT_005fa820
    MOV EAX,[0x005fa840]                ; 00472eef | DAT_005fa840
    MOV EAX,[0x005fa860]                ; 00472ef4 | DAT_005fa860
    MOV EAX,[0x005fa880]                ; 00472ef9 | DAT_005fa880
    MOV EAX,[0x005fa8a0]                ; 00472efe | DAT_005fa8a0
    MOV EAX,[0x005fa8c0]                ; 00472f03 | DAT_005fa8c0
    MOVZX EDX,byte ptr [EBX]            ; 00472f08
        ;   Label: LAB_00472f08
    MOVD MM0,dword ptr [ESI]            ; 00472f0b
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00472f0e | DAT_00b9e14c
    MOVZX EAX,byte ptr [EBP]            ; 00472f16
    PUNPCKLBW MM0,MM7                   ; 00472f1a
    SHR EDX,0x1                         ; 00472f1d
    PUNPCKLBW MM2,MM7                   ; 00472f1f
    ADD EAX,EDX                         ; 00472f22
    PMULLW MM0,MM2                      ; 00472f24
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 00472f27 | DAT_005fa0e0
    MOVQ MM2,MM3                        ; 00472f2f
    MOVQ MM4,MM5                        ; 00472f32
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00472f35 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 00472f3c
    PMULHW MM4,MM3                      ; 00472f3f
    PADDW MM0,MM4                       ; 00472f42
    PADDW MM0,qword ptr [0x005f8b68]    ; 00472f45 | DAT_005f8b68
    PSRLW MM0,0x4                       ; 00472f4c
    PACKUSWB MM0,MM7                    ; 00472f50
    MOVQ MM2,MM0                        ; 00472f53
    MOVQ MM3,MM0                        ; 00472f56
    PAND MM0,qword ptr [0x00604eb8]     ; 00472f59 | DAT_00604eb8
    PAND MM2,qword ptr [0x00604e98]     ; 00472f60 | DAT_00604e98
    PAND MM3,qword ptr [0x00604e78]     ; 00472f67 | DAT_00604e78
    PSRLQ MM0,qword ptr [0x00604f00]    ; 00472f6e | DAT_00604f00
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 00472f75 | DAT_00604ee0
    PSRLQ MM3,qword ptr [0x00604ec0]    ; 00472f7c | DAT_00604ec0
    POR MM0,MM2                         ; 00472f83
    POR MM0,MM3                         ; 00472f86
    MOVQ MM6,MM0                        ; 00472f89
    ADD ESI,0x4                         ; 00472f8c
    INC EBX                             ; 00472f8f
    INC EBP                             ; 00472f90
    MOVZX EDX,byte ptr [EBX]            ; 00472f91
    MOVD MM0,dword ptr [ESI]            ; 00472f94
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00472f97 | DAT_00b9e14c
    MOVZX EAX,byte ptr [EBP]            ; 00472f9f
    PUNPCKLBW MM0,MM7                   ; 00472fa3
    SHR EDX,0x1                         ; 00472fa6
    PUNPCKLBW MM2,MM7                   ; 00472fa8
    ADD EAX,EDX                         ; 00472fab
    PMULLW MM0,MM2                      ; 00472fad
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 00472fb0 | DAT_005fa0e0
    MOVQ MM2,MM3                        ; 00472fb8
    MOVQ MM4,MM5                        ; 00472fbb
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00472fbe | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 00472fc5
    PMULHW MM4,MM3                      ; 00472fc8
    PADDW MM0,MM4                       ; 00472fcb
    PADDW MM0,qword ptr [0x005f8b70]    ; 00472fce | DAT_005f8b70
    PSRLW MM0,0x4                       ; 00472fd5
    PACKUSWB MM0,MM7                    ; 00472fd9
    MOVQ MM2,MM0                        ; 00472fdc
    MOVQ MM3,MM0                        ; 00472fdf
    PAND MM0,qword ptr [0x00604eb8]     ; 00472fe2 | DAT_00604eb8
    PAND MM2,qword ptr [0x00604e98]     ; 00472fe9 | DAT_00604e98
    PAND MM3,qword ptr [0x00604e78]     ; 00472ff0 | DAT_00604e78
    PSRLQ MM0,qword ptr [0x00604f00]    ; 00472ff7 | DAT_00604f00
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 00472ffe | DAT_00604ee0
    PSRLQ MM3,qword ptr [0x00604ec0]    ; 00473005 | DAT_00604ec0
    POR MM0,MM2                         ; 0047300c
    POR MM0,MM3                         ; 0047300f
    PSLLQ MM0,0x10                      ; 00473012
    POR MM0,MM6                         ; 00473016
    MOVD dword ptr [EDI],MM0            ; 00473019
    ADD ESI,0x4                         ; 0047301c
    INC EBX                             ; 0047301f
    INC EBP                             ; 00473020
    ADD EDI,0x4                         ; 00473021
    SUB ECX,0x2                         ; 00473024
    JG 0x00472f08                       ; 00473027
        ;   XREF to: 00472f08 (CONDITIONAL_JUMP)  ; LAB_00472f08
    POP EBP                             ; 0047302d
    EMMS                                ; 0047302e
    POP EDI                             ; 00473030
    POP ESI                             ; 00473031
    LEAVE                               ; 00473032
    RET                                 ; 00473033

