; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00470190(uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)
;
; Parameters:
; uint *           Stack[0x4]:4   output_pixel
; uint *           Stack[0x8]:4   texture_pixel
; byte *           Stack[0xc]:4   texture_index
; byte *           Stack[0x10]:4   lightmap_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_004432c0 at 00443345
;
; Referenced Globals:
;   undefined4 DAT_00612880
;   undefined4 DAT_00613078
;   undefined4 DAT_00b6639c
;   undefined4 DAT_01c38b5c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00470190
        ;   Label: core_dstrendr.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00470190
    MOV EBP,ESP                         ; 00470191
    PUSH ESI                            ; 00470193
    PUSH EDI                            ; 00470194
    PUSH EBP                            ; 00470195
    MOV EDI,dword ptr [EBP + 0x8]       ; 00470196
    MOV ESI,dword ptr [EBP + 0xc]       ; 00470199
    MOV EBX,dword ptr [EBP + 0x10]      ; 0047019c
    MOV EBP,dword ptr [EBP + 0x14]      ; 0047019f
    PXOR MM7,MM7                        ; 004701a2
    MOVD MM5,dword ptr [0x01c38b5c]     ; 004701a5 | DAT_01c38b5c
    PUNPCKLBW MM5,MM7                   ; 004701ac
    PSLLW MM5,0x6                       ; 004701af
    MOVZX EDX,byte ptr [EBX]            ; 004701b3
    MOVD MM0,dword ptr [ESI]            ; 004701b6
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 004701b9 | DAT_00b6639c
    MOVZX EAX,byte ptr [EBP]            ; 004701c1
    PUNPCKLBW MM0,MM7                   ; 004701c5
    SHR EDX,0x1                         ; 004701c8
    PUNPCKLBW MM2,MM7                   ; 004701ca
    ADD EAX,EDX                         ; 004701cd
    PMULLW MM0,MM2                      ; 004701cf
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 004701d2 | DAT_00612880
    MOVQ MM2,MM3                        ; 004701da
    MOVQ MM4,MM5                        ; 004701dd
    PXOR MM2,qword ptr [0x00613078]     ; 004701e0 | DAT_00613078
    PMULHW MM0,MM2                      ; 004701e7
    PMULHW MM4,MM3                      ; 004701ea
    PADDW MM0,MM4                       ; 004701ed
    PSRLW MM0,0x4                       ; 004701f0
    PACKUSWB MM0,MM7                    ; 004701f4
    MOVD dword ptr [EDI],MM0            ; 004701f7
    POP EBP                             ; 004701fa
    EMMS                                ; 004701fb
    POP EDI                             ; 004701fd
    POP ESI                             ; 004701fe
    LEAVE                               ; 004701ff
    RET                                 ; 00470200

