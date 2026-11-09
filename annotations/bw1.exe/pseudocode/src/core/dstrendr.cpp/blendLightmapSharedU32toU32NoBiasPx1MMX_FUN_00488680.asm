; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00488680(uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)
;
; Parameters:
; uint *           Stack[0x4]:4   output_pixel
; uint *           Stack[0x8]:4   texture_pixel
; byte *           Stack[0xc]:4   texture_index
; byte *           Stack[0x10]:4   lightmap_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00454970 at 004549f5
;
; Referenced Globals:
;   undefined4 DAT_00619b60
;   undefined4 DAT_0061a358
;   undefined4 DAT_00b8189c
;   undefined4 DAT_01c51d1c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00488680
        ;   Label: core_dstrendr.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00488680
    MOV EBP,ESP                         ; 00488681
    PUSH ESI                            ; 00488683
    PUSH EDI                            ; 00488684
    PUSH EBP                            ; 00488685
    MOV EDI,dword ptr [EBP + 0x8]       ; 00488686
    MOV ESI,dword ptr [EBP + 0xc]       ; 00488689
    MOV EBX,dword ptr [EBP + 0x10]      ; 0048868c
    MOV EBP,dword ptr [EBP + 0x14]      ; 0048868f
    PXOR MM7,MM7                        ; 00488692
    MOVD MM5,dword ptr [0x01c51d1c]     ; 00488695 | DAT_01c51d1c
    PUNPCKLBW MM5,MM7                   ; 0048869c
    PSLLW MM5,0x6                       ; 0048869f
    MOVZX EDX,byte ptr [EBX]            ; 004886a3
    MOVD MM0,dword ptr [ESI]            ; 004886a6
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 004886a9 | DAT_00b8189c
    MOVZX EAX,byte ptr [EBP]            ; 004886b1
    PUNPCKLBW MM0,MM7                   ; 004886b5
    SHR EDX,0x1                         ; 004886b8
    PUNPCKLBW MM2,MM7                   ; 004886ba
    ADD EAX,EDX                         ; 004886bd
    PMULLW MM0,MM2                      ; 004886bf
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 004886c2 | DAT_00619b60
    MOVQ MM2,MM3                        ; 004886ca
    MOVQ MM4,MM5                        ; 004886cd
    PXOR MM2,qword ptr [0x0061a358]     ; 004886d0 | DAT_0061a358
    PMULHW MM0,MM2                      ; 004886d7
    PMULHW MM4,MM3                      ; 004886da
    PADDW MM0,MM4                       ; 004886dd
    PSRLW MM0,0x4                       ; 004886e0
    PACKUSWB MM0,MM7                    ; 004886e4
    MOVD dword ptr [EDI],MM0            ; 004886e7
    POP EBP                             ; 004886ea
    EMMS                                ; 004886eb
    POP EDI                             ; 004886ed
    POP ESI                             ; 004886ee
    LEAVE                               ; 004886ef
    RET                                 ; 004886f0

