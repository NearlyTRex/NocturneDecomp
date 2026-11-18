; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004719b6(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)
;
; Parameters:
; ushort *         Stack[0x4]:4   output_pixel
; uint *           Stack[0x8]:4   texture_pixel
; byte *           Stack[0xc]:4   texture_index
; byte *           Stack[0x10]:4   lightmap_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00443360 at 004433eb
;
; Referenced Globals:
;   ushort[2048] g_LightmapData
;   undefined4 g_LightmapData[1020]
;   qword g_RedMask32 = 0xf80000
;   qword g_GreenMask32 = 0xfc00
;   qword g_BlueMask32 = 0xf8
;   qword g_TotalDitherShift = 0x8
;   qword g_GreenBlueDitherShift = 0x5
;   qword g_BlueBitShift = 0x3
;   uint[256] g_LightmapTexturePalette
;   ulong g_SolidColorMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004719b6
        ;   Label: core_dstrendr.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004719b6
    MOV EBP,ESP                         ; 004719b7
    PUSH ESI                            ; 004719b9
    PUSH EDI                            ; 004719ba
    PUSH EBP                            ; 004719bb
    MOV EDI,dword ptr [EBP + 0x8]       ; 004719bc
    MOV ESI,dword ptr [EBP + 0xc]       ; 004719bf
    MOV EBX,dword ptr [EBP + 0x10]      ; 004719c2
    MOV EBP,dword ptr [EBP + 0x14]      ; 004719c5
    PXOR MM7,MM7                        ; 004719c8
    MOVD MM5,dword ptr [0x01c38b5c]     ; 004719cb | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 004719d2
    PSLLW MM5,0x6                       ; 004719d5
    MOVZX EDX,byte ptr [EBX]            ; 004719d9
    MOVD MM0,dword ptr [ESI]            ; 004719dc
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 004719df | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 004719e7
    PUNPCKLBW MM0,MM7                   ; 004719eb
    SHR EDX,0x1                         ; 004719ee
    PUNPCKLBW MM2,MM7                   ; 004719f0
    ADD EAX,EDX                         ; 004719f3
    PMULLW MM0,MM2                      ; 004719f5
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 004719f8 | g_LightmapData
    MOVQ MM2,MM3                        ; 00471a00
    MOVQ MM4,MM5                        ; 00471a03
    PXOR MM2,qword ptr [0x00613078]     ; 00471a06 | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 00471a0d
    PMULHW MM4,MM3                      ; 00471a10
    PADDW MM0,MM4                       ; 00471a13
    PSRLW MM0,0x4                       ; 00471a16
    PACKUSWB MM0,MM7                    ; 00471a1a
    MOVQ MM2,MM0                        ; 00471a1d
    MOVQ MM3,MM0                        ; 00471a20
    PAND MM0,qword ptr [0x0061c928]     ; 00471a23 | g_BlueMask32
    PAND MM2,qword ptr [0x0061c908]     ; 00471a2a | g_GreenMask32
    PAND MM3,qword ptr [0x0061c8e8]     ; 00471a31 | g_RedMask32
    PSRLQ MM0,qword ptr [0x0061c970]    ; 00471a38 | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x0061c950]    ; 00471a3f | g_GreenBlueDitherShift
    PSRLQ MM3,qword ptr [0x0061c930]    ; 00471a46 | g_TotalDitherShift
    POR MM0,MM2                         ; 00471a4d
    POR MM0,MM3                         ; 00471a50
    MOVD EAX,MM0                        ; 00471a53
    MOV word ptr [EDI],AX               ; 00471a56
    POP EBP                             ; 00471a59
    EMMS                                ; 00471a5a
    POP EDI                             ; 00471a5c
    POP ESI                             ; 00471a5d
    LEAVE                               ; 00471a5e
    RET                                 ; 00471a5f

