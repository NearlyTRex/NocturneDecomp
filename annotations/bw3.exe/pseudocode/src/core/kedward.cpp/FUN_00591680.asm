; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_kedward_cpp_FUN_00591680(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d8eb4
;   undefined4 DAT_005d8ebc
;   undefined4 DAT_005d8ec4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d8e40c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_charactr.cpp_FUN_0042f310
;   core_motion.cpp_FUN_004fcdc0
;   core_skeleton.cpp_FUN_0054e3a0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591680
        ;   Label: core_kedward.cpp_FUN_00591680
    PUSH EDI                            ; 00591681
    PUSH EBP                            ; 00591682
    SUB ESP,0x14                        ; 00591683
    MOV EBX,dword ptr [ESP + 0x24]      ; 00591686
    FILD dword ptr [EBX + 0xd070]       ; 0059168a
    FLD double ptr [0x005d8eb4]         ; 00591690 | DAT_005d8eb4
    FSUB ST0,ST1                        ; 00591696
    FXCH                                ; 00591698
    FLD double ptr [0x005d8ebc]         ; 0059169a | DAT_005d8ebc
    FXCH                                ; 005916a0
    FMUL ST1                            ; 005916a2
    FXCH ST2                            ; 005916a4
    FMULP                               ; 005916a6
    FXCH                                ; 005916a8
    FLD double ptr [0x005d8ec4]         ; 005916aa | DAT_005d8ec4
    FXCH                                ; 005916b0
    FMUL ST1                            ; 005916b2
    FXCH ST2                            ; 005916b4
    FMULP                               ; 005916b6
    MOV EDX,dword ptr [EBX + 0xd068]    ; 005916b8
    FXCH                                ; 005916be
    FSTP float ptr [ESP + 0x10]         ; 005916c0
    FSTP float ptr [ESP + 0xc]          ; 005916c4
    TEST EDX,EDX                        ; 005916c8
    JNZ 0x0059183e                      ; 005916ca
        ;   XREF to: 0059183e (CONDITIONAL_JUMP)  ; LAB_0059183e
    FLD float ptr [ESP + 0x10]          ; 005916d0
    FMUL float ptr [EBX + 0xd064]       ; 005916d4
    FDIV float ptr [EBX + 0xd06c]       ; 005916da
    MOV EAX,0x10000                     ; 005916e0
    CALL crt_math.c_round_FUN_005a3120  ; 005916e5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 005916ea
    SUB EAX,dword ptr [ESP + 0x8]       ; 005916ee
    MOV EDI,dword ptr [EBX + 0xd094]    ; 005916f2
    MOV dword ptr [EBX + 0xd060],EAX    ; 005916f8
    TEST EDI,EDI                        ; 005916fe
    JZ 0x0059189a                       ; 00591700
        ;   XREF to: 0059189a (CONDITIONAL_JUMP)  ; LAB_0059189a
    CMP dword ptr [EBX + 0xd060],0x3e8  ; 00591706
        ;   Label: LAB_00591706
    JGE 0x0059171f                      ; 00591710
        ;   XREF to: 0059171f (CONDITIONAL_JUMP)  ; LAB_0059171f
    CMP dword ptr [EBX + 0xd094],0x0    ; 00591712
    JNZ 0x005918c5                      ; 00591719
        ;   XREF to: 005918c5 (CONDITIONAL_JUMP)  ; LAB_005918c5
    PUSH EBX                            ; 0059171f
        ;   Label: LAB_0059171f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00591720
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00591725
    MOV ECX,dword ptr [EBX + 0xd060]    ; 00591728
    PUSH ECX                            ; 0059172e
    MOV EDI,dword ptr [0x005f2afc]      ; 0059172f | DAT_005f2afc
    PUSH EDI                            ; 00591735 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x27bc],0x1    ; 00591736
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00591740
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    MOV EBP,dword ptr [EBX + 0xcdc4]    ; 00591745
    ADD ESP,0x8                         ; 0059174b
    TEST EBP,EBP                        ; 0059174e
    JZ 0x005918ce                       ; 00591750
        ;   XREF to: 005918ce (CONDITIONAL_JUMP)  ; LAB_005918ce
    PUSH 0x1                            ; 00591756
    MOV EDX,dword ptr [0x005f2afc]      ; 00591758 | DAT_005f2afc
    PUSH EDX                            ; 0059175e | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0059175f
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
        ;   Label: LAB_0059175f
    ADD ESP,0x8                         ; 00591764
    PUSH ESI                            ; 00591767
    CMP dword ptr [EBX + 0xd094],0x0    ; 00591768
    JZ 0x00591793                       ; 0059176f
        ;   XREF to: 00591793 (CONDITIONAL_JUMP)  ; LAB_00591793
    MOV ESI,dword ptr [0x005f2afc]      ; 00591771 | DAT_005f2afc
    PUSH ESI                            ; 00591777 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 00591778
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0059177d
    PUSH 0x0                            ; 00591780
    MOV EDI,dword ptr [0x005f2afc]      ; 00591782 | DAT_005f2afc
    PUSH EDI                            ; 00591788 | DAT_01bdd7e4
    MOV ESI,EAX                         ; 00591789
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520 ; 0059178b
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00591790
    PUSH 0x1                            ; 00591793
        ;   Label: LAB_00591793
    MOV EBP,dword ptr [0x005f2afc]      ; 00591795 | DAT_005f2afc
    PUSH EBP                            ; 0059179b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120 ; 0059179c
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 005917a1
    PUSH 0x0                            ; 005917a4
    PUSH 0x1                            ; 005917a6
    PUSH 0x2e7                          ; 005917a8
    PUSH -0x1                           ; 005917ad
    LEA EAX,[EBX + 0x158]               ; 005917af
    PUSH EAX                            ; 005917b5
    CALL core_skeleton.cpp_FUN_0054e3a0 ; 005917b6
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e3a0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 005917bb
    MOV EAX,[0x005f2afc]                ; 005917be | DAT_005f2afc
    PUSH EAX                            ; 005917c3 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 ; 005917c4
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005917c9
    PUSH 0x0                            ; 005917cc
    MOV EDX,dword ptr [0x005f2afc]      ; 005917ce | DAT_005f2afc
    PUSH EDX                            ; 005917d4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 005917d5
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    FLD float ptr [EBX + 0x3254]        ; 005917da
    FLDZ                                ; 005917e0
    ADD ESP,0x8                         ; 005917e2
    FCOMPP                              ; 005917e5
    FNSTSW AX                           ; 005917e7
    SAHF                                ; 005917e9
    JNC 0x005917f5                      ; 005917ea
        ;   XREF to: 005917f5 (CONDITIONAL_JUMP)  ; LAB_005917f5
    PUSH EBX                            ; 005917ec
    CALL core_charactr.cpp_FUN_0042f310 ; 005917ed
        ;   XREF to: 0042f310 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042f310(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005917f2
    CMP dword ptr [0x01d8e40c],0x0      ; 005917f5 | DAT_01d8e40c
        ;   Label: LAB_005917f5
    JZ 0x0059180e                       ; 005917fc
        ;   XREF to: 0059180e (CONDITIONAL_JUMP)  ; LAB_0059180e
    PUSH EBX                            ; 005917fe
    LEA EAX,[EBX + 0x158]               ; 005917ff
    PUSH EAX                            ; 00591805
    CALL core_motion.cpp_FUN_004fcdc0   ; 00591806
        ;   XREF to: 004fcdc0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_004fcdc0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0059180b
    CMP dword ptr [EBX + 0xd094],0x0    ; 0059180e
        ;   Label: LAB_0059180e
    JZ 0x00591827                       ; 00591815
        ;   XREF to: 00591827 (CONDITIONAL_JUMP)  ; LAB_00591827
    PUSH ESI                            ; 00591817
    MOV EBP,dword ptr [0x005f2afc]      ; 00591818 | DAT_005f2afc
    PUSH EBP                            ; 0059181e | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520 ; 0059181f
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00591824
    PUSH EBX                            ; 00591827
        ;   Label: LAB_00591827
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00591828
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059182d
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 00591830
    POP ESI                             ; 00591836
    ADD ESP,0x14                        ; 00591837
    POP EBP                             ; 0059183a
    POP EDI                             ; 0059183b
    POP EBX                             ; 0059183c
    RET                                 ; 0059183d
    FLD float ptr [ESP + 0x10]          ; 0059183e
        ;   Label: LAB_0059183e
    FMUL float ptr [EBX + 0xd064]       ; 00591842
    FDIV float ptr [EBX + 0xd06c]       ; 00591848
    FADD float ptr [ESP + 0xc]          ; 0059184e
    MOV EBP,dword ptr [EBX + 0xd094]    ; 00591852
    CALL crt_math.c_round_FUN_005a3120  ; 00591858
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0xd060]      ; 0059185d
    TEST EBP,EBP                        ; 00591863
    JNZ 0x00591706                      ; 00591865
        ;   XREF to: 00591706 (CONDITIONAL_JUMP)  ; LAB_00591706
    FLD float ptr [EBX + 0xd064]        ; 0059186b
    FCOMP float ptr [EBX + 0xd06c]      ; 00591871
    FNSTSW AX                           ; 00591877
    SAHF                                ; 00591879
    JZ 0x0059188b                       ; 0059187a
        ;   XREF to: 0059188b (CONDITIONAL_JUMP)  ; LAB_0059188b
    MOV dword ptr [EBX + 0xd08c],0xffffffff ; 0059187c
    JMP 0x00591706                      ; 00591886
        ;   XREF to: 00591706 (UNCONDITIONAL_JUMP)  ; LAB_00591706
    MOV dword ptr [EBX + 0xd08c],0x1    ; 0059188b
        ;   Label: LAB_0059188b
    JMP 0x00591706                      ; 00591895
        ;   XREF to: 00591706 (UNCONDITIONAL_JUMP)  ; LAB_00591706
    FLD float ptr [EBX + 0xd064]        ; 0059189a
        ;   Label: LAB_0059189a
    FCOMP float ptr [EBX + 0xd06c]      ; 005918a0
    FNSTSW AX                           ; 005918a6
    SAHF                                ; 005918a8
    JZ 0x005918ba                       ; 005918a9
        ;   XREF to: 005918ba (CONDITIONAL_JUMP)  ; LAB_005918ba
    MOV dword ptr [EBX + 0xd08c],0xffffffff ; 005918ab
    JMP 0x00591706                      ; 005918b5
        ;   XREF to: 00591706 (UNCONDITIONAL_JUMP)  ; LAB_00591706
    MOV dword ptr [EBX + 0xd08c],EDX    ; 005918ba
        ;   Label: LAB_005918ba
    JMP 0x00591706                      ; 005918c0
        ;   XREF to: 00591706 (UNCONDITIONAL_JUMP)  ; LAB_00591706
    XOR EAX,EAX                         ; 005918c5
        ;   Label: LAB_005918c5
    ADD ESP,0x14                        ; 005918c7
    POP EBP                             ; 005918ca
    POP EDI                             ; 005918cb
    POP EBX                             ; 005918cc
    RET                                 ; 005918cd
    PUSH EBP                            ; 005918ce
        ;   Label: LAB_005918ce
    MOV EAX,[0x005f2afc]                ; 005918cf | DAT_005f2afc
    PUSH EAX                            ; 005918d4 | DAT_01bdd7e4
    JMP 0x0059175f                      ; 005918d5
        ;   XREF to: 0059175f (UNCONDITIONAL_JUMP)  ; LAB_0059175f

