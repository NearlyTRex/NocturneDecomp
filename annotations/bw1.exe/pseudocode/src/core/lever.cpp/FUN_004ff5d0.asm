; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_lever_cpp_FUN_004ff5d0(CDemonActor *param_1)
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

    PUSH EBX                            ; 004ff5d0
        ;   Label: core_lever.cpp_FUN_004ff5d0
    PUSH ESI                            ; 004ff5d1
    PUSH EDI                            ; 004ff5d2
    PUSH EBP                            ; 004ff5d3
    MOV EBP,ESP                         ; 004ff5d4
    SUB ESP,0x34                        ; 004ff5d6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ff5d9
    PUSH EBX                            ; 004ff5dc
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004ff5dd
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ff5e2
    PUSH 0x0                            ; 004ff5e5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ff5e7
    PUSH EBX                            ; 004ff5ed
    LEA ESI,[EBP + -0x1c]               ; 004ff5ee
    LEA EDI,[EBP + -0x34]               ; 004ff5f1
    CALL dword ptr [EAX + 0x1c]         ; 004ff5f4
    MOV ECX,0x6                         ; 004ff5f7
    ADD ESP,0x4                         ; 004ff5fc
    LEA EAX,[EBP + -0x34]               ; 004ff5ff
    LEA ESI,[EBP + -0x1c]               ; 004ff602
    PUSH EAX                            ; 004ff605
    MOVSD.REP ES:EDI,ESI                ; 004ff606
    CALL core_box.cpp_FUN_004207b0      ; 004ff608
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004ff60d
    MOV EDI,EAX                         ; 004ff610
    TEST EAX,EAX                        ; 004ff612
    JNZ 0x004ff628                      ; 004ff614
        ;   XREF to: 004ff628 (CONDITIONAL_JUMP)  ; LAB_004ff628
    PUSH EBX                            ; 004ff616
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004ff617
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ff61c
    MOV EAX,EDI                         ; 004ff61f
    MOV ESP,EBP                         ; 004ff621
    POP EBP                             ; 004ff623
    POP EDI                             ; 004ff624
    POP ESI                             ; 004ff625
    POP EBX                             ; 004ff626
    RET                                 ; 004ff627
    PUSH -0x1                           ; 004ff628
        ;   Label: LAB_004ff628
    LEA ESI,[EBX + 0x158]               ; 004ff62a
    PUSH ESI                            ; 004ff630
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004ff631
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 004ff636
    DEC EAX                             ; 004ff63c
    MOV dword ptr [EBP + -0x4],EAX      ; 004ff63d
    ADD ESP,0x4                         ; 004ff640
    FILD dword ptr [EBP + -0x4]         ; 004ff643
    FMUL float ptr [EBX + 0x2dc]        ; 004ff646
    SUB ESP,0x4                         ; 004ff64c
    FSTP float ptr [ESP]                ; 004ff64f
    PUSH ESI                            ; 004ff652
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004ff653
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004ff658
    PUSH EBX                            ; 004ff65b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004ff65c
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ff661
    MOV EAX,EDI                         ; 004ff664
    MOV ESP,EBP                         ; 004ff666
    POP EBP                             ; 004ff668
    POP EDI                             ; 004ff669
    POP ESI                             ; 004ff66a
    POP EBX                             ; 004ff66b
    RET                                 ; 004ff66c

