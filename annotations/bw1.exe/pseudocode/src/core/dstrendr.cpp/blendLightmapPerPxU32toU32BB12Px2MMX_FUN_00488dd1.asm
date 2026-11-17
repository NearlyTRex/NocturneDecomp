; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_00488dd1(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0 at 004541c3
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
;   ... and 85 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00488dd1
        ;   Label: core_dstrendr.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_00488dd1
    MOV EBP,ESP                         ; 00488dd2
    PUSH ESI                            ; 00488dd4
    PUSH EDI                            ; 00488dd5
    PUSH EBP                            ; 00488dd6
    MOV ECX,dword ptr [EBP + 0x18]      ; 00488dd7
    MOV EDI,dword ptr [EBP + 0x8]       ; 00488dda
    MOV ESI,dword ptr [EBP + 0xc]       ; 00488ddd
    MOV EBX,dword ptr [EBP + 0x10]      ; 00488de0
    MOV EBP,dword ptr [EBP + 0x14]      ; 00488de3
    PXOR MM7,MM7                        ; 00488de6
    MOVD MM5,dword ptr [0x01c51d1c]     ; 00488de9 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 00488df0
    PSLLW MM5,0x6                       ; 00488df3
    MOV EAX,dword ptr [EBX]             ; 00488df7
    MOV EAX,dword ptr [EBX + 0x20]      ; 00488df9
    MOV EAX,dword ptr [EBX + 0x40]      ; 00488dfc
    MOV EAX,dword ptr [EBX + 0x60]      ; 00488dff
    MOV EAX,dword ptr [EBX + 0x80]      ; 00488e02
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00488e08
    MOV EAX,dword ptr [EBX + 0xc0]      ; 00488e0e
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00488e14
    MOV EAX,dword ptr [EBX + 0x100]     ; 00488e1a
    MOV EAX,dword ptr [EBX + 0x120]     ; 00488e20
    MOV EDX,dword ptr [EBP]             ; 00488e26
    MOV EDX,dword ptr [EBP + 0x20]      ; 00488e29
    MOV EDX,dword ptr [EBP + 0x40]      ; 00488e2c
    MOV EDX,dword ptr [EBP + 0x60]      ; 00488e2f
    MOV EDX,dword ptr [EBP + 0x80]      ; 00488e32
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00488e38
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00488e3e
    MOV EDX,dword ptr [EBP + 0xe0]      ; 00488e44
    MOV EDX,dword ptr [EBP + 0x100]     ; 00488e4a
    MOV EDX,dword ptr [EBP + 0x120]     ; 00488e50
    MOV EAX,dword ptr [ESI]             ; 00488e56
    MOV EAX,dword ptr [ESI + 0x20]      ; 00488e58
    MOV EAX,dword ptr [ESI + 0x40]      ; 00488e5b
    MOV EAX,dword ptr [ESI + 0x60]      ; 00488e5e
    MOV EAX,dword ptr [ESI + 0x80]      ; 00488e61
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00488e67
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00488e6d
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00488e73
    MOV EAX,dword ptr [ESI + 0x100]     ; 00488e79
    MOV EAX,dword ptr [ESI + 0x120]     ; 00488e7f
    MOV EAX,dword ptr [ESI + 0x140]     ; 00488e85
    MOV EAX,dword ptr [ESI + 0x160]     ; 00488e8b
    MOV EAX,dword ptr [ESI + 0x180]     ; 00488e91
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00488e97
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00488e9d
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00488ea3
    MOV EAX,dword ptr [ESI + 0x200]     ; 00488ea9
    MOV EAX,dword ptr [ESI + 0x220]     ; 00488eaf
    MOV EAX,dword ptr [ESI + 0x240]     ; 00488eb5
    MOV EAX,dword ptr [ESI + 0x260]     ; 00488ebb
    MOV EAX,dword ptr [ESI + 0x280]     ; 00488ec1
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00488ec7
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00488ecd
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00488ed3
    MOV EAX,dword ptr [ESI + 0x300]     ; 00488ed9
    MOV EAX,dword ptr [ESI + 0x320]     ; 00488edf
    MOV EAX,dword ptr [ESI + 0x340]     ; 00488ee5
    MOV EAX,dword ptr [ESI + 0x360]     ; 00488eeb
    MOV EAX,dword ptr [ESI + 0x380]     ; 00488ef1
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00488ef7
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00488efd
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00488f03
    MOV EAX,dword ptr [ESI + 0x400]     ; 00488f09
    MOV EAX,dword ptr [ESI + 0x420]     ; 00488f0f
    MOV EAX,dword ptr [ESI + 0x440]     ; 00488f15
    MOV EAX,dword ptr [ESI + 0x460]     ; 00488f1b
    MOV EAX,dword ptr [ESI + 0x480]     ; 00488f21
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00488f27
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00488f2d
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00488f33
    MOV EAX,dword ptr [ESI + 0x500]     ; 00488f39
    MOV EAX,dword ptr [ESI + 0x520]     ; 00488f3f
    MOV EAX,dword ptr [ESI + 0x540]     ; 00488f45
    MOV EAX,dword ptr [ESI + 0x560]     ; 00488f4b
    MOV EAX,dword ptr [ESI + 0x580]     ; 00488f51
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00488f57
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00488f5d
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00488f63
    MOV EAX,dword ptr [ESI + 0x600]     ; 00488f69
    MOV EAX,dword ptr [ESI + 0x620]     ; 00488f6f
    MOV EAX,dword ptr [ESI + 0x640]     ; 00488f75
    MOV EAX,dword ptr [ESI + 0x660]     ; 00488f7b
    MOV EAX,dword ptr [ESI + 0x680]     ; 00488f81
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00488f87
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00488f8d
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00488f93
    MOV EAX,dword ptr [ESI + 0x700]     ; 00488f99
    MOV EAX,dword ptr [ESI + 0x720]     ; 00488f9f
    MOV EAX,dword ptr [ESI + 0x740]     ; 00488fa5
    MOV EAX,dword ptr [ESI + 0x760]     ; 00488fab
    MOV EAX,dword ptr [ESI + 0x780]     ; 00488fb1
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00488fb7
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00488fbd
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00488fc3
    MOV EAX,dword ptr [ESI + 0x800]     ; 00488fc9
    MOV EAX,dword ptr [ESI + 0x820]     ; 00488fcf
    MOV EAX,dword ptr [ESI + 0x840]     ; 00488fd5
    MOV EAX,dword ptr [ESI + 0x860]     ; 00488fdb
    MOV EAX,dword ptr [ESI + 0x880]     ; 00488fe1
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00488fe7
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00488fed
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00488ff3
    MOV EAX,dword ptr [ESI + 0x900]     ; 00488ff9
    MOV EAX,dword ptr [ESI + 0x920]     ; 00488fff
    MOV EAX,dword ptr [ESI + 0x940]     ; 00489005
    MOV EAX,dword ptr [ESI + 0x960]     ; 0048900b
    MOV EAX,dword ptr [ESI + 0x980]     ; 00489011
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00489017
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 0048901d
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00489023
    MOV EAX,[0x00b8189c]                ; 00489029 | g_LightmapTexturePalette
    MOV EAX,[0x00b818bc]                ; 0048902e | g_LightmapTexturePalette[8]
    MOV EAX,[0x00b818dc]                ; 00489033 | g_LightmapTexturePalette[16]
    MOV EAX,[0x00b818fc]                ; 00489038 | g_LightmapTexturePalette[24]
    MOV EAX,[0x00b8191c]                ; 0048903d | g_LightmapTexturePalette[32]
    MOV EAX,[0x00b8193c]                ; 00489042 | g_LightmapTexturePalette[40]
    MOV EAX,[0x00b8195c]                ; 00489047 | g_LightmapTexturePalette[48]
    MOV EAX,[0x00b8197c]                ; 0048904c | g_LightmapTexturePalette[56]
    MOV EAX,[0x00b8199c]                ; 00489051 | g_LightmapTexturePalette[64]
    MOV EAX,[0x00b819bc]                ; 00489056 | g_LightmapTexturePalette[72]
    MOV EAX,[0x00b819dc]                ; 0048905b | g_LightmapTexturePalette[80]
    MOV EAX,[0x00b819fc]                ; 00489060 | g_LightmapTexturePalette[88]
    MOV EAX,[0x00b81a1c]                ; 00489065 | g_LightmapTexturePalette[96]
    MOV EAX,[0x00b81a3c]                ; 0048906a | g_LightmapTexturePalette[104]
    MOV EAX,[0x00b81a5c]                ; 0048906f | g_LightmapTexturePalette[112]
    MOV EAX,[0x00b81a7c]                ; 00489074 | g_LightmapTexturePalette[120]
    MOV EAX,[0x00b81a9c]                ; 00489079 | g_LightmapTexturePalette[128]
    MOV EAX,[0x00b81abc]                ; 0048907e | g_LightmapTexturePalette[136]
    MOV EAX,[0x00b81adc]                ; 00489083 | g_LightmapTexturePalette[144]
    MOV EAX,[0x00b81afc]                ; 00489088 | g_LightmapTexturePalette[152]
    MOV EAX,[0x00b81b1c]                ; 0048908d | g_LightmapTexturePalette[160]
    MOV EAX,[0x00b81b3c]                ; 00489092 | g_LightmapTexturePalette[168]
    MOV EAX,[0x00b81b5c]                ; 00489097 | g_LightmapTexturePalette[176]
    MOV EAX,[0x00b81b7c]                ; 0048909c | g_LightmapTexturePalette[184]
    MOV EAX,[0x00b81b9c]                ; 004890a1 | g_LightmapTexturePalette[192]
    MOV EAX,[0x00b81bbc]                ; 004890a6 | g_LightmapTexturePalette[200]
    MOV EAX,[0x00b81bdc]                ; 004890ab | g_LightmapTexturePalette[208]
    MOV EAX,[0x00b81bfc]                ; 004890b0 | g_LightmapTexturePalette[216]
    MOV EAX,[0x00b81c1c]                ; 004890b5 | g_LightmapTexturePalette[224]
    MOV EAX,[0x00b81c3c]                ; 004890ba | g_LightmapTexturePalette[232]
    MOV EAX,[0x00b81c5c]                ; 004890bf | g_LightmapTexturePalette[240]
    MOV EAX,[0x00b81c7c]                ; 004890c4 | g_LightmapTexturePalette[248]
    MOV EAX,[0x00619b60]                ; 004890c9 | g_LightmapData
    MOV EAX,[0x00619b80]                ; 004890ce | g_LightmapData[16]
    MOV EAX,[0x00619ba0]                ; 004890d3 | g_LightmapData[32]
    MOV EAX,[0x00619bc0]                ; 004890d8 | g_LightmapData[48]
    MOV EAX,[0x00619be0]                ; 004890dd | g_LightmapData[64]
    MOV EAX,[0x00619c00]                ; 004890e2 | g_LightmapData[80]
    MOV EAX,[0x00619c20]                ; 004890e7 | g_LightmapData[96]
    MOV EAX,[0x00619c40]                ; 004890ec | g_LightmapData[112]
    MOV EAX,[0x00619c60]                ; 004890f1 | g_LightmapData[128]
    MOV EAX,[0x00619c80]                ; 004890f6 | g_LightmapData[144]
    MOV EAX,[0x00619ca0]                ; 004890fb | g_LightmapData[160]
    MOV EAX,[0x00619cc0]                ; 00489100 | g_LightmapData[176]
    MOV EAX,[0x00619ce0]                ; 00489105 | g_LightmapData[192]
    MOV EAX,[0x00619d00]                ; 0048910a | g_LightmapData[208]
    MOV EAX,[0x00619d20]                ; 0048910f | g_LightmapData[224]
    MOV EAX,[0x00619d40]                ; 00489114 | g_LightmapData[240]
    MOV EAX,[0x00619d60]                ; 00489119 | g_LightmapData[256]
    MOV EAX,[0x00619d80]                ; 0048911e | g_LightmapData[272]
    MOV EAX,[0x00619da0]                ; 00489123 | g_LightmapData[288]
    MOV EAX,[0x00619dc0]                ; 00489128 | g_LightmapData[304]
    MOV EAX,[0x00619de0]                ; 0048912d | g_LightmapData[320]
    MOV EAX,[0x00619e00]                ; 00489132 | g_LightmapData[336]
    MOV EAX,[0x00619e20]                ; 00489137 | g_LightmapData[352]
    MOV EAX,[0x00619e40]                ; 0048913c | g_LightmapData[368]
    MOV EAX,[0x00619e60]                ; 00489141 | g_LightmapData[384]
    MOV EAX,[0x00619e80]                ; 00489146 | g_LightmapData[400]
    MOV EAX,[0x00619ea0]                ; 0048914b | g_LightmapData[416]
    MOV EAX,[0x00619ec0]                ; 00489150 | g_LightmapData[432]
    MOV EAX,[0x00619ee0]                ; 00489155 | g_LightmapData[448]
    MOV EAX,[0x00619f00]                ; 0048915a | g_LightmapData[464]
    MOV EAX,[0x00619f20]                ; 0048915f | g_LightmapData[480]
    MOV EAX,[0x00619f40]                ; 00489164 | g_LightmapData[496]
    MOV EAX,[0x00619f60]                ; 00489169 | g_LightmapData[512]
    MOV EAX,[0x00619f80]                ; 0048916e | g_LightmapData[528]
    MOV EAX,[0x00619fa0]                ; 00489173 | g_LightmapData[544]
    MOV EAX,[0x00619fc0]                ; 00489178 | g_LightmapData[560]
    MOV EAX,[0x00619fe0]                ; 0048917d | g_LightmapData[576]
    MOV EAX,[0x0061a000]                ; 00489182 | g_LightmapData[592]
    MOV EAX,[0x0061a020]                ; 00489187 | g_LightmapData[608]
    MOV EAX,[0x0061a040]                ; 0048918c | g_LightmapData[624]
    MOV EAX,[0x0061a060]                ; 00489191 | g_LightmapData[640]
    MOV EAX,[0x0061a080]                ; 00489196 | g_LightmapData[656]
    MOV EAX,[0x0061a0a0]                ; 0048919b | g_LightmapData[672]
    MOV EAX,[0x0061a0c0]                ; 004891a0 | g_LightmapData[688]
    MOV EAX,[0x0061a0e0]                ; 004891a5 | g_LightmapData[704]
    MOV EAX,[0x0061a100]                ; 004891aa | g_LightmapData[720]
    MOV EAX,[0x0061a120]                ; 004891af | g_LightmapData[736]
    MOV EAX,[0x0061a140]                ; 004891b4 | g_LightmapData[752]
    MOV EAX,[0x0061a160]                ; 004891b9 | g_LightmapData[768]
    MOV EAX,[0x0061a180]                ; 004891be | g_LightmapData[784]
    MOV EAX,[0x0061a1a0]                ; 004891c3 | g_LightmapData[800]
    MOV EAX,[0x0061a1c0]                ; 004891c8 | g_LightmapData[816]
    MOV EAX,[0x0061a1e0]                ; 004891cd | g_LightmapData[832]
    MOV EAX,[0x0061a200]                ; 004891d2 | g_LightmapData[848]
    MOV EAX,[0x0061a220]                ; 004891d7 | g_LightmapData[864]
    MOV EAX,[0x0061a240]                ; 004891dc | g_LightmapData[880]
    MOV EAX,[0x0061a260]                ; 004891e1 | g_LightmapData[896]
    MOV EAX,[0x0061a280]                ; 004891e6 | g_LightmapData[912]
    MOV EAX,[0x0061a2a0]                ; 004891eb | g_LightmapData[928]
    MOV EAX,[0x0061a2c0]                ; 004891f0 | g_LightmapData[944]
    MOV EAX,[0x0061a2e0]                ; 004891f5 | g_LightmapData[960]
    MOV EAX,[0x0061a300]                ; 004891fa | g_LightmapData[976]
    MOV EAX,[0x0061a320]                ; 004891ff | g_LightmapData[992]
    MOV EAX,[0x0061a340]                ; 00489204 | g_LightmapData[1008]
    MOVZX EDX,byte ptr [EBX]            ; 00489209
        ;   Label: LAB_00489209
    MOVD MM0,dword ptr [ESI]            ; 0048920c
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 0048920f | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 00489217
    PUNPCKLBW MM0,MM7                   ; 0048921b
    SHR EDX,0x1                         ; 0048921e
    PUNPCKLBW MM2,MM7                   ; 00489220
    ADD EAX,EDX                         ; 00489223
    PMULLW MM0,MM2                      ; 00489225
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 00489228 | g_LightmapData
    MOVQ MM2,MM3                        ; 00489230
    MOVQ MM4,MM5                        ; 00489233
    PXOR MM2,qword ptr [0x0061a358]     ; 00489236 | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 0048923d
    PMULHW MM4,MM3                      ; 00489240
    PADDW MM0,MM4                       ; 00489243
    PADDW MM0,qword ptr [0x006185e8]    ; 00489246 | g_LightmapBlendBias1
    PSRLW MM0,0x4                       ; 0048924d
    PACKUSWB MM0,MM7                    ; 00489251
    MOVD dword ptr [EDI],MM0            ; 00489254
    ADD ESI,0x4                         ; 00489257
    INC EBX                             ; 0048925a
    INC EBP                             ; 0048925b
    ADD EDI,0x4                         ; 0048925c
    MOVZX EDX,byte ptr [EBX]            ; 0048925f
    MOVD MM0,dword ptr [ESI]            ; 00489262
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 00489265 | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 0048926d
    PUNPCKLBW MM0,MM7                   ; 00489271
    SHR EDX,0x1                         ; 00489274
    PUNPCKLBW MM2,MM7                   ; 00489276
    ADD EAX,EDX                         ; 00489279
    PMULLW MM0,MM2                      ; 0048927b
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 0048927e | g_LightmapData
    MOVQ MM2,MM3                        ; 00489286
    MOVQ MM4,MM5                        ; 00489289
    PXOR MM2,qword ptr [0x0061a358]     ; 0048928c | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 00489293
    PMULHW MM4,MM3                      ; 00489296
    PADDW MM0,MM4                       ; 00489299
    PADDW MM0,qword ptr [0x006185f0]    ; 0048929c | g_LightmapBlendBias2
    PSRLW MM0,0x4                       ; 004892a3
    PACKUSWB MM0,MM7                    ; 004892a7
    MOVD dword ptr [EDI],MM0            ; 004892aa
    ADD ESI,0x4                         ; 004892ad
    INC EBX                             ; 004892b0
    INC EBP                             ; 004892b1
    ADD EDI,0x4                         ; 004892b2
    SUB ECX,0x2                         ; 004892b5
    JG 0x00489209                       ; 004892b8
        ;   XREF to: 00489209 (CONDITIONAL_JUMP)  ; LAB_00489209
    POP EBP                             ; 004892be
    EMMS                                ; 004892bf
    POP EDI                             ; 004892c1
    POP ESI                             ; 004892c2
    LEAVE                               ; 004892c3
    RET                                 ; 004892c4

