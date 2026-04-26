; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendLightmapShared4U64toU64pAmbientPx4MMX_FUN_004925c5(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; Referenced Globals:
;   _MMX_INTEGER g_AmbientLightMMX1
;   _MMX_INTEGER g_AmbientLightMMX2
;   ushort[2048] g_LightmapData
;   undefined4 g_LightmapData[1020]
;   uint[256] g_LightmapTexturePalette
;   ulong g_SolidColorMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004925c5
        ;   Label: core_dstrender.cpp_blendLightmapShared4U64toU64pAmbientPx4MMX_FUN_004925c5
    MOV EBP,ESP                         ; 004925c6
    PUSH ESI                            ; 004925c8
    PUSH EDI                            ; 004925c9
    PUSH EBP                            ; 004925ca
    MOV ECX,dword ptr [EBP + 0x18]      ; 004925cb
    MOV EDI,dword ptr [EBP + 0x8]       ; 004925ce
    MOV ESI,dword ptr [EBP + 0xc]       ; 004925d1
    MOV EBX,dword ptr [EBP + 0x10]      ; 004925d4
    MOV EBP,dword ptr [EBP + 0x14]      ; 004925d7
    PXOR MM7,MM7                        ; 004925da
    MOVD MM5,dword ptr [0x02d052a8]     ; 004925dd | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 004925e4
    PSLLW MM5,0x6                       ; 004925e7
    MOVZX EDX,byte ptr [EBX]            ; 004925eb
        ;   Label: LAB_004925eb
    MOVQ MM0,qword ptr [ESI]            ; 004925ee
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 004925f1 | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 004925f9
    MOVQ MM1,MM0                        ; 004925fd
    PUNPCKLBW MM0,MM7                   ; 00492600
    SHR EDX,0x1                         ; 00492603
    PSRLQ MM1,0x20                      ; 00492605
    PUNPCKLBW MM2,MM7                   ; 00492609
    ADD EAX,EDX                         ; 0049260c
    PUNPCKLBW MM1,MM7                   ; 0049260e
    PMULLW MM0,MM2                      ; 00492611
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00492614 | g_LightmapData
    PMULLW MM1,MM2                      ; 0049261c
    MOVQ MM2,MM3                        ; 0049261f
    MOVQ MM4,MM5                        ; 00492622
    PXOR MM2,qword ptr [0x006781e8]     ; 00492625 | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 0049262c
    PMULHW MM1,MM2                      ; 0049262f
    PMULHW MM4,MM3                      ; 00492632
    PADDW MM0,MM4                       ; 00492635
    PADDW MM1,MM4                       ; 00492638
    PADDW MM0,qword ptr [0x00676488]    ; 0049263b | g_AmbientLightMMX1
    PADDW MM1,qword ptr [0x00676490]    ; 00492642 | g_AmbientLightMMX2
    PSRLW MM0,0x4                       ; 00492649
    PSRLW MM1,0x4                       ; 0049264d
    PACKUSWB MM0,MM1                    ; 00492651
    ADD ESI,0x8                         ; 00492654
    MOVQ qword ptr [EDI],MM0            ; 00492657
    ADD EDI,0x8                         ; 0049265a
    MOVZX EDX,byte ptr [EBX]            ; 0049265d
    MOVQ MM0,qword ptr [ESI]            ; 00492660
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00492663 | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 0049266b
    MOVQ MM1,MM0                        ; 0049266f
    PUNPCKLBW MM0,MM7                   ; 00492672
    SHR EDX,0x1                         ; 00492675
    PSRLQ MM1,0x20                      ; 00492677
    PUNPCKLBW MM2,MM7                   ; 0049267b
    ADD EAX,EDX                         ; 0049267e
    PUNPCKLBW MM1,MM7                   ; 00492680
    PMULLW MM0,MM2                      ; 00492683
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 00492686 | g_LightmapData
    PMULLW MM1,MM2                      ; 0049268e
    MOVQ MM2,MM3                        ; 00492691
    MOVQ MM4,MM5                        ; 00492694
    PXOR MM2,qword ptr [0x006781e8]     ; 00492697 | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 0049269e
    PMULHW MM1,MM2                      ; 004926a1
    PMULHW MM4,MM3                      ; 004926a4
    PADDW MM0,MM4                       ; 004926a7
    PADDW MM1,MM4                       ; 004926aa
    PADDW MM0,qword ptr [0x00676488]    ; 004926ad | g_AmbientLightMMX1
    PADDW MM1,qword ptr [0x00676490]    ; 004926b4 | g_AmbientLightMMX2
    PSRLW MM0,0x4                       ; 004926bb
    PSRLW MM1,0x4                       ; 004926bf
    PACKUSWB MM0,MM1                    ; 004926c3
    ADD ESI,0x8                         ; 004926c6
    MOVQ qword ptr [EDI],MM0            ; 004926c9
    ADD EDI,0x8                         ; 004926cc
    INC EBX                             ; 004926cf
    INC EBP                             ; 004926d0
    SUB ECX,0x4                         ; 004926d1
    JG 0x004925eb                       ; 004926d4
        ;   XREF to: 004925eb (CONDITIONAL_JUMP)  ; LAB_004925eb
    POP EBP                             ; 004926da
    EMMS                                ; 004926db
    POP EDI                             ; 004926dd
    POP ESI                             ; 004926de
    LEAVE                               ; 004926df
    RET                                 ; 004926e0

