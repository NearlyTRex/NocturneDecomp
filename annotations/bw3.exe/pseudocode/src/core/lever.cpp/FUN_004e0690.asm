; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_lever_cpp_FUN_004e0690(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0690
        ;   Label: core_lever.cpp_FUN_004e0690
    PUSH ESI                            ; 004e0691
    PUSH EDI                            ; 004e0692
    PUSH EBP                            ; 004e0693
    MOV EBP,ESP                         ; 004e0694
    SUB ESP,0x34                        ; 004e0696
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e0699
    PUSH EBX                            ; 004e069c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 004e069d
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e06a2
    PUSH 0x0                            ; 004e06a5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e06a7
    PUSH EBX                            ; 004e06ad
    LEA ESI,[EBP + -0x1c]               ; 004e06ae
    LEA EDI,[EBP + -0x34]               ; 004e06b1
    CALL dword ptr [EAX + 0x1c]         ; 004e06b4
    MOV ECX,0x6                         ; 004e06b7
    ADD ESP,0x4                         ; 004e06bc
    LEA EAX,[EBP + -0x34]               ; 004e06bf
    LEA ESI,[EBP + -0x1c]               ; 004e06c2
    PUSH EAX                            ; 004e06c5
    MOVSD.REP ES:EDI,ESI                ; 004e06c6
    CALL core_box.cpp_FUN_0041daf0      ; 004e06c8
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 004e06cd
    MOV EDI,EAX                         ; 004e06d0
    TEST EAX,EAX                        ; 004e06d2
    JNZ 0x004e06e8                      ; 004e06d4
        ;   XREF to: 004e06e8 (CONDITIONAL_JUMP)  ; LAB_004e06e8
    PUSH EBX                            ; 004e06d6
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 004e06d7
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e06dc
    MOV EAX,EDI                         ; 004e06df
    MOV ESP,EBP                         ; 004e06e1
    POP EBP                             ; 004e06e3
    POP EDI                             ; 004e06e4
    POP ESI                             ; 004e06e5
    POP EBX                             ; 004e06e6
    RET                                 ; 004e06e7
    PUSH -0x1                           ; 004e06e8
        ;   Label: LAB_004e06e8
    LEA ESI,[EBX + 0x158]               ; 004e06ea
    PUSH ESI                            ; 004e06f0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004e06f1
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 004e06f6
    DEC EAX                             ; 004e06fc
    MOV dword ptr [EBP + -0x4],EAX      ; 004e06fd
    ADD ESP,0x4                         ; 004e0700
    FILD dword ptr [EBP + -0x4]         ; 004e0703
    FMUL float ptr [EBX + 0x2dc]        ; 004e0706
    SUB ESP,0x4                         ; 004e070c
    FSTP float ptr [ESP]                ; 004e070f
    PUSH ESI                            ; 004e0712
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 004e0713
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004e0718
    PUSH EBX                            ; 004e071b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 004e071c
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e0721
    MOV EAX,EDI                         ; 004e0724
    MOV ESP,EBP                         ; 004e0726
    POP EBP                             ; 004e0728
    POP EDI                             ; 004e0729
    POP ESI                             ; 004e072a
    POP EBX                             ; 004e072b
    RET                                 ; 004e072c

