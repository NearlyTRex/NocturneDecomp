; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[5]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70 at 00407e17
;   engine_3d.c_clipAndDrawLine3D_FUN_00408070 at 00408117
;   engine_clipper.c_clipPolygonBottomPlane_FUN_004361a0 at 00436263
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 at 00436ec6
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 at 0048cbe7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435c00
        ;   Label: engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
    PUSH ESI                            ; 00435c01
    PUSH EDI                            ; 00435c02
    PUSH EBP                            ; 00435c03
    MOV ECX,dword ptr [ESP + 0x14]      ; 00435c04
    MOV EDI,dword ptr [ESP + 0x18]      ; 00435c08
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00435c0c
    MOV EBX,dword ptr [EDI + 0x4]       ; 00435c10
    MOV EDX,dword ptr [ECX + 0x8]       ; 00435c13
    MOV EAX,dword ptr [ECX + 0x4]       ; 00435c16
    MOV EBP,dword ptr [EDI + 0x8]       ; 00435c19
    ADD EBX,EDX                         ; 00435c1c
    ADD EAX,EBP                         ; 00435c1e
    SUB EBX,EAX                         ; 00435c20
    MOV EAX,EDX                         ; 00435c22
    MOV EDX,dword ptr [ECX + 0x4]       ; 00435c24
    SUB EAX,EDX                         ; 00435c27
    MOV EDX,EAX                         ; 00435c29
    CMP EDX,EBX                         ; 00435c2b
    JGE 0x00435c41                      ; 00435c2d
        ;   XREF to: 00435c41 (CONDITIONAL_JUMP)  ; LAB_00435c41
    NEG EBX                             ; 00435c2f
    CMP EDX,EBX                         ; 00435c31
    JLE 0x00435c48                      ; 00435c33
        ;   XREF to: 00435c48 (CONDITIONAL_JUMP)  ; LAB_00435c48
    NEG EBX                             ; 00435c35
    XOR EAX,EAX                         ; 00435c37
    SAR EDX,0x1                         ; 00435c39
    RCR EAX,0x1                         ; 00435c3b
    IDIV EBX                            ; 00435c3d
    JMP 0x00435c4f                      ; 00435c3f
        ;   XREF to: 00435c4f (UNCONDITIONAL_JUMP)  ; LAB_00435c4f
    MOV EAX,0x7fffffff                  ; 00435c41
        ;   Label: LAB_00435c41
    JMP 0x00435c4f                      ; 00435c46
        ;   XREF to: 00435c4f (UNCONDITIONAL_JUMP)  ; LAB_00435c4f
    NEG EBX                             ; 00435c48
        ;   Label: LAB_00435c48
    MOV EAX,0x80000000                  ; 00435c4a
    MOV EBX,EAX                         ; 00435c4f
        ;   Label: LAB_00435c4f
    MOV EBP,dword ptr [ECX + 0x8]       ; 00435c51
    MOV EAX,dword ptr [EDI + 0x8]       ; 00435c54
    MOV EDX,EBX                         ; 00435c57
    SUB EAX,EBP                         ; 00435c59
    IMUL EDX                            ; 00435c5b
    ADD EAX,EAX                         ; 00435c5d
    ADC EDX,EDX                         ; 00435c5f
    MOV EAX,EDX                         ; 00435c61
    MOV EDX,dword ptr [ECX + 0x8]       ; 00435c63
    ADD EAX,EDX                         ; 00435c66
    MOV dword ptr [ESI + 0x8],EAX       ; 00435c68
    MOV dword ptr [ESI + 0x4],EAX       ; 00435c6b
    MOV EAX,dword ptr [EDI]             ; 00435c6e
    SUB EAX,dword ptr [ECX]             ; 00435c70
    MOV EDX,EBX                         ; 00435c72
    IMUL EDX                            ; 00435c74
    ADD EAX,EAX                         ; 00435c76
    ADC EDX,EDX                         ; 00435c78
    MOV EAX,EDX                         ; 00435c7a
    MOV EDX,dword ptr [ECX]             ; 00435c7c
    ADD EAX,EDX                         ; 00435c7e
    MOV dword ptr [ESI],EAX             ; 00435c80
    MOV EAX,dword ptr [EDI + 0x20]      ; 00435c82
    MOV EBP,dword ptr [ECX + 0x20]      ; 00435c85
    MOV EDX,EBX                         ; 00435c88
    SUB EAX,EBP                         ; 00435c8a
    IMUL EDX                            ; 00435c8c
    ADD EAX,EAX                         ; 00435c8e
    ADC EDX,EDX                         ; 00435c90
    MOV EAX,EDX                         ; 00435c92
    MOV EDX,dword ptr [ECX + 0x20]      ; 00435c94
    ADD EAX,EDX                         ; 00435c97
    MOV dword ptr [ESI + 0x20],EAX      ; 00435c99
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00435c9c
    SUB EAX,dword ptr [ECX + 0x2c]      ; 00435c9f
    MOV EDX,EBX                         ; 00435ca2
    IMUL EDX                            ; 00435ca4
    ADD EAX,EAX                         ; 00435ca6
    ADC EDX,EDX                         ; 00435ca8
    MOV EAX,EDX                         ; 00435caa
    MOV EDX,dword ptr [ECX + 0x2c]      ; 00435cac
    ADD EAX,EDX                         ; 00435caf
    MOV dword ptr [ESI + 0x2c],EAX      ; 00435cb1
    MOV EAX,dword ptr [EDI + 0x18]      ; 00435cb4
    MOV EBP,dword ptr [ECX + 0x18]      ; 00435cb7
    MOV EDX,EBX                         ; 00435cba
    SUB EAX,EBP                         ; 00435cbc
    IMUL EDX                            ; 00435cbe
    ADD EAX,EAX                         ; 00435cc0
    ADC EDX,EDX                         ; 00435cc2
    MOV EAX,EDX                         ; 00435cc4
    MOV EDX,dword ptr [ECX + 0x18]      ; 00435cc6
    ADD EAX,EDX                         ; 00435cc9
    MOV dword ptr [ESI + 0x18],EAX      ; 00435ccb
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00435cce
    SUB EAX,dword ptr [ECX + 0x1c]      ; 00435cd1
    MOV EDX,EBX                         ; 00435cd4
    IMUL EDX                            ; 00435cd6
    ADD EAX,EAX                         ; 00435cd8
    ADC EDX,EDX                         ; 00435cda
    MOV EAX,EDX                         ; 00435cdc
    MOV EDX,dword ptr [ECX + 0x1c]      ; 00435cde
    MOV dword ptr [ESI + 0x10],0xffffffff ; 00435ce1
    ADD EDX,EAX                         ; 00435ce8
    MOV dword ptr [ESI + 0x1c],EDX      ; 00435cea
    POP EBP                             ; 00435ced
    POP EDI                             ; 00435cee
    POP ESI                             ; 00435cef
    POP EBX                             ; 00435cf0
    RET                                 ; 00435cf1

