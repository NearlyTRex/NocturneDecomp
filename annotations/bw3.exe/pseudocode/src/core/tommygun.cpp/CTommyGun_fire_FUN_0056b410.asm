; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_0056b410(CTommyGun *this_ptr)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_s_45_dry_wav_2_0_005d6456
;   TerminatedCString s_bullet_kfm_005d6468
;   undefined4 DAT_005d6473
;   undefined4 DAT_005d6477
;   undefined4 DAT_005d647f
;   undefined4 DAT_005d6487
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
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
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_crate.cpp_FUN_004461c0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_dmodel.cpp_loadModel_FUN_00462420
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
;   core_fire.cpp_CFireEffect_createShell_FUN_004a3e70
;   core_fire.cpp_FUN_004a2090
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b410
        ;   Label: core_tommygun.cpp_CTommyGun_fire_FUN_0056b410
    PUSH ESI                            ; 0056b411
    PUSH EDI                            ; 0056b412
    PUSH EBP                            ; 0056b413
    MOV EBP,ESP                         ; 0056b414
    SUB ESP,0x1c0                       ; 0056b416
    AND ESP,0xfffffff8                  ; 0056b41c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056b41f
    FLD float ptr [EBX + 0x300]         ; 0056b422
    FLDZ                                ; 0056b428
    MOV dword ptr [EBX + 0x594],0x2     ; 0056b42a
    FCOMPP                              ; 0056b434
    FNSTSW AX                           ; 0056b436
    SAHF                                ; 0056b438
    JNC 0x0056b444                      ; 0056b439
        ;   XREF to: 0056b444 (CONDITIONAL_JUMP)  ; LAB_0056b444
    XOR EAX,EAX                         ; 0056b43b
    MOV ESP,EBP                         ; 0056b43d
    POP EBP                             ; 0056b43f
    POP EDI                             ; 0056b440
    POP ESI                             ; 0056b441
    POP EBX                             ; 0056b442
    RET                                 ; 0056b443
    FLD float ptr [EBX + 0x300]         ; 0056b444
        ;   Label: LAB_0056b444
    LEA ESI,[ESP + 0xfc]                ; 0056b44a
    LEA EDI,[ESP + 0x168]               ; 0056b451
    PUSH EBX                            ; 0056b458
    FADD float ptr [0x005d6473]         ; 0056b459 | DAT_005d6473
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056b45f
    FSTP float ptr [EBX + 0x300]        ; 0056b465
    CALL dword ptr [EAX + 0xe0]         ; 0056b46b
    ADD ESP,0x4                         ; 0056b471
    LEA EAX,[ESP + 0x168]               ; 0056b474
    LEA ESI,[ESP + 0xfc]                ; 0056b47b
    PUSH EAX                            ; 0056b482
    MOVSD ES:EDI,ESI                    ; 0056b483
    MOVSD ES:EDI,ESI                    ; 0056b484
    MOVSD ES:EDI,ESI                    ; 0056b485
    PUSH EBX                            ; 0056b486
    LEA ESI,[ESP + 0x110]               ; 0056b487
    CALL core_actor.cpp_FUN_00408b80    ; 0056b48e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0056b493
    LEA EDI,[ESP + 0x114]               ; 0056b496
    LEA ESI,[ESP + 0x108]               ; 0056b49d
    PUSH EBX                            ; 0056b4a4
    MOVSD ES:EDI,ESI                    ; 0056b4a5
    MOVSD ES:EDI,ESI                    ; 0056b4a6
    MOVSD ES:EDI,ESI                    ; 0056b4a7
    CALL core_weapon.cpp_CWeapon_fire_FUN_0057b880 ; 0056b4a8
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0057b880(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0056b4ad
    TEST EAX,EAX                        ; 0056b4b0
    JZ 0x0056b857                       ; 0056b4b2
        ;   XREF to: 0056b857 (CONDITIONAL_JUMP)  ; LAB_0056b857
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 0056b4b8
    MOV dword ptr [ESP + 0xb0],EAX      ; 0056b4be
    LEA EAX,[ESP + 0xa8]                ; 0056b4c5
    LEA ESI,[ESP + 0xe4]                ; 0056b4cc
    PUSH EAX                            ; 0056b4d3
    LEA EDI,[ESP + 0x184]               ; 0056b4d4
    XOR ECX,ECX                         ; 0056b4db
    PUSH EBX                            ; 0056b4dd
    MOV dword ptr [ESP + 0xb0],ECX      ; 0056b4de
    MOV dword ptr [ESP + 0xb4],ECX      ; 0056b4e5
    CALL core_actor.cpp_FUN_00408b00    ; 0056b4ec
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 0056b4f1
    LEA ESI,[ESP + 0xe4]                ; 0056b4f4
    FLD float ptr [ESP + 0x114]         ; 0056b4fb
    FLD float ptr [ESP + 0x118]         ; 0056b502
    MOVSD ES:EDI,ESI                    ; 0056b509
    MOVSD ES:EDI,ESI                    ; 0056b50a
    MOVSD ES:EDI,ESI                    ; 0056b50b
    FLD float ptr [ESP + 0x11c]         ; 0056b50c
    LEA EDI,[ESP + 0xcc]                ; 0056b513
    LEA ESI,[ESP + 0x174]               ; 0056b51a
    FXCH ST2                            ; 0056b521
    FADD float ptr [ESP + 0x180]        ; 0056b523
    FXCH                                ; 0056b52a
    FADD float ptr [ESP + 0x184]        ; 0056b52c
    FXCH ST2                            ; 0056b533
    FADD float ptr [ESP + 0x188]        ; 0056b535
    FXCH                                ; 0056b53c
    FSTP float ptr [ESP + 0x174]        ; 0056b53e
    FXCH                                ; 0056b545
    FSTP float ptr [ESP + 0x178]        ; 0056b547
    FSTP float ptr [ESP + 0x17c]        ; 0056b54e
    MOVSD ES:EDI,ESI                    ; 0056b555
    MOVSD ES:EDI,ESI                    ; 0056b556
    MOVSD ES:EDI,ESI                    ; 0056b557
    FLD float ptr [EBX + 0x2e8]         ; 0056b558
    FDIVR double ptr [0x005d6477]       ; 0056b55e | DAT_005d6477
    FLD float ptr [ESP + 0x180]         ; 0056b564
    FXCH                                ; 0056b56b
    FSTP float ptr [ESP + 0x1a4]        ; 0056b56d
    FMUL float ptr [ESP + 0x1a4]        ; 0056b574
    FLD float ptr [ESP + 0x184]         ; 0056b57b
    FMUL float ptr [ESP + 0x1a4]        ; 0056b582
    FLD float ptr [ESP + 0x188]         ; 0056b589
    FMUL float ptr [ESP + 0x1a4]        ; 0056b590
    FLD float ptr [ESP + 0x114]         ; 0056b597
    FLD float ptr [ESP + 0x118]         ; 0056b59e
    LEA EDI,[ESP + 0xc0]                ; 0056b5a5
    LEA ESI,[ESP + 0xb4]                ; 0056b5ac
    FXCH ST4                            ; 0056b5b3
    FSTP float ptr [ESP + 0xb4]         ; 0056b5b5
    FXCH ST2                            ; 0056b5bc
    FSTP float ptr [ESP + 0xb8]         ; 0056b5be
    FSTP float ptr [ESP + 0xbc]         ; 0056b5c5
    MOVSD ES:EDI,ESI                    ; 0056b5cc
    MOVSD ES:EDI,ESI                    ; 0056b5cd
    MOVSD ES:EDI,ESI                    ; 0056b5ce
    FLD float ptr [ESP + 0x11c]         ; 0056b5cf
    LEA EDI,[ESP + 0x84]                ; 0056b5d6
    LEA ESI,[ESP + 0x12c]               ; 0056b5dd
    FXCH                                ; 0056b5e4
    FSUB float ptr [ESP + 0xc0]         ; 0056b5e6
    FXCH ST2                            ; 0056b5ed
    FSUB float ptr [ESP + 0xc4]         ; 0056b5ef
    FXCH                                ; 0056b5f6
    FSUB float ptr [ESP + 0xc8]         ; 0056b5f8
    FXCH ST2                            ; 0056b5ff
    FSTP float ptr [ESP + 0x12c]        ; 0056b601
    FSTP float ptr [ESP + 0x130]        ; 0056b608
    FSTP float ptr [ESP + 0x134]        ; 0056b60f
    MOVSD ES:EDI,ESI                    ; 0056b616
    MOVSD ES:EDI,ESI                    ; 0056b617
    MOVSD ES:EDI,ESI                    ; 0056b618
    MOV EDI,dword ptr [0x00603b28]      ; 0056b619 | g_CDemonSetPtr
    PUSH EDI                            ; 0056b61f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0056b620
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056b625
    PUSH 0x1                            ; 0056b628
    MOV EAX,[0x00603b28]                ; 0056b62a | g_CDemonSetPtr
    PUSH EAX                            ; 0056b62f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 0056b630
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0056b635
    PUSH EBX                            ; 0056b638
    MOV EDX,dword ptr [0x00603b28]      ; 0056b639 | g_CDemonSetPtr
    PUSH EDX                            ; 0056b63f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0056b640
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x304]     ; 0056b645
    ADD ESP,0x8                         ; 0056b64b
    TEST ECX,ECX                        ; 0056b64e
    JNZ 0x0056b891                      ; 0056b650
        ;   XREF to: 0056b891 (CONDITIONAL_JUMP)  ; LAB_0056b891
    XOR EAX,EAX                         ; 0056b656
        ;   Label: LAB_0056b656
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0056b658
    LEA EAX,[ESP + 0xcc]                ; 0056b65f
        ;   Label: LAB_0056b65f
    PUSH EAX                            ; 0056b666
    LEA EAX,[ESP + 0x88]                ; 0056b667
    PUSH EAX                            ; 0056b66e
    MOV EDX,dword ptr [0x00603b28]      ; 0056b66f | g_CDemonSetPtr
    PUSH EDX                            ; 0056b675 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 0056b676
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x1c8],EAX     ; 0056b67b
    FLD float ptr [ESP + 0x1c8]         ; 0056b682
    ADD ESP,0xc                         ; 0056b689
    FLDZ                                ; 0056b68c
    FXCH                                ; 0056b68e
    FSTP double ptr [ESP]               ; 0056b690
    FCOMP double ptr [ESP]              ; 0056b693
    FNSTSW AX                           ; 0056b696
    SAHF                                ; 0056b698
    JBE 0x0056b8a6                      ; 0056b699
        ;   XREF to: 0056b8a6 (CONDITIONAL_JUMP)  ; LAB_0056b8a6
    MOV ECX,dword ptr [0x00603b28]      ; 0056b69f | g_CDemonSetPtr
        ;   Label: LAB_0056b69f
    PUSH ECX                            ; 0056b6a5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0056b6a6
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    MOV ESI,dword ptr [EBX + 0x584]     ; 0056b6ab
    ADD ESP,0x4                         ; 0056b6b1
    TEST ESI,ESI                        ; 0056b6b4
    JZ 0x0056b84b                       ; 0056b6b6
        ;   XREF to: 0056b84b (CONDITIONAL_JUMP)  ; LAB_0056b84b
    LEA EDI,[ESP + 0x9c]                ; 0056b6bc
    LEA ESI,[ESP + 0x114]               ; 0056b6c3
    LEA EAX,[EBX + 0x3c]                ; 0056b6ca
    MOVSD ES:EDI,ESI                    ; 0056b6cd
    MOVSD ES:EDI,ESI                    ; 0056b6ce
    MOVSD ES:EDI,ESI                    ; 0056b6cf
    PUSH EAX                            ; 0056b6d0
    FLD float ptr [ESP + 0xa4]          ; 0056b6d1
    LEA EAX,[ESP + 0xa0]                ; 0056b6d8
    MOV EDI,dword ptr [0x005fc5a0]      ; 0056b6df | DAT_005fc5a0
    PUSH EAX                            ; 0056b6e5
    FADD float ptr [0x005d647f]         ; 0056b6e6 | DAT_005d647f
    PUSH EDI                            ; 0056b6ec
    FSTP float ptr [ESP + 0xac]         ; 0056b6ed
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450 ; 0056b6f4
        ;   XREF to: 004a2450 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 0056b6f9
    MOV EAX,0x40a00000                  ; 0056b6fc
    MOV EDX,0x40c00000                  ; 0056b701
    PUSH 0x3ec90fdb                     ; 0056b706
    MOV ECX,0xc0c00000                  ; 0056b70b
    PUSH 0xbec90fdb                     ; 0056b710
    MOV dword ptr [ESP + 0xe0],EAX      ; 0056b715
    MOV dword ptr [ESP + 0xe4],EDX      ; 0056b71c
    MOV dword ptr [ESP + 0xe8],ECX      ; 0056b723
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0056b72a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 0056b72f
    FLD float ptr [ESP + 0x1c4]         ; 0056b736
    ADD ESP,0x8                         ; 0056b73d
    PUSH 0x3ec90fdb                     ; 0056b740
    PUSH 0xbec90fdb                     ; 0056b745
    FSTP float ptr [ESP + 0xf8]         ; 0056b74a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0056b751
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 0056b756
    FLD float ptr [ESP + 0x1c4]         ; 0056b75d
    ADD ESP,0x8                         ; 0056b764
    LEA EAX,[ESP + 0xf0]                ; 0056b767
    PUSH EAX                            ; 0056b76e
    LEA EAX,[ESP + 0x48]                ; 0056b76f
    XOR ESI,ESI                         ; 0056b773
    PUSH EAX                            ; 0056b775
    FSTP float ptr [ESP + 0xfc]         ; 0056b776
    MOV dword ptr [ESP + 0x100],ESI     ; 0056b77d
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 0056b784
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0056b789
    LEA EAX,[ESP + 0xd8]                ; 0056b78c
    PUSH EAX                            ; 0056b793
    LEA EAX,[ESP + 0x48]                ; 0056b794
    PUSH EAX                            ; 0056b798
    LEA ESI,[ESP + 0x1a0]               ; 0056b799
    LEA EDI,[ESP + 0x14c]               ; 0056b7a0
    CALL core_dirmat.cpp_FUN_0045b800   ; 0056b7a7
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    ADD ESP,0x8                         ; 0056b7ac
    LEA EAX,[ESP + 0x144]               ; 0056b7af
    LEA ESI,[ESP + 0x198]               ; 0056b7b6
    PUSH EAX                            ; 0056b7bd
    MOVSD ES:EDI,ESI                    ; 0056b7be
    MOVSD ES:EDI,ESI                    ; 0056b7bf
    MOVSD ES:EDI,ESI                    ; 0056b7c0
    PUSH EBX                            ; 0056b7c1
    LEA ESI,[ESP + 0x164]               ; 0056b7c2
    LEA EDI,[ESP + 0x194]               ; 0056b7c9
    CALL core_actor.cpp_FUN_00408b00    ; 0056b7d0
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x164]               ; 0056b7d5
    ADD ESP,0x8                         ; 0056b7dc
    MOVSD ES:EDI,ESI                    ; 0056b7df
    MOVSD ES:EDI,ESI                    ; 0056b7e0
    MOVSD ES:EDI,ESI                    ; 0056b7e1
    LEA EAX,[ESP + 0x18c]               ; 0056b7e2
    LEA ESI,[ESP + 0xd8]                ; 0056b7e9
    CMP ESI,EAX                         ; 0056b7f0
    JZ 0x0056b81e                       ; 0056b7f2
        ;   XREF to: 0056b81e (CONDITIONAL_JUMP)  ; LAB_0056b81e
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0056b7f4
    MOV dword ptr [ESP + 0xd8],EAX      ; 0056b7fb
    MOV EAX,dword ptr [ESP + 0x190]     ; 0056b802
    MOV dword ptr [ESP + 0xdc],EAX      ; 0056b809
    MOV EAX,dword ptr [ESP + 0x194]     ; 0056b810
    MOV dword ptr [ESP + 0xe0],EAX      ; 0056b817
    PUSH 0x5d6468                       ; 0056b81e | = "bullet.kfm"
        ;   Label: LAB_0056b81e
    CALL core_dmodel.cpp_loadModel_FUN_00462420 ; 0056b823
        ;   XREF to: 00462420 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00462420(char * filename)
    ADD ESP,0x4                         ; 0056b828
    PUSH EAX                            ; 0056b82b
    LEA EAX,[ESP + 0xdc]                ; 0056b82c
    PUSH EAX                            ; 0056b833
    LEA EAX,[EBX + 0x30]                ; 0056b834
    PUSH EAX                            ; 0056b837
    ADD EBX,0x20                        ; 0056b838
    PUSH EBX                            ; 0056b83b
    MOV EDI,dword ptr [0x005fc5a0]      ; 0056b83c | DAT_005fc5a0
    PUSH EDI                            ; 0056b842
    CALL core_fire.cpp_CFireEffect_createShell_FUN_004a3e70 ; 0056b843
        ;   XREF to: 004a3e70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_004a3e70(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    ADD ESP,0x14                        ; 0056b848
    MOV EAX,0x1                         ; 0056b84b
        ;   Label: LAB_0056b84b
    MOV ESP,EBP                         ; 0056b850
    POP EBP                             ; 0056b852
    POP EDI                             ; 0056b853
    POP ESI                             ; 0056b854
    POP EBX                             ; 0056b855
    RET                                 ; 0056b856
    PUSH 0x5d6456                       ; 0056b857 | = "45-dry-!.wav @2.0"
        ;   Label: LAB_0056b857
    MOV dword ptr [EBX + 0x594],EAX     ; 0056b85c
    PUSH EBX                            ; 0056b862
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056b863
    CALL dword ptr [EAX + 0x2c]         ; 0056b869
    ADD ESP,0x8                         ; 0056b86c
    MOV EDX,dword ptr [EBX + 0x598]     ; 0056b86f
    PUSH EDX                            ; 0056b875
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0056b876
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0056b87b
    MOV dword ptr [EBX + 0x598],0x0     ; 0056b87e
    XOR EAX,EAX                         ; 0056b888
    MOV ESP,EBP                         ; 0056b88a
    POP EBP                             ; 0056b88c
    POP EDI                             ; 0056b88d
    POP ESI                             ; 0056b88e
    POP EBX                             ; 0056b88f
    RET                                 ; 0056b890
    PUSH ECX                            ; 0056b891
        ;   Label: LAB_0056b891
    MOV EDI,dword ptr [0x00603b28]      ; 0056b892 | g_CDemonSetPtr
    PUSH EDI                            ; 0056b898 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0056b899
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056b89e
    JMP 0x0056b656                      ; 0056b8a1
        ;   XREF to: 0056b656 (UNCONDITIONAL_JUMP)  ; LAB_0056b656
    FLD1                                ; 0056b8a6
        ;   Label: LAB_0056b8a6
    FCOMP double ptr [ESP]              ; 0056b8a8
    FNSTSW AX                           ; 0056b8ab
    SAHF                                ; 0056b8ad
    JC 0x0056b69f                       ; 0056b8ae
        ;   XREF to: 0056b69f (CONDITIONAL_JUMP)  ; LAB_0056b69f
    MOV ECX,dword ptr [0x007e2cec]      ; 0056b8b4 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x00603b28]                ; 0056b8ba | g_CDemonSetPtr
    PUSH ECX                            ; 0056b8bf
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 0056b8c0 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 0056b8c6
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0056b8c7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0056b8cc
    MOV dword ptr [ESP + 0x1b8],EAX     ; 0056b8cf
    TEST EAX,EAX                        ; 0056b8d6
    JZ 0x0056b8f7                       ; 0056b8d8
        ;   XREF to: 0056b8f7 (CONDITIONAL_JUMP)  ; LAB_0056b8f7
    PUSH EAX                            ; 0056b8da
    MOV ESI,dword ptr [EAX + 0x154]     ; 0056b8db
    CALL dword ptr [ESI + 0x10c]        ; 0056b8e1
    ADD ESP,0x4                         ; 0056b8e7
    TEST EAX,EAX                        ; 0056b8ea
    JLE 0x0056b8f7                      ; 0056b8ec
        ;   XREF to: 0056b8f7 (CONDITIONAL_JUMP)  ; LAB_0056b8f7
    XOR EDI,EDI                         ; 0056b8ee
    MOV dword ptr [ESP + 0x1b8],EDI     ; 0056b8f0
    MOV EAX,[0x01d22e04]                ; 0056b8f7 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0056b8f7
    PUSH EAX                            ; 0056b8fc
    MOV EAX,[0x00603b28]                ; 0056b8fd | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0056b902 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0056b908
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0056b909
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ECX,dword ptr [0x02cfd894]      ; 0056b90e | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 0056b914
    MOV EDI,EAX                         ; 0056b917
    MOV EAX,[0x00603b28]                ; 0056b919 | g_CDemonSetPtr
    PUSH ECX                            ; 0056b91e
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 0056b91f | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 0056b925
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0056b926
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0056b92b
    MOV ESI,EAX                         ; 0056b92e
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0056b930
    MOV EAX,[0x007f8fc8]                ; 0056b937 | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 0056b93c
    MOV EAX,[0x00603b28]                ; 0056b93d | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0056b942 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0056b948
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0056b949
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0056b94e
    ADD ESP,0x8                         ; 0056b955
    MOV ECX,dword ptr [0x01d0cf60]      ; 0056b958 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x00603b28]                ; 0056b95e | g_CDemonSetPtr
    PUSH ECX                            ; 0056b963
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0056b964 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0056b96a
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0056b96b
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0056b970
    MOV ECX,dword ptr [ESP + 0x1b8]     ; 0056b973
    TEST ECX,ECX                        ; 0056b97a
    JNZ 0x0056b9b3                      ; 0056b97c
        ;   XREF to: 0056b9b3 (CONDITIONAL_JUMP)  ; LAB_0056b9b3
    TEST EDI,EDI                        ; 0056b97e
    JNZ 0x0056bc29                      ; 0056b980
        ;   XREF to: 0056bc29 (CONDITIONAL_JUMP)  ; LAB_0056bc29
    TEST ESI,ESI                        ; 0056b986
    JNZ 0x0056bc50                      ; 0056b988
        ;   XREF to: 0056bc50 (CONDITIONAL_JUMP)  ; LAB_0056bc50
    MOV ESI,dword ptr [ESP + 0x1ac]     ; 0056b98e
    TEST ESI,ESI                        ; 0056b995
    JNZ 0x0056bcac                      ; 0056b997
        ;   XREF to: 0056bcac (CONDITIONAL_JUMP)  ; LAB_0056bcac
    TEST EAX,EAX                        ; 0056b99d
    JZ 0x0056bcd2                       ; 0056b99f
        ;   XREF to: 0056bcd2 (CONDITIONAL_JUMP)  ; LAB_0056bcd2
    PUSH EAX                            ; 0056b9a5
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110 ; 0056b9a6
        ;   XREF to: 004a7110 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0056b9ab
    JMP 0x0056bcb5                      ; 0056b9ae
        ;   XREF to: 0056bcb5 (UNCONDITIONAL_JUMP)  ; LAB_0056bcb5
    PUSH ECX                            ; 0056b9b3
        ;   Label: LAB_0056b9b3
    MOV EAX,dword ptr [ECX + 0x154]     ; 0056b9b4
    CALL dword ptr [EAX + 0xe0]         ; 0056b9ba
    ADD ESP,0x4                         ; 0056b9c0
    TEST EAX,EAX                        ; 0056b9c3
    JZ 0x0056ba13                       ; 0056b9c5
        ;   XREF to: 0056ba13 (CONDITIONAL_JUMP)  ; LAB_0056ba13
    MOV ECX,dword ptr [0x01d5ba70]      ; 0056b9c7 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 0056b9cd
    MOV ESI,dword ptr [EBX + 0x304]     ; 0056b9ce
    PUSH ESI                            ; 0056b9d4
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0056b9d5
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0056b9da
    TEST EAX,EAX                        ; 0056b9dd
    JZ 0x0056ba13                       ; 0056b9df
        ;   XREF to: 0056ba13 (CONDITIONAL_JUMP)  ; LAB_0056ba13
    CMP dword ptr [ESP + 0x1b0],0x0     ; 0056b9e1
    JNZ 0x0056b69f                      ; 0056b9e9
        ;   XREF to: 0056b69f (CONDITIONAL_JUMP)  ; LAB_0056b69f
    MOV EDX,dword ptr [EBX + 0x568]     ; 0056b9ef
    MOV EAX,[0x00603b28]                ; 0056b9f5 | g_CDemonSetPtr
    INC EDX                             ; 0056b9fa
    PUSH EAX                            ; 0056b9fb | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x568],EDX     ; 0056b9fc
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0056ba02
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056ba07
    XOR EAX,EAX                         ; 0056ba0a
    MOV ESP,EBP                         ; 0056ba0c
    POP EBP                             ; 0056ba0e
    POP EDI                             ; 0056ba0f
    POP ESI                             ; 0056ba10
    POP EBX                             ; 0056ba11
    RET                                 ; 0056ba12
    LEA EAX,[ESP + 0x8]                 ; 0056ba13
        ;   Label: LAB_0056ba13
    PUSH EAX                            ; 0056ba17
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0056ba18
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,[0x00603b28]                ; 0056ba1d | g_CDemonSetPtr
    ADD ESP,0x4                         ; 0056ba22
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 0056ba25 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0x8],EAX       ; 0056ba2b
    PUSH EBX                            ; 0056ba2f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056ba30
    MOV EDI,0x3ecccccd                  ; 0056ba36
    CALL dword ptr [EAX + 0xec]         ; 0056ba3b
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0056ba41
    MOV ESI,dword ptr [0x00603b28]      ; 0056ba48 | g_CDemonSetPtr
    FLD float ptr [ESP + 0x1c0]         ; 0056ba4e
    ADD ESP,0x4                         ; 0056ba55
    LEA EAX,[ESI + 0x14d11c]            ; 0056ba58
    MOV dword ptr [ESP + 0x10],EDI      ; 0056ba5e
    FSTP float ptr [ESP + 0xc]          ; 0056ba62
    FLD float ptr [EAX]                 ; 0056ba66 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 0056ba68 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 0056ba6b | g_CDemonSetInstance.ray_target.z
    LEA EDI,[ESP + 0x138]               ; 0056ba6e
    FXCH ST2                            ; 0056ba75
    FSUB float ptr [ESI + 0x14d110]     ; 0056ba77 | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 0056ba7d
    FSUB float ptr [ESI + 0x14d114]     ; 0056ba7f | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 0056ba85
    FSUB float ptr [ESI + 0x14d118]     ; 0056ba87 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 0056ba8d
    FSTP float ptr [ESP + 0x90]         ; 0056ba8f
    FXCH                                ; 0056ba96
    FSTP float ptr [ESP + 0x94]         ; 0056ba98
    LEA ESI,[ESP + 0x90]                ; 0056ba9f
    FSTP float ptr [ESP + 0x98]         ; 0056baa6
    MOVSD ES:EDI,ESI                    ; 0056baad
    MOVSD ES:EDI,ESI                    ; 0056baae
    MOVSD ES:EDI,ESI                    ; 0056baaf
    FLD float ptr [ESP + 0x13c]         ; 0056bab0
    FMUL ST0                            ; 0056bab7
    FLD float ptr [ESP + 0x138]         ; 0056bab9
    FMUL ST0                            ; 0056bac0
    FADDP                               ; 0056bac2
    FLD float ptr [ESP + 0x140]         ; 0056bac4
    FMUL ST0                            ; 0056bacb
    FADDP                               ; 0056bacd
    FSQRT                               ; 0056bacf
    FDIVR double ptr [0x005d6487]       ; 0056bad1 | DAT_005d6487
    FLD float ptr [ESP + 0x138]         ; 0056bad7
    FXCH                                ; 0056bade
    FSTP float ptr [ESP + 0x1b4]        ; 0056bae0
    FMUL float ptr [ESP + 0x1b4]        ; 0056bae7
    FLD float ptr [ESP + 0x13c]         ; 0056baee
    FMUL float ptr [ESP + 0x1b4]        ; 0056baf5
    FLD float ptr [ESP + 0x140]         ; 0056bafc
    FMUL float ptr [ESP + 0x1b4]        ; 0056bb03
    LEA EDI,[ESP + 0x78]                ; 0056bb0a
    LEA ESI,[ESP + 0x150]               ; 0056bb0e
    FXCH ST2                            ; 0056bb15
    FSTP float ptr [ESP + 0x150]        ; 0056bb17
    FSTP float ptr [ESP + 0x154]        ; 0056bb1e
    FSTP float ptr [ESP + 0x158]        ; 0056bb25
    MOVSD ES:EDI,ESI                    ; 0056bb2c
    MOVSD ES:EDI,ESI                    ; 0056bb2d
    MOVSD ES:EDI,ESI                    ; 0056bb2e
    LEA EAX,[ESP + 0x78]                ; 0056bb2f
    LEA ESI,[ESP + 0x14]                ; 0056bb33
    CMP ESI,EAX                         ; 0056bb37
    JZ 0x0056bb56                       ; 0056bb39
        ;   XREF to: 0056bb56 (CONDITIONAL_JUMP)  ; LAB_0056bb56
    MOV EAX,dword ptr [ESP + 0x78]      ; 0056bb3b
    MOV dword ptr [ESP + 0x14],EAX      ; 0056bb3f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0056bb43
    MOV dword ptr [ESP + 0x18],EAX      ; 0056bb47
    MOV EAX,dword ptr [ESP + 0x80]      ; 0056bb4b
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056bb52
    MOV EAX,[0x00603b28]                ; 0056bb56 | g_CDemonSetPtr
        ;   Label: LAB_0056bb56
    ADD EAX,0x14d138                    ; 0056bb5b
    PUSH EAX                            ; 0056bb60 | g_CDemonSetInstance.collision_impact_position.x
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0056bb61
    PUSH EAX                            ; 0056bb68
    LEA ESI,[ESP + 0x128]               ; 0056bb69
    LEA EDI,[ESP + 0x74]                ; 0056bb70
    CALL core_actor.cpp_FUN_00408bf0    ; 0056bb74
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x128]               ; 0056bb79
    ADD ESP,0x8                         ; 0056bb80
    MOVSD ES:EDI,ESI                    ; 0056bb83
    MOVSD ES:EDI,ESI                    ; 0056bb84
    MOVSD ES:EDI,ESI                    ; 0056bb85
    LEA EAX,[ESP + 0x24]                ; 0056bb86
    LEA ESI,[ESP + 0x6c]                ; 0056bb8a
    CMP EAX,ESI                         ; 0056bb8e
    JZ 0x0056bbaa                       ; 0056bb90
        ;   XREF to: 0056bbaa (CONDITIONAL_JUMP)  ; LAB_0056bbaa
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0056bb92
    MOV dword ptr [ESP + 0x24],EAX      ; 0056bb96
    MOV EAX,dword ptr [ESP + 0x70]      ; 0056bb9a
    MOV dword ptr [ESP + 0x28],EAX      ; 0056bb9e
    MOV EAX,dword ptr [ESP + 0x74]      ; 0056bba2
    MOV dword ptr [ESP + 0x2c],EAX      ; 0056bba6
    MOV EDX,0x65                        ; 0056bbaa
        ;   Label: LAB_0056bbaa
    MOV EAX,dword ptr [EBX + 0x56c]     ; 0056bbaf
    MOV ECX,0x3e19999a                  ; 0056bbb5
    MOV dword ptr [ESP + 0x30],EAX      ; 0056bbba
    MOV dword ptr [ESP + 0x38],EDX      ; 0056bbbe
    MOV dword ptr [ESP + 0x34],ECX      ; 0056bbc2
    MOV dword ptr [ESP + 0x3c],EBX      ; 0056bbc6
    PUSH EBX                            ; 0056bbca
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056bbcb
    CALL dword ptr [EAX + 0x94]         ; 0056bbd1
    ADD ESP,0x4                         ; 0056bbd7
    MOV dword ptr [ESP + 0x40],EAX      ; 0056bbda
    LEA EAX,[ESP + 0x8]                 ; 0056bbde
    MOV ESI,dword ptr [ESP + 0x1b8]     ; 0056bbe2
    PUSH EAX                            ; 0056bbe9
    MOV EDI,dword ptr [ESP + 0x1bc]     ; 0056bbea
    MOV ESI,dword ptr [ESI + 0x154]     ; 0056bbf1
    PUSH EDI                            ; 0056bbf7
    CALL dword ptr [ESI + 0x108]        ; 0056bbf8
    MOV EAX,dword ptr [EBX + 0x2e4]     ; 0056bbfe
    ADD ESP,0x8                         ; 0056bc04
    TEST EAX,EAX                        ; 0056bc07
    JZ 0x0056b69f                       ; 0056bc09
        ;   XREF to: 0056b69f (CONDITIONAL_JUMP)  ; LAB_0056b69f
    MOV EAX,[0x00603b28]                ; 0056bc0f | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0056bc14 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0056bc1a
    PUSH EAX                            ; 0056bc1b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0056bc1c
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056bc21
    JMP 0x0056bcb5                      ; 0056bc24
        ;   XREF to: 0056bcb5 (UNCONDITIONAL_JUMP)  ; LAB_0056bcb5
    PUSH EDI                            ; 0056bc29
        ;   Label: LAB_0056bc29
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0 ; 0056bc2a
        ;   XREF to: 004cc5d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0056bc2f
    TEST EAX,EAX                        ; 0056bc32
    JZ 0x0056b69f                       ; 0056bc34
        ;   XREF to: 0056b69f (CONDITIONAL_JUMP)  ; LAB_0056b69f
    MOV EAX,[0x00603b28]                ; 0056bc3a | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 0056bc3f
    PUSH EAX                            ; 0056bc44 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 0056bc45
    CALL core_glass.cpp_FUN_004cc040    ; 0056bc46
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004cc040()
    ADD ESP,0x8                         ; 0056bc4b
    JMP 0x0056bcb5                      ; 0056bc4e
        ;   XREF to: 0056bcb5 (UNCONDITIONAL_JUMP)  ; LAB_0056bcb5
    PUSH ESI                            ; 0056bc50
        ;   Label: LAB_0056bc50
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0 ; 0056bc51
        ;   XREF to: 0056edc0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 0056bc56
    PUSH EBX                            ; 0056bc59
    PUSH ESI                            ; 0056bc5a
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0 ; 0056bc5b
        ;   XREF to: 0056ede0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056bc60
    TEST EAX,EAX                        ; 0056bc63
    JZ 0x0056bc94                       ; 0056bc65
        ;   XREF to: 0056bc94 (CONDITIONAL_JUMP)  ; LAB_0056bc94
    PUSH EBX                            ; 0056bc67
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056bc68
    CALL dword ptr [EAX + 0xec]         ; 0056bc6e
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0056bc74
    FLD float ptr [ESP + 0x1c0]         ; 0056bc7b
    ADD ESP,0x4                         ; 0056bc82
    SUB ESP,0x4                         ; 0056bc85
    FSTP float ptr [ESP]                ; 0056bc88
    PUSH ESI                            ; 0056bc8b
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20 ; 0056bc8c
        ;   XREF to: 0056ee20 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0056bc91
    MOV EDI,dword ptr [ESP + 0x1a8]     ; 0056bc94
        ;   Label: LAB_0056bc94
    PUSH EDI                            ; 0056bc9b
    MOV EAX,[0x00603b28]                ; 0056bc9c | g_CDemonSetPtr
    PUSH EAX                            ; 0056bca1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0056bca2
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056bca7
    JMP 0x0056bcb5                      ; 0056bcaa
        ;   XREF to: 0056bcb5 (UNCONDITIONAL_JUMP)  ; LAB_0056bcb5
    PUSH ESI                            ; 0056bcac
        ;   Label: LAB_0056bcac
    CALL core_crate.cpp_FUN_004461c0    ; 0056bcad
        ;   XREF to: 004461c0 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_004461c0(CCrate * this_ptr)
    ADD ESP,0x4                         ; 0056bcb2
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 0056bcb5
        ;   Label: LAB_0056bcb5
    INC ECX                             ; 0056bcbc
    MOV dword ptr [ESP + 0x1b0],ECX     ; 0056bcbd
    CMP ECX,0x4                         ; 0056bcc4
    JL 0x0056b65f                       ; 0056bcc7
        ;   XREF to: 0056b65f (CONDITIONAL_JUMP)  ; LAB_0056b65f
    JMP 0x0056b69f                      ; 0056bccd
        ;   XREF to: 0056b69f (UNCONDITIONAL_JUMP)  ; LAB_0056b69f
    MOV EAX,[0x00603b28]                ; 0056bcd2 | g_CDemonSetPtr
        ;   Label: LAB_0056bcd2
    PUSH ECX                            ; 0056bcd7
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 0056bcd8 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 0056bcde
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 0056bcdf | g_CDemonSetInstance.ground_type
    PUSH EDX                            ; 0056bce5
    LEA ESI,[EAX + 0x14d128]            ; 0056bce6
    PUSH ESI                            ; 0056bcec | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 0056bced
    PUSH EAX                            ; 0056bcf2 | g_CDemonSetInstance.collision_impact_position.x
    MOV ECX,dword ptr [0x005fc5a0]      ; 0056bcf3 | DAT_005fc5a0
    PUSH ECX                            ; 0056bcf9
    CALL core_fire.cpp_FUN_004a2090     ; 0056bcfa
        ;   XREF to: 004a2090 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a2090()
    ADD ESP,0x18                        ; 0056bcff
    JMP 0x0056b69f                      ; 0056bd02
        ;   XREF to: 0056b69f (UNCONDITIONAL_JUMP)  ; LAB_0056b69f

