; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 at 004535ee
;
; Referenced Globals:
;   ulonglong g_AmbientLightMMX1 = 0x4000400040004
;   ulonglong g_AmbientLightMMX2 = 0xc000c000c000c
;   ushort[384] g_LightmapData
;   double g_LightmapXorMask = 0.126945525291829
;   uint[256] g_LightmapTexturePalette
;   int g_SolidColorMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00491c9a
        ;   Label: core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a
    MOV EBP,ESP                         ; 00491c9b
    PUSH ESI                            ; 00491c9d
    PUSH EDI                            ; 00491c9e
    PUSH EBP                            ; 00491c9f
    MOV ECX,dword ptr [EBP + 0x18]      ; 00491ca0
    MOV EDI,dword ptr [EBP + 0x8]       ; 00491ca3
    MOV ESI,dword ptr [EBP + 0xc]       ; 00491ca6
    MOV EBX,dword ptr [EBP + 0x10]      ; 00491ca9
    MOV EBP,dword ptr [EBP + 0x14]      ; 00491cac
    PXOR MM7,MM7                        ; 00491caf
    MOVD MM5,dword ptr [0x02d052a8]     ; 00491cb2 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 00491cb9
    PSLLW MM5,0x6                       ; 00491cbc
    MOV EAX,dword ptr [ESI]             ; 00491cc0
    MOV EAX,dword ptr [ESI + 0x20]      ; 00491cc2
    MOV EAX,dword ptr [ESI + 0x40]      ; 00491cc5
    MOV EAX,dword ptr [ESI + 0x60]      ; 00491cc8
    MOV EAX,dword ptr [ESI + 0x80]      ; 00491ccb
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00491cd1
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00491cd7
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00491cdd
    MOV EAX,dword ptr [ESI + 0x100]     ; 00491ce3
    MOV EAX,dword ptr [ESI + 0x120]     ; 00491ce9
    MOV EAX,dword ptr [ESI + 0x140]     ; 00491cef
    MOV EAX,dword ptr [ESI + 0x160]     ; 00491cf5
    MOV EAX,dword ptr [ESI + 0x180]     ; 00491cfb
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00491d01
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00491d07
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00491d0d
    MOV EAX,dword ptr [ESI + 0x200]     ; 00491d13
    MOV EAX,dword ptr [ESI + 0x220]     ; 00491d19
    MOV EAX,dword ptr [ESI + 0x240]     ; 00491d1f
    MOV EAX,dword ptr [ESI + 0x260]     ; 00491d25
    MOV EAX,dword ptr [ESI + 0x280]     ; 00491d2b
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00491d31
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00491d37
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00491d3d
    MOV EAX,dword ptr [ESI + 0x300]     ; 00491d43
    MOV EAX,dword ptr [ESI + 0x320]     ; 00491d49
    MOV EAX,dword ptr [ESI + 0x340]     ; 00491d4f
    MOV EAX,dword ptr [ESI + 0x360]     ; 00491d55
    MOV EAX,dword ptr [ESI + 0x380]     ; 00491d5b
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00491d61
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00491d67
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00491d6d
    MOV EAX,dword ptr [ESI + 0x400]     ; 00491d73
    MOV EAX,dword ptr [ESI + 0x420]     ; 00491d79
    MOV EAX,dword ptr [ESI + 0x440]     ; 00491d7f
    MOV EAX,dword ptr [ESI + 0x460]     ; 00491d85
    MOV EAX,dword ptr [ESI + 0x480]     ; 00491d8b
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00491d91
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00491d97
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00491d9d
    MOV EAX,dword ptr [ESI + 0x500]     ; 00491da3
    MOV EAX,dword ptr [ESI + 0x520]     ; 00491da9
    MOV EAX,dword ptr [ESI + 0x540]     ; 00491daf
    MOV EAX,dword ptr [ESI + 0x560]     ; 00491db5
    MOV EAX,dword ptr [ESI + 0x580]     ; 00491dbb
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00491dc1
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00491dc7
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00491dcd
    MOV EAX,dword ptr [ESI + 0x600]     ; 00491dd3
    MOV EAX,dword ptr [ESI + 0x620]     ; 00491dd9
    MOV EAX,dword ptr [ESI + 0x640]     ; 00491ddf
    MOV EAX,dword ptr [ESI + 0x660]     ; 00491de5
    MOV EAX,dword ptr [ESI + 0x680]     ; 00491deb
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00491df1
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00491df7
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00491dfd
    MOV EAX,dword ptr [ESI + 0x700]     ; 00491e03
    MOV EAX,dword ptr [ESI + 0x720]     ; 00491e09
    MOV EAX,dword ptr [ESI + 0x740]     ; 00491e0f
    MOV EAX,dword ptr [ESI + 0x760]     ; 00491e15
    MOV EAX,dword ptr [ESI + 0x780]     ; 00491e1b
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00491e21
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00491e27
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00491e2d
    MOV EAX,dword ptr [ESI + 0x800]     ; 00491e33
    MOV EAX,dword ptr [ESI + 0x820]     ; 00491e39
    MOV EAX,dword ptr [ESI + 0x840]     ; 00491e3f
    MOV EAX,dword ptr [ESI + 0x860]     ; 00491e45
    MOV EAX,dword ptr [ESI + 0x880]     ; 00491e4b
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00491e51
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00491e57
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00491e5d
    MOV EAX,dword ptr [ESI + 0x900]     ; 00491e63
    MOV EAX,dword ptr [ESI + 0x920]     ; 00491e69
    MOV EAX,dword ptr [ESI + 0x940]     ; 00491e6f
    MOV EAX,dword ptr [ESI + 0x960]     ; 00491e75
    MOV EAX,dword ptr [ESI + 0x980]     ; 00491e7b
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00491e81
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00491e87
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00491e8d
    MOV EAX,dword ptr [EBX + 0x140]     ; 00491e93
    MOV EAX,dword ptr [EBX + 0x160]     ; 00491e99
    MOV EAX,dword ptr [EBX + 0x180]     ; 00491e9f
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 00491ea5
    MOV EAX,dword ptr [EBX + 0x1c0]     ; 00491eab
    MOV EAX,dword ptr [EBX + 0x1e0]     ; 00491eb1
    MOV EAX,dword ptr [EBX + 0x200]     ; 00491eb7
    MOV EAX,dword ptr [EBX + 0x220]     ; 00491ebd
    MOV EAX,dword ptr [EBX + 0x240]     ; 00491ec3
    MOV EAX,dword ptr [EBX + 0x260]     ; 00491ec9
    JMP 0x00491ee0                      ; 00491ecf
        ;   XREF to: 00491ee0 (UNCONDITIONAL_JUMP)  ; LAB_00491ee0
    MOVZX EDX,byte ptr [EBX]            ; 00491ee0
        ;   Label: LAB_00491ee0
    MOVZX EAX,byte ptr [EBX + 0x140]    ; 00491ee3
    ADD EDX,EAX                         ; 00491eea
    MOVQ MM0,qword ptr [ESI]            ; 00491eec
    SHR EDX,0x1                         ; 00491eef
    MOVZX EAX,byte ptr [EBX + 0x141]    ; 00491ef1
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00491ef8 | g_LightmapTexturePalette
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 00491f00
    MOVQ MM1,MM0                        ; 00491f04
    ADD EDX,EAX                         ; 00491f07
    MOVZX EAX,byte ptr [EBP]            ; 00491f09
    SHR EDX,0x1                         ; 00491f0d
    PUNPCKLBW MM0,MM7                   ; 00491f0f
    MOVD MM6,dword ptr [EDX*0x4 + 0xc19dfc] ; 00491f12 | g_LightmapTexturePalette
    PSRLQ MM1,0x20                      ; 00491f1a
    SHR EDX,0x1                         ; 00491f1e
    PUNPCKLBW MM6,MM7                   ; 00491f20
    PUNPCKLBW MM2,MM7                   ; 00491f23
    ADD EAX,EDX                         ; 00491f26
    PADDW MM6,MM2                       ; 00491f28
    PUNPCKLBW MM1,MM7                   ; 00491f2b
    PMULLW MM0,MM2                      ; 00491f2e
    PSRLW MM6,0x1                       ; 00491f31
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00491f35 | g_LightmapData
    PMULLW MM1,MM6                      ; 00491f3d
    MOVQ MM2,MM3                        ; 00491f40
    MOVQ MM4,MM5                        ; 00491f43
    PXOR MM2,qword ptr [0x006781e8]     ; 00491f46 | g_LightmapXorMask
    PMULHW MM0,MM2                      ; 00491f4d
    PMULHW MM1,MM2                      ; 00491f50
    PMULHW MM4,MM3                      ; 00491f53
    PADDW MM0,MM4                       ; 00491f56
    PADDW MM1,MM4                       ; 00491f59
    PADDW MM0,qword ptr [0x00676488]    ; 00491f5c | g_AmbientLightMMX1
    PADDW MM1,qword ptr [0x00676490]    ; 00491f63 | g_AmbientLightMMX2
    PSRLW MM0,0x4                       ; 00491f6a
    PSRLW MM1,0x4                       ; 00491f6e
    PACKUSWB MM0,MM1                    ; 00491f72
    ADD ESI,0x8                         ; 00491f75
    INC EBX                             ; 00491f78
    INC EBP                             ; 00491f79
    MOVQ qword ptr [EDI],MM0            ; 00491f7a
    ADD EDI,0x8                         ; 00491f7d
    SUB ECX,0x2                         ; 00491f80
    JG 0x00491ee0                       ; 00491f83
        ;   XREF to: 00491ee0 (CONDITIONAL_JUMP)  ; LAB_00491ee0
    POP EBP                             ; 00491f89
    EMMS                                ; 00491f8a
    POP EDI                             ; 00491f8c
    POP ESI                             ; 00491f8d
    LEAVE                               ; 00491f8e
    RET                                 ; 00491f8f

