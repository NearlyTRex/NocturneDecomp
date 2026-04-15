; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004937b6(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)
;
; Parameters:
; ushort *         Stack[0x4]:4   output_pixel
; uint *           Stack[0x8]:4   texture_pixel
; byte *           Stack[0xc]:4   texture_index
; byte *           Stack[0x10]:4   lightmap_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0 at 00453e3b
;
; Referenced Globals:
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

    PUSH EBP                            ; 004937b6
        ;   Label: core_dstrender.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004937b6
    MOV EBP,ESP                         ; 004937b7
    PUSH ESI                            ; 004937b9
    PUSH EDI                            ; 004937ba
    PUSH EBP                            ; 004937bb
    MOV EDI,dword ptr [EBP + 0x8]       ; 004937bc
    MOV ESI,dword ptr [EBP + 0xc]       ; 004937bf
    MOV EBX,dword ptr [EBP + 0x10]      ; 004937c2
    MOV EBP,dword ptr [EBP + 0x14]      ; 004937c5
    PXOR MM7,MM7                        ; 004937c8
    MOVD MM5,dword ptr [0x02d052a8]     ; 004937cb | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 004937d2
    PSLLW MM5,0x6                       ; 004937d5
    MOVZX EDX,byte ptr [EBX]            ; 004937d9
    MOVD MM0,dword ptr [ESI]            ; 004937dc
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 004937df | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 004937e7
    PUNPCKLBW MM0,MM7                   ; 004937eb
    SHR EDX,0x1                         ; 004937ee
    PUNPCKLBW MM2,MM7                   ; 004937f0
    ADD EAX,EDX                         ; 004937f3
    PMULLW MM0,MM2                      ; 004937f5
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 004937f8 | g_LightmapData
    MOVQ MM2,MM3                        ; 00493800
    MOVQ MM4,MM5                        ; 00493803
    PXOR MM2,qword ptr [0x006781e8]     ; 00493806 | g_LightmapXorMask
    PMULHW MM0,MM2                      ; 0049380d
    PMULHW MM4,MM3                      ; 00493810
    PADDW MM0,MM4                       ; 00493813
    PSRLW MM0,0x4                       ; 00493816
    PACKUSWB MM0,MM7                    ; 0049381a
    MOVQ MM2,MM0                        ; 0049381d
    MOVQ MM3,MM0                        ; 00493820
    PAND MM0,qword ptr [0x006827a0]     ; 00493823 | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 0049382a | g_GreenMask32
    PAND MM3,qword ptr [0x00682760]     ; 00493831 | g_RedMask32
    PSRLQ MM0,qword ptr [0x006827e8]    ; 00493838 | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 0049383f | g_GreenBlueBits
    PSRLQ MM3,qword ptr [0x006827a8]    ; 00493846 | g_TotalColorBits
    POR MM0,MM2                         ; 0049384d
    POR MM0,MM3                         ; 00493850
    MOVD EAX,MM0                        ; 00493853
    MOV word ptr [EDI],AX               ; 00493856
    POP EBP                             ; 00493859
    EMMS                                ; 0049385a
    POP EDI                             ; 0049385c
    POP ESI                             ; 0049385d
    LEAVE                               ; 0049385e
    RET                                 ; 0049385f

