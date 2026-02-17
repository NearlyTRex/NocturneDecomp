; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_a
; SRenderVertex *  Stack[0x8]:4   vertex_b
; SRenderVertex *  Stack[0xc]:4   vertex_out
;
; XREF[2]:
;   core_xform.cpp_clipPolygonStage1_FUN_005f7ed0 at 005f7fa5
;   core_xform.cpp_transformAndClipGeometry_FUN_005f8550 at 005f89eb
;
; Referenced Globals:
;   _BIT_INTEGER32 g_RenderStateFlags
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7bc0
        ;   Label: core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0
    PUSH ESI                            ; 005f7bc1
    PUSH EDI                            ; 005f7bc2
    PUSH EBP                            ; 005f7bc3
    MOV ECX,dword ptr [ESP + 0x14]      ; 005f7bc4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005f7bc8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005f7bcc
    MOV EBX,dword ptr [EDI]             ; 005f7bd0
    MOV EDX,dword ptr [ECX + 0x8]       ; 005f7bd2
    MOV EAX,dword ptr [ECX]             ; 005f7bd5
    MOV EBP,dword ptr [EDI + 0x8]       ; 005f7bd7
    ADD EBX,EDX                         ; 005f7bda
    ADD EAX,EBP                         ; 005f7bdc
    SUB EBX,EAX                         ; 005f7bde
    MOV EAX,EDX                         ; 005f7be0
    MOV EDX,dword ptr [ECX]             ; 005f7be2
    SUB EAX,EDX                         ; 005f7be4
    MOV EDX,EAX                         ; 005f7be6
    CMP EDX,EBX                         ; 005f7be8
    JGE 0x005f7bfe                      ; 005f7bea
        ;   XREF to: 005f7bfe (CONDITIONAL_JUMP)  ; LAB_005f7bfe
    NEG EBX                             ; 005f7bec
    CMP EDX,EBX                         ; 005f7bee
    JLE 0x005f7c05                      ; 005f7bf0
        ;   XREF to: 005f7c05 (CONDITIONAL_JUMP)  ; LAB_005f7c05
    NEG EBX                             ; 005f7bf2
    XOR EAX,EAX                         ; 005f7bf4
    SAR EDX,0x1                         ; 005f7bf6
    RCR EAX,0x1                         ; 005f7bf8
    IDIV EBX                            ; 005f7bfa
    JMP 0x005f7c0c                      ; 005f7bfc
        ;   XREF to: 005f7c0c (UNCONDITIONAL_JUMP)  ; LAB_005f7c0c
    MOV EAX,0x7fffffff                  ; 005f7bfe
        ;   Label: LAB_005f7bfe
    JMP 0x005f7c0c                      ; 005f7c03
        ;   XREF to: 005f7c0c (UNCONDITIONAL_JUMP)  ; LAB_005f7c0c
    NEG EBX                             ; 005f7c05
        ;   Label: LAB_005f7c05
    MOV EAX,0x80000000                  ; 005f7c07
    MOV EBX,EAX                         ; 005f7c0c
        ;   Label: LAB_005f7c0c
    MOV EBP,dword ptr [ECX + 0x8]       ; 005f7c0e
    MOV EAX,dword ptr [EDI + 0x8]       ; 005f7c11
    MOV EDX,EBX                         ; 005f7c14
    SUB EAX,EBP                         ; 005f7c16
    IMUL EDX                            ; 005f7c18
    ADD EAX,EAX                         ; 005f7c1a
    ADC EDX,EDX                         ; 005f7c1c
    MOV EAX,EDX                         ; 005f7c1e
    MOV EDX,dword ptr [ECX + 0x8]       ; 005f7c20
    ADD EAX,EDX                         ; 005f7c23
    MOV dword ptr [ESI + 0x8],EAX       ; 005f7c25
    MOV dword ptr [ESI],EAX             ; 005f7c28
    MOV EAX,dword ptr [EDI + 0x4]       ; 005f7c2a
    SUB EAX,dword ptr [ECX + 0x4]       ; 005f7c2d
    MOV EDX,EBX                         ; 005f7c30
    IMUL EDX                            ; 005f7c32
    ADD EAX,EAX                         ; 005f7c34
    ADC EDX,EDX                         ; 005f7c36
    MOV EAX,EDX                         ; 005f7c38
    MOV EDX,dword ptr [ECX + 0x4]       ; 005f7c3a
    ADD EAX,EDX                         ; 005f7c3d
    MOV dword ptr [ESI + 0x4],EAX       ; 005f7c3f
    MOV AH,byte ptr [0x02d052a0]        ; 005f7c42 | g_RenderStateFlags
    MOV dword ptr [ESI + 0x10],0xffffffff ; 005f7c48
    TEST AH,0x4                         ; 005f7c4f
    JNZ 0x005f7c59                      ; 005f7c52
        ;   XREF to: 005f7c59 (CONDITIONAL_JUMP)  ; LAB_005f7c59
    POP EBP                             ; 005f7c54
    POP EDI                             ; 005f7c55
    POP ESI                             ; 005f7c56
    POP EBX                             ; 005f7c57
    RET                                 ; 005f7c58
    MOV EAX,dword ptr [EDI + 0x20]      ; 005f7c59
        ;   Label: LAB_005f7c59
    MOV EDI,dword ptr [ECX + 0x20]      ; 005f7c5c
    MOV EDX,EBX                         ; 005f7c5f
    SUB EAX,EDI                         ; 005f7c61
    IMUL EDX                            ; 005f7c63
    ADD EAX,EAX                         ; 005f7c65
    ADC EDX,EDX                         ; 005f7c67
    MOV EAX,EDX                         ; 005f7c69
    MOV EDX,dword ptr [ECX + 0x20]      ; 005f7c6b
    ADD EAX,EDX                         ; 005f7c6e
    MOV dword ptr [ESI + 0x20],EAX      ; 005f7c70
    POP EBP                             ; 005f7c73
    POP EDI                             ; 005f7c74
    POP ESI                             ; 005f7c75
    POP EBX                             ; 005f7c76
    RET                                 ; 005f7c77

