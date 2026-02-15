; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00490a58(SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)
;
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 at 0048a909
;   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820 at 0048a882
;
; Referenced Globals:
;   void*[1200] g_ScreenBufferArray
;   uint*[1200] g_ZBufferScanlineArray
;   int g_ActiveRenderColor
;   uint[1600] g_ReciprocalLookupTable
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00490a58
        ;   Label: core_dstrender.cpp_renderSolidColorDepth16xUnrolled_FUN_00490a58
    PUSH EDI                            ; 00490a59
    PUSH EBP                            ; 00490a5a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00490a5b
    MOV ECX,dword ptr [EDI + 0x8]       ; 00490a5e
    CMP EAX,ECX                         ; 00490a61
    JBE 0x00490a68                      ; 00490a63
        ;   XREF to: 00490a68 (CONDITIONAL_JUMP)  ; LAB_00490a68
    XCHG EAX,ECX                        ; 00490a65
    XCHG EDI,ESI                        ; 00490a66
    SHR EAX,0x10                        ; 00490a68
        ;   Label: LAB_00490a68
    SHR ECX,0x10                        ; 00490a6b
    MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c] ; 00490a6e | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 00490a75 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 00490a7c
    JLE 0x00490c33                      ; 00490a7e
        ;   XREF to: 00490c33 (CONDITIONAL_JUMP)  ; LAB_00490c33
    SHL EAX,0x2                         ; 00490a84
    ADD EBX,EAX                         ; 00490a87
    ADD EBP,EAX                         ; 00490a89
    INC ECX                             ; 00490a8b
    MOV EAX,dword ptr [EDI + 0x28]      ; 00490a8c
    SUB EAX,dword ptr [ESI + 0x28]      ; 00490a8f
    IMUL dword ptr [ECX*0x4 + 0x2d02580] ; 00490a92 | g_ReciprocalLookupTable
    MOV EDI,EBX                         ; 00490a99
    MOV EBX,EBP                         ; 00490a9b
    DEC ECX                             ; 00490a9d
    MOV ESI,dword ptr [ESI + 0x28]      ; 00490a9e
    MOV EAX,[0x02d02570]                ; 00490aa1 | g_ActiveRenderColor
    SUB ECX,0x4                         ; 00490aa6
        ;   Label: LAB_00490aa6
    JL 0x00490bf7                       ; 00490aa9
        ;   XREF to: 00490bf7 (CONDITIONAL_JUMP)  ; LAB_00490bf7
    MOV EBP,ESI                         ; 00490aaf
    SHR EBP,0x8                         ; 00490ab1
    CMP EBP,dword ptr [EBX]             ; 00490ab4
    JL 0x00490abc                       ; 00490ab6
        ;   XREF to: 00490abc (CONDITIONAL_JUMP)  ; LAB_00490abc
    MOV dword ptr [EBX],EBP             ; 00490ab8
    MOV dword ptr [EDI],EAX             ; 00490aba
    ADD ESI,EDX                         ; 00490abc
        ;   Label: LAB_00490abc
    MOV EBP,ESI                         ; 00490abe
    SHR EBP,0x8                         ; 00490ac0
    CMP EBP,dword ptr [EBX + 0x4]       ; 00490ac3
    JL 0x00490ace                       ; 00490ac6
        ;   XREF to: 00490ace (CONDITIONAL_JUMP)  ; LAB_00490ace
    MOV dword ptr [EBX + 0x4],EBP       ; 00490ac8
    MOV dword ptr [EDI + 0x4],EAX       ; 00490acb
    ADD ESI,EDX                         ; 00490ace
        ;   Label: LAB_00490ace
    MOV EBP,ESI                         ; 00490ad0
    SHR EBP,0x8                         ; 00490ad2
    CMP EBP,dword ptr [EBX + 0x8]       ; 00490ad5
    JL 0x00490ae0                       ; 00490ad8
        ;   XREF to: 00490ae0 (CONDITIONAL_JUMP)  ; LAB_00490ae0
    MOV dword ptr [EBX + 0x8],EBP       ; 00490ada
    MOV dword ptr [EDI + 0x8],EAX       ; 00490add
    ADD ESI,EDX                         ; 00490ae0
        ;   Label: LAB_00490ae0
    MOV EBP,ESI                         ; 00490ae2
    SHR EBP,0x8                         ; 00490ae4
    CMP EBP,dword ptr [EBX + 0xc]       ; 00490ae7
    JL 0x00490af2                       ; 00490aea
        ;   XREF to: 00490af2 (CONDITIONAL_JUMP)  ; LAB_00490af2
    MOV dword ptr [EBX + 0xc],EBP       ; 00490aec
    MOV dword ptr [EDI + 0xc],EAX       ; 00490aef
    ADD ESI,EDX                         ; 00490af2
        ;   Label: LAB_00490af2
    ADD EBX,0x10                        ; 00490af4
    ADD EDI,0x10                        ; 00490af7
    SUB ECX,0x4                         ; 00490afa
    JL 0x00490bf7                       ; 00490afd
        ;   XREF to: 00490bf7 (CONDITIONAL_JUMP)  ; LAB_00490bf7
    MOV EBP,ESI                         ; 00490b03
    SHR EBP,0x8                         ; 00490b05
    CMP EBP,dword ptr [EBX]             ; 00490b08
    JL 0x00490b10                       ; 00490b0a
        ;   XREF to: 00490b10 (CONDITIONAL_JUMP)  ; LAB_00490b10
    MOV dword ptr [EBX],EBP             ; 00490b0c
    MOV dword ptr [EDI],EAX             ; 00490b0e
    ADD ESI,EDX                         ; 00490b10
        ;   Label: LAB_00490b10
    MOV EBP,ESI                         ; 00490b12
    SHR EBP,0x8                         ; 00490b14
    CMP EBP,dword ptr [EBX + 0x4]       ; 00490b17
    JL 0x00490b22                       ; 00490b1a
        ;   XREF to: 00490b22 (CONDITIONAL_JUMP)  ; LAB_00490b22
    MOV dword ptr [EBX + 0x4],EBP       ; 00490b1c
    MOV dword ptr [EDI + 0x4],EAX       ; 00490b1f
    ADD ESI,EDX                         ; 00490b22
        ;   Label: LAB_00490b22
    MOV EBP,ESI                         ; 00490b24
    SHR EBP,0x8                         ; 00490b26
    CMP EBP,dword ptr [EBX + 0x8]       ; 00490b29
    JL 0x00490b34                       ; 00490b2c
        ;   XREF to: 00490b34 (CONDITIONAL_JUMP)  ; LAB_00490b34
    MOV dword ptr [EBX + 0x8],EBP       ; 00490b2e
    MOV dword ptr [EDI + 0x8],EAX       ; 00490b31
    ADD ESI,EDX                         ; 00490b34
        ;   Label: LAB_00490b34
    MOV EBP,ESI                         ; 00490b36
    SHR EBP,0x8                         ; 00490b38
    CMP EBP,dword ptr [EBX + 0xc]       ; 00490b3b
    JL 0x00490b46                       ; 00490b3e
        ;   XREF to: 00490b46 (CONDITIONAL_JUMP)  ; LAB_00490b46
    MOV dword ptr [EBX + 0xc],EBP       ; 00490b40
    MOV dword ptr [EDI + 0xc],EAX       ; 00490b43
    ADD ESI,EDX                         ; 00490b46
        ;   Label: LAB_00490b46
    ADD EBX,0x10                        ; 00490b48
    ADD EDI,0x10                        ; 00490b4b
    SUB ECX,0x4                         ; 00490b4e
    JL 0x00490bf7                       ; 00490b51
        ;   XREF to: 00490bf7 (CONDITIONAL_JUMP)  ; LAB_00490bf7
    MOV EBP,ESI                         ; 00490b57
    SHR EBP,0x8                         ; 00490b59
    CMP EBP,dword ptr [EBX]             ; 00490b5c
    JL 0x00490b64                       ; 00490b5e
        ;   XREF to: 00490b64 (CONDITIONAL_JUMP)  ; LAB_00490b64
    MOV dword ptr [EBX],EBP             ; 00490b60
    MOV dword ptr [EDI],EAX             ; 00490b62
    ADD ESI,EDX                         ; 00490b64
        ;   Label: LAB_00490b64
    MOV EBP,ESI                         ; 00490b66
    SHR EBP,0x8                         ; 00490b68
    CMP EBP,dword ptr [EBX + 0x4]       ; 00490b6b
    JL 0x00490b76                       ; 00490b6e
        ;   XREF to: 00490b76 (CONDITIONAL_JUMP)  ; LAB_00490b76
    MOV dword ptr [EBX + 0x4],EBP       ; 00490b70
    MOV dword ptr [EDI + 0x4],EAX       ; 00490b73
    ADD ESI,EDX                         ; 00490b76
        ;   Label: LAB_00490b76
    MOV EBP,ESI                         ; 00490b78
    SHR EBP,0x8                         ; 00490b7a
    CMP EBP,dword ptr [EBX + 0x8]       ; 00490b7d
    JL 0x00490b88                       ; 00490b80
        ;   XREF to: 00490b88 (CONDITIONAL_JUMP)  ; LAB_00490b88
    MOV dword ptr [EBX + 0x8],EBP       ; 00490b82
    MOV dword ptr [EDI + 0x8],EAX       ; 00490b85
    ADD ESI,EDX                         ; 00490b88
        ;   Label: LAB_00490b88
    MOV EBP,ESI                         ; 00490b8a
    SHR EBP,0x8                         ; 00490b8c
    CMP EBP,dword ptr [EBX + 0xc]       ; 00490b8f
    JL 0x00490b9a                       ; 00490b92
        ;   XREF to: 00490b9a (CONDITIONAL_JUMP)  ; LAB_00490b9a
    MOV dword ptr [EBX + 0xc],EBP       ; 00490b94
    MOV dword ptr [EDI + 0xc],EAX       ; 00490b97
    ADD ESI,EDX                         ; 00490b9a
        ;   Label: LAB_00490b9a
    ADD EBX,0x10                        ; 00490b9c
    ADD EDI,0x10                        ; 00490b9f
    SUB ECX,0x4                         ; 00490ba2
    JL 0x00490bf7                       ; 00490ba5
        ;   XREF to: 00490bf7 (CONDITIONAL_JUMP)  ; LAB_00490bf7
    MOV EBP,ESI                         ; 00490ba7
    SHR EBP,0x8                         ; 00490ba9
    CMP EBP,dword ptr [EBX]             ; 00490bac
    JL 0x00490bb4                       ; 00490bae
        ;   XREF to: 00490bb4 (CONDITIONAL_JUMP)  ; LAB_00490bb4
    MOV dword ptr [EBX],EBP             ; 00490bb0
    MOV dword ptr [EDI],EAX             ; 00490bb2
    ADD ESI,EDX                         ; 00490bb4
        ;   Label: LAB_00490bb4
    MOV EBP,ESI                         ; 00490bb6
    SHR EBP,0x8                         ; 00490bb8
    CMP EBP,dword ptr [EBX + 0x4]       ; 00490bbb
    JL 0x00490bc6                       ; 00490bbe
        ;   XREF to: 00490bc6 (CONDITIONAL_JUMP)  ; LAB_00490bc6
    MOV dword ptr [EBX + 0x4],EBP       ; 00490bc0
    MOV dword ptr [EDI + 0x4],EAX       ; 00490bc3
    ADD ESI,EDX                         ; 00490bc6
        ;   Label: LAB_00490bc6
    MOV EBP,ESI                         ; 00490bc8
    SHR EBP,0x8                         ; 00490bca
    CMP EBP,dword ptr [EBX + 0x8]       ; 00490bcd
    JL 0x00490bd8                       ; 00490bd0
        ;   XREF to: 00490bd8 (CONDITIONAL_JUMP)  ; LAB_00490bd8
    MOV dword ptr [EBX + 0x8],EBP       ; 00490bd2
    MOV dword ptr [EDI + 0x8],EAX       ; 00490bd5
    ADD ESI,EDX                         ; 00490bd8
        ;   Label: LAB_00490bd8
    MOV EBP,ESI                         ; 00490bda
    SHR EBP,0x8                         ; 00490bdc
    CMP EBP,dword ptr [EBX + 0xc]       ; 00490bdf
    JL 0x00490bea                       ; 00490be2
        ;   XREF to: 00490bea (CONDITIONAL_JUMP)  ; LAB_00490bea
    MOV dword ptr [EBX + 0xc],EBP       ; 00490be4
    MOV dword ptr [EDI + 0xc],EAX       ; 00490be7
    ADD ESI,EDX                         ; 00490bea
        ;   Label: LAB_00490bea
    ADD EBX,0x10                        ; 00490bec
    ADD EDI,0x10                        ; 00490bef
    JMP 0x00490aa6                      ; 00490bf2
        ;   XREF to: 00490aa6 (UNCONDITIONAL_JUMP)  ; LAB_00490aa6
    ADD ECX,0x4                         ; 00490bf7
        ;   Label: LAB_00490bf7
    JLE 0x00490c33                      ; 00490bfa
        ;   XREF to: 00490c33 (CONDITIONAL_JUMP)  ; LAB_00490c33
    MOV EBP,ESI                         ; 00490bfc
    SHR EBP,0x8                         ; 00490bfe
    CMP EBP,dword ptr [EBX]             ; 00490c01
    JL 0x00490c09                       ; 00490c03
        ;   XREF to: 00490c09 (CONDITIONAL_JUMP)  ; LAB_00490c09
    MOV dword ptr [EBX],EBP             ; 00490c05
    MOV dword ptr [EDI],EAX             ; 00490c07
    ADD ESI,EDX                         ; 00490c09
        ;   Label: LAB_00490c09
    DEC ECX                             ; 00490c0b
    JLE 0x00490c33                      ; 00490c0c
        ;   XREF to: 00490c33 (CONDITIONAL_JUMP)  ; LAB_00490c33
    MOV EBP,ESI                         ; 00490c0e
    SHR EBP,0x8                         ; 00490c10
    CMP EBP,dword ptr [EBX + 0x4]       ; 00490c13
    JL 0x00490c1e                       ; 00490c16
        ;   XREF to: 00490c1e (CONDITIONAL_JUMP)  ; LAB_00490c1e
    MOV dword ptr [EBX + 0x4],EBP       ; 00490c18
    MOV dword ptr [EDI + 0x4],EAX       ; 00490c1b
    ADD ESI,EDX                         ; 00490c1e
        ;   Label: LAB_00490c1e
    DEC ECX                             ; 00490c20
    JLE 0x00490c33                      ; 00490c21
        ;   XREF to: 00490c33 (CONDITIONAL_JUMP)  ; LAB_00490c33
    MOV EBP,ESI                         ; 00490c23
    SHR EBP,0x8                         ; 00490c25
    CMP EBP,dword ptr [EBX + 0x8]       ; 00490c28
    JL 0x00490c33                       ; 00490c2b
        ;   XREF to: 00490c33 (CONDITIONAL_JUMP)  ; LAB_00490c33
    MOV dword ptr [EBX + 0x8],EBP       ; 00490c2d
    MOV dword ptr [EDI + 0x8],EAX       ; 00490c30
    POP EBP                             ; 00490c33
        ;   Label: LAB_00490c33
    POP EDI                             ; 00490c34
    POP ESI                             ; 00490c35
    RET                                 ; 00490c36

