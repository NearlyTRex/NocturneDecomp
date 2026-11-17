; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mirror_cpp_CMirror_renderMirrorQuad_FUN_00519cb0(CMirror *this_ptr)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   float g_MirrorProjectionScale = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_00612560 = 01bc120c
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;   engine_special.cpp_transformPoint_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519cb0
        ;   Label: core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00519cb0
    PUSH ESI                            ; 00519cb1
    PUSH EDI                            ; 00519cb2
    SUB ESP,0x58                        ; 00519cb3
    MOV ESI,dword ptr [ESP + 0x68]      ; 00519cb6
    MOV EDX,dword ptr [0x00612560]      ; 00519cba | g_CDemonRenderer_PTR_00612560
    LEA EBX,[ESP + 0x40]                ; 00519cc0
    MOV EAX,ESI                         ; 00519cc4
    MOV EDX,dword ptr [EDX]             ; 00519cc6
    FLD float ptr [EAX]                 ; 00519cc8
    FMUL float ptr [0x00603ce0]         ; 00519cca | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 00519cd0
    FLD float ptr [EAX + 0x4]           ; 00519cd2
    FMUL float ptr [0x00603ce0]         ; 00519cd5 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 00519cdb
    FLD float ptr [EAX + 0x8]           ; 00519cde
    FMUL float ptr [0x00603ce0]         ; 00519ce1 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 00519ce7
    LEA EAX,[ESP + 0x40]                ; 00519cea
    PUSH EAX                            ; 00519cee
    PUSH EDX                            ; 00519cef
    CALL engine_special.cpp_transformPoint_FUN_0058043c ; 00519cf0
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00519cf5 | g_CDemonRenderer_PTR_00612560
    LEA EBX,[ESP + 0x3c]                ; 00519cfa
    ADD ESP,0x8                         ; 00519cfe
    MOV EDX,dword ptr [EAX]             ; 00519d01
    LEA EAX,[ESI + 0xc]                 ; 00519d03
    FLD float ptr [EAX]                 ; 00519d06
    FMUL float ptr [0x00603ce0]         ; 00519d08 | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 00519d0e
    FLD float ptr [EAX + 0x4]           ; 00519d10
    FMUL float ptr [0x00603ce0]         ; 00519d13 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 00519d19
    FLD float ptr [EAX + 0x8]           ; 00519d1c
    FMUL float ptr [0x00603ce0]         ; 00519d1f | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 00519d25
    LEA EAX,[ESP + 0x34]                ; 00519d28
    PUSH EAX                            ; 00519d2c
    ADD EDX,0x30                        ; 00519d2d
    PUSH EDX                            ; 00519d30
    CALL engine_special.cpp_transformPoint_FUN_0058043c ; 00519d31
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x30]                ; 00519d36
    MOV EDX,dword ptr [0x00612560]      ; 00519d3a | g_CDemonRenderer_PTR_00612560
    ADD ESP,0x8                         ; 00519d40
    LEA EAX,[ESI + 0x18]                ; 00519d43
    MOV EDX,dword ptr [EDX]             ; 00519d46
    FLD float ptr [EAX]                 ; 00519d48
    FMUL float ptr [0x00603ce0]         ; 00519d4a | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 00519d50
    FLD float ptr [EAX + 0x4]           ; 00519d52
    FMUL float ptr [0x00603ce0]         ; 00519d55 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 00519d5b
    FLD float ptr [EAX + 0x8]           ; 00519d5e
    FMUL float ptr [0x00603ce0]         ; 00519d61 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 00519d67
    LEA EAX,[ESP + 0x28]                ; 00519d6a
    PUSH EAX                            ; 00519d6e
    ADD EDX,0x60                        ; 00519d6f
    PUSH EDX                            ; 00519d72
    CALL engine_special.cpp_transformPoint_FUN_0058043c ; 00519d73
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00519d78 | g_CDemonRenderer_PTR_00612560
    MOV EAX,dword ptr [EAX]             ; 00519d7d
    ADD ESP,0x8                         ; 00519d7f
    LEA EDX,[EAX + 0x90]                ; 00519d82
    LEA EBX,[ESP + 0x4c]                ; 00519d88
    LEA EAX,[ESI + 0x24]                ; 00519d8c
    FLD float ptr [EAX]                 ; 00519d8f
    FMUL float ptr [0x00603ce0]         ; 00519d91 | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 00519d97
    FLD float ptr [EAX + 0x4]           ; 00519d99
    FMUL float ptr [0x00603ce0]         ; 00519d9c | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 00519da2
    FLD float ptr [EAX + 0x8]           ; 00519da5
    FMUL float ptr [0x00603ce0]         ; 00519da8 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 00519dae
    LEA EAX,[ESP + 0x4c]                ; 00519db1
    PUSH EAX                            ; 00519db5
    PUSH EDX                            ; 00519db6
    CALL engine_special.cpp_transformPoint_FUN_0058043c ; 00519db7
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00519dbc
    PUSH 0x1                            ; 00519dbf
    MOV EDX,dword ptr [0x00612560]      ; 00519dc1 | g_CDemonRenderer_PTR_00612560
    PUSH EDX                            ; 00519dc7
    XOR EBX,EBX                         ; 00519dc8
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00519dca
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    MOV ECX,0x4                         ; 00519dcf
    MOV EDX,0x1                         ; 00519dd4
    LEA EAX,[ESP + 0x8]                 ; 00519dd9
    ADD ESP,0x8                         ; 00519ddd
    MOV ESI,dword ptr [0x00612560]      ; 00519de0 | g_CDemonRenderer_PTR_00612560
    MOV dword ptr [ESP + 0x4],ECX       ; 00519de6
    MOV dword ptr [ESP + 0x14],EBX      ; 00519dea
    MOV dword ptr [ESP + 0x10],EBX      ; 00519dee
    MOV dword ptr [ESP + 0xc],EBX       ; 00519df2
    MOV dword ptr [ESP + 0x8],EBX       ; 00519df6
    MOV dword ptr [ESP + 0x18],EBX      ; 00519dfa
    MOV dword ptr [ESP + 0x1c],EDX      ; 00519dfe
    PUSH EAX                            ; 00519e02
    MOV ECX,0x2                         ; 00519e03
    MOV EBX,0x3                         ; 00519e08
    PUSH ESI                            ; 00519e0d
    MOV dword ptr [ESP + 0x28],ECX      ; 00519e0e
    MOV dword ptr [ESP + 0x2c],EBX      ; 00519e12
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 ; 00519e16
        ;   XREF to: 00481eb0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00519e1b
    PUSH 0x1                            ; 00519e1e
    MOV EDI,dword ptr [0x00612560]      ; 00519e20 | g_CDemonRenderer_PTR_00612560
    PUSH EDI                            ; 00519e26
    MOV EBX,EAX                         ; 00519e27
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00519e29
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00519e2e
    MOV EAX,EBX                         ; 00519e31
    ADD ESP,0x58                        ; 00519e33
    POP EDI                             ; 00519e36
    POP ESI                             ; 00519e37
    POP EBX                             ; 00519e38
    RET                                 ; 00519e39

