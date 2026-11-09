; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_FUN_0041c580(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x20]:1  local_20
;
; XREF[1]:
;   core_doc.cpp_FUN_004599a0 at 00459be0
;
; Referenced Globals:
;   undefined4 DAT_0060b27c
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_matrix.c_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041c580
        ;   Label: core_boxactor.cpp_FUN_0041c580
    PUSH EBP                            ; 0041c581
    SUB ESP,0x30                        ; 0041c582
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0041c585
    LEA EAX,[EBX + 0x2b4]               ; 0041c589
    PUSH EAX                            ; 0041c58f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0041c590
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 0041c595
    ADD ESP,0x4                         ; 0041c59b
    CMP EDX,0x1                         ; 0041c59e
    JGE 0x0041c5ab                      ; 0041c5a1
        ;   XREF to: 0041c5ab (CONDITIONAL_JUMP)  ; LAB_0041c5ab
    XOR EAX,EAX                         ; 0041c5a3
    ADD ESP,0x30                        ; 0041c5a5
        ;   Label: LAB_0041c5a5
    POP EBP                             ; 0041c5a8
    POP EBX                             ; 0041c5a9
    RET                                 ; 0041c5aa
    MOV ECX,dword ptr [0x0060b280]      ; 0041c5ab | DAT_0060b280
        ;   Label: LAB_0041c5ab
    PUSH ECX                            ; 0041c5b1 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0041c5b2
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041c5b7
    TEST EAX,EAX                        ; 0041c5ba
    JNZ 0x0041c5c7                      ; 0041c5bc
        ;   XREF to: 0041c5c7 (CONDITIONAL_JUMP)  ; LAB_0041c5c7
    CMP dword ptr [EBX + 0xfc],0x0      ; 0041c5be
    JNZ 0x0041c5a5                      ; 0041c5c5
        ;   XREF to: 0041c5a5 (CONDITIONAL_JUMP)  ; LAB_0041c5a5
    CMP dword ptr [EBX + 0x750],0x0     ; 0041c5c7
        ;   Label: LAB_0041c5c7
    JZ 0x0041c662                       ; 0041c5ce
        ;   XREF to: 0041c662 (CONDITIONAL_JUMP)  ; LAB_0041c662
    PUSH EDI                            ; 0041c5d4
        ;   Label: LAB_0041c5d4
    PUSH ESI                            ; 0041c5d5
    LEA EAX,[EBX + 0x20]                ; 0041c5d6
    PUSH EAX                            ; 0041c5d9
    MOV EAX,[0x0060b27c]                ; 0041c5da | DAT_0060b27c
    PUSH EAX                            ; 0041c5df | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0041c5e0
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0041c5e5
    PUSH 0x0                            ; 0041c5e8
    LEA EAX,[EBX + 0x30]                ; 0041c5ea
    PUSH EAX                            ; 0041c5ed
    MOV EDX,dword ptr [0x0060b27c]      ; 0041c5ee | DAT_0060b27c
    PUSH EDX                            ; 0041c5f4 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0041c5f5
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0041c5fa
    PUSH 0x0                            ; 0041c5fd
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041c5ff
    PUSH EBX                            ; 0041c605
    LEA ESI,[ESP + 0x10]                ; 0041c606
    LEA EDI,[ESP + 0x28]                ; 0041c60a
    CALL dword ptr [EAX + 0x24]         ; 0041c60e
    MOV ECX,0x6                         ; 0041c611
    ADD ESP,0x4                         ; 0041c616
    LEA EAX,[ESP + 0x24]                ; 0041c619
    LEA ESI,[ESP + 0xc]                 ; 0041c61d
    PUSH EAX                            ; 0041c621
    MOVSD.REP ES:EDI,ESI                ; 0041c622
    CALL core_box.cpp_FUN_0041a840      ; 0041c624
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0041c629
    MOV ESI,EAX                         ; 0041c62c
    TEST EAX,EAX                        ; 0041c62e
    JZ 0x0041c649                       ; 0041c630
        ;   XREF to: 0041c649 (CONDITIONAL_JUMP)  ; LAB_0041c649
    PUSH -0x1                           ; 0041c632
    ADD EBX,0x2b4                       ; 0041c634
    PUSH dword ptr [EBX + 0x1b8]        ; 0041c63a
    PUSH EBX                            ; 0041c640
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0041c641
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0041c646
    MOV ECX,dword ptr [0x0060b27c]      ; 0041c649 | DAT_0060b27c
        ;   Label: LAB_0041c649
    PUSH ECX                            ; 0041c64f | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0041c650
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0041c655
    MOV EAX,ESI                         ; 0041c658
    POP ESI                             ; 0041c65a
    POP EDI                             ; 0041c65b
    ADD ESP,0x30                        ; 0041c65c
    POP EBP                             ; 0041c65f
    POP EBX                             ; 0041c660
    RET                                 ; 0041c661
    MOV EBP,dword ptr [0x0060b280]      ; 0041c662 | DAT_0060b280
        ;   Label: LAB_0041c662
    PUSH EBP                            ; 0041c668 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0041c669
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041c66e
    TEST EAX,EAX                        ; 0041c671
    JZ 0x0041c5d4                       ; 0041c673
        ;   XREF to: 0041c5d4 (CONDITIONAL_JUMP)  ; LAB_0041c5d4
    XOR EAX,EAX                         ; 0041c679
    ADD ESP,0x30                        ; 0041c67b
    POP EBP                             ; 0041c67e
    POP EBX                             ; 0041c67f
    RET                                 ; 0041c680

