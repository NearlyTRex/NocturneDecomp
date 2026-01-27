; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 at 004535c6
;
; Referenced Globals:
;   ulonglong g_AmbientLightMMX1 = 0x4000400040004
;   ulonglong g_AmbientLightMMX2 = 0xc000c000c000c
;   ushort[384] g_LightmapData
;   double g_LightmapXorMask = 0.126945525291829
;   uint[256] g_LightmapTexturePalette
;   ulong g_SolidColorMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00492bd5
        ;   Label: core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5
    MOV EBP,ESP                         ; 00492bd6
    PUSH ESI                            ; 00492bd8
    PUSH EDI                            ; 00492bd9
    PUSH EBP                            ; 00492bda
    MOV ECX,dword ptr [EBP + 0x18]      ; 00492bdb
    MOV EDI,dword ptr [EBP + 0x8]       ; 00492bde
    MOV ESI,dword ptr [EBP + 0xc]       ; 00492be1
    MOV EBX,dword ptr [EBP + 0x10]      ; 00492be4
    MOV EBP,dword ptr [EBP + 0x14]      ; 00492be7
    PXOR MM7,MM7                        ; 00492bea
    MOVD MM5,dword ptr [0x02d052a8]     ; 00492bed | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 00492bf4
    PSLLW MM5,0x6                       ; 00492bf7
    MOV EAX,dword ptr [ESI]             ; 00492bfb
    MOV EAX,dword ptr [ESI + 0x20]      ; 00492bfd
    MOV EAX,dword ptr [ESI + 0x40]      ; 00492c00
    MOV EAX,dword ptr [ESI + 0x60]      ; 00492c03
    MOV EAX,dword ptr [ESI + 0x80]      ; 00492c06
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00492c0c
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00492c12
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00492c18
    MOV EAX,dword ptr [ESI + 0x100]     ; 00492c1e
    MOV EAX,dword ptr [ESI + 0x120]     ; 00492c24
    MOV EAX,dword ptr [ESI + 0x140]     ; 00492c2a
    MOV EAX,dword ptr [ESI + 0x160]     ; 00492c30
    MOV EAX,dword ptr [ESI + 0x180]     ; 00492c36
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00492c3c
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00492c42
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00492c48
    MOV EAX,dword ptr [ESI + 0x200]     ; 00492c4e
    MOV EAX,dword ptr [ESI + 0x220]     ; 00492c54
    MOV EAX,dword ptr [ESI + 0x240]     ; 00492c5a
    MOV EAX,dword ptr [ESI + 0x260]     ; 00492c60
    MOV EAX,dword ptr [ESI + 0x280]     ; 00492c66
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00492c6c
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00492c72
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00492c78
    MOV EAX,dword ptr [ESI + 0x300]     ; 00492c7e
    MOV EAX,dword ptr [ESI + 0x320]     ; 00492c84
    MOV EAX,dword ptr [ESI + 0x340]     ; 00492c8a
    MOV EAX,dword ptr [ESI + 0x360]     ; 00492c90
    MOV EAX,dword ptr [ESI + 0x380]     ; 00492c96
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00492c9c
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00492ca2
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00492ca8
    MOV EAX,dword ptr [ESI + 0x400]     ; 00492cae
    MOV EAX,dword ptr [ESI + 0x420]     ; 00492cb4
    MOV EAX,dword ptr [ESI + 0x440]     ; 00492cba
    MOV EAX,dword ptr [ESI + 0x460]     ; 00492cc0
    MOV EAX,dword ptr [ESI + 0x480]     ; 00492cc6
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00492ccc
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00492cd2
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00492cd8
    MOV EAX,dword ptr [ESI + 0x500]     ; 00492cde
    MOV EAX,dword ptr [ESI + 0x520]     ; 00492ce4
    MOV EAX,dword ptr [ESI + 0x540]     ; 00492cea
    MOV EAX,dword ptr [ESI + 0x560]     ; 00492cf0
    MOV EAX,dword ptr [ESI + 0x580]     ; 00492cf6
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00492cfc
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00492d02
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00492d08
    MOV EAX,dword ptr [ESI + 0x600]     ; 00492d0e
    MOV EAX,dword ptr [ESI + 0x620]     ; 00492d14
    MOV EAX,dword ptr [ESI + 0x640]     ; 00492d1a
    MOV EAX,dword ptr [ESI + 0x660]     ; 00492d20
    MOV EAX,dword ptr [ESI + 0x680]     ; 00492d26
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00492d2c
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00492d32
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00492d38
    MOV EAX,dword ptr [ESI + 0x700]     ; 00492d3e
    MOV EAX,dword ptr [ESI + 0x720]     ; 00492d44
    MOV EAX,dword ptr [ESI + 0x740]     ; 00492d4a
    MOV EAX,dword ptr [ESI + 0x760]     ; 00492d50
    MOV EAX,dword ptr [ESI + 0x780]     ; 00492d56
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00492d5c
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00492d62
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00492d68
    MOV EAX,dword ptr [ESI + 0x800]     ; 00492d6e
    MOV EAX,dword ptr [ESI + 0x820]     ; 00492d74
    MOV EAX,dword ptr [ESI + 0x840]     ; 00492d7a
    MOV EAX,dword ptr [ESI + 0x860]     ; 00492d80
    MOV EAX,dword ptr [ESI + 0x880]     ; 00492d86
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00492d8c
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00492d92
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00492d98
    MOV EAX,dword ptr [ESI + 0x900]     ; 00492d9e
    MOV EAX,dword ptr [ESI + 0x920]     ; 00492da4
    MOV EAX,dword ptr [ESI + 0x940]     ; 00492daa
    MOV EAX,dword ptr [ESI + 0x960]     ; 00492db0
    MOV EAX,dword ptr [ESI + 0x980]     ; 00492db6
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00492dbc
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00492dc2
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00492dc8
    MOVZX EDX,byte ptr [EBX]            ; 00492dce
        ;   Label: LAB_00492dce
    MOVQ MM0,qword ptr [ESI]            ; 00492dd1
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00492dd4 | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 00492ddc
    PUNPCKLBW MM0,MM7                   ; 00492de0
    SHR EDX,0x1                         ; 00492de3
    PUNPCKLBW MM2,MM7                   ; 00492de5
    ADD EAX,EDX                         ; 00492de8
    PMULLW MM0,MM2                      ; 00492dea
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00492ded | g_LightmapData
    MOVQ MM2,MM3                        ; 00492df5
    MOVQ MM4,MM5                        ; 00492df8
    PXOR MM2,qword ptr [0x006781e8]     ; 00492dfb | g_LightmapXorMask
    PMULHW MM0,MM2                      ; 00492e02
    PMULHW MM4,MM3                      ; 00492e05
    PADDW MM0,MM4                       ; 00492e08
    PADDW MM0,qword ptr [0x00676488]    ; 00492e0b | g_AmbientLightMMX1
    PSRLW MM0,0x4                       ; 00492e12
    PACKUSWB MM0,MM7                    ; 00492e16
    MOVD dword ptr [EDI],MM0            ; 00492e19
    ADD ESI,0x4                         ; 00492e1c
    INC EBX                             ; 00492e1f
    INC EBP                             ; 00492e20
    ADD EDI,0x4                         ; 00492e21
    MOVZX EDX,byte ptr [EBX]            ; 00492e24
    MOVQ MM0,qword ptr [ESI]            ; 00492e27
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00492e2a | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 00492e32
    PUNPCKLBW MM0,MM7                   ; 00492e36
    SHR EDX,0x1                         ; 00492e39
    PUNPCKLBW MM2,MM7                   ; 00492e3b
    ADD EAX,EDX                         ; 00492e3e
    PMULLW MM0,MM2                      ; 00492e40
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00492e43 | g_LightmapData
    MOVQ MM2,MM3                        ; 00492e4b
    MOVQ MM4,MM5                        ; 00492e4e
    PXOR MM2,qword ptr [0x006781e8]     ; 00492e51 | g_LightmapXorMask
    PMULHW MM0,MM2                      ; 00492e58
    PMULHW MM4,MM3                      ; 00492e5b
    PADDW MM0,MM4                       ; 00492e5e
    PADDW MM0,qword ptr [0x00676490]    ; 00492e61 | g_AmbientLightMMX2
    PSRLW MM0,0x4                       ; 00492e68
    PACKUSWB MM0,MM7                    ; 00492e6c
    MOVD dword ptr [EDI],MM0            ; 00492e6f
    ADD ESI,0x4                         ; 00492e72
    INC EBX                             ; 00492e75
    INC EBP                             ; 00492e76
    ADD EDI,0x4                         ; 00492e77
    SUB ECX,0x2                         ; 00492e7a
    JG 0x00492dce                       ; 00492e7d
        ;   XREF to: 00492dce (CONDITIONAL_JUMP)  ; LAB_00492dce
    POP EBP                             ; 00492e83
    EMMS                                ; 00492e84
    POP EDI                             ; 00492e86
    POP ESI                             ; 00492e87
    LEAVE                               ; 00492e88
    RET                                 ; 00492e89

