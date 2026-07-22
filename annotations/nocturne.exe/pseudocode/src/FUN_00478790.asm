; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00478790(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00478764 = 00478898
;   TerminatedCString s_none_0057f1d0
;   TerminatedCString s_mob_0057f1d5
;   double DOUBLE_0057f1dc = 5.22209901682860E-315
;   double DOUBLE_0057f1e4 = 0.5
;   double DOUBLE_0057f1ec = 2.5
;   undefined4 DAT_005b7650
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be368
;   undefined4 DAT_01c77608
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_charactr.cpp_FUN_00427730
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_emitter.cpp_CEmitter_getRandomBoundingBoxPoint_FUN_00479390
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_0048c3c0
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0
;   core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710
;   core_fire.cpp_CFireEffect_createRock_FUN_0048b320
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478790
        ;   Label: FUN_00478790
    PUSH ESI                            ; 00478791
    PUSH EDI                            ; 00478792
    PUSH EBP                            ; 00478793
    MOV EBP,ESP                         ; 00478794
    SUB ESP,0xd8                        ; 00478796
    AND ESP,0xfffffff8                  ; 0047879c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047879f
    PUSH 0x57f1d0                       ; 004787a2 | = "none"
    LEA EDI,[EBX + 0x164]               ; 004787a7
    PUSH EDI                            ; 004787ad
    MOV ESI,dword ptr [EBX + 0x484]     ; 004787ae
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004787b4
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 004787b9
    TEST EAX,EAX                        ; 004787bc
    JNZ 0x0047898a                      ; 004787be
        ;   XREF to: 0047898a (CONDITIONAL_JUMP)  ; LAB_0047898a
    LEA EAX,[EBX + 0x1c8]               ; 004787c4
        ;   Label: LAB_004787c4
    PUSH EAX                            ; 004787ca
    MOV EDI,dword ptr [0x005b7650]      ; 004787cb | DAT_005b7650
    PUSH EDI                            ; 004787d1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004787d2
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004787d7
    TEST EAX,EAX                        ; 004787da
    JZ 0x004787e8                       ; 004787dc
        ;   XREF to: 004787e8 (CONDITIONAL_JUMP)  ; LAB_004787e8
    MOV dword ptr [EBX + 0x160],0x0     ; 004787de
    CMP dword ptr [EBX + 0x150],0xa     ; 004787e8
        ;   Label: LAB_004787e8
    JNZ 0x0047883d                      ; 004787ef
        ;   XREF to: 0047883d (CONDITIONAL_JUMP)  ; LAB_0047883d
    PUSH 0x40490000                     ; 004787f1
    XOR ESI,ESI                         ; 004787f6
    PUSH ESI                            ; 004787f8
    SUB ESP,0x8                         ; 004787f9
    FLD float ptr [EBX + 0x28]          ; 004787fc
    FSTP double ptr [ESP]               ; 004787ff
    SUB ESP,0x8                         ; 00478802
    FLD float ptr [EBX + 0x24]          ; 00478805
    FSTP double ptr [ESP]               ; 00478808
    SUB ESP,0x8                         ; 0047880b
    FLD float ptr [EBX + 0x20]          ; 0047880e
    FSTP double ptr [ESP]               ; 00478811
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880 ; 00478814
        ;   XREF to: 00527880 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880()
    ADD ESP,0x20                        ; 00478819
    TEST EAX,EAX                        ; 0047881c
    JZ 0x00478835                       ; 0047881e
        ;   XREF to: 00478835 (CONDITIONAL_JUMP)  ; LAB_00478835
    MOV EAX,[0x005b9354]                ; 00478820 | DAT_005b9354
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00478825 | DAT_01c77608
    MOV ESI,0x1                         ; 00478828
    TEST EDX,EDX                        ; 0047882d
    JZ 0x004789d2                       ; 0047882f
        ;   XREF to: 004789d2 (CONDITIONAL_JUMP)  ; LAB_004789d2
    TEST ESI,ESI                        ; 00478835
        ;   Label: LAB_00478835
    JZ 0x004789f2                       ; 00478837
        ;   XREF to: 004789f2 (CONDITIONAL_JUMP)  ; LAB_004789f2
    CMP dword ptr [EBX + 0x160],0x0     ; 0047883d
        ;   Label: LAB_0047883d
    JZ 0x00478ec5                       ; 00478844
        ;   XREF to: 00478ec5 (CONDITIONAL_JUMP)  ; LAB_00478ec5
    FLD float ptr [EBX + 0x438]         ; 0047884a
    FADD float ptr [EBP + 0x18]         ; 00478850
    FST float ptr [EBX + 0x438]         ; 00478853
    FCOMP float ptr [EBX + 0x43c]       ; 00478859
    FNSTSW AX                           ; 0047885f
    SAHF                                ; 00478861
    JC 0x00478941                       ; 00478862
        ;   XREF to: 00478941 (CONDITIONAL_JUMP)  ; LAB_00478941
    FLD float ptr [EBX + 0x43c]         ; 00478868
    FSUBR float ptr [EBX + 0x438]       ; 0047886e
    FSTP float ptr [EBX + 0x438]        ; 00478874
    TEST ESI,ESI                        ; 0047887a
    JZ 0x00478941                       ; 0047887c
        ;   XREF to: 00478941 (CONDITIONAL_JUMP)  ; LAB_00478941
    MOV EAX,dword ptr [EBX + 0x150]     ; 00478882
    CMP EAX,0xa                         ; 00478888
    JA 0x00478921                       ; 0047888b
        ;   XREF to: 00478921 (CONDITIONAL_JUMP)  ; caseD_a
    JMP dword ptr [EAX*0x4 + 0x478764]  ; 00478891 | caseD_0 | caseD_1 | caseD_a
        ;   Label: switchD
    PUSH 0xffff                         ; 00478898
        ;   Label: caseD_0
    PUSH 0x0                            ; 0047889d
    PUSH 0x10000                        ; 0047889f
    PUSH 0x4000                         ; 004788a4
    PUSH 0x0                            ; 004788a9
    LEA ESI,[EBX + 0x20]                ; 004788ab
    PUSH ESI                            ; 004788ae
    MOV EAX,[0x005b80f0]                ; 004788af | DAT_005b80f0
    PUSH EAX                            ; 004788b4
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 004788b5
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 004788ba
    PUSH ESI                            ; 004788bd
    LEA ESI,[EBX + 0x444]               ; 004788be
    PUSH ESI                            ; 004788c4
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90 ; 004788c5
        ;   XREF to: 0044cd90 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90()
    ADD ESP,0x8                         ; 004788ca
    PUSH 0x7fff                         ; 004788cd
    PUSH 0x0                            ; 004788d2
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 004788d4
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    MOV EDX,EAX                         ; 004788d9
    SAR EDX,0x1f                        ; 004788db
    MOV dword ptr [ESI + 0x3c],EAX      ; 004788de
    SHL EDX,0x8                         ; 004788e1
    SBB EAX,EDX                         ; 004788e4
    SAR EAX,0x8                         ; 004788e6
    MOV EDX,EAX                         ; 004788e9
    SAR EDX,0x1f                        ; 004788eb
    SHL EDX,0x2                         ; 004788ee
    SBB EAX,EDX                         ; 004788f1
    SAR EAX,0x2                         ; 004788f3
    ADD ESP,0x8                         ; 004788f6
    PUSH 0x41200000                     ; 004788f9
    PUSH ESI                            ; 004788fe
    MOV byte ptr [ESI + 0x1c],AL        ; 004788ff
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0 ; 00478902
        ;   XREF to: 0044cde0 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0()
        ;   Label: LAB_00478902
    ADD ESP,0x8                         ; 00478907
    PUSH ESI                            ; 0047890a
    MOV EDX,dword ptr [0x005be368]      ; 0047890b | DAT_005be368
    PUSH EDX                            ; 00478911 | DAT_01e57284
    MOV dword ptr [ESI + 0x20],0x0      ; 00478912
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0 ; 00478919
        ;   XREF to: 0050a9f0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0()
    ADD ESP,0x8                         ; 0047891e
    CMP byte ptr [EBX + 0x3cc],0x0      ; 00478921
        ;   Label: caseD_2
    JZ 0x00478941                       ; 00478928
        ;   XREF to: 00478941 (CONDITIONAL_JUMP)  ; LAB_00478941
    MOV ECX,dword ptr [EBX + 0x430]     ; 0047892a
    PUSH ECX                            ; 00478930
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00478931
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 00478936
    TEST EAX,EAX                        ; 00478939
    JZ 0x00478e90                       ; 0047893b
        ;   XREF to: 00478e90 (CONDITIONAL_JUMP)  ; LAB_00478e90
    MOV EAX,dword ptr [EBX + 0x160]     ; 00478941
        ;   Label: LAB_00478941
    MOV dword ptr [EBX + 0x488],EAX     ; 00478947
    CMP dword ptr [EBX + 0x3c0],0x0     ; 0047894d
    JZ 0x00478f2f                       ; 00478954
        ;   XREF to: 00478f2f (CONDITIONAL_JUMP)  ; LAB_00478f2f
    CMP dword ptr [EBX + 0x160],0x0     ; 0047895a
    JNZ 0x00478ef6                      ; 00478961
        ;   XREF to: 00478ef6 (CONDITIONAL_JUMP)  ; LAB_00478ef6
    FLD float ptr [EBX + 0x440]         ; 00478967
    FSUB float ptr [EBP + 0x18]         ; 0047896d
    FST float ptr [EBX + 0x440]         ; 00478970
    FLDZ                                ; 00478976
    FCOMPP                              ; 00478978
    FNSTSW AX                           ; 0047897a
    SAHF                                ; 0047897c
    JNC 0x00478ed9                      ; 0047897d
        ;   XREF to: 00478ed9 (CONDITIONAL_JUMP)  ; LAB_00478ed9
    MOV ESP,EBP                         ; 00478983
        ;   Label: LAB_00478983
    POP EBP                             ; 00478985
    POP EDI                             ; 00478986
    POP ESI                             ; 00478987
    POP EBX                             ; 00478988
    RET                                 ; 00478989
    PUSH EDI                            ; 0047898a
        ;   Label: LAB_0047898a
    MOV EDX,dword ptr [0x005b7650]      ; 0047898b | DAT_005b7650
    PUSH EDX                            ; 00478991
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00478992
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 00478997
    TEST EAX,EAX                        ; 0047899a
    JZ 0x004787c4                       ; 0047899c
        ;   XREF to: 004787c4 (CONDITIONAL_JUMP)  ; LAB_004787c4
    FLD float ptr [EBX + 0x22c]         ; 004789a2
    MOV ESI,0x1                         ; 004789a8
    PUSH EBX                            ; 004789ad
    MOV ECX,dword ptr [0x005be368]      ; 004789ae | DAT_005be368
    MOV dword ptr [EBX + 0x160],0x1     ; 004789b4
    PUSH ECX                            ; 004789be | DAT_01e57284
    FSTP float ptr [EBX + 0x440]        ; 004789bf
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890 ; 004789c5
        ;   XREF to: 00508890 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890()
    ADD ESP,0x8                         ; 004789ca
    JMP 0x004787c4                      ; 004789cd
        ;   XREF to: 004787c4 (UNCONDITIONAL_JUMP)  ; LAB_004787c4
    PUSH 0x3                            ; 004789d2
        ;   Label: LAB_004789d2
    PUSH 0x57f1d5                       ; 004789d4 | = "mob"
    LEA EAX,[EBX + 0x3cc]               ; 004789d9
    PUSH EAX                            ; 004789df
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 004789e0
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strnicmp_FUN_00564bc0()
    ADD ESP,0xc                         ; 004789e5
    TEST EAX,EAX                        ; 004789e8
    JNZ 0x00478835                      ; 004789ea
        ;   XREF to: 00478835 (CONDITIONAL_JUMP)  ; LAB_00478835
    XOR ESI,ESI                         ; 004789f0
    MOV ECX,dword ptr [EBX + 0x430]     ; 004789f2
        ;   Label: LAB_004789f2
    PUSH ECX                            ; 004789f8
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004789f9
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 004789fe
    JMP 0x0047883d                      ; 00478a01
        ;   XREF to: 0047883d (UNCONDITIONAL_JUMP)  ; LAB_0047883d
    LEA ESI,[EBX + 0x20]                ; 00478a06
        ;   Label: caseD_1
    XOR EDI,EDI                         ; 00478a09
    LEA EAX,[ESP + 0x78]                ; 00478a0b
        ;   Label: LAB_00478a0b
    CMP EAX,ESI                         ; 00478a0f
    JZ 0x00478a2a                       ; 00478a11
        ;   XREF to: 00478a2a (CONDITIONAL_JUMP)  ; LAB_00478a2a
    MOV EAX,dword ptr [ESI]             ; 00478a13
    MOV dword ptr [ESP + 0x78],EAX      ; 00478a15
    MOV EAX,dword ptr [ESI + 0x4]       ; 00478a19
    MOV dword ptr [ESP + 0x7c],EAX      ; 00478a1c
    MOV EAX,dword ptr [ESI + 0x8]       ; 00478a20
    MOV dword ptr [ESP + 0x80],EAX      ; 00478a23
    PUSH 0x3f000000                     ; 00478a2a
        ;   Label: LAB_00478a2a
    PUSH 0xbf000000                     ; 00478a2f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00478a34
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xdc],EAX      ; 00478a39
    FLD float ptr [ESP + 0xdc]          ; 00478a40
    ADD ESP,0x8                         ; 00478a47
    FMUL float ptr [EBX + 0x154]        ; 00478a4a
    PUSH 0x3f000000                     ; 00478a50
    FADD float ptr [ESP + 0x7c]         ; 00478a55
    PUSH 0xbf000000                     ; 00478a59
    FSTP float ptr [ESP + 0x80]         ; 00478a5e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00478a65
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xdc],EAX      ; 00478a6a
    FLD float ptr [ESP + 0xdc]          ; 00478a71
    FMUL float ptr [EBX + 0x15c]        ; 00478a78
    ADD ESP,0x8                         ; 00478a7e
    XOR ECX,ECX                         ; 00478a81
    FADD float ptr [ESP + 0x80]         ; 00478a83
    MOV dword ptr [ESP + 0x18],ECX      ; 00478a8a
    FSTP float ptr [ESP + 0x80]         ; 00478a8e
    MOV EAX,dword ptr [EBX + 0x158]     ; 00478a95
    PUSH 0xffff                         ; 00478a9b
    MOV dword ptr [ESP + 0x20],EAX      ; 00478aa0
    LEA EAX,[ESP + 0x1c]                ; 00478aa4
    PUSH EAX                            ; 00478aa8
    LEA EAX,[ESP + 0x80]                ; 00478aa9
    PUSH 0x3f800000                     ; 00478ab0
    PUSH EAX                            ; 00478ab5
    MOV EDX,dword ptr [0x005b80f0]      ; 00478ab6 | DAT_005b80f0
    PUSH EDX                            ; 00478abc
    INC EDI                             ; 00478abd
    MOV dword ptr [ESP + 0x34],ECX      ; 00478abe
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0 ; 00478ac2
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0()
    ADD ESP,0x14                        ; 00478ac7
    CMP EDI,0x4                         ; 00478aca
    JGE 0x00478921                      ; 00478acd
        ;   XREF to: 00478921 (CONDITIONAL_JUMP)  ; caseD_a
    JMP 0x00478a0b                      ; 00478ad3
        ;   XREF to: 00478a0b (UNCONDITIONAL_JUMP)  ; LAB_00478a0b
    PUSH 0x3fc90fdb                     ; 00478ad8
        ;   Label: caseD_4
    PUSH 0x3f490fdb                     ; 00478add
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00478ae2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xdc],EAX      ; 00478ae7
    FLD float ptr [ESP + 0xdc]          ; 00478aee
    ADD ESP,0x8                         ; 00478af5
    PUSH 0x40c90fdb                     ; 00478af8
    PUSH 0x0                            ; 00478afd
    FSTP float ptr [ESP + 0xc8]         ; 00478aff
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00478b06
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xdc],EAX      ; 00478b0b
    FLD float ptr [ESP + 0xdc]          ; 00478b12
    ADD ESP,0x8                         ; 00478b19
    MOV EAX,dword ptr [EBX + 0x3bc]     ; 00478b1c
    FLD float ptr [ESP + 0xc0]          ; 00478b22
    MOV dword ptr [ESP + 0xbc],EAX      ; 00478b29
    FLD ST0                             ; 00478b30
    FCOS                                ; 00478b32
    FLD ST2                             ; 00478b34
    FCOS                                ; 00478b36
    FXCH ST2                            ; 00478b38
    FSIN                                ; 00478b3a
    FXCH ST3                            ; 00478b3c
    FSIN                                ; 00478b3e
    FLD float ptr [ESP + 0xbc]          ; 00478b40
    FMULP ST3                           ; 00478b47
    FLD float ptr [ESP + 0xbc]          ; 00478b49
    FMULP ST4                           ; 00478b50
    FMUL float ptr [ESP + 0xbc]         ; 00478b52
    FXCH ST2                            ; 00478b59
    FMUL ST1                            ; 00478b5b
    LEA EAX,[EBX + 0x240]               ; 00478b5d
    FXCH ST2                            ; 00478b63
    FMULP                               ; 00478b65
    PUSH EAX                            ; 00478b67
    FXCH ST2                            ; 00478b68
    FSTP float ptr [ESP + 0x5c]         ; 00478b6a
    FSTP float ptr [ESP + 0x58]         ; 00478b6e
    FSTP float ptr [ESP + 0x60]         ; 00478b72
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00478b76
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    ADD ESP,0x4                         ; 00478b7b
    PUSH EAX                            ; 00478b7e
    LEA EAX,[ESP + 0x58]                ; 00478b7f
    PUSH EAX                            ; 00478b83
    LEA EAX,[EBX + 0x20]                ; 00478b84
    PUSH EAX                            ; 00478b87
    MOV EDI,dword ptr [0x005b80f0]      ; 00478b88 | DAT_005b80f0
    PUSH EDI                            ; 00478b8e
    CALL core_fire.cpp_CFireEffect_createRock_FUN_0048b320 ; 00478b8f
        ;   XREF to: 0048b320 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createRock_FUN_0048b320()
    ADD ESP,0x10                        ; 00478b94
    JMP 0x00478921                      ; 00478b97
        ;   XREF to: 00478921 (UNCONDITIONAL_JUMP)  ; caseD_a
    LEA EAX,[ESP + 0x30]                ; 00478b9c
        ;   Label: caseD_5
    PUSH EAX                            ; 00478ba0
    PUSH EBX                            ; 00478ba1
    CALL core_emitter.cpp_CEmitter_getRandomBoundingBoxPoint_FUN_00479390 ; 00478ba2
        ;   XREF to: 00479390 (UNCONDITIONAL_CALL)  ; undefined core_emitter.cpp_CEmitter_getRandomBoundingBoxPoint_FUN_00479390()
    ADD ESP,0x8                         ; 00478ba7
    PUSH 0x1                            ; 00478baa
    PUSH 0x2                            ; 00478bac
    LEA EAX,[EBX + 0x30]                ; 00478bae
    PUSH EAX                            ; 00478bb1
    LEA EAX,[ESP + 0x3c]                ; 00478bb2
    PUSH EAX                            ; 00478bb6
    MOV ECX,dword ptr [0x005b80f0]      ; 00478bb7 | DAT_005b80f0
    PUSH ECX                            ; 00478bbd
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_0048c3c0 ; 00478bbe
        ;   XREF to: 0048c3c0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createGunFlames_FUN_0048c3c0()
    MOV ESI,dword ptr [0x01cae0e8]      ; 00478bc3 | DAT_01cae0e8
    MOV ESI,dword ptr [ESI*0x4 + 0x1cae0d8] ; 00478bc9
    LEA EAX,[ESI + 0x20]                ; 00478bd0
    LEA EDX,[EBX + 0x20]                ; 00478bd3
    FLD float ptr [EAX]                 ; 00478bd6
    FSUB float ptr [EDX]                ; 00478bd8
    ADD ESP,0x14                        ; 00478bda
    FSTP float ptr [ESP + 0x3c]         ; 00478bdd
    FLD float ptr [EAX + 0x4]           ; 00478be1
    FSUB float ptr [EDX + 0x4]          ; 00478be4
    FST float ptr [ESP + 0x40]          ; 00478be7
    FMUL float ptr [ESP + 0x40]         ; 00478beb
    FLD float ptr [ESP + 0x3c]          ; 00478bef
    FMUL ST0                            ; 00478bf3
    FLD float ptr [EAX + 0x8]           ; 00478bf5
    FSUB float ptr [EDX + 0x8]          ; 00478bf8
    FXCH                                ; 00478bfb
    FADDP ST2,ST0                       ; 00478bfd
    FST float ptr [ESP + 0x44]          ; 00478bff
    FMUL float ptr [ESP + 0x44]         ; 00478c03
    FADDP                               ; 00478c07
    FSQRT                               ; 00478c09
    FCOMP double ptr [0x0057f1ec]       ; 00478c0b | DOUBLE_0057f1ec
    FNSTSW AX                           ; 00478c11
    SAHF                                ; 00478c13
    JNC 0x00478921                      ; 00478c14
        ;   XREF to: 00478921 (CONDITIONAL_JUMP)  ; caseD_a
    PUSH EDX                            ; 00478c1a
    LEA EAX,[ESP + 0x4c]                ; 00478c1b
    PUSH EAX                            ; 00478c1f
    PUSH ESI                            ; 00478c20
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00478c21
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 00478c26
    PUSH 0x1                            ; 00478c29
    PUSH 0x3f800000                     ; 00478c2b
    PUSH 0x0                            ; 00478c30
    PUSH 0x0                            ; 00478c32
    LEA EAX,[ESP + 0x58]                ; 00478c34
    PUSH EAX                            ; 00478c38
    MOV EAX,[0x01cae0e8]                ; 00478c39 | DAT_01cae0e8
    MOV ESI,dword ptr [EAX*0x4 + 0x1cae0d8] ; 00478c3e
    PUSH ESI                            ; 00478c45
    CALL core_charactr.cpp_FUN_00427730 ; 00478c46
        ;   XREF to: 00427730 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427730()
    ADD ESP,0x18                        ; 00478c4b
    JMP 0x00478921                      ; 00478c4e
        ;   XREF to: 00478921 (UNCONDITIONAL_JUMP)  ; caseD_a
    PUSH 0x0                            ; 00478c53
        ;   Label: caseD_6
    LEA ESI,[EBX + 0x20]                ; 00478c55
    PUSH ESI                            ; 00478c58
    MOV ECX,dword ptr [0x005b80f0]      ; 00478c59 | DAT_005b80f0
    PUSH ECX                            ; 00478c5f
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710 ; 00478c60
        ;   XREF to: 0048c710 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710()
    ADD ESP,0xc                         ; 00478c65
    PUSH 0x0                            ; 00478c68
    PUSH ESI                            ; 00478c6a
    MOV EDI,dword ptr [0x005b80f0]      ; 00478c6b | DAT_005b80f0
    PUSH EDI                            ; 00478c71
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710 ; 00478c72
        ;   XREF to: 0048c710 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710()
    ADD ESP,0xc                         ; 00478c77
    PUSH 0x0                            ; 00478c7a
    PUSH ESI                            ; 00478c7c
    MOV EAX,[0x005b80f0]                ; 00478c7d | DAT_005b80f0
    PUSH EAX                            ; 00478c82
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710 ; 00478c83
        ;   XREF to: 0048c710 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710()
    ADD ESP,0xc                         ; 00478c88
    PUSH 0x0                            ; 00478c8b
    PUSH ESI                            ; 00478c8d
    MOV EDX,dword ptr [0x005b80f0]      ; 00478c8e | DAT_005b80f0
    PUSH EDX                            ; 00478c94
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710 ; 00478c95
        ;   XREF to: 0048c710 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710()
    ADD ESP,0xc                         ; 00478c9a
    JMP 0x00478921                      ; 00478c9d
        ;   XREF to: 00478921 (UNCONDITIONAL_JUMP)  ; caseD_a
    FLD float ptr [EBX + 0x154]         ; 00478ca2
        ;   Label: caseD_7
    FMUL double ptr [0x0057f1e4]        ; 00478ca8 | DOUBLE_0057f1e4
    SUB ESP,0x4                         ; 00478cae
    FSTP float ptr [ESP]                ; 00478cb1
    PUSH 0x0                            ; 00478cb4
    LEA ESI,[EBX + 0x20]                ; 00478cb6
    PUSH dword ptr [EBX + 0x158]        ; 00478cb9
    PUSH ESI                            ; 00478cbf
    MOV EAX,[0x005b80f0]                ; 00478cc0 | DAT_005b80f0
    PUSH EAX                            ; 00478cc5
    CALL core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420 ; 00478cc6
        ;   XREF to: 0048c420 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420()
    LEA EAX,[ESP + 0xb0]                ; 00478ccb
    ADD ESP,0x14                        ; 00478cd2
    CMP EAX,ESI                         ; 00478cd5
    JZ 0x00478cf6                       ; 00478cd7
        ;   XREF to: 00478cf6 (CONDITIONAL_JUMP)  ; LAB_00478cf6
    MOV EAX,dword ptr [ESI]             ; 00478cd9
    MOV dword ptr [ESP + 0x9c],EAX      ; 00478cdb
    MOV EAX,dword ptr [ESI + 0x4]       ; 00478ce2
    MOV dword ptr [ESP + 0xa0],EAX      ; 00478ce5
    MOV EAX,dword ptr [ESI + 0x8]       ; 00478cec
    MOV dword ptr [ESP + 0xa4],EAX      ; 00478cef
    FLD float ptr [EBX + 0x158]         ; 00478cf6
        ;   Label: LAB_00478cf6
    FMUL double ptr [0x0057f1e4]        ; 00478cfc | DOUBLE_0057f1e4
    LEA EAX,[ESP + 0x9c]                ; 00478d02
    LEA ESI,[EBX + 0x444]               ; 00478d09
    PUSH EAX                            ; 00478d0f
    FLD float ptr [ESP + 0xa4]          ; 00478d10
    FXCH                                ; 00478d17
    FADD ST0,ST1                        ; 00478d19
    PUSH ESI                            ; 00478d1b
    FSTP ST1                            ; 00478d1c
    FSTP float ptr [ESP + 0xa8]         ; 00478d1e
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90 ; 00478d25
        ;   XREF to: 0044cd90 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90()
    ADD ESP,0x8                         ; 00478d2a
    PUSH 0x7fff                         ; 00478d2d
    PUSH 0x0                            ; 00478d32
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00478d34
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    MOV EDX,EAX                         ; 00478d39
    SAR EDX,0x1f                        ; 00478d3b
    MOV dword ptr [ESI + 0x3c],EAX      ; 00478d3e
    SHL EDX,0x8                         ; 00478d41
    SBB EAX,EDX                         ; 00478d44
    SAR EAX,0x8                         ; 00478d46
    MOV EDX,EAX                         ; 00478d49
    SAR EDX,0x1f                        ; 00478d4b
    SHL EDX,0x2                         ; 00478d4e
    SBB EAX,EDX                         ; 00478d51
    SAR EAX,0x2                         ; 00478d53
    ADD ESP,0x8                         ; 00478d56
    MOV byte ptr [ESI + 0x1c],AL        ; 00478d59
    PUSH dword ptr [EBX + 0x158]        ; 00478d5c
    PUSH ESI                            ; 00478d62
    JMP 0x00478902                      ; 00478d63
        ;   XREF to: 00478902 (UNCONDITIONAL_JUMP)  ; LAB_00478902
    PUSH 0xffff                         ; 00478d68
        ;   Label: caseD_8
    PUSH 0x1                            ; 00478d6d
    PUSH 0x10000                        ; 00478d6f
    PUSH 0x4000                         ; 00478d74
    PUSH 0x0                            ; 00478d79
    LEA EAX,[EBX + 0x20]                ; 00478d7b
    PUSH EAX                            ; 00478d7e
    MOV EDI,dword ptr [0x005b80f0]      ; 00478d7f | DAT_005b80f0
    PUSH EDI                            ; 00478d85
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 00478d86
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 00478d8b
    JMP 0x00478921                      ; 00478d8e
        ;   XREF to: 00478921 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV EDX,dword ptr [EBX + 0x3c8]     ; 00478d93
        ;   Label: caseD_9
    TEST EDX,EDX                        ; 00478d99
    JZ 0x00478921                       ; 00478d9b
        ;   XREF to: 00478921 (CONDITIONAL_JUMP)  ; caseD_a
    MOV EAX,EDX                         ; 00478da1
    MOV ESI,dword ptr [EDX + 0x14c]     ; 00478da3
    MOV EDX,ESP                         ; 00478da9
    PUSH EDX                            ; 00478dab
    PUSH EAX                            ; 00478dac
    CALL dword ptr [ESI + 0x14]         ; 00478dad
    LEA EDX,[EAX + 0xc]                 ; 00478db0
    FLD float ptr [EAX]                 ; 00478db3
    FADD float ptr [EDX]                ; 00478db5
    ADD ESP,0x8                         ; 00478db7
    FST float ptr [ESP + 0x24]          ; 00478dba
    FLD float ptr [EAX + 0x4]           ; 00478dbe
    FADD float ptr [EDX + 0x4]          ; 00478dc1
    FXCH                                ; 00478dc4
    FLD float ptr [0x0057f1dc]          ; 00478dc6 | DOUBLE_0057f1dc
    FXCH                                ; 00478dcc
    FMUL ST1                            ; 00478dce
    FXCH ST2                            ; 00478dd0
    FST float ptr [ESP + 0x28]          ; 00478dd2
    FLD float ptr [EAX + 0x8]           ; 00478dd6
    FADD float ptr [EDX + 0x8]          ; 00478dd9
    FXCH                                ; 00478ddc
    FMUL ST2                            ; 00478dde
    FXCH                                ; 00478de0
    FST float ptr [ESP + 0x2c]          ; 00478de2
    FMULP ST2                           ; 00478de6
    LEA EAX,[ESP + 0x60]                ; 00478de8
    FXCH ST2                            ; 00478dec
    FSTP float ptr [ESP + 0x60]         ; 00478dee
    PUSH EAX                            ; 00478df2
    LEA EAX,[ESP + 0x88]                ; 00478df3
    FXCH                                ; 00478dfa
    FSTP float ptr [ESP + 0x68]         ; 00478dfc
    PUSH EAX                            ; 00478e00
    FSTP float ptr [ESP + 0x70]         ; 00478e01
    MOV ECX,dword ptr [EBX + 0x3c8]     ; 00478e05
    PUSH ECX                            ; 00478e0b
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00478e0c
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    MOV EDX,dword ptr [EBX + 0x3c8]     ; 00478e11
    FLD float ptr [EDX + 0x20]          ; 00478e17
    FADD float ptr [EAX]                ; 00478e1a
    ADD ESP,0xc                         ; 00478e1c
    FSTP float ptr [ESP + 0x6c]         ; 00478e1f
    FLD float ptr [EDX + 0x24]          ; 00478e23
    FADD float ptr [EAX + 0x4]          ; 00478e26
    FSTP float ptr [ESP + 0x70]         ; 00478e29
    FLD float ptr [EDX + 0x28]          ; 00478e2d
    LEA EDX,[ESP + 0x90]                ; 00478e30
    FADD float ptr [EAX + 0x8]          ; 00478e37
    LEA EAX,[ESP + 0x6c]                ; 00478e3a
    FSTP float ptr [ESP + 0x74]         ; 00478e3e
    CMP EDX,EAX                         ; 00478e42
    JZ 0x00478e67                       ; 00478e44
        ;   XREF to: 00478e67 (CONDITIONAL_JUMP)  ; LAB_00478e67
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00478e46
    MOV dword ptr [ESP + 0x90],EAX      ; 00478e4a
    MOV EAX,dword ptr [ESP + 0x70]      ; 00478e51
    MOV dword ptr [ESP + 0x94],EAX      ; 00478e55
    MOV EAX,dword ptr [ESP + 0x74]      ; 00478e5c
    MOV dword ptr [ESP + 0x98],EAX      ; 00478e60
    PUSH 0x40800000                     ; 00478e67
        ;   Label: LAB_00478e67
    PUSH 0x0                            ; 00478e6c
    PUSH 0x0                            ; 00478e6e
    LEA EAX,[ESP + 0x9c]                ; 00478e70
    PUSH EAX                            ; 00478e77
    LEA EAX,[EBX + 0x20]                ; 00478e78
    PUSH EAX                            ; 00478e7b
    MOV ESI,dword ptr [0x005b80f0]      ; 00478e7c | DAT_005b80f0
    PUSH ESI                            ; 00478e82
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0 ; 00478e83
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0()
    ADD ESP,0x18                        ; 00478e88
    JMP 0x00478921                      ; 00478e8b
        ;   XREF to: 00478921 (UNCONDITIONAL_JUMP)  ; caseD_a
    CMP dword ptr [EBX + 0x434],0x1     ; 00478e90
        ;   Label: LAB_00478e90
    JNZ 0x00478ea6                      ; 00478e97
        ;   XREF to: 00478ea6 (CONDITIONAL_JUMP)  ; LAB_00478ea6
    CMP dword ptr [EBX + 0x488],0x0     ; 00478e99
    JNZ 0x00478941                      ; 00478ea0
        ;   XREF to: 00478941 (CONDITIONAL_JUMP)  ; LAB_00478941
    LEA EAX,[EBX + 0x3cc]               ; 00478ea6
        ;   Label: LAB_00478ea6
    PUSH EAX                            ; 00478eac
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00478ead
    PUSH EBX                            ; 00478eb3
    CALL dword ptr [EDX + 0x24]         ; 00478eb4
    ADD ESP,0x8                         ; 00478eb7
    MOV dword ptr [EBX + 0x430],EAX     ; 00478eba
    JMP 0x00478941                      ; 00478ec0
        ;   XREF to: 00478941 (UNCONDITIONAL_JUMP)  ; LAB_00478941
    MOV EAX,dword ptr [EBX + 0x430]     ; 00478ec5
        ;   Label: LAB_00478ec5
    PUSH EAX                            ; 00478ecb
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00478ecc
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00478ed1
    JMP 0x00478941                      ; 00478ed4
        ;   XREF to: 00478941 (UNCONDITIONAL_JUMP)  ; LAB_00478941
    MOV dword ptr [EBX + 0x160],0x1     ; 00478ed9
        ;   Label: LAB_00478ed9
    MOV EAX,dword ptr [EBX + 0x22c]     ; 00478ee3
    MOV dword ptr [EBX + 0x440],EAX     ; 00478ee9
    MOV ESP,EBP                         ; 00478eef
    POP EBP                             ; 00478ef1
    POP EDI                             ; 00478ef2
    POP ESI                             ; 00478ef3
    POP EBX                             ; 00478ef4
    RET                                 ; 00478ef5
    FLD float ptr [EBX + 0x440]         ; 00478ef6
        ;   Label: LAB_00478ef6
    FSUB float ptr [EBP + 0x18]         ; 00478efc
    FST float ptr [EBX + 0x440]         ; 00478eff
    FLDZ                                ; 00478f05
    FCOMPP                              ; 00478f07
    FNSTSW AX                           ; 00478f09
    SAHF                                ; 00478f0b
    JC 0x00478983                       ; 00478f0c
        ;   XREF to: 00478983 (CONDITIONAL_JUMP)  ; LAB_00478983
    MOV dword ptr [EBX + 0x160],0x0     ; 00478f12
    MOV EAX,dword ptr [EBX + 0x3c4]     ; 00478f1c
    MOV dword ptr [EBX + 0x440],EAX     ; 00478f22
    MOV ESP,EBP                         ; 00478f28
    POP EBP                             ; 00478f2a
    POP EDI                             ; 00478f2b
    POP ESI                             ; 00478f2c
    POP EBX                             ; 00478f2d
    RET                                 ; 00478f2e
    FLD float ptr [EBX + 0x22c]         ; 00478f2f
        ;   Label: LAB_00478f2f
    FLDZ                                ; 00478f35
    FCOMPP                              ; 00478f37
    FNSTSW AX                           ; 00478f39
    SAHF                                ; 00478f3b
    JNC 0x00478983                      ; 00478f3c
        ;   XREF to: 00478983 (CONDITIONAL_JUMP)  ; LAB_00478983
    FLD float ptr [EBX + 0x440]         ; 00478f42
    FSUB float ptr [EBP + 0x18]         ; 00478f48
    FST float ptr [EBX + 0x440]         ; 00478f4b
    FLDZ                                ; 00478f51
    FCOMPP                              ; 00478f53
    FNSTSW AX                           ; 00478f55
    SAHF                                ; 00478f57
    JC 0x00478983                       ; 00478f58
        ;   XREF to: 00478983 (CONDITIONAL_JUMP)  ; LAB_00478983
    MOV dword ptr [EBX + 0x440],0x0     ; 00478f5e
    MOV dword ptr [EBX + 0x160],0x0     ; 00478f68
    MOV ESP,EBP                         ; 00478f72
    POP EBP                             ; 00478f74
    POP EDI                             ; 00478f75
    POP ESI                             ; 00478f76
    POP EBX                             ; 00478f77
    RET                                 ; 00478f78

