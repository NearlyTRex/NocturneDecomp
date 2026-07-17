; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl dll_dx7_cpp_expandTextureAndBuildMips_FUN_10003830(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   dll_dx7.cpp_uploadCurrentTexture_FUN_10003a80 at 10003ad4
;
; Referenced Globals:
;   int g_MipMapFlag = 0x0
;   int g_HWRedShift = 0x0
;   uchar* g_TexturePalette = 00000000
;   int g_BlueShift = 0x0
;   uint[87381] g_ExpandedTexture
;   undefined4 g_ExpandedTexture[1]
;   undefined4 g_ExpandedTexture[2]
;   undefined4 g_ExpandedTexture[3]
;   uchar* g_TextureData = 00000000
;   undefined4 g_ExternalRendererBridge.texture_dimension
;   undefined4 g_ExternalRendererBridge.agp_texture_mode
;   int g_RedShift = 0x0
;   int g_GreenShift = 0x0
;   undefined4 g_TexturePixelFormat.dwBitCount
;   uint[256] g_PackedPalette
;   ... and 3 more
;
; *****************************************************************************

section .text

    SUB ESP,0x14                        ; 10003830
        ;   Label: dll_dx7.cpp_expandTextureAndBuildMips_FUN_10003830
    CMP dword ptr [0x10226a64],0x20     ; 10003833 | g_TexturePixelFormat.dwBitCount
    PUSH EBX                            ; 1000383a
    PUSH ESI                            ; 1000383b
    PUSH EDI                            ; 1000383c
    PUSH EBP                            ; 1000383d
    JNZ 0x10003864                      ; 1000383e
        ;   XREF to: 10003864 (CONDITIONAL_JUMP)  ; LAB_10003864
    MOV EAX,[0x101386a8]                ; 10003840 | g_HWRedShift
    MOV ECX,dword ptr [0x10240620]      ; 10003845 | g_HWGreenShift
    MOV EDX,dword ptr [0x10226e80]      ; 1000384b | g_HWBlueShift
    MOV [0x10226a4c],EAX                ; 10003851 | g_RedShift
    MOV dword ptr [0x10226a54],ECX      ; 10003856 | g_GreenShift
    MOV dword ptr [0x10139040],EDX      ; 1000385c | g_BlueShift
    JMP 0x10003882                      ; 10003862
        ;   XREF to: 10003882 (UNCONDITIONAL_JUMP)  ; LAB_10003882
    MOV dword ptr [0x10226a4c],0x10     ; 10003864 | g_RedShift
        ;   Label: LAB_10003864
    MOV dword ptr [0x10226a54],0x8      ; 1000386e | g_GreenShift
    MOV dword ptr [0x10139040],0x0      ; 10003878 | g_BlueShift
    MOV EAX,[0x10138fb0]                ; 10003882 | g_TexturePalette
        ;   Label: LAB_10003882
    MOV ESI,0x10226a80                  ; 10003887 | g_PackedPalette
    XOR EDX,EDX                         ; 1000388c
        ;   Label: LAB_1000388c
    MOV CL,byte ptr [0x10139040]        ; 1000388e | g_BlueShift
    MOV DL,byte ptr [EAX + 0x2]         ; 10003894
    XOR EBX,EBX                         ; 10003897
    MOV BL,byte ptr [EAX + 0x1]         ; 10003899
    ADD EAX,0x3                         ; 1000389c
    SHL EDX,CL                          ; 1000389f
    MOV CL,byte ptr [0x10226a54]        ; 100038a1 | g_GreenShift
    ADD ESI,0x4                         ; 100038a7
    SHL EBX,CL                          ; 100038aa
    OR EDX,EBX                          ; 100038ac
    MOV CL,byte ptr [0x10226a4c]        ; 100038ae | g_RedShift
    XOR EBX,EBX                         ; 100038b4
    MOV BL,byte ptr [EAX + -0x3]        ; 100038b6
    SHL EBX,CL                          ; 100038b9
    OR EDX,EBX                          ; 100038bb
    CMP ESI,0x10226e80                  ; 100038bd | g_HWBlueShift
    MOV dword ptr [ESI + -0x4],EDX      ; 100038c3 | g_PackedPalette
    JC 0x1000388c                       ; 100038c6
        ;   XREF to: 1000388c (CONDITIONAL_JUMP)  ; LAB_1000388c
    MOV EAX,[0x10226900]                ; 100038c8 | g_ExternalRendererBridge.texture_dimension
    MOV EDI,dword ptr [0x1024061c]      ; 100038cd | g_TextureOpacity
    MOV ECX,dword ptr [0x1020de38]      ; 100038d3 | g_TextureData
    MOV EDX,0x101b88e0                  ; 100038d9 | g_ExpandedTexture
    MOV ESI,dword ptr [EAX]             ; 100038de
    IMUL ESI,ESI                        ; 100038e0
    TEST EDI,EDI                        ; 100038e3
    JZ 0x10003912                       ; 100038e5
        ;   XREF to: 10003912 (CONDITIONAL_JUMP)  ; LAB_10003912
    XOR EAX,EAX                         ; 100038e7
    TEST ESI,ESI                        ; 100038e9
    JLE 0x10003933                      ; 100038eb
        ;   XREF to: 10003933 (CONDITIONAL_JUMP)  ; LAB_10003933
    XOR EBX,EBX                         ; 100038ed
        ;   Label: LAB_100038ed
    INC ECX                             ; 100038ef
    MOV BL,byte ptr [ECX + -0x1]        ; 100038f0
    ADD EDX,0x4                         ; 100038f3
    INC EAX                             ; 100038f6
    MOV EBP,dword ptr [EBX*0x4 + 0x10226a80] ; 100038f7 | g_PackedPalette
    XOR EBX,EBX                         ; 100038fe
    MOV BL,byte ptr [EAX + EDI*0x1 + -0x1] ; 10003900
    SHL EBX,0x18                        ; 10003904
    OR EBP,EBX                          ; 10003907
    CMP EAX,ESI                         ; 10003909
    MOV dword ptr [EDX + -0x4],EBP      ; 1000390b | g_ExpandedTexture | g_ExpandedTexture[1]
    JL 0x100038ed                       ; 1000390e
        ;   XREF to: 100038ed (CONDITIONAL_JUMP)  ; LAB_100038ed
    JMP 0x10003933                      ; 10003910
        ;   XREF to: 10003933 (UNCONDITIONAL_JUMP)  ; LAB_10003933
    TEST ESI,ESI                        ; 10003912
        ;   Label: LAB_10003912
    JLE 0x10003933                      ; 10003914
        ;   XREF to: 10003933 (CONDITIONAL_JUMP)  ; LAB_10003933
    XOR EAX,EAX                         ; 10003916
        ;   Label: LAB_10003916
    MOV AL,byte ptr [ECX]               ; 10003918
    MOV EAX,dword ptr [EAX*0x4 + 0x10226a80] ; 1000391a | g_PackedPalette
    TEST EAX,EAX                        ; 10003921
    JZ 0x1000392a                       ; 10003923
        ;   XREF to: 1000392a (CONDITIONAL_JUMP)  ; LAB_1000392a
    OR EAX,0xff000000                   ; 10003925
    MOV dword ptr [EDX],EAX             ; 1000392a | g_ExpandedTexture | g_ExpandedTexture[1]
        ;   Label: LAB_1000392a
    INC ECX                             ; 1000392c
    ADD EDX,0x4                         ; 1000392d
    DEC ESI                             ; 10003930
    JNZ 0x10003916                      ; 10003931
        ;   XREF to: 10003916 (CONDITIONAL_JUMP)  ; LAB_10003916
    MOV EAX,[0x1022691c]                ; 10003933 | g_ExternalRendererBridge.agp_texture_mode
        ;   Label: LAB_10003933
    CMP dword ptr [EAX],0x0             ; 10003938
    JZ 0x1000394a                       ; 1000393b
        ;   XREF to: 1000394a (CONDITIONAL_JUMP)  ; LAB_1000394a
    CMP dword ptr [0x10060670],0x0      ; 1000393d | g_MipMapFlag
    JZ 0x10003a27                       ; 10003944
        ;   XREF to: 10003a27 (CONDITIONAL_JUMP)  ; LAB_10003a27
    MOV EAX,[0x10226900]                ; 1000394a | g_ExternalRendererBridge.texture_dimension
        ;   Label: LAB_1000394a
    MOV ESI,0x101b88e0                  ; 1000394f | g_ExpandedTexture
    MOV EAX,dword ptr [EAX]             ; 10003954
    CMP EAX,0x1                         ; 10003956
    JLE 0x10003a27                      ; 10003959
        ;   XREF to: 10003a27 (CONDITIONAL_JUMP)  ; LAB_10003a27
    MOV ECX,EAX                         ; 1000395f
        ;   Label: LAB_1000395f
    IMUL ECX,EAX                        ; 10003961
    TEST EAX,EAX                        ; 10003964
    LEA EDX,[ESI + ECX*0x4]             ; 10003966
    MOV dword ptr [ESP + 0x18],EDX      ; 10003969
    JLE 0x10003a00                      ; 1000396d
        ;   XREF to: 10003a00 (CONDITIONAL_JUMP)  ; LAB_10003a00
    LEA ECX,[EAX*0x8 + 0x0]             ; 10003973
    MOV dword ptr [ESP + 0x14],ESI      ; 1000397a | g_ExpandedTexture
    MOV dword ptr [ESP + 0x1c],ECX      ; 1000397e
    LEA ECX,[EAX + 0x1]                 ; 10003982
    SHR ECX,0x1                         ; 10003985
    MOV dword ptr [ESP + 0x10],ECX      ; 10003988
    MOV dword ptr [ESP + 0x20],ECX      ; 1000398c
    MOV EDI,dword ptr [ESP + 0x14]      ; 10003990
        ;   Label: LAB_10003990
    TEST EAX,EAX                        ; 10003994
    JLE 0x100039f2                      ; 10003996
        ;   XREF to: 100039f2 (CONDITIONAL_JUMP)  ; LAB_100039f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 10003998
    MOV EBX,dword ptr [EDI + EAX*0x4 + 0x4] ; 1000399c | g_ExpandedTexture[1] | g_ExpandedTexture[3]
        ;   Label: LAB_1000399c
    LEA ECX,[EDI + EAX*0x4]             ; 100039a0
    MOV EBP,dword ptr [EDI]             ; 100039a3 | g_ExpandedTexture | g_ExpandedTexture[2]
    AND EBX,0xfefefeff                  ; 100039a5
    SHR EBX,0x1                         ; 100039ab
    MOV ECX,dword ptr [ECX]             ; 100039ae | g_ExpandedTexture | g_ExpandedTexture[2]
    AND ECX,0xfefefeff                  ; 100039b0
    AND EBP,0xfefefeff                  ; 100039b6
    SHR ECX,0x1                         ; 100039bc
    ADD EDI,0x8                         ; 100039bf
    SHR EBP,0x1                         ; 100039c2
    ADD EBX,ECX                         ; 100039c5
    AND EBX,0xfefefeff                  ; 100039c7
    MOV ECX,dword ptr [EDI + -0x4]      ; 100039cd | g_ExpandedTexture[1] | g_ExpandedTexture[3]
    SHR EBX,0x1                         ; 100039d0
    AND ECX,0xfefefeff                  ; 100039d3
    SHR ECX,0x1                         ; 100039d9
    ADD EDX,0x4                         ; 100039dc
    ADD ECX,EBP                         ; 100039df
    AND ECX,0xfefefeff                  ; 100039e1
    SHR ECX,0x1                         ; 100039e7
    ADD EBX,ECX                         ; 100039ea
    DEC ESI                             ; 100039ec
    MOV dword ptr [EDX + -0x4],EBX      ; 100039ed | g_ExpandedTexture
    JNZ 0x1000399c                      ; 100039f0
        ;   XREF to: 1000399c (CONDITIONAL_JUMP)  ; LAB_1000399c
    MOV ECX,dword ptr [ESP + 0x1c]      ; 100039f2
        ;   Label: LAB_100039f2
    ADD dword ptr [ESP + 0x14],ECX      ; 100039f6
    DEC dword ptr [ESP + 0x20]          ; 100039fa
    JNZ 0x10003990                      ; 100039fe
        ;   XREF to: 10003990 (CONDITIONAL_JUMP)  ; LAB_10003990
    MOV ECX,dword ptr [0x1022691c]      ; 10003a00 | g_ExternalRendererBridge.agp_texture_mode
        ;   Label: LAB_10003a00
    CMP dword ptr [ECX],0x0             ; 10003a06
    JNZ 0x10003a14                      ; 10003a09
        ;   XREF to: 10003a14 (CONDITIONAL_JUMP)  ; LAB_10003a14
    CMP dword ptr [0x10060670],0x0      ; 10003a0b | g_MipMapFlag
    JZ 0x10003a27                       ; 10003a12
        ;   XREF to: 10003a27 (CONDITIONAL_JUMP)  ; LAB_10003a27
    CDQ                                 ; 10003a14
        ;   Label: LAB_10003a14
    MOV ESI,dword ptr [ESP + 0x18]      ; 10003a15
    SUB EAX,EDX                         ; 10003a19
    SAR EAX,0x1                         ; 10003a1b
    CMP EAX,0x1                         ; 10003a1e
    JG 0x1000395f                       ; 10003a21
        ;   XREF to: 1000395f (CONDITIONAL_JUMP)  ; LAB_1000395f
    POP EBP                             ; 10003a27
        ;   Label: LAB_10003a27
    POP EDI                             ; 10003a28
    POP ESI                             ; 10003a29
    POP EBX                             ; 10003a2a
    ADD ESP,0x14                        ; 10003a2b
    RET                                 ; 10003a2e

