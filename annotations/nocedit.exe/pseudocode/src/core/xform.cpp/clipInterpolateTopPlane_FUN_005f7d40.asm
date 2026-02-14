; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_a
; SRenderVertex *  Stack[0x8]:4   vertex_b
; SRenderVertex *  Stack[0xc]:4   vertex_out
;
; XREF[2]:
;   core_xform.cpp_clipPolygonStage3_FUN_005f81c0 at 005f8296
;   core_xform.cpp_transformAndClipGeometry_FUN_005f8550 at 005f8b1f
;
; Referenced Globals:
;   _BIT_INTEGER g_RenderStateFlags
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7d40
        ;   Label: core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40
    PUSH ESI                            ; 005f7d41
    PUSH EDI                            ; 005f7d42
    PUSH EBP                            ; 005f7d43
    MOV ECX,dword ptr [ESP + 0x14]      ; 005f7d44
    MOV EDI,dword ptr [ESP + 0x18]      ; 005f7d48
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005f7d4c
    MOV EBX,dword ptr [EDI + 0x4]       ; 005f7d50
    MOV EDX,dword ptr [ECX + 0x8]       ; 005f7d53
    MOV EAX,dword ptr [ECX + 0x4]       ; 005f7d56
    MOV EBP,dword ptr [EDI + 0x8]       ; 005f7d59
    ADD EBX,EDX                         ; 005f7d5c
    ADD EAX,EBP                         ; 005f7d5e
    SUB EBX,EAX                         ; 005f7d60
    MOV EAX,EDX                         ; 005f7d62
    MOV EDX,dword ptr [ECX + 0x4]       ; 005f7d64
    SUB EAX,EDX                         ; 005f7d67
    MOV EDX,EAX                         ; 005f7d69
    CMP EDX,EBX                         ; 005f7d6b
    JGE 0x005f7d81                      ; 005f7d6d
        ;   XREF to: 005f7d81 (CONDITIONAL_JUMP)  ; LAB_005f7d81
    NEG EBX                             ; 005f7d6f
    CMP EDX,EBX                         ; 005f7d71
    JLE 0x005f7d88                      ; 005f7d73
        ;   XREF to: 005f7d88 (CONDITIONAL_JUMP)  ; LAB_005f7d88
    NEG EBX                             ; 005f7d75
    XOR EAX,EAX                         ; 005f7d77
    SAR EDX,0x1                         ; 005f7d79
    RCR EAX,0x1                         ; 005f7d7b
    IDIV EBX                            ; 005f7d7d
    JMP 0x005f7d8f                      ; 005f7d7f
        ;   XREF to: 005f7d8f (UNCONDITIONAL_JUMP)  ; LAB_005f7d8f
    MOV EAX,0x7fffffff                  ; 005f7d81
        ;   Label: LAB_005f7d81
    JMP 0x005f7d8f                      ; 005f7d86
        ;   XREF to: 005f7d8f (UNCONDITIONAL_JUMP)  ; LAB_005f7d8f
    NEG EBX                             ; 005f7d88
        ;   Label: LAB_005f7d88
    MOV EAX,0x80000000                  ; 005f7d8a
    MOV EBX,EAX                         ; 005f7d8f
        ;   Label: LAB_005f7d8f
    MOV EBP,dword ptr [ECX + 0x8]       ; 005f7d91
    MOV EAX,dword ptr [EDI + 0x8]       ; 005f7d94
    MOV EDX,EBX                         ; 005f7d97
    SUB EAX,EBP                         ; 005f7d99
    IMUL EDX                            ; 005f7d9b
    ADD EAX,EAX                         ; 005f7d9d
    ADC EDX,EDX                         ; 005f7d9f
    MOV EAX,EDX                         ; 005f7da1
    MOV EDX,dword ptr [ECX + 0x8]       ; 005f7da3
    ADD EAX,EDX                         ; 005f7da6
    MOV dword ptr [ESI + 0x8],EAX       ; 005f7da8
    MOV dword ptr [ESI + 0x4],EAX       ; 005f7dab
    MOV EAX,dword ptr [EDI]             ; 005f7dae
    SUB EAX,dword ptr [ECX]             ; 005f7db0
    MOV EDX,EBX                         ; 005f7db2
    IMUL EDX                            ; 005f7db4
    ADD EAX,EAX                         ; 005f7db6
    ADC EDX,EDX                         ; 005f7db8
    MOV EAX,EDX                         ; 005f7dba
    MOV EDX,dword ptr [ECX]             ; 005f7dbc
    ADD EAX,EDX                         ; 005f7dbe
    MOV dword ptr [ESI],EAX             ; 005f7dc0
    MOV AH,byte ptr [0x02d052a0]        ; 005f7dc2 | g_RenderStateFlags
    MOV dword ptr [ESI + 0x10],0xffffffff ; 005f7dc8
    TEST AH,0x4                         ; 005f7dcf
    JNZ 0x005f7dd9                      ; 005f7dd2
        ;   XREF to: 005f7dd9 (CONDITIONAL_JUMP)  ; LAB_005f7dd9
    POP EBP                             ; 005f7dd4
    POP EDI                             ; 005f7dd5
    POP ESI                             ; 005f7dd6
    POP EBX                             ; 005f7dd7
    RET                                 ; 005f7dd8
    MOV EAX,dword ptr [EDI + 0x20]      ; 005f7dd9
        ;   Label: LAB_005f7dd9
    MOV EDI,dword ptr [ECX + 0x20]      ; 005f7ddc
    MOV EDX,EBX                         ; 005f7ddf
    SUB EAX,EDI                         ; 005f7de1
    IMUL EDX                            ; 005f7de3
    ADD EAX,EAX                         ; 005f7de5
    ADC EDX,EDX                         ; 005f7de7
    MOV EAX,EDX                         ; 005f7de9
    MOV EDX,dword ptr [ECX + 0x20]      ; 005f7deb
    ADD EAX,EDX                         ; 005f7dee
    MOV dword ptr [ESI + 0x20],EAX      ; 005f7df0
    POP EBP                             ; 005f7df3
    POP EDI                             ; 005f7df4
    POP ESI                             ; 005f7df5
    POP EBX                             ; 005f7df6
    RET                                 ; 005f7df7

