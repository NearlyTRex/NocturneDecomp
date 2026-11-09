; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00472a26(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)
;
; Parameters:
; ushort *         Stack[0x4]:4   output_pixel
; uint *           Stack[0x8]:4   texture_pixel
; byte *           Stack[0xc]:4   texture_index
; byte *           Stack[0x10]:4   lightmap_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00450b60 at 00450beb
;
; Referenced Globals:
;   undefined4 DAT_005fa0e0
;   undefined4 DAT_005fa8d8
;   undefined4 DAT_00604e78
;   undefined4 DAT_00604e98
;   undefined4 DAT_00604eb8
;   undefined4 DAT_00604ec0
;   undefined4 DAT_00604ee0
;   undefined4 DAT_00604f00
;   undefined4 DAT_00b9e14c
;   undefined4 DAT_01c6e2bc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00472a26
        ;   Label: core_dstrendr.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00472a26
    MOV EBP,ESP                         ; 00472a27
    PUSH ESI                            ; 00472a29
    PUSH EDI                            ; 00472a2a
    PUSH EBP                            ; 00472a2b
    MOV EDI,dword ptr [EBP + 0x8]       ; 00472a2c
    MOV ESI,dword ptr [EBP + 0xc]       ; 00472a2f
    MOV EBX,dword ptr [EBP + 0x10]      ; 00472a32
    MOV EBP,dword ptr [EBP + 0x14]      ; 00472a35
    PXOR MM7,MM7                        ; 00472a38
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 00472a3b | DAT_01c6e2bc
    PUNPCKLBW MM5,MM7                   ; 00472a42
    PSLLW MM5,0x6                       ; 00472a45
    MOVZX EDX,byte ptr [EBX]            ; 00472a49
    MOVD MM0,dword ptr [ESI]            ; 00472a4c
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00472a4f | DAT_00b9e14c
    MOVZX EAX,byte ptr [EBP]            ; 00472a57
    PUNPCKLBW MM0,MM7                   ; 00472a5b
    SHR EDX,0x1                         ; 00472a5e
    PUNPCKLBW MM2,MM7                   ; 00472a60
    ADD EAX,EDX                         ; 00472a63
    PMULLW MM0,MM2                      ; 00472a65
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 00472a68 | DAT_005fa0e0
    MOVQ MM2,MM3                        ; 00472a70
    MOVQ MM4,MM5                        ; 00472a73
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00472a76 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 00472a7d
    PMULHW MM4,MM3                      ; 00472a80
    PADDW MM0,MM4                       ; 00472a83
    PSRLW MM0,0x4                       ; 00472a86
    PACKUSWB MM0,MM7                    ; 00472a8a
    MOVQ MM2,MM0                        ; 00472a8d
    MOVQ MM3,MM0                        ; 00472a90
    PAND MM0,qword ptr [0x00604eb8]     ; 00472a93 | DAT_00604eb8
    PAND MM2,qword ptr [0x00604e98]     ; 00472a9a | DAT_00604e98
    PAND MM3,qword ptr [0x00604e78]     ; 00472aa1 | DAT_00604e78
    PSRLQ MM0,qword ptr [0x00604f00]    ; 00472aa8 | DAT_00604f00
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 00472aaf | DAT_00604ee0
    PSRLQ MM3,qword ptr [0x00604ec0]    ; 00472ab6 | DAT_00604ec0
    POR MM0,MM2                         ; 00472abd
    POR MM0,MM3                         ; 00472ac0
    MOVD EAX,MM0                        ; 00472ac3
    MOV word ptr [EDI],AX               ; 00472ac6
    POP EBP                             ; 00472ac9
    EMMS                                ; 00472aca
    POP EDI                             ; 00472acc
    POP ESI                             ; 00472acd
    LEAVE                               ; 00472ace
    RET                                 ; 00472acf

