; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_turret_cpp_CTurret_renderOpaque_FUN_0057e630(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   core_turret.cpp_CTurret_getCurFrame_FUN_0057ee90
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_matrix.c_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057e630
        ;   Label: core_turret.cpp_CTurret_renderOpaque_FUN_0057e630
    PUSH ESI                            ; 0057e631
    PUSH EDI                            ; 0057e632
    PUSH EBP                            ; 0057e633
    SUB ESP,0x34                        ; 0057e634
    MOV EBX,dword ptr [ESP + 0x48]      ; 0057e637
    PUSH EBX                            ; 0057e63b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0057e63c
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057e641
    PUSH 0x0                            ; 0057e644
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057e646
    PUSH EBX                            ; 0057e64c
    LEA ESI,[ESP + 0x8]                 ; 0057e64d
    LEA EDI,[ESP + 0x20]                ; 0057e651
    CALL dword ptr [EAX + 0x24]         ; 0057e655
    MOV ECX,0x6                         ; 0057e658
    ADD ESP,0x4                         ; 0057e65d
    LEA EAX,[ESP + 0x1c]                ; 0057e660
    LEA ESI,[ESP + 0x4]                 ; 0057e664
    PUSH EAX                            ; 0057e668
    MOVSD.REP ES:EDI,ESI                ; 0057e669
    CALL core_box.cpp_FUN_0041a840      ; 0057e66b
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0057e670
    MOV ESI,EAX                         ; 0057e673
    TEST EAX,EAX                        ; 0057e675
    JZ 0x0057e6a3                       ; 0057e677
        ;   XREF to: 0057e6a3 (CONDITIONAL_JUMP)  ; LAB_0057e6a3
    PUSH -0x1                           ; 0057e679
    PUSH 0x0                            ; 0057e67b
    PUSH EBX                            ; 0057e67d
    CALL core_turret.cpp_CTurret_getCurFrame_FUN_0057ee90 ; 0057e67e
        ;   XREF to: 0057ee90 (UNCONDITIONAL_CALL)  ; float core_turret.cpp_CTurret_getCurFrame_FUN_0057ee90(CTurret * this_ptr, int model_index)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0057e683
    FLD float ptr [ESP + 0x3c]          ; 0057e687
    ADD ESP,0x8                         ; 0057e68b
    SUB ESP,0x4                         ; 0057e68e
    LEA EAX,[EBX + 0x2b4]               ; 0057e691
    FSTP float ptr [ESP]                ; 0057e697
    PUSH EAX                            ; 0057e69a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0057e69b
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0057e6a0
    PUSH EBX                            ; 0057e6a3
        ;   Label: LAB_0057e6a3
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0057e6a4
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057e6a9
    TEST ESI,ESI                        ; 0057e6ac
    JNZ 0x0057e6ba                      ; 0057e6ae
        ;   XREF to: 0057e6ba (CONDITIONAL_JUMP)  ; LAB_0057e6ba
    MOV EAX,ESI                         ; 0057e6b0
        ;   Label: LAB_0057e6b0
    ADD ESP,0x34                        ; 0057e6b2
    POP EBP                             ; 0057e6b5
    POP EDI                             ; 0057e6b6
    POP ESI                             ; 0057e6b7
    POP EBX                             ; 0057e6b8
    RET                                 ; 0057e6b9
    LEA EAX,[EBX + 0x6e0]               ; 0057e6ba
        ;   Label: LAB_0057e6ba
    PUSH EAX                            ; 0057e6c0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0057e6c1
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 0057e6c6
    ADD ESP,0x4                         ; 0057e6cc
    CMP EDX,0x1                         ; 0057e6cf
    JL 0x0057e6b0                       ; 0057e6d2
        ;   XREF to: 0057e6b0 (CONDITIONAL_JUMP)  ; LAB_0057e6b0
    LEA EAX,[EBX + 0x20]                ; 0057e6d4
    PUSH EAX                            ; 0057e6d7
    MOV ECX,dword ptr [0x0060b280]      ; 0057e6d8 | DAT_0060b280
    PUSH ECX                            ; 0057e6de
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0057e6df
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0057e6e4
    PUSH 0x0                            ; 0057e6e7
    LEA EAX,[EBX + 0x6d4]               ; 0057e6e9
    PUSH EAX                            ; 0057e6ef
    MOV EDI,dword ptr [0x0060b280]      ; 0057e6f0 | DAT_0060b280
    PUSH EDI                            ; 0057e6f6
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0057e6f7
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0057e6fc
    PUSH -0x1                           ; 0057e6ff
    PUSH 0x1                            ; 0057e701
    PUSH EBX                            ; 0057e703
    CALL core_turret.cpp_CTurret_getCurFrame_FUN_0057ee90 ; 0057e704
        ;   XREF to: 0057ee90 (UNCONDITIONAL_CALL)  ; float core_turret.cpp_CTurret_getCurFrame_FUN_0057ee90(CTurret * this_ptr, int model_index)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0057e709
    FLD float ptr [ESP + 0x3c]          ; 0057e70d
    ADD ESP,0x8                         ; 0057e711
    SUB ESP,0x4                         ; 0057e714
    ADD EBX,0x6e0                       ; 0057e717
    FSTP float ptr [ESP]                ; 0057e71d
    PUSH EBX                            ; 0057e720
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0057e721
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0057e726
    MOV EBP,dword ptr [0x0060b280]      ; 0057e729 | DAT_0060b280
    PUSH EBP                            ; 0057e72f
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0057e730
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0057e735
    MOV EAX,ESI                         ; 0057e738
    ADD ESP,0x34                        ; 0057e73a
    POP EBP                             ; 0057e73d
    POP EDI                             ; 0057e73e
    POP ESI                             ; 0057e73f
    POP EBX                             ; 0057e740
    RET                                 ; 0057e741

