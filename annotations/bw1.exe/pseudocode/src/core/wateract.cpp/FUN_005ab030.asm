; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_wateract_cpp_FUN_005ab030(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00607bf0
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140
;   core_set.cpp_FUN_00552d40
;   core_set.cpp_FUN_005551f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ab030
        ;   Label: core_wateract.cpp_FUN_005ab030
    SUB ESP,0x34                        ; 005ab031
    MOV EBP,dword ptr [ESP + 0x3c]      ; 005ab034
    MOV EDX,dword ptr [0x00612560]      ; 005ab038 | DAT_00612560
    PUSH EDX                            ; 005ab03e
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 005ab03f
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005ab044
    TEST EAX,EAX                        ; 005ab047
    JZ 0x005ab052                       ; 005ab049
        ;   XREF to: 005ab052 (CONDITIONAL_JUMP)  ; LAB_005ab052
    XOR EAX,EAX                         ; 005ab04b
    ADD ESP,0x34                        ; 005ab04d
    POP EBP                             ; 005ab050
    RET                                 ; 005ab051
    PUSH EDI                            ; 005ab052
        ;   Label: LAB_005ab052
    PUSH ESI                            ; 005ab053
    PUSH EBP                            ; 005ab054
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 005ab055
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ab05a
    PUSH 0x0                            ; 005ab05d
    MOV EAX,dword ptr [EBP + 0x154]     ; 005ab05f
    PUSH EBP                            ; 005ab065
    LEA ESI,[ESP + 0x28]                ; 005ab066
    LEA EDI,[ESP + 0x10]                ; 005ab06a
    CALL dword ptr [EAX + 0x1c]         ; 005ab06e
    MOV ECX,0x6                         ; 005ab071
    ADD ESP,0x4                         ; 005ab076
    LEA EAX,[ESP + 0xc]                 ; 005ab079
    LEA ESI,[ESP + 0x24]                ; 005ab07d
    PUSH EAX                            ; 005ab081
    MOVSD.REP ES:EDI,ESI                ; 005ab082
    CALL core_box.cpp_FUN_004207b0      ; 005ab084
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 005ab089
    MOV dword ptr [ESP + 0x38],EAX      ; 005ab08c
    TEST EAX,EAX                        ; 005ab090
    JZ 0x005ab231                       ; 005ab092
        ;   XREF to: 005ab231 (CONDITIONAL_JUMP)  ; LAB_005ab231
    PUSH EBX                            ; 005ab098
    MOV ECX,dword ptr [EBP + 0x164]     ; 005ab099
    PUSH ECX                            ; 005ab09f
    MOV EBX,dword ptr [0x00612560]      ; 005ab0a0 | DAT_00612560
    PUSH EBX                            ; 005ab0a6
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 005ab0a7
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005ab0ac
    PUSH 0x0                            ; 005ab0af
    MOV ESI,dword ptr [0x00612560]      ; 005ab0b1 | DAT_00612560
    PUSH ESI                            ; 005ab0b7
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 005ab0b8
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    MOV EDX,dword ptr [EBP + 0x2b228]   ; 005ab0bd
    LEA EAX,[EDX*0x4 + 0x0]             ; 005ab0c3
    SUB EAX,EDX                         ; 005ab0ca
    SHL EAX,0x3                         ; 005ab0cc
    ADD ESP,0x8                         ; 005ab0cf
    ADD EAX,0x625e74                    ; 005ab0d2
    PUSH EAX                            ; 005ab0d7
    MOV EDI,dword ptr [0x00612560]      ; 005ab0d8 | DAT_00612560
    PUSH EDI                            ; 005ab0de
    XOR ESI,ESI                         ; 005ab0df
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 005ab0e1
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,dword ptr [EBP + 0x298]     ; 005ab0e6
    ADD ESP,0x8                         ; 005ab0ec
    TEST EAX,EAX                        ; 005ab0ef
    JLE 0x005ab140                      ; 005ab0f1
        ;   XREF to: 005ab140 (CONDITIONAL_JUMP)  ; LAB_005ab140
    MOV ECX,0x2c94468                   ; 005ab0f3
    LEA EDX,[EBP + 0x29c]               ; 005ab0f8
    MOV EBX,ECX                         ; 005ab0fe
        ;   Label: LAB_005ab0fe
    MOV EAX,EDX                         ; 005ab100
    FLD float ptr [EAX]                 ; 005ab102
    FMUL float ptr [0x00607bf0]         ; 005ab104 | DAT_00607bf0
    FISTP dword ptr [EBX]               ; 005ab10a
    FLD float ptr [EAX + 0x4]           ; 005ab10c
    FMUL float ptr [0x00607bf0]         ; 005ab10f | DAT_00607bf0
    FISTP dword ptr [EBX + 0x4]         ; 005ab115
    FLD float ptr [EAX + 0x8]           ; 005ab118
    FMUL float ptr [0x00607bf0]         ; 005ab11b | DAT_00607bf0
    FISTP dword ptr [EBX + 0x8]         ; 005ab121
    INC ESI                             ; 005ab124
    ADD EDX,0x20                        ; 005ab125
    MOV EBX,dword ptr [EBP + 0x298]     ; 005ab128
    ADD ECX,0xc                         ; 005ab12e
    CMP ESI,EBX                         ; 005ab131
    JL 0x005ab0fe                       ; 005ab133
        ;   XREF to: 005ab0fe (CONDITIONAL_JUMP)  ; LAB_005ab0fe
    LEA EAX,[EAX]                       ; 005ab135
    LEA EDX,[EDX]                       ; 005ab13b
    MOV EBX,EBX                         ; 005ab13e
    PUSH 0x2c94468                      ; 005ab140
        ;   Label: LAB_005ab140
    MOV ESI,dword ptr [EBP + 0x298]     ; 005ab145
    PUSH ESI                            ; 005ab14b
    MOV EDI,dword ptr [0x00622c18]      ; 005ab14c | g_CDemonSetPtr
    PUSH EDI                            ; 005ab152
    XOR EBX,EBX                         ; 005ab153
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140 ; 005ab155
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EAX,dword ptr [EBP + 0x298]     ; 005ab15a
    ADD ESP,0xc                         ; 005ab160
    TEST EAX,EAX                        ; 005ab163
    JLE 0x005ab1f0                      ; 005ab165
        ;   XREF to: 005ab1f0 (CONDITIONAL_JUMP)  ; LAB_005ab1f0
    LEA ESI,[EBP + 0x2a8]               ; 005ab16b
    XOR EDI,EDI                         ; 005ab171
    PUSH EBX                            ; 005ab173
        ;   Label: LAB_005ab173
    PUSH 0x2c8af28                      ; 005ab174
    PUSH ESI                            ; 005ab179
    MOV EDX,dword ptr [0x00622c18]      ; 005ab17a | g_CDemonSetPtr
    PUSH EDX                            ; 005ab180
    CALL core_set.cpp_FUN_00552d40      ; 005ab181
        ;   XREF to: 00552d40 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00552d40(CDemonSet * this_ptr, CVector3f * vertex_position, CVector3f * position_offset, int vertex_index)
    MOV ECX,dword ptr [0x00612560]      ; 005ab186 | DAT_00612560
    ADD ESP,0x10                        ; 005ab18c
    MOV EAX,dword ptr [EBP + 0x28c]     ; 005ab18f
    MOV ECX,dword ptr [ECX]             ; 005ab195
    SHL EAX,0x8                         ; 005ab197
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x20] ; 005ab19a
    IMUL EDX                            ; 005ab19e
    SHRD EAX,EDX,0x10                   ; 005ab1a0
    MOV dword ptr [ECX + EDI*0x1 + 0x20],EAX ; 005ab1a4
    MOV EAX,dword ptr [EBP + 0x290]     ; 005ab1a8
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x24] ; 005ab1ae
    SHL EAX,0x8                         ; 005ab1b2
    IMUL EDX                            ; 005ab1b5
    SHRD EAX,EDX,0x10                   ; 005ab1b7
    MOV dword ptr [ECX + EDI*0x1 + 0x24],EAX ; 005ab1bb
    MOV EAX,dword ptr [EBP + 0x294]     ; 005ab1bf
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x28] ; 005ab1c5
    SHL EAX,0x8                         ; 005ab1c9
    ADD EDI,0x30                        ; 005ab1cc
    IMUL EDX                            ; 005ab1cf
    SHRD EAX,EDX,0x10                   ; 005ab1d1
    MOV dword ptr [ECX + EDI*0x1 + -0x8],EAX ; 005ab1d5
    INC EBX                             ; 005ab1d9
    MOV ECX,dword ptr [EBP + 0x298]     ; 005ab1da
    ADD ESI,0x20                        ; 005ab1e0
    CMP EBX,ECX                         ; 005ab1e3
    JL 0x005ab173                       ; 005ab1e5
        ;   XREF to: 005ab173 (CONDITIONAL_JUMP)  ; LAB_005ab173
    LEA EAX,[EAX]                       ; 005ab1e7
    LEA EDX,[EDX]                       ; 005ab1ed
    MOV ESI,dword ptr [EBP + 0x164]     ; 005ab1f0
        ;   Label: LAB_005ab1f0
    LEA EBX,[EBP + 0x7fa8]              ; 005ab1f6
    CMP ESI,0xfde8                      ; 005ab1fc
    JLE 0x005ab245                      ; 005ab202
        ;   XREF to: 005ab245 (CONDITIONAL_JUMP)  ; LAB_005ab245
    PUSH -0x1                           ; 005ab204
    MOV EAX,dword ptr [EBP + 0x2b234]   ; 005ab206
    PUSH EAX                            ; 005ab20c
    PUSH EBX                            ; 005ab20d
    MOV EDX,dword ptr [0x00622c18]      ; 005ab20e | g_CDemonSetPtr
    PUSH EDX                            ; 005ab214
    CALL core_set.cpp_FUN_005551f0      ; 005ab215
        ;   XREF to: 005551f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005551f0(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 005ab21a
    LEA EAX,[EAX]                       ; 005ab21d
    PUSH 0x0                            ; 005ab220
        ;   Label: LAB_005ab220
    MOV EAX,[0x00612560]                ; 005ab222 | DAT_00612560
    PUSH EAX                            ; 005ab227
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 005ab228
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 005ab22d
    POP EBX                             ; 005ab230
    PUSH EBP                            ; 005ab231
        ;   Label: LAB_005ab231
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 005ab232
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ab237
    MOV EAX,dword ptr [ESP + 0x38]      ; 005ab23a
    POP ESI                             ; 005ab23e
    POP EDI                             ; 005ab23f
    ADD ESP,0x34                        ; 005ab240
    POP EBP                             ; 005ab243
    RET                                 ; 005ab244
    MOV EDI,dword ptr [EBP + 0x2b234]   ; 005ab245
        ;   Label: LAB_005ab245
    XOR ESI,ESI                         ; 005ab24b
    TEST EDI,EDI                        ; 005ab24d
    JLE 0x005ab220                      ; 005ab24f
        ;   XREF to: 005ab220 (CONDITIONAL_JUMP)  ; LAB_005ab220
    PUSH 0x267                          ; 005ab251
        ;   Label: LAB_005ab251
    PUSH EBX                            ; 005ab256
    MOV ECX,dword ptr [0x00612560]      ; 005ab257 | DAT_00612560
    PUSH ECX                            ; 005ab25d
    INC ESI                             ; 005ab25e
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210 ; 005ab25f
        ;   XREF to: 00482210 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD EBX,0x48                        ; 005ab264
    MOV EDI,dword ptr [EBP + 0x2b234]   ; 005ab267
    ADD ESP,0xc                         ; 005ab26d
    CMP ESI,EDI                         ; 005ab270
    JL 0x005ab251                       ; 005ab272
        ;   XREF to: 005ab251 (CONDITIONAL_JUMP)  ; LAB_005ab251
    JMP 0x005ab220                      ; 005ab274
        ;   XREF to: 005ab220 (UNCONDITIONAL_JUMP)  ; LAB_005ab220

