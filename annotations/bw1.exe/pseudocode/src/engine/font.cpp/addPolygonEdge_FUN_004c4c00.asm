; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_addPolygonEdge_FUN_004c4c00(SRenderVertex *vertex1,SRenderVertex *vertex2)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex1
; SRenderVertex *  Stack[0x8]:4   vertex2
;
; Referenced Globals:
;   int g_INT_01cc8ce8
;   int g_INT_01cc906c
;   int g_INT_01cc9070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4c00
        ;   Label: engine_font.cpp_addPolygonEdge_FUN_004c4c00
    PUSH ESI                            ; 004c4c01
    PUSH EDI                            ; 004c4c02
    PUSH EBP                            ; 004c4c03
    MOV ESI,dword ptr [ESP + 0x14]      ; 004c4c04
    MOV EDI,dword ptr [ESP + 0x18]      ; 004c4c08
    MOV EAX,dword ptr [EDI + 0x14]      ; 004c4c0c
    MOV EBX,dword ptr [ESI + 0x14]      ; 004c4c0f
    SAR EAX,0x10                        ; 004c4c12
    SAR EBX,0x10                        ; 004c4c15
    CMP EBX,EAX                         ; 004c4c18
    JZ 0x004c4d20                       ; 004c4c1a
        ;   XREF to: 004c4d20 (CONDITIONAL_JUMP)  ; LAB_004c4d20
    MOV ECX,dword ptr [EDI + 0x14]      ; 004c4c20
    CMP ECX,dword ptr [ESI + 0x14]      ; 004c4c23
    JGE 0x004c4c34                      ; 004c4c26
        ;   XREF to: 004c4c34 (CONDITIONAL_JUMP)  ; LAB_004c4c34
    MOV EDX,ESI                         ; 004c4c28
    MOV ESI,EDI                         ; 004c4c2a
    MOV EDI,EDX                         ; 004c4c2c
    MOV EDX,EBX                         ; 004c4c2e
    MOV EBX,EAX                         ; 004c4c30
    MOV EAX,EDX                         ; 004c4c32
    MOV ECX,dword ptr [0x01cc8ce8]      ; 004c4c34 | g_INT_01cc8ce8
        ;   Label: LAB_004c4c34
    SHL ECX,0x3                         ; 004c4c3a
    MOV EDX,ECX                         ; 004c4c3d
    SHL ECX,0x3                         ; 004c4c3f
    SUB ECX,EDX                         ; 004c4c42
    ADD ECX,0x1cc8cec                   ; 004c4c44
    MOV dword ptr [ECX],EBX             ; 004c4c4a
    MOV EBP,dword ptr [0x01cc906c]      ; 004c4c4c | g_INT_01cc906c
    MOV dword ptr [ECX + 0x4],EAX       ; 004c4c52
    CMP EBX,EBP                         ; 004c4c55
    JGE 0x004c4c5f                      ; 004c4c57
        ;   XREF to: 004c4c5f (CONDITIONAL_JUMP)  ; LAB_004c4c5f
    MOV dword ptr [0x01cc906c],EBX      ; 004c4c59 | g_INT_01cc906c
    CMP EAX,dword ptr [0x01cc9070]      ; 004c4c5f | g_INT_01cc9070
        ;   Label: LAB_004c4c5f
    JLE 0x004c4c6c                      ; 004c4c65
        ;   XREF to: 004c4c6c (CONDITIONAL_JUMP)  ; LAB_004c4c6c
    MOV [0x01cc9070],EAX                ; 004c4c67 | g_INT_01cc9070
    MOV EAX,dword ptr [ESI + 0x10]      ; 004c4c6c
        ;   Label: LAB_004c4c6c
    MOV dword ptr [ECX + 0x8],EAX       ; 004c4c6f
    MOV EAX,dword ptr [ESI + 0x18]      ; 004c4c72
    MOV dword ptr [ECX + 0x18],EAX      ; 004c4c75
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004c4c78
    MOV dword ptr [ECX + 0x20],EAX      ; 004c4c7b
    MOV EBX,dword ptr [EDI + 0x14]      ; 004c4c7e
    SUB EBX,dword ptr [ESI + 0x14]      ; 004c4c81
    CMP EBX,0x10000                     ; 004c4c84
    JNC 0x004c4d25                      ; 004c4c8a
        ;   XREF to: 004c4d25 (CONDITIONAL_JUMP)  ; LAB_004c4d25
    XOR EBX,EBX                         ; 004c4c90
    MOV EAX,dword ptr [EDI + 0x10]      ; 004c4c92
        ;   Label: LAB_004c4c92
    MOV EDX,dword ptr [ESI + 0x10]      ; 004c4c95
    SUB EAX,EDX                         ; 004c4c98
    MOV EDX,EAX                         ; 004c4c9a
    MOV EAX,EBX                         ; 004c4c9c
    IMUL EDX                            ; 004c4c9e
    SHRD EAX,EDX,0x10                   ; 004c4ca0
    MOV dword ptr [ECX + 0xc],EAX       ; 004c4ca4
    MOV EDX,dword ptr [EDI + 0x18]      ; 004c4ca7
    MOV EBP,dword ptr [ESI + 0x18]      ; 004c4caa
    MOV EAX,EBX                         ; 004c4cad
    SUB EDX,EBP                         ; 004c4caf
    IMUL EDX                            ; 004c4cb1
    SHRD EAX,EDX,0x10                   ; 004c4cb3
    MOV dword ptr [ECX + 0x1c],EAX      ; 004c4cb7
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004c4cba
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004c4cbd
    SUB EAX,EDX                         ; 004c4cc0
    MOV EDX,EAX                         ; 004c4cc2
    MOV EAX,EBX                         ; 004c4cc4
    IMUL EDX                            ; 004c4cc6
    SHRD EAX,EDX,0x10                   ; 004c4cc8
    MOV dword ptr [ECX + 0x24],EAX      ; 004c4ccc
    MOV EBX,dword ptr [ESI + 0x14]      ; 004c4ccf
    AND EBX,0xffff                      ; 004c4cd2
    XOR BX,0xffff                       ; 004c4cd8
    MOV EDX,dword ptr [ECX + 0xc]       ; 004c4cdc
    MOV EAX,EBX                         ; 004c4cdf
    IMUL EDX                            ; 004c4ce1
    SHRD EAX,EDX,0x10                   ; 004c4ce3
    MOV ESI,dword ptr [ECX + 0x8]       ; 004c4ce7
    MOV EDX,dword ptr [ECX + 0x1c]      ; 004c4cea
    ADD ESI,EAX                         ; 004c4ced
    MOV EAX,EBX                         ; 004c4cef
    MOV dword ptr [ECX + 0x8],ESI       ; 004c4cf1
    IMUL EDX                            ; 004c4cf4
    SHRD EAX,EDX,0x10                   ; 004c4cf6
    MOV EDI,dword ptr [ECX + 0x18]      ; 004c4cfa
    MOV EDX,dword ptr [ECX + 0x24]      ; 004c4cfd
    ADD EDI,EAX                         ; 004c4d00
    MOV EAX,EBX                         ; 004c4d02
    MOV dword ptr [ECX + 0x18],EDI      ; 004c4d04
    IMUL EDX                            ; 004c4d07
    SHRD EAX,EDX,0x10                   ; 004c4d09
    MOV EBP,dword ptr [ECX + 0x20]      ; 004c4d0d
    ADD EBP,EAX                         ; 004c4d10
    MOV EAX,[0x01cc8ce8]                ; 004c4d12 | g_INT_01cc8ce8
    INC EAX                             ; 004c4d17
    MOV dword ptr [ECX + 0x20],EBP      ; 004c4d18
    MOV [0x01cc8ce8],EAX                ; 004c4d1b | g_INT_01cc8ce8
    POP EBP                             ; 004c4d20
        ;   Label: LAB_004c4d20
    POP EDI                             ; 004c4d21
    POP ESI                             ; 004c4d22
    POP EBX                             ; 004c4d23
    RET                                 ; 004c4d24
    MOV EAX,0xffffffff                  ; 004c4d25
        ;   Label: LAB_004c4d25
    XOR EDX,EDX                         ; 004c4d2a
    DIV EBX                             ; 004c4d2c
    MOV EBX,EAX                         ; 004c4d2e
    JMP 0x004c4c92                      ; 004c4d30
        ;   XREF to: 004c4c92 (UNCONDITIONAL_JUMP)  ; LAB_004c4c92

