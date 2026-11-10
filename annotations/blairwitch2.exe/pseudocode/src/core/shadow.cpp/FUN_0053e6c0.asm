; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_shadow_cpp_FUN_0053e6c0(CCharacter *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005e6704
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141f0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d1cdc8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_motion.cpp_FUN_005035c0
;   core_motion.cpp_FUN_005042e0
;   core_set.cpp_FUN_005306e0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e6c0
        ;   Label: core_shadow.cpp_FUN_0053e6c0
    PUSH ESI                            ; 0053e6c1
    PUSH EBP                            ; 0053e6c2
    SUB ESP,0x30                        ; 0053e6c3
    MOV EBX,dword ptr [ESP + 0x40]      ; 0053e6c6
    LEA EAX,[EBX + 0x2b4]               ; 0053e6ca
    PUSH EAX                            ; 0053e6d0
    CALL core_motion.cpp_FUN_005035c0   ; 0053e6d1
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0053e6d6
    PUSH 0x5e6704                       ; 0053e6d9 | = "heroCanSee"
    MOV EDX,dword ptr [0x006141f0]      ; 0053e6de | DAT_006141f0
    PUSH EDX                            ; 0053e6e4
    MOV ESI,dword ptr [EAX + 0x24]      ; 0053e6e5
    MOV dword ptr [EBX + 0x2828],0x0    ; 0053e6e8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0053e6f2
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0053e6f7
    TEST EAX,EAX                        ; 0053e6fa
    JZ 0x0053e81e                       ; 0053e6fc
        ;   XREF to: 0053e81e (CONDITIONAL_JUMP)  ; LAB_0053e81e
    CMP dword ptr [EBX + 0x10a64],0x0   ; 0053e702
    JNZ 0x0053e825                      ; 0053e709
        ;   XREF to: 0053e825 (CONDITIONAL_JUMP)  ; LAB_0053e825
    CMP ESI,0x14                        ; 0053e70f
    JZ 0x0053e71d                       ; 0053e712
        ;   XREF to: 0053e71d (CONDITIONAL_JUMP)  ; LAB_0053e71d
    CMP ESI,0xd                         ; 0053e714
    JNZ 0x0053e82e                      ; 0053e717
        ;   XREF to: 0053e82e (CONDITIONAL_JUMP)  ; LAB_0053e82e
    PUSH EDI                            ; 0053e71d
        ;   Label: LAB_0053e71d
    PUSH EBX                            ; 0053e71e
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0053e71f
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053e724
    PUSH 0x0                            ; 0053e727
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053e729
    PUSH EBX                            ; 0053e72f
    LEA ESI,[ESP + 0x24]                ; 0053e730
    LEA EDI,[ESP + 0xc]                 ; 0053e734
    CALL dword ptr [EAX + 0x24]         ; 0053e738
    MOV ECX,0x6                         ; 0053e73b
    ADD ESP,0x4                         ; 0053e740
    LEA EAX,[ESP + 0x8]                 ; 0053e743
    LEA ESI,[ESP + 0x20]                ; 0053e747
    PUSH EAX                            ; 0053e74b
    MOVSD.REP ES:EDI,ESI                ; 0053e74c
    CALL core_box.cpp_FUN_0041a840      ; 0053e74e
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0053e753
    TEST EAX,EAX                        ; 0053e756
    JZ 0x0053e7dc                       ; 0053e758
        ;   XREF to: 0053e7dc (CONDITIONAL_JUMP)  ; LAB_0053e7dc
    MOV ESI,dword ptr [EBX + 0x10b78]   ; 0053e75e
    PUSH ESI                            ; 0053e764
    MOV EDI,dword ptr [0x0060b280]      ; 0053e765 | DAT_0060b280
    PUSH EDI                            ; 0053e76b | DAT_01ba5c50
    MOV dword ptr [EBX + 0x2828],0x1    ; 0053e76c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0053e776
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0053e77b
    PUSH 0x0                            ; 0053e77e
    MOV EBP,dword ptr [0x0060b280]      ; 0053e780 | DAT_0060b280
    PUSH EBP                            ; 0053e786 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0053e787
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0053e78c
    PUSH 0x1                            ; 0053e78f
    MOV EAX,[0x0060b280]                ; 0053e791 | DAT_0060b280
    PUSH EAX                            ; 0053e796 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540 ; 0053e797
        ;   XREF to: 0046c540 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0053e79c
    PUSH 0x0                            ; 0053e79f
    PUSH 0x1                            ; 0053e7a1
    PUSH 0x2e7                          ; 0053e7a3
    PUSH -0x1                           ; 0053e7a8
    LEA ESI,[EBX + 0x2b4]               ; 0053e7aa
    PUSH ESI                            ; 0053e7b0
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170 ; 0053e7b1
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0053e7b6
    MOV EDX,dword ptr [0x0060b280]      ; 0053e7b9 | DAT_0060b280
    PUSH EDX                            ; 0053e7bf | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900 ; 0053e7c0
        ;   XREF to: 0046c900 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(CDemonRenderer * this_ptr)
    MOV ECX,dword ptr [0x01d1cdc8]      ; 0053e7c5 | DAT_01d1cdc8
    ADD ESP,0x4                         ; 0053e7cb
    TEST ECX,ECX                        ; 0053e7ce
    JZ 0x0053e7dc                       ; 0053e7d0
        ;   XREF to: 0053e7dc (CONDITIONAL_JUMP)  ; LAB_0053e7dc
    PUSH EBX                            ; 0053e7d2
    PUSH ESI                            ; 0053e7d3
    CALL core_motion.cpp_FUN_005042e0   ; 0053e7d4
        ;   XREF to: 005042e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005042e0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053e7d9
    PUSH EBX                            ; 0053e7dc
        ;   Label: LAB_0053e7dc
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0053e7dd
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    MOV ESI,dword ptr [EBX + 0x10b7c]   ; 0053e7e2
    ADD ESP,0x4                         ; 0053e7e8
    TEST ESI,ESI                        ; 0053e7eb
    JZ 0x0053e803                       ; 0053e7ed
        ;   XREF to: 0053e803 (CONDITIONAL_JUMP)  ; LAB_0053e803
    PUSH 0x20b1924                      ; 0053e7ef
    MOV EDI,dword ptr [0x0061b5a8]      ; 0053e7f4 | g_CDemonSetPtr
    PUSH EDI                            ; 0053e7fa | g_CDemonSetInstance
    CALL core_set.cpp_FUN_005306e0      ; 0053e7fb
        ;   XREF to: 005306e0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_005306e0()
    ADD ESP,0x8                         ; 0053e800
    PUSH 0xfde8                         ; 0053e803
        ;   Label: LAB_0053e803
    MOV EBP,dword ptr [0x0060b280]      ; 0053e808 | DAT_0060b280
    PUSH EBP                            ; 0053e80e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0053e80f
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0053e814
    POP EDI                             ; 0053e817
    MOV EAX,dword ptr [EBX + 0x2828]    ; 0053e818
    ADD ESP,0x30                        ; 0053e81e
        ;   Label: LAB_0053e81e
    POP EBP                             ; 0053e821
    POP ESI                             ; 0053e822
    POP EBX                             ; 0053e823
    RET                                 ; 0053e824
    XOR EAX,EAX                         ; 0053e825
        ;   Label: LAB_0053e825
    ADD ESP,0x30                        ; 0053e827
    POP EBP                             ; 0053e82a
    POP ESI                             ; 0053e82b
    POP EBX                             ; 0053e82c
    RET                                 ; 0053e82d
    CMP ESI,0xe                         ; 0053e82e
        ;   Label: LAB_0053e82e
    JZ 0x0053e71d                       ; 0053e831
        ;   XREF to: 0053e71d (CONDITIONAL_JUMP)  ; LAB_0053e71d
    CMP ESI,0xf                         ; 0053e837
    JZ 0x0053e71d                       ; 0053e83a
        ;   XREF to: 0053e71d (CONDITIONAL_JUMP)  ; LAB_0053e71d
    CMP ESI,0x10                        ; 0053e840
    JZ 0x0053e71d                       ; 0053e843
        ;   XREF to: 0053e71d (CONDITIONAL_JUMP)  ; LAB_0053e71d
    PUSH EBX                            ; 0053e849
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0 ; 0053e84a
        ;   XREF to: 004268b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0053e84f
    MOV EAX,dword ptr [EBX + 0x2828]    ; 0053e852
    ADD ESP,0x30                        ; 0053e858
    POP EBP                             ; 0053e85b
    POP ESI                             ; 0053e85c
    POP EBX                             ; 0053e85d
    RET                                 ; 0053e85e

