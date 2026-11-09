; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_shadow_cpp_FUN_0055fc60(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005f173f
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4d0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d39d34
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_charactr.cpp_FUN_004301e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_FUN_005254b0
;   core_set.cpp_FUN_00551990
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055fc60
        ;   Label: core_shadow.cpp_FUN_0055fc60
    PUSH ESI                            ; 0055fc61
    PUSH EBP                            ; 0055fc62
    SUB ESP,0x30                        ; 0055fc63
    MOV EBX,dword ptr [ESP + 0x40]      ; 0055fc66
    LEA EAX,[EBX + 0x158]               ; 0055fc6a
    PUSH EAX                            ; 0055fc70
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0055fc71
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0055fc76
    PUSH 0x5f173f                       ; 0055fc79 | = "heroCanSee"
    MOV EDX,dword ptr [0x0061b4d0]      ; 0055fc7e | DAT_0061b4d0
    PUSH EDX                            ; 0055fc84
    MOV ESI,dword ptr [EAX + 0x24]      ; 0055fc85
    MOV dword ptr [EBX + 0x27bc],0x0    ; 0055fc88
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0055fc92
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0055fc97
    TEST EAX,EAX                        ; 0055fc9a
    JZ 0x0055fdbe                       ; 0055fc9c
        ;   XREF to: 0055fdbe (CONDITIONAL_JUMP)  ; LAB_0055fdbe
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 0055fca2
    JNZ 0x0055fdc5                      ; 0055fca9
        ;   XREF to: 0055fdc5 (CONDITIONAL_JUMP)  ; LAB_0055fdc5
    CMP ESI,0x16                        ; 0055fcaf
    JZ 0x0055fcbd                       ; 0055fcb2
        ;   XREF to: 0055fcbd (CONDITIONAL_JUMP)  ; LAB_0055fcbd
    CMP ESI,0xf                         ; 0055fcb4
    JNZ 0x0055fdce                      ; 0055fcb7
        ;   XREF to: 0055fdce (CONDITIONAL_JUMP)  ; LAB_0055fdce
    PUSH EDI                            ; 0055fcbd
        ;   Label: LAB_0055fcbd
    PUSH EBX                            ; 0055fcbe
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0055fcbf
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0055fcc4
    PUSH 0x0                            ; 0055fcc7
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055fcc9
    PUSH EBX                            ; 0055fccf
    LEA ESI,[ESP + 0x24]                ; 0055fcd0
    LEA EDI,[ESP + 0xc]                 ; 0055fcd4
    CALL dword ptr [EAX + 0x1c]         ; 0055fcd8
    MOV ECX,0x6                         ; 0055fcdb
    ADD ESP,0x4                         ; 0055fce0
    LEA EAX,[ESP + 0x8]                 ; 0055fce3
    LEA ESI,[ESP + 0x20]                ; 0055fce7
    PUSH EAX                            ; 0055fceb
    MOVSD.REP ES:EDI,ESI                ; 0055fcec
    CALL core_box.cpp_FUN_004207b0      ; 0055fcee
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0055fcf3
    TEST EAX,EAX                        ; 0055fcf6
    JZ 0x0055fd7c                       ; 0055fcf8
        ;   XREF to: 0055fd7c (CONDITIONAL_JUMP)  ; LAB_0055fd7c
    MOV ESI,dword ptr [EBX + 0xc304]    ; 0055fcfe
    PUSH ESI                            ; 0055fd04
    MOV EDI,dword ptr [0x00612560]      ; 0055fd05 | DAT_00612560
    PUSH EDI                            ; 0055fd0b | DAT_01bc120c
    MOV dword ptr [EBX + 0x27bc],0x1    ; 0055fd0c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 0055fd16
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0055fd1b
    PUSH 0x0                            ; 0055fd1e
    MOV EBP,dword ptr [0x00612560]      ; 0055fd20 | DAT_00612560
    PUSH EBP                            ; 0055fd26 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 0055fd27
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0055fd2c
    PUSH 0x1                            ; 0055fd2f
    MOV EAX,[0x00612560]                ; 0055fd31 | DAT_00612560
    PUSH EAX                            ; 0055fd36 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40 ; 0055fd37
        ;   XREF to: 00484a40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0055fd3c
    PUSH 0x0                            ; 0055fd3f
    PUSH 0x1                            ; 0055fd41
    PUSH 0x2e7                          ; 0055fd43
    PUSH -0x1                           ; 0055fd48
    LEA ESI,[EBX + 0x158]               ; 0055fd4a
    PUSH ESI                            ; 0055fd50
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810 ; 0055fd51
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0055fd56
    MOV EDX,dword ptr [0x00612560]      ; 0055fd59 | DAT_00612560
    PUSH EDX                            ; 0055fd5f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00 ; 0055fd60
        ;   XREF to: 00484e00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(CDemonRenderer * this_ptr)
    MOV ECX,dword ptr [0x01d39d34]      ; 0055fd65 | DAT_01d39d34
    ADD ESP,0x4                         ; 0055fd6b
    TEST ECX,ECX                        ; 0055fd6e
    JZ 0x0055fd7c                       ; 0055fd70
        ;   XREF to: 0055fd7c (CONDITIONAL_JUMP)  ; LAB_0055fd7c
    PUSH EBX                            ; 0055fd72
    PUSH ESI                            ; 0055fd73
    CALL core_motion.cpp_FUN_005254b0   ; 0055fd74
        ;   XREF to: 005254b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005254b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0055fd79
    PUSH EBX                            ; 0055fd7c
        ;   Label: LAB_0055fd7c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0055fd7d
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    MOV ESI,dword ptr [EBX + 0xc308]    ; 0055fd82
    ADD ESP,0x4                         ; 0055fd88
    TEST ESI,ESI                        ; 0055fd8b
    JZ 0x0055fda3                       ; 0055fd8d
        ;   XREF to: 0055fda3 (CONDITIONAL_JUMP)  ; LAB_0055fda3
    PUSH 0x269cbb0                      ; 0055fd8f
    MOV EDI,dword ptr [0x00622c18]      ; 0055fd94 | g_CDemonSetPtr
    PUSH EDI                            ; 0055fd9a | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00551990      ; 0055fd9b
        ;   XREF to: 00551990 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00551990()
    ADD ESP,0x8                         ; 0055fda0
    PUSH 0xfde8                         ; 0055fda3
        ;   Label: LAB_0055fda3
    MOV EBP,dword ptr [0x00612560]      ; 0055fda8 | DAT_00612560
    PUSH EBP                            ; 0055fdae | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 0055fdaf
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0055fdb4
    POP EDI                             ; 0055fdb7
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0055fdb8
    ADD ESP,0x30                        ; 0055fdbe
        ;   Label: LAB_0055fdbe
    POP EBP                             ; 0055fdc1
    POP ESI                             ; 0055fdc2
    POP EBX                             ; 0055fdc3
    RET                                 ; 0055fdc4
    XOR EAX,EAX                         ; 0055fdc5
        ;   Label: LAB_0055fdc5
    ADD ESP,0x30                        ; 0055fdc7
    POP EBP                             ; 0055fdca
    POP ESI                             ; 0055fdcb
    POP EBX                             ; 0055fdcc
    RET                                 ; 0055fdcd
    CMP ESI,0x10                        ; 0055fdce
        ;   Label: LAB_0055fdce
    JZ 0x0055fcbd                       ; 0055fdd1
        ;   XREF to: 0055fcbd (CONDITIONAL_JUMP)  ; LAB_0055fcbd
    CMP ESI,0x11                        ; 0055fdd7
    JZ 0x0055fcbd                       ; 0055fdda
        ;   XREF to: 0055fcbd (CONDITIONAL_JUMP)  ; LAB_0055fcbd
    CMP ESI,0x12                        ; 0055fde0
    JZ 0x0055fcbd                       ; 0055fde3
        ;   XREF to: 0055fcbd (CONDITIONAL_JUMP)  ; LAB_0055fcbd
    PUSH EBX                            ; 0055fde9
    CALL core_charactr.cpp_FUN_004301e0 ; 0055fdea
        ;   XREF to: 004301e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004301e0()
    ADD ESP,0x4                         ; 0055fdef
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0055fdf2
    ADD ESP,0x30                        ; 0055fdf8
    POP EBP                             ; 0055fdfb
    POP ESI                             ; 0055fdfc
    POP EBX                             ; 0055fdfd
    RET                                 ; 0055fdfe

