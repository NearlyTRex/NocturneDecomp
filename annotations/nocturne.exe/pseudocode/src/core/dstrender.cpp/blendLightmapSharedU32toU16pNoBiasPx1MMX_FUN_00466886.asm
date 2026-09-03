; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00466886(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)
;
; Parameters:
; ushort *         Stack[0x4]:4   output_pixel
; uint *           Stack[0x8]:4   texture_pixel
; byte *           Stack[0xc]:4   texture_index
; byte *           Stack[0x10]:4   lightmap_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00447c60 at 00447cfd
;
; Referenced Globals:
;   undefined4 DAT_005b5d00
;   undefined4 DAT_005b64f8
;   _MMX_INTEGER g_RedMask32
;   _MMX_INTEGER g_GreenMask32
;   _MMX_INTEGER g_BlueMask32
;   _MMX_INTEGER g_TotalDitherShift
;   _MMX_INTEGER g_GreenBlueDitherShift
;   _MMX_INTEGER g_BlueBitShift
;   undefined4 DAT_00b0e1fc
;   ulong g_SolidColorMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00466886
        ;   Label: core_dstrender.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00466886
    MOV EBP,ESP                         ; 00466887
    PUSH ESI                            ; 00466889
    PUSH EDI                            ; 0046688a
    PUSH EBP                            ; 0046688b
    MOV EDI,dword ptr [EBP + 0x8]       ; 0046688c
    MOV ESI,dword ptr [EBP + 0xc]       ; 0046688f
    MOV EBX,dword ptr [EBP + 0x10]      ; 00466892
    MOV EBP,dword ptr [EBP + 0x14]      ; 00466895
    PXOR MM7,MM7                        ; 00466898
    MOVD MM5,dword ptr [0x01c039a8]     ; 0046689b | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 004668a2
    PSLLW MM5,0x6                       ; 004668a5
    MOVZX EDX,byte ptr [EBX]            ; 004668a9
    MOVD MM0,dword ptr [ESI]            ; 004668ac
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 004668af | DAT_00b0e1fc
    MOVZX EAX,byte ptr [EBP]            ; 004668b7
    PUNPCKLBW MM0,MM7                   ; 004668bb
    SHR EDX,0x1                         ; 004668be
    PUNPCKLBW MM2,MM7                   ; 004668c0
    ADD EAX,EDX                         ; 004668c3
    PMULLW MM0,MM2                      ; 004668c5
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 004668c8 | DAT_005b5d00
    MOVQ MM2,MM3                        ; 004668d0
    MOVQ MM4,MM5                        ; 004668d3
    PXOR MM2,qword ptr [0x005b64f8]     ; 004668d6 | DAT_005b64f8
    PMULHW MM0,MM2                      ; 004668dd
    PMULHW MM4,MM3                      ; 004668e0
    PADDW MM0,MM4                       ; 004668e3
    PSRLW MM0,0x4                       ; 004668e6
    PACKUSWB MM0,MM7                    ; 004668ea
    MOVQ MM2,MM0                        ; 004668ed
    MOVQ MM3,MM0                        ; 004668f0
    PAND MM0,qword ptr [0x005bf610]     ; 004668f3 | g_BlueMask32
    PAND MM2,qword ptr [0x005bf5f0]     ; 004668fa | g_GreenMask32
    PAND MM3,qword ptr [0x005bf5d0]     ; 00466901 | g_RedMask32
    PSRLQ MM0,qword ptr [0x005bf658]    ; 00466908 | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x005bf638]    ; 0046690f | g_GreenBlueDitherShift
    PSRLQ MM3,qword ptr [0x005bf618]    ; 00466916 | g_TotalDitherShift
    POR MM0,MM2                         ; 0046691d
    POR MM0,MM3                         ; 00466920
    MOVD EAX,MM0                        ; 00466923
    MOV word ptr [EDI],AX               ; 00466926
    POP EBP                             ; 00466929
    EMMS                                ; 0046692a
    POP EDI                             ; 0046692c
    POP ESI                             ; 0046692d
    LEAVE                               ; 0046692e
    RET                                 ; 0046692f

