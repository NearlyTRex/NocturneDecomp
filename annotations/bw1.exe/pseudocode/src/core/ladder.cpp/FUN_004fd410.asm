; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_ladder_cpp_FUN_004fd410(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd410
        ;   Label: core_ladder.cpp_FUN_004fd410
    SUB ESP,0x30                        ; 004fd411
    MOV EBX,dword ptr [ESP + 0x38]      ; 004fd414
    LEA EAX,[EBX + 0x158]               ; 004fd418
    PUSH EAX                            ; 004fd41e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004fd41f
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 004fd424
    ADD ESP,0x4                         ; 004fd42a
    CMP EDX,0x1                         ; 004fd42d
    JGE 0x004fd439                      ; 004fd430
        ;   XREF to: 004fd439 (CONDITIONAL_JUMP)  ; LAB_004fd439
    XOR EAX,EAX                         ; 004fd432
    ADD ESP,0x30                        ; 004fd434
    POP EBX                             ; 004fd437
    RET                                 ; 004fd438
    PUSH EDI                            ; 004fd439
        ;   Label: LAB_004fd439
    PUSH ESI                            ; 004fd43a
    PUSH EBX                            ; 004fd43b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004fd43c
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fd441
    PUSH 0x0                            ; 004fd444
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fd446
    PUSH EBX                            ; 004fd44c
    LEA ESI,[ESP + 0x28]                ; 004fd44d
    LEA EDI,[ESP + 0x10]                ; 004fd451
    CALL dword ptr [EAX + 0x1c]         ; 004fd455
    MOV ECX,0x6                         ; 004fd458
    ADD ESP,0x4                         ; 004fd45d
    LEA EAX,[ESP + 0xc]                 ; 004fd460
    LEA ESI,[ESP + 0x24]                ; 004fd464
    PUSH EAX                            ; 004fd468
    MOVSD.REP ES:EDI,ESI                ; 004fd469
    CALL core_box.cpp_FUN_004207b0      ; 004fd46b
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004fd470
    MOV ESI,EAX                         ; 004fd473
    TEST EAX,EAX                        ; 004fd475
    JZ 0x004fd48c                       ; 004fd477
        ;   XREF to: 004fd48c (CONDITIONAL_JUMP)  ; LAB_004fd48c
    PUSH -0x1                           ; 004fd479
    LEA EAX,[EBX + 0x158]               ; 004fd47b
    PUSH 0x0                            ; 004fd481
    PUSH EAX                            ; 004fd483
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004fd484
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004fd489
    PUSH EBX                            ; 004fd48c
        ;   Label: LAB_004fd48c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004fd48d
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fd492
    MOV EAX,ESI                         ; 004fd495
    POP ESI                             ; 004fd497
    POP EDI                             ; 004fd498
    ADD ESP,0x30                        ; 004fd499
    POP EBX                             ; 004fd49c
    RET                                 ; 004fd49d

