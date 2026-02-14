; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_clipper_c_interpolateVertexNearClip_FUN_00435e00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[2]:
;   engine_clipper.c_clipPolygonNearPlane_FUN_00436420 at 0043658f
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 at 004370ec
;
; Referenced Globals:
;   int g_NearPlaneDistance = 0x7fffffff
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435e00
        ;   Label: engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
    PUSH ESI                            ; 00435e01
    PUSH EDI                            ; 00435e02
    PUSH EBP                            ; 00435e03
    MOV ESI,dword ptr [ESP + 0x14]      ; 00435e04
    MOV EDI,dword ptr [ESP + 0x18]      ; 00435e08
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00435e0c
    MOV EBX,dword ptr [EDI + 0x8]       ; 00435e10
    MOV EDX,dword ptr [ESI + 0x8]       ; 00435e13
    MOV ECX,dword ptr [ESI + 0x8]       ; 00435e16
    SUB EBX,EDX                         ; 00435e19
    MOV EDX,dword ptr [0x0066e804]      ; 00435e1b | g_NearPlaneDistance
    SUB EDX,ECX                         ; 00435e21
    CMP EDX,EBX                         ; 00435e23
    JGE 0x00435e39                      ; 00435e25
        ;   XREF to: 00435e39 (CONDITIONAL_JUMP)  ; LAB_00435e39
    NEG EBX                             ; 00435e27
    CMP EDX,EBX                         ; 00435e29
    JLE 0x00435e40                      ; 00435e2b
        ;   XREF to: 00435e40 (CONDITIONAL_JUMP)  ; LAB_00435e40
    NEG EBX                             ; 00435e2d
    XOR EAX,EAX                         ; 00435e2f
    SAR EDX,0x1                         ; 00435e31
    RCR EAX,0x1                         ; 00435e33
    IDIV EBX                            ; 00435e35
    JMP 0x00435e47                      ; 00435e37
        ;   XREF to: 00435e47 (UNCONDITIONAL_JUMP)  ; LAB_00435e47
    MOV EAX,0x7fffffff                  ; 00435e39
        ;   Label: LAB_00435e39
    JMP 0x00435e47                      ; 00435e3e
        ;   XREF to: 00435e47 (UNCONDITIONAL_JUMP)  ; LAB_00435e47
    NEG EBX                             ; 00435e40
        ;   Label: LAB_00435e40
    MOV EAX,0x80000000                  ; 00435e42
    MOV ECX,EAX                         ; 00435e47
        ;   Label: LAB_00435e47
    MOV EBX,dword ptr [ESI + 0x8]       ; 00435e49
    MOV EAX,dword ptr [EDI + 0x8]       ; 00435e4c
    MOV EDX,ECX                         ; 00435e4f
    SUB EAX,EBX                         ; 00435e51
    IMUL EDX                            ; 00435e53
    ADD EAX,EAX                         ; 00435e55
    ADC EDX,EDX                         ; 00435e57
    MOV EAX,EDX                         ; 00435e59
    MOV EBX,dword ptr [ESI + 0x8]       ; 00435e5b
    ADD EAX,EBX                         ; 00435e5e
    MOV dword ptr [EBP + 0x8],EAX       ; 00435e60
    MOV EAX,dword ptr [EDI + 0x4]       ; 00435e63
    SUB EAX,dword ptr [ESI + 0x4]       ; 00435e66
    MOV EDX,ECX                         ; 00435e69
    IMUL EDX                            ; 00435e6b
    ADD EAX,EAX                         ; 00435e6d
    ADC EDX,EDX                         ; 00435e6f
    MOV EAX,EDX                         ; 00435e71
    MOV EBX,dword ptr [ESI + 0x4]       ; 00435e73
    ADD EAX,EBX                         ; 00435e76
    MOV dword ptr [EBP + 0x4],EAX       ; 00435e78
    MOV EAX,dword ptr [EDI]             ; 00435e7b
    MOV EBX,dword ptr [ESI]             ; 00435e7d
    MOV EDX,ECX                         ; 00435e7f
    SUB EAX,EBX                         ; 00435e81
    IMUL EDX                            ; 00435e83
    ADD EAX,EAX                         ; 00435e85
    ADC EDX,EDX                         ; 00435e87
    MOV EAX,EDX                         ; 00435e89
    MOV EBX,dword ptr [ESI]             ; 00435e8b
    ADD EAX,EBX                         ; 00435e8d
    MOV dword ptr [EBP],EAX             ; 00435e8f
    MOV EAX,dword ptr [EDI + 0x20]      ; 00435e92
    SUB EAX,dword ptr [ESI + 0x20]      ; 00435e95
    MOV EDX,ECX                         ; 00435e98
    IMUL EDX                            ; 00435e9a
    ADD EAX,EAX                         ; 00435e9c
    ADC EDX,EDX                         ; 00435e9e
    MOV EAX,EDX                         ; 00435ea0
    MOV EBX,dword ptr [ESI + 0x20]      ; 00435ea2
    ADD EAX,EBX                         ; 00435ea5
    MOV dword ptr [EBP + 0x20],EAX      ; 00435ea7
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00435eaa
    MOV EBX,dword ptr [ESI + 0x2c]      ; 00435ead
    MOV EDX,ECX                         ; 00435eb0
    SUB EAX,EBX                         ; 00435eb2
    IMUL EDX                            ; 00435eb4
    ADD EAX,EAX                         ; 00435eb6
    ADC EDX,EDX                         ; 00435eb8
    MOV EAX,EDX                         ; 00435eba
    MOV EBX,dword ptr [ESI + 0x2c]      ; 00435ebc
    ADD EAX,EBX                         ; 00435ebf
    MOV dword ptr [EBP + 0x2c],EAX      ; 00435ec1
    MOV EAX,dword ptr [EDI + 0x18]      ; 00435ec4
    SUB EAX,dword ptr [ESI + 0x18]      ; 00435ec7
    MOV EDX,ECX                         ; 00435eca
    IMUL EDX                            ; 00435ecc
    ADD EAX,EAX                         ; 00435ece
    ADC EDX,EDX                         ; 00435ed0
    MOV EAX,EDX                         ; 00435ed2
    MOV EBX,dword ptr [ESI + 0x18]      ; 00435ed4
    ADD EAX,EBX                         ; 00435ed7
    MOV dword ptr [EBP + 0x18],EAX      ; 00435ed9
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00435edc
    MOV EBX,dword ptr [ESI + 0x1c]      ; 00435edf
    MOV EDX,ECX                         ; 00435ee2
    SUB EAX,EBX                         ; 00435ee4
    IMUL EDX                            ; 00435ee6
    ADD EAX,EAX                         ; 00435ee8
    ADC EDX,EDX                         ; 00435eea
    MOV EAX,EDX                         ; 00435eec
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00435eee
    MOV dword ptr [EBP + 0x10],0xffffffff ; 00435ef1
    ADD ECX,EAX                         ; 00435ef8
    MOV dword ptr [EBP + 0x1c],ECX      ; 00435efa
    POP EBP                             ; 00435efd
    POP EDI                             ; 00435efe
    POP ESI                             ; 00435eff
    POP EBX                             ; 00435f00
    RET                                 ; 00435f01

