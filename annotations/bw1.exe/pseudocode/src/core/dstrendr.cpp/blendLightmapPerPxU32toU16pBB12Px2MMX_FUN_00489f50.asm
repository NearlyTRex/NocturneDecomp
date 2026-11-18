; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00489f50(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0 at 0045404c
;
; Referenced Globals:
;   qword g_LightmapBlendBias1 = 0x0
;   qword g_LightmapBlendBias2 = 0x8000800080008
;   ushort[2048] g_LightmapData
;   undefined4 g_LightmapData[16]
;   undefined4 g_LightmapData[32]
;   undefined4 g_LightmapData[48]
;   undefined4 g_LightmapData[64]
;   undefined4 g_LightmapData[80]
;   undefined4 g_LightmapData[96]
;   undefined4 g_LightmapData[112]
;   undefined4 g_LightmapData[128]
;   undefined4 g_LightmapData[144]
;   undefined4 g_LightmapData[160]
;   undefined4 g_LightmapData[176]
;   undefined4 g_LightmapData[192]
;   ... and 91 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00489f50
        ;   Label: core_dstrendr.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00489f50
    MOV EBP,ESP                         ; 00489f51
    PUSH ESI                            ; 00489f53
    PUSH EDI                            ; 00489f54
    PUSH EBP                            ; 00489f55
    MOV ECX,dword ptr [EBP + 0x18]      ; 00489f56
    MOV EDI,dword ptr [EBP + 0x8]       ; 00489f59
    MOV ESI,dword ptr [EBP + 0xc]       ; 00489f5c
    MOV EBX,dword ptr [EBP + 0x10]      ; 00489f5f
    MOV EBP,dword ptr [EBP + 0x14]      ; 00489f62
    PXOR MM7,MM7                        ; 00489f65
    MOVD MM5,dword ptr [0x01c51d1c]     ; 00489f68 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 00489f6f
    PSLLW MM5,0x6                       ; 00489f72
    MOV EAX,dword ptr [EBX]             ; 00489f76
    MOV EAX,dword ptr [EBX + 0x20]      ; 00489f78
    MOV EAX,dword ptr [EBX + 0x40]      ; 00489f7b
    MOV EAX,dword ptr [EBX + 0x60]      ; 00489f7e
    MOV EAX,dword ptr [EBX + 0x80]      ; 00489f81
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00489f87
    MOV EAX,dword ptr [EBX + 0xc0]      ; 00489f8d
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00489f93
    MOV EAX,dword ptr [EBX + 0x100]     ; 00489f99
    MOV EAX,dword ptr [EBX + 0x120]     ; 00489f9f
    MOV EDX,dword ptr [EBP]             ; 00489fa5
    MOV EDX,dword ptr [EBP + 0x20]      ; 00489fa8
    MOV EDX,dword ptr [EBP + 0x40]      ; 00489fab
    MOV EDX,dword ptr [EBP + 0x60]      ; 00489fae
    MOV EDX,dword ptr [EBP + 0x80]      ; 00489fb1
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00489fb7
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00489fbd
    MOV EDX,dword ptr [EBP + 0xe0]      ; 00489fc3
    MOV EDX,dword ptr [EBP + 0x100]     ; 00489fc9
    MOV EDX,dword ptr [EBP + 0x120]     ; 00489fcf
    MOV EAX,dword ptr [ESI]             ; 00489fd5
    MOV EAX,dword ptr [ESI + 0x20]      ; 00489fd7
    MOV EAX,dword ptr [ESI + 0x40]      ; 00489fda
    MOV EAX,dword ptr [ESI + 0x60]      ; 00489fdd
    MOV EAX,dword ptr [ESI + 0x80]      ; 00489fe0
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00489fe6
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00489fec
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00489ff2
    MOV EAX,dword ptr [ESI + 0x100]     ; 00489ff8
    MOV EAX,dword ptr [ESI + 0x120]     ; 00489ffe
    MOV EAX,dword ptr [ESI + 0x140]     ; 0048a004
    MOV EAX,dword ptr [ESI + 0x160]     ; 0048a00a
    MOV EAX,dword ptr [ESI + 0x180]     ; 0048a010
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 0048a016
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 0048a01c
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 0048a022
    MOV EAX,dword ptr [ESI + 0x200]     ; 0048a028
    MOV EAX,dword ptr [ESI + 0x220]     ; 0048a02e
    MOV EAX,dword ptr [ESI + 0x240]     ; 0048a034
    MOV EAX,dword ptr [ESI + 0x260]     ; 0048a03a
    MOV EAX,dword ptr [ESI + 0x280]     ; 0048a040
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 0048a046
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 0048a04c
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 0048a052
    MOV EAX,dword ptr [ESI + 0x300]     ; 0048a058
    MOV EAX,dword ptr [ESI + 0x320]     ; 0048a05e
    MOV EAX,dword ptr [ESI + 0x340]     ; 0048a064
    MOV EAX,dword ptr [ESI + 0x360]     ; 0048a06a
    MOV EAX,dword ptr [ESI + 0x380]     ; 0048a070
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 0048a076
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0048a07c
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 0048a082
    MOV EAX,dword ptr [ESI + 0x400]     ; 0048a088
    MOV EAX,dword ptr [ESI + 0x420]     ; 0048a08e
    MOV EAX,dword ptr [ESI + 0x440]     ; 0048a094
    MOV EAX,dword ptr [ESI + 0x460]     ; 0048a09a
    MOV EAX,dword ptr [ESI + 0x480]     ; 0048a0a0
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 0048a0a6
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 0048a0ac
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 0048a0b2
    MOV EAX,dword ptr [ESI + 0x500]     ; 0048a0b8
    MOV EAX,dword ptr [ESI + 0x520]     ; 0048a0be
    MOV EAX,dword ptr [ESI + 0x540]     ; 0048a0c4
    MOV EAX,dword ptr [ESI + 0x560]     ; 0048a0ca
    MOV EAX,dword ptr [ESI + 0x580]     ; 0048a0d0
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 0048a0d6
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 0048a0dc
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 0048a0e2
    MOV EAX,dword ptr [ESI + 0x600]     ; 0048a0e8
    MOV EAX,dword ptr [ESI + 0x620]     ; 0048a0ee
    MOV EAX,dword ptr [ESI + 0x640]     ; 0048a0f4
    MOV EAX,dword ptr [ESI + 0x660]     ; 0048a0fa
    MOV EAX,dword ptr [ESI + 0x680]     ; 0048a100
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 0048a106
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 0048a10c
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 0048a112
    MOV EAX,dword ptr [ESI + 0x700]     ; 0048a118
    MOV EAX,dword ptr [ESI + 0x720]     ; 0048a11e
    MOV EAX,dword ptr [ESI + 0x740]     ; 0048a124
    MOV EAX,dword ptr [ESI + 0x760]     ; 0048a12a
    MOV EAX,dword ptr [ESI + 0x780]     ; 0048a130
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 0048a136
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 0048a13c
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 0048a142
    MOV EAX,dword ptr [ESI + 0x800]     ; 0048a148
    MOV EAX,dword ptr [ESI + 0x820]     ; 0048a14e
    MOV EAX,dword ptr [ESI + 0x840]     ; 0048a154
    MOV EAX,dword ptr [ESI + 0x860]     ; 0048a15a
    MOV EAX,dword ptr [ESI + 0x880]     ; 0048a160
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 0048a166
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 0048a16c
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 0048a172
    MOV EAX,dword ptr [ESI + 0x900]     ; 0048a178
    MOV EAX,dword ptr [ESI + 0x920]     ; 0048a17e
    MOV EAX,dword ptr [ESI + 0x940]     ; 0048a184
    MOV EAX,dword ptr [ESI + 0x960]     ; 0048a18a
    MOV EAX,dword ptr [ESI + 0x980]     ; 0048a190
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 0048a196
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 0048a19c
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 0048a1a2
    MOV EAX,[0x00b8189c]                ; 0048a1a8 | g_LightmapTexturePalette
    MOV EAX,[0x00b818bc]                ; 0048a1ad | g_LightmapTexturePalette[8]
    MOV EAX,[0x00b818dc]                ; 0048a1b2 | g_LightmapTexturePalette[16]
    MOV EAX,[0x00b818fc]                ; 0048a1b7 | g_LightmapTexturePalette[24]
    MOV EAX,[0x00b8191c]                ; 0048a1bc | g_LightmapTexturePalette[32]
    MOV EAX,[0x00b8193c]                ; 0048a1c1 | g_LightmapTexturePalette[40]
    MOV EAX,[0x00b8195c]                ; 0048a1c6 | g_LightmapTexturePalette[48]
    MOV EAX,[0x00b8197c]                ; 0048a1cb | g_LightmapTexturePalette[56]
    MOV EAX,[0x00b8199c]                ; 0048a1d0 | g_LightmapTexturePalette[64]
    MOV EAX,[0x00b819bc]                ; 0048a1d5 | g_LightmapTexturePalette[72]
    MOV EAX,[0x00b819dc]                ; 0048a1da | g_LightmapTexturePalette[80]
    MOV EAX,[0x00b819fc]                ; 0048a1df | g_LightmapTexturePalette[88]
    MOV EAX,[0x00b81a1c]                ; 0048a1e4 | g_LightmapTexturePalette[96]
    MOV EAX,[0x00b81a3c]                ; 0048a1e9 | g_LightmapTexturePalette[104]
    MOV EAX,[0x00b81a5c]                ; 0048a1ee | g_LightmapTexturePalette[112]
    MOV EAX,[0x00b81a7c]                ; 0048a1f3 | g_LightmapTexturePalette[120]
    MOV EAX,[0x00b81a9c]                ; 0048a1f8 | g_LightmapTexturePalette[128]
    MOV EAX,[0x00b81abc]                ; 0048a1fd | g_LightmapTexturePalette[136]
    MOV EAX,[0x00b81adc]                ; 0048a202 | g_LightmapTexturePalette[144]
    MOV EAX,[0x00b81afc]                ; 0048a207 | g_LightmapTexturePalette[152]
    MOV EAX,[0x00b81b1c]                ; 0048a20c | g_LightmapTexturePalette[160]
    MOV EAX,[0x00b81b3c]                ; 0048a211 | g_LightmapTexturePalette[168]
    MOV EAX,[0x00b81b5c]                ; 0048a216 | g_LightmapTexturePalette[176]
    MOV EAX,[0x00b81b7c]                ; 0048a21b | g_LightmapTexturePalette[184]
    MOV EAX,[0x00b81b9c]                ; 0048a220 | g_LightmapTexturePalette[192]
    MOV EAX,[0x00b81bbc]                ; 0048a225 | g_LightmapTexturePalette[200]
    MOV EAX,[0x00b81bdc]                ; 0048a22a | g_LightmapTexturePalette[208]
    MOV EAX,[0x00b81bfc]                ; 0048a22f | g_LightmapTexturePalette[216]
    MOV EAX,[0x00b81c1c]                ; 0048a234 | g_LightmapTexturePalette[224]
    MOV EAX,[0x00b81c3c]                ; 0048a239 | g_LightmapTexturePalette[232]
    MOV EAX,[0x00b81c5c]                ; 0048a23e | g_LightmapTexturePalette[240]
    MOV EAX,[0x00b81c7c]                ; 0048a243 | g_LightmapTexturePalette[248]
    MOV EAX,[0x00619b60]                ; 0048a248 | g_LightmapData
    MOV EAX,[0x00619b80]                ; 0048a24d | g_LightmapData[16]
    MOV EAX,[0x00619ba0]                ; 0048a252 | g_LightmapData[32]
    MOV EAX,[0x00619bc0]                ; 0048a257 | g_LightmapData[48]
    MOV EAX,[0x00619be0]                ; 0048a25c | g_LightmapData[64]
    MOV EAX,[0x00619c00]                ; 0048a261 | g_LightmapData[80]
    MOV EAX,[0x00619c20]                ; 0048a266 | g_LightmapData[96]
    MOV EAX,[0x00619c40]                ; 0048a26b | g_LightmapData[112]
    MOV EAX,[0x00619c60]                ; 0048a270 | g_LightmapData[128]
    MOV EAX,[0x00619c80]                ; 0048a275 | g_LightmapData[144]
    MOV EAX,[0x00619ca0]                ; 0048a27a | g_LightmapData[160]
    MOV EAX,[0x00619cc0]                ; 0048a27f | g_LightmapData[176]
    MOV EAX,[0x00619ce0]                ; 0048a284 | g_LightmapData[192]
    MOV EAX,[0x00619d00]                ; 0048a289 | g_LightmapData[208]
    MOV EAX,[0x00619d20]                ; 0048a28e | g_LightmapData[224]
    MOV EAX,[0x00619d40]                ; 0048a293 | g_LightmapData[240]
    MOV EAX,[0x00619d60]                ; 0048a298 | g_LightmapData[256]
    MOV EAX,[0x00619d80]                ; 0048a29d | g_LightmapData[272]
    MOV EAX,[0x00619da0]                ; 0048a2a2 | g_LightmapData[288]
    MOV EAX,[0x00619dc0]                ; 0048a2a7 | g_LightmapData[304]
    MOV EAX,[0x00619de0]                ; 0048a2ac | g_LightmapData[320]
    MOV EAX,[0x00619e00]                ; 0048a2b1 | g_LightmapData[336]
    MOV EAX,[0x00619e20]                ; 0048a2b6 | g_LightmapData[352]
    MOV EAX,[0x00619e40]                ; 0048a2bb | g_LightmapData[368]
    MOV EAX,[0x00619e60]                ; 0048a2c0 | g_LightmapData[384]
    MOV EAX,[0x00619e80]                ; 0048a2c5 | g_LightmapData[400]
    MOV EAX,[0x00619ea0]                ; 0048a2ca | g_LightmapData[416]
    MOV EAX,[0x00619ec0]                ; 0048a2cf | g_LightmapData[432]
    MOV EAX,[0x00619ee0]                ; 0048a2d4 | g_LightmapData[448]
    MOV EAX,[0x00619f00]                ; 0048a2d9 | g_LightmapData[464]
    MOV EAX,[0x00619f20]                ; 0048a2de | g_LightmapData[480]
    MOV EAX,[0x00619f40]                ; 0048a2e3 | g_LightmapData[496]
    MOV EAX,[0x00619f60]                ; 0048a2e8 | g_LightmapData[512]
    MOV EAX,[0x00619f80]                ; 0048a2ed | g_LightmapData[528]
    MOV EAX,[0x00619fa0]                ; 0048a2f2 | g_LightmapData[544]
    MOV EAX,[0x00619fc0]                ; 0048a2f7 | g_LightmapData[560]
    MOV EAX,[0x00619fe0]                ; 0048a2fc | g_LightmapData[576]
    MOV EAX,[0x0061a000]                ; 0048a301 | g_LightmapData[592]
    MOV EAX,[0x0061a020]                ; 0048a306 | g_LightmapData[608]
    MOV EAX,[0x0061a040]                ; 0048a30b | g_LightmapData[624]
    MOV EAX,[0x0061a060]                ; 0048a310 | g_LightmapData[640]
    MOV EAX,[0x0061a080]                ; 0048a315 | g_LightmapData[656]
    MOV EAX,[0x0061a0a0]                ; 0048a31a | g_LightmapData[672]
    MOV EAX,[0x0061a0c0]                ; 0048a31f | g_LightmapData[688]
    MOV EAX,[0x0061a0e0]                ; 0048a324 | g_LightmapData[704]
    MOV EAX,[0x0061a100]                ; 0048a329 | g_LightmapData[720]
    MOV EAX,[0x0061a120]                ; 0048a32e | g_LightmapData[736]
    MOV EAX,[0x0061a140]                ; 0048a333 | g_LightmapData[752]
    MOV EAX,[0x0061a160]                ; 0048a338 | g_LightmapData[768]
    MOV EAX,[0x0061a180]                ; 0048a33d | g_LightmapData[784]
    MOV EAX,[0x0061a1a0]                ; 0048a342 | g_LightmapData[800]
    MOV EAX,[0x0061a1c0]                ; 0048a347 | g_LightmapData[816]
    MOV EAX,[0x0061a1e0]                ; 0048a34c | g_LightmapData[832]
    MOV EAX,[0x0061a200]                ; 0048a351 | g_LightmapData[848]
    MOV EAX,[0x0061a220]                ; 0048a356 | g_LightmapData[864]
    MOV EAX,[0x0061a240]                ; 0048a35b | g_LightmapData[880]
    MOV EAX,[0x0061a260]                ; 0048a360 | g_LightmapData[896]
    MOV EAX,[0x0061a280]                ; 0048a365 | g_LightmapData[912]
    MOV EAX,[0x0061a2a0]                ; 0048a36a | g_LightmapData[928]
    MOV EAX,[0x0061a2c0]                ; 0048a36f | g_LightmapData[944]
    MOV EAX,[0x0061a2e0]                ; 0048a374 | g_LightmapData[960]
    MOV EAX,[0x0061a300]                ; 0048a379 | g_LightmapData[976]
    MOV EAX,[0x0061a320]                ; 0048a37e | g_LightmapData[992]
    MOV EAX,[0x0061a340]                ; 0048a383 | g_LightmapData[1008]
    MOVZX EDX,byte ptr [EBX]            ; 0048a388
        ;   Label: LAB_0048a388
    MOVD MM0,dword ptr [ESI]            ; 0048a38b
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 0048a38e | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 0048a396
    PUNPCKLBW MM0,MM7                   ; 0048a39a
    SHR EDX,0x1                         ; 0048a39d
    PUNPCKLBW MM2,MM7                   ; 0048a39f
    ADD EAX,EDX                         ; 0048a3a2
    PMULLW MM0,MM2                      ; 0048a3a4
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 0048a3a7 | g_LightmapData
    MOVQ MM2,MM3                        ; 0048a3af
    MOVQ MM4,MM5                        ; 0048a3b2
    PXOR MM2,qword ptr [0x0061a358]     ; 0048a3b5 | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 0048a3bc
    PMULHW MM4,MM3                      ; 0048a3bf
    PADDW MM0,MM4                       ; 0048a3c2
    PADDW MM0,qword ptr [0x006185e8]    ; 0048a3c5 | g_LightmapBlendBias1
    PSRLW MM0,0x4                       ; 0048a3cc
    PACKUSWB MM0,MM7                    ; 0048a3d0
    MOVQ MM2,MM0                        ; 0048a3d3
    MOVQ MM3,MM0                        ; 0048a3d6
    PAND MM0,qword ptr [0x00623f78]     ; 0048a3d9 | g_BlueMask32
    PAND MM2,qword ptr [0x00623f58]     ; 0048a3e0 | g_GreenMask32
    PAND MM3,qword ptr [0x00623f38]     ; 0048a3e7 | g_RedMask32
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 0048a3ee | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 0048a3f5 | g_GreenBlueDitherShift
    PSRLQ MM3,qword ptr [0x00623f80]    ; 0048a3fc | g_TotalDitherShift
    POR MM0,MM2                         ; 0048a403
    POR MM0,MM3                         ; 0048a406
    MOVQ MM6,MM0                        ; 0048a409
    ADD ESI,0x4                         ; 0048a40c
    INC EBX                             ; 0048a40f
    INC EBP                             ; 0048a410
    MOVZX EDX,byte ptr [EBX]            ; 0048a411
    MOVD MM0,dword ptr [ESI]            ; 0048a414
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 0048a417 | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 0048a41f
    PUNPCKLBW MM0,MM7                   ; 0048a423
    SHR EDX,0x1                         ; 0048a426
    PUNPCKLBW MM2,MM7                   ; 0048a428
    ADD EAX,EDX                         ; 0048a42b
    PMULLW MM0,MM2                      ; 0048a42d
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 0048a430 | g_LightmapData
    MOVQ MM2,MM3                        ; 0048a438
    MOVQ MM4,MM5                        ; 0048a43b
    PXOR MM2,qword ptr [0x0061a358]     ; 0048a43e | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 0048a445
    PMULHW MM4,MM3                      ; 0048a448
    PADDW MM0,MM4                       ; 0048a44b
    PADDW MM0,qword ptr [0x006185f0]    ; 0048a44e | g_LightmapBlendBias2
    PSRLW MM0,0x4                       ; 0048a455
    PACKUSWB MM0,MM7                    ; 0048a459
    MOVQ MM2,MM0                        ; 0048a45c
    MOVQ MM3,MM0                        ; 0048a45f
    PAND MM0,qword ptr [0x00623f78]     ; 0048a462 | g_BlueMask32
    PAND MM2,qword ptr [0x00623f58]     ; 0048a469 | g_GreenMask32
    PAND MM3,qword ptr [0x00623f38]     ; 0048a470 | g_RedMask32
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 0048a477 | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 0048a47e | g_GreenBlueDitherShift
    PSRLQ MM3,qword ptr [0x00623f80]    ; 0048a485 | g_TotalDitherShift
    POR MM0,MM2                         ; 0048a48c
    POR MM0,MM3                         ; 0048a48f
    PSLLQ MM0,0x10                      ; 0048a492
    POR MM0,MM6                         ; 0048a496
    MOVD dword ptr [EDI],MM0            ; 0048a499
    ADD ESI,0x4                         ; 0048a49c
    INC EBX                             ; 0048a49f
    INC EBP                             ; 0048a4a0
    ADD EDI,0x4                         ; 0048a4a1
    SUB ECX,0x2                         ; 0048a4a4
    JG 0x0048a388                       ; 0048a4a7
        ;   XREF to: 0048a388 (CONDITIONAL_JUMP)  ; LAB_0048a388
    POP EBP                             ; 0048a4ad
    EMMS                                ; 0048a4ae
    POP EDI                             ; 0048a4b0
    POP ESI                             ; 0048a4b1
    LEAVE                               ; 0048a4b2
    RET                                 ; 0048a4b3

