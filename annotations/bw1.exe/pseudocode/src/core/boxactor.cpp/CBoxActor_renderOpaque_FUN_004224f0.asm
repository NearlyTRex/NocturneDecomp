; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_renderOpaque_FUN_004224f0(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0061255c
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004224f0
        ;   Label: core_boxactor.cpp_CBoxActor_renderOpaque_FUN_004224f0
    PUSH EBP                            ; 004224f1
    SUB ESP,0x30                        ; 004224f2
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004224f5
    LEA EAX,[EBX + 0x158]               ; 004224f9
    PUSH EAX                            ; 004224ff
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00422500
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 00422505
    ADD ESP,0x4                         ; 0042250b
    CMP EDX,0x1                         ; 0042250e
    JGE 0x0042251b                      ; 00422511
        ;   XREF to: 0042251b (CONDITIONAL_JUMP)  ; LAB_0042251b
    XOR EAX,EAX                         ; 00422513
    ADD ESP,0x30                        ; 00422515
        ;   Label: LAB_00422515
    POP EBP                             ; 00422518
    POP EBX                             ; 00422519
    RET                                 ; 0042251a
    MOV ECX,dword ptr [0x00612560]      ; 0042251b | DAT_00612560
        ;   Label: LAB_0042251b
    PUSH ECX                            ; 00422521
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00422522
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00422527
    TEST EAX,EAX                        ; 0042252a
    JNZ 0x00422537                      ; 0042252c
        ;   XREF to: 00422537 (CONDITIONAL_JUMP)  ; LAB_00422537
    CMP dword ptr [EBX + 0xfc],0x0      ; 0042252e
    JNZ 0x00422515                      ; 00422535
        ;   XREF to: 00422515 (CONDITIONAL_JUMP)  ; LAB_00422515
    CMP dword ptr [EBX + 0x5f4],0x0     ; 00422537
        ;   Label: LAB_00422537
    JZ 0x004225d2                       ; 0042253e
        ;   XREF to: 004225d2 (CONDITIONAL_JUMP)  ; LAB_004225d2
    PUSH EDI                            ; 00422544
        ;   Label: LAB_00422544
    PUSH ESI                            ; 00422545
    LEA EAX,[EBX + 0x20]                ; 00422546
    PUSH EAX                            ; 00422549
    MOV EAX,[0x0061255c]                ; 0042254a | DAT_0061255c
    PUSH EAX                            ; 0042254f
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 00422550
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00422555
    PUSH 0x0                            ; 00422558
    LEA EAX,[EBX + 0x30]                ; 0042255a
    PUSH EAX                            ; 0042255d
    MOV EDX,dword ptr [0x0061255c]      ; 0042255e | DAT_0061255c
    PUSH EDX                            ; 00422564
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 00422565
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0042256a
    PUSH 0x0                            ; 0042256d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042256f
    PUSH EBX                            ; 00422575
    LEA ESI,[ESP + 0x10]                ; 00422576
    LEA EDI,[ESP + 0x28]                ; 0042257a
    CALL dword ptr [EAX + 0x1c]         ; 0042257e
    MOV ECX,0x6                         ; 00422581
    ADD ESP,0x4                         ; 00422586
    LEA EAX,[ESP + 0x24]                ; 00422589
    LEA ESI,[ESP + 0xc]                 ; 0042258d
    PUSH EAX                            ; 00422591
    MOVSD.REP ES:EDI,ESI                ; 00422592
    CALL core_box.cpp_FUN_004207b0      ; 00422594
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 00422599
    MOV ESI,EAX                         ; 0042259c
    TEST EAX,EAX                        ; 0042259e
    JZ 0x004225b9                       ; 004225a0
        ;   XREF to: 004225b9 (CONDITIONAL_JUMP)  ; LAB_004225b9
    PUSH -0x1                           ; 004225a2
    ADD EBX,0x158                       ; 004225a4
    PUSH dword ptr [EBX + 0x1b8]        ; 004225aa
    PUSH EBX                            ; 004225b0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004225b1
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004225b6
    MOV ECX,dword ptr [0x0061255c]      ; 004225b9 | DAT_0061255c
        ;   Label: LAB_004225b9
    PUSH ECX                            ; 004225bf
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004225c0
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004225c5
    MOV EAX,ESI                         ; 004225c8
    POP ESI                             ; 004225ca
    POP EDI                             ; 004225cb
    ADD ESP,0x30                        ; 004225cc
    POP EBP                             ; 004225cf
    POP EBX                             ; 004225d0
    RET                                 ; 004225d1
    MOV EBP,dword ptr [0x00612560]      ; 004225d2 | DAT_00612560
        ;   Label: LAB_004225d2
    PUSH EBP                            ; 004225d8
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004225d9
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004225de
    TEST EAX,EAX                        ; 004225e1
    JZ 0x00422544                       ; 004225e3
        ;   XREF to: 00422544 (CONDITIONAL_JUMP)  ; LAB_00422544
    XOR EAX,EAX                         ; 004225e9
    ADD ESP,0x30                        ; 004225eb
    POP EBP                             ; 004225ee
    POP EBX                             ; 004225ef
    RET                                 ; 004225f0

