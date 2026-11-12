; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_blundrbs_cpp_CBlunderbus_fire_FUN_00410490(CBlunderbus *this_ptr)
;
; Parameters:
; CBlunderbus *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_wp_noammo_wav_005b6475
;   TerminatedCString s_RIC_CT0A_WAV_005b6483
;   TerminatedCString s_RIC_CT0B_WAV_005b6490
;   TerminatedCString s_RIC_CT0C_WAV_005b649d
;   TerminatedCString s_RIC_WD0B_WAV_005b64aa
;   TerminatedCString s_RIC_WD0C_WAV_005b64b7
;   TerminatedCString s_RIC_DT_WAV_005b64c4
;   TerminatedCString s_wp_blunderbus_wav_005b64cf
;   undefined4 DAT_005b64e2
;   undefined4 DAT_005b64ea
;   undefined4 DAT_005b64f2
;   undefined4 DAT_005b64fa
;   undefined4 DAT_005b6502
;   undefined4 DAT_005b6506
;   undefined4 DAT_005b650a
;   ... and 30 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_fire.cpp_FUN_004a2090
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0
;   core_glass.cpp_FUN_004cc040
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410490
        ;   Label: core_blundrbs.cpp_CBlunderbus_fire_FUN_00410490
    PUSH ESI                            ; 00410491
    PUSH EDI                            ; 00410492
    PUSH EBP                            ; 00410493
    MOV EBP,ESP                         ; 00410494
    SUB ESP,0x4b8                       ; 00410496
    AND ESP,0xfffffff8                  ; 0041049c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0041049f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004104a2
    PUSH EDX                            ; 004104a5
    MOV EAX,dword ptr [EAX + 0x154]     ; 004104a6
    LEA ESI,[ESP + 0x438]               ; 004104ac
    LEA EDI,[ESP + 0x1f8]               ; 004104b3
    CALL dword ptr [EAX + 0xe0]         ; 004104ba
    LEA ESI,[ESP + 0x438]               ; 004104c0
    ADD ESP,0x4                         ; 004104c7
    LEA EAX,[ESP + 0x1f4]               ; 004104ca
    MOV ECX,dword ptr [EBP + 0x14]      ; 004104d1
    PUSH EAX                            ; 004104d4
    MOVSD ES:EDI,ESI                    ; 004104d5
    MOVSD ES:EDI,ESI                    ; 004104d6
    MOVSD ES:EDI,ESI                    ; 004104d7
    PUSH ECX                            ; 004104d8
    LEA ESI,[ESP + 0x2a4]               ; 004104d9
    CALL core_actor.cpp_FUN_00408b80    ; 004104e0
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004104e5
    LEA EDI,[ESP + 0x44c]               ; 004104e8
    MOV EBX,dword ptr [EBP + 0x14]      ; 004104ef
    LEA ESI,[ESP + 0x29c]               ; 004104f2
    PUSH EBX                            ; 004104f9
    MOVSD ES:EDI,ESI                    ; 004104fa
    MOVSD ES:EDI,ESI                    ; 004104fb
    MOVSD ES:EDI,ESI                    ; 004104fc
    CALL core_weapon.cpp_CWeapon_fire_FUN_0057b880 ; 004104fd
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0057b880(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00410502
    TEST EAX,EAX                        ; 00410505
    JZ 0x00411086                       ; 00410507
        ;   XREF to: 00411086 (CONDITIONAL_JUMP)  ; LAB_00411086
    FLD float ptr [EBX + 0x594]         ; 0041050d
    FMUL float ptr [0x005b64e2]         ; 00410513 | DAT_005b64e2
    FMUL double ptr [0x005b64ea]        ; 00410519 | DAT_005b64ea
    FPTAN                               ; 0041051f
    FSTP ST0                            ; 00410521
    FMUL float ptr [EBX + 0x2e8]        ; 00410523
    MOV EAX,EBX                         ; 00410529
    MOV EDX,dword ptr [EBX + 0x58c]     ; 0041052b
    XOR EAX,EBX                         ; 00410531
    FSTP float ptr [ESP + 0x490]        ; 00410533
    MOV dword ptr [ESP + 0x4a0],EAX     ; 0041053a
    TEST EDX,EDX                        ; 00410541
    JLE 0x004107f6                      ; 00410543
        ;   XREF to: 004107f6 (CONDITIONAL_JUMP)  ; LAB_004107f6
    PUSH 0x40c90fdb                     ; 00410549
        ;   Label: LAB_00410549
    PUSH 0x0                            ; 0041054e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00410550
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4bc],EAX     ; 00410555
    FLD float ptr [ESP + 0x4bc]         ; 0041055c
    ADD ESP,0x8                         ; 00410563
    PUSH dword ptr [ESP + 0x490]        ; 00410566
    PUSH 0x0                            ; 0041056d
    FSTP float ptr [ESP + 0x48c]        ; 0041056f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00410576
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4bc],EAX     ; 0041057b
    FLD float ptr [ESP + 0x4bc]         ; 00410582
    ADD ESP,0x8                         ; 00410589
    FLD float ptr [ESP + 0x484]         ; 0041058c
    FLD ST0                             ; 00410593
    FCOS                                ; 00410595
    FXCH                                ; 00410597
    FSIN                                ; 00410599
    FXCH                                ; 0041059b
    FMUL ST2                            ; 0041059d
    FXCH                                ; 0041059f
    FMULP ST2                           ; 004105a1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004105a3
    FSTP float ptr [ESP + 0x164]        ; 004105a6
    FSTP float ptr [ESP + 0x168]        ; 004105ad
    MOV EAX,dword ptr [EAX + 0x2e8]     ; 004105b4
    MOV dword ptr [ESP + 0x16c],EAX     ; 004105ba
    LEA EAX,[ESP + 0x164]               ; 004105c1
    PUSH EAX                            ; 004105c8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004105c9
    LEA ESI,[ESP + 0xd8]                ; 004105cc
    PUSH EAX                            ; 004105d3
    LEA EDI,[ESP + 0x364]               ; 004105d4
    LEA EBX,[ESP + 0x364]               ; 004105db
    CALL core_actor.cpp_FUN_00408b00    ; 004105e2
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0xdc]                ; 004105e7
    ADD ESP,0x8                         ; 004105ee
    LEA EAX,[ESP + 0x164]               ; 004105f1
    MOVSD ES:EDI,ESI                    ; 004105f8
    MOVSD ES:EDI,ESI                    ; 004105f9
    MOVSD ES:EDI,ESI                    ; 004105fa
    CMP EAX,EBX                         ; 004105fb
    JZ 0x00410629                       ; 004105fd
        ;   XREF to: 00410629 (CONDITIONAL_JUMP)  ; LAB_00410629
    MOV EAX,dword ptr [ESP + 0x35c]     ; 004105ff
    MOV dword ptr [ESP + 0x164],EAX     ; 00410606
    MOV EAX,dword ptr [ESP + 0x360]     ; 0041060d
    MOV dword ptr [ESP + 0x168],EAX     ; 00410614
    MOV EAX,dword ptr [ESP + 0x364]     ; 0041061b
    MOV dword ptr [ESP + 0x16c],EAX     ; 00410622
    FLD float ptr [ESP + 0x44c]         ; 00410629
        ;   Label: LAB_00410629
    FLD float ptr [ESP + 0x450]         ; 00410630
    FLD float ptr [ESP + 0x454]         ; 00410637
    LEA EDI,[ESP + 0x374]               ; 0041063e
    LEA ESI,[ESP + 0x50]                ; 00410645
    MOV EAX,dword ptr [EBP + 0x14]      ; 00410649
    FXCH ST2                            ; 0041064c
    FADD float ptr [ESP + 0x164]        ; 0041064e
    FXCH                                ; 00410655
    FADD float ptr [ESP + 0x168]        ; 00410657
    FXCH ST2                            ; 0041065e
    FADD float ptr [ESP + 0x16c]        ; 00410660
    FXCH                                ; 00410667
    FSTP float ptr [ESP + 0x50]         ; 00410669
    FXCH                                ; 0041066d
    FSTP float ptr [ESP + 0x54]         ; 0041066f
    FSTP float ptr [ESP + 0x58]         ; 00410673
    MOVSD ES:EDI,ESI                    ; 00410677
    MOVSD ES:EDI,ESI                    ; 00410678
    MOVSD ES:EDI,ESI                    ; 00410679
    FLD float ptr [EAX + 0x2e8]         ; 0041067a
    FDIVR double ptr [0x005b651a]       ; 00410680 | DAT_005b651a
    FLD float ptr [ESP + 0x164]         ; 00410686
    FXCH                                ; 0041068d
    FSTP float ptr [ESP + 0x4a8]        ; 0041068f
    FMUL float ptr [ESP + 0x4a8]        ; 00410696
    FLD float ptr [ESP + 0x168]         ; 0041069d
    FMUL float ptr [ESP + 0x4a8]        ; 004106a4
    FLD float ptr [ESP + 0x16c]         ; 004106ab
    FMUL float ptr [ESP + 0x4a8]        ; 004106b2
    FLD float ptr [ESP + 0x44c]         ; 004106b9
    FLD float ptr [ESP + 0x450]         ; 004106c0
    FLD float ptr [ESP + 0x454]         ; 004106c7
    MOV EDX,dword ptr [0x00603b28]      ; 004106ce | g_CDemonSetPtr
    LEA EDI,[ESP + 0xf8]                ; 004106d4
    LEA ESI,[ESP + 0x2a8]               ; 004106db
    FXCH ST5                            ; 004106e2
    FSTP float ptr [ESP + 0x2a8]        ; 004106e4
    FXCH ST3                            ; 004106eb
    FSTP float ptr [ESP + 0x2ac]        ; 004106ed
    FXCH                                ; 004106f4
    FSTP float ptr [ESP + 0x2b0]        ; 004106f6
    MOVSD ES:EDI,ESI                    ; 004106fd
    MOVSD ES:EDI,ESI                    ; 004106fe
    MOVSD ES:EDI,ESI                    ; 004106ff
    PUSH EDX                            ; 00410700 | g_CDemonSetInstance
    LEA EDI,[ESP + 0x1d4]               ; 00410701
    LEA ESI,[ESP + 0x39c]               ; 00410708
    FSUB float ptr [ESP + 0xfc]         ; 0041070f
    FXCH                                ; 00410716
    FSUB float ptr [ESP + 0x100]        ; 00410718
    FXCH ST2                            ; 0041071f
    FSUB float ptr [ESP + 0x104]        ; 00410721
    FXCH                                ; 00410728
    FSTP float ptr [ESP + 0x39c]        ; 0041072a
    FXCH                                ; 00410731
    FSTP float ptr [ESP + 0x3a0]        ; 00410733
    FSTP float ptr [ESP + 0x3a4]        ; 0041073a
    MOVSD ES:EDI,ESI                    ; 00410741
    MOVSD ES:EDI,ESI                    ; 00410742
    MOVSD ES:EDI,ESI                    ; 00410743
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00410744
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00410749
    PUSH 0x1                            ; 0041074c
    MOV ECX,dword ptr [0x00603b28]      ; 0041074e | g_CDemonSetPtr
    PUSH ECX                            ; 00410754 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 00410755
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0041075a
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041075d
    PUSH EBX                            ; 00410760
    MOV ESI,dword ptr [0x00603b28]      ; 00410761 | g_CDemonSetPtr
    PUSH ESI                            ; 00410767 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00410768
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0041076d
    MOV EDI,dword ptr [0x00603b28]      ; 00410770 | g_CDemonSetPtr
    PUSH EDI                            ; 00410776 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0 ; 00410777
        ;   XREF to: 0053ebd0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(CDemonSet * this_ptr)
    MOV EDX,dword ptr [EBX + 0x304]     ; 0041077c
    ADD ESP,0x4                         ; 00410782
    TEST EDX,EDX                        ; 00410785
    JNZ 0x004110b8                      ; 00410787
        ;   XREF to: 004110b8 (CONDITIONAL_JUMP)  ; LAB_004110b8
    XOR ESI,ESI                         ; 0041078d
        ;   Label: LAB_0041078d
    MOV dword ptr [ESP + 0x4b0],ESI     ; 0041078f
    LEA EAX,[ESP + 0x374]               ; 00410796
        ;   Label: LAB_00410796
    PUSH EAX                            ; 0041079d
    LEA EAX,[ESP + 0x1d4]               ; 0041079e
    PUSH EAX                            ; 004107a5
    MOV ECX,dword ptr [0x00603b28]      ; 004107a6 | g_CDemonSetPtr
    PUSH ECX                            ; 004107ac | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 004107ad
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x4c0],EAX     ; 004107b2
    FLD float ptr [ESP + 0x4c0]         ; 004107b9
    ADD ESP,0xc                         ; 004107c0
    FLDZ                                ; 004107c3
    FXCH                                ; 004107c5
    FSTP double ptr [ESP]               ; 004107c7
    FCOMP double ptr [ESP]              ; 004107ca
    FNSTSW AX                           ; 004107cd
    SAHF                                ; 004107cf
    JBE 0x004110cd                      ; 004107d0
        ;   XREF to: 004110cd (CONDITIONAL_JUMP)  ; LAB_004110cd
    MOV ECX,dword ptr [ESP + 0x4a0]     ; 004107d6
        ;   Label: LAB_004107d6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004107dd
    INC ECX                             ; 004107e0
    MOV ESI,dword ptr [EBX + 0x58c]     ; 004107e1
    MOV dword ptr [ESP + 0x4a0],ECX     ; 004107e7
    CMP ECX,ESI                         ; 004107ee
    JL 0x00410549                       ; 004107f0
        ;   XREF to: 00410549 (CONDITIONAL_JUMP)  ; LAB_00410549
    MOV EDI,dword ptr [0x00603b28]      ; 004107f6 | g_CDemonSetPtr
        ;   Label: LAB_004107f6
    PUSH EDI                            ; 004107fc | g_CDemonSetInstance
    LEA ESI,[ESP + 0x450]               ; 004107fd
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00410804
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    LEA EDI,[ESP + 0x234]               ; 00410809
    ADD ESP,0x4                         ; 00410810
    XOR EAX,EAX                         ; 00410813
    MOV EBX,dword ptr [EBP + 0x14]      ; 00410815
    MOV dword ptr [ESP + 0x140],EAX     ; 00410818
    MOV dword ptr [ESP + 0x144],EAX     ; 0041081f
    MOV dword ptr [ESP + 0x148],EAX     ; 00410826
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041082d
    MOVSD ES:EDI,ESI                    ; 00410830
    MOVSD ES:EDI,ESI                    ; 00410831
    MOVSD ES:EDI,ESI                    ; 00410832
    PUSH EBX                            ; 00410833
    MOV EAX,dword ptr [EAX + 0x154]     ; 00410834
    LEA ESI,[ESP + 0x468]               ; 0041083a
    LEA EDI,[ESP + 0x27c]               ; 00410841
    CALL dword ptr [EAX + 0xe0]         ; 00410848
    LEA ESI,[ESP + 0x468]               ; 0041084e
    ADD ESP,0x4                         ; 00410855
    MOVSD ES:EDI,ESI                    ; 00410858
    MOVSD ES:EDI,ESI                    ; 00410859
    MOVSD ES:EDI,ESI                    ; 0041085a
    MOV EAX,dword ptr [ESP + 0x278]     ; 0041085b
    MOV dword ptr [ESP + 0x260],EAX     ; 00410862
    PUSH EBX                            ; 00410869
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041086a
    LEA ESI,[ESP + 0x420]               ; 00410870
    LEA EDI,[ESP + 0xe4]                ; 00410877
    CALL dword ptr [EAX + 0xe0]         ; 0041087e
    LEA ESI,[ESP + 0x420]               ; 00410884
    ADD ESP,0x4                         ; 0041088b
    MOVSD ES:EDI,ESI                    ; 0041088e
    MOVSD ES:EDI,ESI                    ; 0041088f
    MOVSD ES:EDI,ESI                    ; 00410890
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00410891
    MOV dword ptr [ESP + 0x264],EAX     ; 00410898
    PUSH EBX                            ; 0041089f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004108a0
    LEA ESI,[ESP + 0x1c8]               ; 004108a6
    LEA EDI,[ESP + 0x108]               ; 004108ad
    CALL dword ptr [EAX + 0xe0]         ; 004108b4
    LEA ESI,[ESP + 0x1c8]               ; 004108ba
    ADD ESP,0x4                         ; 004108c1
    LEA EAX,[ESP + 0x260]               ; 004108c4
    MOVSD ES:EDI,ESI                    ; 004108cb
    MOVSD ES:EDI,ESI                    ; 004108cc
    MOVSD ES:EDI,ESI                    ; 004108cd
    PUSH EAX                            ; 004108ce
    FLD float ptr [ESP + 0x110]         ; 004108cf
    LEA ESI,[ESP + 0x3f0]               ; 004108d6
    LEA EDI,[ESP + 0x1ec]               ; 004108dd
    FADD double ptr [0x005b64f2]        ; 004108e4 | DAT_005b64f2
    PUSH EBX                            ; 004108ea
    FSTP float ptr [ESP + 0x270]        ; 004108eb
    CALL core_actor.cpp_FUN_00408b80    ; 004108f2
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x3f4]               ; 004108f7
    ADD ESP,0x8                         ; 004108fe
    MOVSD ES:EDI,ESI                    ; 00410901
    MOVSD ES:EDI,ESI                    ; 00410902
    MOVSD ES:EDI,ESI                    ; 00410903
    PUSH EBX                            ; 00410904
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410905
    LEA ESI,[ESP + 0x204]               ; 0041090b
    LEA EDI,[ESP + 0x300]               ; 00410912
    CALL dword ptr [EAX + 0xe0]         ; 00410919
    LEA ESI,[ESP + 0x204]               ; 0041091f
    ADD ESP,0x4                         ; 00410926
    MOVSD ES:EDI,ESI                    ; 00410929
    MOVSD ES:EDI,ESI                    ; 0041092a
    MOVSD ES:EDI,ESI                    ; 0041092b
    MOV EAX,dword ptr [ESP + 0x2fc]     ; 0041092c
    MOV dword ptr [ESP + 0x134],EAX     ; 00410933
    PUSH EBX                            ; 0041093a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041093b
    LEA ESI,[ESP + 0x3c0]               ; 00410941
    LEA EDI,[ESP + 0x6c]                ; 00410948
    CALL dword ptr [EAX + 0xe0]         ; 0041094c
    LEA ESI,[ESP + 0x3c0]               ; 00410952
    ADD ESP,0x4                         ; 00410959
    MOVSD ES:EDI,ESI                    ; 0041095c
    MOVSD ES:EDI,ESI                    ; 0041095d
    MOVSD ES:EDI,ESI                    ; 0041095e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041095f
    MOV dword ptr [ESP + 0x138],EAX     ; 00410963
    PUSH EBX                            ; 0041096a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041096b
    LEA ESI,[ESP + 0x3d8]               ; 00410971
    LEA EDI,[ESP + 0x198]               ; 00410978
    CALL dword ptr [EAX + 0xe0]         ; 0041097f
    LEA ESI,[ESP + 0x3d8]               ; 00410985
    ADD ESP,0x4                         ; 0041098c
    LEA EAX,[ESP + 0x134]               ; 0041098f
    MOVSD ES:EDI,ESI                    ; 00410996
    MOVSD ES:EDI,ESI                    ; 00410997
    MOVSD ES:EDI,ESI                    ; 00410998
    PUSH EAX                            ; 00410999
    FLD float ptr [ESP + 0x1a0]         ; 0041099a
    LEA ESI,[ESP + 0x24c]               ; 004109a1
    FADD double ptr [0x005b64fa]        ; 004109a8 | DAT_005b64fa
    PUSH EBX                            ; 004109ae
    FSTP float ptr [ESP + 0x144]        ; 004109af
    CALL core_actor.cpp_FUN_00408b80    ; 004109b6
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004109bb
    MOV EAX,dword ptr [EBX + 0x154]     ; 004109be
    PUSH EBX                            ; 004109c4
    LEA ESI,[ESP + 0xc0]                ; 004109c5
    LEA EDI,[ESP + 0x30c]               ; 004109cc
    CALL dword ptr [EAX + 0xe0]         ; 004109d3
    LEA ESI,[ESP + 0xc0]                ; 004109d9
    ADD ESP,0x4                         ; 004109e0
    MOVSD ES:EDI,ESI                    ; 004109e3
    MOVSD ES:EDI,ESI                    ; 004109e4
    MOVSD ES:EDI,ESI                    ; 004109e5
    MOV EAX,dword ptr [ESP + 0x308]     ; 004109e6
    MOV dword ptr [ESP + 0x344],EAX     ; 004109ed
    PUSH EBX                            ; 004109f4
    MOV EAX,dword ptr [EBX + 0x154]     ; 004109f5
    LEA ESI,[ESP + 0x354]               ; 004109fb
    LEA EDI,[ESP + 0x390]               ; 00410a02
    CALL dword ptr [EAX + 0xe0]         ; 00410a09
    LEA ESI,[ESP + 0x354]               ; 00410a0f
    ADD ESP,0x4                         ; 00410a16
    MOVSD ES:EDI,ESI                    ; 00410a19
    MOVSD ES:EDI,ESI                    ; 00410a1a
    MOVSD ES:EDI,ESI                    ; 00410a1b
    MOV EAX,dword ptr [ESP + 0x390]     ; 00410a1c
    MOV dword ptr [ESP + 0x348],EAX     ; 00410a23
    PUSH EBX                            ; 00410a2a
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410a2b
    LEA ESI,[ESP + 0x414]               ; 00410a31
    LEA EDI,[ESP + 0x3a8]               ; 00410a38
    CALL dword ptr [EAX + 0xe0]         ; 00410a3f
    LEA ESI,[ESP + 0x414]               ; 00410a45
    ADD ESP,0x4                         ; 00410a4c
    LEA EAX,[ESP + 0x344]               ; 00410a4f
    MOVSD ES:EDI,ESI                    ; 00410a56
    MOVSD ES:EDI,ESI                    ; 00410a57
    MOVSD ES:EDI,ESI                    ; 00410a58
    PUSH EAX                            ; 00410a59
    FLD float ptr [ESP + 0x3b0]         ; 00410a5a
    LEA ESI,[ESP + 0x45c]               ; 00410a61
    LEA EDI,[ESP + 0x2e8]               ; 00410a68
    FADD float ptr [0x005b6502]         ; 00410a6f | DAT_005b6502
    PUSH EBX                            ; 00410a75
    FSTP float ptr [ESP + 0x354]        ; 00410a76
    CALL core_actor.cpp_FUN_00408b80    ; 00410a7d
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x460]               ; 00410a82
    ADD ESP,0x8                         ; 00410a89
    MOVSD ES:EDI,ESI                    ; 00410a8c
    MOVSD ES:EDI,ESI                    ; 00410a8d
    MOVSD ES:EDI,ESI                    ; 00410a8e
    PUSH EBX                            ; 00410a8f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410a90
    LEA ESI,[ESP + 0x2b8]               ; 00410a96
    LEA EDI,[ESP + 0x330]               ; 00410a9d
    CALL dword ptr [EAX + 0xe0]         ; 00410aa4
    LEA ESI,[ESP + 0x2b8]               ; 00410aaa
    ADD ESP,0x4                         ; 00410ab1
    MOVSD ES:EDI,ESI                    ; 00410ab4
    MOVSD ES:EDI,ESI                    ; 00410ab5
    MOVSD ES:EDI,ESI                    ; 00410ab6
    MOV EAX,dword ptr [ESP + 0x32c]     ; 00410ab7
    MOV dword ptr [ESP + 0x224],EAX     ; 00410abe
    PUSH EBX                            ; 00410ac5
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410ac6
    LEA ESI,[ESP + 0x2dc]               ; 00410acc
    LEA EDI,[ESP + 0x270]               ; 00410ad3
    CALL dword ptr [EAX + 0xe0]         ; 00410ada
    LEA ESI,[ESP + 0x2dc]               ; 00410ae0
    ADD ESP,0x4                         ; 00410ae7
    MOVSD ES:EDI,ESI                    ; 00410aea
    MOVSD ES:EDI,ESI                    ; 00410aeb
    MOVSD ES:EDI,ESI                    ; 00410aec
    MOV EAX,dword ptr [ESP + 0x270]     ; 00410aed
    MOV dword ptr [ESP + 0x228],EAX     ; 00410af4
    PUSH EBX                            ; 00410afb
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410afc
    LEA ESI,[ESP + 0x9c]                ; 00410b02
    LEA EDI,[ESP + 0x114]               ; 00410b09
    CALL dword ptr [EAX + 0xe0]         ; 00410b10
    LEA ESI,[ESP + 0x9c]                ; 00410b16
    ADD ESP,0x4                         ; 00410b1d
    LEA EAX,[ESP + 0x224]               ; 00410b20
    MOVSD ES:EDI,ESI                    ; 00410b27
    MOVSD ES:EDI,ESI                    ; 00410b28
    MOVSD ES:EDI,ESI                    ; 00410b29
    PUSH EAX                            ; 00410b2a
    FLD float ptr [ESP + 0x11c]         ; 00410b2b
    LEA ESI,[ESP + 0x15c]               ; 00410b32
    LEA EDI,[ESP + 0xf0]                ; 00410b39
    FADD float ptr [0x005b6506]         ; 00410b40 | DAT_005b6506
    PUSH EBX                            ; 00410b46
    FSTP float ptr [ESP + 0x234]        ; 00410b47
    CALL core_actor.cpp_FUN_00408b80    ; 00410b4e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x160]               ; 00410b53
    ADD ESP,0x8                         ; 00410b5a
    MOVSD ES:EDI,ESI                    ; 00410b5d
    MOVSD ES:EDI,ESI                    ; 00410b5e
    MOVSD ES:EDI,ESI                    ; 00410b5f
    PUSH EBX                            ; 00410b60
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410b61
    LEA ESI,[ESP + 0x174]               ; 00410b67
    LEA EDI,[ESP + 0x12c]               ; 00410b6e
    CALL dword ptr [EAX + 0xe0]         ; 00410b75
    LEA ESI,[ESP + 0x174]               ; 00410b7b
    ADD ESP,0x4                         ; 00410b82
    MOVSD ES:EDI,ESI                    ; 00410b85
    MOVSD ES:EDI,ESI                    ; 00410b86
    MOVSD ES:EDI,ESI                    ; 00410b87
    MOV EAX,dword ptr [ESP + 0x128]     ; 00410b88
    MOV dword ptr [ESP + 0x11c],EAX     ; 00410b8f
    PUSH EBX                            ; 00410b96
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410b97
    LEA ESI,[ESP + 0x18c]               ; 00410b9d
    LEA EDI,[ESP + 0x150]               ; 00410ba4
    CALL dword ptr [EAX + 0xe0]         ; 00410bab
    LEA ESI,[ESP + 0x18c]               ; 00410bb1
    ADD ESP,0x4                         ; 00410bb8
    MOVSD ES:EDI,ESI                    ; 00410bbb
    MOVSD ES:EDI,ESI                    ; 00410bbc
    MOVSD ES:EDI,ESI                    ; 00410bbd
    MOV EAX,dword ptr [ESP + 0x150]     ; 00410bbe
    MOV dword ptr [ESP + 0x120],EAX     ; 00410bc5
    PUSH EBX                            ; 00410bcc
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410bcd
    LEA ESI,[ESP + 0x60]                ; 00410bd3
    LEA EDI,[ESP + 0x444]               ; 00410bd7
    CALL dword ptr [EAX + 0xe0]         ; 00410bde
    LEA ESI,[ESP + 0x60]                ; 00410be4
    ADD ESP,0x4                         ; 00410be8
    LEA EAX,[ESP + 0x11c]               ; 00410beb
    MOVSD ES:EDI,ESI                    ; 00410bf2
    MOVSD ES:EDI,ESI                    ; 00410bf3
    MOVSD ES:EDI,ESI                    ; 00410bf4
    PUSH EAX                            ; 00410bf5
    FLD float ptr [ESP + 0x44c]         ; 00410bf6
    LEA ESI,[ESP + 0x1b0]               ; 00410bfd
    LEA EDI,[ESP + 0x318]               ; 00410c04
    FADD float ptr [0x005b650a]         ; 00410c0b | DAT_005b650a
    PUSH EBX                            ; 00410c11
    FSTP float ptr [ESP + 0x12c]        ; 00410c12
    CALL core_actor.cpp_FUN_00408b80    ; 00410c19
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x1b4]               ; 00410c1e
    ADD ESP,0x8                         ; 00410c25
    MOVSD ES:EDI,ESI                    ; 00410c28
    MOVSD ES:EDI,ESI                    ; 00410c29
    MOVSD ES:EDI,ESI                    ; 00410c2a
    PUSH EBX                            ; 00410c2b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410c2c
    LEA ESI,[ESP + 0x21c]               ; 00410c32
    LEA EDI,[ESP + 0x1a4]               ; 00410c39
    CALL dword ptr [EAX + 0xe0]         ; 00410c40
    LEA ESI,[ESP + 0x21c]               ; 00410c46
    ADD ESP,0x4                         ; 00410c4d
    MOVSD ES:EDI,ESI                    ; 00410c50
    MOVSD ES:EDI,ESI                    ; 00410c51
    MOVSD ES:EDI,ESI                    ; 00410c52
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 00410c53
    MOV dword ptr [ESP + 0x17c],EAX     ; 00410c5a
    PUSH EBX                            ; 00410c61
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410c62
    LEA ESI,[ESP + 0x78]                ; 00410c68
    LEA EDI,[ESP + 0x3cc]               ; 00410c6c
    CALL dword ptr [EAX + 0xe0]         ; 00410c73
    LEA ESI,[ESP + 0x78]                ; 00410c79
    ADD ESP,0x4                         ; 00410c7d
    MOVSD ES:EDI,ESI                    ; 00410c80
    MOVSD ES:EDI,ESI                    ; 00410c81
    MOVSD ES:EDI,ESI                    ; 00410c82
    MOV EAX,dword ptr [ESP + 0x3cc]     ; 00410c83
    MOV dword ptr [ESP + 0x180],EAX     ; 00410c8a
    PUSH EBX                            ; 00410c91
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410c92
    LEA ESI,[ESP + 0x42c]               ; 00410c98
    LEA EDI,[ESP + 0x1e0]               ; 00410c9f
    CALL dword ptr [EAX + 0xe0]         ; 00410ca6
    LEA ESI,[ESP + 0x42c]               ; 00410cac
    ADD ESP,0x4                         ; 00410cb3
    LEA EAX,[ESP + 0x17c]               ; 00410cb6
    MOVSD ES:EDI,ESI                    ; 00410cbd
    MOVSD ES:EDI,ESI                    ; 00410cbe
    MOVSD ES:EDI,ESI                    ; 00410cbf
    PUSH EAX                            ; 00410cc0
    FLD float ptr [ESP + 0x1e8]         ; 00410cc1
    LEA ESI,[ESP + 0x384]               ; 00410cc8
    LEA EDI,[ESP + 0x324]               ; 00410ccf
    FADD float ptr [0x005b650e]         ; 00410cd6 | DAT_005b650e
    PUSH EBX                            ; 00410cdc
    FSTP float ptr [ESP + 0x18c]        ; 00410cdd
    CALL core_actor.cpp_FUN_00408b80    ; 00410ce4
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x388]               ; 00410ce9
    ADD ESP,0x8                         ; 00410cf0
    MOVSD ES:EDI,ESI                    ; 00410cf3
    MOVSD ES:EDI,ESI                    ; 00410cf4
    MOVSD ES:EDI,ESI                    ; 00410cf5
    PUSH EBX                            ; 00410cf6
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410cf7
    LEA ESI,[ESP + 0x90]                ; 00410cfd
    LEA EDI,[ESP + 0x240]               ; 00410d04
    CALL dword ptr [EAX + 0xe0]         ; 00410d0b
    LEA ESI,[ESP + 0x90]                ; 00410d11
    ADD ESP,0x4                         ; 00410d18
    MOVSD ES:EDI,ESI                    ; 00410d1b
    MOVSD ES:EDI,ESI                    ; 00410d1c
    MOVSD ES:EDI,ESI                    ; 00410d1d
    MOV EAX,dword ptr [ESP + 0x23c]     ; 00410d1e
    MOV dword ptr [ESP + 0x20c],EAX     ; 00410d25
    PUSH EBX                            ; 00410d2c
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410d2d
    LEA ESI,[ESP + 0x84]                ; 00410d33
    LEA EDI,[ESP + 0x258]               ; 00410d3a
    CALL dword ptr [EAX + 0xe0]         ; 00410d41
    LEA ESI,[ESP + 0x84]                ; 00410d47
    ADD ESP,0x4                         ; 00410d4e
    MOVSD ES:EDI,ESI                    ; 00410d51
    MOVSD ES:EDI,ESI                    ; 00410d52
    MOVSD ES:EDI,ESI                    ; 00410d53
    MOV EAX,dword ptr [ESP + 0x258]     ; 00410d54
    MOV dword ptr [ESP + 0x210],EAX     ; 00410d5b
    PUSH EBX                            ; 00410d62
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410d63
    LEA ESI,[ESP + 0xb4]                ; 00410d69
    LEA EDI,[ESP + 0x408]               ; 00410d70
    CALL dword ptr [EAX + 0xe0]         ; 00410d77
    LEA ESI,[ESP + 0xb4]                ; 00410d7d
    ADD ESP,0x4                         ; 00410d84
    LEA EAX,[ESP + 0x20c]               ; 00410d87
    MOVSD ES:EDI,ESI                    ; 00410d8e
    MOVSD ES:EDI,ESI                    ; 00410d8f
    MOVSD ES:EDI,ESI                    ; 00410d90
    PUSH EAX                            ; 00410d91
    FLD float ptr [ESP + 0x410]         ; 00410d92
    LEA ESI,[ESP + 0xa8]                ; 00410d99
    LEA EDI,[ESP + 0x3e4]               ; 00410da0
    PUSH EBX                            ; 00410da7
    FADD float ptr [0x005b6512]         ; 00410da8 | DAT_005b6512
    ADD EBX,0x3c                        ; 00410dae
    FSTP float ptr [ESP + 0x21c]        ; 00410db1
    CALL core_actor.cpp_FUN_00408b80    ; 00410db8
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0xac]                ; 00410dbd
    ADD ESP,0x8                         ; 00410dc4
    LEA EAX,[ESP + 0x230]               ; 00410dc7
    FLD float ptr [ESP + 0x234]         ; 00410dce
    PUSH EBX                            ; 00410dd5
    MOVSD ES:EDI,ESI                    ; 00410dd6
    MOVSD ES:EDI,ESI                    ; 00410dd7
    MOVSD ES:EDI,ESI                    ; 00410dd8
    FLD float ptr [ESP + 0x268]         ; 00410dd9
    MOV ESI,dword ptr [0x005fc5a0]      ; 00410de0 | DAT_005fc5a0
    PUSH EAX                            ; 00410de6
    FXCH                                ; 00410de7
    FLD float ptr [0x005b6516]          ; 00410de9 | DAT_005b6516
    FXCH                                ; 00410def
    FADD ST0,ST1                        ; 00410df1
    FXCH ST2                            ; 00410df3
    FADDP                               ; 00410df5
    FXCH                                ; 00410df7
    FSTP float ptr [ESP + 0x23c]        ; 00410df9
    PUSH ESI                            ; 00410e00
    FSTP float ptr [ESP + 0x270]        ; 00410e01
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450 ; 00410e08
        ;   XREF to: 004a2450 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 00410e0d
    LEA EAX,[ESP + 0x230]               ; 00410e10
    PUSH EAX                            ; 00410e17
    MOV EDI,dword ptr [0x005fc5a0]      ; 00410e18 | DAT_005fc5a0
    PUSH EDI                            ; 00410e1e
    CALL core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010 ; 00410e1f
        ;   XREF to: 004a2010 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(CFireEffect * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00410e24
    PUSH EBX                            ; 00410e27
    LEA EAX,[ESP + 0x2e8]               ; 00410e28
    PUSH EAX                            ; 00410e2f
    MOV EAX,[0x005fc5a0]                ; 00410e30 | DAT_005fc5a0
    PUSH EAX                            ; 00410e35
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450 ; 00410e36
        ;   XREF to: 004a2450 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 00410e3b
    LEA EAX,[ESP + 0x2e4]               ; 00410e3e
    PUSH EAX                            ; 00410e45
    MOV EDX,dword ptr [0x005fc5a0]      ; 00410e46 | DAT_005fc5a0
    PUSH EDX                            ; 00410e4c
    CALL core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010 ; 00410e4d
        ;   XREF to: 004a2010 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(CFireEffect * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00410e52
    PUSH EBX                            ; 00410e55
    LEA EAX,[ESP + 0xf0]                ; 00410e56
    PUSH EAX                            ; 00410e5d
    MOV ECX,dword ptr [0x005fc5a0]      ; 00410e5e | DAT_005fc5a0
    PUSH ECX                            ; 00410e64
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450 ; 00410e65
        ;   XREF to: 004a2450 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 00410e6a
    LEA EAX,[ESP + 0xec]                ; 00410e6d
    PUSH EAX                            ; 00410e74
    MOV ESI,dword ptr [0x005fc5a0]      ; 00410e75 | DAT_005fc5a0
    PUSH ESI                            ; 00410e7b
    CALL core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010 ; 00410e7c
        ;   XREF to: 004a2010 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(CFireEffect * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00410e81
    PUSH EBX                            ; 00410e84
    LEA EAX,[ESP + 0x318]               ; 00410e85
    PUSH EAX                            ; 00410e8c
    MOV EDI,dword ptr [0x005fc5a0]      ; 00410e8d | DAT_005fc5a0
    PUSH EDI                            ; 00410e93
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450 ; 00410e94
        ;   XREF to: 004a2450 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 00410e99
    LEA EAX,[ESP + 0x314]               ; 00410e9c
    PUSH EAX                            ; 00410ea3
    MOV EAX,[0x005fc5a0]                ; 00410ea4 | DAT_005fc5a0
    PUSH EAX                            ; 00410ea9
    CALL core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010 ; 00410eaa
        ;   XREF to: 004a2010 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(CFireEffect * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00410eaf
    PUSH EBX                            ; 00410eb2
    LEA EAX,[ESP + 0x324]               ; 00410eb3
    PUSH EAX                            ; 00410eba
    MOV EDX,dword ptr [0x005fc5a0]      ; 00410ebb | DAT_005fc5a0
    PUSH EDX                            ; 00410ec1
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450 ; 00410ec2
        ;   XREF to: 004a2450 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 00410ec7
    LEA EAX,[ESP + 0x320]               ; 00410eca
    PUSH EAX                            ; 00410ed1
    MOV ECX,dword ptr [0x005fc5a0]      ; 00410ed2 | DAT_005fc5a0
    PUSH ECX                            ; 00410ed8
    CALL core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010 ; 00410ed9
        ;   XREF to: 004a2010 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(CFireEffect * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00410ede
    PUSH EBX                            ; 00410ee1
    LEA EAX,[ESP + 0x3e4]               ; 00410ee2
    PUSH EAX                            ; 00410ee9
    MOV EBX,dword ptr [0x005fc5a0]      ; 00410eea | DAT_005fc5a0
    PUSH EBX                            ; 00410ef0
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450 ; 00410ef1
        ;   XREF to: 004a2450 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 00410ef6
    LEA EAX,[ESP + 0x3e0]               ; 00410ef9
    PUSH EAX                            ; 00410f00
    MOV ESI,dword ptr [0x005fc5a0]      ; 00410f01 | DAT_005fc5a0
    PUSH ESI                            ; 00410f07
    CALL core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010 ; 00410f08
        ;   XREF to: 004a2010 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(CFireEffect * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00410f0d
    PUSH 0xffff                         ; 00410f10
    LEA EAX,[ESP + 0x144]               ; 00410f15
    PUSH EAX                            ; 00410f1c
    LEA EAX,[ESP + 0x238]               ; 00410f1d
    PUSH 0x3f8ccccd                     ; 00410f24
    PUSH EAX                            ; 00410f29
    MOV EDI,dword ptr [0x005fc5a0]      ; 00410f2a | DAT_005fc5a0
    PUSH EDI                            ; 00410f30
    XOR ESI,ESI                         ; 00410f31
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560 ; 00410f33
        ;   XREF to: 004a2560 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 00410f38
    PUSH 0x40400000                     ; 00410f3b
        ;   Label: LAB_00410f3b
    PUSH 0xc0400000                     ; 00410f40
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00410f45
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x490],EAX     ; 00410f4a
    ADD ESP,0x8                         ; 00410f51
    PUSH 0x41000000                     ; 00410f54
    PUSH 0x0                            ; 00410f59
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00410f5b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x494],EAX     ; 00410f60
    ADD ESP,0x8                         ; 00410f67
    PUSH 0x40400000                     ; 00410f6a
    PUSH 0xc0400000                     ; 00410f6f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00410f74
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4bc],EAX     ; 00410f79
    FLD float ptr [ESP + 0x4bc]         ; 00410f80
    ADD ESP,0x8                         ; 00410f87
    MOV EAX,dword ptr [ESP + 0x48c]     ; 00410f8a
    MOV dword ptr [ESP + 0x498],EAX     ; 00410f91
    MOV EAX,dword ptr [ESP + 0x488]     ; 00410f98
    FSTP float ptr [ESP + 0x49c]        ; 00410f9f
    MOV dword ptr [ESP + 0x494],EAX     ; 00410fa6
    MOV EAX,dword ptr [ESP + 0x49c]     ; 00410fad
    MOV dword ptr [ESP + 0xc8],EAX      ; 00410fb4
    MOV EAX,dword ptr [ESP + 0x498]     ; 00410fbb
    MOV dword ptr [ESP + 0xcc],EAX      ; 00410fc2
    MOV EAX,dword ptr [ESP + 0x494]     ; 00410fc9
    LEA EBX,[ESP + 0xc8]                ; 00410fd0
    MOV dword ptr [ESP + 0xd0],EAX      ; 00410fd7
    LEA EAX,[ESP + 0x1b8]               ; 00410fde
    CMP EAX,EBX                         ; 00410fe5
    JZ 0x00411013                       ; 00410fe7
        ;   XREF to: 00411013 (CONDITIONAL_JUMP)  ; LAB_00411013
    MOV EAX,dword ptr [ESP + 0x49c]     ; 00410fe9
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00410ff0
    MOV EAX,dword ptr [ESP + 0x498]     ; 00410ff7
    MOV dword ptr [ESP + 0x1bc],EAX     ; 00410ffe
    MOV EAX,dword ptr [ESP + 0x494]     ; 00411005
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0041100c
    PUSH 0xffff                         ; 00411013
        ;   Label: LAB_00411013
    PUSH 0x6                            ; 00411018
    PUSH 0x10000                        ; 0041101a
    PUSH 0x20000                        ; 0041101f
    LEA EAX,[ESP + 0x1c8]               ; 00411024
    PUSH EAX                            ; 0041102b
    LEA EAX,[ESP + 0x1fc]               ; 0041102c
    PUSH EAX                            ; 00411033
    MOV EDI,dword ptr [0x005fc5a0]      ; 00411034 | DAT_005fc5a0
    PUSH EDI                            ; 0041103a
    INC ESI                             ; 0041103b
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 0041103c
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00411041
    CMP ESI,0x8                         ; 00411044
    JL 0x00410f3b                       ; 00411047
        ;   XREF to: 00410f3b (CONDITIONAL_JUMP)  ; LAB_00410f3b
    LEA EAX,[ESP + 0x44c]               ; 0041104d
    PUSH EAX                            ; 00411054
    PUSH 0x5b64cf                       ; 00411055 | = "wp_blunderbus.wav"
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041105a
    PUSH EAX                            ; 0041105d
    MOV EDX,dword ptr [0x006045f8]      ; 0041105e | DAT_006045f8
    PUSH EDX                            ; 00411064
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 00411065
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0041106a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041106d
    MOV dword ptr [EAX + 0x300],0x40200000 ; 00411070
    MOV EAX,0x1                         ; 0041107a
    MOV ESP,EBP                         ; 0041107f
    POP EBP                             ; 00411081
    POP EDI                             ; 00411082
    POP ESI                             ; 00411083
    POP EBX                             ; 00411084
    RET                                 ; 00411085
    LEA EAX,[ESP + 0x44c]               ; 00411086
        ;   Label: LAB_00411086
    PUSH EAX                            ; 0041108d
    PUSH 0x5b6475                       ; 0041108e | = "wp_noammo.wav"
    PUSH EBX                            ; 00411093
    MOV EDI,dword ptr [0x006045f8]      ; 00411094 | DAT_006045f8
    PUSH EDI                            ; 0041109a
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0041109b
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004110a0
    MOV EAX,EBX                         ; 004110a3
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 004110a5
    XOR EAX,EBX                         ; 004110af
    MOV ESP,EBP                         ; 004110b1
    POP EBP                             ; 004110b3
    POP EDI                             ; 004110b4
    POP ESI                             ; 004110b5
    POP EBX                             ; 004110b6
    RET                                 ; 004110b7
    PUSH EDX                            ; 004110b8
        ;   Label: LAB_004110b8
    MOV EBX,dword ptr [0x00603b28]      ; 004110b9 | g_CDemonSetPtr
    PUSH EBX                            ; 004110bf | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004110c0
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004110c5
    JMP 0x0041078d                      ; 004110c8
        ;   XREF to: 0041078d (UNCONDITIONAL_JUMP)  ; LAB_0041078d
    FLD1                                ; 004110cd
        ;   Label: LAB_004110cd
    FCOMP double ptr [ESP]              ; 004110cf
    FNSTSW AX                           ; 004110d2
    SAHF                                ; 004110d4
    JC 0x004107d6                       ; 004110d5
        ;   XREF to: 004107d6 (CONDITIONAL_JUMP)  ; LAB_004107d6
    MOV EBX,dword ptr [0x007e2cec]      ; 004110db | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x00603b28]                ; 004110e1 | g_CDemonSetPtr
    PUSH EBX                            ; 004110e6
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004110e7 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004110ed
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004110ee
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004110f3
    MOV EBX,EAX                         ; 004110f6
    TEST EAX,EAX                        ; 004110f8
    JZ 0x00411112                       ; 004110fa
        ;   XREF to: 00411112 (CONDITIONAL_JUMP)  ; LAB_00411112
    PUSH EAX                            ; 004110fc
    MOV ESI,dword ptr [EAX + 0x154]     ; 004110fd
    CALL dword ptr [ESI + 0x10c]        ; 00411103
    ADD ESP,0x4                         ; 00411109
    TEST EAX,EAX                        ; 0041110c
    JLE 0x00411112                      ; 0041110e
        ;   XREF to: 00411112 (CONDITIONAL_JUMP)  ; LAB_00411112
    XOR EBX,EBX                         ; 00411110
    MOV EDI,dword ptr [0x01d22e04]      ; 00411112 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00411112
    MOV EAX,[0x00603b28]                ; 00411118 | g_CDemonSetPtr
    PUSH EDI                            ; 0041111d
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0041111e | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00411124
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00411125
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ECX,dword ptr [0x02cfd894]      ; 0041112a | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 00411130
    MOV EDI,EAX                         ; 00411133
    MOV EAX,[0x00603b28]                ; 00411135 | g_CDemonSetPtr
    PUSH ECX                            ; 0041113a
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 0041113b | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 00411141
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00411142
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00411147
    MOV ESI,EAX                         ; 0041114a
    MOV dword ptr [ESP + 0x4ac],EAX     ; 0041114c
    TEST EBX,EBX                        ; 00411153
    JNZ 0x004111ab                      ; 00411155
        ;   XREF to: 004111ab (CONDITIONAL_JUMP)  ; LAB_004111ab
    TEST EDI,EDI                        ; 00411157
    JNZ 0x004113cc                      ; 00411159
        ;   XREF to: 004113cc (CONDITIONAL_JUMP)  ; LAB_004113cc
    TEST EAX,EAX                        ; 0041115f
    JZ 0x0041140e                       ; 00411161
        ;   XREF to: 0041140e (CONDITIONAL_JUMP)  ; LAB_0041140e
    PUSH EAX                            ; 00411167
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0 ; 00411168
        ;   XREF to: 0056edc0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 0041116d
    MOV EBX,dword ptr [EBP + 0x14]      ; 00411170
    PUSH EBX                            ; 00411173
    PUSH ESI                            ; 00411174
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0 ; 00411175
        ;   XREF to: 0056ede0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0041117a
    TEST EAX,EAX                        ; 0041117d
    JZ 0x0041118f                       ; 0041117f
        ;   XREF to: 0041118f (CONDITIONAL_JUMP)  ; LAB_0041118f
    PUSH 0x40a00000                     ; 00411181
    PUSH ESI                            ; 00411186
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20 ; 00411187
        ;   XREF to: 0056ee20 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0041118c
    MOV ESI,dword ptr [ESP + 0x4ac]     ; 0041118f
        ;   Label: LAB_0041118f
    PUSH ESI                            ; 00411196
    MOV EDI,dword ptr [0x00603b28]      ; 00411197 | g_CDemonSetPtr
    PUSH EDI                            ; 0041119d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0041119e
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004111a3
    JMP 0x004113f1                      ; 004111a6
        ;   XREF to: 004113f1 (UNCONDITIONAL_JUMP)  ; LAB_004113f1
    PUSH EBX                            ; 004111ab
        ;   Label: LAB_004111ab
    MOV EAX,dword ptr [EBX + 0x154]     ; 004111ac
    CALL dword ptr [EAX + 0xe0]         ; 004111b2
    ADD ESP,0x4                         ; 004111b8
    TEST EAX,EAX                        ; 004111bb
    JNZ 0x004107d6                      ; 004111bd
        ;   XREF to: 004107d6 (CONDITIONAL_JUMP)  ; LAB_004107d6
    LEA EAX,[ESP + 0x14]                ; 004111c3
    PUSH EAX                            ; 004111c7
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004111c8
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV ESI,dword ptr [0x00603b28]      ; 004111cd | g_CDemonSetPtr
    MOV EDI,0x3ecccccd                  ; 004111d3
    ADD ESP,0x4                         ; 004111d8
    MOV EAX,dword ptr [ESI + 0x14d148]  ; 004111db | g_CDemonSetInstance.collision_part_index
    MOV ECX,0x40a00000                  ; 004111e1
    MOV dword ptr [ESP + 0x14],EAX      ; 004111e6
    MOV dword ptr [ESP + 0x18],ECX      ; 004111ea
    LEA EAX,[ESI + 0x14d11c]            ; 004111ee
    MOV dword ptr [ESP + 0x1c],EDI      ; 004111f4
    LEA EDI,[ESP + 0x2f0]               ; 004111f8
    FLD float ptr [EAX]                 ; 004111ff | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 00411201 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 00411204 | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 00411207
    FSUB float ptr [ESI + 0x14d110]     ; 00411209 | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 0041120f
    FSUB float ptr [ESI + 0x14d114]     ; 00411211 | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 00411217
    FSUB float ptr [ESI + 0x14d118]     ; 00411219 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 0041121f
    FSTP float ptr [ESP + 0x3f8]        ; 00411221
    FXCH                                ; 00411228
    FSTP float ptr [ESP + 0x3fc]        ; 0041122a
    LEA ESI,[ESP + 0x3f8]               ; 00411231
    FSTP float ptr [ESP + 0x400]        ; 00411238
    MOVSD ES:EDI,ESI                    ; 0041123f
    MOVSD ES:EDI,ESI                    ; 00411240
    MOVSD ES:EDI,ESI                    ; 00411241
    FLD float ptr [ESP + 0x2f4]         ; 00411242
    FMUL ST0                            ; 00411249
    FLD float ptr [ESP + 0x2f0]         ; 0041124b
    FMUL ST0                            ; 00411252
    FADDP                               ; 00411254
    FLD float ptr [ESP + 0x2f8]         ; 00411256
    FMUL ST0                            ; 0041125d
    FADDP                               ; 0041125f
    FSQRT                               ; 00411261
    FDIVR double ptr [0x005b6542]       ; 00411263 | DAT_005b6542
    FLD float ptr [ESP + 0x2f0]         ; 00411269
    FXCH                                ; 00411270
    FSTP float ptr [ESP + 0x4a4]        ; 00411272
    FMUL float ptr [ESP + 0x4a4]        ; 00411279
    FLD float ptr [ESP + 0x2f4]         ; 00411280
    FMUL float ptr [ESP + 0x4a4]        ; 00411287
    FLD float ptr [ESP + 0x2f8]         ; 0041128e
    FMUL float ptr [ESP + 0x4a4]        ; 00411295
    LEA EDI,[ESP + 0x2c0]               ; 0041129c
    LEA ESI,[ESP + 0x284]               ; 004112a3
    FXCH ST2                            ; 004112aa
    FSTP float ptr [ESP + 0x284]        ; 004112ac
    FSTP float ptr [ESP + 0x288]        ; 004112b3
    FSTP float ptr [ESP + 0x28c]        ; 004112ba
    MOVSD ES:EDI,ESI                    ; 004112c1
    MOVSD ES:EDI,ESI                    ; 004112c2
    MOVSD ES:EDI,ESI                    ; 004112c3
    LEA EAX,[ESP + 0x2c0]               ; 004112c4
    LEA ESI,[ESP + 0x20]                ; 004112cb
    CMP ESI,EAX                         ; 004112cf
    JZ 0x004112f4                       ; 004112d1
        ;   XREF to: 004112f4 (CONDITIONAL_JUMP)  ; LAB_004112f4
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004112d3
    MOV dword ptr [ESP + 0x20],EAX      ; 004112da
    MOV EAX,dword ptr [ESP + 0x2c4]     ; 004112de
    MOV dword ptr [ESP + 0x24],EAX      ; 004112e5
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 004112e9
    MOV dword ptr [ESP + 0x28],EAX      ; 004112f0
    MOV EAX,[0x00603b28]                ; 004112f4 | g_CDemonSetPtr
        ;   Label: LAB_004112f4
    ADD EAX,0x14d138                    ; 004112f9
    PUSH EAX                            ; 004112fe | g_CDemonSetInstance.collision_impact_position.x
    PUSH EBX                            ; 004112ff
    LEA ESI,[ESP + 0x298]               ; 00411300
    LEA EDI,[ESP + 0x3b8]               ; 00411307
    CALL core_actor.cpp_FUN_00408bf0    ; 0041130e
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x298]               ; 00411313
    ADD ESP,0x8                         ; 0041131a
    MOVSD ES:EDI,ESI                    ; 0041131d
    MOVSD ES:EDI,ESI                    ; 0041131e
    MOVSD ES:EDI,ESI                    ; 0041131f
    LEA EAX,[ESP + 0x3b0]               ; 00411320
    LEA ESI,[ESP + 0x30]                ; 00411327
    CMP ESI,EAX                         ; 0041132b
    JZ 0x00411350                       ; 0041132d
        ;   XREF to: 00411350 (CONDITIONAL_JUMP)  ; LAB_00411350
    MOV EAX,dword ptr [ESP + 0x3b0]     ; 0041132f
    MOV dword ptr [ESP + 0x30],EAX      ; 00411336
    MOV EAX,dword ptr [ESP + 0x3b4]     ; 0041133a
    MOV dword ptr [ESP + 0x34],EAX      ; 00411341
    MOV EAX,dword ptr [ESP + 0x3b8]     ; 00411345
    MOV dword ptr [ESP + 0x38],EAX      ; 0041134c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00411350
        ;   Label: LAB_00411350
    MOV EAX,dword ptr [EAX + 0x56c]     ; 00411353
    MOV EDX,0x3e19999a                  ; 00411359
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041135e
    MOV EAX,0x65                        ; 00411362
    MOV ECX,dword ptr [EBP + 0x14]      ; 00411367
    MOV dword ptr [ESP + 0x44],EAX      ; 0041136a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041136e
    MOV dword ptr [ESP + 0x40],EDX      ; 00411371
    MOV dword ptr [ESP + 0x48],EAX      ; 00411375
    PUSH ECX                            ; 00411379
    MOV EAX,dword ptr [EAX + 0x154]     ; 0041137a
    CALL dword ptr [EAX + 0x94]         ; 00411380
    ADD ESP,0x4                         ; 00411386
    LEA ESI,[ESP + 0x14]                ; 00411389
    PUSH ESI                            ; 0041138d
    MOV dword ptr [ESP + 0x50],EAX      ; 0041138e
    PUSH EBX                            ; 00411392
    MOV EAX,dword ptr [EBX + 0x154]     ; 00411393
    CALL dword ptr [EAX + 0x108]        ; 00411399
    ADD ESP,0x8                         ; 0041139f
    MOV ESI,dword ptr [EBX + 0x27a0]    ; 004113a2
    PUSH ESI                            ; 004113a8
    PUSH 0x2                            ; 004113a9
    MOV EAX,[0x00603b28]                ; 004113ab | g_CDemonSetPtr
    PUSH 0x0                            ; 004113b0
    ADD EAX,0x14d138                    ; 004113b2
    PUSH EAX                            ; 004113b7 | g_CDemonSetInstance.collision_impact_position.x
    MOV EDI,dword ptr [0x005fed24]      ; 004113b8 | g_CGorePtr
    PUSH EDI                            ; 004113be
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 004113bf
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004113c4
    JMP 0x004107d6                      ; 004113c7
        ;   XREF to: 004107d6 (UNCONDITIONAL_JUMP)  ; LAB_004107d6
    PUSH EDI                            ; 004113cc
        ;   Label: LAB_004113cc
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0 ; 004113cd
        ;   XREF to: 004cc5d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004113d2
    TEST EAX,EAX                        ; 004113d5
    JZ 0x004107d6                       ; 004113d7
        ;   XREF to: 004107d6 (CONDITIONAL_JUMP)  ; LAB_004107d6
    MOV EAX,[0x00603b28]                ; 004113dd | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 004113e2
    PUSH EAX                            ; 004113e7 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 004113e8
    CALL core_glass.cpp_FUN_004cc040    ; 004113e9
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004cc040()
    ADD ESP,0x8                         ; 004113ee
    MOV EAX,dword ptr [ESP + 0x4b0]     ; 004113f1
        ;   Label: LAB_004113f1
    INC EAX                             ; 004113f8
    MOV dword ptr [ESP + 0x4b0],EAX     ; 004113f9
    CMP EAX,0x4                         ; 00411400
    JL 0x00410796                       ; 00411403
        ;   XREF to: 00410796 (CONDITIONAL_JUMP)  ; LAB_00410796
    JMP 0x004107d6                      ; 00411409
        ;   XREF to: 004107d6 (UNCONDITIONAL_JUMP)  ; LAB_004107d6
    PUSH EAX                            ; 0041140e
        ;   Label: LAB_0041140e
    MOV EAX,[0x00603b28]                ; 0041140f | g_CDemonSetPtr
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 00411414 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 0041141a
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 0041141b | g_CDemonSetInstance.ground_type
    PUSH EDX                            ; 00411421
    LEA EBX,[EAX + 0x14d128]            ; 00411422
    PUSH EBX                            ; 00411428 | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 00411429
    PUSH EAX                            ; 0041142e | g_CDemonSetInstance.collision_impact_position.x
    MOV ECX,dword ptr [0x005fc5a0]      ; 0041142f | DAT_005fc5a0
    PUSH ECX                            ; 00411435
    LEA ESI,[ESP + 0x2e4]               ; 00411436
    LEA EDI,[ESP + 0x380]               ; 0041143d
    CALL core_fire.cpp_FUN_004a2090     ; 00411444
        ;   XREF to: 004a2090 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a2090()
    MOV EAX,[0x00603b28]                ; 00411449 | g_CDemonSetPtr
    LEA EBX,[ESP + 0x350]               ; 0041144e
    ADD ESP,0x18                        ; 00411455
    FLD float ptr [EAX + 0x14d13c]      ; 00411458 | g_CDemonSetInstance.collision_impact_position.y
    FLD float ptr [EAX + 0x14d140]      ; 0041145e | g_CDemonSetInstance.collision_impact_position.z
    FLD float ptr [EAX + 0x14d138]      ; 00411464 | g_CDemonSetInstance.collision_impact_position.x
    LEA EAX,[ESP + 0x368]               ; 0041146a
    FSUB float ptr [ESP + 0x1d0]        ; 00411471
    FXCH ST2                            ; 00411478
    FSUB float ptr [ESP + 0x1d4]        ; 0041147a
    FXCH                                ; 00411481
    FSUB float ptr [ESP + 0x1d8]        ; 00411483
    FXCH ST2                            ; 0041148a
    FSTP float ptr [ESP + 0x2cc]        ; 0041148c
    FSTP float ptr [ESP + 0x2d0]        ; 00411493
    FSTP float ptr [ESP + 0x2d4]        ; 0041149a
    MOVSD ES:EDI,ESI                    ; 004114a1
    MOVSD ES:EDI,ESI                    ; 004114a2
    MOVSD ES:EDI,ESI                    ; 004114a3
    CMP EBX,EAX                         ; 004114a4
    JZ 0x004114d2                       ; 004114a6
        ;   XREF to: 004114d2 (CONDITIONAL_JUMP)  ; LAB_004114d2
    MOV EAX,dword ptr [ESP + 0x368]     ; 004114a8
    MOV dword ptr [ESP + 0x338],EAX     ; 004114af
    MOV EAX,dword ptr [ESP + 0x36c]     ; 004114b6
    MOV dword ptr [ESP + 0x33c],EAX     ; 004114bd
    MOV EAX,dword ptr [ESP + 0x370]     ; 004114c4
    MOV dword ptr [ESP + 0x340],EAX     ; 004114cb
    FLD float ptr [ESP + 0x33c]         ; 004114d2
        ;   Label: LAB_004114d2
    FMUL ST0                            ; 004114d9
    FLD float ptr [ESP + 0x338]         ; 004114db
    FMUL ST0                            ; 004114e2
    FADDP                               ; 004114e4
    FLD float ptr [ESP + 0x340]         ; 004114e6
    FMUL ST0                            ; 004114ed
    FADDP                               ; 004114ef
    FSQRT                               ; 004114f1
    FCOMP float ptr [0x005b6522]        ; 004114f3 | DAT_005b6522
    FNSTSW AX                           ; 004114f9
    SAHF                                ; 004114fb
    JNC 0x004107d6                      ; 004114fc
        ;   XREF to: 004107d6 (CONDITIONAL_JUMP)  ; LAB_004107d6
    PUSH 0x3f800000                     ; 00411502
    PUSH 0x0                            ; 00411507
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00411509
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4bc],EAX     ; 0041150e
    MOV EAX,[0x00603b28]                ; 00411515 | g_CDemonSetPtr
    FLD float ptr [ESP + 0x4bc]         ; 0041151a
    ADD ESP,0x8                         ; 00411521
    MOV EAX,dword ptr [EAX + 0x14d134]  ; 00411524 | g_CDemonSetInstance.ground_type
    FSTP float ptr [ESP + 0x10]         ; 0041152a
    CMP EAX,0x7                         ; 0041152e
    JNC 0x004116ea                      ; 00411531
        ;   XREF to: 004116ea (CONDITIONAL_JUMP)  ; LAB_004116ea
    CMP EAX,0x2                         ; 00411537
    JNZ 0x004116f9                      ; 0041153a
        ;   XREF to: 004116f9 (CONDITIONAL_JUMP)  ; LAB_004116f9
    FLD float ptr [ESP + 0x10]          ; 00411540
        ;   Label: LAB_00411540
    FST double ptr [ESP + 0x8]          ; 00411544
    FCOMP double ptr [0x005b6532]       ; 00411548 | DAT_005b6532
    FNSTSW AX                           ; 0041154e
    SAHF                                ; 00411550
    JC 0x004115b0                       ; 00411551
        ;   XREF to: 004115b0 (CONDITIONAL_JUMP)  ; LAB_004115b0
    FLD double ptr [ESP + 0x8]          ; 00411553
    FCOMP double ptr [0x005b653a]       ; 00411557 | DAT_005b653a
    FNSTSW AX                           ; 0041155d
    SAHF                                ; 0041155f
    JNC 0x004115fb                      ; 00411560
        ;   XREF to: 004115fb (CONDITIONAL_JUMP)  ; LAB_004115fb
    PUSH 0x3e4ccccd                     ; 00411566
    PUSH 0x3dcccccd                     ; 0041156b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00411570
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4bc],EAX     ; 00411575
    FLD float ptr [ESP + 0x4bc]         ; 0041157c
    ADD ESP,0x8                         ; 00411583
    SUB ESP,0x4                         ; 00411586
    LEA EAX,[ESP + 0x450]               ; 00411589
    FSTP float ptr [ESP]                ; 00411590
    PUSH EAX                            ; 00411593
    PUSH 0x5b6490                       ; 00411594 | = "RIC-CT0B.WAV"
    MOV EDI,dword ptr [EBP + 0x14]      ; 00411599
    PUSH EDI                            ; 0041159c
    MOV EAX,[0x006045f8]                ; 0041159d | DAT_006045f8
    PUSH EAX                            ; 004115a2
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 004115a3
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004115a8
    JMP 0x004107d6                      ; 004115ab
        ;   XREF to: 004107d6 (UNCONDITIONAL_JUMP)  ; LAB_004107d6
    PUSH 0x3e4ccccd                     ; 004115b0
        ;   Label: LAB_004115b0
    PUSH 0x3dcccccd                     ; 004115b5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004115ba
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4bc],EAX     ; 004115bf
    FLD float ptr [ESP + 0x4bc]         ; 004115c6
    ADD ESP,0x8                         ; 004115cd
    SUB ESP,0x4                         ; 004115d0
    LEA EAX,[ESP + 0x450]               ; 004115d3
    FSTP float ptr [ESP]                ; 004115da
    PUSH EAX                            ; 004115dd
    PUSH 0x5b6483                       ; 004115de | = "RIC-CT0A.WAV"
    MOV EDX,dword ptr [EBP + 0x14]      ; 004115e3
    PUSH EDX                            ; 004115e6
    MOV ECX,dword ptr [0x006045f8]      ; 004115e7 | DAT_006045f8
    PUSH ECX                            ; 004115ed
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 004115ee
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004115f3
    JMP 0x004107d6                      ; 004115f6
        ;   XREF to: 004107d6 (UNCONDITIONAL_JUMP)  ; LAB_004107d6
    PUSH 0x3e4ccccd                     ; 004115fb
        ;   Label: LAB_004115fb
    PUSH 0x3dcccccd                     ; 00411600
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00411605
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4bc],EAX     ; 0041160a
    FLD float ptr [ESP + 0x4bc]         ; 00411611
    ADD ESP,0x8                         ; 00411618
    SUB ESP,0x4                         ; 0041161b
    LEA EAX,[ESP + 0x450]               ; 0041161e
    FSTP float ptr [ESP]                ; 00411625
    PUSH EAX                            ; 00411628
    PUSH 0x5b649d                       ; 00411629 | = "RIC-CT0C.WAV"
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041162e
    PUSH EBX                            ; 00411631
    MOV ESI,dword ptr [0x006045f8]      ; 00411632 | DAT_006045f8
    PUSH ESI                            ; 00411638
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 00411639
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 0041163e
    JMP 0x004107d6                      ; 00411641
        ;   XREF to: 004107d6 (UNCONDITIONAL_JUMP)  ; LAB_004107d6
    FLD float ptr [ESP + 0x10]          ; 00411646
        ;   Label: LAB_00411646
    FCOMP double ptr [0x005b652a]       ; 0041164a | DAT_005b652a
    FNSTSW AX                           ; 00411650
    SAHF                                ; 00411652
    JNC 0x0041169f                      ; 00411653
        ;   XREF to: 0041169f (CONDITIONAL_JUMP)  ; LAB_0041169f
    PUSH 0x3e4ccccd                     ; 00411655
    PUSH 0x3dcccccd                     ; 0041165a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0041165f
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4bc],EAX     ; 00411664
    FLD float ptr [ESP + 0x4bc]         ; 0041166b
    ADD ESP,0x8                         ; 00411672
    SUB ESP,0x4                         ; 00411675
    LEA EAX,[ESP + 0x450]               ; 00411678
    FSTP float ptr [ESP]                ; 0041167f
    PUSH EAX                            ; 00411682
    PUSH 0x5b64aa                       ; 00411683 | = "RIC-WD0B.WAV"
    MOV EDI,dword ptr [EBP + 0x14]      ; 00411688
    PUSH EDI                            ; 0041168b
    MOV EAX,[0x006045f8]                ; 0041168c | DAT_006045f8
    PUSH EAX                            ; 00411691
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 00411692
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 00411697
    JMP 0x004107d6                      ; 0041169a
        ;   XREF to: 004107d6 (UNCONDITIONAL_JUMP)  ; LAB_004107d6
    PUSH 0x3e4ccccd                     ; 0041169f
        ;   Label: LAB_0041169f
    PUSH 0x3dcccccd                     ; 004116a4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004116a9
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4bc],EAX     ; 004116ae
    FLD float ptr [ESP + 0x4bc]         ; 004116b5
    ADD ESP,0x8                         ; 004116bc
    SUB ESP,0x4                         ; 004116bf
    LEA EAX,[ESP + 0x450]               ; 004116c2
    FSTP float ptr [ESP]                ; 004116c9
    PUSH EAX                            ; 004116cc
    PUSH 0x5b64b7                       ; 004116cd | = "RIC-WD0C.WAV"
    MOV EBX,dword ptr [EBP + 0x14]      ; 004116d2
    PUSH EBX                            ; 004116d5
    MOV ESI,dword ptr [0x006045f8]      ; 004116d6 | DAT_006045f8
    PUSH ESI                            ; 004116dc
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 004116dd
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004116e2
    JMP 0x004107d6                      ; 004116e5
        ;   XREF to: 004107d6 (UNCONDITIONAL_JUMP)  ; LAB_004107d6
    JBE 0x00411646                      ; 004116ea
        ;   XREF to: 00411646 (CONDITIONAL_JUMP)  ; LAB_00411646
        ;   Label: LAB_004116ea
    CMP EAX,0x8                         ; 004116f0
    JZ 0x00411540                       ; 004116f3
        ;   XREF to: 00411540 (CONDITIONAL_JUMP)  ; LAB_00411540
    PUSH 0x3e4ccccd                     ; 004116f9
        ;   Label: LAB_004116f9
    PUSH 0x3dcccccd                     ; 004116fe
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00411703
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4bc],EAX     ; 00411708
    FLD float ptr [ESP + 0x4bc]         ; 0041170f
    ADD ESP,0x8                         ; 00411716
    SUB ESP,0x4                         ; 00411719
    LEA EAX,[ESP + 0x450]               ; 0041171c
    FSTP float ptr [ESP]                ; 00411723
    PUSH EAX                            ; 00411726
    PUSH 0x5b64c4                       ; 00411727 | = "RIC-DT.WAV"
    MOV EDX,dword ptr [EBP + 0x14]      ; 0041172c
    PUSH EDX                            ; 0041172f
    MOV ECX,dword ptr [0x006045f8]      ; 00411730 | DAT_006045f8
    PUSH ECX                            ; 00411736
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 00411737
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 0041173c
    JMP 0x004107d6                      ; 0041173f
        ;   XREF to: 004107d6 (UNCONDITIONAL_JUMP)  ; LAB_004107d6

