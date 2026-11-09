; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_glass_cpp_FUN_004e1be0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00601450
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c51cac
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00553440
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1be0
        ;   Label: core_glass.cpp_FUN_004e1be0
    PUSH ESI                            ; 004e1be1
    PUSH EBP                            ; 004e1be2
    SUB ESP,0x34                        ; 004e1be3
    MOV EBP,dword ptr [ESP + 0x44]      ; 004e1be6
    CMP dword ptr [EBP + 0x370],0x0     ; 004e1bea
    JNZ 0x004e1c06                      ; 004e1bf1
        ;   XREF to: 004e1c06 (CONDITIONAL_JUMP)  ; LAB_004e1c06
    CMP dword ptr [EBP + 0x17c],0x0     ; 004e1bf3
    JZ 0x004e1c06                       ; 004e1bfa
        ;   XREF to: 004e1c06 (CONDITIONAL_JUMP)  ; LAB_004e1c06
    MOV EBX,dword ptr [EBP + 0x180]     ; 004e1bfc
    TEST EBX,EBX                        ; 004e1c02
    JZ 0x004e1c0f                       ; 004e1c04
        ;   XREF to: 004e1c0f (CONDITIONAL_JUMP)  ; LAB_004e1c0f
    XOR EAX,EAX                         ; 004e1c06
        ;   Label: LAB_004e1c06
    ADD ESP,0x34                        ; 004e1c08
    POP EBP                             ; 004e1c0b
    POP ESI                             ; 004e1c0c
    POP EBX                             ; 004e1c0d
    RET                                 ; 004e1c0e
    MOV ESI,dword ptr [0x00612560]      ; 004e1c0f | DAT_00612560
        ;   Label: LAB_004e1c0f
    PUSH ESI                            ; 004e1c15 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004e1c16
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004e1c1b
    TEST EAX,EAX                        ; 004e1c1e
    JNZ 0x004e1c06                      ; 004e1c20
        ;   XREF to: 004e1c06 (CONDITIONAL_JUMP)  ; LAB_004e1c06
    PUSH EDI                            ; 004e1c22
    PUSH EBP                            ; 004e1c23
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004e1c24
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e1c29
    PUSH EBX                            ; 004e1c2c
    MOV EAX,dword ptr [EBP + 0x154]     ; 004e1c2d
    PUSH EBP                            ; 004e1c33
    LEA ESI,[ESP + 0x24]                ; 004e1c34
    LEA EDI,[ESP + 0xc]                 ; 004e1c38
    CALL dword ptr [EAX + 0x1c]         ; 004e1c3c
    MOV ECX,0x6                         ; 004e1c3f
    ADD ESP,0x4                         ; 004e1c44
    LEA EAX,[ESP + 0x8]                 ; 004e1c47
    LEA ESI,[ESP + 0x20]                ; 004e1c4b
    PUSH EAX                            ; 004e1c4f
    MOVSD.REP ES:EDI,ESI                ; 004e1c50
    CALL core_box.cpp_FUN_004207b0      ; 004e1c52
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004e1c57
    MOV dword ptr [ESP + 0x34],EAX      ; 004e1c5a
    LEA EAX,[EBP + 0x164]               ; 004e1c5e
    PUSH EAX                            ; 004e1c64
    MOV EDI,dword ptr [0x00612560]      ; 004e1c65 | DAT_00612560
    PUSH EDI                            ; 004e1c6b | DAT_01bc120c
    XOR ESI,ESI                         ; 004e1c6c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e1c6e
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA ECX,[EBP + 0x38c]               ; 004e1c73
    ADD ESP,0x8                         ; 004e1c79
    LEA EDI,[EBP + 0x4b8]               ; 004e1c7c
    MOV EAX,dword ptr [EBP + 0xb34]     ; 004e1c82
    MOV EDX,EDI                         ; 004e1c88
    TEST EAX,EAX                        ; 004e1c8a
    JLE 0x004e1cd0                      ; 004e1c8c
        ;   XREF to: 004e1cd0 (CONDITIONAL_JUMP)  ; LAB_004e1cd0
    MOV EBX,EDX                         ; 004e1c8e
        ;   Label: LAB_004e1c8e
    MOV EAX,ECX                         ; 004e1c90
    FLD float ptr [EAX]                 ; 004e1c92
    FMUL float ptr [0x00601450]         ; 004e1c94 | DAT_00601450
    FISTP dword ptr [EBX]               ; 004e1c9a
    FLD float ptr [EAX + 0x4]           ; 004e1c9c
    FMUL float ptr [0x00601450]         ; 004e1c9f | DAT_00601450
    FISTP dword ptr [EBX + 0x4]         ; 004e1ca5
    FLD float ptr [EAX + 0x8]           ; 004e1ca8
    FMUL float ptr [0x00601450]         ; 004e1cab | DAT_00601450
    FISTP dword ptr [EBX + 0x8]         ; 004e1cb1
    INC ESI                             ; 004e1cb4
    ADD ECX,0xc                         ; 004e1cb5
    MOV EBX,dword ptr [EBP + 0xb34]     ; 004e1cb8
    ADD EDX,0xc                         ; 004e1cbe
    CMP ESI,EBX                         ; 004e1cc1
    JL 0x004e1c8e                       ; 004e1cc3
        ;   XREF to: 004e1c8e (CONDITIONAL_JUMP)  ; LAB_004e1c8e
    LEA EAX,[EAX]                       ; 004e1cc5
    LEA EDX,[EDX]                       ; 004e1ccb
    MOV EBX,EBX                         ; 004e1cce
    PUSH EDI                            ; 004e1cd0
        ;   Label: LAB_004e1cd0
    MOV ESI,dword ptr [EBP + 0xb34]     ; 004e1cd1
    PUSH ESI                            ; 004e1cd7
    MOV EAX,[0x00622c18]                ; 004e1cd8 | g_CDemonSetPtr
    PUSH EAX                            ; 004e1cdd | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140 ; 004e1cde
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EAX,0xffff                      ; 004e1ce3
    MOV EDX,dword ptr [0x01c51cac]      ; 004e1ce8 | DAT_01c51cac
    ADD ESP,0xc                         ; 004e1cee
    SUB EAX,EDX                         ; 004e1cf1
    MOV EDX,dword ptr [EBP + 0x17c]     ; 004e1cf3
    IMUL EDX                            ; 004e1cf9
    SHRD EAX,EDX,0x10                   ; 004e1cfb
    PUSH EAX                            ; 004e1cff
    MOV ECX,dword ptr [0x00612560]      ; 004e1d00 | DAT_00612560
    PUSH ECX                            ; 004e1d06 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004e1d07
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004e1d0c
    PUSH 0x0                            ; 004e1d0f
    PUSH 0x4                            ; 004e1d11
    PUSH EDI                            ; 004e1d13
    LEA EDI,[EBP + 0x6ac]               ; 004e1d14
    PUSH EDI                            ; 004e1d1a
    MOV EBX,dword ptr [EBP + 0xb38]     ; 004e1d1b
    PUSH EBX                            ; 004e1d21
    MOV ESI,dword ptr [EBP + 0xb34]     ; 004e1d22
    PUSH ESI                            ; 004e1d28
    MOV EAX,[0x00622c18]                ; 004e1d29 | g_CDemonSetPtr
    PUSH EAX                            ; 004e1d2e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00553440 ; 004e1d2f
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    XOR ESI,ESI                         ; 004e1d34
    MOV EDX,dword ptr [EBP + 0xb38]     ; 004e1d36
    ADD ESP,0x1c                        ; 004e1d3c
    TEST EDX,EDX                        ; 004e1d3f
    JLE 0x004e1d90                      ; 004e1d41
        ;   XREF to: 004e1d90 (CONDITIONAL_JUMP)  ; LAB_004e1d90
    MOV EBX,EBP                         ; 004e1d43
    MOV ECX,dword ptr [0x00612560]      ; 004e1d45 | DAT_00612560
        ;   Label: LAB_004e1d45
    MOV dword ptr [EBX + 0x6b4],0x0     ; 004e1d4b
    PUSH EDI                            ; 004e1d55
    MOV dword ptr [EBX + 0x6b8],0x0     ; 004e1d56
    INC ESI                             ; 004e1d60
    MOV dword ptr [EBX + 0x6bc],0x0     ; 004e1d61
    PUSH ECX                            ; 004e1d6b | DAT_01bc120c
    MOV dword ptr [EBX + 0x6c0],0x0     ; 004e1d6c
    ADD EBX,0x48                        ; 004e1d76
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120 ; 004e1d79
        ;   XREF to: 00483120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD EDI,0x48                        ; 004e1d7e
    MOV EAX,dword ptr [EBP + 0xb38]     ; 004e1d81
    ADD ESP,0x8                         ; 004e1d87
    CMP ESI,EAX                         ; 004e1d8a
    JL 0x004e1d45                       ; 004e1d8c
        ;   XREF to: 004e1d45 (CONDITIONAL_JUMP)  ; LAB_004e1d45
    MOV EAX,EAX                         ; 004e1d8e
    PUSH EBP                            ; 004e1d90
        ;   Label: LAB_004e1d90
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004e1d91
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e1d96
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e1d99
    POP EDI                             ; 004e1d9d
    ADD ESP,0x34                        ; 004e1d9e
    POP EBP                             ; 004e1da1
    POP ESI                             ; 004e1da2
    POP EBX                             ; 004e1da3
    RET                                 ; 004e1da4

