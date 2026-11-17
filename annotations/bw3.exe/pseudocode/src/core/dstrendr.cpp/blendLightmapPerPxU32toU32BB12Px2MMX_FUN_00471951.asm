; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_00471951(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020 at 00450313
;
; Referenced Globals:
;   qword g_QWORD_005f8b68 = 0x0
;   qword g_QWORD_005f8b70 = 0x8000800080008
;   ushort[2048] g_USHORT_ARRAY_005fa0e0
;   undefined4 g_USHORT_ARRAY_005fa0e0[16]
;   undefined4 g_USHORT_ARRAY_005fa0e0[32]
;   undefined4 g_USHORT_ARRAY_005fa0e0[48]
;   undefined4 g_USHORT_ARRAY_005fa0e0[64]
;   undefined4 g_USHORT_ARRAY_005fa0e0[80]
;   undefined4 g_USHORT_ARRAY_005fa0e0[96]
;   undefined4 g_USHORT_ARRAY_005fa0e0[112]
;   undefined4 g_USHORT_ARRAY_005fa0e0[128]
;   undefined4 g_USHORT_ARRAY_005fa0e0[144]
;   undefined4 g_USHORT_ARRAY_005fa0e0[160]
;   undefined4 g_USHORT_ARRAY_005fa0e0[176]
;   undefined4 g_USHORT_ARRAY_005fa0e0[192]
;   ... and 85 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00471951
        ;   Label: core_dstrendr.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_00471951
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
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 00471969 | g_ULONG_01c6e2bc
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
    MOV EAX,[0x00b9e14c]                ; 00471ba9 | g_UINT_ARRAY_00b9e14c
    MOV EAX,[0x00b9e16c]                ; 00471bae | g_UINT_ARRAY_00b9e14c[8]
    MOV EAX,[0x00b9e18c]                ; 00471bb3 | g_UINT_ARRAY_00b9e14c[16]
    MOV EAX,[0x00b9e1ac]                ; 00471bb8 | g_UINT_ARRAY_00b9e14c[24]
    MOV EAX,[0x00b9e1cc]                ; 00471bbd | g_UINT_ARRAY_00b9e14c[32]
    MOV EAX,[0x00b9e1ec]                ; 00471bc2 | g_UINT_ARRAY_00b9e14c[40]
    MOV EAX,[0x00b9e20c]                ; 00471bc7 | g_UINT_ARRAY_00b9e14c[48]
    MOV EAX,[0x00b9e22c]                ; 00471bcc | g_UINT_ARRAY_00b9e14c[56]
    MOV EAX,[0x00b9e24c]                ; 00471bd1 | g_UINT_ARRAY_00b9e14c[64]
    MOV EAX,[0x00b9e26c]                ; 00471bd6 | g_UINT_ARRAY_00b9e14c[72]
    MOV EAX,[0x00b9e28c]                ; 00471bdb | g_UINT_ARRAY_00b9e14c[80]
    MOV EAX,[0x00b9e2ac]                ; 00471be0 | g_UINT_ARRAY_00b9e14c[88]
    MOV EAX,[0x00b9e2cc]                ; 00471be5 | g_UINT_ARRAY_00b9e14c[96]
    MOV EAX,[0x00b9e2ec]                ; 00471bea | g_UINT_ARRAY_00b9e14c[104]
    MOV EAX,[0x00b9e30c]                ; 00471bef | g_UINT_ARRAY_00b9e14c[112]
    MOV EAX,[0x00b9e32c]                ; 00471bf4 | g_UINT_ARRAY_00b9e14c[120]
    MOV EAX,[0x00b9e34c]                ; 00471bf9 | g_UINT_ARRAY_00b9e14c[128]
    MOV EAX,[0x00b9e36c]                ; 00471bfe | g_UINT_ARRAY_00b9e14c[136]
    MOV EAX,[0x00b9e38c]                ; 00471c03 | g_UINT_ARRAY_00b9e14c[144]
    MOV EAX,[0x00b9e3ac]                ; 00471c08 | g_UINT_ARRAY_00b9e14c[152]
    MOV EAX,[0x00b9e3cc]                ; 00471c0d | g_UINT_ARRAY_00b9e14c[160]
    MOV EAX,[0x00b9e3ec]                ; 00471c12 | g_UINT_ARRAY_00b9e14c[168]
    MOV EAX,[0x00b9e40c]                ; 00471c17 | g_UINT_ARRAY_00b9e14c[176]
    MOV EAX,[0x00b9e42c]                ; 00471c1c | g_UINT_ARRAY_00b9e14c[184]
    MOV EAX,[0x00b9e44c]                ; 00471c21 | g_UINT_ARRAY_00b9e14c[192]
    MOV EAX,[0x00b9e46c]                ; 00471c26 | g_UINT_ARRAY_00b9e14c[200]
    MOV EAX,[0x00b9e48c]                ; 00471c2b | g_UINT_ARRAY_00b9e14c[208]
    MOV EAX,[0x00b9e4ac]                ; 00471c30 | g_UINT_ARRAY_00b9e14c[216]
    MOV EAX,[0x00b9e4cc]                ; 00471c35 | g_UINT_ARRAY_00b9e14c[224]
    MOV EAX,[0x00b9e4ec]                ; 00471c3a | g_UINT_ARRAY_00b9e14c[232]
    MOV EAX,[0x00b9e50c]                ; 00471c3f | g_UINT_ARRAY_00b9e14c[240]
    MOV EAX,[0x00b9e52c]                ; 00471c44 | g_UINT_ARRAY_00b9e14c[248]
    MOV EAX,[0x005fa0e0]                ; 00471c49 | g_USHORT_ARRAY_005fa0e0
    MOV EAX,[0x005fa100]                ; 00471c4e | g_USHORT_ARRAY_005fa0e0[16]
    MOV EAX,[0x005fa120]                ; 00471c53 | g_USHORT_ARRAY_005fa0e0[32]
    MOV EAX,[0x005fa140]                ; 00471c58 | g_USHORT_ARRAY_005fa0e0[48]
    MOV EAX,[0x005fa160]                ; 00471c5d | g_USHORT_ARRAY_005fa0e0[64]
    MOV EAX,[0x005fa180]                ; 00471c62 | g_USHORT_ARRAY_005fa0e0[80]
    MOV EAX,[0x005fa1a0]                ; 00471c67 | g_USHORT_ARRAY_005fa0e0[96]
    MOV EAX,[0x005fa1c0]                ; 00471c6c | g_USHORT_ARRAY_005fa0e0[112]
    MOV EAX,[0x005fa1e0]                ; 00471c71 | g_USHORT_ARRAY_005fa0e0[128]
    MOV EAX,[0x005fa200]                ; 00471c76 | g_USHORT_ARRAY_005fa0e0[144]
    MOV EAX,[0x005fa220]                ; 00471c7b | g_USHORT_ARRAY_005fa0e0[160]
    MOV EAX,[0x005fa240]                ; 00471c80 | g_USHORT_ARRAY_005fa0e0[176]
    MOV EAX,[0x005fa260]                ; 00471c85 | g_USHORT_ARRAY_005fa0e0[192]
    MOV EAX,[0x005fa280]                ; 00471c8a | g_USHORT_ARRAY_005fa0e0[208]
    MOV EAX,[0x005fa2a0]                ; 00471c8f | g_USHORT_ARRAY_005fa0e0[224]
    MOV EAX,[0x005fa2c0]                ; 00471c94 | g_USHORT_ARRAY_005fa0e0[240]
    MOV EAX,[0x005fa2e0]                ; 00471c99 | g_USHORT_ARRAY_005fa0e0[256]
    MOV EAX,[0x005fa300]                ; 00471c9e | g_USHORT_ARRAY_005fa0e0[272]
    MOV EAX,[0x005fa320]                ; 00471ca3 | g_USHORT_ARRAY_005fa0e0[288]
    MOV EAX,[0x005fa340]                ; 00471ca8 | g_USHORT_ARRAY_005fa0e0[304]
    MOV EAX,[0x005fa360]                ; 00471cad | g_USHORT_ARRAY_005fa0e0[320]
    MOV EAX,[0x005fa380]                ; 00471cb2 | g_USHORT_ARRAY_005fa0e0[336]
    MOV EAX,[0x005fa3a0]                ; 00471cb7 | g_USHORT_ARRAY_005fa0e0[352]
    MOV EAX,[0x005fa3c0]                ; 00471cbc | g_USHORT_ARRAY_005fa0e0[368]
    MOV EAX,[0x005fa3e0]                ; 00471cc1 | g_USHORT_ARRAY_005fa0e0[384]
    MOV EAX,[0x005fa400]                ; 00471cc6 | g_USHORT_ARRAY_005fa0e0[400]
    MOV EAX,[0x005fa420]                ; 00471ccb | g_USHORT_ARRAY_005fa0e0[416]
    MOV EAX,[0x005fa440]                ; 00471cd0 | g_USHORT_ARRAY_005fa0e0[432]
    MOV EAX,[0x005fa460]                ; 00471cd5 | g_USHORT_ARRAY_005fa0e0[448]
    MOV EAX,[0x005fa480]                ; 00471cda | g_USHORT_ARRAY_005fa0e0[464]
    MOV EAX,[0x005fa4a0]                ; 00471cdf | g_USHORT_ARRAY_005fa0e0[480]
    MOV EAX,[0x005fa4c0]                ; 00471ce4 | g_USHORT_ARRAY_005fa0e0[496]
    MOV EAX,[0x005fa4e0]                ; 00471ce9 | g_USHORT_ARRAY_005fa0e0[512]
    MOV EAX,[0x005fa500]                ; 00471cee | g_USHORT_ARRAY_005fa0e0[528]
    MOV EAX,[0x005fa520]                ; 00471cf3 | g_USHORT_ARRAY_005fa0e0[544]
    MOV EAX,[0x005fa540]                ; 00471cf8 | g_USHORT_ARRAY_005fa0e0[560]
    MOV EAX,[0x005fa560]                ; 00471cfd | g_USHORT_ARRAY_005fa0e0[576]
    MOV EAX,[0x005fa580]                ; 00471d02 | g_USHORT_ARRAY_005fa0e0[592]
    MOV EAX,[0x005fa5a0]                ; 00471d07 | g_USHORT_ARRAY_005fa0e0[608]
    MOV EAX,[0x005fa5c0]                ; 00471d0c | g_USHORT_ARRAY_005fa0e0[624]
    MOV EAX,[0x005fa5e0]                ; 00471d11 | g_USHORT_ARRAY_005fa0e0[640]
    MOV EAX,[0x005fa600]                ; 00471d16 | g_USHORT_ARRAY_005fa0e0[656]
    MOV EAX,[0x005fa620]                ; 00471d1b | g_USHORT_ARRAY_005fa0e0[672]
    MOV EAX,[0x005fa640]                ; 00471d20 | g_USHORT_ARRAY_005fa0e0[688]
    MOV EAX,[0x005fa660]                ; 00471d25 | g_USHORT_ARRAY_005fa0e0[704]
    MOV EAX,[0x005fa680]                ; 00471d2a | g_USHORT_ARRAY_005fa0e0[720]
    MOV EAX,[0x005fa6a0]                ; 00471d2f | g_USHORT_ARRAY_005fa0e0[736]
    MOV EAX,[0x005fa6c0]                ; 00471d34 | g_USHORT_ARRAY_005fa0e0[752]
    MOV EAX,[0x005fa6e0]                ; 00471d39 | g_USHORT_ARRAY_005fa0e0[768]
    MOV EAX,[0x005fa700]                ; 00471d3e | g_USHORT_ARRAY_005fa0e0[784]
    MOV EAX,[0x005fa720]                ; 00471d43 | g_USHORT_ARRAY_005fa0e0[800]
    MOV EAX,[0x005fa740]                ; 00471d48 | g_USHORT_ARRAY_005fa0e0[816]
    MOV EAX,[0x005fa760]                ; 00471d4d | g_USHORT_ARRAY_005fa0e0[832]
    MOV EAX,[0x005fa780]                ; 00471d52 | g_USHORT_ARRAY_005fa0e0[848]
    MOV EAX,[0x005fa7a0]                ; 00471d57 | g_USHORT_ARRAY_005fa0e0[864]
    MOV EAX,[0x005fa7c0]                ; 00471d5c | g_USHORT_ARRAY_005fa0e0[880]
    MOV EAX,[0x005fa7e0]                ; 00471d61 | g_USHORT_ARRAY_005fa0e0[896]
    MOV EAX,[0x005fa800]                ; 00471d66 | g_USHORT_ARRAY_005fa0e0[912]
    MOV EAX,[0x005fa820]                ; 00471d6b | g_USHORT_ARRAY_005fa0e0[928]
    MOV EAX,[0x005fa840]                ; 00471d70 | g_USHORT_ARRAY_005fa0e0[944]
    MOV EAX,[0x005fa860]                ; 00471d75 | g_USHORT_ARRAY_005fa0e0[960]
    MOV EAX,[0x005fa880]                ; 00471d7a | g_USHORT_ARRAY_005fa0e0[976]
    MOV EAX,[0x005fa8a0]                ; 00471d7f | g_USHORT_ARRAY_005fa0e0[992]
    MOV EAX,[0x005fa8c0]                ; 00471d84 | g_USHORT_ARRAY_005fa0e0[1008]
    MOVZX EDX,byte ptr [EBX]            ; 00471d89
        ;   Label: LAB_00471d89
    MOVD MM0,dword ptr [ESI]            ; 00471d8c
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00471d8f | g_UINT_ARRAY_00b9e14c
    MOVZX EAX,byte ptr [EBP]            ; 00471d97
    PUNPCKLBW MM0,MM7                   ; 00471d9b
    SHR EDX,0x1                         ; 00471d9e
    PUNPCKLBW MM2,MM7                   ; 00471da0
    ADD EAX,EDX                         ; 00471da3
    PMULLW MM0,MM2                      ; 00471da5
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 00471da8 | g_USHORT_ARRAY_005fa0e0
    MOVQ MM2,MM3                        ; 00471db0
    MOVQ MM4,MM5                        ; 00471db3
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00471db6 | g_USHORT_ARRAY_005fa0e0[1020]
    PMULHW MM0,MM2                      ; 00471dbd
    PMULHW MM4,MM3                      ; 00471dc0
    PADDW MM0,MM4                       ; 00471dc3
    PADDW MM0,qword ptr [0x005f8b68]    ; 00471dc6 | g_QWORD_005f8b68
    PSRLW MM0,0x4                       ; 00471dcd
    PACKUSWB MM0,MM7                    ; 00471dd1
    MOVD dword ptr [EDI],MM0            ; 00471dd4
    ADD ESI,0x4                         ; 00471dd7
    INC EBX                             ; 00471dda
    INC EBP                             ; 00471ddb
    ADD EDI,0x4                         ; 00471ddc
    MOVZX EDX,byte ptr [EBX]            ; 00471ddf
    MOVD MM0,dword ptr [ESI]            ; 00471de2
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00471de5 | g_UINT_ARRAY_00b9e14c
    MOVZX EAX,byte ptr [EBP]            ; 00471ded
    PUNPCKLBW MM0,MM7                   ; 00471df1
    SHR EDX,0x1                         ; 00471df4
    PUNPCKLBW MM2,MM7                   ; 00471df6
    ADD EAX,EDX                         ; 00471df9
    PMULLW MM0,MM2                      ; 00471dfb
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 00471dfe | g_USHORT_ARRAY_005fa0e0
    MOVQ MM2,MM3                        ; 00471e06
    MOVQ MM4,MM5                        ; 00471e09
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00471e0c | g_USHORT_ARRAY_005fa0e0[1020]
    PMULHW MM0,MM2                      ; 00471e13
    PMULHW MM4,MM3                      ; 00471e16
    PADDW MM0,MM4                       ; 00471e19
    PADDW MM0,qword ptr [0x005f8b70]    ; 00471e1c | g_QWORD_005f8b70
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

