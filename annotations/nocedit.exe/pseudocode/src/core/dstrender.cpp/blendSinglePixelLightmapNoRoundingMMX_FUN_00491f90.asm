; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dstrender_cpp_blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90(uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)
;
; Parameters:
; uint *           Stack[0x4]:4   output_pixel
; uint *           Stack[0x8]:4   texture_pixel
; byte *           Stack[0xc]:4   texture_index
; byte *           Stack[0x10]:4   lightmap_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10 at 00453d95
;
; Referenced Globals:
;   ushort[384] g_LightmapData
;   double g_LightmapXorMask = 0.126945525291829
;   uint[256] g_LightmapTexturePalette
;   ulong g_SolidColorMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00491f90
        ;   Label: core_dstrender.cpp_blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90
    MOV EBP,ESP                         ; 00491f91
    PUSH ESI                            ; 00491f93
    PUSH EDI                            ; 00491f94
    PUSH EBP                            ; 00491f95
    MOV EDI,dword ptr [EBP + 0x8]       ; 00491f96
    MOV ESI,dword ptr [EBP + 0xc]       ; 00491f99
    MOV EBX,dword ptr [EBP + 0x10]      ; 00491f9c
    MOV EBP,dword ptr [EBP + 0x14]      ; 00491f9f
    PXOR MM7,MM7                        ; 00491fa2
    MOVD MM5,dword ptr [0x02d052a8]     ; 00491fa5 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 00491fac
    PSLLW MM5,0x6                       ; 00491faf
    MOVZX EDX,byte ptr [EBX]            ; 00491fb3
    MOVD MM0,dword ptr [ESI]            ; 00491fb6
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00491fb9 | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 00491fc1
    PUNPCKLBW MM0,MM7                   ; 00491fc5
    SHR EDX,0x1                         ; 00491fc8
    PUNPCKLBW MM2,MM7                   ; 00491fca
    ADD EAX,EDX                         ; 00491fcd
    PMULLW MM0,MM2                      ; 00491fcf
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00491fd2 | g_LightmapData
    MOVQ MM2,MM3                        ; 00491fda
    MOVQ MM4,MM5                        ; 00491fdd
    PXOR MM2,qword ptr [0x006781e8]     ; 00491fe0 | g_LightmapXorMask
    PMULHW MM0,MM2                      ; 00491fe7
    PMULHW MM4,MM3                      ; 00491fea
    PADDW MM0,MM4                       ; 00491fed
    PSRLW MM0,0x4                       ; 00491ff0
    PACKUSWB MM0,MM7                    ; 00491ff4
    MOVD dword ptr [EDI],MM0            ; 00491ff7
    POP EBP                             ; 00491ffa
    EMMS                                ; 00491ffb
    POP EDI                             ; 00491ffd
    POP ESI                             ; 00491ffe
    LEAVE                               ; 00491fff
    RET                                 ; 00492000

