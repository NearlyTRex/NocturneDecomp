; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_renderBackground_FUN_00512200(CPlatform *this_ptr,int layer_flag)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Referenced Globals:
;   undefined4 DAT_005e32e0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba60
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_007e2a54
;   undefined4 DAT_01547200
;   undefined4 DAT_01bdd7e4
;   undefined4 g_CDemonSetInstance.per_pixel_lighting_enabled
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512200
        ;   Label: core_platfrm.cpp_CPlatform_renderBackground_FUN_00512200
    PUSH EBP                            ; 00512201
    SUB ESP,0x3c                        ; 00512202
    MOV EBP,dword ptr [ESP + 0x48]      ; 00512205
    MOV EDX,dword ptr [0x005f2afc]      ; 00512209 | DAT_005f2afc
    PUSH EDX                            ; 0051220f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 00512210
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00512215
    TEST EAX,EAX                        ; 00512218
    JNZ 0x0051224e                      ; 0051221a
        ;   XREF to: 0051224e (CONDITIONAL_JUMP)  ; LAB_0051224e
    CMP dword ptr [ESP + 0x4c],0x0      ; 0051221c
    JZ 0x0051224e                       ; 00512221
        ;   XREF to: 0051224e (CONDITIONAL_JUMP)  ; LAB_0051224e
    CMP dword ptr [EBP + 0x4c0],0x2     ; 00512223
    JGE 0x00512235                      ; 0051222a
        ;   XREF to: 00512235 (CONDITIONAL_JUMP)  ; LAB_00512235
    CMP dword ptr [EBP + 0x4c8],0x0     ; 0051222c
    JZ 0x0051224e                       ; 00512233
        ;   XREF to: 0051224e (CONDITIONAL_JUMP)  ; LAB_0051224e
    CMP dword ptr [EBP + 0x4c8],0x0     ; 00512235
        ;   Label: LAB_00512235
    JZ 0x00512288                       ; 0051223c
        ;   XREF to: 00512288 (CONDITIONAL_JUMP)  ; LAB_00512288
    MOV EAX,dword ptr [EBP + 0x2d4]     ; 0051223e
    CMP EAX,0x3                         ; 00512244
    JZ 0x0051224e                       ; 00512247
        ;   XREF to: 0051224e (CONDITIONAL_JUMP)  ; LAB_0051224e
    CMP EAX,0x4                         ; 00512249
    JNZ 0x00512254                      ; 0051224c
        ;   XREF to: 00512254 (CONDITIONAL_JUMP)  ; LAB_00512254
    ADD ESP,0x3c                        ; 0051224e
        ;   Label: LAB_0051224e
    POP EBP                             ; 00512251
    POP EBX                             ; 00512252
    RET                                 ; 00512253
    LEA EAX,[EBP + 0x3b8]               ; 00512254
        ;   Label: LAB_00512254
    PUSH EAX                            ; 0051225a
    MOV ECX,dword ptr [0x005fba60]      ; 0051225b | DAT_005fba60
    PUSH ECX                            ; 00512261
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00512262
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00512267
    TEST EAX,EAX                        ; 0051226a
    JNZ 0x0051224e                      ; 0051226c
        ;   XREF to: 0051224e (CONDITIONAL_JUMP)  ; LAB_0051224e
    LEA EAX,[EBP + 0x354]               ; 0051226e
    PUSH EAX                            ; 00512274
    MOV EBX,dword ptr [0x005fba60]      ; 00512275 | DAT_005fba60
    PUSH EBX                            ; 0051227b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0051227c
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00512281
    TEST EAX,EAX                        ; 00512284
    JNZ 0x0051224e                      ; 00512286
        ;   XREF to: 0051224e (CONDITIONAL_JUMP)  ; LAB_0051224e
    PUSH EDI                            ; 00512288
        ;   Label: LAB_00512288
    PUSH ESI                            ; 00512289
    MOV ESI,dword ptr [0x005f2afc]      ; 0051228a | DAT_005f2afc
    PUSH ESI                            ; 00512290 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 00512291
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00512296
    TEST EAX,EAX                        ; 00512299
    JNZ 0x005122b4                      ; 0051229b
        ;   XREF to: 005122b4 (CONDITIONAL_JUMP)  ; LAB_005122b4
    CMP dword ptr [EBP + 0x4c8],0x0     ; 0051229d
    JNZ 0x0051239e                      ; 005122a4
        ;   XREF to: 0051239e (CONDITIONAL_JUMP)  ; LAB_0051239e
    MOV dword ptr [EBP + 0x4c0],0x3     ; 005122aa
    PUSH EBP                            ; 005122b4
        ;   Label: LAB_005122b4
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 005122b5
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005122ba
    PUSH 0x0                            ; 005122bd
    MOV EAX,dword ptr [EBP + 0x154]     ; 005122bf
    PUSH EBP                            ; 005122c5
    LEA ESI,[ESP + 0x10]                ; 005122c6
    LEA EDI,[ESP + 0x28]                ; 005122ca
    CALL dword ptr [EAX + 0x1c]         ; 005122ce
    MOV ECX,0x6                         ; 005122d1
    ADD ESP,0x4                         ; 005122d6
    LEA EAX,[ESP + 0x24]                ; 005122d9
    LEA ESI,[ESP + 0xc]                 ; 005122dd
    PUSH EAX                            ; 005122e1
    MOVSD.REP ES:EDI,ESI                ; 005122e2
    CALL core_box.cpp_FUN_0041daf0      ; 005122e4
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 005122e9
    TEST EAX,EAX                        ; 005122ec
    JZ 0x0051238d                       ; 005122ee
        ;   XREF to: 0051238d (CONDITIONAL_JUMP)  ; LAB_0051238d
    CMP dword ptr [EBP + 0x514],0x0     ; 005122f4
    JZ 0x005123ad                       ; 005122fb
        ;   XREF to: 005123ad (CONDITIONAL_JUMP)  ; LAB_005123ad
    MOV EDX,dword ptr [0x005f2afc]      ; 00512301 | DAT_005f2afc
    PUSH EDX                            ; 00512307 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 00512308
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0051230d
    TEST EAX,EAX                        ; 00512310
    JNZ 0x005123ad                      ; 00512312
        ;   XREF to: 005123ad (CONDITIONAL_JUMP)  ; LAB_005123ad
    MOV EAX,[0x00603b28]                ; 00512318 | g_CDemonSetPtr
    LEA EBX,[ESP + 0x38]                ; 0051231d
    MOV dword ptr [EAX + 0x15ac88],0x1  ; 00512321 | g_CDemonSetInstance.per_pixel_lighting_enabled
    LEA EAX,[EBP + 0x20]                ; 0051232b
    FLD float ptr [EAX]                 ; 0051232e
    FMUL float ptr [0x005e32e0]         ; 00512330 | DAT_005e32e0
    FISTP dword ptr [EBX]               ; 00512336
    FLD float ptr [EAX + 0x4]           ; 00512338
    FMUL float ptr [0x005e32e0]         ; 0051233b | DAT_005e32e0
    FISTP dword ptr [EBX + 0x4]         ; 00512341
    FLD float ptr [EAX + 0x8]           ; 00512344
    FMUL float ptr [0x005e32e0]         ; 00512347 | DAT_005e32e0
    FISTP dword ptr [EBX + 0x8]         ; 0051234d
    PUSH 0x0                            ; 00512350
    LEA EBX,[ESP + 0x3c]                ; 00512352
    MOV EAX,[0x007e2a54]                ; 00512356 | DAT_007e2a54
    PUSH EBX                            ; 0051235b
    MOV ESI,dword ptr [EAX + 0x3c]      ; 0051235c
    PUSH EAX                            ; 0051235f
    CALL dword ptr [ESI + 0x8]          ; 00512360
    ADD ESP,0xc                         ; 00512363
    PUSH -0x1                           ; 00512366
    MOV [0x01547200],EAX                ; 00512368 | DAT_01547200
    LEA EAX,[EBP + 0x158]               ; 0051236d
    PUSH 0x0                            ; 00512373
    PUSH EAX                            ; 00512375
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 00512376
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    MOV EAX,[0x00603b28]                ; 0051237b | g_CDemonSetPtr
    ADD ESP,0xc                         ; 00512380
    MOV dword ptr [EAX + 0x15ac88],0x0  ; 00512383 | g_CDemonSetInstance.per_pixel_lighting_enabled
    PUSH EBP                            ; 0051238d
        ;   Label: LAB_0051238d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0051238e
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00512393
    POP ESI                             ; 00512396
    POP EDI                             ; 00512397
    ADD ESP,0x3c                        ; 00512398
    POP EBP                             ; 0051239b
    POP EBX                             ; 0051239c
    RET                                 ; 0051239d
    MOV dword ptr [EBP + 0x724],0x1     ; 0051239e
        ;   Label: LAB_0051239e
    JMP 0x005122b4                      ; 005123a8
        ;   XREF to: 005122b4 (UNCONDITIONAL_JUMP)  ; LAB_005122b4
    PUSH -0x1                           ; 005123ad
        ;   Label: LAB_005123ad
    LEA EAX,[EBP + 0x158]               ; 005123af
    PUSH 0x0                            ; 005123b5
    PUSH EAX                            ; 005123b7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 005123b8
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005123bd
    PUSH EBP                            ; 005123c0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 005123c1
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005123c6
    POP ESI                             ; 005123c9
    POP EDI                             ; 005123ca
    ADD ESP,0x3c                        ; 005123cb
    POP EBP                             ; 005123ce
    POP EBX                             ; 005123cf
    RET                                 ; 005123d0

