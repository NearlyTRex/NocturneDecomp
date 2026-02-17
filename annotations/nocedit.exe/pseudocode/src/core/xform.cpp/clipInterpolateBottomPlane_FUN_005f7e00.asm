; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_a
; SRenderVertex *  Stack[0x8]:4   vertex_b
; SRenderVertex *  Stack[0xc]:4   vertex_out
;
; XREF[2]:
;   core_xform.cpp_clipPolygonStage4_FUN_005f8330 at 005f840c
;   core_xform.cpp_transformAndClipGeometry_FUN_005f8550 at 005f8bb9
;
; Referenced Globals:
;   _BIT_INTEGER32 g_RenderStateFlags
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7e00
        ;   Label: core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
    PUSH ESI                            ; 005f7e01
    PUSH EDI                            ; 005f7e02
    PUSH EBP                            ; 005f7e03
    MOV ESI,dword ptr [ESP + 0x14]      ; 005f7e04
    MOV EBP,dword ptr [ESP + 0x18]      ; 005f7e08
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005f7e0c
    MOV EDX,dword ptr [ESI + 0x4]       ; 005f7e10
    MOV ECX,dword ptr [ESI + 0x8]       ; 005f7e13
    MOV EAX,dword ptr [EBP + 0x4]       ; 005f7e16
    MOV EBX,dword ptr [EBP + 0x8]       ; 005f7e19
    ADD EDX,ECX                         ; 005f7e1c
    ADD EAX,EBX                         ; 005f7e1e
    MOV EBX,EDX                         ; 005f7e20
    SUB EBX,EAX                         ; 005f7e22
    CMP EDX,EBX                         ; 005f7e24
    JGE 0x005f7e3a                      ; 005f7e26
        ;   XREF to: 005f7e3a (CONDITIONAL_JUMP)  ; LAB_005f7e3a
    NEG EBX                             ; 005f7e28
    CMP EDX,EBX                         ; 005f7e2a
    JLE 0x005f7e41                      ; 005f7e2c
        ;   XREF to: 005f7e41 (CONDITIONAL_JUMP)  ; LAB_005f7e41
    NEG EBX                             ; 005f7e2e
    XOR EAX,EAX                         ; 005f7e30
    SAR EDX,0x1                         ; 005f7e32
    RCR EAX,0x1                         ; 005f7e34
    IDIV EBX                            ; 005f7e36
    JMP 0x005f7e48                      ; 005f7e38
        ;   XREF to: 005f7e48 (UNCONDITIONAL_JUMP)  ; LAB_005f7e48
    MOV EAX,0x7fffffff                  ; 005f7e3a
        ;   Label: LAB_005f7e3a
    JMP 0x005f7e48                      ; 005f7e3f
        ;   XREF to: 005f7e48 (UNCONDITIONAL_JUMP)  ; LAB_005f7e48
    NEG EBX                             ; 005f7e41
        ;   Label: LAB_005f7e41
    MOV EAX,0x80000000                  ; 005f7e43
    MOV ECX,EAX                         ; 005f7e48
        ;   Label: LAB_005f7e48
    MOV EDX,dword ptr [ESI + 0x8]       ; 005f7e4a
    MOV EAX,dword ptr [EBP + 0x8]       ; 005f7e4d
    SUB EAX,EDX                         ; 005f7e50
    MOV EDX,ECX                         ; 005f7e52
    IMUL EDX                            ; 005f7e54
    ADD EAX,EAX                         ; 005f7e56
    ADC EDX,EDX                         ; 005f7e58
    MOV EAX,EDX                         ; 005f7e5a
    MOV EDX,dword ptr [ESI + 0x8]       ; 005f7e5c
    ADD EAX,EDX                         ; 005f7e5f
    MOV dword ptr [EDI + 0x8],EAX       ; 005f7e61
    MOV EBX,EAX                         ; 005f7e64
    MOV dword ptr [EDI + 0x4],EAX       ; 005f7e66
    NEG EBX                             ; 005f7e69
    MOV dword ptr [EDI + 0x4],EBX       ; 005f7e6b
    MOV EAX,dword ptr [EBP]             ; 005f7e6e
    SUB EAX,dword ptr [ESI]             ; 005f7e71
    MOV EDX,ECX                         ; 005f7e73
    IMUL EDX                            ; 005f7e75
    ADD EAX,EAX                         ; 005f7e77
    ADC EDX,EDX                         ; 005f7e79
    MOV EAX,EDX                         ; 005f7e7b
    MOV EDX,dword ptr [ESI]             ; 005f7e7d
    ADD EAX,EDX                         ; 005f7e7f
    MOV dword ptr [EDI],EAX             ; 005f7e81
    MOV AH,byte ptr [0x02d052a0]        ; 005f7e83 | g_RenderStateFlags
    MOV dword ptr [EDI + 0x10],0xffffffff ; 005f7e89
    TEST AH,0x4                         ; 005f7e90
    JNZ 0x005f7e9a                      ; 005f7e93
        ;   XREF to: 005f7e9a (CONDITIONAL_JUMP)  ; LAB_005f7e9a
    POP EBP                             ; 005f7e95
    POP EDI                             ; 005f7e96
    POP ESI                             ; 005f7e97
    POP EBX                             ; 005f7e98
    RET                                 ; 005f7e99
    MOV EAX,dword ptr [EBP + 0x20]      ; 005f7e9a
        ;   Label: LAB_005f7e9a
    MOV EBX,dword ptr [ESI + 0x20]      ; 005f7e9d
    MOV EDX,ECX                         ; 005f7ea0
    SUB EAX,EBX                         ; 005f7ea2
    IMUL EDX                            ; 005f7ea4
    ADD EAX,EAX                         ; 005f7ea6
    ADC EDX,EDX                         ; 005f7ea8
    MOV EAX,EDX                         ; 005f7eaa
    MOV EDX,dword ptr [ESI + 0x20]      ; 005f7eac
    ADD EAX,EDX                         ; 005f7eaf
    MOV dword ptr [EDI + 0x20],EAX      ; 005f7eb1
    POP EBP                             ; 005f7eb4
    POP EDI                             ; 005f7eb5
    POP ESI                             ; 005f7eb6
    POP EBX                             ; 005f7eb7
    RET                                 ; 005f7eb8

