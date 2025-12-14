; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dstrender.cpp_renderZBufferFill16xUnrolled_FUN_00490902(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950 at 0048aa31
;
; Referenced Globals:
;   void*[1024] g_ScreenBufferArray
;   uint*[1024] g_ZBufferScanlineArray
;   uint[256] g_Hardware32BitPalette
;   int g_ActiveRenderColor
;   uint[1600] g_ReciprocalLookupTable
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00490902
        ;   Label: core_dstrender.cpp_renderZBufferFill16xUnrolled_FUN_00490902
    PUSH EDI                            ; 00490903
    PUSH EBP                            ; 00490904
    MOV EAX,dword ptr [ESI + 0x8]       ; 00490905
    MOV ECX,dword ptr [EDI + 0x8]       ; 00490908
    CMP EAX,ECX                         ; 0049090b
    JBE 0x00490912                      ; 0049090d
        ;   XREF to: 00490912 (CONDITIONAL_JUMP)  ; LAB_00490912
    XCHG EAX,ECX                        ; 0049090f
    XCHG EDI,ESI                        ; 00490910
    SHR EAX,0x10                        ; 00490912
        ;   Label: LAB_00490912
    SHR ECX,0x10                        ; 00490915
    MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c] ; 00490918 | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 0049091f | g_ScreenBufferArray
    SUB ECX,EAX                         ; 00490926
    JLE 0x00490a54                      ; 00490928
        ;   XREF to: 00490a54 (CONDITIONAL_JUMP)  ; LAB_00490a54
    SHL EAX,0x2                         ; 0049092e
    ADD EBX,EAX                         ; 00490931
    ADD EBP,EAX                         ; 00490933
    INC ECX                             ; 00490935
    MOV EAX,dword ptr [EDI + 0x28]      ; 00490936
    SUB EAX,dword ptr [ESI + 0x28]      ; 00490939
    IMUL dword ptr [ECX*0x4 + 0x2d02580] ; 0049093c | g_ReciprocalLookupTable
    MOV EDI,EBX                         ; 00490943
    MOV EBX,EBP                         ; 00490945
    DEC ECX                             ; 00490947
    MOV ESI,dword ptr [ESI + 0x28]      ; 00490948
    XOR EAX,EAX                         ; 0049094b
    MOV AL,[0x02d02570]                 ; 0049094d | g_ActiveRenderColor
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00490952 | g_Hardware32BitPalette
    SUB ECX,0x4                         ; 00490959
        ;   Label: LAB_00490959
    JL 0x00490a2e                       ; 0049095c
        ;   XREF to: 00490a2e (CONDITIONAL_JUMP)  ; LAB_00490a2e
    MOV EBP,ESI                         ; 00490962
    SHR EBP,0x8                         ; 00490964
    MOV dword ptr [EBX],EBP             ; 00490967
    ADD ESI,EDX                         ; 00490969
    MOV EBP,ESI                         ; 0049096b
    SHR EBP,0x8                         ; 0049096d
    MOV dword ptr [EBX + 0x4],EBP       ; 00490970
    ADD ESI,EDX                         ; 00490973
    MOV EBP,ESI                         ; 00490975
    SHR EBP,0x8                         ; 00490977
    MOV dword ptr [EBX + 0x8],EBP       ; 0049097a
    ADD ESI,EDX                         ; 0049097d
    MOV EBP,ESI                         ; 0049097f
    SHR EBP,0x8                         ; 00490981
    MOV dword ptr [EBX + 0xc],EBP       ; 00490984
    ADD ESI,EDX                         ; 00490987
    ADD EBX,0x10                        ; 00490989
    ADD EDI,0x10                        ; 0049098c
    SUB ECX,0x4                         ; 0049098f
    JL 0x00490a2e                       ; 00490992
        ;   XREF to: 00490a2e (CONDITIONAL_JUMP)  ; LAB_00490a2e
    MOV EBP,ESI                         ; 00490998
    SHR EBP,0x8                         ; 0049099a
    MOV dword ptr [EBX],EBP             ; 0049099d
    ADD ESI,EDX                         ; 0049099f
    MOV EBP,ESI                         ; 004909a1
    SHR EBP,0x8                         ; 004909a3
    MOV dword ptr [EBX + 0x4],EBP       ; 004909a6
    ADD ESI,EDX                         ; 004909a9
    MOV EBP,ESI                         ; 004909ab
    SHR EBP,0x8                         ; 004909ad
    MOV dword ptr [EBX + 0x8],EBP       ; 004909b0
    ADD ESI,EDX                         ; 004909b3
    MOV EBP,ESI                         ; 004909b5
    SHR EBP,0x8                         ; 004909b7
    MOV dword ptr [EBX + 0xc],EBP       ; 004909ba
    ADD ESI,EDX                         ; 004909bd
    ADD EBX,0x10                        ; 004909bf
    ADD EDI,0x10                        ; 004909c2
    SUB ECX,0x4                         ; 004909c5
    JL 0x00490a2e                       ; 004909c8
        ;   XREF to: 00490a2e (CONDITIONAL_JUMP)  ; LAB_00490a2e
    MOV EBP,ESI                         ; 004909ca
    SHR EBP,0x8                         ; 004909cc
    MOV dword ptr [EBX],EBP             ; 004909cf
    ADD ESI,EDX                         ; 004909d1
    MOV EBP,ESI                         ; 004909d3
    SHR EBP,0x8                         ; 004909d5
    MOV dword ptr [EBX + 0x4],EBP       ; 004909d8
    ADD ESI,EDX                         ; 004909db
    MOV EBP,ESI                         ; 004909dd
    SHR EBP,0x8                         ; 004909df
    MOV dword ptr [EBX + 0x8],EBP       ; 004909e2
    ADD ESI,EDX                         ; 004909e5
    MOV EBP,ESI                         ; 004909e7
    SHR EBP,0x8                         ; 004909e9
    MOV dword ptr [EBX + 0xc],EBP       ; 004909ec
    ADD ESI,EDX                         ; 004909ef
    ADD EBX,0x10                        ; 004909f1
    ADD EDI,0x10                        ; 004909f4
    SUB ECX,0x4                         ; 004909f7
    JL 0x00490a2e                       ; 004909fa
        ;   XREF to: 00490a2e (CONDITIONAL_JUMP)  ; LAB_00490a2e
    MOV EBP,ESI                         ; 004909fc
    SHR EBP,0x8                         ; 004909fe
    MOV dword ptr [EBX],EBP             ; 00490a01
    ADD ESI,EDX                         ; 00490a03
    MOV EBP,ESI                         ; 00490a05
    SHR EBP,0x8                         ; 00490a07
    MOV dword ptr [EBX + 0x4],EBP       ; 00490a0a
    ADD ESI,EDX                         ; 00490a0d
    MOV EBP,ESI                         ; 00490a0f
    SHR EBP,0x8                         ; 00490a11
    MOV dword ptr [EBX + 0x8],EBP       ; 00490a14
    ADD ESI,EDX                         ; 00490a17
    MOV EBP,ESI                         ; 00490a19
    SHR EBP,0x8                         ; 00490a1b
    MOV dword ptr [EBX + 0xc],EBP       ; 00490a1e
    ADD ESI,EDX                         ; 00490a21
    ADD EBX,0x10                        ; 00490a23
    ADD EDI,0x10                        ; 00490a26
    JMP 0x00490959                      ; 00490a29
        ;   XREF to: 00490959 (UNCONDITIONAL_JUMP)  ; LAB_00490959
    ADD ECX,0x4                         ; 00490a2e
        ;   Label: LAB_00490a2e
    JLE 0x00490a54                      ; 00490a31
        ;   XREF to: 00490a54 (CONDITIONAL_JUMP)  ; LAB_00490a54
    MOV EBP,ESI                         ; 00490a33
    SHR EBP,0x8                         ; 00490a35
    MOV dword ptr [EBX],EBP             ; 00490a38
    ADD ESI,EDX                         ; 00490a3a
    DEC ECX                             ; 00490a3c
    JLE 0x00490a54                      ; 00490a3d
        ;   XREF to: 00490a54 (CONDITIONAL_JUMP)  ; LAB_00490a54
    MOV EBP,ESI                         ; 00490a3f
    SHR EBP,0x8                         ; 00490a41
    MOV dword ptr [EBX + 0x4],EBP       ; 00490a44
    ADD ESI,EDX                         ; 00490a47
    DEC ECX                             ; 00490a49
    JLE 0x00490a54                      ; 00490a4a
        ;   XREF to: 00490a54 (CONDITIONAL_JUMP)  ; LAB_00490a54
    MOV EBP,ESI                         ; 00490a4c
    SHR EBP,0x8                         ; 00490a4e
    MOV dword ptr [EBX + 0x8],EBP       ; 00490a51
    POP EBP                             ; 00490a54
        ;   Label: LAB_00490a54
    POP EDI                             ; 00490a55
    POP ESI                             ; 00490a56
    RET                                 ; 00490a57

