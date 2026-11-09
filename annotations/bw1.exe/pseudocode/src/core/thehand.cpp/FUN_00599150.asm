; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_thehand_cpp_FUN_00599150(CCharacter *param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_attack_nocollision_005f7f7b
;   TerminatedCString s_Bip01_Pelvis_005f7f8e
;   undefined4 DAT_005f7f9c
;   undefined4 DAT_005f7fa0
;   undefined4 DAT_005f7fa4
;   undefined4 DAT_005f7fa8
;   undefined4 DAT_005f7fac
;   undefined4 DAT_005f7fb4
;   undefined4 DAT_00606df8
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_02c8ad48
;   undefined4 DAT_02c8ad4c
;   undefined4 DAT_02c8ad50
;   undefined4 DAT_02c8ad54
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_FUN_0042e160
;   core_charactr.cpp_FUN_00433e80
;   core_dirmat.cpp_FUN_0045f3e0
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_FUN_005240c0
;   core_motion.cpp_FUN_00524a00
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599150
        ;   Label: core_thehand.cpp_FUN_00599150
    PUSH ESI                            ; 00599151
    PUSH EDI                            ; 00599152
    PUSH EBP                            ; 00599153
    MOV EBP,ESP                         ; 00599154
    SUB ESP,0x1df0                      ; 00599156
    SUB EBP,0x7a                        ; 0059915c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0059915f
    PUSH dword ptr [EBP + 0x92]         ; 00599165
    PUSH EBX                            ; 0059916b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 0059916c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00599171
    TEST EAX,EAX                        ; 00599174
    JZ 0x00599255                       ; 00599176
        ;   XREF to: 00599255 (CONDITIONAL_JUMP)  ; LAB_00599255
    FLD float ptr [EBP + 0x92]          ; 0059917c
    LEA EAX,[EBX + 0xc2a4]              ; 00599182
    FMUL float ptr [EBX + 0xc1d0]       ; 00599188
    MOV dword ptr [EBP + 0x6a],EAX      ; 0059918e
    LEA EAX,[EBX + 0x20]                ; 00599191
    MOV dword ptr [EBP + 0x76],EAX      ; 00599194
    LEA EAX,[EBX + 0x30]                ; 00599197
    MOV dword ptr [EBP + 0x6e],EAX      ; 0059919a
    LEA EAX,[EBX + 0x158]               ; 0059919d
    FSTP float ptr [EBP + 0x5a]         ; 005991a3
    MOV dword ptr [EBP + 0x72],EAX      ; 005991a6
    FLD float ptr [EBP + 0x5a]          ; 005991a9
        ;   Label: LAB_005991a9
    FLDZ                                ; 005991ac
    FCOMPP                              ; 005991ae
    FNSTSW AX                           ; 005991b0
    SAHF                                ; 005991b2
    JC 0x005994bc                       ; 005991b3
        ;   XREF to: 005994bc (CONDITIONAL_JUMP)  ; LAB_005994bc
    MOV EDX,dword ptr [EBP + 0x72]      ; 005991b9
    PUSH EDX                            ; 005991bc
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005991bd
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005991c2
    ADD ESP,0x4                         ; 005991c5
    TEST EAX,EAX                        ; 005991c8
    JBE 0x005991eb                      ; 005991ca
        ;   XREF to: 005991eb (CONDITIONAL_JUMP)  ; LAB_005991eb
    CMP EAX,0x1                         ; 005991cc
    JNZ 0x005991eb                      ; 005991cf
        ;   XREF to: 005991eb (CONDITIONAL_JUMP)  ; LAB_005991eb
    MOV EAX,[0x01d06ab4]                ; 005991d1 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005991d6
    MOV dword ptr [EBX + 0xc1e8],EAX    ; 005991dd
    TEST EAX,EAX                        ; 005991e3
    JNZ 0x005994e7                      ; 005991e5
        ;   XREF to: 005994e7 (CONDITIONAL_JUMP)  ; LAB_005994e7
    FLD float ptr [EBP + 0x92]          ; 005991eb
        ;   Label: LAB_005991eb
    FDIV float ptr [0x00606df8]         ; 005991f1 | DAT_00606df8
    FADD float ptr [EBX + 0xc270]       ; 005991f7
    FST float ptr [EBX + 0xc270]        ; 005991fd
    FLD1                                ; 00599203
    FCOMPP                              ; 00599205
    FNSTSW AX                           ; 00599207
    SAHF                                ; 00599209
    JNC 0x00599216                      ; 0059920a
        ;   XREF to: 00599216 (CONDITIONAL_JUMP)  ; LAB_00599216
    MOV dword ptr [EBX + 0xc270],0x3f800000 ; 0059920c
    PUSH EBX                            ; 00599216
        ;   Label: LAB_00599216
    CALL core_charactr.cpp_FUN_0042e160 ; 00599217
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059921c
    LEA EAX,[EBX + 0x158]               ; 0059921f
    PUSH EAX                            ; 00599225
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00599226
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059922b
    LEA EAX,[EBX + 0x249c]              ; 0059922e
    PUSH dword ptr [EBP + 0x92]         ; 00599234
    MOV dword ptr [EAX + 0x8],0x0       ; 0059923a
    PUSH EBX                            ; 00599241
    MOV EDX,dword ptr [EAX + 0x8]       ; 00599242
    MOV dword ptr [EAX + 0x4],EDX       ; 00599245
    MOV EDX,dword ptr [EAX + 0x4]       ; 00599248
    MOV dword ptr [EAX],EDX             ; 0059924b
    CALL core_charactr.cpp_FUN_00433e80 ; 0059924d
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00599252
    LEA ESP,[EBP + 0x7a]                ; 00599255
        ;   Label: LAB_00599255
    POP EBP                             ; 00599258
    POP EDI                             ; 00599259
    POP ESI                             ; 0059925a
    POP EBX                             ; 0059925b
    RET                                 ; 0059925c
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 0059925d
        ;   Label: LAB_0059925d
    TEST EDI,EDI                        ; 00599263
    JZ 0x005991a9                       ; 00599265
        ;   XREF to: 005991a9 (CONDITIONAL_JUMP)  ; LAB_005991a9
    PUSH EDI                            ; 0059926b
    MOV EDX,dword ptr [EDI + 0x154]     ; 0059926c
    CALL dword ptr [EDX + 0xf4]         ; 00599272
    ADD ESP,0x4                         ; 00599278
    TEST EAX,EAX                        ; 0059927b
    JNZ 0x005991a9                      ; 0059927d
        ;   XREF to: 005991a9 (CONDITIONAL_JUMP)  ; LAB_005991a9
    PUSH EBX                            ; 00599283
    LEA ESI,[EBP + 0xfffffea6]          ; 00599284
    LEA EDI,[EBP + 0xfffffde6]          ; 0059928a
    CALL core_thehand.cpp_FUN_00599be0  ; 00599290
        ;   XREF to: 00599be0 (UNCONDITIONAL_CALL)  ; undefined core_thehand.cpp_FUN_00599be0()
    MOV ECX,0xc                         ; 00599295
    LEA ESI,[EBP + 0xfffffea6]          ; 0059929a
    LEA EAX,[EBP + 0xfffffde6]          ; 005992a0
    ADD ESP,0x4                         ; 005992a6
    MOVSD.REP ES:EDI,ESI                ; 005992a9
    PUSH EAX                            ; 005992ab
    LEA ESI,[EBP + -0x66]               ; 005992ac
    LEA EDI,[EBP + -0x42]               ; 005992af
    CALL core_xform.cpp_FUN_005b6270    ; 005992b2
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    ADD ESP,0x4                         ; 005992b7
    LEA EAX,[EBP + -0x42]               ; 005992ba
    LEA ESI,[EBP + -0x66]               ; 005992bd
    PUSH EAX                            ; 005992c0
    MOVSD ES:EDI,ESI                    ; 005992c1
    MOVSD ES:EDI,ESI                    ; 005992c2
    MOVSD ES:EDI,ESI                    ; 005992c3
    PUSH EBX                            ; 005992c4
    LEA ESI,[EBP + -0x5a]               ; 005992c5
    LEA EDI,[EBP + 0xffffff76]          ; 005992c8
    CALL core_actor.cpp_FUN_00408b40    ; 005992ce
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + -0x5a]               ; 005992d3
    MOVSD ES:EDI,ESI                    ; 005992d6
    MOVSD ES:EDI,ESI                    ; 005992d7
    MOVSD ES:EDI,ESI                    ; 005992d8
    FLD float ptr [EBP + 0xffffff76]    ; 005992d9
    FLD float ptr [EBP + 0xffffff7a]    ; 005992df
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 005992e5
    FLD float ptr [EBP + 0xffffff7e]    ; 005992eb
    LEA EAX,[EDX + 0x20]                ; 005992f1
    LEA EDI,[EBP + -0x72]               ; 005992f4
    LEA ESI,[EBP + 0xffffff5e]          ; 005992f7
    FXCH ST2                            ; 005992fd
    FSUB float ptr [EAX]                ; 005992ff
    FXCH                                ; 00599301
    FSUB float ptr [EAX + 0x4]          ; 00599303
    FXCH ST2                            ; 00599306
    FSUB float ptr [EAX + 0x8]          ; 00599308
    FXCH                                ; 0059930b
    FSTP float ptr [EBP + 0xffffff5e]   ; 0059930d
    FXCH                                ; 00599313
    FSTP float ptr [EBP + 0xffffff62]   ; 00599315
    FSTP float ptr [EBP + 0xffffff66]   ; 0059931b
    MOVSD ES:EDI,ESI                    ; 00599321
    MOVSD ES:EDI,ESI                    ; 00599322
    MOVSD ES:EDI,ESI                    ; 00599323
    FLD float ptr [EBP + -0x6e]         ; 00599324
    FABS                                ; 00599327
    ADD ESP,0x8                         ; 00599329
    FCOMP double ptr [0x005f7fac]       ; 0059932c | DAT_005f7fac
    FNSTSW AX                           ; 00599332
    SAHF                                ; 00599334
    JA 0x005991a9                       ; 00599335
        ;   XREF to: 005991a9 (CONDITIONAL_JUMP)  ; LAB_005991a9
    FLD float ptr [EBP + -0x6a]         ; 0059933b
    FMUL ST0                            ; 0059933e
    FLD float ptr [EBP + -0x72]         ; 00599340
    FMUL ST0                            ; 00599343
    FADDP                               ; 00599345
    FCOMP double ptr [0x005f7fb4]       ; 00599347 | DAT_005f7fb4
    FNSTSW AX                           ; 0059934d
    SAHF                                ; 0059934f
    JA 0x005991a9                       ; 00599350
        ;   XREF to: 005991a9 (CONDITIONAL_JUMP)  ; LAB_005991a9
    PUSH 0x1                            ; 00599356
    PUSH EBX                            ; 00599358
    MOV EAX,dword ptr [EDX + 0x154]     ; 00599359
    PUSH EDX                            ; 0059935f
    CALL dword ptr [EAX + 0xec]         ; 00599360
    ADD ESP,0xc                         ; 00599366
    TEST EAX,EAX                        ; 00599369
    JZ 0x005991a9                       ; 0059936b
        ;   XREF to: 005991a9 (CONDITIONAL_JUMP)  ; LAB_005991a9
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00599371
    LEA EDX,[EAX + 0x30]                ; 00599377
    PUSH EDX                            ; 0059937a
    ADD EAX,0x20                        ; 0059937b
    PUSH EAX                            ; 0059937e
    LEA EAX,[EBP + 0xfffffdb6]          ; 0059937f
    PUSH EAX                            ; 00599385
    MOV dword ptr [EBX + 0xc270],0x0    ; 00599386
    CALL core_xform.cpp_FUN_005b5760    ; 00599390
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00599395
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00599398
    PUSH EAX                            ; 0059939b
    MOV EDX,dword ptr [EBP + 0x76]      ; 0059939c
    PUSH EDX                            ; 0059939f
    LEA EAX,[EBP + 0xfffffd26]          ; 005993a0
    PUSH EAX                            ; 005993a6
    CALL core_xform.cpp_FUN_005b5620    ; 005993a7
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005993ac
    LEA EAX,[EBP + 0xfffffde6]          ; 005993af
    PUSH EAX                            ; 005993b5
    LEA ESI,[EBP + 0xfffffe46]          ; 005993b6
    LEA EDI,[EBP + 0xfffffd56]          ; 005993bc
    CALL core_xform.cpp_FUN_005b6380    ; 005993c2
        ;   XREF to: 005b6380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6380()
    ADD ESP,0x4                         ; 005993c7
    LEA EAX,[EBP + 0xfffffd56]          ; 005993ca
    MOV ECX,0xc                         ; 005993d0
    PUSH EAX                            ; 005993d5
    LEA EAX,[EBP + 0xfffffd26]          ; 005993d6
    LEA ESI,[EBP + 0xfffffe46]          ; 005993dc
    PUSH EAX                            ; 005993e2
    LEA EAX,[EBP + 0xfffffdb6]          ; 005993e3
    MOVSD.REP ES:EDI,ESI                ; 005993e9
    PUSH EAX                            ; 005993eb
    LEA ESI,[EBP + 0xfffffe76]          ; 005993ec
    LEA EDI,[EBP + 0xfffffd86]          ; 005993f2
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 005993f8
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 005993fd
    LEA ESI,[EBP + 0xfffffe76]          ; 00599402
    LEA EAX,[EBP + 0xfffffd86]          ; 00599408
    ADD ESP,0x8                         ; 0059940e
    MOVSD.REP ES:EDI,ESI                ; 00599411
    PUSH EAX                            ; 00599413
    LEA ESI,[EBP + 0xfffffe16]          ; 00599414
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0059941a
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0059941f
    LEA ESI,[EBP + 0xfffffe16]          ; 00599424
    LEA EAX,[EBP + 0xffffff16]          ; 0059942a
    LEA EDI,[EBX + 0xc274]              ; 00599430
    MOV EDX,0xbff530be                  ; 00599436
    ADD ESP,0x8                         ; 0059943b
    MOVSD.REP ES:EDI,ESI                ; 0059943e
    PUSH EAX                            ; 00599440
    MOV ECX,0x3e6b395c                  ; 00599441
    MOV ESI,0xbf44b945                  ; 00599446
    MOV EDI,0x3dcf14db                  ; 0059944b
    MOV EAX,0xc01c8e61                  ; 00599450
    MOV dword ptr [EBP + 0xffffff2e],ECX ; 00599455
    MOV dword ptr [EBP + 0xffffff36],ESI ; 0059945b
    MOV dword ptr [EBP + 0xffffff32],EDI ; 00599461
    LEA EDI,[EBP + 0xffffff16]          ; 00599467
    LEA ESI,[EBP + 0xffffff2e]          ; 0059946d
    MOV dword ptr [EBP + 0x1e],EAX      ; 00599473
    LEA EAX,[EBP + 0x1e]                ; 00599476
    MOVSD ES:EDI,ESI                    ; 00599479
    MOVSD ES:EDI,ESI                    ; 0059947a
    MOVSD ES:EDI,ESI                    ; 0059947b
    PUSH EAX                            ; 0059947c
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0059947d
    MOV ECX,0xbf448777                  ; 00599480
    PUSH ESI                            ; 00599485
    MOV dword ptr [EBP + 0x22],EDX      ; 00599486
    MOV dword ptr [EBP + 0x26],ECX      ; 00599489
    CALL core_xform.cpp_FUN_005b5760    ; 0059948c
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00599491
    JMP 0x005991a9                      ; 00599494
        ;   XREF to: 005991a9 (UNCONDITIONAL_JUMP)  ; LAB_005991a9
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 00599499
        ;   Label: LAB_00599499
    TEST ESI,ESI                        ; 0059949f
    JZ 0x005991a9                       ; 005994a1
        ;   XREF to: 005991a9 (CONDITIONAL_JUMP)  ; LAB_005991a9
    PUSH ESI                            ; 005994a7
    MOV EDX,dword ptr [ESI + 0x154]     ; 005994a8
    CALL dword ptr [EDX + 0xf4]         ; 005994ae
    ADD ESP,0x4                         ; 005994b4
    JMP 0x005991a9                      ; 005994b7
        ;   XREF to: 005991a9 (UNCONDITIONAL_JUMP)  ; LAB_005991a9
    LEA EAX,[EBP + 0x5a]                ; 005994bc
        ;   Label: LAB_005994bc
    PUSH EAX                            ; 005994bf
    MOV ECX,dword ptr [EBP + 0x72]      ; 005994c0
    PUSH ECX                            ; 005994c3
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 005994c4
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005994c9
    CMP EAX,0x23                        ; 005994cc
    JC 0x005991a9                       ; 005994cf
        ;   XREF to: 005991a9 (CONDITIONAL_JUMP)  ; LAB_005991a9
    JBE 0x0059925d                      ; 005994d5
        ;   XREF to: 0059925d (CONDITIONAL_JUMP)  ; LAB_0059925d
    CMP EAX,0x5dc                       ; 005994db
    JZ 0x00599499                       ; 005994e0
        ;   XREF to: 00599499 (CONDITIONAL_JUMP)  ; LAB_00599499
    JMP 0x005991a9                      ; 005994e2
        ;   XREF to: 005991a9 (UNCONDITIONAL_JUMP)  ; LAB_005991a9
    PUSH EAX                            ; 005994e7
        ;   Label: LAB_005994e7
    MOV EDX,dword ptr [EAX + 0x154]     ; 005994e8
    CALL dword ptr [EDX + 0x10c]        ; 005994ee
    ADD ESP,0x4                         ; 005994f4
    TEST EAX,EAX                        ; 005994f7
    JG 0x005991eb                       ; 005994f9
        ;   XREF to: 005991eb (CONDITIONAL_JUMP)  ; LAB_005991eb
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005994ff
    PUSH EAX                            ; 00599505
    MOV EDX,dword ptr [EAX + 0x154]     ; 00599506
    CALL dword ptr [EDX + 0xf4]         ; 0059950c
    ADD ESP,0x4                         ; 00599512
    TEST EAX,EAX                        ; 00599515
    JNZ 0x005991eb                      ; 00599517
        ;   XREF to: 005991eb (CONDITIONAL_JUMP)  ; LAB_005991eb
    CMP dword ptr [0x02c8ad54],0x0      ; 0059951d | DAT_02c8ad54
    JNZ 0x00599684                      ; 00599524
        ;   XREF to: 00599684 (CONDITIONAL_JUMP)  ; LAB_00599684
    LEA EAX,[EBP + 0xffffe28a]          ; 0059952a
    PUSH EAX                            ; 00599530
    MOV EDI,dword ptr [EBP + 0x72]      ; 00599531
    PUSH EDI                            ; 00599534
    CALL core_skeleton.cpp_FUN_0056acc0 ; 00599535
        ;   XREF to: 0056acc0 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_FUN_0056acc0(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0059953a
    PUSH 0x1                            ; 0059953d
    PUSH 0x5f7f7b                       ; 0059953f | = "attack_nocollision"
    PUSH EDI                            ; 00599544
    CALL core_motion.cpp_FUN_00524a00   ; 00599545
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059954a
    PUSH EAX                            ; 0059954d
    CALL core_motion.cpp_FUN_005240c0   ; 0059954e
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00599553
    PUSH 0x41f00000                     ; 00599556
    PUSH EAX                            ; 0059955b
    PUSH EDI                            ; 0059955c
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0 ; 0059955d
        ;   XREF to: 005675f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 00599562
    MOV ECX,dword ptr [0x02c8ad48]      ; 00599565 | DAT_02c8ad48
    PUSH ECX                            ; 0059956b
    PUSH EDI                            ; 0059956c
    LEA ESI,[EBP + 0x2a]                ; 0059956d
    CALL core_skeleton.cpp_FUN_00569040 ; 00599570
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA EDI,[EBP + -0x7e]               ; 00599575
    LEA ESI,[EBP + 0x2a]                ; 00599578
    LEA EAX,[EBP + 0xffffe28a]          ; 0059957b
    ADD ESP,0x8                         ; 00599581
    MOVSD ES:EDI,ESI                    ; 00599584
    MOVSD ES:EDI,ESI                    ; 00599585
    MOVSD ES:EDI,ESI                    ; 00599586
    PUSH EAX                            ; 00599587
    MOV EDI,dword ptr [EBP + 0x72]      ; 00599588
    PUSH EDI                            ; 0059958b
    CALL core_skeleton.cpp_FUN_0056ad90 ; 0059958c
        ;   XREF to: 0056ad90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0056ad90(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    MOV dword ptr [EBX + 0x30],0x0      ; 00599591
    MOV dword ptr [EBX + 0x38],0x0      ; 00599598
    MOV EAX,[0x01d06ab4]                ; 0059959f | DAT_01d06ab4
    MOV dword ptr [EBX + 0x34],0xbfc90fdb ; 005995a4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005995ab
    MOV EDX,dword ptr [EBP + 0x76]      ; 005995b2
    MOV ECX,dword ptr [EAX + 0x20]      ; 005995b5
    MOV dword ptr [EDX],ECX             ; 005995b8
    MOV ECX,dword ptr [EAX + 0x24]      ; 005995ba
    MOV dword ptr [EDX + 0x4],ECX       ; 005995bd
    MOV ECX,dword ptr [EAX + 0x28]      ; 005995c0
    MOV dword ptr [EDX + 0x8],ECX       ; 005995c3
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005995c6
    ADD ESP,0x8                         ; 005995c9
    MOV dword ptr [EDX + 0xc],EAX       ; 005995cc
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005995cf
    FLD float ptr [EBX + 0x24]          ; 005995d2
    PUSH EAX                            ; 005995d5
    LEA EAX,[EBX + 0x3c]                ; 005995d6
    FADD float ptr [0x005f7f9c]         ; 005995d9 | DAT_005f7f9c
    PUSH EAX                            ; 005995df
    FSTP float ptr [EBX + 0x24]         ; 005995e0
    CALL core_dirmat.cpp_FUN_0045f3e0   ; 005995e3
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005995e8
    LEA EAX,[EBP + -0x7e]               ; 005995eb
    PUSH EAX                            ; 005995ee
    PUSH EBX                            ; 005995ef
    LEA ESI,[EBP + -0x1e]               ; 005995f0
    LEA EDI,[EBP + -0x4e]               ; 005995f3
    CALL core_actor.cpp_FUN_00408ac0    ; 005995f6
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[EBP + -0x1e]               ; 005995fb
    MOV EAX,dword ptr [EBP + 0x76]      ; 005995fe
    ADD ESP,0x8                         ; 00599601
    MOVSD ES:EDI,ESI                    ; 00599604
    MOVSD ES:EDI,ESI                    ; 00599605
    MOVSD ES:EDI,ESI                    ; 00599606
    XOR EDX,EDX                         ; 00599607
    FLD float ptr [EAX]                 ; 00599609
    FLD float ptr [EAX + 0x4]           ; 0059960b
    FLD float ptr [EAX + 0x8]           ; 0059960e
    MOV ESI,0xbf800000                  ; 00599611
    FXCH ST2                            ; 00599616
    FSUB float ptr [EBP + -0x4e]        ; 00599618
    FXCH                                ; 0059961b
    FSUB float ptr [EBP + -0x4a]        ; 0059961d
    FXCH ST2                            ; 00599620
    FSUB float ptr [EBP + -0x46]        ; 00599622
    FXCH                                ; 00599625
    FSTP float ptr [EAX]                ; 00599627
    FXCH                                ; 00599629
    FSTP float ptr [EAX + 0x4]          ; 0059962b
    FSTP float ptr [EAX + 0x8]          ; 0059962e
    LEA EAX,[EBP + 0x12]                ; 00599631
    LEA EDI,[EBP + -0x2a]               ; 00599634
    PUSH EAX                            ; 00599637
    MOV dword ptr [EBP + 0x12],EDX      ; 00599638
    MOV dword ptr [EBP + 0x1a],ESI      ; 0059963b
    PUSH EBX                            ; 0059963e
    LEA ESI,[EBP + 0x42]                ; 0059963f
    MOV dword ptr [EBP + 0x16],EDX      ; 00599642
    CALL core_actor.cpp_FUN_00408ac0    ; 00599645
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[EBP + 0x42]                ; 0059964a
    MOV EAX,dword ptr [EBP + 0x76]      ; 0059964d
    MOVSD ES:EDI,ESI                    ; 00599650
    MOVSD ES:EDI,ESI                    ; 00599651
    MOVSD ES:EDI,ESI                    ; 00599652
    ADD ESP,0x8                         ; 00599653
    FLD float ptr [EAX]                 ; 00599656
    FLD float ptr [EAX + 0x4]           ; 00599658
    FLD float ptr [EAX + 0x8]           ; 0059965b
    MOV EDI,0x1                         ; 0059965e
    FXCH ST2                            ; 00599663
    FSUB float ptr [EBP + -0x2a]        ; 00599665
    FXCH                                ; 00599668
    FSUB float ptr [EBP + -0x26]        ; 0059966a
    FXCH ST2                            ; 0059966d
    FSUB float ptr [EBP + -0x22]        ; 0059966f
    MOV dword ptr [0x02c8ad54],EDI      ; 00599672 | DAT_02c8ad54
    FXCH                                ; 00599678
    FSTP float ptr [EAX]                ; 0059967a
    FXCH                                ; 0059967c
    FSTP float ptr [EAX + 0x4]          ; 0059967e
    FSTP float ptr [EAX + 0x8]          ; 00599681
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00599684
        ;   Label: LAB_00599684
    ADD EAX,0x158                       ; 0059968a
    PUSH EAX                            ; 0059968f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00599690
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00599695
    PUSH 0x1                            ; 00599698
    PUSH 0x5f7f8e                       ; 0059969a | = "Bip01 Pelvis"
    PUSH EAX                            ; 0059969f
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005996a0
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005996a5
    PUSH EAX                            ; 005996a8
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005996a9
    ADD EAX,0x158                       ; 005996af
    PUSH EAX                            ; 005996b4
    LEA ESI,[EBP + -0x12]               ; 005996b5
    LEA EDI,[EBP + 0x6]                 ; 005996b8
    CALL core_skeleton.cpp_FUN_00569040 ; 005996bb
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 005996c0
    LEA EAX,[EBP + 0x6]                 ; 005996c3
    LEA ESI,[EBP + -0x12]               ; 005996c6
    PUSH EAX                            ; 005996c9
    MOVSD ES:EDI,ESI                    ; 005996ca
    MOVSD ES:EDI,ESI                    ; 005996cb
    MOVSD ES:EDI,ESI                    ; 005996cc
    PUSH EBX                            ; 005996cd
    LEA ESI,[EBP + 0x36]                ; 005996ce
    LEA EDI,[EBP + 0xffffff52]          ; 005996d1
    CALL core_actor.cpp_FUN_00408bb0    ; 005996d7
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + 0x36]                ; 005996dc
    LEA EAX,[EBP + 0xffffff52]          ; 005996df
    ADD ESP,0x8                         ; 005996e5
    LEA EDX,[EBX + 0xc2d4]              ; 005996e8
    MOVSD ES:EDI,ESI                    ; 005996ee
    MOVSD ES:EDI,ESI                    ; 005996ef
    MOVSD ES:EDI,ESI                    ; 005996f0
    CMP EDX,EAX                         ; 005996f1
    JZ 0x0059970f                       ; 005996f3
        ;   XREF to: 0059970f (CONDITIONAL_JUMP)  ; LAB_0059970f
    MOV EAX,dword ptr [EBP + 0xffffff52] ; 005996f5
    MOV dword ptr [EDX],EAX             ; 005996fb
    MOV EAX,dword ptr [EBP + 0xffffff56] ; 005996fd
    MOV dword ptr [EDX + 0x4],EAX       ; 00599703
    MOV EAX,dword ptr [EBP + 0xffffff5a] ; 00599706
    MOV dword ptr [EDX + 0x8],EAX       ; 0059970c
    LEA EDI,[EBP + 0xffffff46]          ; 0059970f
        ;   Label: LAB_0059970f
    MOV EAX,[0x02c8ad4c]                ; 00599715 | DAT_02c8ad4c
    LEA ESI,[EBX + 0xc2d4]              ; 0059971a
    PUSH EAX                            ; 00599720
    MOVSD ES:EDI,ESI                    ; 00599721
    MOVSD ES:EDI,ESI                    ; 00599722
    MOVSD ES:EDI,ESI                    ; 00599723
    LEA EAX,[EBX + 0x158]               ; 00599724
    LEA ESI,[EBP + 0xffffff6a]          ; 0059972a
    PUSH EAX                            ; 00599730
    LEA EDI,[EBP + 0x4e]                ; 00599731
    MOV dword ptr [EBP + 0x5e],EAX      ; 00599734
    CALL core_skeleton.cpp_FUN_00569040 ; 00599737
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    FLD float ptr [EBP + 0xffffff46]    ; 0059973c
    FLD float ptr [EBP + 0xffffff4a]    ; 00599742
    LEA ESI,[EBP + 0xffffff6a]          ; 00599748
    FLD float ptr [EBP + 0xffffff4e]    ; 0059974e
    LEA EAX,[EBP + 0xffffff3a]          ; 00599754
    MOVSD ES:EDI,ESI                    ; 0059975a
    MOVSD ES:EDI,ESI                    ; 0059975b
    MOVSD ES:EDI,ESI                    ; 0059975c
    ADD ESP,0x8                         ; 0059975d
    LEA EDI,[EBP + 0xffffff3a]          ; 00599760
    LEA ESI,[EBP + -0x6]                ; 00599766
    FXCH ST2                            ; 00599769
    FSUB float ptr [EBP + 0x4e]         ; 0059976b
    FXCH                                ; 0059976e
    FSUB float ptr [EBP + 0x52]         ; 00599770
    FXCH ST2                            ; 00599773
    FSUB float ptr [EBP + 0x56]         ; 00599775
    FXCH                                ; 00599778
    FSTP float ptr [EBP + -0x6]         ; 0059977a
    FXCH                                ; 0059977d
    FSTP float ptr [EBP + -0x2]         ; 0059977f
    FSTP float ptr [EBP + 0x2]          ; 00599782
    MOVSD ES:EDI,ESI                    ; 00599785
    MOVSD ES:EDI,ESI                    ; 00599786
    MOVSD ES:EDI,ESI                    ; 00599787
    PUSH EAX                            ; 00599788
    LEA ESI,[EBP + -0x36]               ; 00599789
    LEA EDI,[EBP + 0xffffff22]          ; 0059978c
    CALL core_vecdir.cpp_FUN_005a7520   ; 00599792
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[EBP + -0x36]               ; 00599797
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0059979a
    MOVSD ES:EDI,ESI                    ; 0059979d
    MOVSD ES:EDI,ESI                    ; 0059979e
    MOVSD ES:EDI,ESI                    ; 0059979f
    MOV EAX,dword ptr [EAX + 0x8]       ; 005997a0
    MOV dword ptr [EBP + 0x62],EAX      ; 005997a3
    ADD ESP,0x4                         ; 005997a6
    FLD float ptr [EBP + 0x62]          ; 005997a9
    FCOMP float ptr [0x005f7fa0]        ; 005997ac | DAT_005f7fa0
    FNSTSW AX                           ; 005997b2
    SAHF                                ; 005997b4
    JNC 0x0059985d                      ; 005997b5
        ;   XREF to: 0059985d (CONDITIONAL_JUMP)  ; LAB_0059985d
    FLD float ptr [EBP + 0x62]          ; 005997bb
    FMUL float ptr [0x005f7fa8]         ; 005997be | DAT_005f7fa8
    FSTP float ptr [EBP + 0x66]         ; 005997c4
    PUSH dword ptr [EBP + 0xffffff22]   ; 005997c7
        ;   Label: LAB_005997c7
    LEA ESI,[EBP + 0xfffffed6]          ; 005997cd
    LEA EDI,[EBP + 0xffffff06]          ; 005997d3
    CALL core_xform.cpp_FUN_005b7af0    ; 005997d9
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7af0()
    LEA ESI,[EBP + 0xfffffed6]          ; 005997de
    ADD ESP,0x4                         ; 005997e4
    MOVSD ES:EDI,ESI                    ; 005997e7
    MOVSD ES:EDI,ESI                    ; 005997e8
    MOVSD ES:EDI,ESI                    ; 005997e9
    MOVSD ES:EDI,ESI                    ; 005997ea
    PUSH 0x567360                       ; 005997eb
    MOV ESI,dword ptr [0x02c8ad50]      ; 005997f0 | DAT_02c8ad50
    PUSH ESI                            ; 005997f6
    LEA EAX,[EBP + 0xffffff06]          ; 005997f7
    PUSH dword ptr [EBP + 0x66]         ; 005997fd
    PUSH EAX                            ; 00599800
    LEA EAX,[EBX + 0x158]               ; 00599801
    PUSH EAX                            ; 00599807
    MOV dword ptr [EBP + 0x5e],EAX      ; 00599808
    CALL core_skeleton.cpp_FUN_005695e0 ; 0059980b
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00599810
    LEA ESI,[EBP + 0xfffffee6]          ; 00599813
    PUSH dword ptr [EBP + 0xffffff26]   ; 00599819
    CALL core_xform.cpp_FUN_005b7b30    ; 0059981f
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7b30()
    ADD ESP,0x4                         ; 00599824
    PUSH 0x567360                       ; 00599827
    MOV EAX,[0x02c8ad4c]                ; 0059982c | DAT_02c8ad4c
    PUSH EAX                            ; 00599831
    PUSH dword ptr [EBP + 0x66]         ; 00599832
    LEA EAX,[EBP + 0xfffffef6]          ; 00599835
    LEA EDI,[EBP + 0xfffffef6]          ; 0059983b
    PUSH EAX                            ; 00599841
    MOV EDX,dword ptr [EBP + 0x5e]      ; 00599842
    LEA ESI,[EBP + 0xfffffee6]          ; 00599845
    PUSH EDX                            ; 0059984b
    MOVSD ES:EDI,ESI                    ; 0059984c
    MOVSD ES:EDI,ESI                    ; 0059984d
    MOVSD ES:EDI,ESI                    ; 0059984e
    MOVSD ES:EDI,ESI                    ; 0059984f
    CALL core_skeleton.cpp_FUN_005695e0 ; 00599850
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00599855
    JMP 0x005991eb                      ; 00599858
        ;   XREF to: 005991eb (UNCONDITIONAL_JUMP)  ; LAB_005991eb
    FLD float ptr [EBP + 0x62]          ; 0059985d
        ;   Label: LAB_0059985d
    FADD float ptr [0x005f7fa4]         ; 00599860 | DAT_005f7fa4
    FMUL float ptr [0x005f7fa8]         ; 00599866 | DAT_005f7fa8
    FLD1                                ; 0059986c
    FSUBRP                              ; 0059986e
    FST float ptr [EBP + 0x66]          ; 00599870
    FLDZ                                ; 00599873
    FCOMPP                              ; 00599875
    FNSTSW AX                           ; 00599877
    SAHF                                ; 00599879
    JBE 0x005997c7                      ; 0059987a
        ;   XREF to: 005997c7 (CONDITIONAL_JUMP)  ; LAB_005997c7
    XOR ECX,ECX                         ; 00599880
    MOV dword ptr [EBP + 0x66],ECX      ; 00599882
    JMP 0x005997c7                      ; 00599885
        ;   XREF to: 005997c7 (UNCONDITIONAL_JUMP)  ; LAB_005997c7

