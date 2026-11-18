; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00489ea6(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)
;
; Parameters:
; ushort *         Stack[0x4]:4   output_pixel
; uint *           Stack[0x8]:4   texture_pixel
; byte *           Stack[0xc]:4   texture_index
; byte *           Stack[0x10]:4   lightmap_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00454a10 at 00454a9b
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

    PUSH EBP                            ; 00489ea6
        ;   Label: core_dstrendr.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00489ea6
    MOV EBP,ESP                         ; 00489ea7
    PUSH ESI                            ; 00489ea9
    PUSH EDI                            ; 00489eaa
    PUSH EBP                            ; 00489eab
    MOV EDI,dword ptr [EBP + 0x8]       ; 00489eac
    MOV ESI,dword ptr [EBP + 0xc]       ; 00489eaf
    MOV EBX,dword ptr [EBP + 0x10]      ; 00489eb2
    MOV EBP,dword ptr [EBP + 0x14]      ; 00489eb5
    PXOR MM7,MM7                        ; 00489eb8
    MOVD MM5,dword ptr [0x01c51d1c]     ; 00489ebb | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 00489ec2
    PSLLW MM5,0x6                       ; 00489ec5
    MOVZX EDX,byte ptr [EBX]            ; 00489ec9
    MOVD MM0,dword ptr [ESI]            ; 00489ecc
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 00489ecf | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 00489ed7
    PUNPCKLBW MM0,MM7                   ; 00489edb
    SHR EDX,0x1                         ; 00489ede
    PUNPCKLBW MM2,MM7                   ; 00489ee0
    ADD EAX,EDX                         ; 00489ee3
    PMULLW MM0,MM2                      ; 00489ee5
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 00489ee8 | g_LightmapData
    MOVQ MM2,MM3                        ; 00489ef0
    MOVQ MM4,MM5                        ; 00489ef3
    PXOR MM2,qword ptr [0x0061a358]     ; 00489ef6 | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 00489efd
    PMULHW MM4,MM3                      ; 00489f00
    PADDW MM0,MM4                       ; 00489f03
    PSRLW MM0,0x4                       ; 00489f06
    PACKUSWB MM0,MM7                    ; 00489f0a
    MOVQ MM2,MM0                        ; 00489f0d
    MOVQ MM3,MM0                        ; 00489f10
    PAND MM0,qword ptr [0x00623f78]     ; 00489f13 | g_BlueMask32
    PAND MM2,qword ptr [0x00623f58]     ; 00489f1a | g_GreenMask32
    PAND MM3,qword ptr [0x00623f38]     ; 00489f21 | g_RedMask32
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 00489f28 | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 00489f2f | g_GreenBlueDitherShift
    PSRLQ MM3,qword ptr [0x00623f80]    ; 00489f36 | g_TotalDitherShift
    POR MM0,MM2                         ; 00489f3d
    POR MM0,MM3                         ; 00489f40
    MOVD EAX,MM0                        ; 00489f43
    MOV word ptr [EDI],AX               ; 00489f46
    POP EBP                             ; 00489f49
    EMMS                                ; 00489f4a
    POP EDI                             ; 00489f4c
    POP ESI                             ; 00489f4d
    LEAVE                               ; 00489f4e
    RET                                 ; 00489f4f

