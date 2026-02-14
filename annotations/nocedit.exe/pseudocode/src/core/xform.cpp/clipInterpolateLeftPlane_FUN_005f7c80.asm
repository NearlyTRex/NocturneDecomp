; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_a
; SRenderVertex *  Stack[0x8]:4   vertex_b
; SRenderVertex *  Stack[0xc]:4   vertex_out
;
; XREF[2]:
;   core_xform.cpp_clipPolygonStage2_FUN_005f8040 at 005f811b
;   core_xform.cpp_transformAndClipGeometry_FUN_005f8550 at 005f8a85
;
; Referenced Globals:
;   _BIT_INTEGER g_RenderStateFlags
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7c80
        ;   Label: core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80
    PUSH ESI                            ; 005f7c81
    PUSH EDI                            ; 005f7c82
    PUSH EBP                            ; 005f7c83
    MOV ESI,dword ptr [ESP + 0x14]      ; 005f7c84
    MOV EBP,dword ptr [ESP + 0x18]      ; 005f7c88
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005f7c8c
    MOV EDX,dword ptr [ESI]             ; 005f7c90
    ADD EDX,dword ptr [ESI + 0x8]       ; 005f7c92
    MOV EAX,dword ptr [EBP]             ; 005f7c95
    MOV EBX,EDX                         ; 005f7c98
    MOV ECX,dword ptr [EBP + 0x8]       ; 005f7c9a
    SUB EBX,EAX                         ; 005f7c9d
    SUB EBX,ECX                         ; 005f7c9f
    CMP EDX,EBX                         ; 005f7ca1
    JGE 0x005f7cb7                      ; 005f7ca3
        ;   XREF to: 005f7cb7 (CONDITIONAL_JUMP)  ; LAB_005f7cb7
    NEG EBX                             ; 005f7ca5
    CMP EDX,EBX                         ; 005f7ca7
    JLE 0x005f7cbe                      ; 005f7ca9
        ;   XREF to: 005f7cbe (CONDITIONAL_JUMP)  ; LAB_005f7cbe
    NEG EBX                             ; 005f7cab
    XOR EAX,EAX                         ; 005f7cad
    SAR EDX,0x1                         ; 005f7caf
    RCR EAX,0x1                         ; 005f7cb1
    IDIV EBX                            ; 005f7cb3
    JMP 0x005f7cc5                      ; 005f7cb5
        ;   XREF to: 005f7cc5 (UNCONDITIONAL_JUMP)  ; LAB_005f7cc5
    MOV EAX,0x7fffffff                  ; 005f7cb7
        ;   Label: LAB_005f7cb7
    JMP 0x005f7cc5                      ; 005f7cbc
        ;   XREF to: 005f7cc5 (UNCONDITIONAL_JUMP)  ; LAB_005f7cc5
    NEG EBX                             ; 005f7cbe
        ;   Label: LAB_005f7cbe
    MOV EAX,0x80000000                  ; 005f7cc0
    MOV ECX,EAX                         ; 005f7cc5
        ;   Label: LAB_005f7cc5
    MOV EBX,dword ptr [ESI + 0x8]       ; 005f7cc7
    MOV EAX,dword ptr [EBP + 0x8]       ; 005f7cca
    MOV EDX,ECX                         ; 005f7ccd
    SUB EAX,EBX                         ; 005f7ccf
    IMUL EDX                            ; 005f7cd1
    ADD EAX,EAX                         ; 005f7cd3
    ADC EDX,EDX                         ; 005f7cd5
    MOV EAX,EDX                         ; 005f7cd7
    MOV EDX,dword ptr [ESI + 0x8]       ; 005f7cd9
    ADD EAX,EDX                         ; 005f7cdc
    MOV dword ptr [EDI + 0x8],EAX       ; 005f7cde
    MOV dword ptr [EDI],EAX             ; 005f7ce1
    NEG EAX                             ; 005f7ce3
    MOV dword ptr [EDI],EAX             ; 005f7ce5
    MOV EAX,dword ptr [EBP + 0x4]       ; 005f7ce7
    SUB EAX,dword ptr [ESI + 0x4]       ; 005f7cea
    MOV EDX,ECX                         ; 005f7ced
    IMUL EDX                            ; 005f7cef
    ADD EAX,EAX                         ; 005f7cf1
    ADC EDX,EDX                         ; 005f7cf3
    MOV EAX,EDX                         ; 005f7cf5
    MOV EDX,dword ptr [ESI + 0x4]       ; 005f7cf7
    ADD EAX,EDX                         ; 005f7cfa
    MOV dword ptr [EDI + 0x4],EAX       ; 005f7cfc
    MOV AH,byte ptr [0x02d052a0]        ; 005f7cff | g_RenderStateFlags
    MOV dword ptr [EDI + 0x10],0xffffffff ; 005f7d05
    TEST AH,0x4                         ; 005f7d0c
    JNZ 0x005f7d16                      ; 005f7d0f
        ;   XREF to: 005f7d16 (CONDITIONAL_JUMP)  ; LAB_005f7d16
    POP EBP                             ; 005f7d11
    POP EDI                             ; 005f7d12
    POP ESI                             ; 005f7d13
    POP EBX                             ; 005f7d14
    RET                                 ; 005f7d15
    MOV EAX,dword ptr [EBP + 0x20]      ; 005f7d16
        ;   Label: LAB_005f7d16
    MOV EBX,dword ptr [ESI + 0x20]      ; 005f7d19
    MOV EDX,ECX                         ; 005f7d1c
    SUB EAX,EBX                         ; 005f7d1e
    IMUL EDX                            ; 005f7d20
    ADD EAX,EAX                         ; 005f7d22
    ADC EDX,EDX                         ; 005f7d24
    MOV EAX,EDX                         ; 005f7d26
    MOV EDX,dword ptr [ESI + 0x20]      ; 005f7d28
    ADD EAX,EDX                         ; 005f7d2b
    MOV dword ptr [EDI + 0x20],EAX      ; 005f7d2d
    POP EBP                             ; 005f7d30
    POP EDI                             ; 005f7d31
    POP ESI                             ; 005f7d32
    POP EBX                             ; 005f7d33
    RET                                 ; 005f7d34

