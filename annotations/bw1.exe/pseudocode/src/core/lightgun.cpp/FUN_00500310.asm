; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_lightgun_cpp_FUN_00500310(CWeapon *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_CGhoul_005e6e49
;   TerminatedCString s_CTVBat_005e6e50
;   TerminatedCString s_CBatCreature_005e6e57
;   TerminatedCString s_CWerewolf_005e6e64
;   TerminatedCString s_CSvetlana_005e6e6e
;   TerminatedCString s_CTrigger_CGlass_005e6e82
;   TerminatedCString s_shotgun_noammo_wav_005e6e9a
;   TerminatedCString s_s_in_volume_005e6ead
;   TerminatedCString s_cre_fire_wav_005e6ebb
;   undefined4 DAT_005e6eca
;   undefined4 DAT_005e6ece
;   undefined4 DAT_005e6ed2
;   undefined4 DAT_00603010
;   undefined4 DAT_00603018
;   CConsole* g_CConsolePtr = 007db5f0
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_FUN_0040c550
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0
;   core_lightgun.cpp_FUN_004fff70
;   core_lightgun.cpp_FUN_00500090
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0
;   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500310
        ;   Label: core_lightgun.cpp_FUN_00500310
    PUSH ESI                            ; 00500311
    PUSH EDI                            ; 00500312
    PUSH EBP                            ; 00500313
    MOV EBP,ESP                         ; 00500314
    SUB ESP,0x208                       ; 00500316
    AND ESP,0xfffffff8                  ; 0050031c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050031f
    PUSH EDX                            ; 00500322
    CALL core_weapon.cpp_CWeapon_fire_FUN_005adde0 ; 00500323
        ;   XREF to: 005adde0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005adde0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00500328
    TEST EAX,EAX                        ; 0050032b
    JZ 0x0050034c                       ; 0050032d
        ;   XREF to: 0050034c (CONDITIONAL_JUMP)  ; LAB_0050034c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050032f
    FLD float ptr [EAX + 0x580]         ; 00500332
    FCOMP float ptr [0x00603010]        ; 00500338 | DAT_00603010
    FNSTSW AX                           ; 0050033e
    SAHF                                ; 00500340
    JNC 0x00500376                      ; 00500341
        ;   XREF to: 00500376 (CONDITIONAL_JUMP)  ; LAB_00500376
    XOR EAX,EAX                         ; 00500343
        ;   Label: LAB_00500343
    MOV ESP,EBP                         ; 00500345
    POP EBP                             ; 00500347
    POP EDI                             ; 00500348
    POP ESI                             ; 00500349
    POP EBX                             ; 0050034a
    RET                                 ; 0050034b
    MOV EAX,[0x01d06ab4]                ; 0050034c | DAT_01d06ab4
        ;   Label: LAB_0050034c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00500351
    ADD EAX,0x20                        ; 00500358
    PUSH EAX                            ; 0050035b
    PUSH 0x5e6e9a                       ; 0050035c | = "shotgun-noammo.wav"
    MOV ECX,dword ptr [EBP + 0x14]      ; 00500361
    PUSH ECX                            ; 00500364
    MOV EBX,dword ptr [0x006236b8]      ; 00500365 | DAT_006236b8
    PUSH EBX                            ; 0050036b
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 0050036c
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00500371
    JMP 0x00500343                      ; 00500374
        ;   XREF to: 00500343 (UNCONDITIONAL_JUMP)  ; LAB_00500343
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500376
        ;   Label: LAB_00500376
    MOV ESI,dword ptr [EBP + 0x14]      ; 00500379
    FLD float ptr [EAX + 0x2e8]         ; 0050037c
    MOV dword ptr [EAX + 0x580],0x0     ; 00500382
    PUSH ESI                            ; 0050038c
    FSTP float ptr [EAX + 0x594]        ; 0050038d
    MOV EAX,dword ptr [EAX + 0x154]     ; 00500393
    LEA ESI,[ESP + 0x10c]               ; 00500399
    LEA EDI,[ESP + 0x160]               ; 005003a0
    CALL dword ptr [EAX + 0xe0]         ; 005003a7
    LEA ESI,[ESP + 0x10c]               ; 005003ad
    ADD ESP,0x4                         ; 005003b4
    LEA EAX,[ESP + 0x15c]               ; 005003b7
    MOVSD ES:EDI,ESI                    ; 005003be
    MOVSD ES:EDI,ESI                    ; 005003bf
    MOVSD ES:EDI,ESI                    ; 005003c0
    PUSH EAX                            ; 005003c1
    FLD float ptr [ESP + 0x168]         ; 005003c2
    MOV EDI,dword ptr [EBP + 0x14]      ; 005003c9
    LEA ESI,[ESP + 0xe8]                ; 005003cc
    FADD float ptr [0x005e6eca]         ; 005003d3 | DAT_005e6eca
    PUSH EDI                            ; 005003d9
    FSTP float ptr [ESP + 0x16c]        ; 005003da
    CALL core_actor.cpp_FUN_00408b40    ; 005003e1
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x17c]               ; 005003e6
    ADD ESP,0x8                         ; 005003ed
    LEA ESI,[ESP + 0xe4]                ; 005003f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005003f7
    MOVSD ES:EDI,ESI                    ; 005003fa
    MOVSD ES:EDI,ESI                    ; 005003fb
    MOVSD ES:EDI,ESI                    ; 005003fc
    MOV EAX,dword ptr [EAX + 0x2e8]     ; 005003fd
    MOV dword ptr [ESP + 0x1e0],EAX     ; 00500403
    XOR EAX,EAX                         ; 0050040a
    MOV dword ptr [ESP + 0x180],EAX     ; 0050040c
    MOV dword ptr [ESP + 0x184],EAX     ; 00500413
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 0050041a
    MOV dword ptr [ESP + 0x188],EAX     ; 00500421
    LEA EAX,[ESP + 0x180]               ; 00500428
    PUSH EAX                            ; 0050042f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00500430
    PUSH ECX                            ; 00500433
    LEA ESI,[ESP + 0x1a0]               ; 00500434
    LEA EDI,[ESP + 0x128]               ; 0050043b
    CALL core_actor.cpp_FUN_00408ac0    ; 00500442
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 00500447
    LEA ESI,[ESP + 0x198]               ; 0050044a
    FLD float ptr [ESP + 0x174]         ; 00500451
    FLD float ptr [ESP + 0x178]         ; 00500458
    MOVSD ES:EDI,ESI                    ; 0050045f
    MOVSD ES:EDI,ESI                    ; 00500460
    MOVSD ES:EDI,ESI                    ; 00500461
    FLD float ptr [ESP + 0x17c]         ; 00500462
    LEA EDI,[ESP + 0x1a4]               ; 00500469
    LEA ESI,[ESP + 0x138]               ; 00500470
    FXCH ST2                            ; 00500477
    FADD float ptr [ESP + 0x120]        ; 00500479
    FXCH                                ; 00500480
    FADD float ptr [ESP + 0x124]        ; 00500482
    FXCH ST2                            ; 00500489
    FADD float ptr [ESP + 0x128]        ; 0050048b
    FXCH                                ; 00500492
    FSTP float ptr [ESP + 0x138]        ; 00500494
    FXCH                                ; 0050049b
    FSTP float ptr [ESP + 0x13c]        ; 0050049d
    FSTP float ptr [ESP + 0x140]        ; 005004a4
    MOVSD ES:EDI,ESI                    ; 005004ab
    MOVSD ES:EDI,ESI                    ; 005004ac
    MOVSD ES:EDI,ESI                    ; 005004ad
    MOV EBX,dword ptr [0x00622c18]      ; 005004ae | g_CDemonSetPtr
    LEA EDI,[ESP + 0xfc]                ; 005004b4
    LEA ESI,[ESP + 0x174]               ; 005004bb
    PUSH EBX                            ; 005004c2 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 005004c3
    MOVSD ES:EDI,ESI                    ; 005004c4
    MOVSD ES:EDI,ESI                    ; 005004c5
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 005004c6
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005004cb
    PUSH 0xff                           ; 005004ce
    PUSH 0xff                           ; 005004d3
    PUSH 0xff                           ; 005004d8
    PUSH 0x1                            ; 005004dd
    MOV ESI,dword ptr [0x00622c18]      ; 005004df | g_CDemonSetPtr
    PUSH ESI                            ; 005004e5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310 ; 005004e6
        ;   XREF to: 00559310 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310(CDemonSet * this_ptr, int laser_type, int color_r, int color_g, ...)
    ADD ESP,0x14                        ; 005004eb
    MOV EDI,dword ptr [0x00622c18]      ; 005004ee | g_CDemonSetPtr
    PUSH EDI                            ; 005004f4 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00559210 ; 005004f5
        ;   XREF to: 00559210 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_00559210(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005004fa
    MOV EAX,dword ptr [EBP + 0x14]      ; 005004fd
    PUSH EAX                            ; 00500500
    MOV EDX,dword ptr [0x00622c18]      ; 00500501 | g_CDemonSetPtr
    PUSH EDX                            ; 00500507 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00500508
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0050050d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500510
    MOV ECX,dword ptr [EAX + 0x304]     ; 00500513
    TEST ECX,ECX                        ; 00500519
    JNZ 0x0050063b                      ; 0050051b
        ;   XREF to: 0050063b (CONDITIONAL_JUMP)  ; LAB_0050063b
    MOV EDI,dword ptr [0x00622c18]      ; 00500521 | g_CDemonSetPtr
        ;   Label: LAB_00500521
    PUSH EDI                            ; 00500527 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0 ; 00500528
        ;   XREF to: 00558eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0050052d
    XOR EDI,EDI                         ; 00500530
    LEA EAX,[ESP + 0x1a4]               ; 00500532
        ;   Label: LAB_00500532
    PUSH EAX                            ; 00500539
    LEA EAX,[ESP + 0x100]               ; 0050053a
    PUSH EAX                            ; 00500541
    MOV EAX,[0x00622c18]                ; 00500542 | g_CDemonSetPtr
    PUSH EAX                            ; 00500547 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 00500548
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x210],EAX     ; 0050054d
    FLD float ptr [ESP + 0x210]         ; 00500554
    ADD ESP,0xc                         ; 0050055b
    FLDZ                                ; 0050055e
    FXCH                                ; 00500560
    FST float ptr [ESP + 0x8]           ; 00500562
    FSTP double ptr [ESP]               ; 00500566
    FCOMP double ptr [ESP]              ; 00500569
    FNSTSW AX                           ; 0050056c
    SAHF                                ; 0050056e
    JBE 0x00500650                      ; 0050056f
        ;   XREF to: 00500650 (CONDITIONAL_JUMP)  ; LAB_00500650
    MOV ESI,dword ptr [0x00622c18]      ; 00500575 | g_CDemonSetPtr
        ;   Label: LAB_00500575
    PUSH ESI                            ; 0050057b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060 ; 0050057c
        ;   XREF to: 00559060 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00500581
    MOV EDI,dword ptr [EBP + 0x14]      ; 00500584
    PUSH EDI                            ; 00500587
    CALL core_lightgun.cpp_FUN_00500090 ; 00500588
        ;   XREF to: 00500090 (UNCONDITIONAL_CALL)  ; undefined core_lightgun.cpp_FUN_00500090()
    ADD ESP,0x4                         ; 0050058d
    XOR EAX,EAX                         ; 00500590
    MOV dword ptr [ESP + 0x1f4],EAX     ; 00500592
    LEA EAX,[ESP + 0x84]                ; 00500599
    XOR EDX,EDX                         ; 005005a0
    ADD EAX,0xc                         ; 005005a2
    MOV dword ptr [ESP + 0x1f0],EDX     ; 005005a5
    MOV dword ptr [ESP + 0x1ec],EAX     ; 005005ac
    MOV EAX,[0x00622c18]                ; 005005b3 | g_CDemonSetPtr
        ;   Label: LAB_005005b3
    MOV EDX,dword ptr [ESP + 0x1f4]     ; 005005b8
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 005005bf | g_CDemonSetInstance.field1372328_0x14f0a8
    JGE 0x00500cb2                      ; 005005c5
        ;   XREF to: 00500cb2 (CONDITIONAL_JUMP)  ; LAB_00500cb2
    ADD EAX,dword ptr [ESP + 0x1f0]     ; 005005cb
    MOV EAX,dword ptr [EAX + 0x14f0ac]  ; 005005d2 | g_CDemonSetInstance.field1372332_0x14f0ac
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005005d8
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 005005df
    MOV EAX,dword ptr [EAX + 0x154]     ; 005005e6
    PUSH ECX                            ; 005005ec
    CALL dword ptr [EAX + 0xe0]         ; 005005ed
    ADD ESP,0x4                         ; 005005f3
    TEST EAX,EAX                        ; 005005f6
    JZ 0x005007ec                       ; 005005f8
        ;   XREF to: 005007ec (CONDITIONAL_JUMP)  ; LAB_005007ec
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 005005fe
        ;   Label: LAB_005005fe
    PUSH ECX                            ; 00500605
    CALL core_lightgun.cpp_FUN_004fff70 ; 00500606
        ;   XREF to: 004fff70 (UNCONDITIONAL_CALL)  ; undefined core_lightgun.cpp_FUN_004fff70()
    ADD ESP,0x4                         ; 0050060b
    TEST EAX,EAX                        ; 0050060e
    JNZ 0x00500809                      ; 00500610
        ;   XREF to: 00500809 (CONDITIONAL_JUMP)  ; LAB_00500809
    MOV ESI,dword ptr [ESP + 0x1f4]     ; 00500616
        ;   Label: LAB_00500616
    MOV EBX,dword ptr [ESP + 0x1f0]     ; 0050061d
    INC ESI                             ; 00500624
    ADD EBX,0x4                         ; 00500625
    MOV dword ptr [ESP + 0x1f4],ESI     ; 00500628
    MOV dword ptr [ESP + 0x1f0],EBX     ; 0050062f
    JMP 0x005005b3                      ; 00500636
        ;   XREF to: 005005b3 (UNCONDITIONAL_JUMP)  ; LAB_005005b3
    PUSH ECX                            ; 0050063b
        ;   Label: LAB_0050063b
    MOV ESI,dword ptr [0x00622c18]      ; 0050063c | g_CDemonSetPtr
    PUSH ESI                            ; 00500642 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00500643
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00500648
    JMP 0x00500521                      ; 0050064b
        ;   XREF to: 00500521 (UNCONDITIONAL_JUMP)  ; LAB_00500521
    FLD1                                ; 00500650
        ;   Label: LAB_00500650
    FCOMP double ptr [ESP]              ; 00500652
    FNSTSW AX                           ; 00500655
    SAHF                                ; 00500657
    JC 0x00500575                       ; 00500658
        ;   XREF to: 00500575 (CONDITIONAL_JUMP)  ; LAB_00500575
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050065e
    FLD float ptr [EAX + 0x2e8]         ; 00500661
    FMUL float ptr [ESP + 0x8]          ; 00500667
    MOV EDX,dword ptr [0x007c637c]      ; 0050066b | g_CCharacterClassInfo.name_hash
    FSTP float ptr [EAX + 0x594]        ; 00500671
    MOV EAX,[0x00622c18]                ; 00500677 | g_CDemonSetPtr
    PUSH EDX                            ; 0050067c
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 0050067d | g_CDemonSetInstance.field1364292_0x14d144
    PUSH ECX                            ; 00500683
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00500684
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00500689
    MOV dword ptr [ESP + 0x1f8],EAX     ; 0050068c
    TEST EAX,EAX                        ; 00500693
    JZ 0x005006b4                       ; 00500695
        ;   XREF to: 005006b4 (CONDITIONAL_JUMP)  ; LAB_005006b4
    PUSH EAX                            ; 00500697
    MOV EDX,dword ptr [EAX + 0x154]     ; 00500698
    CALL dword ptr [EDX + 0x10c]        ; 0050069e
    ADD ESP,0x4                         ; 005006a4
    TEST EAX,EAX                        ; 005006a7
    JLE 0x005006b4                      ; 005006a9
        ;   XREF to: 005006b4 (CONDITIONAL_JUMP)  ; LAB_005006b4
    XOR EBX,EBX                         ; 005006ab
    MOV dword ptr [ESP + 0x1f8],EBX     ; 005006ad
    MOV ESI,dword ptr [0x01cd0dfc]      ; 005006b4 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_005006b4
    MOV EAX,[0x00622c18]                ; 005006ba | g_CDemonSetPtr
    PUSH ESI                            ; 005006bf
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005006c0 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 005006c6
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005006c7
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV ECX,dword ptr [0x02c8ae44]      ; 005006cc | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 005006d2
    MOV ESI,EAX                         ; 005006d5
    MOV EAX,[0x00622c18]                ; 005006d7 | g_CDemonSetPtr
    PUSH ECX                            ; 005006dc
    MOV EBX,dword ptr [EAX + 0x14d144]  ; 005006dd | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EBX                            ; 005006e3
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005006e4
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 005006e9
    MOV EBX,EAX                         ; 005006ec
    MOV dword ptr [ESP + 0x1e8],EAX     ; 005006ee
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 005006f5
    TEST EAX,EAX                        ; 005006fc
    JZ 0x0050075d                       ; 005006fe
        ;   XREF to: 0050075d (CONDITIONAL_JUMP)  ; LAB_0050075d
    MOV EDX,dword ptr [ESP + 0x1f8]     ; 00500700
    MOV EAX,dword ptr [EAX + 0x154]     ; 00500707
    PUSH EDX                            ; 0050070d
    CALL dword ptr [EAX + 0xe0]         ; 0050070e
    ADD ESP,0x4                         ; 00500714
    TEST EAX,EAX                        ; 00500717
    JZ 0x00500575                       ; 00500719
        ;   XREF to: 00500575 (CONDITIONAL_JUMP)  ; LAB_00500575
    TEST EDI,EDI                        ; 0050071f
    JNZ 0x00500575                      ; 00500721
        ;   XREF to: 00500575 (CONDITIONAL_JUMP)  ; LAB_00500575
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500727
    MOV ECX,dword ptr [0x00622c18]      ; 0050072a | g_CDemonSetPtr
    FLD float ptr [0x00603010]          ; 00500730 | DAT_00603010
    PUSH ECX                            ; 00500736 | g_CDemonSetInstance
    FSTP float ptr [EAX + 0x580]        ; 00500737
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060 ; 0050073d
        ;   XREF to: 00559060 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00500742
    MOV EBX,dword ptr [0x00622c18]      ; 00500745 | g_CDemonSetPtr
    PUSH EBX                            ; 0050074b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0050074c
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00500751
    XOR EAX,EAX                         ; 00500754
    MOV ESP,EBP                         ; 00500756
    POP EBP                             ; 00500758
    POP EDI                             ; 00500759
    POP ESI                             ; 0050075a
    POP EBX                             ; 0050075b
    RET                                 ; 0050075c
    TEST ESI,ESI                        ; 0050075d
        ;   Label: LAB_0050075d
    JNZ 0x005007ce                      ; 0050075f
        ;   XREF to: 005007ce (CONDITIONAL_JUMP)  ; LAB_005007ce
    TEST EBX,EBX                        ; 00500761
    JZ 0x005007dd                       ; 00500763
        ;   XREF to: 005007dd (CONDITIONAL_JUMP)  ; LAB_005007dd
    PUSH EBX                            ; 00500765
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0 ; 00500766
        ;   XREF to: 0059bdd0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 0050076b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050076e
    PUSH EDX                            ; 00500771
    PUSH EBX                            ; 00500772
    CALL core_trigger.cpp_FUN_0059bdf0  ; 00500773
        ;   XREF to: 0059bdf0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_FUN_0059bdf0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00500778
    TEST EAX,EAX                        ; 0050077b
    JZ 0x005007b2                       ; 0050077d
        ;   XREF to: 005007b2 (CONDITIONAL_JUMP)  ; LAB_005007b2
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050077f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500782
    PUSH ECX                            ; 00500785
    MOV EAX,dword ptr [EAX + 0x154]     ; 00500786
    CALL dword ptr [EAX + 0xec]         ; 0050078c
    MOV dword ptr [ESP + 0x208],EAX     ; 00500792
    FLD float ptr [ESP + 0x208]         ; 00500799
    ADD ESP,0x4                         ; 005007a0
    SUB ESP,0x4                         ; 005007a3
    FSTP float ptr [ESP]                ; 005007a6
    PUSH EBX                            ; 005007a9
    CALL core_trigger.cpp_FUN_0059be30  ; 005007aa
        ;   XREF to: 0059be30 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_FUN_0059be30(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 005007af
    MOV EBX,dword ptr [ESP + 0x1e8]     ; 005007b2
        ;   Label: LAB_005007b2
    PUSH EBX                            ; 005007b9
    MOV ESI,dword ptr [0x00622c18]      ; 005007ba | g_CDemonSetPtr
    PUSH ESI                            ; 005007c0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005007c1
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005007c6
    JMP 0x00500575                      ; 005007c9
        ;   XREF to: 00500575 (UNCONDITIONAL_JUMP)  ; LAB_00500575
    PUSH ESI                            ; 005007ce
        ;   Label: LAB_005007ce
    MOV EAX,[0x00622c18]                ; 005007cf | g_CDemonSetPtr
    PUSH EAX                            ; 005007d4 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005007d5
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005007da
    INC EDI                             ; 005007dd
        ;   Label: LAB_005007dd
    CMP EDI,0x1                         ; 005007de
    JL 0x00500532                       ; 005007e1
        ;   XREF to: 00500532 (CONDITIONAL_JUMP)  ; LAB_00500532
    JMP 0x00500575                      ; 005007e7
        ;   XREF to: 00500575 (UNCONDITIONAL_JUMP)  ; LAB_00500575
    PUSH 0x5e6e49                       ; 005007ec | = "CGhoul"
        ;   Label: LAB_005007ec
    MOV EBX,dword ptr [ESP + 0x1e8]     ; 005007f1
    PUSH EBX                            ; 005007f8
    CALL core_actor.cpp_FUN_0040c550    ; 005007f9
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005007fe
    TEST EAX,EAX                        ; 00500801
    JZ 0x00500b52                       ; 00500803
        ;   XREF to: 00500b52 (CONDITIONAL_JUMP)  ; LAB_00500b52
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 00500809
        ;   Label: LAB_00500809
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 00500810
    PUSH EBX                            ; 00500817
    MOV EAX,dword ptr [EAX + 0x154]     ; 00500818
    LEA ESI,[ESP + 0xd0]                ; 0050081e
    CALL dword ptr [EAX + 0x1c]         ; 00500825
    ADD ESP,0x4                         ; 00500828
    LEA EAX,[ESP + 0xc0]                ; 0050082b
    PUSH EAX                            ; 00500832
    LEA EAX,[ESP + 0xb8]                ; 00500833
    PUSH EAX                            ; 0050083a
    LEA EAX,[EBX + 0x30]                ; 0050083b
    PUSH EAX                            ; 0050083e
    ADD EBX,0x20                        ; 0050083f
    LEA EDI,[ESP + 0xc0]                ; 00500842
    PUSH EBX                            ; 00500849
    MOV ECX,0x6                         ; 0050084a
    LEA ESI,[ESP + 0xdc]                ; 0050084f
    PUSH 0x1ccc3e4                      ; 00500856
    MOVSD.REP ES:EDI,ESI                ; 0050085b
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0 ; 0050085d
        ;   XREF to: 00452de0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0(CDemonCamera * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * bbox_min, ...)
    ADD ESP,0x14                        ; 00500862
    TEST EAX,EAX                        ; 00500865
    JZ 0x00500616                       ; 00500867
        ;   XREF to: 00500616 (CONDITIONAL_JUMP)  ; LAB_00500616
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 0050086d
    PUSH ESI                            ; 00500874
    PUSH 0x5e6ead                       ; 00500875 | = "%s in volume\n"
    MOV EDI,dword ptr [0x00611100]      ; 0050087a | g_CConsolePtr
    PUSH EDI                            ; 00500880 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00500881
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EDX,dword ptr [0x01d06ab4]      ; 00500886 | DAT_01d06ab4
    MOV EDX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 0050088c
    LEA ESI,[ESP + 0x15c]               ; 00500893
    LEA EAX,[EDX + 0x20]                ; 0050089a
    LEA EDI,[ESP + 0x1d4]               ; 0050089d
    ADD ESP,0xc                         ; 005008a4
    FLD float ptr [EAX]                 ; 005008a7
    FLD float ptr [EAX + 0x4]           ; 005008a9
    FLD float ptr [EAX + 0x8]           ; 005008ac
    FXCH ST2                            ; 005008af
    FSUB float ptr [EBX]                ; 005008b1
    FXCH                                ; 005008b3
    FSUB float ptr [EBX + 0x4]          ; 005008b5
    FXCH ST2                            ; 005008b8
    FSUB float ptr [EBX + 0x8]          ; 005008ba
    FXCH                                ; 005008bd
    FSTP float ptr [ESP + 0x150]        ; 005008bf
    FXCH                                ; 005008c6
    FSTP float ptr [ESP + 0x154]        ; 005008c8
    FSTP float ptr [ESP + 0x158]        ; 005008cf
    MOVSD ES:EDI,ESI                    ; 005008d6
    MOVSD ES:EDI,ESI                    ; 005008d7
    MOVSD ES:EDI,ESI                    ; 005008d8
    FLD float ptr [ESP + 0x1cc]         ; 005008d9
    FMUL ST0                            ; 005008e0
    FLD float ptr [ESP + 0x1c8]         ; 005008e2
    FMUL ST0                            ; 005008e9
    FADDP                               ; 005008eb
    FLD float ptr [ESP + 0x1d0]         ; 005008ed
    FMUL ST0                            ; 005008f4
    FADDP                               ; 005008f6
    FSQRT                               ; 005008f8
    FCOMP double ptr [0x005e6ed2]       ; 005008fa | DAT_005e6ed2
    FNSTSW AX                           ; 00500900
    SAHF                                ; 00500902
    JC 0x00500baf                       ; 00500903
        ;   XREF to: 00500baf (CONDITIONAL_JUMP)  ; LAB_00500baf
    LEA EAX,[ESP + 0xfc]                ; 00500909
        ;   Label: LAB_00500909
    MOV ESI,dword ptr [0x00622c18]      ; 00500910 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x200],EAX     ; 00500916
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 0050091d
    PUSH ESI                            ; 00500924 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x200],EAX     ; 00500925
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0 ; 0050092c
        ;   XREF to: 00558eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00500931
    MOV EDI,dword ptr [ESP + 0x1e4]     ; 00500934
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 0050093b
    PUSH EDI                            ; 00500942
    MOV EAX,dword ptr [EAX + 0x154]     ; 00500943
    LEA ESI,[ESP + 0xa0]                ; 00500949
    CALL dword ptr [EAX + 0x1c]         ; 00500950
    MOV ECX,0x6                         ; 00500953
    LEA EDI,[ESP + 0x88]                ; 00500958
    ADD ESP,0x4                         ; 0050095f
    LEA EAX,[ESP + 0xf0]                ; 00500962
    LEA ESI,[ESP + 0x9c]                ; 00500969
    PUSH EAX                            ; 00500970
    MOVSD.REP ES:EDI,ESI                ; 00500971
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 00500973
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x1c0]               ; 00500978
    ADD ESP,0x4                         ; 0050097f
    LEA ESI,[ESP + 0xf0]                ; 00500982
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00500989
    FLD float ptr [ESP + 0x84]          ; 00500990
    FADD float ptr [EAX]                ; 00500997
    FLD float ptr [ESP + 0x88]          ; 00500999
    FXCH                                ; 005009a0
    FSTP float ptr [ESP + 0xf0]         ; 005009a2
    FADD float ptr [EAX + 0x4]          ; 005009a9
    FLD float ptr [ESP + 0x8c]          ; 005009ac
    FXCH                                ; 005009b3
    FSTP float ptr [ESP + 0xf4]         ; 005009b5
    FADD float ptr [EAX + 0x8]          ; 005009bc
    LEA EAX,[ESP + 0x144]               ; 005009bf
    FSTP float ptr [ESP + 0xf8]         ; 005009c6
    PUSH EAX                            ; 005009cd
    MOVSD ES:EDI,ESI                    ; 005009ce
    MOVSD ES:EDI,ESI                    ; 005009cf
    MOVSD ES:EDI,ESI                    ; 005009d0
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 005009d1
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 005009d6
    FLD float ptr [0x005e6ece]          ; 005009d9 | DAT_005e6ece
    FLD float ptr [ESP + 0x1bc]         ; 005009df
    FMUL ST1                            ; 005009e6
    FLD float ptr [ESP + 0x1c0]         ; 005009e8
    FMUL ST2                            ; 005009ef
    FLD float ptr [ESP + 0x1c4]         ; 005009f1
    FMULP ST3                           ; 005009f8
    LEA EDI,[ESP + 0x1b0]               ; 005009fa
    LEA EAX,[ESP + 0x1b0]               ; 00500a01
    LEA ESI,[ESP + 0x144]               ; 00500a08
    PUSH EAX                            ; 00500a0f
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 00500a10
    FXCH                                ; 00500a17
    FSTP float ptr [ESP + 0x148]        ; 00500a19
    FSTP float ptr [ESP + 0x14c]        ; 00500a20
    FSTP float ptr [ESP + 0x150]        ; 00500a27
    MOVSD ES:EDI,ESI                    ; 00500a2e
    MOVSD ES:EDI,ESI                    ; 00500a2f
    MOVSD ES:EDI,ESI                    ; 00500a30
    PUSH EAX                            ; 00500a31
    LEA ESI,[ESP + 0x170]               ; 00500a32
    LEA EDI,[ESP + 0x1dc]               ; 00500a39
    CALL core_actor.cpp_FUN_00408b40    ; 00500a40
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x170]               ; 00500a45
    ADD ESP,0x8                         ; 00500a4c
    MOVSD ES:EDI,ESI                    ; 00500a4f
    MOVSD ES:EDI,ESI                    ; 00500a50
    MOVSD ES:EDI,ESI                    ; 00500a51
    XOR EBX,EBX                         ; 00500a52
    XOR ESI,ESI                         ; 00500a54
    XOR EDI,EDI                         ; 00500a56
    LEA EAX,[ESP + 0x1d4]               ; 00500a58
        ;   Label: LAB_00500a58
    PUSH EAX                            ; 00500a5f
    MOV EDX,dword ptr [ESP + 0x204]     ; 00500a60
    PUSH EDX                            ; 00500a67
    MOV ECX,dword ptr [0x00622c18]      ; 00500a68 | g_CDemonSetPtr
    PUSH ECX                            ; 00500a6e | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 00500a6f
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV EAX,[0x00622c18]                ; 00500a74 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00500a79 | g_CDemonSetInstance.field1364292_0x14d144
    ADD ESP,0xc                         ; 00500a7f
    CMP EDI,EDX                         ; 00500a82
    JNZ 0x00500c7b                      ; 00500a84
        ;   XREF to: 00500c7b (CONDITIONAL_JUMP)  ; LAB_00500c7b
    MOV EBX,dword ptr [0x00622c18]      ; 00500a8a | g_CDemonSetPtr
        ;   Label: LAB_00500a8a
    PUSH EBX                            ; 00500a90 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060 ; 00500a91
        ;   XREF to: 00559060 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00500a96
    TEST ESI,ESI                        ; 00500a99
    JZ 0x00500616                       ; 00500a9b
        ;   XREF to: 00500616 (CONDITIONAL_JUMP)  ; LAB_00500616
    LEA EAX,[ESP + 0x48]                ; 00500aa1
    PUSH EAX                            ; 00500aa5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00500aa6
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00500aab
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 00500aae
    PUSH ESI                            ; 00500ab5
    CALL core_lightgun.cpp_FUN_004fff70 ; 00500ab6
        ;   XREF to: 004fff70 (UNCONDITIONAL_CALL)  ; undefined core_lightgun.cpp_FUN_004fff70()
    ADD ESP,0x4                         ; 00500abb
    TEST EAX,EAX                        ; 00500abe
    JZ 0x00500ca5                       ; 00500ac0
        ;   XREF to: 00500ca5 (CONDITIONAL_JUMP)  ; LAB_00500ca5
    MOV EDX,dword ptr [EBP + 0x14]      ; 00500ac6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500ac9
    PUSH EDX                            ; 00500acc
    MOV EAX,dword ptr [EAX + 0x154]     ; 00500acd
    CALL dword ptr [EAX + 0xec]         ; 00500ad3
    MOV dword ptr [ESP + 0x208],EAX     ; 00500ad9
    FLD float ptr [ESP + 0x208]         ; 00500ae0
    ADD ESP,0x4                         ; 00500ae7
    FSTP float ptr [ESP + 0x4c]         ; 00500aea
    MOV ECX,0x6c                        ; 00500aee
        ;   Label: LAB_00500aee
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500af3
    MOV EDX,dword ptr [EBP + 0x14]      ; 00500af6
    XOR EBX,EBX                         ; 00500af9
    MOV dword ptr [ESP + 0x78],ECX      ; 00500afb
    MOV dword ptr [ESP + 0x50],EBX      ; 00500aff
    MOV dword ptr [ESP + 0x5c],EBX      ; 00500b03
    MOV dword ptr [ESP + 0x58],EBX      ; 00500b07
    MOV dword ptr [ESP + 0x54],EBX      ; 00500b0b
    MOV dword ptr [ESP + 0x7c],EAX      ; 00500b0f
    PUSH EDX                            ; 00500b13
    MOV EAX,dword ptr [EAX + 0x154]     ; 00500b14
    CALL dword ptr [EAX + 0x94]         ; 00500b1a
    ADD ESP,0x4                         ; 00500b20
    MOV dword ptr [ESP + 0x80],EAX      ; 00500b23
    LEA EAX,[ESP + 0x48]                ; 00500b2a
    MOV EDX,dword ptr [ESP + 0x1e4]     ; 00500b2e
    PUSH EAX                            ; 00500b35
    MOV ECX,dword ptr [ESP + 0x1e8]     ; 00500b36
    MOV EDX,dword ptr [EDX + 0x154]     ; 00500b3d
    PUSH ECX                            ; 00500b43
    CALL dword ptr [EDX + 0x108]        ; 00500b44
    ADD ESP,0x8                         ; 00500b4a
    JMP 0x00500616                      ; 00500b4d
        ;   XREF to: 00500616 (UNCONDITIONAL_JUMP)  ; LAB_00500616
    PUSH 0x5e6e50                       ; 00500b52 | = "CTVBat"
        ;   Label: LAB_00500b52
    PUSH EBX                            ; 00500b57
    CALL core_actor.cpp_FUN_0040c550    ; 00500b58
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00500b5d
    TEST EAX,EAX                        ; 00500b60
    JNZ 0x00500809                      ; 00500b62
        ;   XREF to: 00500809 (CONDITIONAL_JUMP)  ; LAB_00500809
    PUSH 0x5e6e57                       ; 00500b68 | = "CBatCreature"
    PUSH EBX                            ; 00500b6d
    CALL core_actor.cpp_FUN_0040c550    ; 00500b6e
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00500b73
    TEST EAX,EAX                        ; 00500b76
    JNZ 0x00500809                      ; 00500b78
        ;   XREF to: 00500809 (CONDITIONAL_JUMP)  ; LAB_00500809
    PUSH 0x5e6e64                       ; 00500b7e | = "CWerewolf"
    PUSH EBX                            ; 00500b83
    CALL core_actor.cpp_FUN_0040c550    ; 00500b84
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00500b89
    TEST EAX,EAX                        ; 00500b8c
    JNZ 0x00500809                      ; 00500b8e
        ;   XREF to: 00500809 (CONDITIONAL_JUMP)  ; LAB_00500809
    PUSH 0x5e6e6e                       ; 00500b94 | = "CSvetlana"
    PUSH EBX                            ; 00500b99
    CALL core_actor.cpp_FUN_0040c550    ; 00500b9a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00500b9f
    TEST EAX,EAX                        ; 00500ba2
    JNZ 0x00500809                      ; 00500ba4
        ;   XREF to: 00500809 (CONDITIONAL_JUMP)  ; LAB_00500809
    JMP 0x005005fe                      ; 00500baa
        ;   XREF to: 005005fe (UNCONDITIONAL_JUMP)  ; LAB_005005fe
    PUSH EBX                            ; 00500baf
        ;   Label: LAB_00500baf
    PUSH EDX                            ; 00500bb0
    LEA ESI,[ESP + 0x11c]               ; 00500bb1
    LEA EDI,[ESP + 0x194]               ; 00500bb8
    CALL core_actor.cpp_FUN_00408bb0    ; 00500bbf
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x11c]               ; 00500bc4
    ADD ESP,0x8                         ; 00500bcb
    XOR EAX,EAX                         ; 00500bce
    MOVSD ES:EDI,ESI                    ; 00500bd0
    MOVSD ES:EDI,ESI                    ; 00500bd1
    MOVSD ES:EDI,ESI                    ; 00500bd2
    MOV dword ptr [ESP + 0x190],EAX     ; 00500bd3
    LEA EAX,[ESP + 0x18c]               ; 00500bda
    PUSH EAX                            ; 00500be1
    LEA ESI,[ESP + 0x130]               ; 00500be2
    CALL core_vecdir.cpp_FUN_005a7520   ; 00500be9
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    ADD ESP,0x4                         ; 00500bee
    LEA EAX,[ESP + 0xc]                 ; 00500bf1
    PUSH EAX                            ; 00500bf5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00500bf6
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00500bfb
    MOV EDX,dword ptr [EBP + 0x14]      ; 00500bfe
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500c01
    PUSH EDX                            ; 00500c04
    MOV EAX,dword ptr [EAX + 0x154]     ; 00500c05
    CALL dword ptr [EAX + 0xec]         ; 00500c0b
    MOV dword ptr [ESP + 0x208],EAX     ; 00500c11
    MOV ECX,0x6c                        ; 00500c18
    FLD float ptr [ESP + 0x208]         ; 00500c1d
    ADD ESP,0x4                         ; 00500c24
    LEA EAX,[ESP + 0xc]                 ; 00500c27
    MOV EDX,dword ptr [ESP + 0x1e4]     ; 00500c2b
    PUSH EAX                            ; 00500c32
    MOV EBX,dword ptr [ESP + 0x1e8]     ; 00500c33
    MOV dword ptr [ESP + 0x40],ECX      ; 00500c3a
    PUSH EBX                            ; 00500c3e
    FSTP float ptr [ESP + 0x18]         ; 00500c3f
    MOV EDX,dword ptr [EDX + 0x154]     ; 00500c43
    CALL dword ptr [EDX + 0x108]        ; 00500c49
    ADD ESP,0x8                         ; 00500c4f
    JMP 0x00500909                      ; 00500c52
        ;   XREF to: 00500909 (UNCONDITIONAL_JUMP)  ; LAB_00500909
    MOV EAX,[0x00622c18]                ; 00500c57 | g_CDemonSetPtr
        ;   Label: LAB_00500c57
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 00500c5c | g_CDemonSetInstance.field1364292_0x14d144
    PUSH ECX                            ; 00500c62
    PUSH EAX                            ; 00500c63 | g_CDemonSetInstance
    INC EBX                             ; 00500c64
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00500c65
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00500c6a
    CMP EBX,0x3                         ; 00500c6d
    JL 0x00500a58                       ; 00500c70
        ;   XREF to: 00500a58 (CONDITIONAL_JUMP)  ; LAB_00500a58
    JMP 0x00500a8a                      ; 00500c76
        ;   XREF to: 00500a8a (UNCONDITIONAL_JUMP)  ; LAB_00500a8a
    CMP EDX,dword ptr [ESP + 0x1fc]     ; 00500c7b
        ;   Label: LAB_00500c7b
    JNZ 0x00500c8e                      ; 00500c82
        ;   XREF to: 00500c8e (CONDITIONAL_JUMP)  ; LAB_00500c8e
    MOV ESI,0x1                         ; 00500c84
    JMP 0x00500a8a                      ; 00500c89
        ;   XREF to: 00500a8a (UNCONDITIONAL_JUMP)  ; LAB_00500a8a
    PUSH 0x5e6e82                       ; 00500c8e | = "CTrigger || CGlass"
        ;   Label: LAB_00500c8e
    PUSH EDX                            ; 00500c93
    CALL core_actor.cpp_FUN_0040c550    ; 00500c94
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00500c99
    TEST EAX,EAX                        ; 00500c9c
    JNZ 0x00500c57                      ; 00500c9e
        ;   XREF to: 00500c57 (CONDITIONAL_JUMP)  ; LAB_00500c57
    JMP 0x00500a8a                      ; 00500ca0
        ;   XREF to: 00500a8a (UNCONDITIONAL_JUMP)  ; LAB_00500a8a
    MOV dword ptr [ESP + 0x4c],0x3dcccccd ; 00500ca5
        ;   Label: LAB_00500ca5
    JMP 0x00500aee                      ; 00500cad
        ;   XREF to: 00500aee (UNCONDITIONAL_JUMP)  ; LAB_00500aee
    PUSH EAX                            ; 00500cb2 | g_CDemonSetInstance
        ;   Label: LAB_00500cb2
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00500cb3
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00500cb8
    LEA EAX,[ESP + 0x174]               ; 00500cbb
    PUSH EAX                            ; 00500cc2
    PUSH 0x5e6ebb                       ; 00500cc3 | = "cre-fire.wav"
    MOV EBX,dword ptr [EBP + 0x14]      ; 00500cc8
    PUSH EBX                            ; 00500ccb
    MOV ESI,dword ptr [0x006236b8]      ; 00500ccc | DAT_006236b8
    PUSH ESI                            ; 00500cd2
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 00500cd3
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00500cd8
    MOV EDI,dword ptr [EBX + 0x57c]     ; 00500cdb
    PUSH dword ptr [0x00603018]         ; 00500ce1 | DAT_00603018
    PUSH EDI                            ; 00500ce7
    CALL sound_sndmain.cpp_FUN_00573950 ; 00500ce8
        ;   XREF to: 00573950 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573950()
    FLD float ptr [0x00603010]          ; 00500ced | DAT_00603010
    MOV dword ptr [EBX + 0x578],0x1     ; 00500cf3
    MOV EAX,0x1                         ; 00500cfd
    MOV dword ptr [EBX + 0x588],0x1     ; 00500d02
    ADD ESP,0x8                         ; 00500d0c
    FSTP float ptr [EBX + 0x300]        ; 00500d0f
    MOV ESP,EBP                         ; 00500d15
    POP EBP                             ; 00500d17
    POP EDI                             ; 00500d18
    POP ESI                             ; 00500d19
    POP EBX                             ; 00500d1a
    RET                                 ; 00500d1b

