; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_004ac0b0(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_FUN_004b5100 at 004b528c
;
; Referenced Globals:
;   TerminatedCString s_core_fire_cpp_005df188
;   TerminatedCString s_CSmokeParticle_render_Fr_005df199
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c014
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_0062905c
;   undefined4 DAT_00629060
;   undefined4 DAT_0062908c
;   undefined4 DAT_00629090
;   undefined4 DAT_006290bc
;   undefined4 DAT_006290c0
;   undefined4 DAT_007c6120
;   ... and 7 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_set.cpp_CDemonSet_computeLighting_FUN_00552a70
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_matrix.c_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ac0b0
        ;   Label: core_fire.cpp_CSmokeParticle_render_FUN_004ac0b0
    PUSH ESI                            ; 004ac0b1
    PUSH EDI                            ; 004ac0b2
    PUSH EBP                            ; 004ac0b3
    SUB ESP,0x60                        ; 004ac0b4
    MOV EDI,dword ptr [ESP + 0x74]      ; 004ac0b7
    MOV ESI,dword ptr [0x00612560]      ; 004ac0bb | DAT_00612560
    LEA EBX,[ESP + 0xc]                 ; 004ac0c1
    LEA EAX,[EDI + 0x4]                 ; 004ac0c5
    MOV ESI,dword ptr [ESI]             ; 004ac0c8 | DAT_01bc120c
    FLD float ptr [EAX]                 ; 004ac0ca
    FMUL float ptr [0x005fff94]         ; 004ac0cc | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ac0d2
    FLD float ptr [EAX + 0x4]           ; 004ac0d4
    FMUL float ptr [0x005fff94]         ; 004ac0d7 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ac0dd
    FLD float ptr [EAX + 0x8]           ; 004ac0e0
    FMUL float ptr [0x005fff94]         ; 004ac0e3 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ac0e9
    LEA EAX,[ESP + 0xc]                 ; 004ac0ec
    PUSH EAX                            ; 004ac0f0
    PUSH ESI                            ; 004ac0f1
    CALL engine_special.cpp_FUN_0058043c ; 004ac0f2
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ac0f7
    PUSH ESI                            ; 004ac0fa
    MOV EDX,dword ptr [0x00612560]      ; 004ac0fb | DAT_00612560
    PUSH EDX                            ; 004ac101 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0 ; 004ac102
        ;   XREF to: 00484fd0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004ac107
    TEST EAX,EAX                        ; 004ac10a
    JZ 0x004ac3d6                       ; 004ac10c
        ;   XREF to: 004ac3d6 (CONDITIONAL_JUMP)  ; LAB_004ac3d6
    FLD float ptr [EDI + 0x18]          ; 004ac112
    CALL crt_math.c_round_FUN_005c03a0  ; 004ac115
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x58]        ; 004ac11a
    MOV ECX,dword ptr [ESP + 0x58]      ; 004ac11e
    TEST ECX,ECX                        ; 004ac122
    JL 0x004ac12b                       ; 004ac124
        ;   XREF to: 004ac12b (CONDITIONAL_JUMP)  ; LAB_004ac12b
    CMP ECX,0x28                        ; 004ac126
    JL 0x004ac14e                       ; 004ac129
        ;   XREF to: 004ac14e (CONDITIONAL_JUMP)  ; LAB_004ac14e
    MOV ESI,0x5df188                    ; 004ac12b | = "..\\core\\fire.cpp"
        ;   Label: LAB_004ac12b
    MOV EBP,0x11d                       ; 004ac130
    PUSH 0x5df199                       ; 004ac135 | = "CSmokeParticle::render - Frame out of..."
    MOV dword ptr [0x01d1d400],ESI      ; 004ac13a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 004ac140 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004ac146
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004ac14b
    MOV EBX,dword ptr [ESP + 0x58]      ; 004ac14e
        ;   Label: LAB_004ac14e
    LEA EAX,[EBX*0x4 + 0x0]             ; 004ac152
    SUB EAX,EBX                         ; 004ac159
    SHL EAX,0x3                         ; 004ac15b
    ADD EAX,0x61c014                    ; 004ac15e | DAT_0061c014
    PUSH EAX                            ; 004ac163
    MOV EAX,[0x00612560]                ; 004ac164 | DAT_00612560
    PUSH EAX                            ; 004ac169 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004ac16a
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004ac16f
    LEA ESI,[EDI + 0x4]                 ; 004ac172
    PUSH ESI                            ; 004ac175
    MOV EDX,dword ptr [0x00612560]      ; 004ac176 | DAT_00612560
    PUSH EDX                            ; 004ac17c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004ac17d
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004ac182
    PUSH 0x0                            ; 004ac185
    PUSH 0x1c57078                      ; 004ac187 | DAT_01c57078
    MOV ECX,dword ptr [0x00612560]      ; 004ac18c | DAT_00612560
    PUSH ECX                            ; 004ac192 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004ac193
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004ac198
    MOV EAX,dword ptr [EDI + 0x14]      ; 004ac19b
    XOR EBX,EBX                         ; 004ac19e
    MOV dword ptr [ESP + 0x5c],EAX      ; 004ac1a0
    MOV dword ptr [ESP + 0x20],EBX      ; 004ac1a4
    FLD float ptr [ESP + 0x5c]          ; 004ac1a8
    FCHS                                ; 004ac1ac
    FSTP float ptr [ESP + 0x18]         ; 004ac1ae
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ac1b2
    LEA EBX,[ESP + 0x48]                ; 004ac1b6
    MOV dword ptr [ESP + 0x54],EAX      ; 004ac1ba
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ac1be
    LEA EAX,[ESP + 0x18]                ; 004ac1c2
    MOV EDX,dword ptr [0x00612560]      ; 004ac1c6 | DAT_00612560
    FLD float ptr [EAX]                 ; 004ac1cc
    FMUL float ptr [0x005fff94]         ; 004ac1ce | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ac1d4
    FLD float ptr [EAX + 0x4]           ; 004ac1d6
    FMUL float ptr [0x005fff94]         ; 004ac1d9 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ac1df
    FLD float ptr [EAX + 0x8]           ; 004ac1e2
    FMUL float ptr [0x005fff94]         ; 004ac1e5 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ac1eb
    LEA EAX,[ESP + 0x48]                ; 004ac1ee
    PUSH EAX                            ; 004ac1f2
    MOV EAX,dword ptr [EDX]             ; 004ac1f3 | DAT_01bc120c
    PUSH EAX                            ; 004ac1f5
    CALL engine_special.cpp_FUN_00580173 ; 004ac1f6
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ac1fb
    XOR EBP,EBP                         ; 004ac1fe
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004ac200
    MOV EBX,ESP                         ; 004ac204
    MOV dword ptr [ESP + 0x18],EAX      ; 004ac206
    MOV EAX,dword ptr [ESP + 0x54]      ; 004ac20a
    MOV EDX,dword ptr [0x00612560]      ; 004ac20e | DAT_00612560
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ac214
    LEA EAX,[ESP + 0x18]                ; 004ac218
    MOV dword ptr [ESP + 0x20],EBP      ; 004ac21c
    FLD float ptr [EAX]                 ; 004ac220
    FMUL float ptr [0x005fff94]         ; 004ac222 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ac228
    FLD float ptr [EAX + 0x4]           ; 004ac22a
    FMUL float ptr [0x005fff94]         ; 004ac22d | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ac233
    FLD float ptr [EAX + 0x8]           ; 004ac236
    FMUL float ptr [0x005fff94]         ; 004ac239 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ac23f
    MOV EAX,ESP                         ; 004ac242
    PUSH EAX                            ; 004ac244
    MOV EAX,dword ptr [EDX]             ; 004ac245 | DAT_01bc120c
    ADD EAX,0x30                        ; 004ac247
    PUSH EAX                            ; 004ac24a
    CALL engine_special.cpp_FUN_00580173 ; 004ac24b
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ac250
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004ac253
    MOV dword ptr [ESP + 0x20],EBP      ; 004ac257
    MOV dword ptr [ESP + 0x18],EAX      ; 004ac25b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ac25f
    LEA EBX,[ESP + 0x3c]                ; 004ac263
    LEA EAX,[ESP + 0x18]                ; 004ac267
    MOV EDX,dword ptr [0x00612560]      ; 004ac26b | DAT_00612560
    FLD float ptr [EAX]                 ; 004ac271
    FMUL float ptr [0x005fff94]         ; 004ac273 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ac279
    FLD float ptr [EAX + 0x4]           ; 004ac27b
    FMUL float ptr [0x005fff94]         ; 004ac27e | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ac284
    FLD float ptr [EAX + 0x8]           ; 004ac287
    FMUL float ptr [0x005fff94]         ; 004ac28a | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ac290
    LEA EAX,[ESP + 0x3c]                ; 004ac293
    PUSH EAX                            ; 004ac297
    MOV EAX,dword ptr [EDX]             ; 004ac298 | DAT_01bc120c
    ADD EAX,0x60                        ; 004ac29a
    PUSH EAX                            ; 004ac29d
    CALL engine_special.cpp_FUN_00580173 ; 004ac29e
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ac2a3
    MOV EAX,dword ptr [ESP + 0x54]      ; 004ac2a6
    LEA EBX,[ESP + 0x24]                ; 004ac2aa
    MOV dword ptr [ESP + 0x18],EAX      ; 004ac2ae
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004ac2b2
    MOV EDX,dword ptr [0x00612560]      ; 004ac2b6 | DAT_00612560
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ac2bc
    LEA EAX,[ESP + 0x18]                ; 004ac2c0
    MOV dword ptr [ESP + 0x20],EBP      ; 004ac2c4
    FLD float ptr [EAX]                 ; 004ac2c8
    FMUL float ptr [0x005fff94]         ; 004ac2ca | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ac2d0
    FLD float ptr [EAX + 0x4]           ; 004ac2d2
    FMUL float ptr [0x005fff94]         ; 004ac2d5 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ac2db
    FLD float ptr [EAX + 0x8]           ; 004ac2de
    FMUL float ptr [0x005fff94]         ; 004ac2e1 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ac2e7
    LEA EAX,[ESP + 0x24]                ; 004ac2ea
    PUSH EAX                            ; 004ac2ee
    MOV EAX,dword ptr [EDX]             ; 004ac2ef | DAT_01bc120c
    ADD EAX,0x90                        ; 004ac2f1
    PUSH EAX                            ; 004ac2f6
    CALL engine_special.cpp_FUN_00580173 ; 004ac2f7
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 004ac2fc
    MOV EBX,0xf80000                    ; 004ac301
    ADD ESP,0x8                         ; 004ac306
    MOV EAX,ESI                         ; 004ac309
    MOV dword ptr [0x0062902c],ECX      ; 004ac30b | DAT_0062902c
    MOV dword ptr [0x00629030],EBX      ; 004ac311 | DAT_00629030
    MOV dword ptr [0x0062905c],EBX      ; 004ac317 | DAT_0062905c
    MOV dword ptr [0x00629060],EBX      ; 004ac31d | DAT_00629060
    MOV dword ptr [0x0062908c],EBX      ; 004ac323 | DAT_0062908c
    MOV dword ptr [0x00629090],ECX      ; 004ac329 | DAT_00629090
    MOV dword ptr [0x006290bc],ECX      ; 004ac32f | DAT_006290bc
    LEA EBX,[ESP + 0x30]                ; 004ac335
    MOV dword ptr [0x006290c0],ECX      ; 004ac339 | DAT_006290c0
    FLD float ptr [EAX]                 ; 004ac33f
    FMUL float ptr [0x005fff94]         ; 004ac341 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ac347
    FLD float ptr [EAX + 0x4]           ; 004ac349
    FMUL float ptr [0x005fff94]         ; 004ac34c | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ac352
    FLD float ptr [EAX + 0x8]           ; 004ac355
    FMUL float ptr [0x005fff94]         ; 004ac358 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ac35e
    PUSH 0x4                            ; 004ac361
    PUSH EBP                            ; 004ac363
    PUSH 0x1c57084                      ; 004ac364 | DAT_01c57084
    LEA EAX,[ESP + 0x3c]                ; 004ac369
    PUSH EAX                            ; 004ac36d
    MOV EAX,[0x00622c18]                ; 004ac36e | g_CDemonSetPtr
    PUSH EAX                            ; 004ac373 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00552a70 ; 004ac374
        ;   XREF to: 00552a70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004ac379
    PUSH EBP                            ; 004ac37c
    MOV EAX,[0x007c6120]                ; 004ac37d | DAT_007c6120
    PUSH ESI                            ; 004ac382
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004ac383
    PUSH EAX                            ; 004ac386
    CALL dword ptr [EDX + 0x4]          ; 004ac387
    MOV EAX,0xffff                      ; 004ac38a
    MOV EDX,dword ptr [0x01c51cac]      ; 004ac38f | DAT_01c51cac
    ADD ESP,0xc                         ; 004ac395
    SUB EAX,EDX                         ; 004ac398
    MOV EDX,dword ptr [EDI + 0x28]      ; 004ac39a
    IMUL EDX                            ; 004ac39d
    SHRD EAX,EDX,0x10                   ; 004ac39f
    PUSH EAX                            ; 004ac3a3
    MOV ECX,dword ptr [0x00612560]      ; 004ac3a4 | DAT_00612560
    PUSH ECX                            ; 004ac3aa | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004ac3ab
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ac3b0
    PUSH 0x1c57090                      ; 004ac3b3
    MOV EBX,dword ptr [0x00612560]      ; 004ac3b8 | DAT_00612560
    PUSH EBX                            ; 004ac3be | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004ac3bf
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004ac3c4
    MOV ESI,dword ptr [0x00612560]      ; 004ac3c7 | DAT_00612560
    PUSH ESI                            ; 004ac3cd | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004ac3ce
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004ac3d3
    ADD ESP,0x60                        ; 004ac3d6
        ;   Label: LAB_004ac3d6
    POP EBP                             ; 004ac3d9
    POP EDI                             ; 004ac3da
    POP ESI                             ; 004ac3db
    POP EBX                             ; 004ac3dc
    RET                                 ; 004ac3dd

