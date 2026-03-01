; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_renderScreenDepthTestInterlacedProfiled_FUN_00490cb5(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 at 0048ab81
;
; Referenced Globals:
;   int g_RenderPixelBudget = 0x1
;   int g_RenderPixelCounter
;   int g_RenderAbortFlag
;   void*[1200] g_ScreenBufferArray
;   uint[1600] g_ReciprocalLookupTable
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00490cb5
        ;   Label: core_dstrender.cpp_renderScreenDepthTestInterlacedProfiled_FUN_00490cb5
    PUSH EDI                            ; 00490cb6
    TEST EBX,0x1                        ; 00490cb7
    JZ 0x00490cc2                       ; 00490cbd
        ;   XREF to: 00490cc2 (CONDITIONAL_JUMP)  ; LAB_00490cc2
    POP EDI                             ; 00490cbf
    POP ESI                             ; 00490cc0
    RET                                 ; 00490cc1
    PUSH EBP                            ; 00490cc2
        ;   Label: LAB_00490cc2
    MOV EAX,dword ptr [ESI + 0x8]       ; 00490cc3
    MOV ECX,dword ptr [EDI + 0x8]       ; 00490cc6
    CMP EAX,ECX                         ; 00490cc9
    JBE 0x00490cd0                      ; 00490ccb
        ;   XREF to: 00490cd0 (CONDITIONAL_JUMP)  ; LAB_00490cd0
    XCHG EAX,ECX                        ; 00490ccd
    XCHG EDI,ESI                        ; 00490cce
    SHR EAX,0x10                        ; 00490cd0
        ;   Label: LAB_00490cd0
    SHR ECX,0x10                        ; 00490cd3
    MOV EBP,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 00490cd6 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 00490cdd
    JLE 0x00490d10                      ; 00490cdf
        ;   XREF to: 00490d10 (CONDITIONAL_JUMP)  ; LAB_00490d10
    SHL EAX,0x1                         ; 00490ce1
    ADD EBP,EAX                         ; 00490ce3
    INC ECX                             ; 00490ce5
    MOV EAX,dword ptr [EDI + 0x28]      ; 00490ce6
    SUB EAX,dword ptr [ESI + 0x28]      ; 00490ce9
    IMUL dword ptr [ECX*0x4 + 0x2d02580] ; 00490cec | g_ReciprocalLookupTable
    MOV EBX,EBP                         ; 00490cf3
    DEC ECX                             ; 00490cf5
    MOV ESI,dword ptr [ESI + 0x28]      ; 00490cf6
    MOV EAX,ESI                         ; 00490cf9
        ;   Label: LAB_00490cf9
    SHR EAX,0x8                         ; 00490cfb
    MOVZX EDI,word ptr [EBX]            ; 00490cfe
    CMP EAX,EDI                         ; 00490d01
    JC 0x00490d14                       ; 00490d03
        ;   XREF to: 00490d14 (CONDITIONAL_JUMP)  ; LAB_00490d14
    LEA ESI,[ESI + EDX*0x2]             ; 00490d05
        ;   Label: LAB_00490d05
    ADD EBX,0x4                         ; 00490d08
    SUB ECX,0x2                         ; 00490d0b
    JG 0x00490cf9                       ; 00490d0e
        ;   XREF to: 00490cf9 (CONDITIONAL_JUMP)  ; LAB_00490cf9
    POP EBP                             ; 00490d10
        ;   Label: LAB_00490d10
    POP EDI                             ; 00490d11
    POP ESI                             ; 00490d12
    RET                                 ; 00490d13
    MOV EAX,[0x02c6d5a4]                ; 00490d14 | g_RenderPixelCounter
        ;   Label: LAB_00490d14
    INC EAX                             ; 00490d19
    MOV [0x02c6d5a4],EAX                ; 00490d1a | g_RenderPixelCounter
    CMP EAX,dword ptr [0x006703f0]      ; 00490d1f | g_RenderPixelBudget
    JC 0x00490d05                       ; 00490d25
        ;   XREF to: 00490d05 (CONDITIONAL_JUMP)  ; LAB_00490d05
    MOV dword ptr [0x02c6d5a8],0x1      ; 00490d27 | g_RenderAbortFlag
    POP EBP                             ; 00490d31
    POP EDI                             ; 00490d32
    POP ESI                             ; 00490d33
    RET                                 ; 00490d34

