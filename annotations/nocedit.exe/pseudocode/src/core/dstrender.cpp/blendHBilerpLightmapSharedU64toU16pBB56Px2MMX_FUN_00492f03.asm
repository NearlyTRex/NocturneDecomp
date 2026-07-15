; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00492f03(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 at 0045343a
;
; Referenced Globals:
;   _MMX_INTEGER g_LightmapBlendBias5
;   _MMX_INTEGER g_LightmapBlendBias6
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

    PUSH EBP                            ; 00492f03
        ;   Label: core_dstrender.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00492f03
    MOV EBP,ESP                         ; 00492f04
    PUSH ESI                            ; 00492f06
    PUSH EDI                            ; 00492f07
    PUSH EBP                            ; 00492f08
    MOV ECX,dword ptr [EBP + 0x18]      ; 00492f09
    MOV EDI,dword ptr [EBP + 0x8]       ; 00492f0c
    MOV ESI,dword ptr [EBP + 0xc]       ; 00492f0f
    MOV EBX,dword ptr [EBP + 0x10]      ; 00492f12
    MOV EBP,dword ptr [EBP + 0x14]      ; 00492f15
    PXOR MM7,MM7                        ; 00492f18
    MOVD MM5,dword ptr [0x02d052a8]     ; 00492f1b | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 00492f22
    PSLLW MM5,0x6                       ; 00492f25
    MOV EAX,dword ptr [EBX]             ; 00492f29
    MOV EAX,dword ptr [EBX + 0x20]      ; 00492f2b
    MOV EAX,dword ptr [EBX + 0x40]      ; 00492f2e
    MOV EAX,dword ptr [EBX + 0x60]      ; 00492f31
    MOV EAX,dword ptr [EBX + 0x80]      ; 00492f34
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00492f3a
    MOV EAX,dword ptr [EBX + 0xc0]      ; 00492f40
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00492f46
    MOV EAX,dword ptr [EBX + 0x100]     ; 00492f4c
    MOV EAX,dword ptr [EBX + 0x120]     ; 00492f52
    MOV EDX,dword ptr [EBP]             ; 00492f58
    MOV EDX,dword ptr [EBP + 0x20]      ; 00492f5b
    MOV EDX,dword ptr [EBP + 0x40]      ; 00492f5e
    MOV EDX,dword ptr [EBP + 0x60]      ; 00492f61
    MOV EDX,dword ptr [EBP + 0x80]      ; 00492f64
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00492f6a
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00492f70
    MOV EDX,dword ptr [EBP + 0xe0]      ; 00492f76
    MOV EDX,dword ptr [EBP + 0x100]     ; 00492f7c
    MOV EDX,dword ptr [EBP + 0x120]     ; 00492f82
    MOV EAX,dword ptr [ESI]             ; 00492f88
    MOV EAX,dword ptr [ESI + 0x20]      ; 00492f8a
    MOV EAX,dword ptr [ESI + 0x40]      ; 00492f8d
    MOV EAX,dword ptr [ESI + 0x60]      ; 00492f90
    MOV EAX,dword ptr [ESI + 0x80]      ; 00492f93
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00492f99
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00492f9f
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00492fa5
    MOV EAX,dword ptr [ESI + 0x100]     ; 00492fab
    MOV EAX,dword ptr [ESI + 0x120]     ; 00492fb1
    MOV EAX,dword ptr [ESI + 0x140]     ; 00492fb7
    MOV EAX,dword ptr [ESI + 0x160]     ; 00492fbd
    MOV EAX,dword ptr [ESI + 0x180]     ; 00492fc3
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00492fc9
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00492fcf
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00492fd5
    MOV EAX,dword ptr [ESI + 0x200]     ; 00492fdb
    MOV EAX,dword ptr [ESI + 0x220]     ; 00492fe1
    MOV EAX,dword ptr [ESI + 0x240]     ; 00492fe7
    MOV EAX,dword ptr [ESI + 0x260]     ; 00492fed
    MOV EAX,dword ptr [ESI + 0x280]     ; 00492ff3
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00492ff9
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00492fff
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00493005
    MOV EAX,dword ptr [ESI + 0x300]     ; 0049300b
    MOV EAX,dword ptr [ESI + 0x320]     ; 00493011
    MOV EAX,dword ptr [ESI + 0x340]     ; 00493017
    MOV EAX,dword ptr [ESI + 0x360]     ; 0049301d
    MOV EAX,dword ptr [ESI + 0x380]     ; 00493023
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00493029
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0049302f
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00493035
    MOV EAX,dword ptr [ESI + 0x400]     ; 0049303b
    MOV EAX,dword ptr [ESI + 0x420]     ; 00493041
    MOV EAX,dword ptr [ESI + 0x440]     ; 00493047
    MOV EAX,dword ptr [ESI + 0x460]     ; 0049304d
    MOV EAX,dword ptr [ESI + 0x480]     ; 00493053
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00493059
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 0049305f
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00493065
    MOV EAX,dword ptr [ESI + 0x500]     ; 0049306b
    MOV EAX,dword ptr [ESI + 0x520]     ; 00493071
    MOV EAX,dword ptr [ESI + 0x540]     ; 00493077
    MOV EAX,dword ptr [ESI + 0x560]     ; 0049307d
    MOV EAX,dword ptr [ESI + 0x580]     ; 00493083
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00493089
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 0049308f
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00493095
    MOV EAX,dword ptr [ESI + 0x600]     ; 0049309b
    MOV EAX,dword ptr [ESI + 0x620]     ; 004930a1
    MOV EAX,dword ptr [ESI + 0x640]     ; 004930a7
    MOV EAX,dword ptr [ESI + 0x660]     ; 004930ad
    MOV EAX,dword ptr [ESI + 0x680]     ; 004930b3
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 004930b9
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 004930bf
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 004930c5
    MOV EAX,dword ptr [ESI + 0x700]     ; 004930cb
    MOV EAX,dword ptr [ESI + 0x720]     ; 004930d1
    MOV EAX,dword ptr [ESI + 0x740]     ; 004930d7
    MOV EAX,dword ptr [ESI + 0x760]     ; 004930dd
    MOV EAX,dword ptr [ESI + 0x780]     ; 004930e3
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 004930e9
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 004930ef
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 004930f5
    MOV EAX,dword ptr [ESI + 0x800]     ; 004930fb
    MOV EAX,dword ptr [ESI + 0x820]     ; 00493101
    MOV EAX,dword ptr [ESI + 0x840]     ; 00493107
    MOV EAX,dword ptr [ESI + 0x860]     ; 0049310d
    MOV EAX,dword ptr [ESI + 0x880]     ; 00493113
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00493119
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 0049311f
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00493125
    MOV EAX,dword ptr [ESI + 0x900]     ; 0049312b
    MOV EAX,dword ptr [ESI + 0x920]     ; 00493131
    MOV EAX,dword ptr [ESI + 0x940]     ; 00493137
    MOV EAX,dword ptr [ESI + 0x960]     ; 0049313d
    MOV EAX,dword ptr [ESI + 0x980]     ; 00493143
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00493149
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 0049314f
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00493155
    MOV EAX,[0x00c19dfc]                ; 0049315b | g_LightmapTexturePalette
    MOV EAX,[0x00c19e1c]                ; 00493160 | g_LightmapTexturePalette[8]
    MOV EAX,[0x00c19e3c]                ; 00493165 | g_LightmapTexturePalette[16]
    MOV EAX,[0x00c19e5c]                ; 0049316a | g_LightmapTexturePalette[24]
    MOV EAX,[0x00c19e7c]                ; 0049316f | g_LightmapTexturePalette[32]
    MOV EAX,[0x00c19e9c]                ; 00493174 | g_LightmapTexturePalette[40]
    MOV EAX,[0x00c19ebc]                ; 00493179 | g_LightmapTexturePalette[48]
    MOV EAX,[0x00c19edc]                ; 0049317e | g_LightmapTexturePalette[56]
    MOV EAX,[0x00c19efc]                ; 00493183 | g_LightmapTexturePalette[64]
    MOV EAX,[0x00c19f1c]                ; 00493188 | g_LightmapTexturePalette[72]
    MOV EAX,[0x00c19f3c]                ; 0049318d | g_LightmapTexturePalette[80]
    MOV EAX,[0x00c19f5c]                ; 00493192 | g_LightmapTexturePalette[88]
    MOV EAX,[0x00c19f7c]                ; 00493197 | g_LightmapTexturePalette[96]
    MOV EAX,[0x00c19f9c]                ; 0049319c | g_LightmapTexturePalette[104]
    MOV EAX,[0x00c19fbc]                ; 004931a1 | g_LightmapTexturePalette[112]
    MOV EAX,[0x00c19fdc]                ; 004931a6 | g_LightmapTexturePalette[120]
    MOV EAX,[0x00c19ffc]                ; 004931ab | g_LightmapTexturePalette[128]
    MOV EAX,[0x00c1a01c]                ; 004931b0 | g_LightmapTexturePalette[136]
    MOV EAX,[0x00c1a03c]                ; 004931b5 | g_LightmapTexturePalette[144]
    MOV EAX,[0x00c1a05c]                ; 004931ba | g_LightmapTexturePalette[152]
    MOV EAX,[0x00c1a07c]                ; 004931bf | g_LightmapTexturePalette[160]
    MOV EAX,[0x00c1a09c]                ; 004931c4 | g_LightmapTexturePalette[168]
    MOV EAX,[0x00c1a0bc]                ; 004931c9 | g_LightmapTexturePalette[176]
    MOV EAX,[0x00c1a0dc]                ; 004931ce | g_LightmapTexturePalette[184]
    MOV EAX,[0x00c1a0fc]                ; 004931d3 | g_LightmapTexturePalette[192]
    MOV EAX,[0x00c1a11c]                ; 004931d8 | g_LightmapTexturePalette[200]
    MOV EAX,[0x00c1a13c]                ; 004931dd | g_LightmapTexturePalette[208]
    MOV EAX,[0x00c1a15c]                ; 004931e2 | g_LightmapTexturePalette[216]
    MOV EAX,[0x00c1a17c]                ; 004931e7 | g_LightmapTexturePalette[224]
    MOV EAX,[0x00c1a19c]                ; 004931ec | g_LightmapTexturePalette[232]
    MOV EAX,[0x00c1a1bc]                ; 004931f1 | g_LightmapTexturePalette[240]
    MOV EAX,[0x00c1a1dc]                ; 004931f6 | g_LightmapTexturePalette[248]
    MOV EAX,[0x006779f0]                ; 004931fb | g_LightmapData
    MOV EAX,[0x00677a10]                ; 00493200 | g_LightmapData[16]
    MOV EAX,[0x00677a30]                ; 00493205 | g_LightmapData[32]
    MOV EAX,[0x00677a50]                ; 0049320a | g_LightmapData[48]
    MOV EAX,[0x00677a70]                ; 0049320f | g_LightmapData[64]
    MOV EAX,[0x00677a90]                ; 00493214 | g_LightmapData[80]
    MOV EAX,[0x00677ab0]                ; 00493219 | g_LightmapData[96]
    MOV EAX,[0x00677ad0]                ; 0049321e | g_LightmapData[112]
    MOV EAX,[0x00677af0]                ; 00493223 | g_LightmapData[128]
    MOV EAX,[0x00677b10]                ; 00493228 | g_LightmapData[144]
    MOV EAX,[0x00677b30]                ; 0049322d | g_LightmapData[160]
    MOV EAX,[0x00677b50]                ; 00493232 | g_LightmapData[176]
    MOV EAX,[0x00677b70]                ; 00493237 | g_LightmapData[192]
    MOV EAX,[0x00677b90]                ; 0049323c | g_LightmapData[208]
    MOV EAX,[0x00677bb0]                ; 00493241 | g_LightmapData[224]
    MOV EAX,[0x00677bd0]                ; 00493246 | g_LightmapData[240]
    MOV EAX,[0x00677bf0]                ; 0049324b | g_LightmapData[256]
    MOV EAX,[0x00677c10]                ; 00493250 | g_LightmapData[272]
    MOV EAX,[0x00677c30]                ; 00493255 | g_LightmapData[288]
    MOV EAX,[0x00677c50]                ; 0049325a | g_LightmapData[304]
    MOV EAX,[0x00677c70]                ; 0049325f | g_LightmapData[320]
    MOV EAX,[0x00677c90]                ; 00493264 | g_LightmapData[336]
    MOV EAX,[0x00677cb0]                ; 00493269 | g_LightmapData[352]
    MOV EAX,[0x00677cd0]                ; 0049326e | g_LightmapData[368]
    MOV EAX,[0x00677cf0]                ; 00493273 | g_LightmapData[384]
    MOV EAX,[0x00677d10]                ; 00493278 | g_LightmapData[400]
    MOV EAX,[0x00677d30]                ; 0049327d | g_LightmapData[416]
    MOV EAX,[0x00677d50]                ; 00493282 | g_LightmapData[432]
    MOV EAX,[0x00677d70]                ; 00493287 | g_LightmapData[448]
    MOV EAX,[0x00677d90]                ; 0049328c | g_LightmapData[464]
    MOV EAX,[0x00677db0]                ; 00493291 | g_LightmapData[480]
    MOV EAX,[0x00677dd0]                ; 00493296 | g_LightmapData[496]
    MOV EAX,[0x00677df0]                ; 0049329b | g_LightmapData[512]
    MOV EAX,[0x00677e10]                ; 004932a0 | g_LightmapData[528]
    MOV EAX,[0x00677e30]                ; 004932a5 | g_LightmapData[544]
    MOV EAX,[0x00677e50]                ; 004932aa | g_LightmapData[560]
    MOV EAX,[0x00677e70]                ; 004932af | g_LightmapData[576]
    MOV EAX,[0x00677e90]                ; 004932b4 | g_LightmapData[592]
    MOV EAX,[0x00677eb0]                ; 004932b9 | g_LightmapData[608]
    MOV EAX,[0x00677ed0]                ; 004932be | g_LightmapData[624]
    MOV EAX,[0x00677ef0]                ; 004932c3 | g_LightmapData[640]
    MOV EAX,[0x00677f10]                ; 004932c8 | g_LightmapData[656]
    MOV EAX,[0x00677f30]                ; 004932cd | g_LightmapData[672]
    MOV EAX,[0x00677f50]                ; 004932d2 | g_LightmapData[688]
    MOV EAX,[0x00677f70]                ; 004932d7 | g_LightmapData[704]
    MOV EAX,[0x00677f90]                ; 004932dc | g_LightmapData[720]
    MOV EAX,[0x00677fb0]                ; 004932e1 | g_LightmapData[736]
    MOV EAX,[0x00677fd0]                ; 004932e6 | g_LightmapData[752]
    MOV EAX,[0x00677ff0]                ; 004932eb | g_LightmapData[768]
    MOV EAX,[0x00678010]                ; 004932f0 | g_LightmapData[784]
    MOV EAX,[0x00678030]                ; 004932f5 | g_LightmapData[800]
    MOV EAX,[0x00678050]                ; 004932fa | g_LightmapData[816]
    MOV EAX,[0x00678070]                ; 004932ff | g_LightmapData[832]
    MOV EAX,[0x00678090]                ; 00493304 | g_LightmapData[848]
    MOV EAX,[0x006780b0]                ; 00493309 | g_LightmapData[864]
    MOV EAX,[0x006780d0]                ; 0049330e | g_LightmapData[880]
    MOV EAX,[0x006780f0]                ; 00493313 | g_LightmapData[896]
    MOV EAX,[0x00678110]                ; 00493318 | g_LightmapData[912]
    MOV EAX,[0x00678130]                ; 0049331d | g_LightmapData[928]
    MOV EAX,[0x00678150]                ; 00493322 | g_LightmapData[944]
    MOV EAX,[0x00678170]                ; 00493327 | g_LightmapData[960]
    MOV EAX,[0x00678190]                ; 0049332c | g_LightmapData[976]
    MOV EAX,[0x006781b0]                ; 00493331 | g_LightmapData[992]
    MOV EAX,[0x006781d0]                ; 00493336 | g_LightmapData[1008]
    JMP 0x00493340                      ; 0049333b
        ;   XREF to: 00493340 (UNCONDITIONAL_JUMP)  ; LAB_00493340
    MOVZX EDX,byte ptr [EBX]            ; 00493340
        ;   Label: LAB_00493340
    MOVQ MM0,qword ptr [ESI]            ; 00493343
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00493346 | g_LightmapTexturePalette
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 0049334e
    MOVZX EAX,byte ptr [EBP]            ; 00493352
    MOVD MM6,dword ptr [EDX*0x4 + 0xc19dfc] ; 00493356 | g_LightmapTexturePalette
    MOVQ MM1,MM0                        ; 0049335e
    PUNPCKLBW MM6,MM7                   ; 00493361
    PUNPCKLBW MM0,MM7                   ; 00493364
    SHR EDX,0x1                         ; 00493367
    PSRLQ MM1,0x20                      ; 00493369
    PUNPCKLBW MM2,MM7                   ; 0049336d
    ADD EAX,EDX                         ; 00493370
    PADDW MM6,MM2                       ; 00493372
    PUNPCKLBW MM1,MM7                   ; 00493375
    PMULLW MM0,MM2                      ; 00493378
    PSRLW MM6,0x1                       ; 0049337b
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 0049337f | g_LightmapData
    PMULLW MM1,MM6                      ; 00493387
    MOVQ MM2,MM3                        ; 0049338a
    MOVQ MM4,MM5                        ; 0049338d
    PXOR MM2,qword ptr [0x006781e8]     ; 00493390 | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 00493397
    PMULHW MM1,MM2                      ; 0049339a
    PMULHW MM4,MM3                      ; 0049339d
    PADDW MM0,MM4                       ; 004933a0
    PADDW MM1,MM4                       ; 004933a3
    PADDW MM0,qword ptr [0x00676498]    ; 004933a6 | g_LightmapBlendBias5
    PADDW MM1,qword ptr [0x006764a0]    ; 004933ad | g_LightmapBlendBias6
    PSRLW MM0,0x4                       ; 004933b4
    PSRLW MM1,0x4                       ; 004933b8
    PACKUSWB MM0,MM7                    ; 004933bc
    PACKUSWB MM1,MM7                    ; 004933bf
    MOVQ MM2,MM0                        ; 004933c2
    MOVQ MM3,MM0                        ; 004933c5
    PAND MM0,qword ptr [0x006827a0]     ; 004933c8 | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 004933cf | g_GreenMask32
    PAND MM3,qword ptr [0x00682760]     ; 004933d6 | g_RedMask32
    PSRLQ MM0,qword ptr [0x006827e8]    ; 004933dd | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 004933e4 | g_GreenBlueDitherShift
    PSRLQ MM3,qword ptr [0x006827a8]    ; 004933eb | g_TotalDitherShift
    POR MM0,MM2                         ; 004933f2
    POR MM0,MM3                         ; 004933f5
    MOVQ MM2,MM1                        ; 004933f8
    MOVQ MM3,MM1                        ; 004933fb
    PAND MM1,qword ptr [0x006827a0]     ; 004933fe | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 00493405 | g_GreenMask32
    PAND MM3,qword ptr [0x00682760]     ; 0049340c | g_RedMask32
    PSRLQ MM1,qword ptr [0x006827e8]    ; 00493413 | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 0049341a | g_GreenBlueDitherShift
    PSRLQ MM3,qword ptr [0x006827a8]    ; 00493421 | g_TotalDitherShift
    POR MM1,MM2                         ; 00493428
    POR MM1,MM3                         ; 0049342b
    PSLLQ MM1,0x10                      ; 0049342e
    POR MM0,MM1                         ; 00493432
    ADD ESI,0x8                         ; 00493435
    INC EBX                             ; 00493438
    INC EBP                             ; 00493439
    MOVD dword ptr [EDI],MM0            ; 0049343a
    ADD EDI,0x4                         ; 0049343d
    SUB ECX,0x2                         ; 00493440
    JG 0x00493340                       ; 00493443
        ;   XREF to: 00493340 (CONDITIONAL_JUMP)  ; LAB_00493340
    POP EBP                             ; 00493449
    EMMS                                ; 0049344a
    POP EDI                             ; 0049344c
    POP ESI                             ; 0049344d
    LEAVE                               ; 0049344e
    RET                                 ; 0049344f

