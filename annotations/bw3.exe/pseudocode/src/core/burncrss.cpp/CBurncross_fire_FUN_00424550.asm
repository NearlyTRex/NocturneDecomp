; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_burncrss_cpp_CBurncross_fire_FUN_00424550(CBurncross *this_ptr)
;
; Parameters:
; CBurncross *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_wp_nomana_wav_005b78e7
;   TerminatedCString s_wp_burningcross_wav_005b78f5
;   TerminatedCString s_wp_burningcross_scorch_w_005b7909
;   undefined4 DAT_005b7926
;   undefined4 DAT_005b792e
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ray_origin.x
;   undefined4 g_CDemonSetInstance.ray_origin.y
;   undefined4 g_CDemonSetInstance.ray_origin.z
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_FUN_0042fbd0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_fire.cpp_FUN_004a2090
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0
;   core_glass.cpp_FUN_004cc040
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424550
        ;   Label: core_burncrss.cpp_CBurncross_fire_FUN_00424550
    PUSH ESI                            ; 00424551
    PUSH EDI                            ; 00424552
    PUSH EBP                            ; 00424553
    MOV EBP,ESP                         ; 00424554
    SUB ESP,0x174                       ; 00424556
    AND ESP,0xfffffff8                  ; 0042455c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042455f
    MOV dword ptr [EAX + 0x59c],0x1     ; 00424562
    FLDZ                                ; 0042456c
    FCOMP float ptr [EAX + 0x594]       ; 0042456e
    FNSTSW AX                           ; 00424574
    SAHF                                ; 00424576
    JNC 0x00424585                      ; 00424577
        ;   XREF to: 00424585 (CONDITIONAL_JUMP)  ; LAB_00424585
    MOV EAX,0x1                         ; 00424579
    MOV ESP,EBP                         ; 0042457e
    POP EBP                             ; 00424580
    POP EDI                             ; 00424581
    POP ESI                             ; 00424582
    POP EBX                             ; 00424583
    RET                                 ; 00424584
    MOV EDX,dword ptr [EBP + 0x14]      ; 00424585
        ;   Label: LAB_00424585
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424588
    PUSH EDX                            ; 0042458b
    MOV EAX,dword ptr [EAX + 0x154]     ; 0042458c
    LEA ESI,[ESP + 0xa8]                ; 00424592
    LEA EDI,[ESP + 0xd8]                ; 00424599
    CALL dword ptr [EAX + 0xe0]         ; 004245a0
    LEA ESI,[ESP + 0xa8]                ; 004245a6
    ADD ESP,0x4                         ; 004245ad
    LEA EAX,[ESP + 0xd4]                ; 004245b0
    MOV ECX,dword ptr [EBP + 0x14]      ; 004245b7
    PUSH EAX                            ; 004245ba
    MOVSD ES:EDI,ESI                    ; 004245bb
    MOVSD ES:EDI,ESI                    ; 004245bc
    MOVSD ES:EDI,ESI                    ; 004245bd
    PUSH ECX                            ; 004245be
    LEA ESI,[ESP + 0x7c]                ; 004245bf
    CALL core_actor.cpp_FUN_00408b80    ; 004245c3
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004245c8
    LEA EDI,[ESP + 0xbc]                ; 004245cb
    MOV EBX,dword ptr [EBP + 0x14]      ; 004245d2
    LEA ESI,[ESP + 0x74]                ; 004245d5
    PUSH EBX                            ; 004245d9
    MOVSD ES:EDI,ESI                    ; 004245da
    MOVSD ES:EDI,ESI                    ; 004245db
    MOVSD ES:EDI,ESI                    ; 004245dc
    CALL core_weapon.cpp_CWeapon_fire_FUN_0057b880 ; 004245dd
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0057b880(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004245e2
    TEST EAX,EAX                        ; 004245e5
    JZ 0x00424c3b                       ; 004245e7
        ;   XREF to: 00424c3b (CONDITIONAL_JUMP)  ; LAB_00424c3b
    MOV EDX,dword ptr [EBX + 0x5a4]     ; 004245ed
    PUSH EDX                            ; 004245f3
    CALL sound_sndmain.cpp_FUN_00556700 ; 004245f4
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004245f9
    TEST EAX,EAX                        ; 004245fc
    JZ 0x00424c77                       ; 004245fe
        ;   XREF to: 00424c77 (CONDITIONAL_JUMP)  ; LAB_00424c77
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424604
        ;   Label: LAB_00424604
    MOV dword ptr [EAX + 0x594],0x3e800000 ; 00424607
    MOV EAX,dword ptr [EAX + 0x2e8]     ; 00424611
    XOR ESI,ESI                         ; 00424617
    MOV dword ptr [ESP + 0xa0],EAX      ; 00424619
    LEA EAX,[ESP + 0x98]                ; 00424620
    MOV dword ptr [ESP + 0x98],ESI      ; 00424627
    PUSH EAX                            ; 0042462e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042462f
    MOV dword ptr [ESP + 0xa0],ESI      ; 00424632
    PUSH EAX                            ; 00424639
    LEA ESI,[ESP + 0x4c]                ; 0042463a
    LEA EDI,[ESP + 0xe8]                ; 0042463e
    CALL core_actor.cpp_FUN_00408b00    ; 00424645
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 0042464a
    LEA ESI,[ESP + 0x44]                ; 0042464d
    FLD float ptr [ESP + 0xbc]          ; 00424651
    FLD float ptr [ESP + 0xc0]          ; 00424658
    FLD float ptr [ESP + 0xc4]          ; 0042465f
    MOVSD ES:EDI,ESI                    ; 00424666
    MOVSD ES:EDI,ESI                    ; 00424667
    MOVSD ES:EDI,ESI                    ; 00424668
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424669
    LEA EDI,[ESP + 0x140]               ; 0042466c
    LEA ESI,[ESP + 0x8c]                ; 00424673
    FXCH ST2                            ; 0042467a
    FADD float ptr [ESP + 0xe0]         ; 0042467c
    FXCH                                ; 00424683
    FADD float ptr [ESP + 0xe4]         ; 00424685
    FXCH ST2                            ; 0042468c
    FADD float ptr [ESP + 0xe8]         ; 0042468e
    FXCH                                ; 00424695
    FSTP float ptr [ESP + 0x8c]         ; 00424697
    FXCH                                ; 0042469e
    FSTP float ptr [ESP + 0x90]         ; 004246a0
    FSTP float ptr [ESP + 0x94]         ; 004246a7
    MOVSD ES:EDI,ESI                    ; 004246ae
    MOVSD ES:EDI,ESI                    ; 004246af
    MOVSD ES:EDI,ESI                    ; 004246b0
    FLD float ptr [EAX + 0x2e8]         ; 004246b1
    FDIVR double ptr [0x005b7926]       ; 004246b7 | DAT_005b7926
    FLD float ptr [ESP + 0xe0]          ; 004246bd
    FXCH                                ; 004246c4
    FSTP float ptr [ESP + 0x154]        ; 004246c6
    FMUL float ptr [ESP + 0x154]        ; 004246cd
    FLD float ptr [ESP + 0xe4]          ; 004246d4
    FMUL float ptr [ESP + 0x154]        ; 004246db
    FLD float ptr [ESP + 0xe8]          ; 004246e2
    FMUL float ptr [ESP + 0x154]        ; 004246e9
    MOV EDX,dword ptr [0x00603b28]      ; 004246f0 | g_CDemonSetPtr
    FLD float ptr [ESP + 0xbc]          ; 004246f6
    FLD float ptr [ESP + 0xc0]          ; 004246fd
    FLD float ptr [ESP + 0xc4]          ; 00424704
    LEA EDI,[ESP + 0x128]               ; 0042470b
    LEA ESI,[ESP + 0xec]                ; 00424712
    FXCH ST5                            ; 00424719
    FSTP float ptr [ESP + 0xec]         ; 0042471b
    FXCH ST3                            ; 00424722
    FSTP float ptr [ESP + 0xf0]         ; 00424724
    FXCH                                ; 0042472b
    FSTP float ptr [ESP + 0xf4]         ; 0042472d
    MOVSD ES:EDI,ESI                    ; 00424734
    MOVSD ES:EDI,ESI                    ; 00424735
    MOVSD ES:EDI,ESI                    ; 00424736
    PUSH EDX                            ; 00424737 | g_CDemonSetInstance
    LEA EDI,[ESP + 0x54]                ; 00424738
    LEA ESI,[ESP + 0x6c]                ; 0042473c
    FSUB float ptr [ESP + 0x12c]        ; 00424740
    FXCH                                ; 00424747
    FSUB float ptr [ESP + 0x130]        ; 00424749
    FXCH ST2                            ; 00424750
    FSUB float ptr [ESP + 0x134]        ; 00424752
    FXCH                                ; 00424759
    FSTP float ptr [ESP + 0x6c]         ; 0042475b
    FXCH                                ; 0042475f
    FSTP float ptr [ESP + 0x70]         ; 00424761
    FSTP float ptr [ESP + 0x74]         ; 00424765
    MOVSD ES:EDI,ESI                    ; 00424769
    MOVSD ES:EDI,ESI                    ; 0042476a
    MOVSD ES:EDI,ESI                    ; 0042476b
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0042476c
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00424771
    PUSH 0x1                            ; 00424774
    MOV ECX,dword ptr [0x00603b28]      ; 00424776 | g_CDemonSetPtr
    PUSH ECX                            ; 0042477c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 0042477d
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00424782
    MOV EBX,dword ptr [EBP + 0x14]      ; 00424785
    PUSH EBX                            ; 00424788
    MOV ESI,dword ptr [0x00603b28]      ; 00424789 | g_CDemonSetPtr
    PUSH ESI                            ; 0042478f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00424790
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00424795
    MOV EDI,dword ptr [0x00603b28]      ; 00424798 | g_CDemonSetPtr
    PUSH EDI                            ; 0042479e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0 ; 0042479f
        ;   XREF to: 0053ebd0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(CDemonSet * this_ptr)
    MOV EDX,dword ptr [EBX + 0x304]     ; 004247a4
    ADD ESP,0x4                         ; 004247aa
    TEST EDX,EDX                        ; 004247ad
    JNZ 0x00424ca2                      ; 004247af
        ;   XREF to: 00424ca2 (CONDITIONAL_JUMP)  ; LAB_00424ca2
    XOR EDI,EDI                         ; 004247b5
        ;   Label: LAB_004247b5
    LEA EAX,[ESP + 0x140]               ; 004247b7
        ;   Label: LAB_004247b7
    PUSH EAX                            ; 004247be
    LEA EAX,[ESP + 0x54]                ; 004247bf
    PUSH EAX                            ; 004247c3
    MOV ESI,dword ptr [0x00603b28]      ; 004247c4 | g_CDemonSetPtr
    PUSH ESI                            ; 004247ca | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 004247cb
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x17c],EAX     ; 004247d0
    FLD float ptr [ESP + 0x17c]         ; 004247d7
    ADD ESP,0xc                         ; 004247de
    FLDZ                                ; 004247e1
    FXCH                                ; 004247e3
    FSTP double ptr [ESP]               ; 004247e5
    FCOMP double ptr [ESP]              ; 004247e8
    FNSTSW AX                           ; 004247eb
    SAHF                                ; 004247ed
    JA 0x00424c20                       ; 004247ee
        ;   XREF to: 00424c20 (CONDITIONAL_JUMP)  ; LAB_00424c20
    FLD1                                ; 004247f4
    FCOMP double ptr [ESP]              ; 004247f6
    FNSTSW AX                           ; 004247f9
    SAHF                                ; 004247fb
    JC 0x00424c20                       ; 004247fc
        ;   XREF to: 00424c20 (CONDITIONAL_JUMP)  ; LAB_00424c20
    MOV EAX,[0x007e2cec]                ; 00424802 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 00424807
    MOV EAX,[0x00603b28]                ; 00424808 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0042480d | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00424813
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00424814
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00424819
    MOV dword ptr [ESP + 0x16c],EAX     ; 0042481c
    TEST EAX,EAX                        ; 00424823
    JZ 0x00424844                       ; 00424825
        ;   XREF to: 00424844 (CONDITIONAL_JUMP)  ; LAB_00424844
    PUSH EAX                            ; 00424827
    MOV EBX,dword ptr [EAX + 0x154]     ; 00424828
    CALL dword ptr [EBX + 0x10c]        ; 0042482e
    ADD ESP,0x4                         ; 00424834
    TEST EAX,EAX                        ; 00424837
    JLE 0x00424844                      ; 00424839
        ;   XREF to: 00424844 (CONDITIONAL_JUMP)  ; LAB_00424844
    XOR ECX,ECX                         ; 0042483b
    MOV dword ptr [ESP + 0x16c],ECX     ; 0042483d
    MOV EBX,dword ptr [0x01d22e04]      ; 00424844 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00424844
    MOV EAX,[0x00603b28]                ; 0042484a | g_CDemonSetPtr
    PUSH EBX                            ; 0042484f
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 00424850 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 00424856
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00424857
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0042485c
    MOV ESI,EAX                         ; 0042485f
    MOV EAX,[0x02cfd894]                ; 00424861 | g_CTriggerClassInfo.name_hash
    PUSH EAX                            ; 00424866
    MOV EAX,[0x00603b28]                ; 00424867 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0042486c | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00424872
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00424873
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00424878
    MOV EBX,EAX                         ; 0042487b
    MOV ECX,dword ptr [ESP + 0x16c]     ; 0042487d
    MOV dword ptr [ESP + 0x15c],EAX     ; 00424884
    TEST ECX,ECX                        ; 0042488b
    JZ 0x00424d04                       ; 0042488d
        ;   XREF to: 00424d04 (CONDITIONAL_JUMP)  ; LAB_00424d04
    MOV ESI,dword ptr [0x01c5bc48]      ; 00424893 | g_CEnemyClassInfo.name_hash
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424899
    PUSH ESI                            ; 0042489c
    MOV EDI,dword ptr [EAX + 0x304]     ; 0042489d
    PUSH EDI                            ; 004248a3
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004248a4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004248a9
    TEST EAX,EAX                        ; 004248ac
    JZ 0x00424cb7                       ; 004248ae
        ;   XREF to: 00424cb7 (CONDITIONAL_JUMP)  ; LAB_00424cb7
    LEA EAX,[ESP + 0x8]                 ; 004248b4
        ;   Label: LAB_004248b4
    PUSH EAX                            ; 004248b8
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004248b9
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,[0x00603b28]                ; 004248be | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004248c3
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 004248c6 | g_CDemonSetInstance.collision_part_index
    MOV ECX,dword ptr [EBP + 0x14]      ; 004248cc
    MOV dword ptr [ESP + 0x8],EAX       ; 004248cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004248d3
    PUSH ECX                            ; 004248d6
    MOV EAX,dword ptr [EAX + 0x154]     ; 004248d7
    MOV EBX,0x3ecccccd                  ; 004248dd
    LEA EDI,[ESP + 0xcc]                ; 004248e2
    CALL dword ptr [EAX + 0xec]         ; 004248e9
    MOV dword ptr [ESP + 0x174],EAX     ; 004248ef
    LEA ESI,[ESP + 0x114]               ; 004248f6
    FLD float ptr [ESP + 0x174]         ; 004248fd
    ADD ESP,0x4                         ; 00424904
    MOV EAX,[0x00603b28]                ; 00424907 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x10],EBX      ; 0042490c
    LEA EBX,[EAX + 0x14d11c]            ; 00424910
    FSTP float ptr [ESP + 0xc]          ; 00424916
    FLD float ptr [EBX]                 ; 0042491a | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EBX + 0x4]           ; 0042491c | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EBX + 0x8]           ; 0042491f | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 00424922
    FSUB float ptr [EAX + 0x14d110]     ; 00424924 | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 0042492a
    FSUB float ptr [EAX + 0x14d114]     ; 0042492c | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 00424932
    FSUB float ptr [EAX + 0x14d118]     ; 00424934 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 0042493a
    FSTP float ptr [ESP + 0x110]        ; 0042493c
    FXCH                                ; 00424943
    FSTP float ptr [ESP + 0x114]        ; 00424945
    FSTP float ptr [ESP + 0x118]        ; 0042494c
    MOVSD ES:EDI,ESI                    ; 00424953
    MOVSD ES:EDI,ESI                    ; 00424954
    MOVSD ES:EDI,ESI                    ; 00424955
    FLD float ptr [ESP + 0xcc]          ; 00424956
    FMUL ST0                            ; 0042495d
    FLD float ptr [ESP + 0xc8]          ; 0042495f
    FMUL ST0                            ; 00424966
    FADDP                               ; 00424968
    FLD float ptr [ESP + 0xd0]          ; 0042496a
    FMUL ST0                            ; 00424971
    FADDP                               ; 00424973
    FSQRT                               ; 00424975
    FDIVR double ptr [0x005b792e]       ; 00424977 | DAT_005b792e
    FLD float ptr [ESP + 0xc8]          ; 0042497d
    FXCH                                ; 00424984
    FSTP float ptr [ESP + 0x158]        ; 00424986
    FMUL float ptr [ESP + 0x158]        ; 0042498d
    FLD float ptr [ESP + 0xcc]          ; 00424994
    FMUL float ptr [ESP + 0x158]        ; 0042499b
    FLD float ptr [ESP + 0xd0]          ; 004249a2
    FMUL float ptr [ESP + 0x158]        ; 004249a9
    LEA EBX,[ESP + 0x11c]               ; 004249b0
    LEA EDI,[ESP + 0x11c]               ; 004249b7
    LEA ESI,[ESP + 0xf8]                ; 004249be
    LEA EAX,[ESP + 0x14]                ; 004249c5
    FXCH ST2                            ; 004249c9
    FSTP float ptr [ESP + 0xf8]         ; 004249cb
    FSTP float ptr [ESP + 0xfc]         ; 004249d2
    FSTP float ptr [ESP + 0x100]        ; 004249d9
    MOVSD ES:EDI,ESI                    ; 004249e0
    MOVSD ES:EDI,ESI                    ; 004249e1
    MOVSD ES:EDI,ESI                    ; 004249e2
    CMP EAX,EBX                         ; 004249e3
    JZ 0x00424a08                       ; 004249e5
        ;   XREF to: 00424a08 (CONDITIONAL_JUMP)  ; LAB_00424a08
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004249e7
    MOV dword ptr [ESP + 0x14],EAX      ; 004249ee
    MOV EAX,dword ptr [ESP + 0x120]     ; 004249f2
    MOV dword ptr [ESP + 0x18],EAX      ; 004249f9
    MOV EAX,dword ptr [ESP + 0x124]     ; 004249fd
    MOV dword ptr [ESP + 0x1c],EAX      ; 00424a04
    MOV EAX,[0x00603b28]                ; 00424a08 | g_CDemonSetPtr
        ;   Label: LAB_00424a08
    ADD EAX,0x14d138                    ; 00424a0d
    PUSH EAX                            ; 00424a12 | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [ESP + 0x170]     ; 00424a13
    LEA EDI,[ESP + 0xb4]                ; 00424a1a
    PUSH ESI                            ; 00424a21
    LEA ESI,[ESP + 0x10c]               ; 00424a22
    LEA EBX,[ESP + 0x2c]                ; 00424a29
    CALL core_actor.cpp_FUN_00408bf0    ; 00424a2d
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x10c]               ; 00424a32
    ADD ESP,0x8                         ; 00424a39
    LEA EAX,[ESP + 0xb0]                ; 00424a3c
    MOVSD ES:EDI,ESI                    ; 00424a43
    MOVSD ES:EDI,ESI                    ; 00424a44
    MOVSD ES:EDI,ESI                    ; 00424a45
    CMP EBX,EAX                         ; 00424a46
    JZ 0x00424a6b                       ; 00424a48
        ;   XREF to: 00424a6b (CONDITIONAL_JUMP)  ; LAB_00424a6b
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00424a4a
    MOV dword ptr [ESP + 0x24],EAX      ; 00424a51
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00424a55
    MOV dword ptr [ESP + 0x28],EAX      ; 00424a5c
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00424a60
    MOV dword ptr [ESP + 0x2c],EAX      ; 00424a67
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424a6b
        ;   Label: LAB_00424a6b
    MOV EAX,dword ptr [EAX + 0x56c]     ; 00424a6e
    MOV EDI,0x66                        ; 00424a74
    MOV dword ptr [ESP + 0x30],EAX      ; 00424a79
    MOV EAX,0x3e19999a                  ; 00424a7d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00424a82
    MOV dword ptr [ESP + 0x34],EAX      ; 00424a85
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424a89
    MOV dword ptr [ESP + 0x38],EDI      ; 00424a8c
    MOV dword ptr [ESP + 0x3c],EAX      ; 00424a90
    PUSH EDX                            ; 00424a94
    MOV EAX,dword ptr [EAX + 0x154]     ; 00424a95
    CALL dword ptr [EAX + 0x94]         ; 00424a9b
    ADD ESP,0x4                         ; 00424aa1
    LEA EBX,[ESP + 0x8]                 ; 00424aa4
    MOV ECX,dword ptr [ESP + 0x16c]     ; 00424aa8
    PUSH EBX                            ; 00424aaf
    MOV dword ptr [ESP + 0x44],EAX      ; 00424ab0
    MOV EAX,dword ptr [ESP + 0x170]     ; 00424ab4
    PUSH ECX                            ; 00424abb
    MOV EAX,dword ptr [EAX + 0x154]     ; 00424abc
    CALL dword ptr [EAX + 0x108]        ; 00424ac2
    MOV EBX,dword ptr [0x00603b28]      ; 00424ac8 | g_CDemonSetPtr
    LEA EAX,[ESP + 0x88]                ; 00424ace
    ADD EBX,0x14d138                    ; 00424ad5
    ADD ESP,0x8                         ; 00424adb
    CMP EAX,EBX                         ; 00424ade
    JNZ 0x00424ce2                      ; 00424ae0
        ;   XREF to: 00424ce2 (CONDITIONAL_JUMP)  ; LAB_00424ce2
    XOR EBX,EBX                         ; 00424ae6
        ;   Label: LAB_00424ae6
    PUSH 0x40a00000                     ; 00424ae8
        ;   Label: LAB_00424ae8
    PUSH 0xc0a00000                     ; 00424aed
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00424af2
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x154],EAX     ; 00424af7
    ADD ESP,0x8                         ; 00424afe
    PUSH 0x41200000                     ; 00424b01
    PUSH 0x0                            ; 00424b06
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00424b08
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x158],EAX     ; 00424b0d
    ADD ESP,0x8                         ; 00424b14
    PUSH 0x40a00000                     ; 00424b17
    PUSH 0xc0a00000                     ; 00424b1c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00424b21
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x178],EAX     ; 00424b26
    FLD float ptr [ESP + 0x178]         ; 00424b2d
    ADD ESP,0x8                         ; 00424b34
    MOV EAX,dword ptr [ESP + 0x150]     ; 00424b37
    MOV dword ptr [ESP + 0x164],EAX     ; 00424b3e
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00424b45
    FSTP float ptr [ESP + 0x168]        ; 00424b4c
    MOV dword ptr [ESP + 0x160],EAX     ; 00424b53
    MOV EAX,dword ptr [ESP + 0x168]     ; 00424b5a
    MOV dword ptr [ESP + 0x134],EAX     ; 00424b61
    MOV EAX,dword ptr [ESP + 0x164]     ; 00424b68
    MOV dword ptr [ESP + 0x138],EAX     ; 00424b6f
    MOV EAX,dword ptr [ESP + 0x160]     ; 00424b76
    LEA ESI,[ESP + 0x5c]                ; 00424b7d
    MOV dword ptr [ESP + 0x13c],EAX     ; 00424b81
    LEA EAX,[ESP + 0x134]               ; 00424b88
    CMP ESI,EAX                         ; 00424b8f
    JZ 0x00424bb4                       ; 00424b91
        ;   XREF to: 00424bb4 (CONDITIONAL_JUMP)  ; LAB_00424bb4
    MOV EAX,dword ptr [ESP + 0x168]     ; 00424b93
    MOV dword ptr [ESP + 0x5c],EAX      ; 00424b9a
    MOV EAX,dword ptr [ESP + 0x164]     ; 00424b9e
    MOV dword ptr [ESP + 0x60],EAX      ; 00424ba5
    MOV EAX,dword ptr [ESP + 0x160]     ; 00424ba9
    MOV dword ptr [ESP + 0x64],EAX      ; 00424bb0
    PUSH 0xffff                         ; 00424bb4
        ;   Label: LAB_00424bb4
    PUSH 0x4                            ; 00424bb9
    PUSH 0x10000                        ; 00424bbb
    PUSH 0x20000                        ; 00424bc0
    LEA EAX,[ESP + 0x6c]                ; 00424bc5
    PUSH EAX                            ; 00424bc9
    LEA EAX,[ESP + 0x94]                ; 00424bca
    PUSH EAX                            ; 00424bd1
    MOV ESI,dword ptr [0x005fc5a0]      ; 00424bd2 | DAT_005fc5a0
    PUSH ESI                            ; 00424bd8
    INC EBX                             ; 00424bd9
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 00424bda
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00424bdf
    CMP EBX,0x10                        ; 00424be2
    JL 0x00424ae8                       ; 00424be5
        ;   XREF to: 00424ae8 (CONDITIONAL_JUMP)  ; LAB_00424ae8
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00424beb
    CMP dword ptr [EAX + 0x27c0],0x0    ; 00424bf2
    JZ 0x00424c20                       ; 00424bf9
        ;   XREF to: 00424c20 (CONDITIONAL_JUMP)  ; LAB_00424c20
    PUSH 0x40000000                     ; 00424bfb
    PUSH 0x1                            ; 00424c00
    PUSH 0x3f800000                     ; 00424c02
    PUSH 0x0                            ; 00424c07
    PUSH 0x0                            ; 00424c09
    LEA EAX,[ESP + 0x38]                ; 00424c0b
    PUSH EAX                            ; 00424c0f
    MOV EAX,dword ptr [ESP + 0x184]     ; 00424c10
    PUSH EAX                            ; 00424c17
    CALL core_charactr.cpp_FUN_0042fbd0 ; 00424c18
        ;   XREF to: 0042fbd0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fbd0()
    ADD ESP,0x1c                        ; 00424c1d
    MOV EDX,dword ptr [0x00603b28]      ; 00424c20 | g_CDemonSetPtr
        ;   Label: LAB_00424c20
    PUSH EDX                            ; 00424c26 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00424c27
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    MOV EAX,0x1                         ; 00424c2c
    ADD ESP,0x4                         ; 00424c31
    MOV ESP,EBP                         ; 00424c34
    POP EBP                             ; 00424c36
    POP EDI                             ; 00424c37
    POP ESI                             ; 00424c38
    POP EBX                             ; 00424c39
    RET                                 ; 00424c3a
    LEA EAX,[ESP + 0xbc]                ; 00424c3b
        ;   Label: LAB_00424c3b
    PUSH EAX                            ; 00424c42
    PUSH 0x5b78e7                       ; 00424c43 | = "wp_nomana.wav"
    PUSH EBX                            ; 00424c48
    MOV EDI,dword ptr [0x006045f8]      ; 00424c49 | DAT_006045f8
    PUSH EDI                            ; 00424c4f
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 00424c50
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00424c55
    MOV dword ptr [EBX + 0x59c],0x0     ; 00424c58
    MOV EAX,EBX                         ; 00424c62
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 00424c64
    XOR EAX,EBX                         ; 00424c6e
    MOV ESP,EBP                         ; 00424c70
    POP EBP                             ; 00424c72
    POP EDI                             ; 00424c73
    POP ESI                             ; 00424c74
    POP EBX                             ; 00424c75
    RET                                 ; 00424c76
    LEA EAX,[ESP + 0xbc]                ; 00424c77
        ;   Label: LAB_00424c77
    PUSH EAX                            ; 00424c7e
    PUSH 0x5b78f5                       ; 00424c7f | = "wp_burningcross.wav"
    PUSH EBX                            ; 00424c84
    MOV EBX,dword ptr [0x006045f8]      ; 00424c85 | DAT_006045f8
    PUSH EBX                            ; 00424c8b
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 00424c8c
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00424c91
    MOV EBX,dword ptr [EBP + 0x14]      ; 00424c94
    MOV dword ptr [EBX + 0x5a4],EAX     ; 00424c97
    JMP 0x00424604                      ; 00424c9d
        ;   XREF to: 00424604 (UNCONDITIONAL_JUMP)  ; LAB_00424604
    PUSH EDX                            ; 00424ca2
        ;   Label: LAB_00424ca2
    MOV EBX,dword ptr [0x00603b28]      ; 00424ca3 | g_CDemonSetPtr
    PUSH EBX                            ; 00424ca9 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00424caa
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00424caf
    JMP 0x004247b5                      ; 00424cb2
        ;   XREF to: 004247b5 (UNCONDITIONAL_JUMP)  ; LAB_004247b5
    MOV EDX,dword ptr [ESP + 0x16c]     ; 00424cb7
        ;   Label: LAB_00424cb7
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00424cbe
    PUSH EDX                            ; 00424cc5
    MOV EAX,dword ptr [EAX + 0x154]     ; 00424cc6
    CALL dword ptr [EAX + 0xe0]         ; 00424ccc
    ADD ESP,0x4                         ; 00424cd2
    TEST EAX,EAX                        ; 00424cd5
    JNZ 0x00424c20                      ; 00424cd7
        ;   XREF to: 00424c20 (CONDITIONAL_JUMP)  ; LAB_00424c20
    JMP 0x004248b4                      ; 00424cdd
        ;   XREF to: 004248b4 (UNCONDITIONAL_JUMP)  ; LAB_004248b4
    MOV EAX,dword ptr [EBX]             ; 00424ce2 | g_CDemonSetInstance.collision_impact_position.x
        ;   Label: LAB_00424ce2
    MOV dword ptr [ESP + 0x80],EAX      ; 00424ce4
    MOV EAX,dword ptr [EBX + 0x4]       ; 00424ceb | g_CDemonSetInstance.collision_impact_position.y
    MOV dword ptr [ESP + 0x84],EAX      ; 00424cee
    MOV EAX,dword ptr [EBX + 0x8]       ; 00424cf5 | g_CDemonSetInstance.collision_impact_position.z
    MOV dword ptr [ESP + 0x88],EAX      ; 00424cf8
    JMP 0x00424ae6                      ; 00424cff
        ;   XREF to: 00424ae6 (UNCONDITIONAL_JUMP)  ; LAB_00424ae6
    TEST ESI,ESI                        ; 00424d04
        ;   Label: LAB_00424d04
    JNZ 0x00424d70                      ; 00424d06
        ;   XREF to: 00424d70 (CONDITIONAL_JUMP)  ; LAB_00424d70
    TEST EAX,EAX                        ; 00424d08
    JZ 0x00424da4                       ; 00424d0a
        ;   XREF to: 00424da4 (CONDITIONAL_JUMP)  ; LAB_00424da4
    PUSH EAX                            ; 00424d10
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0 ; 00424d11
        ;   XREF to: 0056edc0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 00424d16
    MOV ESI,dword ptr [EBP + 0x14]      ; 00424d19
    PUSH ESI                            ; 00424d1c
    PUSH EBX                            ; 00424d1d
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0 ; 00424d1e
        ;   XREF to: 0056ede0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00424d23
    TEST EAX,EAX                        ; 00424d26
    JZ 0x00424d57                       ; 00424d28
        ;   XREF to: 00424d57 (CONDITIONAL_JUMP)  ; LAB_00424d57
    PUSH ESI                            ; 00424d2a
    MOV EAX,dword ptr [ESI + 0x154]     ; 00424d2b
    CALL dword ptr [EAX + 0xec]         ; 00424d31
    MOV dword ptr [ESP + 0x174],EAX     ; 00424d37
    FLD float ptr [ESP + 0x174]         ; 00424d3e
    ADD ESP,0x4                         ; 00424d45
    SUB ESP,0x4                         ; 00424d48
    FSTP float ptr [ESP]                ; 00424d4b
    PUSH EBX                            ; 00424d4e
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20 ; 00424d4f
        ;   XREF to: 0056ee20 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 00424d54
    MOV ECX,dword ptr [ESP + 0x15c]     ; 00424d57
        ;   Label: LAB_00424d57
    PUSH ECX                            ; 00424d5e
    MOV EBX,dword ptr [0x00603b28]      ; 00424d5f | g_CDemonSetPtr
    PUSH EBX                            ; 00424d65 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00424d66
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00424d6b
    JMP 0x00424d95                      ; 00424d6e
        ;   XREF to: 00424d95 (UNCONDITIONAL_JUMP)  ; LAB_00424d95
    PUSH ESI                            ; 00424d70
        ;   Label: LAB_00424d70
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0 ; 00424d71
        ;   XREF to: 004cc5d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 00424d76
    TEST EAX,EAX                        ; 00424d79
    JZ 0x00424c20                       ; 00424d7b
        ;   XREF to: 00424c20 (CONDITIONAL_JUMP)  ; LAB_00424c20
    MOV EAX,[0x00603b28]                ; 00424d81 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 00424d86
    PUSH EAX                            ; 00424d8b | g_CDemonSetInstance.collision_impact_position.x
    PUSH ESI                            ; 00424d8c
    CALL core_glass.cpp_FUN_004cc040    ; 00424d8d
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004cc040()
    ADD ESP,0x8                         ; 00424d92
    INC EDI                             ; 00424d95
        ;   Label: LAB_00424d95
    CMP EDI,0x4                         ; 00424d96
    JL 0x004247b7                       ; 00424d99
        ;   XREF to: 004247b7 (CONDITIONAL_JUMP)  ; LAB_004247b7
    JMP 0x00424c20                      ; 00424d9f
        ;   XREF to: 00424c20 (UNCONDITIONAL_JUMP)  ; LAB_00424c20
    MOV EAX,[0x00603b28]                ; 00424da4 | g_CDemonSetPtr
        ;   Label: LAB_00424da4
    PUSH 0x1                            ; 00424da9
    MOV EBX,dword ptr [EAX + 0x14d144]  ; 00424dab | g_CDemonSetInstance.collision_actor
    PUSH EBX                            ; 00424db1
    MOV ESI,dword ptr [EAX + 0x14d134]  ; 00424db2 | g_CDemonSetInstance.ground_type
    PUSH ESI                            ; 00424db8
    LEA EBX,[EAX + 0x14d128]            ; 00424db9
    PUSH EBX                            ; 00424dbf | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 00424dc0
    PUSH EAX                            ; 00424dc5 | g_CDemonSetInstance.collision_impact_position.x
    MOV EDI,dword ptr [0x005fc5a0]      ; 00424dc6 | DAT_005fc5a0
    PUSH EDI                            ; 00424dcc
    CALL core_fire.cpp_FUN_004a2090     ; 00424dcd
        ;   XREF to: 004a2090 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a2090()
    ADD ESP,0x18                        ; 00424dd2
    PUSH 0x0                            ; 00424dd5
    PUSH 0x0                            ; 00424dd7
    MOV EAX,[0x00603b28]                ; 00424dd9 | g_CDemonSetPtr
    PUSH 0x3                            ; 00424dde
    LEA EBX,[EAX + 0x14d128]            ; 00424de0
    PUSH EBX                            ; 00424de6 | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 00424de7
    PUSH EAX                            ; 00424dec | g_CDemonSetInstance.collision_impact_position.x
    MOV EAX,[0x005fc5a0]                ; 00424ded | DAT_005fc5a0
    PUSH EAX                            ; 00424df2
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0 ; 00424df3
        ;   XREF to: 004a3af0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    MOV EAX,[0x00603b28]                ; 00424df8 | g_CDemonSetPtr
    ADD ESP,0x18                        ; 00424dfd
    ADD EAX,0x14d138                    ; 00424e00
    PUSH EAX                            ; 00424e05 | g_CDemonSetInstance.collision_impact_position.x
    PUSH 0x5b7909                       ; 00424e06 | = "wp_burningcross_scorch.wav"
    MOV EDX,dword ptr [EBP + 0x14]      ; 00424e0b
    PUSH EDX                            ; 00424e0e
    MOV ECX,dword ptr [0x006045f8]      ; 00424e0f | DAT_006045f8
    PUSH ECX                            ; 00424e15
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 00424e16
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00424e1b
    JMP 0x00424c20                      ; 00424e1e
        ;   XREF to: 00424c20 (UNCONDITIONAL_JUMP)  ; LAB_00424c20

