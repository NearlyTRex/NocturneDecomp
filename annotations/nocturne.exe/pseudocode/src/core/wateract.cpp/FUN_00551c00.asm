; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_wateract_cpp_FUN_00551c00(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   undefined4 DAT_005a3ed0
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be368
;   undefined4 DAT_005c13cc
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01e57284
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02dda6b8
;   undefined4 DAT_02dda6bc
;   undefined4 DAT_02dda6c0
;   undefined4 DAT_02dda6c4
;   undefined4 DAT_02dda6c8
;   undefined4 DAT_02dda6cc
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
;   core_set.cpp_FUN_0050ddd0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00551c00
        ;   Label: core_wateract.cpp_FUN_00551c00
    PUSH EBP                            ; 00551c01
    SUB ESP,0x1c                        ; 00551c02
    MOV ESI,dword ptr [ESP + 0x28]      ; 00551c05
    MOV EDX,dword ptr [0x005ae704]      ; 00551c09 | DAT_005ae704
    PUSH EDX                            ; 00551c0f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00551c10
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00551c15
    TEST EAX,EAX                        ; 00551c18
    JZ 0x00551c24                       ; 00551c1a
        ;   XREF to: 00551c24 (CONDITIONAL_JUMP)  ; LAB_00551c24
    XOR EAX,EAX                         ; 00551c1c
    ADD ESP,0x1c                        ; 00551c1e
    POP EBP                             ; 00551c21
    POP ESI                             ; 00551c22
    RET                                 ; 00551c23
    PUSH ESI                            ; 00551c24
        ;   Label: LAB_00551c24
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00551c25
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 00551c2a
    PUSH 0x0                            ; 00551c2d
    LEA EDX,[ESP + 0x4]                 ; 00551c2f
    PUSH EDX                            ; 00551c33
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00551c34
    PUSH ESI                            ; 00551c3a
    CALL dword ptr [EAX + 0x14]         ; 00551c3b
    ADD ESP,0x8                         ; 00551c3e
    PUSH EAX                            ; 00551c41
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00551c42
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00551c47
    MOV dword ptr [ESP + 0x18],EAX      ; 00551c4a
    TEST EAX,EAX                        ; 00551c4e
    JZ 0x00551df2                       ; 00551c50
        ;   XREF to: 00551df2 (CONDITIONAL_JUMP)  ; LAB_00551df2
    PUSH EDI                            ; 00551c56
    PUSH EBX                            ; 00551c57
    MOV ECX,dword ptr [ESI + 0x15c]     ; 00551c58
    PUSH ECX                            ; 00551c5e
    MOV EBX,dword ptr [0x005ae704]      ; 00551c5f | DAT_005ae704
    PUSH EBX                            ; 00551c65 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00551c66
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00551c6b
    PUSH 0x0                            ; 00551c6e
    MOV EDI,dword ptr [0x005ae704]      ; 00551c70 | DAT_005ae704
    PUSH EDI                            ; 00551c76 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00551c77
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    MOV EDX,dword ptr [ESI + 0x2b220]   ; 00551c7c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00551c82
    SUB EAX,EDX                         ; 00551c89
    SHL EAX,0x3                         ; 00551c8b
    ADD ESP,0x8                         ; 00551c8e
    ADD EAX,0x5c13cc                    ; 00551c91 | DAT_005c13cc
    PUSH EAX                            ; 00551c96
    MOV EBP,dword ptr [0x005ae704]      ; 00551c97 | DAT_005ae704
    PUSH EBP                            ; 00551c9d | DAT_01b4d738
    XOR EDI,EDI                         ; 00551c9e
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00551ca0
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,dword ptr [ESI + 0x290]     ; 00551ca5
    ADD ESP,0x8                         ; 00551cab
    TEST EAX,EAX                        ; 00551cae
    JLE 0x00551d00                      ; 00551cb0
        ;   XREF to: 00551d00 (CONDITIONAL_JUMP)  ; LAB_00551d00
    MOV ECX,0x2dda6b8                   ; 00551cb2
    LEA EDX,[ESI + 0x294]               ; 00551cb7
    MOV EBX,ECX                         ; 00551cbd
        ;   Label: LAB_00551cbd
    MOV EAX,EDX                         ; 00551cbf
    FLD float ptr [EAX]                 ; 00551cc1
    FMUL float ptr [0x005a3ed0]         ; 00551cc3 | DAT_005a3ed0
    FISTP dword ptr [EBX]               ; 00551cc9 | DAT_02dda6b8 | DAT_02dda6c4
    FLD float ptr [EAX + 0x4]           ; 00551ccb
    FMUL float ptr [0x005a3ed0]         ; 00551cce | DAT_005a3ed0
    FISTP dword ptr [EBX + 0x4]         ; 00551cd4 | DAT_02dda6bc | DAT_02dda6c8
    FLD float ptr [EAX + 0x8]           ; 00551cd7
    FMUL float ptr [0x005a3ed0]         ; 00551cda | DAT_005a3ed0
    FISTP dword ptr [EBX + 0x8]         ; 00551ce0 | DAT_02dda6c0 | DAT_02dda6cc
    INC EDI                             ; 00551ce3
    ADD EDX,0x20                        ; 00551ce4
    MOV EBX,dword ptr [ESI + 0x290]     ; 00551ce7
    ADD ECX,0xc                         ; 00551ced
    CMP EDI,EBX                         ; 00551cf0
    JL 0x00551cbd                       ; 00551cf2
        ;   XREF to: 00551cbd (CONDITIONAL_JUMP)  ; LAB_00551cbd
    LEA EAX,[EAX]                       ; 00551cf4
    LEA EDX,[EDX]                       ; 00551cfa
    PUSH 0x2dda6b8                      ; 00551d00 | DAT_02dda6b8
        ;   Label: LAB_00551d00
    MOV EDI,dword ptr [ESI + 0x290]     ; 00551d05
    PUSH EDI                            ; 00551d0b
    MOV EBP,dword ptr [0x005be368]      ; 00551d0c | DAT_005be368
    PUSH EBP                            ; 00551d12 | DAT_01e57284
    XOR EBX,EBX                         ; 00551d13
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200 ; 00551d15
        ;   XREF to: 0050c200 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200()
    MOV EAX,dword ptr [ESI + 0x290]     ; 00551d1a
    ADD ESP,0xc                         ; 00551d20
    TEST EAX,EAX                        ; 00551d23
    JLE 0x00551db0                      ; 00551d25
        ;   XREF to: 00551db0 (CONDITIONAL_JUMP)  ; LAB_00551db0
    LEA EBP,[ESI + 0x2a0]               ; 00551d2b
    XOR EDI,EDI                         ; 00551d31
    PUSH EBX                            ; 00551d33
        ;   Label: LAB_00551d33
    PUSH 0x2dd1184                      ; 00551d34 | DAT_02dd1184
    PUSH EBP                            ; 00551d39
    MOV EDX,dword ptr [0x005be368]      ; 00551d3a | DAT_005be368
    PUSH EDX                            ; 00551d40 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20 ; 00551d41
        ;   XREF to: 0050be20 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20(CDemonSet * this_ptr, CVector3f * vertex_position, CVector3f * position_offset, int vertex_index)
    MOV ECX,dword ptr [0x005ae704]      ; 00551d46 | DAT_005ae704
    ADD ESP,0x10                        ; 00551d4c
    MOV EAX,dword ptr [ESI + 0x284]     ; 00551d4f
    MOV ECX,dword ptr [ECX]             ; 00551d55 | DAT_01b4d738
    SHL EAX,0x8                         ; 00551d57
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x20] ; 00551d5a
    IMUL EDX                            ; 00551d5e
    SHRD EAX,EDX,0x10                   ; 00551d60
    MOV dword ptr [ECX + EDI*0x1 + 0x20],EAX ; 00551d64
    MOV EAX,dword ptr [ESI + 0x288]     ; 00551d68
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x24] ; 00551d6e
    SHL EAX,0x8                         ; 00551d72
    IMUL EDX                            ; 00551d75
    SHRD EAX,EDX,0x10                   ; 00551d77
    MOV dword ptr [ECX + EDI*0x1 + 0x24],EAX ; 00551d7b
    MOV EAX,dword ptr [ESI + 0x28c]     ; 00551d7f
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x28] ; 00551d85
    SHL EAX,0x8                         ; 00551d89
    ADD EDI,0x30                        ; 00551d8c
    IMUL EDX                            ; 00551d8f
    SHRD EAX,EDX,0x10                   ; 00551d91
    MOV dword ptr [ECX + EDI*0x1 + -0x8],EAX ; 00551d95
    INC EBX                             ; 00551d99
    MOV ECX,dword ptr [ESI + 0x290]     ; 00551d9a
    ADD EBP,0x20                        ; 00551da0
    CMP EBX,ECX                         ; 00551da3
    JL 0x00551d33                       ; 00551da5
        ;   XREF to: 00551d33 (CONDITIONAL_JUMP)  ; LAB_00551d33
    LEA EAX,[EAX]                       ; 00551da7
    LEA EDX,[EDX]                       ; 00551dad
    MOV EDI,dword ptr [ESI + 0x15c]     ; 00551db0
        ;   Label: LAB_00551db0
    LEA EBX,[ESI + 0x7fa0]              ; 00551db6
    CMP EDI,0xfde8                      ; 00551dbc
    JLE 0x00551e05                      ; 00551dc2
        ;   XREF to: 00551e05 (CONDITIONAL_JUMP)  ; LAB_00551e05
    PUSH -0x1                           ; 00551dc4
    MOV EAX,dword ptr [ESI + 0x2b22c]   ; 00551dc6
    PUSH EAX                            ; 00551dcc
    PUSH EBX                            ; 00551dcd
    MOV EDX,dword ptr [0x005be368]      ; 00551dce | DAT_005be368
    PUSH EDX                            ; 00551dd4 | DAT_01e57284
    CALL core_set.cpp_FUN_0050ddd0      ; 00551dd5
        ;   XREF to: 0050ddd0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0050ddd0()
    ADD ESP,0x10                        ; 00551dda
    LEA EAX,[EAX]                       ; 00551ddd
    PUSH 0x0                            ; 00551de0
        ;   Label: LAB_00551de0
    MOV EAX,[0x005ae704]                ; 00551de2 | DAT_005ae704
    PUSH EAX                            ; 00551de7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 00551de8
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00551ded
    POP EBX                             ; 00551df0
    POP EDI                             ; 00551df1
    PUSH ESI                            ; 00551df2
        ;   Label: LAB_00551df2
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00551df3
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00551df8
    MOV EAX,dword ptr [ESP + 0x18]      ; 00551dfb
    ADD ESP,0x1c                        ; 00551dff
    POP EBP                             ; 00551e02
    POP ESI                             ; 00551e03
    RET                                 ; 00551e04
    MOV EBP,dword ptr [ESI + 0x2b22c]   ; 00551e05
        ;   Label: LAB_00551e05
    XOR EDI,EDI                         ; 00551e0b
    TEST EBP,EBP                        ; 00551e0d
    JLE 0x00551de0                      ; 00551e0f
        ;   XREF to: 00551de0 (CONDITIONAL_JUMP)  ; LAB_00551de0
    PUSH 0x267                          ; 00551e11
        ;   Label: LAB_00551e11
    PUSH EBX                            ; 00551e16
    MOV ECX,dword ptr [0x005ae704]      ; 00551e17 | DAT_005ae704
    PUSH ECX                            ; 00551e1d | DAT_01b4d738
    INC EDI                             ; 00551e1e
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460 ; 00551e1f
        ;   XREF to: 0045f460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD EBX,0x48                        ; 00551e24
    MOV EBP,dword ptr [ESI + 0x2b22c]   ; 00551e27
    ADD ESP,0xc                         ; 00551e2d
    CMP EDI,EBP                         ; 00551e30
    JL 0x00551e11                       ; 00551e32
        ;   XREF to: 00551e11 (CONDITIONAL_JUMP)  ; LAB_00551e11
    JMP 0x00551de0                      ; 00551e34
        ;   XREF to: 00551de0 (UNCONDITIONAL_JUMP)  ; LAB_00551de0

