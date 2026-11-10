; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_curtain_cpp_CCurtain_renderMesh_FUN_0044bf20(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_curtain.cpp_CCurtain_renderOpaque_FUN_0044c220 at 0044c234
;
; Referenced Globals:
;   undefined4 DAT_005fe490
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01c51d34
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_box.cpp_FUN_00421670
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00553440
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_005551f0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0044bf20
        ;   Label: core_curtain.cpp_CCurtain_renderMesh_FUN_0044bf20
    PUSH EDI                            ; 0044bf21
    PUSH EBP                            ; 0044bf22
    SUB ESP,0x64                        ; 0044bf23
    MOV EBP,dword ptr [ESP + 0x74]      ; 0044bf26
    PUSH EBP                            ; 0044bf2a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0044bf2b
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0044bf30
    PUSH 0x0                            ; 0044bf33
    MOV EAX,dword ptr [EBP + 0x154]     ; 0044bf35
    PUSH EBP                            ; 0044bf3b
    LEA ESI,[ESP + 0x8]                 ; 0044bf3c
    LEA EDI,[ESP + 0x20]                ; 0044bf40
    CALL dword ptr [EAX + 0x1c]         ; 0044bf44
    MOV ECX,0x6                         ; 0044bf47
    ADD ESP,0x4                         ; 0044bf4c
    LEA EAX,[ESP + 0x1c]                ; 0044bf4f
    LEA ESI,[ESP + 0x4]                 ; 0044bf53
    PUSH EAX                            ; 0044bf57
    MOVSD.REP ES:EDI,ESI                ; 0044bf58
    CALL core_box.cpp_FUN_004207b0      ; 0044bf5a
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0044bf5f
    MOV dword ptr [ESP + 0x60],EAX      ; 0044bf62
    TEST EAX,EAX                        ; 0044bf66
    JZ 0x0044c20a                       ; 0044bf68
        ;   XREF to: 0044c20a (CONDITIONAL_JUMP)  ; LAB_0044c20a
    MOV EDX,dword ptr [0x00612560]      ; 0044bf6e | DAT_00612560
    PUSH EDX                            ; 0044bf74
    MOV dword ptr [EBP + 0x65b30],0x1   ; 0044bf75
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0044bf7f
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0044bf84
    TEST EAX,EAX                        ; 0044bf87
    JZ 0x0044bfa1                       ; 0044bf89
        ;   XREF to: 0044bfa1 (CONDITIONAL_JUMP)  ; LAB_0044bfa1
    CMP dword ptr [EBP + 0x180],0x0     ; 0044bf8b
    JZ 0x0044bfa1                       ; 0044bf92
        ;   XREF to: 0044bfa1 (CONDITIONAL_JUMP)  ; LAB_0044bfa1
    CMP dword ptr [EBP + 0x65b34],0x0   ; 0044bf94
    JZ 0x0044c0ef                       ; 0044bf9b
        ;   XREF to: 0044c0ef (CONDITIONAL_JUMP)  ; LAB_0044c0ef
    PUSH EBX                            ; 0044bfa1
        ;   Label: LAB_0044bfa1
    MOV ESI,dword ptr [EBP + 0x17c]     ; 0044bfa2
    PUSH ESI                            ; 0044bfa8
    MOV EDI,dword ptr [0x00612560]      ; 0044bfa9 | DAT_00612560
    PUSH EDI                            ; 0044bfaf
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 0044bfb0
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0044bfb5
    LEA EAX,[EBP + 0x164]               ; 0044bfb8
    PUSH EAX                            ; 0044bfbe
    MOV EAX,[0x00612560]                ; 0044bfbf | DAT_00612560
    PUSH EAX                            ; 0044bfc4
    XOR ESI,ESI                         ; 0044bfc5
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 0044bfc7
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EDX,[EBP + 0x208]               ; 0044bfcc
    ADD ESP,0x8                         ; 0044bfd2
    LEA EDI,[EBP + 0x1c734]             ; 0044bfd5
    MOV EBX,dword ptr [EBP + 0x204]     ; 0044bfdb
    MOV ECX,EDI                         ; 0044bfe1
    TEST EBX,EBX                        ; 0044bfe3
    JLE 0x0044c020                      ; 0044bfe5
        ;   XREF to: 0044c020 (CONDITIONAL_JUMP)  ; LAB_0044c020
    MOV EBX,ECX                         ; 0044bfe7
        ;   Label: LAB_0044bfe7
    MOV EAX,EDX                         ; 0044bfe9
    FLD float ptr [EAX]                 ; 0044bfeb
    FMUL float ptr [0x005fe490]         ; 0044bfed | DAT_005fe490
    FISTP dword ptr [EBX]               ; 0044bff3
    FLD float ptr [EAX + 0x4]           ; 0044bff5
    FMUL float ptr [0x005fe490]         ; 0044bff8 | DAT_005fe490
    FISTP dword ptr [EBX + 0x4]         ; 0044bffe
    FLD float ptr [EAX + 0x8]           ; 0044c001
    FMUL float ptr [0x005fe490]         ; 0044c004 | DAT_005fe490
    FISTP dword ptr [EBX + 0x8]         ; 0044c00a
    INC ESI                             ; 0044c00d
    ADD EDX,0x74                        ; 0044c00e
    MOV EAX,dword ptr [EBP + 0x204]     ; 0044c011
    ADD ECX,0xc                         ; 0044c017
    CMP ESI,EAX                         ; 0044c01a
    JL 0x0044bfe7                       ; 0044c01c
        ;   XREF to: 0044bfe7 (CONDITIONAL_JUMP)  ; LAB_0044bfe7
    MOV EAX,EAX                         ; 0044c01e
    PUSH EDI                            ; 0044c020
        ;   Label: LAB_0044c020
    MOV EDX,dword ptr [EBP + 0x204]     ; 0044c021
    PUSH EDX                            ; 0044c027
    MOV ECX,dword ptr [0x00622c18]      ; 0044c028 | g_CDemonSetPtr
    PUSH ECX                            ; 0044c02e
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140 ; 0044c02f
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 0044c034
    PUSH 0x1                            ; 0044c037
    MOV EBX,dword ptr [0x00612560]      ; 0044c039 | DAT_00612560
    PUSH EBX                            ; 0044c03f
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0044c040
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    MOV ESI,dword ptr [0x01c51d34]      ; 0044c045 | DAT_01c51d34
    ADD ESP,0x8                         ; 0044c04b
    XOR EDX,EDX                         ; 0044c04e
    TEST ESI,ESI                        ; 0044c050
    SETL AL                             ; 0044c052
    MOV DL,AL                           ; 0044c055
    TEST ESI,ESI                        ; 0044c057
    SETG AL                             ; 0044c059
    MOVZX EDI,AL                        ; 0044c05c
    CMP dword ptr [EBP + 0x180],0x0     ; 0044c05f
    JZ 0x0044c131                       ; 0044c066
        ;   XREF to: 0044c131 (CONDITIONAL_JUMP)  ; LAB_0044c131
    TEST EDX,EDX                        ; 0044c06c
    JZ 0x0044c15d                       ; 0044c06e
        ;   XREF to: 0044c15d (CONDITIONAL_JUMP)  ; LAB_0044c15d
    MOV EDX,dword ptr [EBP + 0x1c72c]   ; 0044c074
        ;   Label: LAB_0044c074
    IMUL EDX,dword ptr [EBP + 0x1c730]  ; 0044c07a
    PUSH 0x0                            ; 0044c081
    PUSH 0x4                            ; 0044c083
    LEA EAX,[EBP + 0x1c734]             ; 0044c085
    PUSH EAX                            ; 0044c08b
    LEA EBX,[EBP + 0x1f614]             ; 0044c08c
    PUSH EBX                            ; 0044c092
    LEA EAX,[EDX + EDX*0x1]             ; 0044c093
    PUSH EAX                            ; 0044c096
    MOV ESI,dword ptr [EBP + 0x204]     ; 0044c097
    PUSH ESI                            ; 0044c09d
    MOV EAX,[0x00622c18]                ; 0044c09e | g_CDemonSetPtr
    PUSH EAX                            ; 0044c0a3
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00553440 ; 0044c0a4
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    MOV EDX,dword ptr [EBP + 0x17c]     ; 0044c0a9
    ADD ESP,0x1c                        ; 0044c0af
    CMP EDX,0xfde8                      ; 0044c0b2
    JG 0x0044c13b                       ; 0044c0b8
        ;   XREF to: 0044c13b (CONDITIONAL_JUMP)  ; LAB_0044c13b
    XOR ESI,ESI                         ; 0044c0be
    MOV EAX,dword ptr [EBP + 0x1c730]   ; 0044c0c0
        ;   Label: LAB_0044c0c0
    MOV EDX,dword ptr [EBP + 0x1c72c]   ; 0044c0c6
    IMUL EDX,EAX                        ; 0044c0cc
    ADD EDX,EDX                         ; 0044c0cf
    CMP ESI,EDX                         ; 0044c0d1
    JGE 0x0044c15d                      ; 0044c0d3
        ;   XREF to: 0044c15d (CONDITIONAL_JUMP)  ; LAB_0044c15d
    PUSH EBX                            ; 0044c0d9
    MOV EDX,dword ptr [0x00612560]      ; 0044c0da | DAT_00612560
    PUSH EDX                            ; 0044c0e0
    INC ESI                             ; 0044c0e1
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120 ; 0044c0e2
        ;   XREF to: 00483120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD EBX,0x48                        ; 0044c0e7
    ADD ESP,0x8                         ; 0044c0ea
    JMP 0x0044c0c0                      ; 0044c0ed
        ;   XREF to: 0044c0c0 (UNCONDITIONAL_JUMP)  ; LAB_0044c0c0
    PUSH EBP                            ; 0044c0ef
        ;   Label: LAB_0044c0ef
    MOV EAX,dword ptr [EBP + 0x154]     ; 0044c0f0
    LEA ESI,[ESP + 0x34]                ; 0044c0f6
    LEA EDI,[ESP + 0x4c]                ; 0044c0fa
    CALL dword ptr [EAX + 0x1c]         ; 0044c0fe
    MOV ECX,0x6                         ; 0044c101
    ADD ESP,0x4                         ; 0044c106
    LEA EAX,[ESP + 0x48]                ; 0044c109
    LEA ESI,[ESP + 0x30]                ; 0044c10d
    PUSH EAX                            ; 0044c111
    MOVSD.REP ES:EDI,ESI                ; 0044c112
    CALL core_box.cpp_FUN_00421670      ; 0044c114
        ;   XREF to: 00421670 (UNCONDITIONAL_CALL)  ; void core_box.cpp_FUN_00421670(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0044c119
    PUSH EBP                            ; 0044c11c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0044c11d
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 0044c122
    ADD ESP,0x4                         ; 0044c127
    ADD ESP,0x64                        ; 0044c12a
    POP EBP                             ; 0044c12d
    POP EDI                             ; 0044c12e
    POP ESI                             ; 0044c12f
    RET                                 ; 0044c130
    MOV EDI,0x1                         ; 0044c131
        ;   Label: LAB_0044c131
    JMP 0x0044c074                      ; 0044c136
        ;   XREF to: 0044c074 (UNCONDITIONAL_JUMP)  ; LAB_0044c074
    MOV EDX,dword ptr [EBP + 0x1c72c]   ; 0044c13b
        ;   Label: LAB_0044c13b
    IMUL EDX,dword ptr [EBP + 0x1c730]  ; 0044c141
    PUSH -0x1                           ; 0044c148
    ADD EDX,EDX                         ; 0044c14a
    PUSH EDX                            ; 0044c14c
    PUSH EBX                            ; 0044c14d
    MOV EBX,dword ptr [0x00622c18]      ; 0044c14e | g_CDemonSetPtr
    PUSH EBX                            ; 0044c154
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_005551f0 ; 0044c155
        ;   XREF to: 005551f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_005551f0(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 0044c15a
    TEST EDI,EDI                        ; 0044c15d
        ;   Label: LAB_0044c15d
    JZ 0x0044c1f8                       ; 0044c15f
        ;   XREF to: 0044c1f8 (CONDITIONAL_JUMP)  ; LAB_0044c1f8
    MOV EDX,dword ptr [EBP + 0x1c72c]   ; 0044c165
    IMUL EDX,dword ptr [EBP + 0x1c730]  ; 0044c16b
    PUSH 0x0                            ; 0044c172
    PUSH 0x4                            ; 0044c174
    LEA EAX,[EBP + 0x1c734]             ; 0044c176
    PUSH EAX                            ; 0044c17c
    LEA EBX,[EBP + 0x42894]             ; 0044c17d
    PUSH EBX                            ; 0044c183
    ADD EDX,EDX                         ; 0044c184
    PUSH EDX                            ; 0044c186
    MOV ESI,dword ptr [EBP + 0x204]     ; 0044c187
    PUSH ESI                            ; 0044c18d
    MOV EDI,dword ptr [0x00622c18]      ; 0044c18e | g_CDemonSetPtr
    PUSH EDI                            ; 0044c194
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00553440 ; 0044c195
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    MOV EAX,dword ptr [EBP + 0x17c]     ; 0044c19a
    ADD ESP,0x1c                        ; 0044c1a0
    CMP EAX,0xfde8                      ; 0044c1a3
    JG 0x0044c1d6                       ; 0044c1a8
        ;   XREF to: 0044c1d6 (CONDITIONAL_JUMP)  ; LAB_0044c1d6
    XOR ESI,ESI                         ; 0044c1aa
    MOV EDI,dword ptr [EBP + 0x1c730]   ; 0044c1ac
        ;   Label: LAB_0044c1ac
    MOV EDX,dword ptr [EBP + 0x1c72c]   ; 0044c1b2
    IMUL EDX,EDI                        ; 0044c1b8
    ADD EDX,EDX                         ; 0044c1bb
    CMP ESI,EDX                         ; 0044c1bd
    JGE 0x0044c1f8                      ; 0044c1bf
        ;   XREF to: 0044c1f8 (CONDITIONAL_JUMP)  ; LAB_0044c1f8
    PUSH EBX                            ; 0044c1c1
    MOV EAX,[0x00612560]                ; 0044c1c2 | DAT_00612560
    PUSH EAX                            ; 0044c1c7
    INC ESI                             ; 0044c1c8
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120 ; 0044c1c9
        ;   XREF to: 00483120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD EBX,0x48                        ; 0044c1ce
    ADD ESP,0x8                         ; 0044c1d1
    JMP 0x0044c1ac                      ; 0044c1d4
        ;   XREF to: 0044c1ac (UNCONDITIONAL_JUMP)  ; LAB_0044c1ac
    MOV EDX,dword ptr [EBP + 0x1c72c]   ; 0044c1d6
        ;   Label: LAB_0044c1d6
    IMUL EDX,dword ptr [EBP + 0x1c730]  ; 0044c1dc
    PUSH -0x1                           ; 0044c1e3
    ADD EDX,EDX                         ; 0044c1e5
    PUSH EDX                            ; 0044c1e7
    PUSH EBX                            ; 0044c1e8
    MOV EBX,dword ptr [0x00622c18]      ; 0044c1e9 | g_CDemonSetPtr
    PUSH EBX                            ; 0044c1ef
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_005551f0 ; 0044c1f0
        ;   XREF to: 005551f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_005551f0(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 0044c1f5
    PUSH 0x0                            ; 0044c1f8
        ;   Label: LAB_0044c1f8
    MOV EDX,dword ptr [0x00612560]      ; 0044c1fa | DAT_00612560
    PUSH EDX                            ; 0044c200
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0044c201
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0044c206
    POP EBX                             ; 0044c209
    PUSH EBP                            ; 0044c20a
        ;   Label: LAB_0044c20a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0044c20b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0044c210
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044c213
    ADD ESP,0x64                        ; 0044c217
    POP EBP                             ; 0044c21a
    POP EDI                             ; 0044c21b
    POP ESI                             ; 0044c21c
    RET                                 ; 0044c21d

