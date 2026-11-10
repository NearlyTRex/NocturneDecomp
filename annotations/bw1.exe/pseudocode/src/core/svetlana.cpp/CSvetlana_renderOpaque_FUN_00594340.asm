; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00594340(CSvetlana *this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c51cac
;   undefined4 g_CGameInstance.field480_0x210
;   undefined4 g_CDemonSetInstance.skip_normal_normalization
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240
;   core_cloth.cpp_CCloth_render_FUN_00441800
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594340
        ;   Label: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_00594340
    PUSH ESI                            ; 00594341
    PUSH EBP                            ; 00594342
    SUB ESP,0xf0                        ; 00594343
    MOV ESI,dword ptr [ESP + 0x100]     ; 00594349
    MOV EAX,[0x00622c18]                ; 00594350 | g_CDemonSetPtr
    MOV EDX,ESI                         ; 00594355
    MOV dword ptr [EAX + 0x15ae98],0x1  ; 00594357 | g_CDemonSetInstance.skip_normal_normalization
    XOR EAX,EAX                         ; 00594361
    INC EAX                             ; 00594363
        ;   Label: LAB_00594363
    MOV ECX,dword ptr [EDX + 0x2298]    ; 00594364
    ADD EDX,0x4                         ; 0059436a
    MOV dword ptr [ESP + EAX*0x4 + -0x4],ECX ; 0059436d
    CMP EAX,0x3c                        ; 00594371
    JL 0x00594363                       ; 00594374
        ;   XREF to: 00594363 (CONDITIONAL_JUMP)  ; LAB_00594363
    PUSH ESI                            ; 00594376
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 ; 00594377
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059437c
    MOV EDX,dword ptr [0x00612560]      ; 0059437f | DAT_00612560
    PUSH EDX                            ; 00594385 | DAT_01bc120c
    MOV EBX,EAX                         ; 00594386
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00594388
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0059438d
    TEST EAX,EAX                        ; 00594390
    JNZ 0x00594450                      ; 00594392
        ;   XREF to: 00594450 (CONDITIONAL_JUMP)  ; LAB_00594450
    CMP dword ptr [0x01c51cac],0x4000   ; 00594398 | DAT_01c51cac
    JGE 0x00594450                      ; 005943a2
        ;   XREF to: 00594450 (CONDITIONAL_JUMP)  ; LAB_00594450
    MOV EAX,ESI                         ; 005943a8
    LEA EDX,[ESI + 0xf0]                ; 005943aa
    ADD EAX,0x4                         ; 005943b0
        ;   Label: LAB_005943b0
    MOV dword ptr [EAX + 0x2294],0x0    ; 005943b3
    CMP EAX,EDX                         ; 005943bd
    JNZ 0x005943b0                      ; 005943bf
        ;   XREF to: 005943b0 (CONDITIONAL_JUMP)  ; LAB_005943b0
    PUSH EDI                            ; 005943c1
    MOV EAX,dword ptr [ESI + 0x95628]   ; 005943c2
    MOV dword ptr [ESI + EAX*0x4 + 0x2298],0x1 ; 005943c8
    MOV EAX,dword ptr [ESI + 0x9562c]   ; 005943d3
    PUSH 0x0                            ; 005943d9
    MOV EBP,dword ptr [0x00612560]      ; 005943db | DAT_00612560
    MOV dword ptr [ESI + EAX*0x4 + 0x2298],0x1 ; 005943e1
    MOV EAX,[0x0061d95c]                ; 005943ec | g_CGamePtr
    PUSH EBP                            ; 005943f1 | DAT_01bc120c
    MOV EDI,dword ptr [EAX + 0x210]     ; 005943f2 | g_CGameInstance.field480_0x210
    MOV dword ptr [EAX + 0x210],0x2     ; 005943f8 | g_CGameInstance.field480_0x210
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00594402
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00594407
    PUSH 0xbb80                         ; 0059440a
    MOV EAX,[0x00612560]                ; 0059440f | DAT_00612560
    PUSH EAX                            ; 00594414 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 00594415
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0059441a
    TEST EBX,EBX                        ; 0059441d
    JNZ 0x0059446f                      ; 0059441f
        ;   XREF to: 0059446f (CONDITIONAL_JUMP)  ; LAB_0059446f
    MOV EAX,[0x0061d95c]                ; 00594421 | g_CGamePtr
        ;   Label: LAB_00594421
    MOV EDX,ESI                         ; 00594426
    MOV dword ptr [EAX + 0x210],EDI     ; 00594428 | g_CGameInstance.field480_0x210
    XOR EAX,EAX                         ; 0059442e
    POP EDI                             ; 00594430
    ADD EDX,0x4                         ; 00594431
        ;   Label: LAB_00594431
    MOV ECX,dword ptr [ESP + EAX*0x4]   ; 00594434
    INC EAX                             ; 00594437
    MOV dword ptr [EDX + 0x2294],ECX    ; 00594438
    CMP EAX,0x3c                        ; 0059443e
    JL 0x00594431                       ; 00594441
        ;   XREF to: 00594431 (CONDITIONAL_JUMP)  ; LAB_00594431
    LEA EAX,[EAX]                       ; 00594443
    LEA EDX,[EDX]                       ; 00594449
    NOP                                 ; 0059444f
    MOV EAX,[0x00622c18]                ; 00594450 | g_CDemonSetPtr
        ;   Label: LAB_00594450
    MOV dword ptr [EAX + 0x15ae98],0x0  ; 00594455 | g_CDemonSetInstance.skip_normal_normalization
    TEST EBX,EBX                        ; 0059445f
    JNZ 0x0059447a                      ; 00594461
        ;   XREF to: 0059447a (CONDITIONAL_JUMP)  ; LAB_0059447a
    MOV EAX,EBX                         ; 00594463
    ADD ESP,0xf0                        ; 00594465
    POP EBP                             ; 0059446b
    POP ESI                             ; 0059446c
    POP EBX                             ; 0059446d
    RET                                 ; 0059446e
    PUSH ESI                            ; 0059446f
        ;   Label: LAB_0059446f
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 ; 00594470
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00594475
    JMP 0x00594421                      ; 00594478
        ;   XREF to: 00594421 (UNCONDITIONAL_JUMP)  ; LAB_00594421
    PUSH ESI                            ; 0059447a
        ;   Label: LAB_0059447a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0059447b
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00594480
    PUSH 0x0                            ; 00594483
    LEA EAX,[ESI + 0x1ffb4]             ; 00594485
    PUSH EAX                            ; 0059448b
    CALL core_cloth.cpp_CCloth_render_FUN_00441800 ; 0059448c
        ;   XREF to: 00441800 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_00441800(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 00594491
    PUSH 0x0                            ; 00594494
    LEA EAX,[ESI + 0x5aae4]             ; 00594496
    PUSH EAX                            ; 0059449c
    CALL core_cloth.cpp_CCloth_render_FUN_00441800 ; 0059449d
        ;   XREF to: 00441800 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_00441800(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 005944a2
    PUSH ESI                            ; 005944a5
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 005944a6
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005944ab
    MOV EAX,EBX                         ; 005944ae
    ADD ESP,0xf0                        ; 005944b0
    POP EBP                             ; 005944b6
    POP ESI                             ; 005944b7
    POP EBX                             ; 005944b8
    RET                                 ; 005944b9

