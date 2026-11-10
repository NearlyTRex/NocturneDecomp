; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mattnntt_cpp_CMattanntote_renderTransparent_FUN_00593710(CMattanntote *this_ptr)
;
; Parameters:
; CMattanntote *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d91eb
;   undefined4 DAT_005d91f3
;   undefined4 DAT_005d91fb
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d8e40c
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_CCharacter_renderFlames_FUN_0042f6f0
;   core_charactr.cpp_FUN_0042f310
;   core_motion.cpp_FUN_004fcdc0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593710
        ;   Label: core_mattnntt.cpp_CMattanntote_renderTransparent_FUN_00593710
    PUSH ESI                            ; 00593711
    PUSH EDI                            ; 00593712
    PUSH EBP                            ; 00593713
    SUB ESP,0x44                        ; 00593714
    MOV EBP,dword ptr [ESP + 0x58]      ; 00593717
    FILD dword ptr [EBP + 0xd070]       ; 0059371b
    FLD double ptr [0x005d91eb]         ; 00593721 | DAT_005d91eb
    FSUB ST0,ST1                        ; 00593727
    FXCH                                ; 00593729
    FLD double ptr [0x005d91f3]         ; 0059372b | DAT_005d91f3
    FXCH                                ; 00593731
    FMUL ST1                            ; 00593733
    FXCH ST2                            ; 00593735
    FMULP                               ; 00593737
    FXCH                                ; 00593739
    FLD double ptr [0x005d91fb]         ; 0059373b | DAT_005d91fb
    FXCH                                ; 00593741
    FMUL ST1                            ; 00593743
    FXCH ST2                            ; 00593745
    FMULP                               ; 00593747
    MOV EDX,dword ptr [EBP + 0xd068]    ; 00593749
    FXCH                                ; 0059374f
    FSTP float ptr [ESP + 0x3c]         ; 00593751
    FSTP float ptr [ESP + 0x38]         ; 00593755
    TEST EDX,EDX                        ; 00593759
    JNZ 0x0059393e                      ; 0059375b
        ;   XREF to: 0059393e (CONDITIONAL_JUMP)  ; LAB_0059393e
    FLD float ptr [ESP + 0x3c]          ; 00593761
    FMUL float ptr [EBP + 0xd064]       ; 00593765
    FDIV float ptr [EBP + 0xd06c]       ; 0059376b
    MOV EAX,0x10000                     ; 00593771
    CALL crt_math.c_round_FUN_005a3120  ; 00593776
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x40]        ; 0059377b
    MOV ECX,dword ptr [ESP + 0x40]      ; 0059377f
    SUB EAX,ECX                         ; 00593783
    MOV dword ptr [EBP + 0xd060],EAX    ; 00593785
    FLD float ptr [EBP + 0xd064]        ; 0059378b
    FCOMP float ptr [EBP + 0xd06c]      ; 00593791
    FNSTSW AX                           ; 00593797
    SAHF                                ; 00593799
    JZ 0x00593983                       ; 0059379a
        ;   XREF to: 00593983 (CONDITIONAL_JUMP)  ; LAB_00593983
    MOV dword ptr [EBP + 0xd0a0],0xffffffff ; 005937a0
        ;   Label: LAB_005937a0
    MOV EBX,dword ptr [0x02d0c150]      ; 005937aa | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_005937aa
    PUSH EBX                            ; 005937b0
    MOV ESI,dword ptr [EBP + 0x2628]    ; 005937b1
    PUSH ESI                            ; 005937b7
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005937b8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EBX,EAX                         ; 005937bd
    ADD ESP,0x8                         ; 005937bf
    TEST EAX,EAX                        ; 005937c2
    JZ 0x00593802                       ; 005937c4
        ;   XREF to: 00593802 (CONDITIONAL_JUMP)  ; LAB_00593802
    MOV EDI,dword ptr [EBP + 0xd060]    ; 005937c6
    PUSH EDI                            ; 005937cc
    MOV EAX,dword ptr [EAX + 0x154]     ; 005937cd
    PUSH EBX                            ; 005937d3
    CALL dword ptr [EAX + 0xf8]         ; 005937d4
    MOV EAX,dword ptr [EBP + 0xd060]    ; 005937da
    ADD ESP,0x8                         ; 005937e0
    CMP EAX,0x10000                     ; 005937e3
    JZ 0x0059398e                       ; 005937e8
        ;   XREF to: 0059398e (CONDITIONAL_JUMP)  ; LAB_0059398e
    MOV dword ptr [EBX + 0xf8],0x0      ; 005937ee
    MOV dword ptr [EBX + 0xfc],0x1      ; 005937f8
    PUSH EBP                            ; 00593802
        ;   Label: LAB_00593802
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00593803
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00593808
    PUSH 0x0                            ; 0059380b
    MOV EAX,dword ptr [EBP + 0x154]     ; 0059380d
    PUSH EBP                            ; 00593813
    LEA ESI,[ESP + 0x8]                 ; 00593814
    LEA EDI,[ESP + 0x20]                ; 00593818
    CALL dword ptr [EAX + 0x1c]         ; 0059381c
    MOV ECX,0x6                         ; 0059381f
    ADD ESP,0x4                         ; 00593824
    LEA EAX,[ESP + 0x1c]                ; 00593827
    LEA ESI,[ESP + 0x4]                 ; 0059382b
    PUSH EAX                            ; 0059382f
    MOVSD.REP ES:EDI,ESI                ; 00593830
    CALL core_box.cpp_FUN_0041daf0      ; 00593832
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00593837
    TEST EAX,EAX                        ; 0059383a
    JZ 0x005938d8                       ; 0059383c
        ;   XREF to: 005938d8 (CONDITIONAL_JUMP)  ; LAB_005938d8
    MOV EDX,dword ptr [EBP + 0xd060]    ; 00593842
    PUSH EDX                            ; 00593848
    MOV ECX,dword ptr [0x005f2afc]      ; 00593849 | DAT_005f2afc
    PUSH ECX                            ; 0059384f | DAT_01bdd7e4
    MOV dword ptr [EBP + 0x27bc],0x1    ; 00593850
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0059385a
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0059385f
    PUSH 0x0                            ; 00593862
    MOV EBX,dword ptr [0x005f2afc]      ; 00593864 | DAT_005f2afc
    PUSH EBX                            ; 0059386a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0059386b
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00593870
    PUSH 0x1                            ; 00593873
    MOV ESI,dword ptr [0x005f2afc]      ; 00593875 | DAT_005f2afc
    PUSH ESI                            ; 0059387b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120 ; 0059387c
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00593881
    PUSH 0x0                            ; 00593884
    PUSH 0x1                            ; 00593886
    PUSH 0x2e7                          ; 00593888
    PUSH -0x1                           ; 0059388d
    LEA EBX,[EBP + 0x158]               ; 0059388f
    PUSH EBX                            ; 00593895
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0 ; 00593896
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0059389b
    MOV EDI,dword ptr [0x005f2afc]      ; 0059389e | DAT_005f2afc
    PUSH EDI                            ; 005938a4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 ; 005938a5
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer * this_ptr)
    MOV EAX,[0x01d8e40c]                ; 005938aa | DAT_01d8e40c
    ADD ESP,0x4                         ; 005938af
    TEST EAX,EAX                        ; 005938b2
    JZ 0x005938c0                       ; 005938b4
        ;   XREF to: 005938c0 (CONDITIONAL_JUMP)  ; LAB_005938c0
    PUSH EBP                            ; 005938b6
    PUSH EBX                            ; 005938b7
    CALL core_motion.cpp_FUN_004fcdc0   ; 005938b8
        ;   XREF to: 004fcdc0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_004fcdc0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005938bd
    FLD float ptr [EBP + 0x3254]        ; 005938c0
        ;   Label: LAB_005938c0
    FLDZ                                ; 005938c6
    FCOMPP                              ; 005938c8
    FNSTSW AX                           ; 005938ca
    SAHF                                ; 005938cc
    JNC 0x005938d8                      ; 005938cd
        ;   XREF to: 005938d8 (CONDITIONAL_JUMP)  ; LAB_005938d8
    PUSH EBP                            ; 005938cf
    CALL core_charactr.cpp_FUN_0042f310 ; 005938d0
        ;   XREF to: 0042f310 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042f310(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005938d5
    PUSH EBP                            ; 005938d8
        ;   Label: LAB_005938d8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 005938d9
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBP + 0x33a0]    ; 005938de
    ADD ESP,0x4                         ; 005938e4
    TEST EDX,EDX                        ; 005938e7
    JLE 0x005938f4                      ; 005938e9
        ;   XREF to: 005938f4 (CONDITIONAL_JUMP)  ; LAB_005938f4
    PUSH EBP                            ; 005938eb
    CALL core_charactr.cpp_CCharacter_renderFlames_FUN_0042f6f0 ; 005938ec
        ;   XREF to: 0042f6f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderFlames_FUN_0042f6f0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005938f1
    CMP dword ptr [EBP + 0xd060],0x10000 ; 005938f4
        ;   Label: LAB_005938f4
    JNZ 0x00593930                      ; 005938fe
        ;   XREF to: 00593930 (CONDITIONAL_JUMP)  ; LAB_00593930
    LEA ESI,[EBP + 0xd0b8]              ; 00593900
    MOV EBX,ESI                         ; 00593906
    ADD ESI,0xa90                       ; 00593908
    PUSH EBX                            ; 0059390e
        ;   Label: LAB_0059390e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059390f
    CALL dword ptr [EAX + 0x14]         ; 00593915
    ADD EBX,0x2a4                       ; 00593918
    ADD ESP,0x4                         ; 0059391e
    CMP EBX,ESI                         ; 00593921
    JNZ 0x0059390e                      ; 00593923
        ;   XREF to: 0059390e (CONDITIONAL_JUMP)  ; LAB_0059390e
    LEA EAX,[EAX]                       ; 00593925
    LEA EDX,[EDX]                       ; 0059392b
    MOV EBX,EBX                         ; 0059392e
    MOV EAX,dword ptr [EBP + 0x27bc]    ; 00593930
        ;   Label: LAB_00593930
    ADD ESP,0x44                        ; 00593936
    POP EBP                             ; 00593939
    POP EDI                             ; 0059393a
    POP ESI                             ; 0059393b
    POP EBX                             ; 0059393c
    RET                                 ; 0059393d
    FLD float ptr [ESP + 0x3c]          ; 0059393e
        ;   Label: LAB_0059393e
    FMUL float ptr [EBP + 0xd064]       ; 00593942
    FDIV float ptr [EBP + 0xd06c]       ; 00593948
    FADD float ptr [ESP + 0x38]         ; 0059394e
    FLD float ptr [EBP + 0xd064]        ; 00593952
    FXCH                                ; 00593958
    CALL crt_math.c_round_FUN_005a3120  ; 0059395a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0xd060]      ; 0059395f
    FCOMP float ptr [EBP + 0xd06c]      ; 00593965
    FNSTSW AX                           ; 0059396b
    SAHF                                ; 0059396d
    JNZ 0x005937a0                      ; 0059396e
        ;   XREF to: 005937a0 (CONDITIONAL_JUMP)  ; LAB_005937a0
    MOV dword ptr [EBP + 0xd0a0],0x1    ; 00593974
    JMP 0x005937aa                      ; 0059397e
        ;   XREF to: 005937aa (UNCONDITIONAL_JUMP)  ; LAB_005937aa
    MOV dword ptr [EBP + 0xd0a0],EDX    ; 00593983
        ;   Label: LAB_00593983
    JMP 0x005937aa                      ; 00593989
        ;   XREF to: 005937aa (UNCONDITIONAL_JUMP)  ; LAB_005937aa
    MOV dword ptr [EBX + 0xf8],0x1      ; 0059398e
        ;   Label: LAB_0059398e
    MOV dword ptr [EBX + 0xfc],0x0      ; 00593998
    JMP 0x00593802                      ; 005939a2
        ;   XREF to: 00593802 (UNCONDITIONAL_JUMP)  ; LAB_00593802

