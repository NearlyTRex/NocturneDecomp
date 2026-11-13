; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[1]:
;   engine_clipper.c_clipPolygonToViewport_FUN_00433000 at 0043352f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431e10
        ;   Label: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10
    PUSH ESI                            ; 00431e11
    PUSH EDI                            ; 00431e12
    PUSH EBP                            ; 00431e13
    MOV ECX,dword ptr [ESP + 0x14]      ; 00431e14
    MOV EDI,dword ptr [ESP + 0x18]      ; 00431e18
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00431e1c
    MOV EAX,dword ptr [EDI]             ; 00431e20
    MOV EDX,dword ptr [ECX + 0x8]       ; 00431e22
    MOV EBX,dword ptr [ECX]             ; 00431e25
    MOV EBP,dword ptr [EDI + 0x8]       ; 00431e27
    ADD EAX,EDX                         ; 00431e2a
    ADD EBX,EBP                         ; 00431e2c
    SUB EAX,EBX                         ; 00431e2e
    MOV EBX,EDX                         ; 00431e30
    MOV EDX,dword ptr [ECX]             ; 00431e32
    SUB EBX,EDX                         ; 00431e34
    MOV EDX,EBX                         ; 00431e36
    MOV EBX,EAX                         ; 00431e38
    CMP EDX,EBX                         ; 00431e3a
    JGE 0x00431e50                      ; 00431e3c
        ;   XREF to: 00431e50 (CONDITIONAL_JUMP)  ; LAB_00431e50
    NEG EBX                             ; 00431e3e
    CMP EDX,EBX                         ; 00431e40
    JLE 0x00431e57                      ; 00431e42
        ;   XREF to: 00431e57 (CONDITIONAL_JUMP)  ; LAB_00431e57
    NEG EBX                             ; 00431e44
    XOR EAX,EAX                         ; 00431e46
    SAR EDX,0x1                         ; 00431e48
    RCR EAX,0x1                         ; 00431e4a
    IDIV EBX                            ; 00431e4c
    JMP 0x00431e5e                      ; 00431e4e
        ;   XREF to: 00431e5e (UNCONDITIONAL_JUMP)  ; LAB_00431e5e
    MOV EAX,0x7fffffff                  ; 00431e50
        ;   Label: LAB_00431e50
    JMP 0x00431e5e                      ; 00431e55
        ;   XREF to: 00431e5e (UNCONDITIONAL_JUMP)  ; LAB_00431e5e
    NEG EBX                             ; 00431e57
        ;   Label: LAB_00431e57
    MOV EAX,0x80000000                  ; 00431e59
    MOV EBX,EAX                         ; 00431e5e
        ;   Label: LAB_00431e5e
    MOV EBP,dword ptr [ECX + 0x8]       ; 00431e60
    MOV EAX,dword ptr [EDI + 0x8]       ; 00431e63
    MOV EDX,EBX                         ; 00431e66
    SUB EAX,EBP                         ; 00431e68
    IMUL EDX                            ; 00431e6a
    ADD EAX,EAX                         ; 00431e6c
    ADC EDX,EDX                         ; 00431e6e
    MOV EAX,EDX                         ; 00431e70
    MOV EDX,dword ptr [ECX + 0x8]       ; 00431e72
    ADD EAX,EDX                         ; 00431e75
    MOV dword ptr [ESI + 0x8],EAX       ; 00431e77
    MOV dword ptr [ESI],EAX             ; 00431e7a
    MOV EAX,dword ptr [EDI + 0x4]       ; 00431e7c
    SUB EAX,dword ptr [ECX + 0x4]       ; 00431e7f
    MOV EDX,EBX                         ; 00431e82
    IMUL EDX                            ; 00431e84
    ADD EAX,EAX                         ; 00431e86
    ADC EDX,EDX                         ; 00431e88
    MOV EAX,EDX                         ; 00431e8a
    MOV EDX,dword ptr [ECX + 0x4]       ; 00431e8c
    MOV dword ptr [ESI + 0x10],0xffffffff ; 00431e8f
    ADD EAX,EDX                         ; 00431e96
    MOV dword ptr [ESI + 0x4],EAX       ; 00431e98
    MOV EAX,dword ptr [EDI + 0x20]      ; 00431e9b
    MOV EBP,dword ptr [ECX + 0x20]      ; 00431e9e
    MOV EDX,EBX                         ; 00431ea1
    SUB EAX,EBP                         ; 00431ea3
    IMUL EDX                            ; 00431ea5
    ADD EAX,EAX                         ; 00431ea7
    ADC EDX,EDX                         ; 00431ea9
    MOV EAX,EDX                         ; 00431eab
    MOV EDX,dword ptr [ECX + 0x20]      ; 00431ead
    ADD EAX,EDX                         ; 00431eb0
    MOV dword ptr [ESI + 0x20],EAX      ; 00431eb2
    MOV EAX,dword ptr [EDI + 0x24]      ; 00431eb5
    SUB EAX,dword ptr [ECX + 0x24]      ; 00431eb8
    MOV EDX,EBX                         ; 00431ebb
    IMUL EDX                            ; 00431ebd
    ADD EAX,EAX                         ; 00431ebf
    ADC EDX,EDX                         ; 00431ec1
    MOV EAX,EDX                         ; 00431ec3
    MOV EDX,dword ptr [ECX + 0x24]      ; 00431ec5
    ADD EDX,EAX                         ; 00431ec8
    MOV dword ptr [ESI + 0x24],EDX      ; 00431eca
    MOV EAX,dword ptr [EDI + 0x28]      ; 00431ecd
    MOV EBP,dword ptr [ECX + 0x28]      ; 00431ed0
    MOV EDX,EBX                         ; 00431ed3
    SUB EAX,EBP                         ; 00431ed5
    IMUL EDX                            ; 00431ed7
    ADD EAX,EAX                         ; 00431ed9
    ADC EDX,EDX                         ; 00431edb
    MOV EAX,EDX                         ; 00431edd
    MOV EDX,dword ptr [ECX + 0x28]      ; 00431edf
    ADD EDX,EAX                         ; 00431ee2
    MOV dword ptr [ESI + 0x28],EDX      ; 00431ee4
    MOV EAX,dword ptr [EDI + 0x18]      ; 00431ee7
    SUB EAX,dword ptr [ECX + 0x18]      ; 00431eea
    MOV EDX,EBX                         ; 00431eed
    IMUL EDX                            ; 00431eef
    ADD EAX,EAX                         ; 00431ef1
    ADC EDX,EDX                         ; 00431ef3
    MOV EAX,EDX                         ; 00431ef5
    MOV EDX,dword ptr [ECX + 0x18]      ; 00431ef7
    ADD EDX,EAX                         ; 00431efa
    MOV dword ptr [ESI + 0x18],EDX      ; 00431efc
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00431eff
    MOV EBP,dword ptr [ECX + 0x1c]      ; 00431f02
    MOV EDX,EBX                         ; 00431f05
    SUB EAX,EBP                         ; 00431f07
    IMUL EDX                            ; 00431f09
    ADD EAX,EAX                         ; 00431f0b
    ADC EDX,EDX                         ; 00431f0d
    MOV EAX,EDX                         ; 00431f0f
    MOV EDX,dword ptr [ECX + 0x1c]      ; 00431f11
    ADD EDX,EAX                         ; 00431f14
    MOV dword ptr [ESI + 0x1c],EDX      ; 00431f16
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00431f19
    SUB EAX,dword ptr [ECX + 0x2c]      ; 00431f1c
    MOV EDX,EBX                         ; 00431f1f
    IMUL EDX                            ; 00431f21
    ADD EAX,EAX                         ; 00431f23
    ADC EDX,EDX                         ; 00431f25
    MOV EAX,EDX                         ; 00431f27
    MOV EDX,dword ptr [ECX + 0x2c]      ; 00431f29
    ADD EDX,EAX                         ; 00431f2c
    MOV dword ptr [ESI + 0x2c],EDX      ; 00431f2e
    POP EBP                             ; 00431f31
    POP EDI                             ; 00431f32
    POP ESI                             ; 00431f33
    POP EBX                             ; 00431f34
    RET                                 ; 00431f35

