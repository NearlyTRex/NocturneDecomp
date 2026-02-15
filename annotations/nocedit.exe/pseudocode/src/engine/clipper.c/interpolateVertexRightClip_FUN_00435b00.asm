; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[5]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70 at 00407de6
;   engine_3d.c_clipAndDrawLine3D_FUN_00408070 at 004080e6
;   engine_clipper.c_clipPolygonRightPlane_FUN_00436060 at 00436127
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 at 00436e17
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 at 0048cbb7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435b00
        ;   Label: engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
    PUSH ESI                            ; 00435b01
    PUSH EDI                            ; 00435b02
    PUSH EBP                            ; 00435b03
    MOV ESI,dword ptr [ESP + 0x14]      ; 00435b04
    MOV EBP,dword ptr [ESP + 0x18]      ; 00435b08
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00435b0c
    MOV ECX,dword ptr [ESI]             ; 00435b10
    ADD ECX,dword ptr [ESI + 0x8]       ; 00435b12
    MOV EAX,dword ptr [EBP]             ; 00435b15
    MOV EBX,ECX                         ; 00435b18
    MOV EDX,dword ptr [EBP + 0x8]       ; 00435b1a
    SUB EBX,EAX                         ; 00435b1d
    SUB EBX,EDX                         ; 00435b1f
    MOV EDX,ECX                         ; 00435b21
    CMP EDX,EBX                         ; 00435b23
    JGE 0x00435b39                      ; 00435b25
        ;   XREF to: 00435b39 (CONDITIONAL_JUMP)  ; LAB_00435b39
    NEG EBX                             ; 00435b27
    CMP EDX,EBX                         ; 00435b29
    JLE 0x00435b40                      ; 00435b2b
        ;   XREF to: 00435b40 (CONDITIONAL_JUMP)  ; LAB_00435b40
    NEG EBX                             ; 00435b2d
    XOR EAX,EAX                         ; 00435b2f
    SAR EDX,0x1                         ; 00435b31
    RCR EAX,0x1                         ; 00435b33
    IDIV EBX                            ; 00435b35
    JMP 0x00435b47                      ; 00435b37
        ;   XREF to: 00435b47 (UNCONDITIONAL_JUMP)  ; LAB_00435b47
    MOV EAX,0x7fffffff                  ; 00435b39
        ;   Label: LAB_00435b39
    JMP 0x00435b47                      ; 00435b3e
        ;   XREF to: 00435b47 (UNCONDITIONAL_JUMP)  ; LAB_00435b47
    NEG EBX                             ; 00435b40
        ;   Label: LAB_00435b40
    MOV EAX,0x80000000                  ; 00435b42
    MOV ECX,EAX                         ; 00435b47
        ;   Label: LAB_00435b47
    MOV EBX,dword ptr [ESI + 0x8]       ; 00435b49
    MOV EAX,dword ptr [EBP + 0x8]       ; 00435b4c
    MOV EDX,ECX                         ; 00435b4f
    SUB EAX,EBX                         ; 00435b51
    IMUL EDX                            ; 00435b53
    ADD EAX,EAX                         ; 00435b55
    ADC EDX,EDX                         ; 00435b57
    MOV EAX,EDX                         ; 00435b59
    MOV EBX,dword ptr [ESI + 0x8]       ; 00435b5b
    ADD EAX,EBX                         ; 00435b5e
    MOV dword ptr [EDI + 0x8],EAX       ; 00435b60
    MOV dword ptr [EDI],EAX             ; 00435b63
    NEG EAX                             ; 00435b65
    MOV dword ptr [EDI],EAX             ; 00435b67
    MOV EAX,dword ptr [EBP + 0x4]       ; 00435b69
    SUB EAX,dword ptr [ESI + 0x4]       ; 00435b6c
    MOV EDX,ECX                         ; 00435b6f
    IMUL EDX                            ; 00435b71
    ADD EAX,EAX                         ; 00435b73
    ADC EDX,EDX                         ; 00435b75
    MOV EAX,EDX                         ; 00435b77
    MOV EBX,dword ptr [ESI + 0x4]       ; 00435b79
    ADD EAX,EBX                         ; 00435b7c
    MOV dword ptr [EDI + 0x4],EAX       ; 00435b7e
    MOV EAX,dword ptr [EBP + 0x20]      ; 00435b81
    MOV EBX,dword ptr [ESI + 0x20]      ; 00435b84
    MOV EDX,ECX                         ; 00435b87
    SUB EAX,EBX                         ; 00435b89
    IMUL EDX                            ; 00435b8b
    ADD EAX,EAX                         ; 00435b8d
    ADC EDX,EDX                         ; 00435b8f
    MOV EAX,EDX                         ; 00435b91
    MOV EBX,dword ptr [ESI + 0x20]      ; 00435b93
    ADD EAX,EBX                         ; 00435b96
    MOV dword ptr [EDI + 0x20],EAX      ; 00435b98
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00435b9b
    SUB EAX,dword ptr [ESI + 0x2c]      ; 00435b9e
    MOV EDX,ECX                         ; 00435ba1
    IMUL EDX                            ; 00435ba3
    ADD EAX,EAX                         ; 00435ba5
    ADC EDX,EDX                         ; 00435ba7
    MOV EAX,EDX                         ; 00435ba9
    MOV EBX,dword ptr [ESI + 0x2c]      ; 00435bab
    ADD EAX,EBX                         ; 00435bae
    MOV dword ptr [EDI + 0x2c],EAX      ; 00435bb0
    MOV EAX,dword ptr [EBP + 0x18]      ; 00435bb3
    MOV EBX,dword ptr [ESI + 0x18]      ; 00435bb6
    MOV EDX,ECX                         ; 00435bb9
    SUB EAX,EBX                         ; 00435bbb
    IMUL EDX                            ; 00435bbd
    ADD EAX,EAX                         ; 00435bbf
    ADC EDX,EDX                         ; 00435bc1
    MOV EAX,EDX                         ; 00435bc3
    MOV EBX,dword ptr [ESI + 0x18]      ; 00435bc5
    ADD EAX,EBX                         ; 00435bc8
    MOV dword ptr [EDI + 0x18],EAX      ; 00435bca
    MOV EBP,dword ptr [EBP + 0x1c]      ; 00435bcd
    SUB EBP,dword ptr [ESI + 0x1c]      ; 00435bd0
    MOV EDX,ECX                         ; 00435bd3
    MOV EAX,EBP                         ; 00435bd5
    IMUL EDX                            ; 00435bd7
    ADD EAX,EAX                         ; 00435bd9
    ADC EDX,EDX                         ; 00435bdb
    MOV EAX,EDX                         ; 00435bdd
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00435bdf
    MOV dword ptr [EDI + 0x10],0xffffffff ; 00435be2
    ADD EAX,ECX                         ; 00435be9
    MOV dword ptr [EDI + 0x1c],EAX      ; 00435beb
    POP EBP                             ; 00435bee
    POP EDI                             ; 00435bef
    POP ESI                             ; 00435bf0
    POP EBX                             ; 00435bf1
    RET                                 ; 00435bf2

