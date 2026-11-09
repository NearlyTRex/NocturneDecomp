; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_baron_cpp_FUN_004101f0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d350a
;   undefined4 DAT_00612560
;   undefined4 DAT_007c34dc
;   undefined4 DAT_007c351c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d39d34
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_FUN_005254b0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
;   crt_math.c_round_FUN_005c03a0
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004101f0
        ;   Label: core_baron.cpp_FUN_004101f0
    PUSH ESI                            ; 004101f1
    PUSH EDI                            ; 004101f2
    PUSH EBP                            ; 004101f3
    MOV EBP,ESP                         ; 004101f4
    SUB ESP,0x4c                        ; 004101f6
    AND ESP,0xfffffff8                  ; 004101f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004101fc
    CMP dword ptr [EBX + 0x200a4],0x0   ; 004101ff
    JNZ 0x00410215                      ; 00410206
        ;   XREF to: 00410215 (CONDITIONAL_JUMP)  ; LAB_00410215
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 00410208
    JZ 0x004103bd                       ; 0041020f
        ;   XREF to: 004103bd (CONDITIONAL_JUMP)  ; LAB_004103bd
    LEA EDI,[EBX + 0x158]               ; 00410215
        ;   Label: LAB_00410215
    PUSH EDI                            ; 0041021b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0041021c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00410221
    MOV ESI,dword ptr [EAX + 0x24]      ; 00410224
    MOV EAX,dword ptr [EDI + 0x8]       ; 00410227
    PUSH EDI                            ; 0041022a
    MOV dword ptr [ESP + 0x48],EAX      ; 0041022b
    MOV dword ptr [ESP + 0x8],EAX       ; 0041022f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00410233
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00410238
    FILD dword ptr [EAX + 0x64]         ; 0041023b
    FSTP float ptr [ESP]                ; 0041023e
    CMP ESI,0x6                         ; 00410241
    JNC 0x004103dc                      ; 00410244
        ;   XREF to: 004103dc (CONDITIONAL_JUMP)  ; LAB_004103dc
    CMP ESI,0x5                         ; 0041024a
    JNZ 0x004103e7                      ; 0041024d
        ;   XREF to: 004103e7 (CONDITIONAL_JUMP)  ; LAB_004103e7
    FLD float ptr [ESP + 0x4]           ; 00410253
        ;   Label: LAB_00410253
    FMUL double ptr [0x005d350a]        ; 00410257 | DAT_005d350a
    FDIV float ptr [ESP]                ; 0041025d
    CALL crt_math.c_round_FUN_005c03a0  ; 00410260
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
        ;   Label: LAB_00410260
    FISTP dword ptr [ESP + 0x48]        ; 00410265
    CMP dword ptr [EBX + 0x200a8],0x0   ; 00410269
        ;   Label: LAB_00410269
    JZ 0x004102e7                       ; 00410270
        ;   XREF to: 004102e7 (CONDITIONAL_JUMP)  ; LAB_004102e7
    MOV EDX,dword ptr [ESP + 0x48]      ; 00410272
    ADD EDX,EDX                         ; 00410276
    MOV ESI,0x3                         ; 00410278
    MOV EAX,EDX                         ; 0041027d
    SAR EDX,0x1f                        ; 0041027f
    IDIV ESI                            ; 00410282
    PUSH EAX                            ; 00410284
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00410285
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 0041028a
    LEA EAX,[EBX + 0x20]                ; 0041028d
    PUSH EAX                            ; 00410290
    MOV EAX,[0x00612560]                ; 00410291 | DAT_00612560
    PUSH EAX                            ; 00410296 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 00410297
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0041029c
    XOR EDX,EDX                         ; 0041029f
    MOV EAX,[0x007c34dc]                ; 004102a1 | DAT_007c34dc
    PUSH EDX                            ; 004102a6
    MOV dword ptr [ESP + 0x40],EAX      ; 004102a7
    LEA EAX,[ESP + 0x3c]                ; 004102ab
    PUSH EAX                            ; 004102af
    MOV ESI,dword ptr [0x00612560]      ; 004102b0 | DAT_00612560
    PUSH ESI                            ; 004102b6 | DAT_01bc120c
    MOV dword ptr [ESP + 0x44],EDX      ; 004102b7
    MOV dword ptr [ESP + 0x4c],EDX      ; 004102bb
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004102bf
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004102c4
    PUSH 0x23                           ; 004102c7
    PUSH 0x0                            ; 004102c9
    PUSH 0x7c351c                       ; 004102cb | DAT_007c351c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004102d0
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004102d5
    MOV EDI,dword ptr [0x00612560]      ; 004102d8 | DAT_00612560
    PUSH EDI                            ; 004102de | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004102df
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004102e4
    PUSH EBX                            ; 004102e7
        ;   Label: LAB_004102e7
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004102e8
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004102ed
    PUSH 0x0                            ; 004102f0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004102f2
    PUSH EBX                            ; 004102f8
    LEA ESI,[ESP + 0x10]                ; 004102f9
    LEA EDI,[ESP + 0x28]                ; 004102fd
    CALL dword ptr [EAX + 0x1c]         ; 00410301
    MOV ECX,0x6                         ; 00410304
    ADD ESP,0x4                         ; 00410309
    LEA EAX,[ESP + 0x24]                ; 0041030c
    LEA ESI,[ESP + 0xc]                 ; 00410310
    PUSH EAX                            ; 00410314
    MOVSD.REP ES:EDI,ESI                ; 00410315
    CALL core_box.cpp_FUN_004207b0      ; 00410317
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0041031c
    MOV EDI,EAX                         ; 0041031f
    TEST EAX,EAX                        ; 00410321
    JZ 0x004103ab                       ; 00410323
        ;   XREF to: 004103ab (CONDITIONAL_JUMP)  ; LAB_004103ab
    PUSH 0x1                            ; 00410329
    MOV EAX,[0x00612560]                ; 0041032b | DAT_00612560
    PUSH EAX                            ; 00410330 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00410331
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00410336
    MOV EDX,dword ptr [ESP + 0x48]      ; 00410339
    PUSH EDX                            ; 0041033d
    MOV ECX,dword ptr [0x00612560]      ; 0041033e | DAT_00612560
    PUSH ECX                            ; 00410344 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 00410345
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0041034a
    PUSH 0x1                            ; 0041034d
    MOV ESI,dword ptr [0x00612560]      ; 0041034f | DAT_00612560
    PUSH ESI                            ; 00410355 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40 ; 00410356
        ;   XREF to: 00484a40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0041035b
    PUSH 0x0                            ; 0041035e
    PUSH 0x1                            ; 00410360
    PUSH 0x2e7                          ; 00410362
    PUSH -0x1                           ; 00410367
    LEA ESI,[EBX + 0x158]               ; 00410369
    PUSH ESI                            ; 0041036f
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810 ; 00410370
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00410375
    MOV EAX,[0x00612560]                ; 00410378 | DAT_00612560
    PUSH EAX                            ; 0041037d | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00 ; 0041037e
        ;   XREF to: 00484e00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(CDemonRenderer * this_ptr)
    MOV EDX,dword ptr [0x01d39d34]      ; 00410383 | DAT_01d39d34
    ADD ESP,0x4                         ; 00410389
    TEST EDX,EDX                        ; 0041038c
    JZ 0x0041039a                       ; 0041038e
        ;   XREF to: 0041039a (CONDITIONAL_JUMP)  ; LAB_0041039a
    PUSH EBX                            ; 00410390
    PUSH ESI                            ; 00410391
    CALL core_motion.cpp_FUN_005254b0   ; 00410392
        ;   XREF to: 005254b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005254b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00410397
    PUSH 0x0                            ; 0041039a
        ;   Label: LAB_0041039a
    MOV ECX,dword ptr [0x00612560]      ; 0041039c | DAT_00612560
    PUSH ECX                            ; 004103a2 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004103a3
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004103a8
    PUSH EBX                            ; 004103ab
        ;   Label: LAB_004103ab
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004103ac
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004103b1
    MOV EAX,EDI                         ; 004103b4
    MOV ESP,EBP                         ; 004103b6
    POP EBP                             ; 004103b8
    POP EDI                             ; 004103b9
    POP ESI                             ; 004103ba
    POP EBX                             ; 004103bb
    RET                                 ; 004103bc
    XOR EAX,EAX                         ; 004103bd
        ;   Label: LAB_004103bd
    MOV ESP,EBP                         ; 004103bf
    POP EBP                             ; 004103c1
    POP EDI                             ; 004103c2
    POP ESI                             ; 004103c3
    POP EBX                             ; 004103c4
    RET                                 ; 004103c5
    FLD float ptr [ESP]                 ; 004103c6
        ;   Label: LAB_004103c6
    FLD ST0                             ; 004103c9
    FSUB float ptr [ESP + 0x44]         ; 004103cb
    FMUL double ptr [0x005d350a]        ; 004103cf | DAT_005d350a
    FDIVRP                              ; 004103d5
    JMP 0x00410260                      ; 004103d7
        ;   XREF to: 00410260 (UNCONDITIONAL_JUMP)  ; LAB_00410260
    JBE 0x00410253                      ; 004103dc
        ;   XREF to: 00410253 (CONDITIONAL_JUMP)  ; LAB_00410253
        ;   Label: LAB_004103dc
    CMP ESI,0x7                         ; 004103e2
    JZ 0x004103c6                       ; 004103e5
        ;   XREF to: 004103c6 (CONDITIONAL_JUMP)  ; LAB_004103c6
    MOV dword ptr [ESP + 0x48],0xfde8   ; 004103e7
        ;   Label: LAB_004103e7
    JMP 0x00410269                      ; 004103ef
        ;   XREF to: 00410269 (UNCONDITIONAL_JUMP)  ; LAB_00410269

