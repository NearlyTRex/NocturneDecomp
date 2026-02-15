; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 at 00453563
;
; Referenced Globals:
;   ulonglong g_LightmapBlendBias1 = 0x0
;   ulonglong g_LightmapBlendBias2 = 0x8000800080008
;   ushort[384] g_LightmapData
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

    PUSH EBP                            ; 004926e1
        ;   Label: core_dstrender.cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1
    MOV EBP,ESP                         ; 004926e2
    PUSH ESI                            ; 004926e4
    PUSH EDI                            ; 004926e5
    PUSH EBP                            ; 004926e6
    MOV ECX,dword ptr [EBP + 0x18]      ; 004926e7
    MOV EDI,dword ptr [EBP + 0x8]       ; 004926ea
    MOV ESI,dword ptr [EBP + 0xc]       ; 004926ed
    MOV EBX,dword ptr [EBP + 0x10]      ; 004926f0
    MOV EBP,dword ptr [EBP + 0x14]      ; 004926f3
    PXOR MM7,MM7                        ; 004926f6
    MOVD MM5,dword ptr [0x02d052a8]     ; 004926f9 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 00492700
    PSLLW MM5,0x6                       ; 00492703
    MOV EAX,dword ptr [EBX]             ; 00492707
    MOV EAX,dword ptr [EBX + 0x20]      ; 00492709
    MOV EAX,dword ptr [EBX + 0x40]      ; 0049270c
    MOV EAX,dword ptr [EBX + 0x60]      ; 0049270f
    MOV EAX,dword ptr [EBX + 0x80]      ; 00492712
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00492718
    MOV EAX,dword ptr [EBX + 0xc0]      ; 0049271e
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00492724
    MOV EAX,dword ptr [EBX + 0x100]     ; 0049272a
    MOV EAX,dword ptr [EBX + 0x120]     ; 00492730
    MOV EDX,dword ptr [EBP]             ; 00492736
    MOV EDX,dword ptr [EBP + 0x20]      ; 00492739
    MOV EDX,dword ptr [EBP + 0x40]      ; 0049273c
    MOV EDX,dword ptr [EBP + 0x60]      ; 0049273f
    MOV EDX,dword ptr [EBP + 0x80]      ; 00492742
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00492748
    MOV EDX,dword ptr [EBP + 0xc0]      ; 0049274e
    MOV EDX,dword ptr [EBP + 0xe0]      ; 00492754
    MOV EDX,dword ptr [EBP + 0x100]     ; 0049275a
    MOV EDX,dword ptr [EBP + 0x120]     ; 00492760
    MOV EAX,dword ptr [ESI]             ; 00492766
    MOV EAX,dword ptr [ESI + 0x20]      ; 00492768
    MOV EAX,dword ptr [ESI + 0x40]      ; 0049276b
    MOV EAX,dword ptr [ESI + 0x60]      ; 0049276e
    MOV EAX,dword ptr [ESI + 0x80]      ; 00492771
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00492777
    MOV EAX,dword ptr [ESI + 0xc0]      ; 0049277d
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00492783
    MOV EAX,dword ptr [ESI + 0x100]     ; 00492789
    MOV EAX,dword ptr [ESI + 0x120]     ; 0049278f
    MOV EAX,dword ptr [ESI + 0x140]     ; 00492795
    MOV EAX,dword ptr [ESI + 0x160]     ; 0049279b
    MOV EAX,dword ptr [ESI + 0x180]     ; 004927a1
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 004927a7
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 004927ad
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 004927b3
    MOV EAX,dword ptr [ESI + 0x200]     ; 004927b9
    MOV EAX,dword ptr [ESI + 0x220]     ; 004927bf
    MOV EAX,dword ptr [ESI + 0x240]     ; 004927c5
    MOV EAX,dword ptr [ESI + 0x260]     ; 004927cb
    MOV EAX,dword ptr [ESI + 0x280]     ; 004927d1
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 004927d7
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 004927dd
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 004927e3
    MOV EAX,dword ptr [ESI + 0x300]     ; 004927e9
    MOV EAX,dword ptr [ESI + 0x320]     ; 004927ef
    MOV EAX,dword ptr [ESI + 0x340]     ; 004927f5
    MOV EAX,dword ptr [ESI + 0x360]     ; 004927fb
    MOV EAX,dword ptr [ESI + 0x380]     ; 00492801
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00492807
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0049280d
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00492813
    MOV EAX,dword ptr [ESI + 0x400]     ; 00492819
    MOV EAX,dword ptr [ESI + 0x420]     ; 0049281f
    MOV EAX,dword ptr [ESI + 0x440]     ; 00492825
    MOV EAX,dword ptr [ESI + 0x460]     ; 0049282b
    MOV EAX,dword ptr [ESI + 0x480]     ; 00492831
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00492837
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 0049283d
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00492843
    MOV EAX,dword ptr [ESI + 0x500]     ; 00492849
    MOV EAX,dword ptr [ESI + 0x520]     ; 0049284f
    MOV EAX,dword ptr [ESI + 0x540]     ; 00492855
    MOV EAX,dword ptr [ESI + 0x560]     ; 0049285b
    MOV EAX,dword ptr [ESI + 0x580]     ; 00492861
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00492867
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 0049286d
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00492873
    MOV EAX,dword ptr [ESI + 0x600]     ; 00492879
    MOV EAX,dword ptr [ESI + 0x620]     ; 0049287f
    MOV EAX,dword ptr [ESI + 0x640]     ; 00492885
    MOV EAX,dword ptr [ESI + 0x660]     ; 0049288b
    MOV EAX,dword ptr [ESI + 0x680]     ; 00492891
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00492897
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 0049289d
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 004928a3
    MOV EAX,dword ptr [ESI + 0x700]     ; 004928a9
    MOV EAX,dword ptr [ESI + 0x720]     ; 004928af
    MOV EAX,dword ptr [ESI + 0x740]     ; 004928b5
    MOV EAX,dword ptr [ESI + 0x760]     ; 004928bb
    MOV EAX,dword ptr [ESI + 0x780]     ; 004928c1
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 004928c7
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 004928cd
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 004928d3
    MOV EAX,dword ptr [ESI + 0x800]     ; 004928d9
    MOV EAX,dword ptr [ESI + 0x820]     ; 004928df
    MOV EAX,dword ptr [ESI + 0x840]     ; 004928e5
    MOV EAX,dword ptr [ESI + 0x860]     ; 004928eb
    MOV EAX,dword ptr [ESI + 0x880]     ; 004928f1
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 004928f7
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 004928fd
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00492903
    MOV EAX,dword ptr [ESI + 0x900]     ; 00492909
    MOV EAX,dword ptr [ESI + 0x920]     ; 0049290f
    MOV EAX,dword ptr [ESI + 0x940]     ; 00492915
    MOV EAX,dword ptr [ESI + 0x960]     ; 0049291b
    MOV EAX,dword ptr [ESI + 0x980]     ; 00492921
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00492927
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 0049292d
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00492933
    MOV EAX,[0x00c19dfc]                ; 00492939 | g_LightmapTexturePalette
    MOV EAX,[0x00c19e1c]                ; 0049293e | g_LightmapTexturePalette[8]
    MOV EAX,[0x00c19e3c]                ; 00492943 | g_LightmapTexturePalette[16]
    MOV EAX,[0x00c19e5c]                ; 00492948 | g_LightmapTexturePalette[24]
    MOV EAX,[0x00c19e7c]                ; 0049294d | g_LightmapTexturePalette[32]
    MOV EAX,[0x00c19e9c]                ; 00492952 | g_LightmapTexturePalette[40]
    MOV EAX,[0x00c19ebc]                ; 00492957 | g_LightmapTexturePalette[48]
    MOV EAX,[0x00c19edc]                ; 0049295c | g_LightmapTexturePalette[56]
    MOV EAX,[0x00c19efc]                ; 00492961 | g_LightmapTexturePalette[64]
    MOV EAX,[0x00c19f1c]                ; 00492966 | g_LightmapTexturePalette[72]
    MOV EAX,[0x00c19f3c]                ; 0049296b | g_LightmapTexturePalette[80]
    MOV EAX,[0x00c19f5c]                ; 00492970 | g_LightmapTexturePalette[88]
    MOV EAX,[0x00c19f7c]                ; 00492975 | g_LightmapTexturePalette[96]
    MOV EAX,[0x00c19f9c]                ; 0049297a | g_LightmapTexturePalette[104]
    MOV EAX,[0x00c19fbc]                ; 0049297f | g_LightmapTexturePalette[112]
    MOV EAX,[0x00c19fdc]                ; 00492984 | g_LightmapTexturePalette[120]
    MOV EAX,[0x00c19ffc]                ; 00492989 | g_LightmapTexturePalette[128]
    MOV EAX,[0x00c1a01c]                ; 0049298e | g_LightmapTexturePalette[136]
    MOV EAX,[0x00c1a03c]                ; 00492993 | g_LightmapTexturePalette[144]
    MOV EAX,[0x00c1a05c]                ; 00492998 | g_LightmapTexturePalette[152]
    MOV EAX,[0x00c1a07c]                ; 0049299d | g_LightmapTexturePalette[160]
    MOV EAX,[0x00c1a09c]                ; 004929a2 | g_LightmapTexturePalette[168]
    MOV EAX,[0x00c1a0bc]                ; 004929a7 | g_LightmapTexturePalette[176]
    MOV EAX,[0x00c1a0dc]                ; 004929ac | g_LightmapTexturePalette[184]
    MOV EAX,[0x00c1a0fc]                ; 004929b1 | g_LightmapTexturePalette[192]
    MOV EAX,[0x00c1a11c]                ; 004929b6 | g_LightmapTexturePalette[200]
    MOV EAX,[0x00c1a13c]                ; 004929bb | g_LightmapTexturePalette[208]
    MOV EAX,[0x00c1a15c]                ; 004929c0 | g_LightmapTexturePalette[216]
    MOV EAX,[0x00c1a17c]                ; 004929c5 | g_LightmapTexturePalette[224]
    MOV EAX,[0x00c1a19c]                ; 004929ca | g_LightmapTexturePalette[232]
    MOV EAX,[0x00c1a1bc]                ; 004929cf | g_LightmapTexturePalette[240]
    MOV EAX,[0x00c1a1dc]                ; 004929d4 | g_LightmapTexturePalette[248]
    MOV EAX,[0x006779f0]                ; 004929d9 | g_LightmapData
    MOV EAX,[0x00677a10]                ; 004929de | g_LightmapData[16]
    MOV EAX,[0x00677a30]                ; 004929e3 | g_LightmapData[32]
    MOV EAX,[0x00677a50]                ; 004929e8 | g_LightmapData[48]
    MOV EAX,[0x00677a70]                ; 004929ed | g_LightmapData[64]
    MOV EAX,[0x00677a90]                ; 004929f2 | g_LightmapData[80]
    MOV EAX,[0x00677ab0]                ; 004929f7 | g_LightmapData[96]
    MOV EAX,[0x00677ad0]                ; 004929fc | g_LightmapData[112]
    MOV EAX,[0x00677af0]                ; 00492a01 | g_LightmapData[128]
    MOV EAX,[0x00677b10]                ; 00492a06 | g_LightmapData[144]
    MOV EAX,[0x00677b30]                ; 00492a0b | g_LightmapData[160]
    MOV EAX,[0x00677b50]                ; 00492a10 | g_LightmapData[176]
    MOV EAX,[0x00677b70]                ; 00492a15 | g_LightmapData[192]
    MOV EAX,[0x00677b90]                ; 00492a1a | g_LightmapData[208]
    MOV EAX,[0x00677bb0]                ; 00492a1f | g_LightmapData[224]
    MOV EAX,[0x00677bd0]                ; 00492a24 | g_LightmapData[240]
    MOV EAX,[0x00677bf0]                ; 00492a29 | g_LightmapData[256]
    MOV EAX,[0x00677c10]                ; 00492a2e | g_LightmapData[272]
    MOV EAX,[0x00677c30]                ; 00492a33 | g_LightmapData[288]
    MOV EAX,[0x00677c50]                ; 00492a38 | g_LightmapData[304]
    MOV EAX,[0x00677c70]                ; 00492a3d | g_LightmapData[320]
    MOV EAX,[0x00677c90]                ; 00492a42 | g_LightmapData[336]
    MOV EAX,[0x00677cb0]                ; 00492a47 | g_LightmapData[352]
    MOV EAX,[0x00677cd0]                ; 00492a4c | g_LightmapData[368]
    MOV EAX,[0x00677cf0]                ; 00492a51 | DAT_00677cf0
    MOV EAX,[0x00677d10]                ; 00492a56 | DAT_00677d10
    MOV EAX,[0x00677d30]                ; 00492a5b | DAT_00677d30
    MOV EAX,[0x00677d50]                ; 00492a60 | DAT_00677d50
    MOV EAX,[0x00677d70]                ; 00492a65 | DAT_00677d70
    MOV EAX,[0x00677d90]                ; 00492a6a | DAT_00677d90
    MOV EAX,[0x00677db0]                ; 00492a6f | DAT_00677db0
    MOV EAX,[0x00677dd0]                ; 00492a74 | DAT_00677dd0
    MOV EAX,[0x00677df0]                ; 00492a79 | DAT_00677df0
    MOV EAX,[0x00677e10]                ; 00492a7e | DAT_00677e10
    MOV EAX,[0x00677e30]                ; 00492a83 | DAT_00677e30
    MOV EAX,[0x00677e50]                ; 00492a88 | DAT_00677e50
    MOV EAX,[0x00677e70]                ; 00492a8d | DAT_00677e70
    MOV EAX,[0x00677e90]                ; 00492a92 | DAT_00677e90
    MOV EAX,[0x00677eb0]                ; 00492a97 | DAT_00677eb0
    MOV EAX,[0x00677ed0]                ; 00492a9c | DAT_00677ed0
    MOV EAX,[0x00677ef0]                ; 00492aa1 | DAT_00677ef0
    MOV EAX,[0x00677f10]                ; 00492aa6 | DAT_00677f10
    MOV EAX,[0x00677f30]                ; 00492aab | DAT_00677f30
    MOV EAX,[0x00677f50]                ; 00492ab0 | DAT_00677f50
    MOV EAX,[0x00677f70]                ; 00492ab5 | DAT_00677f70
    MOV EAX,[0x00677f90]                ; 00492aba | DAT_00677f90
    MOV EAX,[0x00677fb0]                ; 00492abf | DAT_00677fb0
    MOV EAX,[0x00677fd0]                ; 00492ac4 | DAT_00677fd0
    MOV EAX,[0x00677ff0]                ; 00492ac9 | DAT_00677ff0
    MOV EAX,[0x00678010]                ; 00492ace | DAT_00678010
    MOV EAX,[0x00678030]                ; 00492ad3 | DAT_00678030
    MOV EAX,[0x00678050]                ; 00492ad8 | DAT_00678050
    MOV EAX,[0x00678070]                ; 00492add | DAT_00678070
    MOV EAX,[0x00678090]                ; 00492ae2 | DAT_00678090
    MOV EAX,[0x006780b0]                ; 00492ae7 | DAT_006780b0
    MOV EAX,[0x006780d0]                ; 00492aec | DAT_006780d0
    MOV EAX,[0x006780f0]                ; 00492af1 | DAT_006780f0
    MOV EAX,[0x00678110]                ; 00492af6 | DAT_00678110
    MOV EAX,[0x00678130]                ; 00492afb | DAT_00678130
    MOV EAX,[0x00678150]                ; 00492b00 | DAT_00678150
    MOV EAX,[0x00678170]                ; 00492b05 | DAT_00678170
    MOV EAX,[0x00678190]                ; 00492b0a | DAT_00678190
    MOV EAX,[0x006781b0]                ; 00492b0f | DAT_006781b0
    MOV EAX,[0x006781d0]                ; 00492b14 | DAT_006781d0
    MOVZX EDX,byte ptr [EBX]            ; 00492b19
        ;   Label: LAB_00492b19
    MOVD MM0,dword ptr [ESI]            ; 00492b1c
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00492b1f | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 00492b27
    PUNPCKLBW MM0,MM7                   ; 00492b2b
    SHR EDX,0x1                         ; 00492b2e
    PUNPCKLBW MM2,MM7                   ; 00492b30
    ADD EAX,EDX                         ; 00492b33
    PMULLW MM0,MM2                      ; 00492b35
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00492b38 | g_LightmapData
    MOVQ MM2,MM3                        ; 00492b40
    MOVQ MM4,MM5                        ; 00492b43
    PXOR MM2,qword ptr [0x006781e8]     ; 00492b46 | g_LightmapXorMask
    PMULHW MM0,MM2                      ; 00492b4d
    PMULHW MM4,MM3                      ; 00492b50
    PADDW MM0,MM4                       ; 00492b53
    PADDW MM0,qword ptr [0x00676478]    ; 00492b56 | g_LightmapBlendBias1
    PSRLW MM0,0x4                       ; 00492b5d
    PACKUSWB MM0,MM7                    ; 00492b61
    MOVD dword ptr [EDI],MM0            ; 00492b64
    ADD ESI,0x4                         ; 00492b67
    INC EBX                             ; 00492b6a
    INC EBP                             ; 00492b6b
    ADD EDI,0x4                         ; 00492b6c
    MOVZX EDX,byte ptr [EBX]            ; 00492b6f
    MOVD MM0,dword ptr [ESI]            ; 00492b72
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00492b75 | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 00492b7d
    PUNPCKLBW MM0,MM7                   ; 00492b81
    SHR EDX,0x1                         ; 00492b84
    PUNPCKLBW MM2,MM7                   ; 00492b86
    ADD EAX,EDX                         ; 00492b89
    PMULLW MM0,MM2                      ; 00492b8b
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00492b8e | g_LightmapData
    MOVQ MM2,MM3                        ; 00492b96
    MOVQ MM4,MM5                        ; 00492b99
    PXOR MM2,qword ptr [0x006781e8]     ; 00492b9c | g_LightmapXorMask
    PMULHW MM0,MM2                      ; 00492ba3
    PMULHW MM4,MM3                      ; 00492ba6
    PADDW MM0,MM4                       ; 00492ba9
    PADDW MM0,qword ptr [0x00676480]    ; 00492bac | g_LightmapBlendBias2
    PSRLW MM0,0x4                       ; 00492bb3
    PACKUSWB MM0,MM7                    ; 00492bb7
    MOVD dword ptr [EDI],MM0            ; 00492bba
    ADD ESI,0x4                         ; 00492bbd
    INC EBX                             ; 00492bc0
    INC EBP                             ; 00492bc1
    ADD EDI,0x4                         ; 00492bc2
    SUB ECX,0x2                         ; 00492bc5
    JG 0x00492b19                       ; 00492bc8
        ;   XREF to: 00492b19 (CONDITIONAL_JUMP)  ; LAB_00492b19
    POP EBP                             ; 00492bce
    EMMS                                ; 00492bcf
    POP EDI                             ; 00492bd1
    POP ESI                             ; 00492bd2
    LEAVE                               ; 00492bd3
    RET                                 ; 00492bd4

