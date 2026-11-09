; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CPopcorn_render_FUN_004a0cd0(CPopcorn *this_ptr)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fdbc4
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b040
;   undefined4 DAT_0060b05c
;   undefined4 DAT_0060b060
;   undefined4 DAT_0060b070
;   undefined4 DAT_0060b08c
;   undefined4 DAT_0060b090
;   undefined4 DAT_0060b0a0
;   undefined4 DAT_0060b0bc
;   undefined4 DAT_0060b0c0
;   ... and 6 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_00538400
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_matrix.c_FUN_0046d230
;   engine_matrix.c_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;   engine_special.cpp_FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0cd0
        ;   Label: core_fire.cpp_CPopcorn_render_FUN_004a0cd0
    PUSH ESI                            ; 004a0cd1
    PUSH EBP                            ; 004a0cd2
    SUB ESP,0x94                        ; 004a0cd3
    MOV EBP,dword ptr [ESP + 0xa4]      ; 004a0cd9
    MOV ESI,dword ptr [0x005f2afc]      ; 004a0ce0 | DAT_005f2afc
    LEA EBX,[ESP + 0x58]                ; 004a0ce6
    MOV EAX,EBP                         ; 004a0cea
    MOV ESI,dword ptr [ESI]             ; 004a0cec | DAT_01bdd7e4
    FLD float ptr [EAX]                 ; 004a0cee
    FMUL float ptr [0x005df8e4]         ; 004a0cf0 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a0cf6
    FLD float ptr [EAX + 0x4]           ; 004a0cf8
    FMUL float ptr [0x005df8e4]         ; 004a0cfb | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a0d01
    FLD float ptr [EAX + 0x8]           ; 004a0d04
    FMUL float ptr [0x005df8e4]         ; 004a0d07 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a0d0d
    LEA EAX,[ESP + 0x58]                ; 004a0d10
    PUSH EAX                            ; 004a0d14
    PUSH ESI                            ; 004a0d15
    CALL engine_special.cpp_FUN_0056356c ; 004a0d16
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a0d1b
    PUSH ESI                            ; 004a0d1e
    MOV EDX,dword ptr [0x005f2afc]      ; 004a0d1f | DAT_005f2afc
    PUSH EDX                            ; 004a0d25 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0 ; 004a0d26
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004a0d2b
    TEST EAX,EAX                        ; 004a0d2e
    JNZ 0x004a0d3c                      ; 004a0d30
        ;   XREF to: 004a0d3c (CONDITIONAL_JUMP)  ; LAB_004a0d3c
    ADD ESP,0x94                        ; 004a0d32
    POP EBP                             ; 004a0d38
    POP ESI                             ; 004a0d39
    POP EBX                             ; 004a0d3a
    RET                                 ; 004a0d3b
    PUSH EDI                            ; 004a0d3c
        ;   Label: LAB_004a0d3c
    PUSH EBP                            ; 004a0d3d
    MOV ECX,dword ptr [0x005f2afc]      ; 004a0d3e | DAT_005f2afc
    PUSH ECX                            ; 004a0d44 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004a0d45
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004a0d4a
    MOV EBX,dword ptr [0x005f2afc]      ; 004a0d4d | DAT_005f2afc
    PUSH EBX                            ; 004a0d53 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x30]                ; 004a0d54
    LEA EDI,[ESP + 0x48]                ; 004a0d58
    CALL engine_matrix.c_FUN_0046d230   ; 004a0d5c
        ;   XREF to: 0046d230 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d230()
    ADD ESP,0x4                         ; 004a0d61
    LEA ESI,[ESP + 0x2c]                ; 004a0d64
    LEA EAX,[ESP + 0x44]                ; 004a0d68
    PUSH 0x0                            ; 004a0d6c
    MOVSD ES:EDI,ESI                    ; 004a0d6e
    MOVSD ES:EDI,ESI                    ; 004a0d6f
    MOVSD ES:EDI,ESI                    ; 004a0d70
    PUSH EAX                            ; 004a0d71
    MOV ESI,dword ptr [0x005f2afc]      ; 004a0d72 | DAT_005f2afc
    PUSH ESI                            ; 004a0d78 | DAT_01bdd7e4
    LEA EBX,[ESP + 0x98]                ; 004a0d79
    MOV EDI,0xbe000000                  ; 004a0d80
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 004a0d85
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    LEA EAX,[ESP + 0x80]                ; 004a0d8a
    MOV ESI,dword ptr [0x005f2afc]      ; 004a0d91 | DAT_005f2afc
    ADD ESP,0xc                         ; 004a0d97
    XOR EDX,EDX                         ; 004a0d9a
    MOV dword ptr [ESP + 0x74],EDI      ; 004a0d9c
    MOV dword ptr [ESP + 0x78],EDI      ; 004a0da0
    MOV dword ptr [ESP + 0x7c],EDX      ; 004a0da4
    FLD float ptr [EAX]                 ; 004a0da8
    FMUL float ptr [0x005df8e4]         ; 004a0daa | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a0db0
    FLD float ptr [EAX + 0x4]           ; 004a0db2
    FMUL float ptr [0x005df8e4]         ; 004a0db5 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a0dbb
    FLD float ptr [EAX + 0x8]           ; 004a0dbe
    FMUL float ptr [0x005df8e4]         ; 004a0dc1 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a0dc7
    LEA EAX,[ESP + 0x8c]                ; 004a0dca
    PUSH EAX                            ; 004a0dd1
    MOV EAX,dword ptr [ESI]             ; 004a0dd2 | DAT_01bdd7e4
    PUSH EAX                            ; 004a0dd4
    CALL engine_special.cpp_FUN_005632a3 ; 004a0dd5
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    XOR ESI,ESI                         ; 004a0dda
    MOV ECX,0x3e000000                  ; 004a0ddc
    LEA EBX,[ESP + 0x70]                ; 004a0de1
    ADD ESP,0x8                         ; 004a0de5
    LEA EAX,[ESP + 0x74]                ; 004a0de8
    MOV dword ptr [ESP + 0x74],ECX      ; 004a0dec
    MOV dword ptr [ESP + 0x78],EDI      ; 004a0df0
    MOV dword ptr [ESP + 0x7c],ESI      ; 004a0df4
    MOV ESI,dword ptr [0x005f2afc]      ; 004a0df8 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004a0dfe
    FMUL float ptr [0x005df8e4]         ; 004a0e00 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a0e06
    FLD float ptr [EAX + 0x4]           ; 004a0e08
    FMUL float ptr [0x005df8e4]         ; 004a0e0b | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a0e11
    FLD float ptr [EAX + 0x8]           ; 004a0e14
    FMUL float ptr [0x005df8e4]         ; 004a0e17 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a0e1d
    LEA EAX,[ESP + 0x68]                ; 004a0e20
    PUSH EAX                            ; 004a0e24
    MOV EAX,dword ptr [ESI]             ; 004a0e25 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004a0e27
    PUSH EAX                            ; 004a0e2a
    MOV EDI,0x3e000000                  ; 004a0e2b
    CALL engine_special.cpp_FUN_005632a3 ; 004a0e30
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x005f2afc]      ; 004a0e35 | DAT_005f2afc
    ADD ESP,0x8                         ; 004a0e3b
    XOR EDX,EDX                         ; 004a0e3e
    MOV dword ptr [ESP + 0x74],EDI      ; 004a0e40
    MOV dword ptr [ESP + 0x78],EDI      ; 004a0e44
    MOV dword ptr [ESP + 0x7c],EDX      ; 004a0e48
    LEA EBX,[ESP + 0x38]                ; 004a0e4c
    LEA EAX,[ESP + 0x74]                ; 004a0e50
    FLD float ptr [EAX]                 ; 004a0e54
    FMUL float ptr [0x005df8e4]         ; 004a0e56 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a0e5c
    FLD float ptr [EAX + 0x4]           ; 004a0e5e
    FMUL float ptr [0x005df8e4]         ; 004a0e61 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a0e67
    FLD float ptr [EAX + 0x8]           ; 004a0e6a
    FMUL float ptr [0x005df8e4]         ; 004a0e6d | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a0e73
    LEA EAX,[ESP + 0x38]                ; 004a0e76
    PUSH EAX                            ; 004a0e7a
    MOV EAX,dword ptr [ESI]             ; 004a0e7b | DAT_01bdd7e4
    ADD EAX,0x60                        ; 004a0e7d
    PUSH EAX                            ; 004a0e80
    XOR ESI,ESI                         ; 004a0e81
    CALL engine_special.cpp_FUN_005632a3 ; 004a0e83
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xbe000000                  ; 004a0e88
    LEA EBX,[ESP + 0x58]                ; 004a0e8d
    ADD ESP,0x8                         ; 004a0e91
    LEA EAX,[ESP + 0x74]                ; 004a0e94
    MOV dword ptr [ESP + 0x74],ECX      ; 004a0e98
    MOV dword ptr [ESP + 0x78],EDI      ; 004a0e9c
    MOV dword ptr [ESP + 0x7c],ESI      ; 004a0ea0
    MOV ESI,dword ptr [0x005f2afc]      ; 004a0ea4 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004a0eaa
    FMUL float ptr [0x005df8e4]         ; 004a0eac | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a0eb2
    FLD float ptr [EAX + 0x4]           ; 004a0eb4
    FMUL float ptr [0x005df8e4]         ; 004a0eb7 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a0ebd
    FLD float ptr [EAX + 0x8]           ; 004a0ec0
    FMUL float ptr [0x005df8e4]         ; 004a0ec3 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a0ec9
    LEA EAX,[ESP + 0x50]                ; 004a0ecc
    PUSH EAX                            ; 004a0ed0
    MOV EAX,dword ptr [ESI]             ; 004a0ed1 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 004a0ed3
    PUSH EAX                            ; 004a0ed8
    CALL engine_special.cpp_FUN_005632a3 ; 004a0ed9
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a0ede
    PUSH 0x5fdbc4                       ; 004a0ee1 | DAT_005fdbc4
    MOV EDI,dword ptr [0x005f2afc]      ; 004a0ee6 | DAT_005f2afc
    PUSH EDI                            ; 004a0eec | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a0eed
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004a0ef2
    PUSH 0x0                            ; 004a0ef5
    MOV EAX,[0x007e2a54]                ; 004a0ef7 | DAT_007e2a54
    PUSH EBP                            ; 004a0efc
    MOV EBX,dword ptr [EAX + 0x3c]      ; 004a0efd
    PUSH EAX                            ; 004a0f00
    CALL dword ptr [EBX + 0x4]          ; 004a0f01
    MOV EAX,0xffff                      ; 004a0f04
    MOV ECX,0x80000                     ; 004a0f09
    MOV EBX,0xf80000                    ; 004a0f0e
    MOV EDX,dword ptr [0x01c6e24c]      ; 004a0f13 | DAT_01c6e24c
    ADD ESP,0xc                         ; 004a0f19
    MOV dword ptr [0x0060b02c],ECX      ; 004a0f1c | DAT_0060b02c
    MOV dword ptr [0x0060b030],EBX      ; 004a0f22 | DAT_0060b030
    MOV dword ptr [0x0060b05c],EBX      ; 004a0f28 | DAT_0060b05c
    MOV dword ptr [0x0060b060],EBX      ; 004a0f2e | DAT_0060b060
    MOV dword ptr [0x0060b08c],EBX      ; 004a0f34 | DAT_0060b08c
    MOV dword ptr [0x0060b090],ECX      ; 004a0f3a | DAT_0060b090
    MOV dword ptr [0x0060b0bc],ECX      ; 004a0f40 | DAT_0060b0bc
    SUB EAX,EDX                         ; 004a0f46
    LEA EBX,[ESP + 0x80]                ; 004a0f48
    MOV [0x0060b040],EAX                ; 004a0f4f | DAT_0060b040
    MOV [0x0060b070],EAX                ; 004a0f54 | DAT_0060b070
    MOV [0x0060b0a0],EAX                ; 004a0f59 | DAT_0060b0a0
    MOV [0x0060b0d0],EAX                ; 004a0f5e | DAT_0060b0d0
    MOV EAX,EBP                         ; 004a0f63
    MOV dword ptr [0x0060b0c0],ECX      ; 004a0f65 | DAT_0060b0c0
    FLD float ptr [EAX]                 ; 004a0f6b
    FMUL float ptr [0x005df8e4]         ; 004a0f6d | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a0f73
    FLD float ptr [EAX + 0x4]           ; 004a0f75
    FMUL float ptr [0x005df8e4]         ; 004a0f78 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a0f7e
    FLD float ptr [EAX + 0x8]           ; 004a0f81
    FMUL float ptr [0x005df8e4]         ; 004a0f84 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a0f8a
    PUSH 0x4                            ; 004a0f8d
    PUSH 0x0                            ; 004a0f8f
    PUSH 0x1c73664                      ; 004a0f91 | DAT_01c73664
    LEA EAX,[ESP + 0x8c]                ; 004a0f96
    PUSH EAX                            ; 004a0f9d
    MOV ESI,dword ptr [0x00603b28]      ; 004a0f9e | g_CDemonSetPtr
    PUSH ESI                            ; 004a0fa4 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00538400 ; 004a0fa5
        ;   XREF to: 00538400 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00538400(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004a0faa
    PUSH 0x1                            ; 004a0fad
    MOV EDI,dword ptr [0x005f2afc]      ; 004a0faf | DAT_005f2afc
    PUSH EDI                            ; 004a0fb5 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 004a0fb6
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004a0fbb
    XOR EAX,EAX                         ; 004a0fbe
    MOV EBP,0x4                         ; 004a0fc0
    MOV dword ptr [ESP + 0x18],EAX      ; 004a0fc5
    MOV dword ptr [ESP + 0x14],EAX      ; 004a0fc9
    MOV dword ptr [ESP + 0x10],EAX      ; 004a0fcd
    MOV dword ptr [ESP + 0xc],EAX       ; 004a0fd1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a0fd5
    MOV EAX,0x3                         ; 004a0fd9
    MOV EDI,0x1                         ; 004a0fde
    MOV dword ptr [ESP + 0x28],EAX      ; 004a0fe3
    LEA EAX,[ESP + 0x4]                 ; 004a0fe7
    MOV EDX,dword ptr [0x005f2afc]      ; 004a0feb | DAT_005f2afc
    PUSH EAX                            ; 004a0ff1
    MOV dword ptr [ESP + 0xc],EBP       ; 004a0ff2
    MOV EBP,0x2                         ; 004a0ff6
    PUSH EDX                            ; 004a0ffb | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x28],EDI      ; 004a0ffc
    MOV dword ptr [ESP + 0x2c],EBP      ; 004a1000
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 004a1004
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004a1009
    XOR EBX,EBX                         ; 004a100c
    PUSH EBX                            ; 004a100e
    MOV ECX,dword ptr [0x005f2afc]      ; 004a100f | DAT_005f2afc
    PUSH ECX                            ; 004a1015 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 004a1016
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004a101b
    MOV EBX,dword ptr [0x005f2afc]      ; 004a101e | DAT_005f2afc
    PUSH EBX                            ; 004a1024 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 004a1025
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004a102a
    POP EDI                             ; 004a102d
    ADD ESP,0x94                        ; 004a102e
    POP EBP                             ; 004a1034
    POP ESI                             ; 004a1035
    POP EBX                             ; 004a1036
    RET                                 ; 004a1037

