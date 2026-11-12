; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_00410670(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005cb59f
;   undefined4 DAT_0060b280
;   undefined4 DAT_007bc4dc
;   undefined4 DAT_007bc51c
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d1cdc8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   core_motion.cpp_FUN_005035c0
;   core_motion.cpp_FUN_005042e0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
;   crt_math.c_round_FUN_005b7ff0
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410670
        ;   Label: core_baron.cpp_CBaron_renderTransparent_FUN_00410670
    PUSH ESI                            ; 00410671
    PUSH EDI                            ; 00410672
    PUSH EBP                            ; 00410673
    MOV EBP,ESP                         ; 00410674
    SUB ESP,0x4c                        ; 00410676
    AND ESP,0xfffffff8                  ; 00410679
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041067c
    CMP dword ptr [EBX + 0x25738],0x0   ; 0041067f
    JNZ 0x00410695                      ; 00410686
        ;   XREF to: 00410695 (CONDITIONAL_JUMP)  ; LAB_00410695
    CMP dword ptr [EBX + 0x10a64],0x2   ; 00410688
    JZ 0x0041083d                       ; 0041068f
        ;   XREF to: 0041083d (CONDITIONAL_JUMP)  ; LAB_0041083d
    LEA EDI,[EBX + 0x2b4]               ; 00410695
        ;   Label: LAB_00410695
    PUSH EDI                            ; 0041069b
    CALL core_motion.cpp_FUN_005035c0   ; 0041069c
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 004106a1
    MOV ESI,dword ptr [EAX + 0x24]      ; 004106a4
    MOV EAX,dword ptr [EDI + 0x8]       ; 004106a7
    PUSH EDI                            ; 004106aa
    MOV dword ptr [ESP + 0x48],EAX      ; 004106ab
    MOV dword ptr [ESP + 0x8],EAX       ; 004106af
    CALL core_motion.cpp_FUN_005035c0   ; 004106b3
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 004106b8
    FILD dword ptr [EAX + 0x64]         ; 004106bb
    FSTP float ptr [ESP]                ; 004106be
    CMP ESI,0x6                         ; 004106c1
    JNC 0x0041085c                      ; 004106c4
        ;   XREF to: 0041085c (CONDITIONAL_JUMP)  ; LAB_0041085c
    CMP ESI,0x5                         ; 004106ca
    JNZ 0x00410867                      ; 004106cd
        ;   XREF to: 00410867 (CONDITIONAL_JUMP)  ; LAB_00410867
    FLD float ptr [ESP + 0x4]           ; 004106d3
        ;   Label: LAB_004106d3
    FMUL double ptr [0x005cb59f]        ; 004106d7 | DAT_005cb59f
    FDIV float ptr [ESP]                ; 004106dd
    CALL crt_math.c_round_FUN_005b7ff0  ; 004106e0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
        ;   Label: LAB_004106e0
    FISTP dword ptr [ESP + 0x48]        ; 004106e5
    CMP dword ptr [EBX + 0x2573c],0x0   ; 004106e9
        ;   Label: LAB_004106e9
    JZ 0x00410767                       ; 004106f0
        ;   XREF to: 00410767 (CONDITIONAL_JUMP)  ; LAB_00410767
    MOV EDX,dword ptr [ESP + 0x48]      ; 004106f2
    ADD EDX,EDX                         ; 004106f6
    MOV ESI,0x3                         ; 004106f8
    MOV EAX,EDX                         ; 004106fd
    SAR EDX,0x1f                        ; 004106ff
    IDIV ESI                            ; 00410702
    PUSH EAX                            ; 00410704
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 00410705
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0041070a
    LEA EAX,[EBX + 0x20]                ; 0041070d
    PUSH EAX                            ; 00410710
    MOV EAX,[0x0060b280]                ; 00410711 | DAT_0060b280
    PUSH EAX                            ; 00410716 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00410717
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0041071c
    XOR EDX,EDX                         ; 0041071f
    MOV EAX,[0x007bc4dc]                ; 00410721 | DAT_007bc4dc
    PUSH EDX                            ; 00410726
    MOV dword ptr [ESP + 0x40],EAX      ; 00410727
    LEA EAX,[ESP + 0x3c]                ; 0041072b
    PUSH EAX                            ; 0041072f
    MOV ESI,dword ptr [0x0060b280]      ; 00410730 | DAT_0060b280
    PUSH ESI                            ; 00410736 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x44],EDX      ; 00410737
    MOV dword ptr [ESP + 0x4c],EDX      ; 0041073b
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0041073f
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00410744
    PUSH 0x23                           ; 00410747
    PUSH 0x0                            ; 00410749
    PUSH 0x7bc51c                       ; 0041074b | DAT_007bc51c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00410750
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00410755
    MOV EDI,dword ptr [0x0060b280]      ; 00410758 | DAT_0060b280
    PUSH EDI                            ; 0041075e | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0041075f
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00410764
    PUSH EBX                            ; 00410767
        ;   Label: LAB_00410767
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00410768
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041076d
    PUSH 0x0                            ; 00410770
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00410772
    PUSH EBX                            ; 00410778
    LEA ESI,[ESP + 0x10]                ; 00410779
    LEA EDI,[ESP + 0x28]                ; 0041077d
    CALL dword ptr [EAX + 0x24]         ; 00410781
    MOV ECX,0x6                         ; 00410784
    ADD ESP,0x4                         ; 00410789
    LEA EAX,[ESP + 0x24]                ; 0041078c
    LEA ESI,[ESP + 0xc]                 ; 00410790
    PUSH EAX                            ; 00410794
    MOVSD.REP ES:EDI,ESI                ; 00410795
    CALL core_box.cpp_FUN_0041a840      ; 00410797
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0041079c
    MOV EDI,EAX                         ; 0041079f
    TEST EAX,EAX                        ; 004107a1
    JZ 0x0041082b                       ; 004107a3
        ;   XREF to: 0041082b (CONDITIONAL_JUMP)  ; LAB_0041082b
    PUSH 0x1                            ; 004107a9
    MOV EAX,[0x0060b280]                ; 004107ab | DAT_0060b280
    PUSH EAX                            ; 004107b0 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 004107b1
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004107b6
    MOV EDX,dword ptr [ESP + 0x48]      ; 004107b9
    PUSH EDX                            ; 004107bd
    MOV ECX,dword ptr [0x0060b280]      ; 004107be | DAT_0060b280
    PUSH ECX                            ; 004107c4 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004107c5
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004107ca
    PUSH 0x1                            ; 004107cd
    MOV ESI,dword ptr [0x0060b280]      ; 004107cf | DAT_0060b280
    PUSH ESI                            ; 004107d5 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540 ; 004107d6
        ;   XREF to: 0046c540 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 004107db
    PUSH 0x0                            ; 004107de
    PUSH 0x1                            ; 004107e0
    PUSH 0x2e7                          ; 004107e2
    PUSH -0x1                           ; 004107e7
    LEA ESI,[EBX + 0x2b4]               ; 004107e9
    PUSH ESI                            ; 004107ef
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170 ; 004107f0
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 004107f5
    MOV EAX,[0x0060b280]                ; 004107f8 | DAT_0060b280
    PUSH EAX                            ; 004107fd | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900 ; 004107fe
        ;   XREF to: 0046c900 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(CDemonRenderer * this_ptr)
    MOV EDX,dword ptr [0x01d1cdc8]      ; 00410803 | DAT_01d1cdc8
    ADD ESP,0x4                         ; 00410809
    TEST EDX,EDX                        ; 0041080c
    JZ 0x0041081a                       ; 0041080e
        ;   XREF to: 0041081a (CONDITIONAL_JUMP)  ; LAB_0041081a
    PUSH EBX                            ; 00410810
    PUSH ESI                            ; 00410811
    CALL core_motion.cpp_FUN_005042e0   ; 00410812
        ;   XREF to: 005042e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005042e0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00410817
    PUSH 0x0                            ; 0041081a
        ;   Label: LAB_0041081a
    MOV ECX,dword ptr [0x0060b280]      ; 0041081c | DAT_0060b280
    PUSH ECX                            ; 00410822 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00410823
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00410828
    PUSH EBX                            ; 0041082b
        ;   Label: LAB_0041082b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0041082c
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00410831
    MOV EAX,EDI                         ; 00410834
    MOV ESP,EBP                         ; 00410836
    POP EBP                             ; 00410838
    POP EDI                             ; 00410839
    POP ESI                             ; 0041083a
    POP EBX                             ; 0041083b
    RET                                 ; 0041083c
    XOR EAX,EAX                         ; 0041083d
        ;   Label: LAB_0041083d
    MOV ESP,EBP                         ; 0041083f
    POP EBP                             ; 00410841
    POP EDI                             ; 00410842
    POP ESI                             ; 00410843
    POP EBX                             ; 00410844
    RET                                 ; 00410845
    FLD float ptr [ESP]                 ; 00410846
        ;   Label: LAB_00410846
    FLD ST0                             ; 00410849
    FSUB float ptr [ESP + 0x44]         ; 0041084b
    FMUL double ptr [0x005cb59f]        ; 0041084f | DAT_005cb59f
    FDIVRP                              ; 00410855
    JMP 0x004106e0                      ; 00410857
        ;   XREF to: 004106e0 (UNCONDITIONAL_JUMP)  ; LAB_004106e0
    JBE 0x004106d3                      ; 0041085c
        ;   XREF to: 004106d3 (CONDITIONAL_JUMP)  ; LAB_004106d3
        ;   Label: LAB_0041085c
    CMP ESI,0x7                         ; 00410862
    JZ 0x00410846                       ; 00410865
        ;   XREF to: 00410846 (CONDITIONAL_JUMP)  ; LAB_00410846
    MOV dword ptr [ESP + 0x48],0xfde8   ; 00410867
        ;   Label: LAB_00410867
    JMP 0x004106e9                      ; 0041086f
        ;   XREF to: 004106e9 (UNCONDITIONAL_JUMP)  ; LAB_004106e9

