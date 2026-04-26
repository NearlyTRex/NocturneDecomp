; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_004917bc(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 at 004535a0
;
; Referenced Globals:
;   _MMX_INTEGER g_LightmapBlendBias1
;   _MMX_INTEGER g_LightmapBlendBias2
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

    PUSH EBP                            ; 004917bc
        ;   Label: core_dstrender.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_004917bc
    MOV EBP,ESP                         ; 004917bd
    PUSH ESI                            ; 004917bf
    PUSH EDI                            ; 004917c0
    PUSH EBP                            ; 004917c1
    MOV ECX,dword ptr [EBP + 0x18]      ; 004917c2
    MOV EDI,dword ptr [EBP + 0x8]       ; 004917c5
    MOV ESI,dword ptr [EBP + 0xc]       ; 004917c8
    MOV EBX,dword ptr [EBP + 0x10]      ; 004917cb
    MOV EBP,dword ptr [EBP + 0x14]      ; 004917ce
    PXOR MM7,MM7                        ; 004917d1
    MOVD MM5,dword ptr [0x02d052a8]     ; 004917d4 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 004917db
    PSLLW MM5,0x6                       ; 004917de
    MOV EAX,dword ptr [EBX]             ; 004917e2
    MOV EAX,dword ptr [EBX + 0x20]      ; 004917e4
    MOV EAX,dword ptr [EBX + 0x40]      ; 004917e7
    MOV EAX,dword ptr [EBX + 0x60]      ; 004917ea
    MOV EAX,dword ptr [EBX + 0x80]      ; 004917ed
    MOV EAX,dword ptr [EBX + 0xa0]      ; 004917f3
    MOV EAX,dword ptr [EBX + 0xc0]      ; 004917f9
    MOV EAX,dword ptr [EBX + 0xe0]      ; 004917ff
    MOV EAX,dword ptr [EBX + 0x100]     ; 00491805
    MOV EAX,dword ptr [EBX + 0x120]     ; 0049180b
    MOV EDX,dword ptr [EBP]             ; 00491811
    MOV EDX,dword ptr [EBP + 0x20]      ; 00491814
    MOV EDX,dword ptr [EBP + 0x40]      ; 00491817
    MOV EDX,dword ptr [EBP + 0x60]      ; 0049181a
    MOV EDX,dword ptr [EBP + 0x80]      ; 0049181d
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00491823
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00491829
    MOV EDX,dword ptr [EBP + 0xe0]      ; 0049182f
    MOV EDX,dword ptr [EBP + 0x100]     ; 00491835
    MOV EDX,dword ptr [EBP + 0x120]     ; 0049183b
    MOV EAX,dword ptr [ESI]             ; 00491841
    MOV EAX,dword ptr [ESI + 0x20]      ; 00491843
    MOV EAX,dword ptr [ESI + 0x40]      ; 00491846
    MOV EAX,dword ptr [ESI + 0x60]      ; 00491849
    MOV EAX,dword ptr [ESI + 0x80]      ; 0049184c
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00491852
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00491858
    MOV EAX,dword ptr [ESI + 0xe0]      ; 0049185e
    MOV EAX,dword ptr [ESI + 0x100]     ; 00491864
    MOV EAX,dword ptr [ESI + 0x120]     ; 0049186a
    MOV EAX,dword ptr [ESI + 0x140]     ; 00491870
    MOV EAX,dword ptr [ESI + 0x160]     ; 00491876
    MOV EAX,dword ptr [ESI + 0x180]     ; 0049187c
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00491882
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00491888
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 0049188e
    MOV EAX,dword ptr [ESI + 0x200]     ; 00491894
    MOV EAX,dword ptr [ESI + 0x220]     ; 0049189a
    MOV EAX,dword ptr [ESI + 0x240]     ; 004918a0
    MOV EAX,dword ptr [ESI + 0x260]     ; 004918a6
    MOV EAX,dword ptr [ESI + 0x280]     ; 004918ac
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 004918b2
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 004918b8
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 004918be
    MOV EAX,dword ptr [ESI + 0x300]     ; 004918c4
    MOV EAX,dword ptr [ESI + 0x320]     ; 004918ca
    MOV EAX,dword ptr [ESI + 0x340]     ; 004918d0
    MOV EAX,dword ptr [ESI + 0x360]     ; 004918d6
    MOV EAX,dword ptr [ESI + 0x380]     ; 004918dc
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 004918e2
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 004918e8
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 004918ee
    MOV EAX,dword ptr [ESI + 0x400]     ; 004918f4
    MOV EAX,dword ptr [ESI + 0x420]     ; 004918fa
    MOV EAX,dword ptr [ESI + 0x440]     ; 00491900
    MOV EAX,dword ptr [ESI + 0x460]     ; 00491906
    MOV EAX,dword ptr [ESI + 0x480]     ; 0049190c
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00491912
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00491918
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 0049191e
    MOV EAX,dword ptr [ESI + 0x500]     ; 00491924
    MOV EAX,dword ptr [ESI + 0x520]     ; 0049192a
    MOV EAX,dword ptr [ESI + 0x540]     ; 00491930
    MOV EAX,dword ptr [ESI + 0x560]     ; 00491936
    MOV EAX,dword ptr [ESI + 0x580]     ; 0049193c
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00491942
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00491948
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 0049194e
    MOV EAX,dword ptr [ESI + 0x600]     ; 00491954
    MOV EAX,dword ptr [ESI + 0x620]     ; 0049195a
    MOV EAX,dword ptr [ESI + 0x640]     ; 00491960
    MOV EAX,dword ptr [ESI + 0x660]     ; 00491966
    MOV EAX,dword ptr [ESI + 0x680]     ; 0049196c
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00491972
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00491978
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 0049197e
    MOV EAX,dword ptr [ESI + 0x700]     ; 00491984
    MOV EAX,dword ptr [ESI + 0x720]     ; 0049198a
    MOV EAX,dword ptr [ESI + 0x740]     ; 00491990
    MOV EAX,dword ptr [ESI + 0x760]     ; 00491996
    MOV EAX,dword ptr [ESI + 0x780]     ; 0049199c
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 004919a2
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 004919a8
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 004919ae
    MOV EAX,dword ptr [ESI + 0x800]     ; 004919b4
    MOV EAX,dword ptr [ESI + 0x820]     ; 004919ba
    MOV EAX,dword ptr [ESI + 0x840]     ; 004919c0
    MOV EAX,dword ptr [ESI + 0x860]     ; 004919c6
    MOV EAX,dword ptr [ESI + 0x880]     ; 004919cc
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 004919d2
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 004919d8
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 004919de
    MOV EAX,dword ptr [ESI + 0x900]     ; 004919e4
    MOV EAX,dword ptr [ESI + 0x920]     ; 004919ea
    MOV EAX,dword ptr [ESI + 0x940]     ; 004919f0
    MOV EAX,dword ptr [ESI + 0x960]     ; 004919f6
    MOV EAX,dword ptr [ESI + 0x980]     ; 004919fc
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00491a02
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00491a08
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00491a0e
    MOV EAX,[0x00c19dfc]                ; 00491a14 | g_LightmapTexturePalette
    MOV EAX,[0x00c19e1c]                ; 00491a19 | g_LightmapTexturePalette[8]
    MOV EAX,[0x00c19e3c]                ; 00491a1e | g_LightmapTexturePalette[16]
    MOV EAX,[0x00c19e5c]                ; 00491a23 | g_LightmapTexturePalette[24]
    MOV EAX,[0x00c19e7c]                ; 00491a28 | g_LightmapTexturePalette[32]
    MOV EAX,[0x00c19e9c]                ; 00491a2d | g_LightmapTexturePalette[40]
    MOV EAX,[0x00c19ebc]                ; 00491a32 | g_LightmapTexturePalette[48]
    MOV EAX,[0x00c19edc]                ; 00491a37 | g_LightmapTexturePalette[56]
    MOV EAX,[0x00c19efc]                ; 00491a3c | g_LightmapTexturePalette[64]
    MOV EAX,[0x00c19f1c]                ; 00491a41 | g_LightmapTexturePalette[72]
    MOV EAX,[0x00c19f3c]                ; 00491a46 | g_LightmapTexturePalette[80]
    MOV EAX,[0x00c19f5c]                ; 00491a4b | g_LightmapTexturePalette[88]
    MOV EAX,[0x00c19f7c]                ; 00491a50 | g_LightmapTexturePalette[96]
    MOV EAX,[0x00c19f9c]                ; 00491a55 | g_LightmapTexturePalette[104]
    MOV EAX,[0x00c19fbc]                ; 00491a5a | g_LightmapTexturePalette[112]
    MOV EAX,[0x00c19fdc]                ; 00491a5f | g_LightmapTexturePalette[120]
    MOV EAX,[0x00c19ffc]                ; 00491a64 | g_LightmapTexturePalette[128]
    MOV EAX,[0x00c1a01c]                ; 00491a69 | g_LightmapTexturePalette[136]
    MOV EAX,[0x00c1a03c]                ; 00491a6e | g_LightmapTexturePalette[144]
    MOV EAX,[0x00c1a05c]                ; 00491a73 | g_LightmapTexturePalette[152]
    MOV EAX,[0x00c1a07c]                ; 00491a78 | g_LightmapTexturePalette[160]
    MOV EAX,[0x00c1a09c]                ; 00491a7d | g_LightmapTexturePalette[168]
    MOV EAX,[0x00c1a0bc]                ; 00491a82 | g_LightmapTexturePalette[176]
    MOV EAX,[0x00c1a0dc]                ; 00491a87 | g_LightmapTexturePalette[184]
    MOV EAX,[0x00c1a0fc]                ; 00491a8c | g_LightmapTexturePalette[192]
    MOV EAX,[0x00c1a11c]                ; 00491a91 | g_LightmapTexturePalette[200]
    MOV EAX,[0x00c1a13c]                ; 00491a96 | g_LightmapTexturePalette[208]
    MOV EAX,[0x00c1a15c]                ; 00491a9b | g_LightmapTexturePalette[216]
    MOV EAX,[0x00c1a17c]                ; 00491aa0 | g_LightmapTexturePalette[224]
    MOV EAX,[0x00c1a19c]                ; 00491aa5 | g_LightmapTexturePalette[232]
    MOV EAX,[0x00c1a1bc]                ; 00491aaa | g_LightmapTexturePalette[240]
    MOV EAX,[0x00c1a1dc]                ; 00491aaf | g_LightmapTexturePalette[248]
    MOV EAX,[0x006779f0]                ; 00491ab4 | g_LightmapData
    MOV EAX,[0x00677a10]                ; 00491ab9 | g_LightmapData[16]
    MOV EAX,[0x00677a30]                ; 00491abe | g_LightmapData[32]
    MOV EAX,[0x00677a50]                ; 00491ac3 | g_LightmapData[48]
    MOV EAX,[0x00677a70]                ; 00491ac8 | g_LightmapData[64]
    MOV EAX,[0x00677a90]                ; 00491acd | g_LightmapData[80]
    MOV EAX,[0x00677ab0]                ; 00491ad2 | g_LightmapData[96]
    MOV EAX,[0x00677ad0]                ; 00491ad7 | g_LightmapData[112]
    MOV EAX,[0x00677af0]                ; 00491adc | g_LightmapData[128]
    MOV EAX,[0x00677b10]                ; 00491ae1 | g_LightmapData[144]
    MOV EAX,[0x00677b30]                ; 00491ae6 | g_LightmapData[160]
    MOV EAX,[0x00677b50]                ; 00491aeb | g_LightmapData[176]
    MOV EAX,[0x00677b70]                ; 00491af0 | g_LightmapData[192]
    MOV EAX,[0x00677b90]                ; 00491af5 | g_LightmapData[208]
    MOV EAX,[0x00677bb0]                ; 00491afa | g_LightmapData[224]
    MOV EAX,[0x00677bd0]                ; 00491aff | g_LightmapData[240]
    MOV EAX,[0x00677bf0]                ; 00491b04 | g_LightmapData[256]
    MOV EAX,[0x00677c10]                ; 00491b09 | g_LightmapData[272]
    MOV EAX,[0x00677c30]                ; 00491b0e | g_LightmapData[288]
    MOV EAX,[0x00677c50]                ; 00491b13 | g_LightmapData[304]
    MOV EAX,[0x00677c70]                ; 00491b18 | g_LightmapData[320]
    MOV EAX,[0x00677c90]                ; 00491b1d | g_LightmapData[336]
    MOV EAX,[0x00677cb0]                ; 00491b22 | g_LightmapData[352]
    MOV EAX,[0x00677cd0]                ; 00491b27 | g_LightmapData[368]
    MOV EAX,[0x00677cf0]                ; 00491b2c | g_LightmapData[384]
    MOV EAX,[0x00677d10]                ; 00491b31 | g_LightmapData[400]
    MOV EAX,[0x00677d30]                ; 00491b36 | g_LightmapData[416]
    MOV EAX,[0x00677d50]                ; 00491b3b | g_LightmapData[432]
    MOV EAX,[0x00677d70]                ; 00491b40 | g_LightmapData[448]
    MOV EAX,[0x00677d90]                ; 00491b45 | g_LightmapData[464]
    MOV EAX,[0x00677db0]                ; 00491b4a | g_LightmapData[480]
    MOV EAX,[0x00677dd0]                ; 00491b4f | g_LightmapData[496]
    MOV EAX,[0x00677df0]                ; 00491b54 | g_LightmapData[512]
    MOV EAX,[0x00677e10]                ; 00491b59 | g_LightmapData[528]
    MOV EAX,[0x00677e30]                ; 00491b5e | g_LightmapData[544]
    MOV EAX,[0x00677e50]                ; 00491b63 | g_LightmapData[560]
    MOV EAX,[0x00677e70]                ; 00491b68 | g_LightmapData[576]
    MOV EAX,[0x00677e90]                ; 00491b6d | g_LightmapData[592]
    MOV EAX,[0x00677eb0]                ; 00491b72 | g_LightmapData[608]
    MOV EAX,[0x00677ed0]                ; 00491b77 | g_LightmapData[624]
    MOV EAX,[0x00677ef0]                ; 00491b7c | g_LightmapData[640]
    MOV EAX,[0x00677f10]                ; 00491b81 | g_LightmapData[656]
    MOV EAX,[0x00677f30]                ; 00491b86 | g_LightmapData[672]
    MOV EAX,[0x00677f50]                ; 00491b8b | g_LightmapData[688]
    MOV EAX,[0x00677f70]                ; 00491b90 | g_LightmapData[704]
    MOV EAX,[0x00677f90]                ; 00491b95 | g_LightmapData[720]
    MOV EAX,[0x00677fb0]                ; 00491b9a | g_LightmapData[736]
    MOV EAX,[0x00677fd0]                ; 00491b9f | g_LightmapData[752]
    MOV EAX,[0x00677ff0]                ; 00491ba4 | g_LightmapData[768]
    MOV EAX,[0x00678010]                ; 00491ba9 | g_LightmapData[784]
    MOV EAX,[0x00678030]                ; 00491bae | g_LightmapData[800]
    MOV EAX,[0x00678050]                ; 00491bb3 | g_LightmapData[816]
    MOV EAX,[0x00678070]                ; 00491bb8 | g_LightmapData[832]
    MOV EAX,[0x00678090]                ; 00491bbd | g_LightmapData[848]
    MOV EAX,[0x006780b0]                ; 00491bc2 | g_LightmapData[864]
    MOV EAX,[0x006780d0]                ; 00491bc7 | g_LightmapData[880]
    MOV EAX,[0x006780f0]                ; 00491bcc | g_LightmapData[896]
    MOV EAX,[0x00678110]                ; 00491bd1 | g_LightmapData[912]
    MOV EAX,[0x00678130]                ; 00491bd6 | g_LightmapData[928]
    MOV EAX,[0x00678150]                ; 00491bdb | g_LightmapData[944]
    MOV EAX,[0x00678170]                ; 00491be0 | g_LightmapData[960]
    MOV EAX,[0x00678190]                ; 00491be5 | g_LightmapData[976]
    MOV EAX,[0x006781b0]                ; 00491bea | g_LightmapData[992]
    MOV EAX,[0x006781d0]                ; 00491bef | g_LightmapData[1008]
    JMP 0x00491c00                      ; 00491bf4
        ;   XREF to: 00491c00 (UNCONDITIONAL_JUMP)  ; LAB_00491c00
    MOVZX EDX,byte ptr [EBX]            ; 00491c00
        ;   Label: LAB_00491c00
    MOVQ MM0,qword ptr [ESI]            ; 00491c03
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00491c06 | g_LightmapTexturePalette
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 00491c0e
    MOVZX EAX,byte ptr [EBP]            ; 00491c12
    MOVD MM6,dword ptr [EDX*0x4 + 0xc19dfc] ; 00491c16 | g_LightmapTexturePalette
    MOVQ MM1,MM0                        ; 00491c1e
    PUNPCKLBW MM6,MM7                   ; 00491c21
    PUNPCKLBW MM0,MM7                   ; 00491c24
    SHR EDX,0x1                         ; 00491c27
    PSRLQ MM1,0x20                      ; 00491c29
    PUNPCKLBW MM2,MM7                   ; 00491c2d
    ADD EAX,EDX                         ; 00491c30
    PADDW MM6,MM2                       ; 00491c32
    PUNPCKLBW MM1,MM7                   ; 00491c35
    PMULLW MM0,MM2                      ; 00491c38
    PSRLW MM6,0x1                       ; 00491c3b
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00491c3f | g_LightmapData
    PMULLW MM1,MM6                      ; 00491c47
    MOVQ MM2,MM3                        ; 00491c4a
    MOVQ MM4,MM5                        ; 00491c4d
    PXOR MM2,qword ptr [0x006781e8]     ; 00491c50 | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 00491c57
    PMULHW MM1,MM2                      ; 00491c5a
    PMULHW MM4,MM3                      ; 00491c5d
    PADDW MM0,MM4                       ; 00491c60
    PADDW MM1,MM4                       ; 00491c63
    PADDW MM0,qword ptr [0x00676478]    ; 00491c66 | g_LightmapBlendBias1
    PADDW MM1,qword ptr [0x00676480]    ; 00491c6d | g_LightmapBlendBias2
    PSRLW MM0,0x4                       ; 00491c74
    PSRLW MM1,0x4                       ; 00491c78
    PACKUSWB MM0,MM1                    ; 00491c7c
    ADD ESI,0x8                         ; 00491c7f
    INC EBX                             ; 00491c82
    INC EBP                             ; 00491c83
    MOVQ qword ptr [EDI],MM0            ; 00491c84
    ADD EDI,0x8                         ; 00491c87
    SUB ECX,0x2                         ; 00491c8a
    JG 0x00491c00                       ; 00491c8d
        ;   XREF to: 00491c00 (CONDITIONAL_JUMP)  ; LAB_00491c00
    POP EBP                             ; 00491c93
    EMMS                                ; 00491c94
    POP EDI                             ; 00491c96
    POP ESI                             ; 00491c97
    LEAVE                               ; 00491c98
    RET                                 ; 00491c99

