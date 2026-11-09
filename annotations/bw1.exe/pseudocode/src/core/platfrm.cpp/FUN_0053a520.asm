; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_platfrm_cpp_FUN_0053a520(CDemonActor *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00604910
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4d0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_007c6120
;   undefined4 DAT_0152a950
;   undefined4 DAT_01bc120c
;   undefined4 g_CDemonSetInstance.field1420424_0x15ac88
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a520
        ;   Label: core_platfrm.cpp_FUN_0053a520
    PUSH EBP                            ; 0053a521
    SUB ESP,0x3c                        ; 0053a522
    MOV EBP,dword ptr [ESP + 0x48]      ; 0053a525
    MOV EDX,dword ptr [0x00612560]      ; 0053a529 | DAT_00612560
    PUSH EDX                            ; 0053a52f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0053a530
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0053a535
    TEST EAX,EAX                        ; 0053a538
    JNZ 0x0053a56e                      ; 0053a53a
        ;   XREF to: 0053a56e (CONDITIONAL_JUMP)  ; LAB_0053a56e
    CMP dword ptr [ESP + 0x4c],0x0      ; 0053a53c
    JZ 0x0053a56e                       ; 0053a541
        ;   XREF to: 0053a56e (CONDITIONAL_JUMP)  ; LAB_0053a56e
    CMP dword ptr [EBP + 0x4c0],0x2     ; 0053a543
    JGE 0x0053a555                      ; 0053a54a
        ;   XREF to: 0053a555 (CONDITIONAL_JUMP)  ; LAB_0053a555
    CMP dword ptr [EBP + 0x4c8],0x0     ; 0053a54c
    JZ 0x0053a56e                       ; 0053a553
        ;   XREF to: 0053a56e (CONDITIONAL_JUMP)  ; LAB_0053a56e
    CMP dword ptr [EBP + 0x4c8],0x0     ; 0053a555
        ;   Label: LAB_0053a555
    JZ 0x0053a5a8                       ; 0053a55c
        ;   XREF to: 0053a5a8 (CONDITIONAL_JUMP)  ; LAB_0053a5a8
    MOV EAX,dword ptr [EBP + 0x2d4]     ; 0053a55e
    CMP EAX,0x3                         ; 0053a564
    JZ 0x0053a56e                       ; 0053a567
        ;   XREF to: 0053a56e (CONDITIONAL_JUMP)  ; LAB_0053a56e
    CMP EAX,0x4                         ; 0053a569
    JNZ 0x0053a574                      ; 0053a56c
        ;   XREF to: 0053a574 (CONDITIONAL_JUMP)  ; LAB_0053a574
    ADD ESP,0x3c                        ; 0053a56e
        ;   Label: LAB_0053a56e
    POP EBP                             ; 0053a571
    POP EBX                             ; 0053a572
    RET                                 ; 0053a573
    LEA EAX,[EBP + 0x3b8]               ; 0053a574
        ;   Label: LAB_0053a574
    PUSH EAX                            ; 0053a57a
    MOV ECX,dword ptr [0x0061b4d0]      ; 0053a57b | DAT_0061b4d0
    PUSH ECX                            ; 0053a581
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0053a582
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0053a587
    TEST EAX,EAX                        ; 0053a58a
    JNZ 0x0053a56e                      ; 0053a58c
        ;   XREF to: 0053a56e (CONDITIONAL_JUMP)  ; LAB_0053a56e
    LEA EAX,[EBP + 0x354]               ; 0053a58e
    PUSH EAX                            ; 0053a594
    MOV EBX,dword ptr [0x0061b4d0]      ; 0053a595 | DAT_0061b4d0
    PUSH EBX                            ; 0053a59b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0053a59c
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0053a5a1
    TEST EAX,EAX                        ; 0053a5a4
    JNZ 0x0053a56e                      ; 0053a5a6
        ;   XREF to: 0053a56e (CONDITIONAL_JUMP)  ; LAB_0053a56e
    PUSH EDI                            ; 0053a5a8
        ;   Label: LAB_0053a5a8
    PUSH ESI                            ; 0053a5a9
    MOV ESI,dword ptr [0x00612560]      ; 0053a5aa | DAT_00612560
    PUSH ESI                            ; 0053a5b0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0053a5b1
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0053a5b6
    TEST EAX,EAX                        ; 0053a5b9
    JNZ 0x0053a5d4                      ; 0053a5bb
        ;   XREF to: 0053a5d4 (CONDITIONAL_JUMP)  ; LAB_0053a5d4
    CMP dword ptr [EBP + 0x4c8],0x0     ; 0053a5bd
    JNZ 0x0053a6be                      ; 0053a5c4
        ;   XREF to: 0053a6be (CONDITIONAL_JUMP)  ; LAB_0053a6be
    MOV dword ptr [EBP + 0x4c0],0x3     ; 0053a5ca
    PUSH EBP                            ; 0053a5d4
        ;   Label: LAB_0053a5d4
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0053a5d5
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053a5da
    PUSH 0x0                            ; 0053a5dd
    MOV EAX,dword ptr [EBP + 0x154]     ; 0053a5df
    PUSH EBP                            ; 0053a5e5
    LEA ESI,[ESP + 0x10]                ; 0053a5e6
    LEA EDI,[ESP + 0x28]                ; 0053a5ea
    CALL dword ptr [EAX + 0x1c]         ; 0053a5ee
    MOV ECX,0x6                         ; 0053a5f1
    ADD ESP,0x4                         ; 0053a5f6
    LEA EAX,[ESP + 0x24]                ; 0053a5f9
    LEA ESI,[ESP + 0xc]                 ; 0053a5fd
    PUSH EAX                            ; 0053a601
    MOVSD.REP ES:EDI,ESI                ; 0053a602
    CALL core_box.cpp_FUN_004207b0      ; 0053a604
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0053a609
    TEST EAX,EAX                        ; 0053a60c
    JZ 0x0053a6ad                       ; 0053a60e
        ;   XREF to: 0053a6ad (CONDITIONAL_JUMP)  ; LAB_0053a6ad
    CMP dword ptr [EBP + 0x514],0x0     ; 0053a614
    JZ 0x0053a6cd                       ; 0053a61b
        ;   XREF to: 0053a6cd (CONDITIONAL_JUMP)  ; LAB_0053a6cd
    MOV EDX,dword ptr [0x00612560]      ; 0053a621 | DAT_00612560
    PUSH EDX                            ; 0053a627 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0053a628
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0053a62d
    TEST EAX,EAX                        ; 0053a630
    JNZ 0x0053a6cd                      ; 0053a632
        ;   XREF to: 0053a6cd (CONDITIONAL_JUMP)  ; LAB_0053a6cd
    MOV EAX,[0x00622c18]                ; 0053a638 | g_CDemonSetPtr
    LEA EBX,[ESP + 0x38]                ; 0053a63d
    MOV dword ptr [EAX + 0x15ac88],0x1  ; 0053a641 | g_CDemonSetInstance.field1420424_0x15ac88
    LEA EAX,[EBP + 0x20]                ; 0053a64b
    FLD float ptr [EAX]                 ; 0053a64e
    FMUL float ptr [0x00604910]         ; 0053a650 | DAT_00604910
    FISTP dword ptr [EBX]               ; 0053a656
    FLD float ptr [EAX + 0x4]           ; 0053a658
    FMUL float ptr [0x00604910]         ; 0053a65b | DAT_00604910
    FISTP dword ptr [EBX + 0x4]         ; 0053a661
    FLD float ptr [EAX + 0x8]           ; 0053a664
    FMUL float ptr [0x00604910]         ; 0053a667 | DAT_00604910
    FISTP dword ptr [EBX + 0x8]         ; 0053a66d
    PUSH 0x0                            ; 0053a670
    LEA EBX,[ESP + 0x3c]                ; 0053a672
    MOV EAX,[0x007c6120]                ; 0053a676 | DAT_007c6120
    PUSH EBX                            ; 0053a67b
    MOV ESI,dword ptr [EAX + 0x3c]      ; 0053a67c
    PUSH EAX                            ; 0053a67f
    CALL dword ptr [ESI + 0x8]          ; 0053a680
    ADD ESP,0xc                         ; 0053a683
    PUSH -0x1                           ; 0053a686
    MOV [0x0152a950],EAX                ; 0053a688 | DAT_0152a950
    LEA EAX,[EBP + 0x158]               ; 0053a68d
    PUSH 0x0                            ; 0053a693
    PUSH EAX                            ; 0053a695
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 0053a696
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    MOV EAX,[0x00622c18]                ; 0053a69b | g_CDemonSetPtr
    ADD ESP,0xc                         ; 0053a6a0
    MOV dword ptr [EAX + 0x15ac88],0x0  ; 0053a6a3 | g_CDemonSetInstance.field1420424_0x15ac88
    PUSH EBP                            ; 0053a6ad
        ;   Label: LAB_0053a6ad
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0053a6ae
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053a6b3
    POP ESI                             ; 0053a6b6
    POP EDI                             ; 0053a6b7
    ADD ESP,0x3c                        ; 0053a6b8
    POP EBP                             ; 0053a6bb
    POP EBX                             ; 0053a6bc
    RET                                 ; 0053a6bd
    MOV dword ptr [EBP + 0x724],0x1     ; 0053a6be
        ;   Label: LAB_0053a6be
    JMP 0x0053a5d4                      ; 0053a6c8
        ;   XREF to: 0053a5d4 (UNCONDITIONAL_JUMP)  ; LAB_0053a5d4
    PUSH -0x1                           ; 0053a6cd
        ;   Label: LAB_0053a6cd
    LEA EAX,[EBP + 0x158]               ; 0053a6cf
    PUSH 0x0                            ; 0053a6d5
    PUSH EAX                            ; 0053a6d7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 0053a6d8
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0053a6dd
    PUSH EBP                            ; 0053a6e0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0053a6e1
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053a6e6
    POP ESI                             ; 0053a6e9
    POP EDI                             ; 0053a6ea
    ADD ESP,0x3c                        ; 0053a6eb
    POP EBP                             ; 0053a6ee
    POP EBX                             ; 0053a6ef
    RET                                 ; 0053a6f0

