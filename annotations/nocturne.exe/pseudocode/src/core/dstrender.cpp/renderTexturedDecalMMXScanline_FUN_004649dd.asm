; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_004649dd(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0 at 0045fadd
;
; Referenced Globals:
;   undefined4 DAT_005b06b8
;   undefined4 DAT_005b06bc
;   undefined4 DAT_005b06c4
;   undefined4 DAT_005b06d4
;   undefined4 DAT_005b06d8
;   undefined4 DAT_005b06dc
;   undefined4 DAT_005b06e0
;   undefined4 DAT_005b06e4
;   undefined4 DAT_005b06e8
;   undefined1 DAT_005bf550
;   undefined1 DAT_005bf570
;   undefined4 DAT_005bf590
;   undefined4 DAT_005bf5b0
;   void*[1200] g_ScreenBufferArray
;   uint*[1200] g_ZBufferScanlineArray
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004649dd
        ;   Label: core_dstrender.cpp_renderTexturedDecalMMXScanline_FUN_004649dd
    PUSH EDI                            ; 004649de
    PUSH EBP                            ; 004649df
    MOV EAX,dword ptr [ESI + 0x8]       ; 004649e0
    MOV ECX,dword ptr [EDI + 0x8]       ; 004649e3
    CMP EAX,ECX                         ; 004649e6
    JBE 0x004649ed                      ; 004649e8
        ;   XREF to: 004649ed (CONDITIONAL_JUMP)  ; LAB_004649ed
    XCHG EAX,ECX                        ; 004649ea
    XCHG EDI,ESI                        ; 004649eb
    SHR ECX,0x10                        ; 004649ed
        ;   Label: LAB_004649ed
    SHR EAX,0x10                        ; 004649f0
    MOV EBP,dword ptr [EBX*0x4 + 0x1bd4260] ; 004649f3 | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 004649fa | g_ScreenBufferArray
    SUB ECX,EAX                         ; 00464a01
    JLE 0x00464af6                      ; 00464a03
        ;   XREF to: 00464af6 (CONDITIONAL_JUMP)  ; LAB_00464af6
    LEA EBX,[EBX + EAX*0x4]             ; 00464a09
    SHL ECX,0x2                         ; 00464a0c
    LEA EBP,[EBP + EAX*0x4]             ; 00464a0f
    MOV dword ptr [0x005b06e4],ECX      ; 00464a13 | DAT_005b06e4
    MOV dword ptr [0x005b06e0],EBX      ; 00464a19 | DAT_005b06e0
    MOV dword ptr [0x005b06e8],EBP      ; 00464a1f | DAT_005b06e8
    MOV EAX,dword ptr [EDI + 0x18]      ; 00464a25
    MOV EBX,dword ptr [ESI + 0x18]      ; 00464a28
    SUB EAX,EBX                         ; 00464a2b
    IMUL dword ptr [ECX + 0x1c00c84]    ; 00464a2d | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005b06b8],EBX      ; 00464a33 | DAT_005b06b8
    MOV dword ptr [0x005b06d4],EDX      ; 00464a39 | DAT_005b06d4
    MOV EAX,dword ptr [EDI + 0x20]      ; 00464a3f
    MOV EBX,dword ptr [ESI + 0x20]      ; 00464a42
    SUB EAX,EBX                         ; 00464a45
    IMUL dword ptr [ECX + 0x1c00c84]    ; 00464a47 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005b06bc],EBX      ; 00464a4d | DAT_005b06bc
    MOV dword ptr [0x005b06d8],EDX      ; 00464a53 | DAT_005b06d8
    MOV EAX,dword ptr [EDI + 0x28]      ; 00464a59
    MOV EBX,dword ptr [ESI + 0x28]      ; 00464a5c
    SUB EAX,EBX                         ; 00464a5f
    IMUL dword ptr [ECX + 0x1c00c84]    ; 00464a61 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005b06c4],EBX      ; 00464a67 | DAT_005b06c4
    MOV dword ptr [0x005b06dc],EDX      ; 00464a6d | DAT_005b06dc
    MOV ECX,dword ptr [0x005b06b8]      ; 00464a73 | DAT_005b06b8
    MOV EDX,dword ptr [0x005b06bc]      ; 00464a79 | DAT_005b06bc
    MOV EDI,0x0                         ; 00464a7f
    MOV ESI,dword ptr [0x005b06c4]      ; 00464a84 | DAT_005b06c4
    MOV EAX,[0x005b06e8]                ; 00464a8a | DAT_005b06e8
        ;   Label: LAB_00464a8a
    ADD EAX,EDI                         ; 00464a8f
    CMP ESI,dword ptr [EAX]             ; 00464a91
    JL 0x00464ad7                       ; 00464a93
        ;   XREF to: 00464ad7 (CONDITIONAL_JUMP)  ; LAB_00464ad7
    MOVD MM0,ECX                        ; 00464a95
    MOVD MM2,EDX                        ; 00464a98
    PSRLQ MM0,qword ptr [0x005bf550]    ; 00464a9b | DAT_005bf550
    PSRLQ MM2,qword ptr [0x005bf570]    ; 00464aa2 | DAT_005bf570
    PAND MM0,qword ptr [0x005bf590]     ; 00464aa9 | DAT_005bf590
    PAND MM2,qword ptr [0x005bf5b0]     ; 00464ab0 | DAT_005bf5b0
    PADDD MM0,MM2                       ; 00464ab7
    MOVD EBX,MM0                        ; 00464aba
    ADD EBX,dword ptr [0x01c02580]      ; 00464abd | DAT_01c02580
    MOVZX EAX,byte ptr [EBX]            ; 00464ac3
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464ac6 | DAT_01c00024
    MOV EBX,dword ptr [0x005b06e0]      ; 00464acd | DAT_005b06e0
    ADD EBX,EDI                         ; 00464ad3
    MOV dword ptr [EBX],EAX             ; 00464ad5
    ADD EDI,0x4                         ; 00464ad7
        ;   Label: LAB_00464ad7
    CMP EDI,dword ptr [0x005b06e4]      ; 00464ada | DAT_005b06e4
    JA 0x00464af6                       ; 00464ae0
        ;   XREF to: 00464af6 (CONDITIONAL_JUMP)  ; LAB_00464af6
    ADD ECX,dword ptr [0x005b06d4]      ; 00464ae2 | DAT_005b06d4
    ADD EDX,dword ptr [0x005b06d8]      ; 00464ae8 | DAT_005b06d8
    ADD ESI,dword ptr [0x005b06dc]      ; 00464aee | DAT_005b06dc
    JMP 0x00464a8a                      ; 00464af4
        ;   XREF to: 00464a8a (UNCONDITIONAL_JUMP)  ; LAB_00464a8a
    POP EBP                             ; 00464af6
        ;   Label: LAB_00464af6
    EMMS                                ; 00464af7
    POP EDI                             ; 00464af9
    POP ESI                             ; 00464afa
    RET                                 ; 00464afb

