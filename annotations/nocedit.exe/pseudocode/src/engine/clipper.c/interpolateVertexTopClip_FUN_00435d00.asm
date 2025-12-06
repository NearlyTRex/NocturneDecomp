; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[5]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70 at 00407e4c
;   engine_3d.c_clipAndDrawLine3D_FUN_00408070 at 0040814c
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 at 00436f75
;   engine_clipper.c_clipPolygonTopPlane_FUN_004362e0 at 004363a9
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 at 0048cce3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435d00
        ;   Label: engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
    PUSH ESI                            ; 00435d01
    PUSH EDI                            ; 00435d02
    PUSH EBP                            ; 00435d03
    MOV ESI,dword ptr [ESP + 0x14]      ; 00435d04
    MOV EBP,dword ptr [ESP + 0x18]      ; 00435d08
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00435d0c
    MOV EDX,dword ptr [ESI + 0x4]       ; 00435d10
    MOV ECX,dword ptr [ESI + 0x8]       ; 00435d13
    MOV EBX,dword ptr [EBP + 0x8]       ; 00435d16
    ADD EDX,ECX                         ; 00435d19
    MOV ECX,dword ptr [EBP + 0x4]       ; 00435d1b
    ADD ECX,EBX                         ; 00435d1e
    MOV EBX,EDX                         ; 00435d20
    SUB EBX,ECX                         ; 00435d22
    CMP EDX,EBX                         ; 00435d24
    JGE 0x00435d3a                      ; 00435d26 | LAB_00435d3a
        ;   XREF to: 00435d3a (CONDITIONAL_JUMP)
    NEG EBX                             ; 00435d28
    CMP EDX,EBX                         ; 00435d2a
    JLE 0x00435d41                      ; 00435d2c | LAB_00435d41
        ;   XREF to: 00435d41 (CONDITIONAL_JUMP)
    NEG EBX                             ; 00435d2e
    XOR EAX,EAX                         ; 00435d30
    SAR EDX,0x1                         ; 00435d32
    RCR EAX,0x1                         ; 00435d34
    IDIV EBX                            ; 00435d36
    JMP 0x00435d48                      ; 00435d38 | LAB_00435d48
        ;   XREF to: 00435d48 (UNCONDITIONAL_JUMP)
    MOV EAX,0x7fffffff                  ; 00435d3a
        ;   Label: LAB_00435d3a
    JMP 0x00435d48                      ; 00435d3f | LAB_00435d48
        ;   XREF to: 00435d48 (UNCONDITIONAL_JUMP)
    NEG EBX                             ; 00435d41
        ;   Label: LAB_00435d41
    MOV EAX,0x80000000                  ; 00435d43
    MOV ECX,EAX                         ; 00435d48
        ;   Label: LAB_00435d48
    MOV EDX,dword ptr [EBP + 0x8]       ; 00435d4a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00435d4d
    SUB EDX,EAX                         ; 00435d50
    MOV EAX,EDX                         ; 00435d52
    MOV EDX,ECX                         ; 00435d54
    IMUL EDX                            ; 00435d56
    ADD EAX,EAX                         ; 00435d58
    ADC EDX,EDX                         ; 00435d5a
    MOV EAX,EDX                         ; 00435d5c
    MOV EDX,dword ptr [ESI + 0x8]       ; 00435d5e
    ADD EAX,EDX                         ; 00435d61
    MOV dword ptr [EDI + 0x8],EAX       ; 00435d63
    MOV EDX,EAX                         ; 00435d66
    MOV dword ptr [EDI + 0x4],EAX       ; 00435d68
    NEG EDX                             ; 00435d6b
    MOV dword ptr [EDI + 0x4],EDX       ; 00435d6d
    MOV EAX,dword ptr [EBP]             ; 00435d70
    MOV EBX,dword ptr [ESI]             ; 00435d73
    MOV EDX,ECX                         ; 00435d75
    SUB EAX,EBX                         ; 00435d77
    IMUL EDX                            ; 00435d79
    ADD EAX,EAX                         ; 00435d7b
    ADC EDX,EDX                         ; 00435d7d
    MOV EAX,EDX                         ; 00435d7f
    MOV EDX,dword ptr [ESI]             ; 00435d81
    ADD EAX,EDX                         ; 00435d83
    MOV dword ptr [EDI],EAX             ; 00435d85
    MOV EDX,dword ptr [EBP + 0x20]      ; 00435d87
    MOV EAX,dword ptr [ESI + 0x20]      ; 00435d8a
    SUB EDX,EAX                         ; 00435d8d
    MOV EAX,EDX                         ; 00435d8f
    MOV EDX,ECX                         ; 00435d91
    IMUL EDX                            ; 00435d93
    ADD EAX,EAX                         ; 00435d95
    ADC EDX,EDX                         ; 00435d97
    MOV EAX,EDX                         ; 00435d99
    MOV EDX,dword ptr [ESI + 0x20]      ; 00435d9b
    ADD EAX,EDX                         ; 00435d9e
    MOV dword ptr [EDI + 0x20],EAX      ; 00435da0
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00435da3
    MOV EBX,dword ptr [ESI + 0x2c]      ; 00435da6
    MOV EDX,ECX                         ; 00435da9
    SUB EAX,EBX                         ; 00435dab
    IMUL EDX                            ; 00435dad
    ADD EAX,EAX                         ; 00435daf
    ADC EDX,EDX                         ; 00435db1
    MOV EAX,EDX                         ; 00435db3
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00435db5
    ADD EAX,EDX                         ; 00435db8
    MOV dword ptr [EDI + 0x2c],EAX      ; 00435dba
    MOV EDX,dword ptr [EBP + 0x18]      ; 00435dbd
    MOV EAX,dword ptr [ESI + 0x18]      ; 00435dc0
    SUB EDX,EAX                         ; 00435dc3
    MOV EAX,EDX                         ; 00435dc5
    MOV EDX,ECX                         ; 00435dc7
    IMUL EDX                            ; 00435dc9
    ADD EAX,EAX                         ; 00435dcb
    ADC EDX,EDX                         ; 00435dcd
    MOV EAX,EDX                         ; 00435dcf
    MOV EDX,dword ptr [ESI + 0x18]      ; 00435dd1
    ADD EAX,EDX                         ; 00435dd4
    MOV dword ptr [EDI + 0x18],EAX      ; 00435dd6
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00435dd9
    SUB EAX,dword ptr [ESI + 0x1c]      ; 00435ddc
    MOV EDX,ECX                         ; 00435ddf
    IMUL EDX                            ; 00435de1
    ADD EAX,EAX                         ; 00435de3
    ADC EDX,EDX                         ; 00435de5
    MOV EAX,EDX                         ; 00435de7
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00435de9
    MOV dword ptr [EDI + 0x10],0xffffffff ; 00435dec
    ADD EAX,EDX                         ; 00435df3
    MOV dword ptr [EDI + 0x1c],EAX      ; 00435df5
    POP EBP                             ; 00435df8
    POP EDI                             ; 00435df9
    POP ESI                             ; 00435dfa
    POP EBX                             ; 00435dfb
    RET                                 ; 00435dfc

