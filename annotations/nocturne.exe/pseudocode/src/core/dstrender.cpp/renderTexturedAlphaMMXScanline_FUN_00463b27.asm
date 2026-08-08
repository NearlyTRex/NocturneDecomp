; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[5]:
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendDirect_FUN_0045fe40 at 0045fe98
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20 at 0045ff98
;   engine_drender.cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0045fc00 at 0045fc58
;   engine_drender.cpp_CDemonRenderer_renderFullEffectsPoly_FUN_0045fce0 at 0045fd58
;   engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00 at 0045fb74
;
; Referenced Globals:
;   undefined4 DAT_005b06b8
;   undefined4 DAT_005b06bc
;   undefined4 DAT_005b06c4
;   undefined4 DAT_005b06d4
;   undefined4 DAT_005b06d8
;   undefined4 DAT_005b06dc
;   undefined4 DAT_005b06e4
;   undefined4 DAT_005b06e8
;   _MMX_INTEGER g_TextureShift1
;   _MMX_INTEGER g_TextureShift2
;   _MMX_INTEGER g_TextureMask1
;   _MMX_INTEGER g_TextureMask2
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ReciprocalLookupTable[1]
;   uchar* g_CurrentTextureData
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00463b27
        ;   Label: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_00463b27
    PUSH EDI                            ; 00463b28
    PUSH EBP                            ; 00463b29
    MOV EAX,dword ptr [ESI + 0x8]       ; 00463b2a
    MOV ECX,dword ptr [EDI + 0x8]       ; 00463b2d
    CMP EAX,ECX                         ; 00463b30
    JBE 0x00463b37                      ; 00463b32
        ;   XREF to: 00463b37 (CONDITIONAL_JUMP)  ; LAB_00463b37
    XCHG EAX,ECX                        ; 00463b34
    XCHG EDI,ESI                        ; 00463b35
    SHR ECX,0x10                        ; 00463b37
        ;   Label: LAB_00463b37
    SHR EAX,0x10                        ; 00463b3a
    MOV EBP,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 00463b3d | g_ScreenBufferArray
    SUB ECX,EAX                         ; 00463b44
    JLE 0x00463c3c                      ; 00463b46
        ;   XREF to: 00463c3c (CONDITIONAL_JUMP)  ; LAB_00463c3c
    SHL ECX,0x1                         ; 00463b4c
    LEA EBP,[EBP + EAX*0x2]             ; 00463b4e
    MOV dword ptr [0x005b06e4],ECX      ; 00463b52 | DAT_005b06e4
    MOV dword ptr [0x005b06e8],EBP      ; 00463b58 | DAT_005b06e8
    MOV EAX,dword ptr [EDI + 0x18]      ; 00463b5e
    MOV EBX,dword ptr [ESI + 0x18]      ; 00463b61
    SUB EAX,EBX                         ; 00463b64
    IMUL dword ptr [ECX*0x2 + 0x1c00c84] ; 00463b66 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005b06b8],EBX      ; 00463b6d | DAT_005b06b8
    MOV dword ptr [0x005b06d4],EDX      ; 00463b73 | DAT_005b06d4
    MOV EAX,dword ptr [EDI + 0x20]      ; 00463b79
    MOV EBX,dword ptr [ESI + 0x20]      ; 00463b7c
    SUB EAX,EBX                         ; 00463b7f
    IMUL dword ptr [ECX*0x2 + 0x1c00c84] ; 00463b81 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005b06bc],EBX      ; 00463b88 | DAT_005b06bc
    MOV dword ptr [0x005b06d8],EDX      ; 00463b8e | DAT_005b06d8
    MOV EAX,dword ptr [EDI + 0x28]      ; 00463b94
    MOV EBX,dword ptr [ESI + 0x28]      ; 00463b97
    SUB EAX,EBX                         ; 00463b9a
    IMUL dword ptr [ECX*0x2 + 0x1c00c84] ; 00463b9c | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005b06c4],EBX      ; 00463ba3 | DAT_005b06c4
    MOV dword ptr [0x005b06dc],EDX      ; 00463ba9 | DAT_005b06dc
    MOV ECX,dword ptr [0x005b06b8]      ; 00463baf | DAT_005b06b8
    MOV EDX,dword ptr [0x005b06bc]      ; 00463bb5 | DAT_005b06bc
    MOV EDI,0x0                         ; 00463bbb
    MOV ESI,dword ptr [0x005b06c4]      ; 00463bc0 | DAT_005b06c4
    MOV EBP,dword ptr [0x005b06e8]      ; 00463bc6 | DAT_005b06e8
        ;   Label: LAB_00463bc6
    ADD EBP,EDI                         ; 00463bcc
    MOVZX EAX,word ptr [EBP]            ; 00463bce
    CMP ESI,EAX                         ; 00463bd2
    JNC 0x00463c1d                      ; 00463bd4
        ;   XREF to: 00463c1d (CONDITIONAL_JUMP)  ; LAB_00463c1d
    MOVD MM0,ECX                        ; 00463bd6
    MOVD MM2,EDX                        ; 00463bd9
    PSRLQ MM0,qword ptr [0x005bf550]    ; 00463bdc | g_TextureShift1
    PSRLQ MM2,qword ptr [0x005bf570]    ; 00463be3 | g_TextureShift2
    PAND MM0,qword ptr [0x005bf590]     ; 00463bea | g_TextureMask1
    PAND MM2,qword ptr [0x005bf5b0]     ; 00463bf1 | g_TextureMask2
    PADDD MM0,MM2                       ; 00463bf8
    MOVD EBX,MM0                        ; 00463bfb
    MOV EAX,[0x01c02584]                ; 00463bfe | g_CurrentTextureOpacityData
    TEST EAX,0xffffffff                 ; 00463c03
    JNZ 0x00463c0f                      ; 00463c08
        ;   XREF to: 00463c0f (CONDITIONAL_JUMP)  ; LAB_00463c0f
    MOV EAX,[0x01c02580]                ; 00463c0a | g_CurrentTextureData
    ADD EBX,EAX                         ; 00463c0f
        ;   Label: LAB_00463c0f
    MOVZX EAX,byte ptr [EBX]            ; 00463c11
    CMP EAX,0x0                         ; 00463c14
    JZ 0x00463c1d                       ; 00463c17
        ;   XREF to: 00463c1d (CONDITIONAL_JUMP)  ; LAB_00463c1d
    MOV word ptr [EBP],SI               ; 00463c19
    ADD EDI,0x2                         ; 00463c1d
        ;   Label: LAB_00463c1d
    CMP EDI,dword ptr [0x005b06e4]      ; 00463c20 | DAT_005b06e4
    JA 0x00463c3c                       ; 00463c26
        ;   XREF to: 00463c3c (CONDITIONAL_JUMP)  ; LAB_00463c3c
    ADD ECX,dword ptr [0x005b06d4]      ; 00463c28 | DAT_005b06d4
    ADD EDX,dword ptr [0x005b06d8]      ; 00463c2e | DAT_005b06d8
    ADD ESI,dword ptr [0x005b06dc]      ; 00463c34 | DAT_005b06dc
    JMP 0x00463bc6                      ; 00463c3a
        ;   XREF to: 00463bc6 (UNCONDITIONAL_JUMP)  ; LAB_00463bc6
    POP EBP                             ; 00463c3c
        ;   Label: LAB_00463c3c
    EMMS                                ; 00463c3d
    POP EDI                             ; 00463c3f
    POP ESI                             ; 00463c40
    RET                                 ; 00463c41

