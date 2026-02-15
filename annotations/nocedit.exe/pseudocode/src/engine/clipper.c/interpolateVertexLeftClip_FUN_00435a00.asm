; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[5]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70 at 00407db1
;   engine_3d.c_clipAndDrawLine3D_FUN_00408070 at 004080b1
;   engine_clipper.c_clipPolygonLeftPlane_FUN_00435f20 at 00435fe1
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 at 00436d68
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 at 0048cb84
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435a00
        ;   Label: engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
    PUSH ESI                            ; 00435a01
    PUSH EDI                            ; 00435a02
    PUSH EBP                            ; 00435a03
    MOV ECX,dword ptr [ESP + 0x14]      ; 00435a04
    MOV EDI,dword ptr [ESP + 0x18]      ; 00435a08
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00435a0c
    MOV EBX,dword ptr [EDI]             ; 00435a10
    MOV EDX,dword ptr [ECX + 0x8]       ; 00435a12
    MOV EAX,dword ptr [ECX]             ; 00435a15
    MOV EBP,dword ptr [EDI + 0x8]       ; 00435a17
    ADD EBX,EDX                         ; 00435a1a
    ADD EAX,EBP                         ; 00435a1c
    SUB EBX,EAX                         ; 00435a1e
    MOV EAX,EDX                         ; 00435a20
    MOV EDX,dword ptr [ECX]             ; 00435a22
    SUB EAX,EDX                         ; 00435a24
    MOV EDX,EAX                         ; 00435a26
    CMP EDX,EBX                         ; 00435a28
    JGE 0x00435a3e                      ; 00435a2a
        ;   XREF to: 00435a3e (CONDITIONAL_JUMP)  ; LAB_00435a3e
    NEG EBX                             ; 00435a2c
    CMP EDX,EBX                         ; 00435a2e
    JLE 0x00435a45                      ; 00435a30
        ;   XREF to: 00435a45 (CONDITIONAL_JUMP)  ; LAB_00435a45
    NEG EBX                             ; 00435a32
    XOR EAX,EAX                         ; 00435a34
    SAR EDX,0x1                         ; 00435a36
    RCR EAX,0x1                         ; 00435a38
    IDIV EBX                            ; 00435a3a
    JMP 0x00435a4c                      ; 00435a3c
        ;   XREF to: 00435a4c (UNCONDITIONAL_JUMP)  ; LAB_00435a4c
    MOV EAX,0x7fffffff                  ; 00435a3e
        ;   Label: LAB_00435a3e
    JMP 0x00435a4c                      ; 00435a43
        ;   XREF to: 00435a4c (UNCONDITIONAL_JUMP)  ; LAB_00435a4c
    NEG EBX                             ; 00435a45
        ;   Label: LAB_00435a45
    MOV EAX,0x80000000                  ; 00435a47
    MOV EBX,EAX                         ; 00435a4c
        ;   Label: LAB_00435a4c
    MOV EBP,dword ptr [ECX + 0x8]       ; 00435a4e
    MOV EAX,dword ptr [EDI + 0x8]       ; 00435a51
    MOV EDX,EBX                         ; 00435a54
    SUB EAX,EBP                         ; 00435a56
    IMUL EDX                            ; 00435a58
    ADD EAX,EAX                         ; 00435a5a
    ADC EDX,EDX                         ; 00435a5c
    MOV EAX,EDX                         ; 00435a5e
    MOV EDX,dword ptr [ECX + 0x8]       ; 00435a60
    ADD EAX,EDX                         ; 00435a63
    MOV dword ptr [ESI + 0x8],EAX       ; 00435a65
    MOV dword ptr [ESI],EAX             ; 00435a68
    MOV EAX,dword ptr [EDI + 0x4]       ; 00435a6a
    SUB EAX,dword ptr [ECX + 0x4]       ; 00435a6d
    MOV EDX,EBX                         ; 00435a70
    IMUL EDX                            ; 00435a72
    ADD EAX,EAX                         ; 00435a74
    ADC EDX,EDX                         ; 00435a76
    MOV EAX,EDX                         ; 00435a78
    MOV EDX,dword ptr [ECX + 0x4]       ; 00435a7a
    ADD EAX,EDX                         ; 00435a7d
    MOV dword ptr [ESI + 0x4],EAX       ; 00435a7f
    MOV EAX,dword ptr [EDI + 0x18]      ; 00435a82
    MOV EBP,dword ptr [ECX + 0x18]      ; 00435a85
    MOV EDX,EBX                         ; 00435a88
    SUB EAX,EBP                         ; 00435a8a
    IMUL EDX                            ; 00435a8c
    ADD EAX,EAX                         ; 00435a8e
    ADC EDX,EDX                         ; 00435a90
    MOV EAX,EDX                         ; 00435a92
    MOV EDX,dword ptr [ECX + 0x18]      ; 00435a94
    ADD EAX,EDX                         ; 00435a97
    MOV dword ptr [ESI + 0x18],EAX      ; 00435a99
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00435a9c
    SUB EAX,dword ptr [ECX + 0x1c]      ; 00435a9f
    MOV EDX,EBX                         ; 00435aa2
    IMUL EDX                            ; 00435aa4
    ADD EAX,EAX                         ; 00435aa6
    ADC EDX,EDX                         ; 00435aa8
    MOV EAX,EDX                         ; 00435aaa
    MOV EDX,dword ptr [ECX + 0x1c]      ; 00435aac
    ADD EAX,EDX                         ; 00435aaf
    MOV dword ptr [ESI + 0x1c],EAX      ; 00435ab1
    MOV EAX,dword ptr [EDI + 0x20]      ; 00435ab4
    MOV EBP,dword ptr [ECX + 0x20]      ; 00435ab7
    MOV EDX,EBX                         ; 00435aba
    SUB EAX,EBP                         ; 00435abc
    IMUL EDX                            ; 00435abe
    ADD EAX,EAX                         ; 00435ac0
    ADC EDX,EDX                         ; 00435ac2
    MOV EAX,EDX                         ; 00435ac4
    MOV EDX,dword ptr [ECX + 0x20]      ; 00435ac6
    ADD EAX,EDX                         ; 00435ac9
    MOV dword ptr [ESI + 0x20],EAX      ; 00435acb
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00435ace
    SUB EAX,dword ptr [ECX + 0x2c]      ; 00435ad1
    MOV EDX,EBX                         ; 00435ad4
    IMUL EDX                            ; 00435ad6
    ADD EAX,EAX                         ; 00435ad8
    ADC EDX,EDX                         ; 00435ada
    MOV EAX,EDX                         ; 00435adc
    MOV EDX,dword ptr [ECX + 0x2c]      ; 00435ade
    MOV dword ptr [ESI + 0x10],0xffffffff ; 00435ae1
    ADD EDX,EAX                         ; 00435ae8
    MOV dword ptr [ESI + 0x2c],EDX      ; 00435aea
    POP EBP                             ; 00435aed
    POP EDI                             ; 00435aee
    POP ESI                             ; 00435aef
    POP EBX                             ; 00435af0
    RET                                 ; 00435af1

