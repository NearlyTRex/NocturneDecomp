; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dstrender_cpp_blendTextureWithLightmapMMX_FUN_00493860 (uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices, int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 at 004533ec
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
;   ... and 91 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00493860
        ;   Label: core_dstrender.cpp_blendTextureWithLightmapMMX_FUN_00493860
    MOV EBP,ESP                         ; 00493861
    PUSH ESI                            ; 00493863
    PUSH EDI                            ; 00493864
    PUSH EBP                            ; 00493865
    MOV ECX,dword ptr [EBP + 0x18]      ; 00493866
    MOV EDI,dword ptr [EBP + 0x8]       ; 00493869
    MOV ESI,dword ptr [EBP + 0xc]       ; 0049386c
    MOV EBX,dword ptr [EBP + 0x10]      ; 0049386f
    MOV EBP,dword ptr [EBP + 0x14]      ; 00493872
    PXOR MM7,MM7                        ; 00493875
    MOVD MM5,dword ptr [0x02d052a8]     ; 00493878 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 0049387f
    PSLLW MM5,0x6                       ; 00493882
    MOV EAX,dword ptr [EBX]             ; 00493886
    MOV EAX,dword ptr [EBX + 0x20]      ; 00493888
    MOV EAX,dword ptr [EBX + 0x40]      ; 0049388b
    MOV EAX,dword ptr [EBX + 0x60]      ; 0049388e
    MOV EAX,dword ptr [EBX + 0x80]      ; 00493891
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00493897
    MOV EAX,dword ptr [EBX + 0xc0]      ; 0049389d
    MOV EAX,dword ptr [EBX + 0xe0]      ; 004938a3
    MOV EAX,dword ptr [EBX + 0x100]     ; 004938a9
    MOV EAX,dword ptr [EBX + 0x120]     ; 004938af
    MOV EDX,dword ptr [EBP]             ; 004938b5
    MOV EDX,dword ptr [EBP + 0x20]      ; 004938b8
    MOV EDX,dword ptr [EBP + 0x40]      ; 004938bb
    MOV EDX,dword ptr [EBP + 0x60]      ; 004938be
    MOV EDX,dword ptr [EBP + 0x80]      ; 004938c1
    MOV EDX,dword ptr [EBP + 0xa0]      ; 004938c7
    MOV EDX,dword ptr [EBP + 0xc0]      ; 004938cd
    MOV EDX,dword ptr [EBP + 0xe0]      ; 004938d3
    MOV EDX,dword ptr [EBP + 0x100]     ; 004938d9
    MOV EDX,dword ptr [EBP + 0x120]     ; 004938df
    MOV EAX,dword ptr [ESI]             ; 004938e5
    MOV EAX,dword ptr [ESI + 0x20]      ; 004938e7
    MOV EAX,dword ptr [ESI + 0x40]      ; 004938ea
    MOV EAX,dword ptr [ESI + 0x60]      ; 004938ed
    MOV EAX,dword ptr [ESI + 0x80]      ; 004938f0
    MOV EAX,dword ptr [ESI + 0xa0]      ; 004938f6
    MOV EAX,dword ptr [ESI + 0xc0]      ; 004938fc
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00493902
    MOV EAX,dword ptr [ESI + 0x100]     ; 00493908
    MOV EAX,dword ptr [ESI + 0x120]     ; 0049390e
    MOV EAX,dword ptr [ESI + 0x140]     ; 00493914
    MOV EAX,dword ptr [ESI + 0x160]     ; 0049391a
    MOV EAX,dword ptr [ESI + 0x180]     ; 00493920
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00493926
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 0049392c
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00493932
    MOV EAX,dword ptr [ESI + 0x200]     ; 00493938
    MOV EAX,dword ptr [ESI + 0x220]     ; 0049393e
    MOV EAX,dword ptr [ESI + 0x240]     ; 00493944
    MOV EAX,dword ptr [ESI + 0x260]     ; 0049394a
    MOV EAX,dword ptr [ESI + 0x280]     ; 00493950
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00493956
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 0049395c
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00493962
    MOV EAX,dword ptr [ESI + 0x300]     ; 00493968
    MOV EAX,dword ptr [ESI + 0x320]     ; 0049396e
    MOV EAX,dword ptr [ESI + 0x340]     ; 00493974
    MOV EAX,dword ptr [ESI + 0x360]     ; 0049397a
    MOV EAX,dword ptr [ESI + 0x380]     ; 00493980
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00493986
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0049398c
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00493992
    MOV EAX,dword ptr [ESI + 0x400]     ; 00493998
    MOV EAX,dword ptr [ESI + 0x420]     ; 0049399e
    MOV EAX,dword ptr [ESI + 0x440]     ; 004939a4
    MOV EAX,dword ptr [ESI + 0x460]     ; 004939aa
    MOV EAX,dword ptr [ESI + 0x480]     ; 004939b0
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 004939b6
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 004939bc
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 004939c2
    MOV EAX,dword ptr [ESI + 0x500]     ; 004939c8
    MOV EAX,dword ptr [ESI + 0x520]     ; 004939ce
    MOV EAX,dword ptr [ESI + 0x540]     ; 004939d4
    MOV EAX,dword ptr [ESI + 0x560]     ; 004939da
    MOV EAX,dword ptr [ESI + 0x580]     ; 004939e0
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 004939e6
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 004939ec
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 004939f2
    MOV EAX,dword ptr [ESI + 0x600]     ; 004939f8
    MOV EAX,dword ptr [ESI + 0x620]     ; 004939fe
    MOV EAX,dword ptr [ESI + 0x640]     ; 00493a04
    MOV EAX,dword ptr [ESI + 0x660]     ; 00493a0a
    MOV EAX,dword ptr [ESI + 0x680]     ; 00493a10
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00493a16
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00493a1c
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00493a22
    MOV EAX,dword ptr [ESI + 0x700]     ; 00493a28
    MOV EAX,dword ptr [ESI + 0x720]     ; 00493a2e
    MOV EAX,dword ptr [ESI + 0x740]     ; 00493a34
    MOV EAX,dword ptr [ESI + 0x760]     ; 00493a3a
    MOV EAX,dword ptr [ESI + 0x780]     ; 00493a40
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00493a46
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00493a4c
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00493a52
    MOV EAX,dword ptr [ESI + 0x800]     ; 00493a58
    MOV EAX,dword ptr [ESI + 0x820]     ; 00493a5e
    MOV EAX,dword ptr [ESI + 0x840]     ; 00493a64
    MOV EAX,dword ptr [ESI + 0x860]     ; 00493a6a
    MOV EAX,dword ptr [ESI + 0x880]     ; 00493a70
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00493a76
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00493a7c
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00493a82
    MOV EAX,dword ptr [ESI + 0x900]     ; 00493a88
    MOV EAX,dword ptr [ESI + 0x920]     ; 00493a8e
    MOV EAX,dword ptr [ESI + 0x940]     ; 00493a94
    MOV EAX,dword ptr [ESI + 0x960]     ; 00493a9a
    MOV EAX,dword ptr [ESI + 0x980]     ; 00493aa0
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00493aa6
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00493aac
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00493ab2
    MOV EAX,[0x00c19dfc]                ; 00493ab8 | g_LightmapTexturePalette
    MOV EAX,[0x00c19e1c]                ; 00493abd | g_LightmapTexturePalette[8]
    MOV EAX,[0x00c19e3c]                ; 00493ac2 | g_LightmapTexturePalette[16]
    MOV EAX,[0x00c19e5c]                ; 00493ac7 | g_LightmapTexturePalette[24]
    MOV EAX,[0x00c19e7c]                ; 00493acc | g_LightmapTexturePalette[32]
    MOV EAX,[0x00c19e9c]                ; 00493ad1 | g_LightmapTexturePalette[40]
    MOV EAX,[0x00c19ebc]                ; 00493ad6 | g_LightmapTexturePalette[48]
    MOV EAX,[0x00c19edc]                ; 00493adb | g_LightmapTexturePalette[56]
    MOV EAX,[0x00c19efc]                ; 00493ae0 | g_LightmapTexturePalette[64]
    MOV EAX,[0x00c19f1c]                ; 00493ae5 | g_LightmapTexturePalette[72]
    MOV EAX,[0x00c19f3c]                ; 00493aea | g_LightmapTexturePalette[80]
    MOV EAX,[0x00c19f5c]                ; 00493aef | g_LightmapTexturePalette[88]
    MOV EAX,[0x00c19f7c]                ; 00493af4 | g_LightmapTexturePalette[96]
    MOV EAX,[0x00c19f9c]                ; 00493af9 | g_LightmapTexturePalette[104]
    MOV EAX,[0x00c19fbc]                ; 00493afe | g_LightmapTexturePalette[112]
    MOV EAX,[0x00c19fdc]                ; 00493b03 | g_LightmapTexturePalette[120]
    MOV EAX,[0x00c19ffc]                ; 00493b08 | g_LightmapTexturePalette[128]
    MOV EAX,[0x00c1a01c]                ; 00493b0d | g_LightmapTexturePalette[136]
    MOV EAX,[0x00c1a03c]                ; 00493b12 | g_LightmapTexturePalette[144]
    MOV EAX,[0x00c1a05c]                ; 00493b17 | g_LightmapTexturePalette[152]
    MOV EAX,[0x00c1a07c]                ; 00493b1c | g_LightmapTexturePalette[160]
    MOV EAX,[0x00c1a09c]                ; 00493b21 | g_LightmapTexturePalette[168]
    MOV EAX,[0x00c1a0bc]                ; 00493b26 | g_LightmapTexturePalette[176]
    MOV EAX,[0x00c1a0dc]                ; 00493b2b | g_LightmapTexturePalette[184]
    MOV EAX,[0x00c1a0fc]                ; 00493b30 | g_LightmapTexturePalette[192]
    MOV EAX,[0x00c1a11c]                ; 00493b35 | g_LightmapTexturePalette[200]
    MOV EAX,[0x00c1a13c]                ; 00493b3a | g_LightmapTexturePalette[208]
    MOV EAX,[0x00c1a15c]                ; 00493b3f | g_LightmapTexturePalette[216]
    MOV EAX,[0x00c1a17c]                ; 00493b44 | g_LightmapTexturePalette[224]
    MOV EAX,[0x00c1a19c]                ; 00493b49 | g_LightmapTexturePalette[232]
    MOV EAX,[0x00c1a1bc]                ; 00493b4e | g_LightmapTexturePalette[240]
    MOV EAX,[0x00c1a1dc]                ; 00493b53 | g_LightmapTexturePalette[248]
    MOV EAX,[0x006779f0]                ; 00493b58 | g_LightmapData
    MOV EAX,[0x00677a10]                ; 00493b5d | g_LightmapData[16]
    MOV EAX,[0x00677a30]                ; 00493b62 | g_LightmapData[32]
    MOV EAX,[0x00677a50]                ; 00493b67 | g_LightmapData[48]
    MOV EAX,[0x00677a70]                ; 00493b6c | g_LightmapData[64]
    MOV EAX,[0x00677a90]                ; 00493b71 | g_LightmapData[80]
    MOV EAX,[0x00677ab0]                ; 00493b76 | g_LightmapData[96]
    MOV EAX,[0x00677ad0]                ; 00493b7b | g_LightmapData[112]
    MOV EAX,[0x00677af0]                ; 00493b80 | g_LightmapData[128]
    MOV EAX,[0x00677b10]                ; 00493b85 | g_LightmapData[144]
    MOV EAX,[0x00677b30]                ; 00493b8a | g_LightmapData[160]
    MOV EAX,[0x00677b50]                ; 00493b8f | g_LightmapData[176]
    MOV EAX,[0x00677b70]                ; 00493b94 | g_LightmapData[192]
    MOV EAX,[0x00677b90]                ; 00493b99 | g_LightmapData[208]
    MOV EAX,[0x00677bb0]                ; 00493b9e | g_LightmapData[224]
    MOV EAX,[0x00677bd0]                ; 00493ba3 | g_LightmapData[240]
    MOV EAX,[0x00677bf0]                ; 00493ba8 | g_LightmapData[256]
    MOV EAX,[0x00677c10]                ; 00493bad | g_LightmapData[272]
    MOV EAX,[0x00677c30]                ; 00493bb2 | g_LightmapData[288]
    MOV EAX,[0x00677c50]                ; 00493bb7 | g_LightmapData[304]
    MOV EAX,[0x00677c70]                ; 00493bbc | g_LightmapData[320]
    MOV EAX,[0x00677c90]                ; 00493bc1 | g_LightmapData[336]
    MOV EAX,[0x00677cb0]                ; 00493bc6 | g_LightmapData[352]
    MOV EAX,[0x00677cd0]                ; 00493bcb | g_LightmapData[368]
    MOV EAX,[0x00677cf0]                ; 00493bd0 | DAT_00677cf0
    MOV EAX,[0x00677d10]                ; 00493bd5 | DAT_00677d10
    MOV EAX,[0x00677d30]                ; 00493bda | DAT_00677d30
    MOV EAX,[0x00677d50]                ; 00493bdf | DAT_00677d50
    MOV EAX,[0x00677d70]                ; 00493be4 | DAT_00677d70
    MOV EAX,[0x00677d90]                ; 00493be9 | DAT_00677d90
    MOV EAX,[0x00677db0]                ; 00493bee | DAT_00677db0
    MOV EAX,[0x00677dd0]                ; 00493bf3 | DAT_00677dd0
    MOV EAX,[0x00677df0]                ; 00493bf8 | DAT_00677df0
    MOV EAX,[0x00677e10]                ; 00493bfd | DAT_00677e10
    MOV EAX,[0x00677e30]                ; 00493c02 | DAT_00677e30
    MOV EAX,[0x00677e50]                ; 00493c07 | DAT_00677e50
    MOV EAX,[0x00677e70]                ; 00493c0c | DAT_00677e70
    MOV EAX,[0x00677e90]                ; 00493c11 | DAT_00677e90
    MOV EAX,[0x00677eb0]                ; 00493c16 | DAT_00677eb0
    MOV EAX,[0x00677ed0]                ; 00493c1b | DAT_00677ed0
    MOV EAX,[0x00677ef0]                ; 00493c20 | DAT_00677ef0
    MOV EAX,[0x00677f10]                ; 00493c25 | DAT_00677f10
    MOV EAX,[0x00677f30]                ; 00493c2a | DAT_00677f30
    MOV EAX,[0x00677f50]                ; 00493c2f | DAT_00677f50
    MOV EAX,[0x00677f70]                ; 00493c34 | DAT_00677f70
    MOV EAX,[0x00677f90]                ; 00493c39 | DAT_00677f90
    MOV EAX,[0x00677fb0]                ; 00493c3e | DAT_00677fb0
    MOV EAX,[0x00677fd0]                ; 00493c43 | DAT_00677fd0
    MOV EAX,[0x00677ff0]                ; 00493c48 | DAT_00677ff0
    MOV EAX,[0x00678010]                ; 00493c4d | DAT_00678010
    MOV EAX,[0x00678030]                ; 00493c52 | DAT_00678030
    MOV EAX,[0x00678050]                ; 00493c57 | DAT_00678050
    MOV EAX,[0x00678070]                ; 00493c5c | DAT_00678070
    MOV EAX,[0x00678090]                ; 00493c61 | DAT_00678090
    MOV EAX,[0x006780b0]                ; 00493c66 | DAT_006780b0
    MOV EAX,[0x006780d0]                ; 00493c6b | DAT_006780d0
    MOV EAX,[0x006780f0]                ; 00493c70 | DAT_006780f0
    MOV EAX,[0x00678110]                ; 00493c75 | DAT_00678110
    MOV EAX,[0x00678130]                ; 00493c7a | DAT_00678130
    MOV EAX,[0x00678150]                ; 00493c7f | DAT_00678150
    MOV EAX,[0x00678170]                ; 00493c84 | DAT_00678170
    MOV EAX,[0x00678190]                ; 00493c89 | DAT_00678190
    MOV EAX,[0x006781b0]                ; 00493c8e | DAT_006781b0
    MOV EAX,[0x006781d0]                ; 00493c93 | DAT_006781d0
    MOVZX EDX,byte ptr [EBX]            ; 00493c98
        ;   Label: LAB_00493c98
    MOVD MM0,dword ptr [ESI]            ; 00493c9b
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00493c9e | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 00493ca6
    PUNPCKLBW MM0,MM7                   ; 00493caa
    SHR EDX,0x1                         ; 00493cad
    PUNPCKLBW MM2,MM7                   ; 00493caf
    ADD EAX,EDX                         ; 00493cb2
    PMULLW MM0,MM2                      ; 00493cb4
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00493cb7 | g_LightmapData
    MOVQ MM2,MM3                        ; 00493cbf
    MOVQ MM4,MM5                        ; 00493cc2
    PXOR MM2,qword ptr [0x006781e8]     ; 00493cc5 | g_LightmapXorMask
    PMULHW MM0,MM2                      ; 00493ccc
    PMULHW MM4,MM3                      ; 00493ccf
    PADDW MM0,MM4                       ; 00493cd2
    PADDW MM0,qword ptr [0x00676478]    ; 00493cd5 | g_LightmapBlendBias1
    PSRLW MM0,0x4                       ; 00493cdc
    PACKUSWB MM0,MM7                    ; 00493ce0
    MOVQ MM2,MM0                        ; 00493ce3
    MOVQ MM3,MM0                        ; 00493ce6
    PAND MM0,qword ptr [0x006827a0]     ; 00493ce9 | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 00493cf0 | g_GreenMask32
    PAND MM3,qword ptr [0x00682760]     ; 00493cf7 | g_RedMask32
    PSRLQ MM0,qword ptr [0x006827e8]    ; 00493cfe | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 00493d05 | g_GreenBlueBits
    PSRLQ MM3,qword ptr [0x006827a8]    ; 00493d0c | g_TotalColorBits
    POR MM0,MM2                         ; 00493d13
    POR MM0,MM3                         ; 00493d16
    MOVQ MM6,MM0                        ; 00493d19
    ADD ESI,0x4                         ; 00493d1c
    INC EBX                             ; 00493d1f
    INC EBP                             ; 00493d20
    MOVZX EDX,byte ptr [EBX]            ; 00493d21
    MOVD MM0,dword ptr [ESI]            ; 00493d24
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00493d27 | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 00493d2f
    PUNPCKLBW MM0,MM7                   ; 00493d33
    SHR EDX,0x1                         ; 00493d36
    PUNPCKLBW MM2,MM7                   ; 00493d38
    ADD EAX,EDX                         ; 00493d3b
    PMULLW MM0,MM2                      ; 00493d3d
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00493d40 | g_LightmapData
    MOVQ MM2,MM3                        ; 00493d48
    MOVQ MM4,MM5                        ; 00493d4b
    PXOR MM2,qword ptr [0x006781e8]     ; 00493d4e | g_LightmapXorMask
    PMULHW MM0,MM2                      ; 00493d55
    PMULHW MM4,MM3                      ; 00493d58
    PADDW MM0,MM4                       ; 00493d5b
    PADDW MM0,qword ptr [0x00676480]    ; 00493d5e | g_LightmapBlendBias2
    PSRLW MM0,0x4                       ; 00493d65
    PACKUSWB MM0,MM7                    ; 00493d69
    MOVQ MM2,MM0                        ; 00493d6c
    MOVQ MM3,MM0                        ; 00493d6f
    PAND MM0,qword ptr [0x006827a0]     ; 00493d72 | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 00493d79 | g_GreenMask32
    PAND MM3,qword ptr [0x00682760]     ; 00493d80 | g_RedMask32
    PSRLQ MM0,qword ptr [0x006827e8]    ; 00493d87 | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 00493d8e | g_GreenBlueBits
    PSRLQ MM3,qword ptr [0x006827a8]    ; 00493d95 | g_TotalColorBits
    POR MM0,MM2                         ; 00493d9c
    POR MM0,MM3                         ; 00493d9f
    PSLLQ MM0,0x10                      ; 00493da2
    POR MM0,MM6                         ; 00493da6
    MOVD dword ptr [EDI],MM0            ; 00493da9
    ADD ESI,0x4                         ; 00493dac
    INC EBX                             ; 00493daf
    INC EBP                             ; 00493db0
    ADD EDI,0x4                         ; 00493db1
    SUB ECX,0x2                         ; 00493db4
    JG 0x00493c98                       ; 00493db7
        ;   XREF to: 00493c98 (CONDITIONAL_JUMP)  ; LAB_00493c98
    POP EBP                             ; 00493dbd
    EMMS                                ; 00493dbe
    POP EDI                             ; 00493dc0
    POP ESI                             ; 00493dc1
    LEAVE                               ; 00493dc2
    RET                                 ; 00493dc3

