; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendLightmapShared4U64toU64pBB12Px4MMX_FUN_004924a9(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; Referenced Globals:
;   _MMX_INTEGER g_LightmapBlendBias1
;   _MMX_INTEGER g_LightmapBlendBias2
;   ushort[2048] g_LightmapData
;   undefined4 g_LightmapData[1020]
;   uint[256] g_LightmapTexturePalette
;   ulong g_SolidColorMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004924a9
        ;   Label: core_dstrender.cpp_blendLightmapShared4U64toU64pBB12Px4MMX_FUN_004924a9
    MOV EBP,ESP                         ; 004924aa
    PUSH ESI                            ; 004924ac
    PUSH EDI                            ; 004924ad
    PUSH EBP                            ; 004924ae
    MOV ECX,dword ptr [EBP + 0x18]      ; 004924af
    MOV EDI,dword ptr [EBP + 0x8]       ; 004924b2
    MOV ESI,dword ptr [EBP + 0xc]       ; 004924b5
    MOV EBX,dword ptr [EBP + 0x10]      ; 004924b8
    MOV EBP,dword ptr [EBP + 0x14]      ; 004924bb
    PXOR MM7,MM7                        ; 004924be
    MOVD MM5,dword ptr [0x02d052a8]     ; 004924c1 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 004924c8
    PSLLW MM5,0x6                       ; 004924cb
    MOVZX EDX,byte ptr [EBX]            ; 004924cf
        ;   Label: LAB_004924cf
    MOVQ MM0,qword ptr [ESI]            ; 004924d2
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 004924d5 | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 004924dd
    MOVQ MM1,MM0                        ; 004924e1
    PUNPCKLBW MM0,MM7                   ; 004924e4
    SHR EDX,0x1                         ; 004924e7
    PSRLQ MM1,0x20                      ; 004924e9
    PUNPCKLBW MM2,MM7                   ; 004924ed
    ADD EAX,EDX                         ; 004924f0
    PUNPCKLBW MM1,MM7                   ; 004924f2
    PMULLW MM0,MM2                      ; 004924f5
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 004924f8 | g_LightmapData
    PMULLW MM1,MM2                      ; 00492500
    MOVQ MM2,MM3                        ; 00492503
    MOVQ MM4,MM5                        ; 00492506
    PXOR MM2,qword ptr [0x006781e8]     ; 00492509 | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 00492510
    PMULHW MM1,MM2                      ; 00492513
    PMULHW MM4,MM3                      ; 00492516
    PADDW MM0,MM4                       ; 00492519
    PADDW MM1,MM4                       ; 0049251c
    PADDW MM0,qword ptr [0x00676478]    ; 0049251f | g_LightmapBlendBias1
    PADDW MM1,qword ptr [0x00676480]    ; 00492526 | g_LightmapBlendBias2
    PSRLW MM0,0x4                       ; 0049252d
    PSRLW MM1,0x4                       ; 00492531
    PACKUSWB MM0,MM1                    ; 00492535
    ADD ESI,0x8                         ; 00492538
    MOVQ qword ptr [EDI],MM0            ; 0049253b
    ADD EDI,0x8                         ; 0049253e
    MOVZX EDX,byte ptr [EBX]            ; 00492541
    MOVQ MM0,qword ptr [ESI]            ; 00492544
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 00492547 | g_LightmapTexturePalette
    MOVZX EAX,byte ptr [EBP]            ; 0049254f
    MOVQ MM1,MM0                        ; 00492553
    PUNPCKLBW MM0,MM7                   ; 00492556
    SHR EDX,0x1                         ; 00492559
    PSRLQ MM1,0x20                      ; 0049255b
    PUNPCKLBW MM2,MM7                   ; 0049255f
    ADD EAX,EDX                         ; 00492562
    PUNPCKLBW MM1,MM7                   ; 00492564
    PMULLW MM0,MM2                      ; 00492567
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 0049256a | g_LightmapData
    PMULLW MM1,MM2                      ; 00492572
    MOVQ MM2,MM3                        ; 00492575
    MOVQ MM4,MM5                        ; 00492578
    PXOR MM2,qword ptr [0x006781e8]     ; 0049257b | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 00492582
    PMULHW MM1,MM2                      ; 00492585
    PMULHW MM4,MM3                      ; 00492588
    PADDW MM0,MM4                       ; 0049258b
    PADDW MM1,MM4                       ; 0049258e
    PADDW MM0,qword ptr [0x00676478]    ; 00492591 | g_LightmapBlendBias1
    PADDW MM1,qword ptr [0x00676480]    ; 00492598 | g_LightmapBlendBias2
    PSRLW MM0,0x4                       ; 0049259f
    PSRLW MM1,0x4                       ; 004925a3
    PACKUSWB MM0,MM1                    ; 004925a7
    ADD ESI,0x8                         ; 004925aa
    MOVQ qword ptr [EDI],MM0            ; 004925ad
    ADD EDI,0x8                         ; 004925b0
    INC EBX                             ; 004925b3
    INC EBP                             ; 004925b4
    SUB ECX,0x4                         ; 004925b5
    JG 0x004924cf                       ; 004925b8
        ;   XREF to: 004924cf (CONDITIONAL_JUMP)  ; LAB_004924cf
    POP EBP                             ; 004925be
    EMMS                                ; 004925bf
    POP EDI                             ; 004925c1
    POP ESI                             ; 004925c2
    LEAVE                               ; 004925c3
    RET                                 ; 004925c4

