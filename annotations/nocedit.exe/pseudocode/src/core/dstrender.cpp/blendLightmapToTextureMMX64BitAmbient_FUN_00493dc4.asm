; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendLightmapToTextureMMX64BitAmbient_FUN_00493dc4(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 at 00453460
;
; Referenced Globals:
;   _MMX_INTEGER g_AmbientLightMMX1
;   _MMX_INTEGER g_AmbientLightMMX2
;   ushort[384] g_LightmapData
;   double g_LightmapXorMask = 0.126945525291829
;   _MMX_INTEGER g_RedMask32
;   _MMX_INTEGER g_GreenMask32
;   _MMX_INTEGER g_BlueMask32
;   _MMX_INTEGER g_TotalColorBits
;   _MMX_INTEGER g_GreenBlueBits
;   _MMX_INTEGER g_BlueBitShift
;   uint[256] g_LightmapTexturePalette
;   ulong g_SolidColorMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00493dc4
        ;   Label: core_dstrender.cpp_blendLightmapToTextureMMX64BitAmbient_FUN_00493dc4
    MOV EBP,ESP                         ; 00493dc5
    PUSH ESI                            ; 00493dc7
    PUSH EDI                            ; 00493dc8
    PUSH EBP                            ; 00493dc9
    MOV ECX,dword ptr [EBP + 0x18]      ; 00493dca
    MOV EDI,dword ptr [EBP + 0x8]       ; 00493dcd
    MOV ESI,dword ptr [EBP + 0xc]       ; 00493dd0
    MOV EBX,dword ptr [EBP + 0x10]      ; 00493dd3
    MOV EBP,dword ptr [EBP + 0x14]      ; 00493dd6
    PXOR MM7,MM7                        ; 00493dd9
    MOVD MM5,dword ptr [0x02d052a8]     ; 00493ddc | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 00493de3
    PSLLW MM5,0x6                       ; 00493de6
    MOV EAX,dword ptr [ESI]             ; 00493dea
    MOV EAX,dword ptr [ESI + 0x20]      ; 00493dec
    MOV EAX,dword ptr [ESI + 0x40]      ; 00493def
    MOV EAX,dword ptr [ESI + 0x60]      ; 00493df2
    MOV EAX,dword ptr [ESI + 0x80]      ; 00493df5
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00493dfb
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00493e01
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00493e07
    MOV EAX,dword ptr [ESI + 0x100]     ; 00493e0d
    MOV EAX,dword ptr [ESI + 0x120]     ; 00493e13
    MOV EAX,dword ptr [ESI + 0x140]     ; 00493e19
    MOV EAX,dword ptr [ESI + 0x160]     ; 00493e1f
    MOV EAX,dword ptr [ESI + 0x180]     ; 00493e25
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00493e2b
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00493e31
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00493e37
    MOV EAX,dword ptr [ESI + 0x200]     ; 00493e3d
    MOV EAX,dword ptr [ESI + 0x220]     ; 00493e43
    MOV EAX,dword ptr [ESI + 0x240]     ; 00493e49
    MOV EAX,dword ptr [ESI + 0x260]     ; 00493e4f
    MOV EAX,dword ptr [ESI + 0x280]     ; 00493e55
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00493e5b
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00493e61
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00493e67
    MOV EAX,dword ptr [ESI + 0x300]     ; 00493e6d
    MOV EAX,dword ptr [ESI + 0x320]     ; 00493e73
    MOV EAX,dword ptr [ESI + 0x340]     ; 00493e79
    MOV EAX,dword ptr [ESI + 0x360]     ; 00493e7f
    MOV EAX,dword ptr [ESI + 0x380]     ; 00493e85
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00493e8b
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00493e91
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00493e97
    MOV EAX,dword ptr [ESI + 0x400]     ; 00493e9d
    MOV EAX,dword ptr [ESI + 0x420]     ; 00493ea3
    MOV EAX,dword ptr [ESI + 0x440]     ; 00493ea9
    MOV EAX,dword ptr [ESI + 0x460]     ; 00493eaf
    MOV EAX,dword ptr [ESI + 0x480]     ; 00493eb5
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00493ebb
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00493ec1
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00493ec7
    MOV EAX,dword ptr [ESI + 0x500]     ; 00493ecd
    MOV EAX,dword ptr [ESI + 0x520]     ; 00493ed3
    MOV EAX,dword ptr [ESI + 0x540]     ; 00493ed9
    MOV EAX,dword ptr [ESI + 0x560]     ; 00493edf
    MOV EAX,dword ptr [ESI + 0x580]     ; 00493ee5
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00493eeb
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00493ef1
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00493ef7
    MOV EAX,dword ptr [ESI + 0x600]     ; 00493efd
    MOV EAX,dword ptr [ESI + 0x620]     ; 00493f03
    MOV EAX,dword ptr [ESI + 0x640]     ; 00493f09
    MOV EAX,dword ptr [ESI + 0x660]     ; 00493f0f
    MOV EAX,dword ptr [ESI + 0x680]     ; 00493f15
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00493f1b
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00493f21
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00493f27
    MOV EAX,dword ptr [ESI + 0x700]     ; 00493f2d
    MOV EAX,dword ptr [ESI + 0x720]     ; 00493f33
    MOV EAX,dword ptr [ESI + 0x740]     ; 00493f39
    MOV EAX,dword ptr [ESI + 0x760]     ; 00493f3f
    MOV EAX,dword ptr [ESI + 0x780]     ; 00493f45
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00493f4b
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00493f51
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00493f57
    MOV EAX,dword ptr [ESI + 0x800]     ; 00493f5d
    MOV EAX,dword ptr [ESI + 0x820]     ; 00493f63
    MOV EAX,dword ptr [ESI + 0x840]     ; 00493f69
    MOV EAX,dword ptr [ESI + 0x860]     ; 00493f6f
    MOV EAX,dword ptr [ESI + 0x880]     ; 00493f75
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00493f7b
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00493f81
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00493f87
    MOV EAX,dword ptr [ESI + 0x900]     ; 00493f8d
    MOV EAX,dword ptr [ESI + 0x920]     ; 00493f93
    MOV EAX,dword ptr [ESI + 0x940]     ; 00493f99
    MOV EAX,dword ptr [ESI + 0x960]     ; 00493f9f
    MOV EAX,dword ptr [ESI + 0x980]     ; 00493fa5
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00493fab
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00493fb1
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00493fb7
    MOVZX EDX,byte ptr [EBX]            ; 00493fbd
        ;   Label: LAB_00493fbd
    MOVQ MM0,qword ptr [ESI]            ; 00493fc0
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00493fc3 | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 00493fcb
    PUNPCKLBW MM0,MM7                   ; 00493fcf
    SHR EDX,0x1                         ; 00493fd2
    PUNPCKLBW MM2,MM7                   ; 00493fd4
    ADD EAX,EDX                         ; 00493fd7
    PMULLW MM0,MM2                      ; 00493fd9
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00493fdc | g_LightmapData
    MOVQ MM2,MM3                        ; 00493fe4
    MOVQ MM4,MM5                        ; 00493fe7
    PXOR MM2,qword ptr [0x006781e8]     ; 00493fea | g_LightmapXorMask
    PMULHW MM0,MM2                      ; 00493ff1
    PMULHW MM4,MM3                      ; 00493ff4
    PADDW MM0,MM4                       ; 00493ff7
    PADDW MM0,qword ptr [0x00676488]    ; 00493ffa | g_AmbientLightMMX1
    PSRLW MM0,0x4                       ; 00494001
    PACKUSWB MM0,MM7                    ; 00494005
    MOVQ MM2,MM0                        ; 00494008
    MOVQ MM3,MM0                        ; 0049400b
    PAND MM0,qword ptr [0x006827a0]     ; 0049400e | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 00494015 | g_GreenMask32
    PAND MM3,qword ptr [0x00682760]     ; 0049401c | g_RedMask32
    PSRLQ MM0,qword ptr [0x006827e8]    ; 00494023 | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 0049402a | g_GreenBlueBits
    PSRLQ MM3,qword ptr [0x006827a8]    ; 00494031 | g_TotalColorBits
    POR MM0,MM2                         ; 00494038
    POR MM0,MM3                         ; 0049403b
    MOVQ MM6,MM0                        ; 0049403e
    ADD ESI,0x4                         ; 00494041
    INC EBX                             ; 00494044
    INC EBP                             ; 00494045
    MOVZX EDX,byte ptr [EBX]            ; 00494046
    MOVQ MM0,qword ptr [ESI]            ; 00494049
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 0049404c | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 00494054
    PUNPCKLBW MM0,MM7                   ; 00494058
    SHR EDX,0x1                         ; 0049405b
    PUNPCKLBW MM2,MM7                   ; 0049405d
    ADD EAX,EDX                         ; 00494060
    PMULLW MM0,MM2                      ; 00494062
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00494065 | g_LightmapData
    MOVQ MM2,MM3                        ; 0049406d
    MOVQ MM4,MM5                        ; 00494070
    PXOR MM2,qword ptr [0x006781e8]     ; 00494073 | g_LightmapXorMask
    PMULHW MM0,MM2                      ; 0049407a
    PMULHW MM4,MM3                      ; 0049407d
    PADDW MM0,MM4                       ; 00494080
    PADDW MM0,qword ptr [0x00676490]    ; 00494083 | g_AmbientLightMMX2
    PSRLW MM0,0x4                       ; 0049408a
    PACKUSWB MM0,MM7                    ; 0049408e
    MOVQ MM2,MM0                        ; 00494091
    MOVQ MM3,MM0                        ; 00494094
    PAND MM0,qword ptr [0x006827a0]     ; 00494097 | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 0049409e | g_GreenMask32
    PAND MM3,qword ptr [0x00682760]     ; 004940a5 | g_RedMask32
    PSRLQ MM0,qword ptr [0x006827e8]    ; 004940ac | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 004940b3 | g_GreenBlueBits
    PSRLQ MM3,qword ptr [0x006827a8]    ; 004940ba | g_TotalColorBits
    POR MM0,MM2                         ; 004940c1
    POR MM0,MM3                         ; 004940c4
    PSLLQ MM0,0x10                      ; 004940c7
    POR MM0,MM6                         ; 004940cb
    MOVD dword ptr [EDI],MM0            ; 004940ce
    ADD ESI,0x4                         ; 004940d1
    INC EBX                             ; 004940d4
    INC EBP                             ; 004940d5
    ADD EDI,0x4                         ; 004940d6
    SUB ECX,0x2                         ; 004940d9
    JG 0x00493fbd                       ; 004940dc
        ;   XREF to: 00493fbd (CONDITIONAL_JUMP)  ; LAB_00493fbd
    POP EBP                             ; 004940e2
    EMMS                                ; 004940e3
    POP EDI                             ; 004940e5
    POP ESI                             ; 004940e6
    LEAVE                               ; 004940e7
    RET                                 ; 004940e8

