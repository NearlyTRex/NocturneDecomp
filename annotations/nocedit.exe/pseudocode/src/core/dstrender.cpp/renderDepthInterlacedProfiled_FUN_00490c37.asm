; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dstrender_cpp_renderDepthInterlacedProfiled_FUN_00490c37 (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 at 0048ac16
;
; Referenced Globals:
;   int g_RenderPixelBudget = 0x1
;   int g_RenderPixelCounter
;   int g_RenderAbortFlag
;   uint*[1200] g_ZBufferScanlineArray
;   uint[1600] g_ReciprocalLookupTable
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00490c37
        ;   Label: core_dstrender.cpp_renderDepthInterlacedProfiled_FUN_00490c37
    PUSH EDI                            ; 00490c38
    TEST EBX,0x1                        ; 00490c39
    JZ 0x00490c44                       ; 00490c3f
        ;   XREF to: 00490c44 (CONDITIONAL_JUMP)  ; LAB_00490c44
    POP EDI                             ; 00490c41
    POP ESI                             ; 00490c42
    RET                                 ; 00490c43
    PUSH EBP                            ; 00490c44
        ;   Label: LAB_00490c44
    MOV EAX,dword ptr [ESI + 0x8]       ; 00490c45
    MOV ECX,dword ptr [EDI + 0x8]       ; 00490c48
    CMP EAX,ECX                         ; 00490c4b
    JBE 0x00490c52                      ; 00490c4d
        ;   XREF to: 00490c52 (CONDITIONAL_JUMP)  ; LAB_00490c52
    XCHG EAX,ECX                        ; 00490c4f
    XCHG EDI,ESI                        ; 00490c50
    SHR EAX,0x10                        ; 00490c52
        ;   Label: LAB_00490c52
    SHR ECX,0x10                        ; 00490c55
    MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c] ; 00490c58 | g_ZBufferScanlineArray
    SUB ECX,EAX                         ; 00490c5f
    JLE 0x00490c90                      ; 00490c61
        ;   XREF to: 00490c90 (CONDITIONAL_JUMP)  ; LAB_00490c90
    SHL EAX,0x2                         ; 00490c63
    ADD EBP,EAX                         ; 00490c66
    INC ECX                             ; 00490c68
    MOV EAX,dword ptr [EDI + 0x28]      ; 00490c69
    SUB EAX,dword ptr [ESI + 0x28]      ; 00490c6c
    IMUL dword ptr [ECX*0x4 + 0x2d02580] ; 00490c6f | g_ReciprocalLookupTable
    MOV EBX,EBP                         ; 00490c76
    DEC ECX                             ; 00490c78
    MOV ESI,dword ptr [ESI + 0x28]      ; 00490c79
    MOV EAX,ESI                         ; 00490c7c
        ;   Label: LAB_00490c7c
    SHR EAX,0x8                         ; 00490c7e
    CMP EAX,dword ptr [EBX]             ; 00490c81
    JGE 0x00490c94                      ; 00490c83
        ;   XREF to: 00490c94 (CONDITIONAL_JUMP)  ; LAB_00490c94
    LEA ESI,[ESI + EDX*0x2]             ; 00490c85
        ;   Label: LAB_00490c85
    ADD EBX,0x8                         ; 00490c88
    SUB ECX,0x2                         ; 00490c8b
    JG 0x00490c7c                       ; 00490c8e
        ;   XREF to: 00490c7c (CONDITIONAL_JUMP)  ; LAB_00490c7c
    POP EBP                             ; 00490c90
        ;   Label: LAB_00490c90
    POP EDI                             ; 00490c91
    POP ESI                             ; 00490c92
    RET                                 ; 00490c93
    MOV EAX,[0x02c6d5a4]                ; 00490c94 | g_RenderPixelCounter
        ;   Label: LAB_00490c94
    INC EAX                             ; 00490c99
    MOV [0x02c6d5a4],EAX                ; 00490c9a | g_RenderPixelCounter
    CMP EAX,dword ptr [0x006703f0]      ; 00490c9f | g_RenderPixelBudget
    JC 0x00490c85                       ; 00490ca5
        ;   XREF to: 00490c85 (CONDITIONAL_JUMP)  ; LAB_00490c85
    MOV dword ptr [0x02c6d5a8],0x1      ; 00490ca7 | g_RenderAbortFlag
    POP EBP                             ; 00490cb1
    POP EDI                             ; 00490cb2
    POP ESI                             ; 00490cb3
    RET                                 ; 00490cb4

