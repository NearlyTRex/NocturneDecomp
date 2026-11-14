; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_00598420(CTommyGun *this_ptr)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_s_45_dry_wav_2_0_005f7ee7
;   TerminatedCString s_bullet_kfm_005f7ef9
;   undefined4 DAT_005f7f04
;   undefined4 DAT_005f7f08
;   undefined4 DAT_005f7f10
;   undefined4 DAT_005f7f18
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   undefined4 g_CHeroClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ray_origin.x
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_crate.cpp_FUN_00449600
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dmodel.cpp_loadModel_FUN_00468780
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70
;   core_fire.cpp_CFireEffect_createShell_FUN_004b7270
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598420
        ;   Label: core_tommygun.cpp_CTommyGun_fire_FUN_00598420
    PUSH ESI                            ; 00598421
    PUSH EDI                            ; 00598422
    PUSH EBP                            ; 00598423
    MOV EBP,ESP                         ; 00598424
    SUB ESP,0x1c0                       ; 00598426
    AND ESP,0xfffffff8                  ; 0059842c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059842f
    FLD float ptr [EBX + 0x300]         ; 00598432
    FLDZ                                ; 00598438
    MOV dword ptr [EBX + 0x578],0x2     ; 0059843a
    FCOMPP                              ; 00598444
    FNSTSW AX                           ; 00598446
    SAHF                                ; 00598448
    JNC 0x00598454                      ; 00598449
        ;   XREF to: 00598454 (CONDITIONAL_JUMP)  ; LAB_00598454
    XOR EAX,EAX                         ; 0059844b
    MOV ESP,EBP                         ; 0059844d
    POP EBP                             ; 0059844f
    POP EDI                             ; 00598450
    POP ESI                             ; 00598451
    POP EBX                             ; 00598452
    RET                                 ; 00598453
    FLD float ptr [EBX + 0x300]         ; 00598454
        ;   Label: LAB_00598454
    LEA ESI,[ESP + 0xfc]                ; 0059845a
    LEA EDI,[ESP + 0x168]               ; 00598461
    PUSH EBX                            ; 00598468
    FADD float ptr [0x005f7f04]         ; 00598469 | DAT_005f7f04
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059846f
    FSTP float ptr [EBX + 0x300]        ; 00598475
    CALL dword ptr [EAX + 0xe0]         ; 0059847b
    ADD ESP,0x4                         ; 00598481
    LEA EAX,[ESP + 0x168]               ; 00598484
    LEA ESI,[ESP + 0xfc]                ; 0059848b
    PUSH EAX                            ; 00598492
    MOVSD ES:EDI,ESI                    ; 00598493
    MOVSD ES:EDI,ESI                    ; 00598494
    MOVSD ES:EDI,ESI                    ; 00598495
    PUSH EBX                            ; 00598496
    LEA ESI,[ESP + 0x110]               ; 00598497
    CALL core_actor.cpp_FUN_00408b40    ; 0059849e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005984a3
    LEA EDI,[ESP + 0x114]               ; 005984a6
    LEA ESI,[ESP + 0x108]               ; 005984ad
    PUSH EBX                            ; 005984b4
    MOVSD ES:EDI,ESI                    ; 005984b5
    MOVSD ES:EDI,ESI                    ; 005984b6
    MOVSD ES:EDI,ESI                    ; 005984b7
    CALL core_weapon.cpp_CWeapon_fire_FUN_005adde0 ; 005984b8
        ;   XREF to: 005adde0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005adde0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005984bd
    TEST EAX,EAX                        ; 005984c0
    JZ 0x00598867                       ; 005984c2
        ;   XREF to: 00598867 (CONDITIONAL_JUMP)  ; LAB_00598867
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 005984c8
    MOV dword ptr [ESP + 0xb0],EAX      ; 005984ce
    LEA EAX,[ESP + 0xa8]                ; 005984d5
    LEA ESI,[ESP + 0xe4]                ; 005984dc
    PUSH EAX                            ; 005984e3
    LEA EDI,[ESP + 0x184]               ; 005984e4
    XOR ECX,ECX                         ; 005984eb
    PUSH EBX                            ; 005984ed
    MOV dword ptr [ESP + 0xb0],ECX      ; 005984ee
    MOV dword ptr [ESP + 0xb4],ECX      ; 005984f5
    CALL core_actor.cpp_FUN_00408ac0    ; 005984fc
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 00598501
    LEA ESI,[ESP + 0xe4]                ; 00598504
    FLD float ptr [ESP + 0x114]         ; 0059850b
    FLD float ptr [ESP + 0x118]         ; 00598512
    MOVSD ES:EDI,ESI                    ; 00598519
    MOVSD ES:EDI,ESI                    ; 0059851a
    MOVSD ES:EDI,ESI                    ; 0059851b
    FLD float ptr [ESP + 0x11c]         ; 0059851c
    LEA EDI,[ESP + 0xcc]                ; 00598523
    LEA ESI,[ESP + 0x174]               ; 0059852a
    FXCH ST2                            ; 00598531
    FADD float ptr [ESP + 0x180]        ; 00598533
    FXCH                                ; 0059853a
    FADD float ptr [ESP + 0x184]        ; 0059853c
    FXCH ST2                            ; 00598543
    FADD float ptr [ESP + 0x188]        ; 00598545
    FXCH                                ; 0059854c
    FSTP float ptr [ESP + 0x174]        ; 0059854e
    FXCH                                ; 00598555
    FSTP float ptr [ESP + 0x178]        ; 00598557
    FSTP float ptr [ESP + 0x17c]        ; 0059855e
    MOVSD ES:EDI,ESI                    ; 00598565
    MOVSD ES:EDI,ESI                    ; 00598566
    MOVSD ES:EDI,ESI                    ; 00598567
    FLD float ptr [EBX + 0x2e8]         ; 00598568
    FDIVR double ptr [0x005f7f08]       ; 0059856e | DAT_005f7f08
    FLD float ptr [ESP + 0x180]         ; 00598574
    FXCH                                ; 0059857b
    FSTP float ptr [ESP + 0x1a4]        ; 0059857d
    FMUL float ptr [ESP + 0x1a4]        ; 00598584
    FLD float ptr [ESP + 0x184]         ; 0059858b
    FMUL float ptr [ESP + 0x1a4]        ; 00598592
    FLD float ptr [ESP + 0x188]         ; 00598599
    FMUL float ptr [ESP + 0x1a4]        ; 005985a0
    FLD float ptr [ESP + 0x114]         ; 005985a7
    FLD float ptr [ESP + 0x118]         ; 005985ae
    LEA EDI,[ESP + 0xc0]                ; 005985b5
    LEA ESI,[ESP + 0xb4]                ; 005985bc
    FXCH ST4                            ; 005985c3
    FSTP float ptr [ESP + 0xb4]         ; 005985c5
    FXCH ST2                            ; 005985cc
    FSTP float ptr [ESP + 0xb8]         ; 005985ce
    FSTP float ptr [ESP + 0xbc]         ; 005985d5
    MOVSD ES:EDI,ESI                    ; 005985dc
    MOVSD ES:EDI,ESI                    ; 005985dd
    MOVSD ES:EDI,ESI                    ; 005985de
    FLD float ptr [ESP + 0x11c]         ; 005985df
    LEA EDI,[ESP + 0x84]                ; 005985e6
    LEA ESI,[ESP + 0x12c]               ; 005985ed
    FXCH                                ; 005985f4
    FSUB float ptr [ESP + 0xc0]         ; 005985f6
    FXCH ST2                            ; 005985fd
    FSUB float ptr [ESP + 0xc4]         ; 005985ff
    FXCH                                ; 00598606
    FSUB float ptr [ESP + 0xc8]         ; 00598608
    FXCH ST2                            ; 0059860f
    FSTP float ptr [ESP + 0x12c]        ; 00598611
    FSTP float ptr [ESP + 0x130]        ; 00598618
    FSTP float ptr [ESP + 0x134]        ; 0059861f
    MOVSD ES:EDI,ESI                    ; 00598626
    MOVSD ES:EDI,ESI                    ; 00598627
    MOVSD ES:EDI,ESI                    ; 00598628
    MOV EDI,dword ptr [0x00622c18]      ; 00598629 | g_CDemonSetPtr
    PUSH EDI                            ; 0059862f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00598630
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00598635
    PUSH 0x1                            ; 00598638
    MOV EAX,[0x00622c18]                ; 0059863a | g_CDemonSetPtr
    PUSH EAX                            ; 0059863f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 00598640
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00598645
    PUSH EBX                            ; 00598648
    MOV EDX,dword ptr [0x00622c18]      ; 00598649 | g_CDemonSetPtr
    PUSH EDX                            ; 0059864f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00598650
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x304]     ; 00598655
    ADD ESP,0x8                         ; 0059865b
    TEST ECX,ECX                        ; 0059865e
    JNZ 0x005988a1                      ; 00598660
        ;   XREF to: 005988a1 (CONDITIONAL_JUMP)  ; LAB_005988a1
    XOR EAX,EAX                         ; 00598666
        ;   Label: LAB_00598666
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00598668
    LEA EAX,[ESP + 0xcc]                ; 0059866f
        ;   Label: LAB_0059866f
    PUSH EAX                            ; 00598676
    LEA EAX,[ESP + 0x88]                ; 00598677
    PUSH EAX                            ; 0059867e
    MOV EDX,dword ptr [0x00622c18]      ; 0059867f | g_CDemonSetPtr
    PUSH EDX                            ; 00598685 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 00598686
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x1c8],EAX     ; 0059868b
    FLD float ptr [ESP + 0x1c8]         ; 00598692
    ADD ESP,0xc                         ; 00598699
    FLDZ                                ; 0059869c
    FXCH                                ; 0059869e
    FSTP double ptr [ESP]               ; 005986a0
    FCOMP double ptr [ESP]              ; 005986a3
    FNSTSW AX                           ; 005986a6
    SAHF                                ; 005986a8
    JBE 0x005988b6                      ; 005986a9
        ;   XREF to: 005988b6 (CONDITIONAL_JUMP)  ; LAB_005988b6
    MOV ECX,dword ptr [0x00622c18]      ; 005986af | g_CDemonSetPtr
        ;   Label: LAB_005986af
    PUSH ECX                            ; 005986b5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 005986b6
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    MOV ESI,dword ptr [EBX + 0x574]     ; 005986bb
    ADD ESP,0x4                         ; 005986c1
    TEST ESI,ESI                        ; 005986c4
    JZ 0x0059885b                       ; 005986c6
        ;   XREF to: 0059885b (CONDITIONAL_JUMP)  ; LAB_0059885b
    LEA EDI,[ESP + 0x9c]                ; 005986cc
    LEA ESI,[ESP + 0x114]               ; 005986d3
    LEA EAX,[EBX + 0x3c]                ; 005986da
    MOVSD ES:EDI,ESI                    ; 005986dd
    MOVSD ES:EDI,ESI                    ; 005986de
    MOVSD ES:EDI,ESI                    ; 005986df
    PUSH EAX                            ; 005986e0
    FLD float ptr [ESP + 0xa4]          ; 005986e1
    LEA EAX,[ESP + 0xa0]                ; 005986e8
    MOV EDI,dword ptr [0x0061c010]      ; 005986ef | DAT_0061c010
    PUSH EAX                            ; 005986f5
    FADD float ptr [0x005f7f10]         ; 005986f6 | DAT_005f7f10
    PUSH EDI                            ; 005986fc
    FSTP float ptr [ESP + 0xac]         ; 005986fd
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70 ; 00598704
        ;   XREF to: 004b5a70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 00598709
    MOV EAX,0x40a00000                  ; 0059870c
    MOV EDX,0x40c00000                  ; 00598711
    PUSH 0x3ec90fdb                     ; 00598716
    MOV ECX,0xc0c00000                  ; 0059871b
    PUSH 0xbec90fdb                     ; 00598720
    MOV dword ptr [ESP + 0xe0],EAX      ; 00598725
    MOV dword ptr [ESP + 0xe4],EDX      ; 0059872c
    MOV dword ptr [ESP + 0xe8],ECX      ; 00598733
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0059873a
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 0059873f
    FLD float ptr [ESP + 0x1c4]         ; 00598746
    ADD ESP,0x8                         ; 0059874d
    PUSH 0x3ec90fdb                     ; 00598750
    PUSH 0xbec90fdb                     ; 00598755
    FSTP float ptr [ESP + 0xf8]         ; 0059875a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00598761
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00598766
    FLD float ptr [ESP + 0x1c4]         ; 0059876d
    ADD ESP,0x8                         ; 00598774
    LEA EAX,[ESP + 0xf0]                ; 00598777
    PUSH EAX                            ; 0059877e
    LEA EAX,[ESP + 0x48]                ; 0059877f
    XOR ESI,ESI                         ; 00598783
    PUSH EAX                            ; 00598785
    FSTP float ptr [ESP + 0xfc]         ; 00598786
    MOV dword ptr [ESP + 0x100],ESI     ; 0059878d
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 00598794
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00598799
    LEA EAX,[ESP + 0xd8]                ; 0059879c
    PUSH EAX                            ; 005987a3
    LEA EAX,[ESP + 0x48]                ; 005987a4
    PUSH EAX                            ; 005987a8
    LEA ESI,[ESP + 0x1a0]               ; 005987a9
    LEA EDI,[ESP + 0x14c]               ; 005987b0
    CALL core_dirmat.cpp_FUN_0045f690   ; 005987b7
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    ADD ESP,0x8                         ; 005987bc
    LEA EAX,[ESP + 0x144]               ; 005987bf
    LEA ESI,[ESP + 0x198]               ; 005987c6
    PUSH EAX                            ; 005987cd
    MOVSD ES:EDI,ESI                    ; 005987ce
    MOVSD ES:EDI,ESI                    ; 005987cf
    MOVSD ES:EDI,ESI                    ; 005987d0
    PUSH EBX                            ; 005987d1
    LEA ESI,[ESP + 0x164]               ; 005987d2
    LEA EDI,[ESP + 0x194]               ; 005987d9
    CALL core_actor.cpp_FUN_00408ac0    ; 005987e0
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x164]               ; 005987e5
    ADD ESP,0x8                         ; 005987ec
    MOVSD ES:EDI,ESI                    ; 005987ef
    MOVSD ES:EDI,ESI                    ; 005987f0
    MOVSD ES:EDI,ESI                    ; 005987f1
    LEA EAX,[ESP + 0x18c]               ; 005987f2
    LEA ESI,[ESP + 0xd8]                ; 005987f9
    CMP ESI,EAX                         ; 00598800
    JZ 0x0059882e                       ; 00598802
        ;   XREF to: 0059882e (CONDITIONAL_JUMP)  ; LAB_0059882e
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00598804
    MOV dword ptr [ESP + 0xd8],EAX      ; 0059880b
    MOV EAX,dword ptr [ESP + 0x190]     ; 00598812
    MOV dword ptr [ESP + 0xdc],EAX      ; 00598819
    MOV EAX,dword ptr [ESP + 0x194]     ; 00598820
    MOV dword ptr [ESP + 0xe0],EAX      ; 00598827
    PUSH 0x5f7ef9                       ; 0059882e | = "bullet.kfm"
        ;   Label: LAB_0059882e
    CALL core_dmodel.cpp_loadModel_FUN_00468780 ; 00598833
        ;   XREF to: 00468780 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00468780(char * filename)
    ADD ESP,0x4                         ; 00598838
    PUSH EAX                            ; 0059883b
    LEA EAX,[ESP + 0xdc]                ; 0059883c
    PUSH EAX                            ; 00598843
    LEA EAX,[EBX + 0x30]                ; 00598844
    PUSH EAX                            ; 00598847
    ADD EBX,0x20                        ; 00598848
    PUSH EBX                            ; 0059884b
    MOV EDI,dword ptr [0x0061c010]      ; 0059884c | DAT_0061c010
    PUSH EDI                            ; 00598852
    CALL core_fire.cpp_CFireEffect_createShell_FUN_004b7270 ; 00598853
        ;   XREF to: 004b7270 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_004b7270(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    ADD ESP,0x14                        ; 00598858
    MOV EAX,0x1                         ; 0059885b
        ;   Label: LAB_0059885b
    MOV ESP,EBP                         ; 00598860
    POP EBP                             ; 00598862
    POP EDI                             ; 00598863
    POP ESI                             ; 00598864
    POP EBX                             ; 00598865
    RET                                 ; 00598866
    PUSH 0x5f7ee7                       ; 00598867 | = "45-dry-!.wav @2.0"
        ;   Label: LAB_00598867
    MOV dword ptr [EBX + 0x578],EAX     ; 0059886c
    PUSH EBX                            ; 00598872
    MOV EAX,dword ptr [EBX + 0x154]     ; 00598873
    CALL dword ptr [EAX + 0x2c]         ; 00598879
    ADD ESP,0x8                         ; 0059887c
    MOV EDX,dword ptr [EBX + 0x57c]     ; 0059887f
    PUSH EDX                            ; 00598885
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00598886
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0059888b
    MOV dword ptr [EBX + 0x57c],0x0     ; 0059888e
    XOR EAX,EAX                         ; 00598898
    MOV ESP,EBP                         ; 0059889a
    POP EBP                             ; 0059889c
    POP EDI                             ; 0059889d
    POP ESI                             ; 0059889e
    POP EBX                             ; 0059889f
    RET                                 ; 005988a0
    PUSH ECX                            ; 005988a1
        ;   Label: LAB_005988a1
    MOV EDI,dword ptr [0x00622c18]      ; 005988a2 | g_CDemonSetPtr
    PUSH EDI                            ; 005988a8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005988a9
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005988ae
    JMP 0x00598666                      ; 005988b1
        ;   XREF to: 00598666 (UNCONDITIONAL_JUMP)  ; LAB_00598666
    FLD1                                ; 005988b6
        ;   Label: LAB_005988b6
    FCOMP double ptr [ESP]              ; 005988b8
    FNSTSW AX                           ; 005988bb
    SAHF                                ; 005988bd
    JC 0x005986af                       ; 005988be
        ;   XREF to: 005986af (CONDITIONAL_JUMP)  ; LAB_005986af
    MOV ECX,dword ptr [0x007c637c]      ; 005988c4 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 005988ca | g_CDemonSetPtr
    PUSH ECX                            ; 005988cf
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 005988d0 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 005988d6
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005988d7
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005988dc
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005988df
    TEST EAX,EAX                        ; 005988e6
    JZ 0x00598907                       ; 005988e8
        ;   XREF to: 00598907 (CONDITIONAL_JUMP)  ; LAB_00598907
    PUSH EAX                            ; 005988ea
    MOV ESI,dword ptr [EAX + 0x154]     ; 005988eb
    CALL dword ptr [ESI + 0x10c]        ; 005988f1
    ADD ESP,0x4                         ; 005988f7
    TEST EAX,EAX                        ; 005988fa
    JLE 0x00598907                      ; 005988fc
        ;   XREF to: 00598907 (CONDITIONAL_JUMP)  ; LAB_00598907
    XOR EDI,EDI                         ; 005988fe
    MOV dword ptr [ESP + 0x1b8],EDI     ; 00598900
    MOV EAX,[0x01cd0dfc]                ; 00598907 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00598907
    PUSH EAX                            ; 0059890c
    MOV EAX,[0x00622c18]                ; 0059890d | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00598912 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00598918
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00598919
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ECX,dword ptr [0x02c8ae44]      ; 0059891e | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 00598924
    MOV EDI,EAX                         ; 00598927
    MOV EAX,[0x00622c18]                ; 00598929 | g_CDemonSetPtr
    PUSH ECX                            ; 0059892e
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 0059892f | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 00598935
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00598936
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0059893b
    MOV ESI,EAX                         ; 0059893e
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00598940
    MOV EAX,[0x007dc6d8]                ; 00598947 | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 0059894c
    MOV EAX,[0x00622c18]                ; 0059894d | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00598952 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00598958
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00598959
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0059895e
    ADD ESP,0x8                         ; 00598965
    MOV ECX,dword ptr [0x01cc4184]      ; 00598968 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 0059896e | g_CDemonSetPtr
    PUSH ECX                            ; 00598973
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00598974 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0059897a
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0059897b
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00598980
    MOV ECX,dword ptr [ESP + 0x1b8]     ; 00598983
    TEST ECX,ECX                        ; 0059898a
    JNZ 0x005989c3                      ; 0059898c
        ;   XREF to: 005989c3 (CONDITIONAL_JUMP)  ; LAB_005989c3
    TEST EDI,EDI                        ; 0059898e
    JNZ 0x00598c39                      ; 00598990
        ;   XREF to: 00598c39 (CONDITIONAL_JUMP)  ; LAB_00598c39
    TEST ESI,ESI                        ; 00598996
    JNZ 0x00598c60                      ; 00598998
        ;   XREF to: 00598c60 (CONDITIONAL_JUMP)  ; LAB_00598c60
    MOV ESI,dword ptr [ESP + 0x1ac]     ; 0059899e
    TEST ESI,ESI                        ; 005989a5
    JNZ 0x00598cbc                      ; 005989a7
        ;   XREF to: 00598cbc (CONDITIONAL_JUMP)  ; LAB_00598cbc
    TEST EAX,EAX                        ; 005989ad
    JZ 0x00598ce2                       ; 005989af
        ;   XREF to: 00598ce2 (CONDITIONAL_JUMP)  ; LAB_00598ce2
    PUSH EAX                            ; 005989b5
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180 ; 005989b6
        ;   XREF to: 004b9180 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 005989bb
    JMP 0x00598cc5                      ; 005989be
        ;   XREF to: 00598cc5 (UNCONDITIONAL_JUMP)  ; LAB_00598cc5
    PUSH ECX                            ; 005989c3
        ;   Label: LAB_005989c3
    MOV EAX,dword ptr [ECX + 0x154]     ; 005989c4
    CALL dword ptr [EAX + 0xe0]         ; 005989ca
    ADD ESP,0x4                         ; 005989d0
    TEST EAX,EAX                        ; 005989d3
    JZ 0x00598a23                       ; 005989d5
        ;   XREF to: 00598a23 (CONDITIONAL_JUMP)  ; LAB_00598a23
    MOV ECX,dword ptr [0x01d06b10]      ; 005989d7 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 005989dd
    MOV ESI,dword ptr [EBX + 0x304]     ; 005989de
    PUSH ESI                            ; 005989e4
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005989e5
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005989ea
    TEST EAX,EAX                        ; 005989ed
    JZ 0x00598a23                       ; 005989ef
        ;   XREF to: 00598a23 (CONDITIONAL_JUMP)  ; LAB_00598a23
    CMP dword ptr [ESP + 0x1b0],0x0     ; 005989f1
    JNZ 0x005986af                      ; 005989f9
        ;   XREF to: 005986af (CONDITIONAL_JUMP)  ; LAB_005986af
    MOV EDX,dword ptr [EBX + 0x568]     ; 005989ff
    MOV EAX,[0x00622c18]                ; 00598a05 | g_CDemonSetPtr
    INC EDX                             ; 00598a0a
    PUSH EAX                            ; 00598a0b | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x568],EDX     ; 00598a0c
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00598a12
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00598a17
    XOR EAX,EAX                         ; 00598a1a
    MOV ESP,EBP                         ; 00598a1c
    POP EBP                             ; 00598a1e
    POP EDI                             ; 00598a1f
    POP ESI                             ; 00598a20
    POP EBX                             ; 00598a21
    RET                                 ; 00598a22
    LEA EAX,[ESP + 0x8]                 ; 00598a23
        ;   Label: LAB_00598a23
    PUSH EAX                            ; 00598a27
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00598a28
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV EAX,[0x00622c18]                ; 00598a2d | g_CDemonSetPtr
    ADD ESP,0x4                         ; 00598a32
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 00598a35 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0x8],EAX       ; 00598a3b
    PUSH EBX                            ; 00598a3f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00598a40
    MOV EDI,0x3ecccccd                  ; 00598a46
    CALL dword ptr [EAX + 0xec]         ; 00598a4b
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00598a51
    MOV ESI,dword ptr [0x00622c18]      ; 00598a58 | g_CDemonSetPtr
    FLD float ptr [ESP + 0x1c0]         ; 00598a5e
    ADD ESP,0x4                         ; 00598a65
    LEA EAX,[ESI + 0x14d11c]            ; 00598a68
    MOV dword ptr [ESP + 0x10],EDI      ; 00598a6e
    FSTP float ptr [ESP + 0xc]          ; 00598a72
    FLD float ptr [EAX]                 ; 00598a76 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 00598a78 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 00598a7b | g_CDemonSetInstance.ray_target.z
    LEA EDI,[ESP + 0x138]               ; 00598a7e
    FXCH ST2                            ; 00598a85
    FSUB float ptr [ESI + 0x14d110]     ; 00598a87 | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 00598a8d
    FSUB float ptr [ESI + 0x14d114]     ; 00598a8f | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 00598a95
    FSUB float ptr [ESI + 0x14d118]     ; 00598a97 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 00598a9d
    FSTP float ptr [ESP + 0x90]         ; 00598a9f
    FXCH                                ; 00598aa6
    FSTP float ptr [ESP + 0x94]         ; 00598aa8
    LEA ESI,[ESP + 0x90]                ; 00598aaf
    FSTP float ptr [ESP + 0x98]         ; 00598ab6
    MOVSD ES:EDI,ESI                    ; 00598abd
    MOVSD ES:EDI,ESI                    ; 00598abe
    MOVSD ES:EDI,ESI                    ; 00598abf
    FLD float ptr [ESP + 0x13c]         ; 00598ac0
    FMUL ST0                            ; 00598ac7
    FLD float ptr [ESP + 0x138]         ; 00598ac9
    FMUL ST0                            ; 00598ad0
    FADDP                               ; 00598ad2
    FLD float ptr [ESP + 0x140]         ; 00598ad4
    FMUL ST0                            ; 00598adb
    FADDP                               ; 00598add
    FSQRT                               ; 00598adf
    FDIVR double ptr [0x005f7f18]       ; 00598ae1 | DAT_005f7f18
    FLD float ptr [ESP + 0x138]         ; 00598ae7
    FXCH                                ; 00598aee
    FSTP float ptr [ESP + 0x1b4]        ; 00598af0
    FMUL float ptr [ESP + 0x1b4]        ; 00598af7
    FLD float ptr [ESP + 0x13c]         ; 00598afe
    FMUL float ptr [ESP + 0x1b4]        ; 00598b05
    FLD float ptr [ESP + 0x140]         ; 00598b0c
    FMUL float ptr [ESP + 0x1b4]        ; 00598b13
    LEA EDI,[ESP + 0x78]                ; 00598b1a
    LEA ESI,[ESP + 0x150]               ; 00598b1e
    FXCH ST2                            ; 00598b25
    FSTP float ptr [ESP + 0x150]        ; 00598b27
    FSTP float ptr [ESP + 0x154]        ; 00598b2e
    FSTP float ptr [ESP + 0x158]        ; 00598b35
    MOVSD ES:EDI,ESI                    ; 00598b3c
    MOVSD ES:EDI,ESI                    ; 00598b3d
    MOVSD ES:EDI,ESI                    ; 00598b3e
    LEA EAX,[ESP + 0x78]                ; 00598b3f
    LEA ESI,[ESP + 0x14]                ; 00598b43
    CMP ESI,EAX                         ; 00598b47
    JZ 0x00598b66                       ; 00598b49
        ;   XREF to: 00598b66 (CONDITIONAL_JUMP)  ; LAB_00598b66
    MOV EAX,dword ptr [ESP + 0x78]      ; 00598b4b
    MOV dword ptr [ESP + 0x14],EAX      ; 00598b4f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00598b53
    MOV dword ptr [ESP + 0x18],EAX      ; 00598b57
    MOV EAX,dword ptr [ESP + 0x80]      ; 00598b5b
    MOV dword ptr [ESP + 0x1c],EAX      ; 00598b62
    MOV EAX,[0x00622c18]                ; 00598b66 | g_CDemonSetPtr
        ;   Label: LAB_00598b66
    ADD EAX,0x14d138                    ; 00598b6b
    PUSH EAX                            ; 00598b70 | g_CDemonSetInstance.collision_impact_position.x
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 00598b71
    PUSH EAX                            ; 00598b78
    LEA ESI,[ESP + 0x128]               ; 00598b79
    LEA EDI,[ESP + 0x74]                ; 00598b80
    CALL core_actor.cpp_FUN_00408bb0    ; 00598b84
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x128]               ; 00598b89
    ADD ESP,0x8                         ; 00598b90
    MOVSD ES:EDI,ESI                    ; 00598b93
    MOVSD ES:EDI,ESI                    ; 00598b94
    MOVSD ES:EDI,ESI                    ; 00598b95
    LEA EAX,[ESP + 0x24]                ; 00598b96
    LEA ESI,[ESP + 0x6c]                ; 00598b9a
    CMP EAX,ESI                         ; 00598b9e
    JZ 0x00598bba                       ; 00598ba0
        ;   XREF to: 00598bba (CONDITIONAL_JUMP)  ; LAB_00598bba
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00598ba2
    MOV dword ptr [ESP + 0x24],EAX      ; 00598ba6
    MOV EAX,dword ptr [ESP + 0x70]      ; 00598baa
    MOV dword ptr [ESP + 0x28],EAX      ; 00598bae
    MOV EAX,dword ptr [ESP + 0x74]      ; 00598bb2
    MOV dword ptr [ESP + 0x2c],EAX      ; 00598bb6
    MOV EDX,0x65                        ; 00598bba
        ;   Label: LAB_00598bba
    MOV EAX,dword ptr [EBX + 0x56c]     ; 00598bbf
    MOV ECX,0x3e19999a                  ; 00598bc5
    MOV dword ptr [ESP + 0x30],EAX      ; 00598bca
    MOV dword ptr [ESP + 0x38],EDX      ; 00598bce
    MOV dword ptr [ESP + 0x34],ECX      ; 00598bd2
    MOV dword ptr [ESP + 0x3c],EBX      ; 00598bd6
    PUSH EBX                            ; 00598bda
    MOV EAX,dword ptr [EBX + 0x154]     ; 00598bdb
    CALL dword ptr [EAX + 0x94]         ; 00598be1
    ADD ESP,0x4                         ; 00598be7
    MOV dword ptr [ESP + 0x40],EAX      ; 00598bea
    LEA EAX,[ESP + 0x8]                 ; 00598bee
    MOV ESI,dword ptr [ESP + 0x1b8]     ; 00598bf2
    PUSH EAX                            ; 00598bf9
    MOV EDI,dword ptr [ESP + 0x1bc]     ; 00598bfa
    MOV ESI,dword ptr [ESI + 0x154]     ; 00598c01
    PUSH EDI                            ; 00598c07
    CALL dword ptr [ESI + 0x108]        ; 00598c08
    MOV EAX,dword ptr [EBX + 0x2e4]     ; 00598c0e
    ADD ESP,0x8                         ; 00598c14
    TEST EAX,EAX                        ; 00598c17
    JZ 0x005986af                       ; 00598c19
        ;   XREF to: 005986af (CONDITIONAL_JUMP)  ; LAB_005986af
    MOV EAX,[0x00622c18]                ; 00598c1f | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00598c24 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00598c2a
    PUSH EAX                            ; 00598c2b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00598c2c
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00598c31
    JMP 0x00598cc5                      ; 00598c34
        ;   XREF to: 00598cc5 (UNCONDITIONAL_JUMP)  ; LAB_00598cc5
    PUSH EDI                            ; 00598c39
        ;   Label: LAB_00598c39
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40 ; 00598c3a
        ;   XREF to: 004e3a40 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40(CGlass * this_ptr)
    ADD ESP,0x4                         ; 00598c3f
    TEST EAX,EAX                        ; 00598c42
    JZ 0x005986af                       ; 00598c44
        ;   XREF to: 005986af (CONDITIONAL_JUMP)  ; LAB_005986af
    MOV EAX,[0x00622c18]                ; 00598c4a | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 00598c4f
    PUSH EAX                            ; 00598c54 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 00598c55
    CALL core_glass.cpp_FUN_004e34b0    ; 00598c56
        ;   XREF to: 004e34b0 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004e34b0()
    ADD ESP,0x8                         ; 00598c5b
    JMP 0x00598cc5                      ; 00598c5e
        ;   XREF to: 00598cc5 (UNCONDITIONAL_JUMP)  ; LAB_00598cc5
    PUSH ESI                            ; 00598c60
        ;   Label: LAB_00598c60
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0 ; 00598c61
        ;   XREF to: 0059bdd0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 00598c66
    PUSH EBX                            ; 00598c69
    PUSH ESI                            ; 00598c6a
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0 ; 00598c6b
        ;   XREF to: 0059bdf0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00598c70
    TEST EAX,EAX                        ; 00598c73
    JZ 0x00598ca4                       ; 00598c75
        ;   XREF to: 00598ca4 (CONDITIONAL_JUMP)  ; LAB_00598ca4
    PUSH EBX                            ; 00598c77
    MOV EAX,dword ptr [EBX + 0x154]     ; 00598c78
    CALL dword ptr [EAX + 0xec]         ; 00598c7e
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00598c84
    FLD float ptr [ESP + 0x1c0]         ; 00598c8b
    ADD ESP,0x4                         ; 00598c92
    SUB ESP,0x4                         ; 00598c95
    FSTP float ptr [ESP]                ; 00598c98
    PUSH ESI                            ; 00598c9b
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30 ; 00598c9c
        ;   XREF to: 0059be30 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 00598ca1
    MOV EDI,dword ptr [ESP + 0x1a8]     ; 00598ca4
        ;   Label: LAB_00598ca4
    PUSH EDI                            ; 00598cab
    MOV EAX,[0x00622c18]                ; 00598cac | g_CDemonSetPtr
    PUSH EAX                            ; 00598cb1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00598cb2
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00598cb7
    JMP 0x00598cc5                      ; 00598cba
        ;   XREF to: 00598cc5 (UNCONDITIONAL_JUMP)  ; LAB_00598cc5
    PUSH ESI                            ; 00598cbc
        ;   Label: LAB_00598cbc
    CALL core_crate.cpp_FUN_00449600    ; 00598cbd
        ;   XREF to: 00449600 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_00449600(CCrate * this_ptr)
    ADD ESP,0x4                         ; 00598cc2
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 00598cc5
        ;   Label: LAB_00598cc5
    INC ECX                             ; 00598ccc
    MOV dword ptr [ESP + 0x1b0],ECX     ; 00598ccd
    CMP ECX,0x4                         ; 00598cd4
    JL 0x0059866f                       ; 00598cd7
        ;   XREF to: 0059866f (CONDITIONAL_JUMP)  ; LAB_0059866f
    JMP 0x005986af                      ; 00598cdd
        ;   XREF to: 005986af (UNCONDITIONAL_JUMP)  ; LAB_005986af
    MOV EAX,[0x00622c18]                ; 00598ce2 | g_CDemonSetPtr
        ;   Label: LAB_00598ce2
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 00598ce7 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 00598ced
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 00598cee | g_CDemonSetInstance.ground_type
    PUSH EDX                            ; 00598cf4
    LEA ESI,[EAX + 0x14d128]            ; 00598cf5
    PUSH ESI                            ; 00598cfb | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 00598cfc
    PUSH EAX                            ; 00598d01 | g_CDemonSetInstance.collision_impact_position.x
    MOV ECX,dword ptr [0x0061c010]      ; 00598d02 | DAT_0061c010
    PUSH ECX                            ; 00598d08
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0 ; 00598d09
        ;   XREF to: 004b56a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 00598d0e
    JMP 0x005986af                      ; 00598d11
        ;   XREF to: 005986af (UNCONDITIONAL_JUMP)  ; LAB_005986af

