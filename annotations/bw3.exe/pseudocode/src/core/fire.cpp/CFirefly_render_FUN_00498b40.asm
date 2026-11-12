; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFirefly_render_FUN_00498b40(CFirefly *this_ptr)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_00498b30 = 00498bc0
;   undefined4 DAT_005c0548
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fca3c
;   undefined4 DAT_005fca54
;   undefined4 DAT_005fca6c
;   undefined4 DAT_005fca84
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b040
;   undefined4 DAT_0060b064
;   undefined4 DAT_0060b068
;   undefined4 DAT_0060b06c
;   ... and 13 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;   engine_special.cpp_FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498b40
        ;   Label: core_fire.cpp_CFirefly_render_FUN_00498b40
    PUSH ESI                            ; 00498b41
    PUSH EDI                            ; 00498b42
    PUSH EBP                            ; 00498b43
    MOV EBP,ESP                         ; 00498b44
    SUB ESP,0xe8                        ; 00498b46
    AND ESP,0xfffffff8                  ; 00498b4c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00498b4f
    LEA EBX,[ESP + 0xbc]                ; 00498b52
    MOV EAX,dword ptr [EAX + 0x50]      ; 00498b59
    MOV ESI,dword ptr [0x005f2afc]      ; 00498b5c | DAT_005f2afc
    MOV dword ptr [ESP + 0xd8],EAX      ; 00498b62
    MOV EAX,dword ptr [EBP + 0x14]      ; 00498b69
    MOV ESI,dword ptr [ESI]             ; 00498b6c | DAT_01bdd7e4
    FLD float ptr [EAX]                 ; 00498b6e
    FMUL float ptr [0x005df8e4]         ; 00498b70 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00498b76
    FLD float ptr [EAX + 0x4]           ; 00498b78
    FMUL float ptr [0x005df8e4]         ; 00498b7b | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00498b81
    FLD float ptr [EAX + 0x8]           ; 00498b84
    FMUL float ptr [0x005df8e4]         ; 00498b87 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00498b8d
    LEA EAX,[ESP + 0xbc]                ; 00498b90
    PUSH EAX                            ; 00498b97
    PUSH ESI                            ; 00498b98
    CALL engine_special.cpp_FUN_0056356c ; 00498b99
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498b9e
    PUSH ESI                            ; 00498ba1
    MOV EDX,dword ptr [0x005f2afc]      ; 00498ba2 | DAT_005f2afc
    PUSH EDX                            ; 00498ba8 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0 ; 00498ba9
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 00498bae
    TEST EAX,EAX                        ; 00498bb1
    JNZ 0x00499103                      ; 00498bb3
        ;   XREF to: 00499103 (CONDITIONAL_JUMP)  ; LAB_00499103
    MOV ESP,EBP                         ; 00498bb9
        ;   Label: LAB_00498bb9
    POP EBP                             ; 00498bbb
    POP EDI                             ; 00498bbc
    POP ESI                             ; 00498bbd
    POP EBX                             ; 00498bbe
    RET                                 ; 00498bbf
    PUSH 0x5fca3c                       ; 00498bc0 | DAT_005fca3c
        ;   Label: caseD_0
    MOV EAX,[0x005f2afc]                ; 00498bc5 | DAT_005f2afc
    PUSH EAX                            ; 00498bca | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 00498bcb
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_00498bcb
    ADD ESP,0x8                         ; 00498bd0
    PUSH 0x0                            ; 00498bd3
        ;   Label: default
    MOV ECX,dword ptr [EBP + 0x14]      ; 00498bd5
    MOV EAX,[0x007e2a54]                ; 00498bd8 | DAT_007e2a54
    PUSH ECX                            ; 00498bdd
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00498bde
    PUSH EAX                            ; 00498be1
    CALL dword ptr [EDX + 0x4]          ; 00498be2
    MOV EDX,0xffff                      ; 00498be5
    ADD ESP,0xc                         ; 00498bea
    MOV EBX,dword ptr [0x01c6e24c]      ; 00498bed | DAT_01c6e24c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00498bf3
    SUB EDX,EBX                         ; 00498bf6
    MOV EAX,dword ptr [EAX + 0x40]      ; 00498bf8
    MOV ESI,0xffff                      ; 00498bfb
    IMUL EDX                            ; 00498c00
    SHRD EAX,EDX,0x10                   ; 00498c02
    PUSH 0x1                            ; 00498c06
    MOV [0x0060b040],EAX                ; 00498c08 | DAT_0060b040
    MOV dword ptr [0x0060b034],ESI      ; 00498c0d | DAT_0060b034
    MOV dword ptr [0x0060b038],ESI      ; 00498c13 | DAT_0060b038
    MOV dword ptr [0x0060b03c],ESI      ; 00498c19 | DAT_0060b03c
    MOV dword ptr [0x0060b064],ESI      ; 00498c1f | DAT_0060b064
    MOV dword ptr [0x0060b068],ESI      ; 00498c25 | DAT_0060b068
    MOV dword ptr [0x0060b06c],ESI      ; 00498c2b | DAT_0060b06c
    MOV dword ptr [0x0060b094],ESI      ; 00498c31 | DAT_0060b094
    MOV dword ptr [0x0060b098],ESI      ; 00498c37 | DAT_0060b098
    MOV dword ptr [0x0060b09c],ESI      ; 00498c3d | DAT_0060b09c
    MOV dword ptr [0x0060b0c4],ESI      ; 00498c43 | DAT_0060b0c4
    MOV dword ptr [0x0060b0c8],ESI      ; 00498c49 | DAT_0060b0c8
    MOV dword ptr [0x0060b0cc],ESI      ; 00498c4f | DAT_0060b0cc
    MOV ESI,dword ptr [0x005f2afc]      ; 00498c55 | DAT_005f2afc
    MOV [0x0060b070],EAX                ; 00498c5b | DAT_0060b070
    PUSH ESI                            ; 00498c60 | DAT_01bdd7e4
    MOV [0x0060b0a0],EAX                ; 00498c61 | DAT_0060b0a0
    MOV [0x0060b0d0],EAX                ; 00498c66 | DAT_0060b0d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00498c6b
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00498c70
    PUSH 0x1c73670                      ; 00498c73
    MOV EDI,dword ptr [0x005f2afc]      ; 00498c78 | DAT_005f2afc
    PUSH EDI                            ; 00498c7e | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 00498c7f
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00498c84
    PUSH 0x0                            ; 00498c87
    MOV EAX,[0x005f2afc]                ; 00498c89 | DAT_005f2afc
    PUSH EAX                            ; 00498c8e | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00498c8f
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00498c94
    MOV EDX,dword ptr [0x005f2afc]      ; 00498c97 | DAT_005f2afc
    PUSH EDX                            ; 00498c9d | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 00498c9e
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00498ca3
    LEA EDI,[ESP + 0xa4]                ; 00498ca6
    MOV ESI,dword ptr [EBP + 0x14]      ; 00498cad
    MOV EBX,0x3ccccccd                  ; 00498cb0
    MOVSD ES:EDI,ESI                    ; 00498cb5
    MOVSD ES:EDI,ESI                    ; 00498cb6
    MOVSD ES:EDI,ESI                    ; 00498cb7
    MOV ECX,0x3f800000                  ; 00498cb8
    MOV ESI,dword ptr [EBP + 0x14]      ; 00498cbd
    MOV EAX,dword ptr [EBP + 0x14]      ; 00498cc0
    LEA EDI,[ESP + 0x20]                ; 00498cc3
    LEA ESI,[ESI + 0xc]                 ; 00498cc7
    MOV dword ptr [ESP],ECX             ; 00498cca
    MOV dword ptr [ESP + 0x4],EBX       ; 00498ccd
    MOVSD ES:EDI,ESI                    ; 00498cd1
    MOVSD ES:EDI,ESI                    ; 00498cd2
    MOVSD ES:EDI,ESI                    ; 00498cd3
    ADD EAX,0x18                        ; 00498cd4
    XOR ESI,ESI                         ; 00498cd7
    MOV dword ptr [ESP + 0xe4],EAX      ; 00498cd9
    MOV dword ptr [ESP + 0xe0],ESI      ; 00498ce0
    FLD float ptr [ESP + 0x4]           ; 00498ce7
        ;   Label: LAB_00498ce7
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00498ceb
    FLD ST0                             ; 00498cf2
    FLD double ptr [0x005c0548]         ; 00498cf4 | DAT_005c0548
    FXCH                                ; 00498cfa
    FMUL ST1                            ; 00498cfc
    FLD float ptr [EAX]                 ; 00498cfe
    FXCH                                ; 00498d00
    FSTP ST3                            ; 00498d02
    FXCH ST2                            ; 00498d04
    FSTP float ptr [ESP + 0x4]          ; 00498d06
    FXCH                                ; 00498d0a
    FMUL float ptr [ESP + 0x4]          ; 00498d0c
    FLD float ptr [EAX + 0x4]           ; 00498d10
    FMUL float ptr [ESP + 0x4]          ; 00498d13
    FLD float ptr [EAX + 0x8]           ; 00498d17
    FMUL float ptr [ESP + 0x4]          ; 00498d1a
    FLD float ptr [ESP]                 ; 00498d1e
    FLD float ptr [ESP + 0x20]          ; 00498d21
    LEA EDI,[ESP + 0x8]                 ; 00498d25
    LEA ESI,[ESP + 0xb0]                ; 00498d29
    FXCH ST4                            ; 00498d30
    FSTP float ptr [ESP + 0xb0]         ; 00498d32
    FXCH ST2                            ; 00498d39
    FSTP float ptr [ESP + 0xb4]         ; 00498d3b
    FSTP float ptr [ESP + 0xb8]         ; 00498d42
    MOVSD ES:EDI,ESI                    ; 00498d49
    MOVSD ES:EDI,ESI                    ; 00498d4a
    MOVSD ES:EDI,ESI                    ; 00498d4b
    FLD ST0                             ; 00498d4c
    FXCH ST2                            ; 00498d4e
    FSUB float ptr [ESP + 0x8]          ; 00498d50
    FXCH ST2                            ; 00498d54
    FMULP ST3                           ; 00498d56
    FXCH                                ; 00498d58
    FST float ptr [ESP + 0x20]          ; 00498d5a
    FMUL float ptr [ESP + 0x4]          ; 00498d5e
    FLD float ptr [ESP + 0x28]          ; 00498d62
    FLD float ptr [ESP + 0x24]          ; 00498d66
    FSUB float ptr [ESP + 0xc]          ; 00498d6a
    FXCH                                ; 00498d6e
    FSUB float ptr [ESP + 0x10]         ; 00498d70
    FXCH                                ; 00498d74
    FST float ptr [ESP + 0x24]          ; 00498d76
    FMUL float ptr [ESP + 0x4]          ; 00498d7a
    FXCH                                ; 00498d7e
    FST float ptr [ESP + 0x28]          ; 00498d80
    FMUL float ptr [ESP + 0x4]          ; 00498d84
    FLD float ptr [ESP + 0xa4]          ; 00498d88
    FLD float ptr [ESP + 0xa8]          ; 00498d8f
    LEA EAX,[ESP + 0xa4]                ; 00498d96
    FXCH ST6                            ; 00498d9d
    FSTP ST5                            ; 00498d9f
    FLD float ptr [ESP + 0xac]          ; 00498da1
    PUSH EAX                            ; 00498da8
    LEA EDI,[ESP + 0x30]                ; 00498da9
    LEA ESI,[ESP + 0x90]                ; 00498dad
    FXCH ST4                            ; 00498db4
    FSTP float ptr [ESP + 0x90]         ; 00498db6
    FXCH ST2                            ; 00498dbd
    FSTP float ptr [ESP + 0x94]         ; 00498dbf
    FSTP float ptr [ESP + 0x98]         ; 00498dc6
    MOVSD ES:EDI,ESI                    ; 00498dcd
    MOVSD ES:EDI,ESI                    ; 00498dce
    MOVSD ES:EDI,ESI                    ; 00498dcf
    FXCH ST2                            ; 00498dd0
    FSTP float ptr [ESP + 0x4]          ; 00498dd2
    MOV EDI,dword ptr [0x005f2afc]      ; 00498dd6 | DAT_005f2afc
    FXCH                                ; 00498ddc
    FSUB float ptr [ESP + 0x30]         ; 00498dde
    FXCH ST2                            ; 00498de2
    FSUB float ptr [ESP + 0x34]         ; 00498de4
    FXCH                                ; 00498de8
    FSUB float ptr [ESP + 0x38]         ; 00498dea
    FXCH ST2                            ; 00498dee
    FSTP float ptr [ESP + 0xa8]         ; 00498df0
    FSTP float ptr [ESP + 0xac]         ; 00498df7
    PUSH EDI                            ; 00498dfe | DAT_01bdd7e4
    FSTP float ptr [ESP + 0xb4]         ; 00498dff
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 00498e06
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00498e0b
    PUSH 0x0                            ; 00498e0e
    PUSH 0x1c73658                      ; 00498e10 | DAT_01c73658
    MOV EAX,[0x005f2afc]                ; 00498e15 | DAT_005f2afc
    PUSH EAX                            ; 00498e1a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 00498e1b
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00498e20
    FLD float ptr [ESP + 0xd8]          ; 00498e23
    FCHS                                ; 00498e2a
    FMUL float ptr [ESP]                ; 00498e2c
    LEA EBX,[ESP + 0x38]                ; 00498e2f
    XOR EDX,EDX                         ; 00498e33
    FSTP float ptr [ESP + 0x80]         ; 00498e35
    MOV EAX,dword ptr [ESP + 0x80]      ; 00498e3c
    MOV dword ptr [ESP + 0x88],EDX      ; 00498e43
    MOV dword ptr [ESP + 0xdc],EAX      ; 00498e4a
    MOV dword ptr [ESP + 0x84],EAX      ; 00498e51
    LEA EAX,[ESP + 0x80]                ; 00498e58
    MOV EDX,dword ptr [0x005f2afc]      ; 00498e5f | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00498e65
    FMUL float ptr [0x005df8e4]         ; 00498e67 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00498e6d
    FLD float ptr [EAX + 0x4]           ; 00498e6f
    FMUL float ptr [0x005df8e4]         ; 00498e72 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00498e78
    FLD float ptr [EAX + 0x8]           ; 00498e7b
    FMUL float ptr [0x005df8e4]         ; 00498e7e | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00498e84
    LEA EAX,[ESP + 0x38]                ; 00498e87
    PUSH EAX                            ; 00498e8b
    MOV EAX,dword ptr [EDX]             ; 00498e8c | DAT_01bdd7e4
    PUSH EAX                            ; 00498e8e
    CALL engine_special.cpp_FUN_005632a3 ; 00498e8f
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498e94
    FLD float ptr [ESP + 0xd8]          ; 00498e97
    FMUL float ptr [ESP]                ; 00498e9e
    LEA EBX,[ESP + 0x5c]                ; 00498ea1
    FSTP float ptr [ESP + 0xd4]         ; 00498ea5
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00498eac
    MOV EDX,dword ptr [0x005f2afc]      ; 00498eb3 | DAT_005f2afc
    MOV dword ptr [ESP + 0x80],EAX      ; 00498eb9
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00498ec0
    XOR ECX,ECX                         ; 00498ec7
    MOV dword ptr [ESP + 0x84],EAX      ; 00498ec9
    LEA EAX,[ESP + 0x80]                ; 00498ed0
    MOV dword ptr [ESP + 0x88],ECX      ; 00498ed7
    FLD float ptr [EAX]                 ; 00498ede
    FMUL float ptr [0x005df8e4]         ; 00498ee0 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00498ee6
    FLD float ptr [EAX + 0x4]           ; 00498ee8
    FMUL float ptr [0x005df8e4]         ; 00498eeb | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00498ef1
    FLD float ptr [EAX + 0x8]           ; 00498ef4
    FMUL float ptr [0x005df8e4]         ; 00498ef7 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00498efd
    LEA EAX,[ESP + 0x5c]                ; 00498f00
    PUSH EAX                            ; 00498f04
    MOV EAX,dword ptr [EDX]             ; 00498f05 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 00498f07
    PUSH EAX                            ; 00498f0a
    CALL engine_special.cpp_FUN_005632a3 ; 00498f0b
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498f10
    XOR EBX,EBX                         ; 00498f13
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00498f15
    MOV dword ptr [ESP + 0x88],EBX      ; 00498f1c
    LEA EBX,[ESP + 0x14]                ; 00498f23
    MOV dword ptr [ESP + 0x80],EAX      ; 00498f27
    MOV dword ptr [ESP + 0x84],EAX      ; 00498f2e
    LEA EAX,[ESP + 0x80]                ; 00498f35
    MOV EDX,dword ptr [0x005f2afc]      ; 00498f3c | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00498f42
    FMUL float ptr [0x005df8e4]         ; 00498f44 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00498f4a
    FLD float ptr [EAX + 0x4]           ; 00498f4c
    FMUL float ptr [0x005df8e4]         ; 00498f4f | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00498f55
    FLD float ptr [EAX + 0x8]           ; 00498f58
    FMUL float ptr [0x005df8e4]         ; 00498f5b | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00498f61
    LEA EAX,[ESP + 0x14]                ; 00498f64
    PUSH EAX                            ; 00498f68
    MOV EAX,dword ptr [EDX]             ; 00498f69 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 00498f6b
    PUSH EAX                            ; 00498f6e
    CALL engine_special.cpp_FUN_005632a3 ; 00498f6f
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498f74
    XOR ESI,ESI                         ; 00498f77
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00498f79
    MOV EDX,dword ptr [0x005f2afc]      ; 00498f80 | DAT_005f2afc
    MOV dword ptr [ESP + 0x80],EAX      ; 00498f86
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00498f8d
    MOV dword ptr [ESP + 0x88],ESI      ; 00498f94
    MOV dword ptr [ESP + 0x84],EAX      ; 00498f9b
    LEA EBX,[ESP + 0x74]                ; 00498fa2
    LEA EAX,[ESP + 0x80]                ; 00498fa6
    FLD float ptr [EAX]                 ; 00498fad
    FMUL float ptr [0x005df8e4]         ; 00498faf | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00498fb5
    FLD float ptr [EAX + 0x4]           ; 00498fb7
    FMUL float ptr [0x005df8e4]         ; 00498fba | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00498fc0
    FLD float ptr [EAX + 0x8]           ; 00498fc3
    FMUL float ptr [0x005df8e4]         ; 00498fc6 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00498fcc
    LEA EAX,[ESP + 0x74]                ; 00498fcf
    PUSH EAX                            ; 00498fd3
    MOV EAX,dword ptr [EDX]             ; 00498fd4 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 00498fd6
    PUSH EAX                            ; 00498fdb
    CALL engine_special.cpp_FUN_005632a3 ; 00498fdc
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498fe1
    PUSH ESI                            ; 00498fe4
    MOV EDI,dword ptr [EBP + 0x14]      ; 00498fe5
    MOV EAX,[0x007e2a54]                ; 00498fe8 | DAT_007e2a54
    PUSH EDI                            ; 00498fed
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00498fee
    PUSH EAX                            ; 00498ff1
    CALL dword ptr [EDX + 0x4]          ; 00498ff2
    MOV EDX,0xffff                      ; 00498ff5
    MOV ECX,dword ptr [0x01c6e24c]      ; 00498ffa | DAT_01c6e24c
    ADD ESP,0xc                         ; 00499000
    MOV EAX,dword ptr [EDI + 0x40]      ; 00499003
    SUB EDX,ECX                         ; 00499006
    MOV EBX,0xffff                      ; 00499008
    IMUL EDX                            ; 0049900d
    SHRD EAX,EDX,0x10                   ; 0049900f
    PUSH 0x1                            ; 00499013
    MOV [0x0060b040],EAX                ; 00499015 | DAT_0060b040
    MOV dword ptr [0x0060b034],EBX      ; 0049901a | DAT_0060b034
    MOV dword ptr [0x0060b038],EBX      ; 00499020 | DAT_0060b038
    MOV dword ptr [0x0060b03c],EBX      ; 00499026 | DAT_0060b03c
    MOV dword ptr [0x0060b064],EBX      ; 0049902c | DAT_0060b064
    MOV dword ptr [0x0060b068],EBX      ; 00499032 | DAT_0060b068
    MOV dword ptr [0x0060b06c],EBX      ; 00499038 | DAT_0060b06c
    MOV dword ptr [0x0060b094],EBX      ; 0049903e | DAT_0060b094
    MOV dword ptr [0x0060b098],EBX      ; 00499044 | DAT_0060b098
    MOV dword ptr [0x0060b09c],EBX      ; 0049904a | DAT_0060b09c
    MOV dword ptr [0x0060b0c4],EBX      ; 00499050 | DAT_0060b0c4
    MOV dword ptr [0x0060b0c8],EBX      ; 00499056 | DAT_0060b0c8
    MOV dword ptr [0x0060b0cc],EBX      ; 0049905c | DAT_0060b0cc
    MOV EBX,dword ptr [0x005f2afc]      ; 00499062 | DAT_005f2afc
    MOV [0x0060b070],EAX                ; 00499068 | DAT_0060b070
    PUSH EBX                            ; 0049906d | DAT_01bdd7e4
    MOV [0x0060b0a0],EAX                ; 0049906e | DAT_0060b0a0
    MOV [0x0060b0d0],EAX                ; 00499073 | DAT_0060b0d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00499078
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049907d
    PUSH 0x1c73670                      ; 00499080
    MOV ESI,dword ptr [0x005f2afc]      ; 00499085 | DAT_005f2afc
    PUSH ESI                            ; 0049908b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 0049908c
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00499091
    PUSH 0x0                            ; 00499094
    MOV EDI,dword ptr [0x005f2afc]      ; 00499096 | DAT_005f2afc
    PUSH EDI                            ; 0049909c | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0049909d
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004990a2
    MOV EAX,[0x005f2afc]                ; 004990a5 | DAT_005f2afc
    PUSH EAX                            ; 004990aa | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 004990ab
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004990b0
    MOV EDX,dword ptr [ESP + 0xe0]      ; 004990b3
    INC EDX                             ; 004990ba
    MOV dword ptr [ESP + 0xe0],EDX      ; 004990bb
    CMP EDX,0x3                         ; 004990c2
    JGE 0x00498bb9                      ; 004990c5
        ;   XREF to: 00498bb9 (CONDITIONAL_JUMP)  ; LAB_00498bb9
    JMP 0x00498ce7                      ; 004990cb
        ;   XREF to: 00498ce7 (UNCONDITIONAL_JUMP)  ; LAB_00498ce7
    PUSH 0x5fca54                       ; 004990d0 | DAT_005fca54
        ;   Label: caseD_1
    MOV EDI,dword ptr [0x005f2afc]      ; 004990d5 | DAT_005f2afc
    PUSH EDI                            ; 004990db | DAT_01bdd7e4
    JMP 0x00498bcb                      ; 004990dc
        ;   XREF to: 00498bcb (UNCONDITIONAL_JUMP)  ; LAB_00498bcb
    PUSH 0x5fca6c                       ; 004990e1 | DAT_005fca6c
        ;   Label: caseD_2
    MOV ESI,dword ptr [0x005f2afc]      ; 004990e6 | DAT_005f2afc
    PUSH ESI                            ; 004990ec | DAT_01bdd7e4
    JMP 0x00498bcb                      ; 004990ed
        ;   XREF to: 00498bcb (UNCONDITIONAL_JUMP)  ; LAB_00498bcb
    PUSH 0x5fca84                       ; 004990f2 | DAT_005fca84
        ;   Label: caseD_3
    MOV EBX,dword ptr [0x005f2afc]      ; 004990f7 | DAT_005f2afc
    PUSH EBX                            ; 004990fd | DAT_01bdd7e4
    JMP 0x00498bcb                      ; 004990fe
        ;   XREF to: 00498bcb (UNCONDITIONAL_JUMP)  ; LAB_00498bcb
    MOV ECX,dword ptr [EBP + 0x14]      ; 00499103
        ;   Label: LAB_00499103
    PUSH ECX                            ; 00499106
    MOV EBX,dword ptr [0x005f2afc]      ; 00499107 | DAT_005f2afc
    PUSH EBX                            ; 0049910d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0049910e
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00499113
    PUSH 0x0                            ; 00499116
    PUSH 0x1c73658                      ; 00499118 | DAT_01c73658
    MOV ESI,dword ptr [0x005f2afc]      ; 0049911d | DAT_005f2afc
    PUSH ESI                            ; 00499123 | DAT_01bdd7e4
    XOR EDI,EDI                         ; 00499124
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 00499126
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0049912b
    LEA EBX,[ESP + 0x50]                ; 0049912e
    FLD float ptr [ESP + 0xd8]          ; 00499132
    FCHS                                ; 00499139
    FSTP float ptr [ESP + 0x80]         ; 0049913b
    MOV EAX,dword ptr [ESP + 0x80]      ; 00499142
    MOV EDX,dword ptr [0x005f2afc]      ; 00499149 | DAT_005f2afc
    MOV dword ptr [ESP + 0xd4],EAX      ; 0049914f
    MOV dword ptr [ESP + 0x84],EAX      ; 00499156
    LEA EAX,[ESP + 0x80]                ; 0049915d
    MOV dword ptr [ESP + 0x88],EDI      ; 00499164
    FLD float ptr [EAX]                 ; 0049916b
    FMUL float ptr [0x005df8e4]         ; 0049916d | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00499173
    FLD float ptr [EAX + 0x4]           ; 00499175
    FMUL float ptr [0x005df8e4]         ; 00499178 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049917e
    FLD float ptr [EAX + 0x8]           ; 00499181
    FMUL float ptr [0x005df8e4]         ; 00499184 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049918a
    LEA EAX,[ESP + 0x50]                ; 0049918d
    PUSH EAX                            ; 00499191
    MOV EAX,dword ptr [EDX]             ; 00499192 | DAT_01bdd7e4
    PUSH EAX                            ; 00499194
    CALL engine_special.cpp_FUN_005632a3 ; 00499195
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049919a
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0049919d
    LEA EBX,[ESP + 0x44]                ; 004991a4
    MOV dword ptr [ESP + 0x80],EAX      ; 004991a8
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004991af
    MOV EDX,dword ptr [0x005f2afc]      ; 004991b6 | DAT_005f2afc
    MOV dword ptr [ESP + 0x84],EAX      ; 004991bc
    LEA EAX,[ESP + 0x80]                ; 004991c3
    MOV dword ptr [ESP + 0x88],EDI      ; 004991ca
    FLD float ptr [EAX]                 ; 004991d1
    FMUL float ptr [0x005df8e4]         ; 004991d3 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004991d9
    FLD float ptr [EAX + 0x4]           ; 004991db
    FMUL float ptr [0x005df8e4]         ; 004991de | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004991e4
    FLD float ptr [EAX + 0x8]           ; 004991e7
    FMUL float ptr [0x005df8e4]         ; 004991ea | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004991f0
    LEA EAX,[ESP + 0x44]                ; 004991f3
    PUSH EAX                            ; 004991f7
    MOV EAX,dword ptr [EDX]             ; 004991f8 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004991fa
    PUSH EAX                            ; 004991fd
    CALL engine_special.cpp_FUN_005632a3 ; 004991fe
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00499203
    LEA EBX,[ESP + 0x68]                ; 00499206
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0049920a
    MOV EDX,dword ptr [0x005f2afc]      ; 00499211 | DAT_005f2afc
    MOV dword ptr [ESP + 0x80],EAX      ; 00499217
    MOV dword ptr [ESP + 0x84],EAX      ; 0049921e
    LEA EAX,[ESP + 0x80]                ; 00499225
    MOV dword ptr [ESP + 0x88],EDI      ; 0049922c
    FLD float ptr [EAX]                 ; 00499233
    FMUL float ptr [0x005df8e4]         ; 00499235 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049923b
    FLD float ptr [EAX + 0x4]           ; 0049923d
    FMUL float ptr [0x005df8e4]         ; 00499240 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00499246
    FLD float ptr [EAX + 0x8]           ; 00499249
    FMUL float ptr [0x005df8e4]         ; 0049924c | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00499252
    LEA EAX,[ESP + 0x68]                ; 00499255
    PUSH EAX                            ; 00499259
    MOV EAX,dword ptr [EDX]             ; 0049925a | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0049925c
    PUSH EAX                            ; 0049925f
    CALL engine_special.cpp_FUN_005632a3 ; 00499260
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00499265
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00499268
    LEA EBX,[ESP + 0x98]                ; 0049926f
    MOV dword ptr [ESP + 0x80],EAX      ; 00499276
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0049927d
    MOV EDX,dword ptr [0x005f2afc]      ; 00499284 | DAT_005f2afc
    MOV dword ptr [ESP + 0x84],EAX      ; 0049928a
    LEA EAX,[ESP + 0x80]                ; 00499291
    MOV dword ptr [ESP + 0x88],EDI      ; 00499298
    FLD float ptr [EAX]                 ; 0049929f
    FMUL float ptr [0x005df8e4]         ; 004992a1 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004992a7
    FLD float ptr [EAX + 0x4]           ; 004992a9
    FMUL float ptr [0x005df8e4]         ; 004992ac | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004992b2
    FLD float ptr [EAX + 0x8]           ; 004992b5
    FMUL float ptr [0x005df8e4]         ; 004992b8 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004992be
    LEA EAX,[ESP + 0x98]                ; 004992c1
    PUSH EAX                            ; 004992c8
    MOV EAX,dword ptr [EDX]             ; 004992c9 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 004992cb
    PUSH EAX                            ; 004992d0
    CALL engine_special.cpp_FUN_005632a3 ; 004992d1
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004992d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004992d9
    MOV EAX,dword ptr [EAX + 0x54]      ; 004992dc
    CMP EAX,0x3                         ; 004992df
    JA 0x00498bd3                       ; 004992e2
        ;   XREF to: 00498bd3 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x498b30]  ; 004992e8 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

