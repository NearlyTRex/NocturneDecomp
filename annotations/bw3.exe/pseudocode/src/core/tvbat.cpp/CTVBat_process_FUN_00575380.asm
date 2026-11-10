; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_CTVBat_process_FUN_00575380(CTVBat *this_ptr,float delta_time)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_CVampireBoss_005d6faf
;   TerminatedCString s_core_tvbat_cpp_005d6fbc
;   TerminatedCString s_CTVBat_process_can_t_fol_005d6fce
;   undefined4 DAT_005d7007
;   undefined4 DAT_005d700f
;   undefined4 DAT_005d7017
;   undefined4 DAT_005d701f
;   undefined4 DAT_005d7027
;   undefined4 DAT_005d702f
;   undefined4 DAT_005d7037
;   undefined4 DAT_005d703f
;   undefined4 DAT_005d7047
;   undefined4 DAT_005d704f
;   undefined4 DAT_005d7057
;   undefined4 DAT_005d705b
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dtrace.cpp_FUN_00473cd0
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0
;   core_main.c_FUN_004e4330
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80
;   crt_math.c_atan2_FUN_005a5cc1
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_FUN_00557170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575380
        ;   Label: core_tvbat.cpp_CTVBat_process_FUN_00575380
    PUSH ESI                            ; 00575381
    PUSH EDI                            ; 00575382
    PUSH EBP                            ; 00575383
    MOV EBP,ESP                         ; 00575384
    SUB ESP,0x1e4                       ; 00575386
    AND ESP,0xfffffff8                  ; 0057538c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057538f
    CMP dword ptr [EBX + 0xd1fc],0x0    ; 00575392
    JZ 0x005753e6                       ; 00575399
        ;   XREF to: 005753e6 (CONDITIONAL_JUMP)  ; LAB_005753e6
    CMP dword ptr [EBX + 0xd288],0x0    ; 0057539b
    JNZ 0x005753e6                      ; 005753a2
        ;   XREF to: 005753e6 (CONDITIONAL_JUMP)  ; LAB_005753e6
    XOR ESI,ESI                         ; 005753a4
    XOR EDI,EDI                         ; 005753a6
    MOV EAX,[0x00603b28]                ; 005753a8 | g_CDemonSetPtr
        ;   Label: LAB_005753a8
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 005753ad | g_CDemonSetInstance.enemy_count
    JGE 0x005753e6                      ; 005753b3
        ;   XREF to: 005753e6 (CONDITIONAL_JUMP)  ; LAB_005753e6
    PUSH 0x5d6faf                       ; 005753b5 | = "CVampireBoss"
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 005753ba
    PUSH ECX                            ; 005753c1
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 005753c2
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005753c7
    TEST EAX,EAX                        ; 005753ca
    JNZ 0x005753d4                      ; 005753cc
        ;   XREF to: 005753d4 (CONDITIONAL_JUMP)  ; LAB_005753d4
    INC EDI                             ; 005753ce
    ADD ESI,0x4                         ; 005753cf
    JMP 0x005753a8                      ; 005753d2
        ;   XREF to: 005753a8 (UNCONDITIONAL_JUMP)  ; LAB_005753a8
    MOV EAX,[0x00603b28]                ; 005753d4 | g_CDemonSetPtr
        ;   Label: LAB_005753d4
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 005753d9
    MOV dword ptr [EBX + 0xd288],EAX    ; 005753e0
    CMP dword ptr [EBX + 0xd1fc],0x0    ; 005753e6
        ;   Label: LAB_005753e6
    JZ 0x00575428                       ; 005753ed
        ;   XREF to: 00575428 (CONDITIONAL_JUMP)  ; LAB_00575428
    MOV EDI,dword ptr [EBX + 0xd288]    ; 005753ef
    TEST EDI,EDI                        ; 005753f5
    JZ 0x00575428                       ; 005753f7
        ;   XREF to: 00575428 (CONDITIONAL_JUMP)  ; LAB_00575428
    LEA ESI,[EBX + 0xd1dc]              ; 005753f9
    LEA EAX,[EDI + 0x20]                ; 005753ff
    CMP ESI,EAX                         ; 00575402
    JZ 0x00575416                       ; 00575404
        ;   XREF to: 00575416 (CONDITIONAL_JUMP)  ; LAB_00575416
    MOV EDX,dword ptr [EAX]             ; 00575406
    MOV dword ptr [ESI],EDX             ; 00575408
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057540a
    MOV dword ptr [ESI + 0x4],EDX       ; 0057540d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00575410
    MOV dword ptr [ESI + 0x8],EDX       ; 00575413
    FLD float ptr [EBX + 0xd1e0]        ; 00575416
        ;   Label: LAB_00575416
    FADD float ptr [0x005d7007]         ; 0057541c | DAT_005d7007
    FSTP float ptr [EBX + 0xd1e0]       ; 00575422
    MOV EAX,dword ptr [EBX + 0xd210]    ; 00575428
        ;   Label: LAB_00575428
    CMP EAX,0x2                         ; 0057542e
    JZ 0x00575afd                       ; 00575431
        ;   XREF to: 00575afd (CONDITIONAL_JUMP)  ; LAB_00575afd
    CMP EAX,0x3                         ; 00575437
    JZ 0x00575afd                       ; 0057543a
        ;   XREF to: 00575afd (CONDITIONAL_JUMP)  ; LAB_00575afd
    CMP EAX,0x1                         ; 00575440
    JZ 0x00575b04                       ; 00575443
        ;   XREF to: 00575b04 (CONDITIONAL_JUMP)  ; LAB_00575b04
    LEA EDI,[ESP + 0x180]               ; 00575449
    LEA ESI,[EBX + 0x20]                ; 00575450
    MOVSD ES:EDI,ESI                    ; 00575453
    MOVSD ES:EDI,ESI                    ; 00575454
    MOVSD ES:EDI,ESI                    ; 00575455
    CMP dword ptr [EBX + 0xd1fc],0x0    ; 00575456
    JZ 0x00575e62                       ; 0057545d
        ;   XREF to: 00575e62 (CONDITIONAL_JUMP)  ; LAB_00575e62
    MOV dword ptr [EBX + 0xcde4],0x0    ; 00575463
    LEA EAX,[ESP + 0xa8]                ; 0057546d
        ;   Label: LAB_0057546d
    LEA ESI,[EBX + 0xd1dc]              ; 00575474
    CMP EAX,ESI                         ; 0057547a
    JZ 0x0057549b                       ; 0057547c
        ;   XREF to: 0057549b (CONDITIONAL_JUMP)  ; LAB_0057549b
    MOV EAX,dword ptr [ESI]             ; 0057547e
    MOV dword ptr [ESP + 0xa8],EAX      ; 00575480
    MOV EAX,dword ptr [ESI + 0x4]       ; 00575487
    MOV dword ptr [ESP + 0xac],EAX      ; 0057548a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00575491
    MOV dword ptr [ESP + 0xb0],EAX      ; 00575494
    LEA ESI,[EBX + 0xd1dc]              ; 0057549b
        ;   Label: LAB_0057549b
    LEA EDI,[ESP + 0x84]                ; 005754a1
    LEA EDX,[ESP + 0x114]               ; 005754a8
    FLD float ptr [ESI + 0x4]           ; 005754af
    FLD float ptr [ESI + 0x8]           ; 005754b2
    LEA EAX,[EBX + 0x20]                ; 005754b5
    FLD float ptr [ESI]                 ; 005754b8
    LEA ESI,[ESP + 0x144]               ; 005754ba
    FSUB float ptr [EAX]                ; 005754c1
    FXCH ST2                            ; 005754c3
    FSUB float ptr [EAX + 0x4]          ; 005754c5
    FXCH                                ; 005754c8
    FSUB float ptr [EAX + 0x8]          ; 005754ca
    FXCH ST2                            ; 005754cd
    FSTP float ptr [ESP + 0x144]        ; 005754cf
    FSTP float ptr [ESP + 0x148]        ; 005754d6
    FSTP float ptr [ESP + 0x14c]        ; 005754dd
    LEA EAX,[ESP + 0x84]                ; 005754e4
    MOVSD ES:EDI,ESI                    ; 005754eb
    MOVSD ES:EDI,ESI                    ; 005754ec
    MOVSD ES:EDI,ESI                    ; 005754ed
    CMP EDX,EAX                         ; 005754ee
    JZ 0x0057551c                       ; 005754f0
        ;   XREF to: 0057551c (CONDITIONAL_JUMP)  ; LAB_0057551c
    MOV EAX,dword ptr [ESP + 0x84]      ; 005754f2
    MOV dword ptr [ESP + 0x114],EAX     ; 005754f9
    MOV EAX,dword ptr [ESP + 0x88]      ; 00575500
    MOV dword ptr [ESP + 0x118],EAX     ; 00575507
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0057550e
    MOV dword ptr [ESP + 0x11c],EAX     ; 00575515
    FLD float ptr [ESP + 0x118]         ; 0057551c
        ;   Label: LAB_0057551c
    FMUL ST0                            ; 00575523
    FLD float ptr [ESP + 0x114]         ; 00575525
    FMUL ST0                            ; 0057552c
    FADDP                               ; 0057552e
    FLD float ptr [ESP + 0x11c]         ; 00575530
    FMUL ST0                            ; 00575537
    FADDP                               ; 00575539
    FSQRT                               ; 0057553b
    FCOMP float ptr [EBX + 0xd1e8]      ; 0057553d
    FNSTSW AX                           ; 00575543
    SAHF                                ; 00575545
    JC 0x00575efc                       ; 00575546
        ;   XREF to: 00575efc (CONDITIONAL_JUMP)  ; LAB_00575efc
    LEA EAX,[ESP + 0xa8]                ; 0057554c
        ;   Label: LAB_0057554c
    LEA ESI,[EBX + 0xd1dc]              ; 00575553
    CMP EAX,ESI                         ; 00575559
    JZ 0x0057557a                       ; 0057555b
        ;   XREF to: 0057557a (CONDITIONAL_JUMP)  ; LAB_0057557a
    MOV EAX,dword ptr [ESI]             ; 0057555d
    MOV dword ptr [ESP + 0xa8],EAX      ; 0057555f
    MOV EAX,dword ptr [ESI + 0x4]       ; 00575566
    MOV dword ptr [ESP + 0xac],EAX      ; 00575569
    MOV EAX,dword ptr [ESI + 0x8]       ; 00575570
    MOV dword ptr [ESP + 0xb0],EAX      ; 00575573
    FLD float ptr [EBX + 0xd200]        ; 0057557a
        ;   Label: LAB_0057557a
    FLDZ                                ; 00575580
    FCOMPP                              ; 00575582
    FNSTSW AX                           ; 00575584
    SAHF                                ; 00575586
    JNC 0x00575645                      ; 00575587
        ;   XREF to: 00575645 (CONDITIONAL_JUMP)  ; LAB_00575645
    FLD float ptr [EBX + 0xd200]        ; 0057558d
    FSUB float ptr [EBP + 0x18]         ; 00575593
    FST float ptr [EBX + 0xd200]        ; 00575596
    FLDZ                                ; 0057559c
    FCOMPP                              ; 0057559e
    FNSTSW AX                           ; 005755a0
    SAHF                                ; 005755a2
    JBE 0x005755af                      ; 005755a3
        ;   XREF to: 005755af (CONDITIONAL_JUMP)  ; LAB_005755af
    MOV dword ptr [EBX + 0xd200],0x0    ; 005755a5
    MOV EAX,[0x00603450]                ; 005755af | g_CNetGamePtr
        ;   Label: LAB_005755af
    CMP dword ptr [EAX],0x0             ; 005755b4 | g_CNetGameInstance
    JZ 0x005755dc                       ; 005755b7
        ;   XREF to: 005755dc (CONDITIONAL_JUMP)  ; LAB_005755dc
    MOV ECX,0x5d6fbc                    ; 005755b9 | = "..\\core\\tvbat.cpp"
    MOV ESI,0x10a                       ; 005755be
    PUSH 0x5d6fce                       ; 005755c3 | = "CTVBat::process - can't follow orders..."
    MOV dword ptr [0x01d71de0],ECX      ; 005755c8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005755ce | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005755d4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005755d9
    MOV EAX,[0x01d5ba14]                ; 005755dc | DAT_01d5ba14
        ;   Label: LAB_005755dc
    MOV ESI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 005755e1
    LEA EAX,[ESP + 0xa8]                ; 005755e8
    ADD ESI,0x20                        ; 005755ef
    CMP EAX,ESI                         ; 005755f2
    JZ 0x00575613                       ; 005755f4
        ;   XREF to: 00575613 (CONDITIONAL_JUMP)  ; LAB_00575613
    MOV EAX,dword ptr [ESI]             ; 005755f6
    MOV dword ptr [ESP + 0xa8],EAX      ; 005755f8
    MOV EAX,dword ptr [ESI + 0x4]       ; 005755ff
    MOV dword ptr [ESP + 0xac],EAX      ; 00575602
    MOV EAX,dword ptr [ESI + 0x8]       ; 00575609
    MOV dword ptr [ESP + 0xb0],EAX      ; 0057560c
    FLD float ptr [EBX + 0xd1f8]        ; 00575613
        ;   Label: LAB_00575613
    FADD double ptr [0x005d700f]        ; 00575619 | DAT_005d700f
    MOV EAX,[0x01d5ba14]                ; 0057561f | DAT_01d5ba14
    FLD float ptr [ESP + 0xac]          ; 00575624
    FXCH                                ; 0057562b
    FADD ST0,ST1                        ; 0057562d
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0057562f
    FSTP ST1                            ; 00575636
    FSTP float ptr [ESP + 0xac]         ; 00575638
    MOV dword ptr [EBX + 0xcde4],EAX    ; 0057563f
    FLD float ptr [ESP + 0xa8]          ; 00575645
        ;   Label: LAB_00575645
    FLD float ptr [ESP + 0xac]          ; 0057564c
    FLD float ptr [ESP + 0xb0]          ; 00575653
    LEA EDI,[ESP + 0x15c]               ; 0057565a
    LEA EAX,[EBX + 0x20]                ; 00575661
    LEA ESI,[ESP + 0xc0]                ; 00575664
    LEA EDX,[ESP + 0x15c]               ; 0057566b
    FXCH ST2                            ; 00575672
    FSUB float ptr [EAX]                ; 00575674
    FXCH                                ; 00575676
    FSUB float ptr [EAX + 0x4]          ; 00575678
    FXCH ST2                            ; 0057567b
    FSUB float ptr [EAX + 0x8]          ; 0057567d
    FXCH                                ; 00575680
    FSTP float ptr [ESP + 0xc0]         ; 00575682
    FXCH                                ; 00575689
    FSTP float ptr [ESP + 0xc4]         ; 0057568b
    FSTP float ptr [ESP + 0xc8]         ; 00575692
    LEA EAX,[ESP + 0x114]               ; 00575699
    MOVSD ES:EDI,ESI                    ; 005756a0
    MOVSD ES:EDI,ESI                    ; 005756a1
    MOVSD ES:EDI,ESI                    ; 005756a2
    CMP EAX,EDX                         ; 005756a3
    JZ 0x005756d1                       ; 005756a5
        ;   XREF to: 005756d1 (CONDITIONAL_JUMP)  ; LAB_005756d1
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005756a7
    MOV dword ptr [ESP + 0x114],EAX     ; 005756ae
    MOV EAX,dword ptr [ESP + 0x160]     ; 005756b5
    MOV dword ptr [ESP + 0x118],EAX     ; 005756bc
    MOV EAX,dword ptr [ESP + 0x164]     ; 005756c3
    MOV dword ptr [ESP + 0x11c],EAX     ; 005756ca
    FLD float ptr [ESP + 0x11c]         ; 005756d1
        ;   Label: LAB_005756d1
    FLD float ptr [ESP + 0x114]         ; 005756d8
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 005756df
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    FLD float ptr [ESP + 0x11c]         ; 005756e4
    FMUL ST0                            ; 005756eb
    FLD float ptr [ESP + 0x114]         ; 005756ed
    FMUL ST0                            ; 005756f4
    FADDP                               ; 005756f6
    FSQRT                               ; 005756f8
    FLD float ptr [ESP + 0x118]         ; 005756fa
    FXCH                                ; 00575701
    FST float ptr [ESP + 0xc]           ; 00575703
    FXCH                                ; 00575707
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 00575709
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 0057570e
    FXCH                                ; 00575714
    FSTP float ptr [ESP + 0x1d0]        ; 00575716
    FCHS                                ; 0057571d
    FSTP float ptr [ESP + 0x1dc]        ; 0057571f
    TEST EDI,EDI                        ; 00575726
    JZ 0x00575874                       ; 00575728
        ;   XREF to: 00575874 (CONDITIONAL_JUMP)  ; LAB_00575874
    CMP dword ptr [EBX + 0xd1fc],0x0    ; 0057572e
    JZ 0x00575874                       ; 00575735
        ;   XREF to: 00575874 (CONDITIONAL_JUMP)  ; LAB_00575874
    LEA EAX,[ESP + 0x50]                ; 0057573b
    PUSH EAX                            ; 0057573f
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80 ; 00575740
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00575745
    LEA ESI,[ESP + 0x50]                ; 00575748
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0057574c
    PUSH ESI                            ; 00575752
    MOV EDX,dword ptr [EAX + 0x154]     ; 00575753
    PUSH EAX                            ; 00575759
    LEA ESI,[EBX + 0x20]                ; 0057575a
    LEA EDI,[ESP + 0x158]               ; 0057575d
    CALL dword ptr [EDX + 0x3c]         ; 00575764
    FLD float ptr [ESI + 0x4]           ; 00575767
    FLD float ptr [ESI + 0x8]           ; 0057576a
    FLD float ptr [ESI]                 ; 0057576d
    LEA EDX,[ESP + 0x11c]               ; 0057576f
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00575776
    ADD ESP,0x8                         ; 0057577c
    LEA ESI,[ESP + 0x108]               ; 0057577f
    FSUB float ptr [EAX + 0x20]         ; 00575786
    FXCH ST2                            ; 00575789
    FSUB float ptr [EAX + 0x24]         ; 0057578b
    FXCH                                ; 0057578e
    FSUB float ptr [EAX + 0x28]         ; 00575790
    FXCH ST2                            ; 00575793
    FSTP float ptr [ESP + 0x108]        ; 00575795
    FSTP float ptr [ESP + 0x10c]        ; 0057579c
    FSTP float ptr [ESP + 0x110]        ; 005757a3
    LEA EAX,[ESP + 0x150]               ; 005757aa
    MOVSD ES:EDI,ESI                    ; 005757b1
    MOVSD ES:EDI,ESI                    ; 005757b2
    MOVSD ES:EDI,ESI                    ; 005757b3
    CMP EDX,EAX                         ; 005757b4
    JZ 0x005757e2                       ; 005757b6
        ;   XREF to: 005757e2 (CONDITIONAL_JUMP)  ; LAB_005757e2
    MOV EAX,dword ptr [ESP + 0x150]     ; 005757b8
    MOV dword ptr [ESP + 0x114],EAX     ; 005757bf
    MOV EAX,dword ptr [ESP + 0x154]     ; 005757c6
    MOV dword ptr [ESP + 0x118],EAX     ; 005757cd
    MOV EAX,dword ptr [ESP + 0x158]     ; 005757d4
    MOV dword ptr [ESP + 0x11c],EAX     ; 005757db
    FLD float ptr [ESP + 0x118]         ; 005757e2
        ;   Label: LAB_005757e2
    FCOMP float ptr [ESP + 0x64]        ; 005757e9
    FNSTSW AX                           ; 005757ed
    SAHF                                ; 005757ef
    JC 0x00575874                       ; 005757f0
        ;   XREF to: 00575874 (CONDITIONAL_JUMP)  ; LAB_00575874
    FLD float ptr [ESP + 0x118]         ; 005757f6
    FCOMP float ptr [ESP + 0x68]        ; 005757fd
    FNSTSW AX                           ; 00575801
    SAHF                                ; 00575803
    JA 0x00575874                       ; 00575804
        ;   XREF to: 00575874 (CONDITIONAL_JUMP)  ; LAB_00575874
    FLD float ptr [ESP + 0xc]           ; 00575806
    FCOMP double ptr [0x005d701f]       ; 0057580a | DAT_005d701f
    FNSTSW AX                           ; 00575810
    SAHF                                ; 00575812
    JNC 0x00575874                      ; 00575813
        ;   XREF to: 00575874 (CONDITIONAL_JUMP)  ; LAB_00575874
    LEA EAX,[ESP + 0x14]                ; 00575815
    PUSH EAX                            ; 00575819
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0057581a
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EDX,0x3f800000                  ; 0057581f
    ADD ESP,0x4                         ; 00575824
    LEA ESI,[ESP + 0x14]                ; 00575827
    MOV dword ptr [ESP + 0x18],EDX      ; 0057582b
    MOV dword ptr [ESP + 0x48],EBX      ; 0057582f
    MOV dword ptr [ESP + 0x4c],EBX      ; 00575833
    PUSH ESI                            ; 00575837
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00575838
    PUSH EAX                            ; 0057583e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0057583f
    CALL dword ptr [EDX + 0x108]        ; 00575845
    ADD ESP,0x8                         ; 0057584b
    FLD float ptr [ESP + 0x18]          ; 0057584e
    FLDZ                                ; 00575852
    FCOMPP                              ; 00575854
    FNSTSW AX                           ; 00575856
    SAHF                                ; 00575858
    JNC 0x00575874                      ; 00575859
        ;   XREF to: 00575874 (CONDITIONAL_JUMP)  ; LAB_00575874
    PUSH 0x0                            ; 0057585b
    PUSH 0x3                            ; 0057585d
    PUSH 0x0                            ; 0057585f
    LEA EAX,[EBX + 0x20]                ; 00575861
    PUSH EAX                            ; 00575864
    MOV ECX,dword ptr [0x005fed24]      ; 00575865 | g_CGorePtr
    PUSH ECX                            ; 0057586b
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 0057586c
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00575871
    FLD float ptr [EBX + 0x30]          ; 00575874
        ;   Label: LAB_00575874
    FLD ST0                             ; 00575877
    FSIN                                ; 00575879
    FLD float ptr [EBX + 0x34]          ; 0057587b
    FLD ST0                             ; 0057587e
    FSIN                                ; 00575880
    FXCH ST3                            ; 00575882
    FCOS                                ; 00575884
    FXCH                                ; 00575886
    FCOS                                ; 00575888
    FXCH ST3                            ; 0057588a
    FMUL ST1                            ; 0057588c
    FXCH ST3                            ; 0057588e
    FMULP                               ; 00575890
    FLD float ptr [ESP + 0x1d0]         ; 00575892
    FSUB float ptr [EBX + 0x34]         ; 00575899
    FXCH ST2                            ; 0057589c
    FCHS                                ; 0057589e
    FSTP float ptr [ESP + 0x1b4]        ; 005758a0
    FXCH ST2                            ; 005758a7
    FSTP float ptr [ESP + 0x1c8]        ; 005758a9
    FXCH                                ; 005758b0
    FSTP float ptr [ESP + 0x1cc]        ; 005758b2
    SUB ESP,0x4                         ; 005758b9
    FSTP float ptr [ESP]                ; 005758bc
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 005758bf
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005758c4
    FLD float ptr [ESP + 0x1e4]         ; 005758cb
    ADD ESP,0x4                         ; 005758d2
    FST float ptr [ESP + 0x1d0]         ; 005758d5
    FMUL float ptr [EBP + 0x18]         ; 005758dc
    FMUL float ptr [EBX + 0xd1f0]       ; 005758df
    FLD float ptr [ESP + 0x1dc]         ; 005758e5
    FSUB float ptr [EBX + 0x30]         ; 005758ec
    FXCH                                ; 005758ef
    FADD float ptr [EBX + 0x34]         ; 005758f1
    SUB ESP,0x4                         ; 005758f4
    FSTP float ptr [EBX + 0x34]         ; 005758f7
    FSTP float ptr [ESP]                ; 005758fa
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 005758fd
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00575902
    FLD float ptr [ESP + 0x1e4]         ; 00575909
    ADD ESP,0x4                         ; 00575910
    FLD float ptr [EBX + 0xd1f4]        ; 00575913
    FMUL float ptr [ESP + 0x1c8]        ; 00575919
    FLD float ptr [EBX + 0xd1f4]        ; 00575920
    FMUL float ptr [ESP + 0x1b4]        ; 00575926
    FLD float ptr [ESP + 0x1c8]         ; 0057592d
    FMUL float ptr [EBX + 0xd1f4]       ; 00575934
    FLD float ptr [ESP + 0x1b4]         ; 0057593a
    FMUL float ptr [EBX + 0xd1f4]       ; 00575941
    FLD float ptr [ESP + 0x1cc]         ; 00575947
    FMUL float ptr [EBX + 0xd1f4]       ; 0057594e
    FXCH ST5                            ; 00575954
    FST float ptr [ESP + 0x1dc]         ; 00575956
    FMUL float ptr [EBP + 0x18]         ; 0057595d
    FLD float ptr [ESP + 0x1d0]         ; 00575960
    FCHS                                ; 00575967
    FMUL double ptr [0x005d7027]        ; 00575969 | DAT_005d7027
    FXCH ST3                            ; 0057596f
    FMUL float ptr [EBP + 0x18]         ; 00575971
    FXCH ST2                            ; 00575974
    FMUL float ptr [EBP + 0x18]         ; 00575976
    FXCH ST6                            ; 00575979
    FMUL float ptr [EBP + 0x18]         ; 0057597b
    FXCH                                ; 0057597e
    FMUL float ptr [EBX + 0xd1f0]       ; 00575980
    FXCH ST5                            ; 00575986
    FSTP float ptr [EBX + 0xd204]       ; 00575988
    FLD float ptr [EBX + 0xd1f4]        ; 0057598e
    FMUL float ptr [ESP + 0x1cc]        ; 00575994
    LEA EDI,[ESP + 0x138]               ; 0057599b
    LEA ESI,[ESP + 0x78]                ; 005759a2
    LEA EAX,[EBX + 0x20]                ; 005759a6
    FXCH ST4                            ; 005759a9
    FSTP float ptr [EBX + 0xd208]       ; 005759ab
    FXCH ST3                            ; 005759b1
    FSTP float ptr [EBX + 0xd20c]       ; 005759b3
    FXCH                                ; 005759b9
    FSTP float ptr [EBX + 0x38]         ; 005759bb
    FADD float ptr [EBX + 0x20]         ; 005759be
    FXCH ST3                            ; 005759c1
    FADD float ptr [EBX + 0x24]         ; 005759c3
    FXCH                                ; 005759c6
    FADD float ptr [EBX + 0x28]         ; 005759c8
    FXCH ST2                            ; 005759cb
    FADD float ptr [EBX + 0x30]         ; 005759cd
    FXCH ST3                            ; 005759d0
    FSTP float ptr [EBX + 0x20]         ; 005759d2
    FSTP float ptr [EBX + 0x24]         ; 005759d5
    FSTP float ptr [EBX + 0x28]         ; 005759d8
    FSTP float ptr [EBX + 0x30]         ; 005759db
    FLD float ptr [EAX]                 ; 005759de
    FLD float ptr [EAX + 0x4]           ; 005759e0
    FLD float ptr [EAX + 0x8]           ; 005759e3
    FXCH ST2                            ; 005759e6
    FSUB float ptr [ESP + 0x180]        ; 005759e8
    FXCH                                ; 005759ef
    FSUB float ptr [ESP + 0x184]        ; 005759f1
    FXCH ST2                            ; 005759f8
    FSUB float ptr [ESP + 0x188]        ; 005759fa
    FXCH                                ; 00575a01
    FSTP float ptr [ESP + 0x78]         ; 00575a03
    FXCH                                ; 00575a07
    FSTP float ptr [ESP + 0x7c]         ; 00575a09
    FSTP float ptr [ESP + 0x80]         ; 00575a0d
    MOVSD ES:EDI,ESI                    ; 00575a14
    MOVSD ES:EDI,ESI                    ; 00575a15
    MOVSD ES:EDI,ESI                    ; 00575a16
    FLD float ptr [ESP + 0x13c]         ; 00575a17
    FMUL double ptr [0x005d700f]        ; 00575a1e | DAT_005d700f
    FDIV float ptr [EBP + 0x18]         ; 00575a24
    FADD double ptr [0x005d702f]        ; 00575a27 | DAT_005d702f
    FST float ptr [ESP + 0x8]           ; 00575a2d
    FCOMP double ptr [0x005d7037]       ; 00575a31 | DAT_005d7037
    FNSTSW AX                           ; 00575a37
    SAHF                                ; 00575a39
    JNC 0x00575a44                      ; 00575a3a
        ;   XREF to: 00575a44 (CONDITIONAL_JUMP)  ; LAB_00575a44
    MOV dword ptr [ESP + 0x8],0x41200000 ; 00575a3c
    FLD float ptr [ESP + 0x8]           ; 00575a44
        ;   Label: LAB_00575a44
    FCOMP double ptr [0x005d703f]       ; 00575a48 | DAT_005d703f
    FNSTSW AX                           ; 00575a4e
    SAHF                                ; 00575a50
    JBE 0x00575a5b                      ; 00575a51
        ;   XREF to: 00575a5b (CONDITIONAL_JUMP)  ; LAB_00575a5b
    MOV dword ptr [ESP + 0x8],0x42700000 ; 00575a53
    FLD float ptr [ESP + 0x8]           ; 00575a5b
        ;   Label: LAB_00575a5b
    FSUB float ptr [EBX + 0xd1d8]       ; 00575a5f
    FMUL double ptr [0x005d7047]        ; 00575a65 | DAT_005d7047
    FLD float ptr [EBX + 0xd1d8]        ; 00575a6b
    FXCH                                ; 00575a71
    FADD ST0,ST1                        ; 00575a73
    FLD float ptr [EBP + 0x18]          ; 00575a75
    FXCH                                ; 00575a78
    FSTP ST2                            ; 00575a7a
    FXCH                                ; 00575a7c
    FSTP float ptr [EBX + 0xd1d8]       ; 00575a7e
    FMUL float ptr [EBX + 0xd1d8]       ; 00575a84
    FMUL float ptr [EBX + 0xd1d4]       ; 00575a8a
    LEA EAX,[EBX + 0xd058]              ; 00575a90
    FADD float ptr [EBX + 0xd054]       ; 00575a96
    PUSH EAX                            ; 00575a9c
    FSTP float ptr [EBX + 0xd054]       ; 00575a9d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00575aa3
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00575aa8
    MOV EDX,dword ptr [EAX + 0x100]     ; 00575aab
    MOV dword ptr [ESP + 0x1e0],EDX     ; 00575ab1
    FILD dword ptr [ESP + 0x1e0]        ; 00575ab8
    FCOMP float ptr [EBX + 0xd054]      ; 00575abf
    FNSTSW AX                           ; 00575ac5
    SAHF                                ; 00575ac7
    JA 0x00575f1b                       ; 00575ac8
        ;   XREF to: 00575f1b (CONDITIONAL_JUMP)  ; LAB_00575f1b
    MOV dword ptr [EBX + 0xd054],0x0    ; 00575ace
    CMP byte ptr [EBX + 0xd214],0x0     ; 00575ad8
        ;   Label: LAB_00575ad8
    JZ 0x00575afd                       ; 00575adf
        ;   XREF to: 00575afd (CONDITIONAL_JUMP)  ; LAB_00575afd
    FLD float ptr [EBX + 0xd284]        ; 00575ae1
    FSUB float ptr [EBP + 0x18]         ; 00575ae7
    FST float ptr [EBX + 0xd284]        ; 00575aea
    FLDZ                                ; 00575af0
    FCOMPP                              ; 00575af2
    FNSTSW AX                           ; 00575af4
    SAHF                                ; 00575af6
    JNC 0x00575f46                      ; 00575af7
        ;   XREF to: 00575f46 (CONDITIONAL_JUMP)  ; LAB_00575f46
    MOV ESP,EBP                         ; 00575afd
        ;   Label: LAB_00575afd
    POP EBP                             ; 00575aff
    POP EDI                             ; 00575b00
    POP ESI                             ; 00575b01
    POP EBX                             ; 00575b02
    RET                                 ; 00575b03
    FLD float ptr [EBP + 0x18]          ; 00575b04
        ;   Label: LAB_00575b04
    FLD ST0                             ; 00575b07
    LEA EDI,[ESP + 0x9c]                ; 00575b09
    LEA ESI,[EBX + 0x20]                ; 00575b10
    FMUL double ptr [0x005d704f]        ; 00575b13 | DAT_005d704f
    MOVSD ES:EDI,ESI                    ; 00575b19
    MOVSD ES:EDI,ESI                    ; 00575b1a
    MOVSD ES:EDI,ESI                    ; 00575b1b
    FLD float ptr [EBX + 0xd208]        ; 00575b1c
    FXCH                                ; 00575b22
    FADD ST0,ST1                        ; 00575b24
    LEA EAX,[EBX + 0xd204]              ; 00575b26
    FSTP ST1                            ; 00575b2c
    FSTP float ptr [EBX + 0xd208]       ; 00575b2e
    FLD float ptr [EAX]                 ; 00575b34
    FMUL ST1                            ; 00575b36
    FLD float ptr [EAX + 0x4]           ; 00575b38
    FMUL ST2                            ; 00575b3b
    FLD float ptr [EAX + 0x8]           ; 00575b3d
    FMUL ST3                            ; 00575b40
    PUSH 0x0                            ; 00575b42
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00575b44
    LEA EDI,[ESP + 0xf4]                ; 00575b4b
    LEA ESI,[ESP + 0x16c]               ; 00575b52
    LEA EAX,[EBX + 0x20]                ; 00575b59
    FXCH ST2                            ; 00575b5c
    FSTP float ptr [ESP + 0x16c]        ; 00575b5e
    FSTP float ptr [ESP + 0x170]        ; 00575b65
    FSTP float ptr [ESP + 0x174]        ; 00575b6c
    MOVSD ES:EDI,ESI                    ; 00575b73
    MOVSD ES:EDI,ESI                    ; 00575b74
    MOVSD ES:EDI,ESI                    ; 00575b75
    MOV dword ptr [ESP + 0x1dc],EAX     ; 00575b76
    FLD float ptr [EAX]                 ; 00575b7d
    FLD float ptr [EAX + 0x4]           ; 00575b7f
    FLD float ptr [EAX + 0x8]           ; 00575b82
    FXCH ST2                            ; 00575b85
    FADD float ptr [ESP + 0xf4]         ; 00575b87
    FXCH                                ; 00575b8e
    FADD float ptr [ESP + 0xf8]         ; 00575b90
    FXCH ST2                            ; 00575b97
    FADD float ptr [ESP + 0xfc]         ; 00575b99
    FXCH                                ; 00575ba0
    FSTP float ptr [EAX]                ; 00575ba2
    FXCH                                ; 00575ba4
    FSTP float ptr [EAX + 0x4]          ; 00575ba6
    FSTP float ptr [EAX + 0x8]          ; 00575ba9
    LEA EAX,[ESP + 0xd0]                ; 00575bac
    FMUL float ptr [EBX + 0xd1f0]       ; 00575bb3
    PUSH EAX                            ; 00575bb9
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 00575bba
    LEA EAX,[ESP + 0xa4]                ; 00575bc1
    PUSH EDX                            ; 00575bc8
    FMUL float ptr [0x005d7057]         ; 00575bc9 | DAT_005d7057
    PUSH EAX                            ; 00575bcf
    FADD float ptr [EBX + 0x38]         ; 00575bd0
    PUSH 0x203b37c                      ; 00575bd3 | g_CDemonRaytraceInstance
    FSTP float ptr [EBX + 0x38]         ; 00575bd8
    CALL core_dtrace.cpp_FUN_00473cd0   ; 00575bdb
        ;   XREF to: 00473cd0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00473cd0()
    MOV dword ptr [ESP + 0x1f4],EAX     ; 00575be0
    FLD float ptr [ESP + 0x1f4]         ; 00575be7
    ADD ESP,0x14                        ; 00575bee
    FLDZ                                ; 00575bf1
    FXCH                                ; 00575bf3
    FST float ptr [ESP + 0x10]          ; 00575bf5
    FSTP double ptr [ESP]               ; 00575bf9
    FCOMP double ptr [ESP]              ; 00575bfc
    FNSTSW AX                           ; 00575bff
    SAHF                                ; 00575c01
    JA 0x00575d95                       ; 00575c02
        ;   XREF to: 00575d95 (CONDITIONAL_JUMP)  ; LAB_00575d95
    FLD1                                ; 00575c08
    FCOMP double ptr [ESP]              ; 00575c0a
    FNSTSW AX                           ; 00575c0d
    SAHF                                ; 00575c0f
    JBE 0x00575d95                      ; 00575c10
        ;   XREF to: 00575d95 (CONDITIONAL_JUMP)  ; LAB_00575d95
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00575c16
    LEA EDI,[ESP + 0xe4]                ; 00575c1d
    LEA ESI,[ESP + 0x12c]               ; 00575c24
    FLD float ptr [EAX]                 ; 00575c2b
    FLD float ptr [EAX + 0x4]           ; 00575c2d
    FLD float ptr [EAX + 0x8]           ; 00575c30
    FXCH ST2                            ; 00575c33
    FSUB float ptr [ESP + 0x9c]         ; 00575c35
    FXCH                                ; 00575c3c
    FSUB float ptr [ESP + 0xa0]         ; 00575c3e
    FXCH ST2                            ; 00575c45
    FSUB float ptr [ESP + 0xa4]         ; 00575c47
    FXCH                                ; 00575c4e
    FSTP float ptr [ESP + 0x12c]        ; 00575c50
    FXCH                                ; 00575c57
    FSTP float ptr [ESP + 0x130]        ; 00575c59
    FSTP float ptr [ESP + 0x134]        ; 00575c60
    MOVSD ES:EDI,ESI                    ; 00575c67
    MOVSD ES:EDI,ESI                    ; 00575c68
    MOVSD ES:EDI,ESI                    ; 00575c69
    FLD float ptr [ESP + 0x10]          ; 00575c6a
    FLD float ptr [ESP + 0xe4]          ; 00575c6e
    FMUL ST1                            ; 00575c75
    FLD float ptr [ESP + 0xe8]          ; 00575c77
    FMUL ST2                            ; 00575c7e
    FLD float ptr [ESP + 0xec]          ; 00575c80
    FMULP ST3                           ; 00575c87
    LEA EDI,[ESP + 0x120]               ; 00575c89
    LEA ESI,[ESP + 0xb4]                ; 00575c90
    FXCH                                ; 00575c97
    FSTP float ptr [ESP + 0xb4]         ; 00575c99
    FSTP float ptr [ESP + 0xb8]         ; 00575ca0
    FSTP float ptr [ESP + 0xbc]         ; 00575ca7
    MOVSD ES:EDI,ESI                    ; 00575cae
    MOVSD ES:EDI,ESI                    ; 00575caf
    MOVSD ES:EDI,ESI                    ; 00575cb0
    FLD float ptr [0x005d705b]          ; 00575cb1 | DAT_005d705b
    FLD float ptr [ESP + 0x120]         ; 00575cb7
    FMUL ST1                            ; 00575cbe
    FLD float ptr [ESP + 0x124]         ; 00575cc0
    FMUL ST2                            ; 00575cc7
    FLD float ptr [ESP + 0x128]         ; 00575cc9
    FMULP ST3                           ; 00575cd0
    FLD float ptr [ESP + 0x9c]          ; 00575cd2
    FLD float ptr [ESP + 0xa0]          ; 00575cd9
    LEA EDI,[ESP + 0xfc]                ; 00575ce0
    LEA ESI,[ESP + 0x18c]               ; 00575ce7
    FXCH ST3                            ; 00575cee
    FSTP float ptr [ESP + 0x18c]        ; 00575cf0
    FXCH                                ; 00575cf7
    FSTP float ptr [ESP + 0x190]        ; 00575cf9
    FXCH ST2                            ; 00575d00
    FSTP float ptr [ESP + 0x194]        ; 00575d02
    MOVSD ES:EDI,ESI                    ; 00575d09
    MOVSD ES:EDI,ESI                    ; 00575d0a
    MOVSD ES:EDI,ESI                    ; 00575d0b
    FLD float ptr [ESP + 0xa4]          ; 00575d0c
    LEA EDI,[ESP + 0x198]               ; 00575d13
    LEA ESI,[ESP + 0x90]                ; 00575d1a
    FXCH ST2                            ; 00575d21
    FADD float ptr [ESP + 0xfc]         ; 00575d23
    FXCH                                ; 00575d2a
    FADD float ptr [ESP + 0x100]        ; 00575d2c
    FXCH ST2                            ; 00575d33
    FADD float ptr [ESP + 0x104]        ; 00575d35
    FXCH                                ; 00575d3c
    FSTP float ptr [ESP + 0x90]         ; 00575d3e
    FXCH                                ; 00575d45
    FSTP float ptr [ESP + 0x94]         ; 00575d47
    FSTP float ptr [ESP + 0x98]         ; 00575d4e
    MOVSD ES:EDI,ESI                    ; 00575d55
    MOVSD ES:EDI,ESI                    ; 00575d56
    MOVSD ES:EDI,ESI                    ; 00575d57
    MOV EDX,dword ptr [ESP + 0x1d8]     ; 00575d58
    MOV EAX,dword ptr [ESP + 0x198]     ; 00575d5f
    MOV dword ptr [EDX],EAX             ; 00575d66
    MOV EAX,dword ptr [ESP + 0x19c]     ; 00575d68
    MOV dword ptr [EDX + 0x4],EAX       ; 00575d6f
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 00575d72
    MOV dword ptr [EDX + 0x8],EAX       ; 00575d79
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 00575d7c
    MOV dword ptr [EAX + 0x8],0x0       ; 00575d83
    MOV EDX,dword ptr [EAX + 0x8]       ; 00575d8a
    MOV dword ptr [EAX + 0x4],EDX       ; 00575d8d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00575d90
    MOV dword ptr [EAX],EDX             ; 00575d93
    FLD float ptr [ESP + 0x9c]          ; 00575d95
        ;   Label: LAB_00575d95
    FLD float ptr [ESP + 0xa0]          ; 00575d9c
    FLD float ptr [ESP + 0xa4]          ; 00575da3
    LEA EDI,[ESP + 0xd8]                ; 00575daa
    LEA EAX,[EBX + 0x20]                ; 00575db1
    LEA ESI,[ESP + 0x174]               ; 00575db4
    LEA EDX,[ESP + 0x114]               ; 00575dbb
    FXCH ST2                            ; 00575dc2
    FSUB float ptr [EAX]                ; 00575dc4
    FXCH                                ; 00575dc6
    FSUB float ptr [EAX + 0x4]          ; 00575dc8
    FXCH ST2                            ; 00575dcb
    FSUB float ptr [EAX + 0x8]          ; 00575dcd
    FXCH                                ; 00575dd0
    FSTP float ptr [ESP + 0x174]        ; 00575dd2
    FXCH                                ; 00575dd9
    FSTP float ptr [ESP + 0x178]        ; 00575ddb
    FSTP float ptr [ESP + 0x17c]        ; 00575de2
    LEA EAX,[ESP + 0xd8]                ; 00575de9
    MOVSD ES:EDI,ESI                    ; 00575df0
    MOVSD ES:EDI,ESI                    ; 00575df1
    MOVSD ES:EDI,ESI                    ; 00575df2
    CMP EDX,EAX                         ; 00575df3
    JZ 0x00575e21                       ; 00575df5
        ;   XREF to: 00575e21 (CONDITIONAL_JUMP)  ; LAB_00575e21
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00575df7
    MOV dword ptr [ESP + 0x114],EAX     ; 00575dfe
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00575e05
    MOV dword ptr [ESP + 0x118],EAX     ; 00575e0c
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00575e13
    MOV dword ptr [ESP + 0x11c],EAX     ; 00575e1a
    FLD float ptr [ESP + 0x118]         ; 00575e21
        ;   Label: LAB_00575e21
    FMUL ST0                            ; 00575e28
    FLD float ptr [ESP + 0x114]         ; 00575e2a
    FMUL ST0                            ; 00575e31
    FADDP                               ; 00575e33
    FLD float ptr [ESP + 0x11c]         ; 00575e35
    FMUL ST0                            ; 00575e3c
    FADDP                               ; 00575e3e
    FSQRT                               ; 00575e40
    FCOMP double ptr [0x005d705f]       ; 00575e42 | DAT_005d705f
    FNSTSW AX                           ; 00575e48
    SAHF                                ; 00575e4a
    JNC 0x00575afd                      ; 00575e4b
        ;   XREF to: 00575afd (CONDITIONAL_JUMP)  ; LAB_00575afd
    MOV dword ptr [EBX + 0xd210],0x2    ; 00575e51
    MOV ESP,EBP                         ; 00575e5b
    POP EBP                             ; 00575e5d
    POP EDI                             ; 00575e5e
    POP ESI                             ; 00575e5f
    POP EBX                             ; 00575e60
    RET                                 ; 00575e61
    MOV EAX,[0x01d5ba14]                ; 00575e62 | DAT_01d5ba14
        ;   Label: LAB_00575e62
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00575e67
    MOV dword ptr [EBX + 0xcde4],EAX    ; 00575e6e
    TEST EAX,EAX                        ; 00575e74
    JZ 0x0057546d                       ; 00575e76
        ;   XREF to: 0057546d (CONDITIONAL_JUMP)  ; LAB_0057546d
    LEA ESI,[EAX + 0x20]                ; 00575e7c
    LEA EAX,[ESP + 0xa8]                ; 00575e7f
    CMP EAX,ESI                         ; 00575e86
    JNZ 0x00575edd                      ; 00575e88
        ;   XREF to: 00575edd (CONDITIONAL_JUMP)  ; LAB_00575edd
    FLD float ptr [EBX + 0xd1f8]        ; 00575e8a
        ;   Label: LAB_00575e8a
    FADD double ptr [0x005d700f]        ; 00575e90 | DAT_005d700f
    FADD float ptr [ESP + 0xac]         ; 00575e96
    FSTP float ptr [ESP + 0xac]         ; 00575e9d
    MOV EAX,dword ptr [EBX + 0x6c]      ; 00575ea4
    MOV EDX,EAX                         ; 00575ea7
    MOV ESI,0x8                         ; 00575ea9
    SAR EDX,0x1f                        ; 00575eae
    IDIV ESI                            ; 00575eb1
    SUB EDX,0x4                         ; 00575eb3
    MOV dword ptr [ESP + 0x1e0],EDX     ; 00575eb6
    FILD dword ptr [ESP + 0x1e0]        ; 00575ebd
    FMUL double ptr [0x005d7017]        ; 00575ec4 | DAT_005d7017
    FADD float ptr [ESP + 0xac]         ; 00575eca
    FSTP float ptr [ESP + 0xac]         ; 00575ed1
    JMP 0x0057549b                      ; 00575ed8
        ;   XREF to: 0057549b (UNCONDITIONAL_JUMP)  ; LAB_0057549b
    MOV EAX,dword ptr [ESI]             ; 00575edd
        ;   Label: LAB_00575edd
    MOV dword ptr [ESP + 0xa8],EAX      ; 00575edf
    MOV EAX,dword ptr [ESI + 0x4]       ; 00575ee6
    MOV dword ptr [ESP + 0xac],EAX      ; 00575ee9
    MOV EAX,dword ptr [ESI + 0x8]       ; 00575ef0
    MOV dword ptr [ESP + 0xb0],EAX      ; 00575ef3
    JMP 0x00575e8a                      ; 00575efa
        ;   XREF to: 00575e8a (UNCONDITIONAL_JUMP)  ; LAB_00575e8a
    FLD float ptr [ESP + 0x118]         ; 00575efc
        ;   Label: LAB_00575efc
    FABS                                ; 00575f03
    FLD float ptr [EBX + 0xd1ec]        ; 00575f05
    FCOMPP                              ; 00575f0b
    FNSTSW AX                           ; 00575f0d
    SAHF                                ; 00575f0f
    JBE 0x0057554c                      ; 00575f10
        ;   XREF to: 0057554c (CONDITIONAL_JUMP)  ; LAB_0057554c
    JMP 0x0057557a                      ; 00575f16
        ;   XREF to: 0057557a (UNCONDITIONAL_JUMP)  ; LAB_0057557a
    FLDZ                                ; 00575f1b
        ;   Label: LAB_00575f1b
    FCOMP float ptr [EBX + 0xd054]      ; 00575f1d
    FNSTSW AX                           ; 00575f23
    SAHF                                ; 00575f25
    JBE 0x00575ad8                      ; 00575f26
        ;   XREF to: 00575ad8 (CONDITIONAL_JUMP)  ; LAB_00575ad8
    DEC EDX                             ; 00575f2c
    MOV dword ptr [ESP + 0x1e0],EDX     ; 00575f2d
    FILD dword ptr [ESP + 0x1e0]        ; 00575f34
    FSTP float ptr [EBX + 0xd054]       ; 00575f3b
    JMP 0x00575ad8                      ; 00575f41
        ;   XREF to: 00575ad8 (UNCONDITIONAL_JUMP)  ; LAB_00575ad8
    MOV EAX,dword ptr [EBX + 0xd280]    ; 00575f46
        ;   Label: LAB_00575f46
    PUSH EAX                            ; 00575f4c
    CALL sound_sndmain.cpp_FUN_00556700 ; 00575f4d
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00575f52
    TEST EAX,EAX                        ; 00575f55
    JNZ 0x00575f9f                      ; 00575f57
        ;   XREF to: 00575f9f (CONDITIONAL_JUMP)  ; LAB_00575f9f
    PUSH 0x42480000                     ; 00575f59
    SUB ESP,0x8                         ; 00575f5e
    FLD float ptr [EBX + 0x28]          ; 00575f61
    FSTP double ptr [ESP]               ; 00575f64
    SUB ESP,0x8                         ; 00575f67
    FLD float ptr [EBX + 0x24]          ; 00575f6a
    FSTP double ptr [ESP]               ; 00575f6d
    SUB ESP,0x8                         ; 00575f70
    FLD float ptr [EBX + 0x20]          ; 00575f73
    FSTP double ptr [ESP]               ; 00575f76
    CALL sound_sndmain.cpp_FUN_00557170 ; 00575f79
        ;   XREF to: 00557170 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00557170()
    ADD ESP,0x1c                        ; 00575f7e
    TEST EAX,EAX                        ; 00575f81
    JZ 0x00575f9f                       ; 00575f83
        ;   XREF to: 00575f9f (CONDITIONAL_JUMP)  ; LAB_00575f9f
    LEA EDX,[EBX + 0xd214]              ; 00575f85
    PUSH EDX                            ; 00575f8b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00575f8c
    PUSH EBX                            ; 00575f92
    CALL dword ptr [EAX + 0x30]         ; 00575f93
    ADD ESP,0x8                         ; 00575f96
    MOV dword ptr [EBX + 0xd280],EAX    ; 00575f99
    PUSH dword ptr [EBX + 0xd27c]       ; 00575f9f
        ;   Label: LAB_00575f9f
    PUSH dword ptr [EBX + 0xd278]       ; 00575fa5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00575fab
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1e8],EAX     ; 00575fb0
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 00575fb7
    MOV dword ptr [EBX + 0xd284],EAX    ; 00575fbe
    ADD ESP,0x8                         ; 00575fc4
    MOV ESP,EBP                         ; 00575fc7
    POP EBP                             ; 00575fc9
    POP EDI                             ; 00575fca
    POP ESI                             ; 00575fcb
    POP EBX                             ; 00575fcc
    RET                                 ; 00575fcd

