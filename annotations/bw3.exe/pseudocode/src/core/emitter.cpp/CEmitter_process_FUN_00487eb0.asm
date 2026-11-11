; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_process_FUN_00487eb0(CEmitter *this_ptr,float delta_time)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00487e74 = 00487fc2
;   undefined4 s_none_005bda27+1
;   undefined4 DAT_005bda2d
;   undefined4 DAT_005bda34
;   undefined4 DAT_005bda38
;   undefined4 DAT_005bda3c
;   undefined4 DAT_005bda44
;   undefined4 DAT_005bda4c
;   undefined4 DAT_005fba60
;   undefined4 DAT_005fc5a0
;   CGame* g_CGamePtr = 01d2130c
;   CGore* g_CGorePtr = 01d22e44
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CGameInstance.foul_language_flag
;   undefined4 DAT_01d5ba14
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_FUN_0042fbd0
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_emitter.cpp_FUN_00488ea0
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_fire.cpp_CFireEffect_createFirefly_FUN_004a29d0
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0
;   core_fire.cpp_CFireEffect_createLeaf_FUN_004a2930
;   core_fire.cpp_CFireEffect_createRock_FUN_004a28e0
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487eb0
        ;   Label: core_emitter.cpp_CEmitter_process_FUN_00487eb0
    PUSH ESI                            ; 00487eb1
    PUSH EDI                            ; 00487eb2
    PUSH EBP                            ; 00487eb3
    MOV EBP,ESP                         ; 00487eb4
    SUB ESP,0x18c                       ; 00487eb6
    AND ESP,0xfffffff8                  ; 00487ebc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00487ebf
    PUSH 0x5bda28                       ; 00487ec2 | s_none_005bda27+1
    LEA EDI,[EBX + 0x16c]               ; 00487ec7
    PUSH EDI                            ; 00487ecd
    MOV ESI,dword ptr [EBX + 0x4b0]     ; 00487ece
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00487ed4
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00487ed9
    TEST EAX,EAX                        ; 00487edc
    JNZ 0x004880be                      ; 00487ede
        ;   XREF to: 004880be (CONDITIONAL_JUMP)  ; LAB_004880be
    LEA EAX,[EBX + 0x1d0]               ; 00487ee4
        ;   Label: LAB_00487ee4
    PUSH EAX                            ; 00487eea
    MOV EDI,dword ptr [0x005fba60]      ; 00487eeb | DAT_005fba60
    PUSH EDI                            ; 00487ef1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00487ef2
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00487ef7
    TEST EAX,EAX                        ; 00487efa
    JZ 0x00487f12                       ; 00487efc
        ;   XREF to: 00487f12 (CONDITIONAL_JUMP)  ; LAB_00487f12
    MOV dword ptr [EBX + 0x168],0x0     ; 00487efe
    MOV dword ptr [EBX + 0x3ec],0x0     ; 00487f08
    CMP dword ptr [EBX + 0x158],0xa     ; 00487f12
        ;   Label: LAB_00487f12
    JNZ 0x00487f67                      ; 00487f19
        ;   XREF to: 00487f67 (CONDITIONAL_JUMP)  ; LAB_00487f67
    PUSH dword ptr [EBX + 0x3f4]        ; 00487f1b
    SUB ESP,0x8                         ; 00487f21
    FLD float ptr [EBX + 0x28]          ; 00487f24
    FSTP double ptr [ESP]               ; 00487f27
    SUB ESP,0x8                         ; 00487f2a
    FLD float ptr [EBX + 0x24]          ; 00487f2d
    FSTP double ptr [ESP]               ; 00487f30
    SUB ESP,0x8                         ; 00487f33
    FLD float ptr [EBX + 0x20]          ; 00487f36
    FSTP double ptr [ESP]               ; 00487f39
    XOR ESI,ESI                         ; 00487f3c
    CALL sound_sndmain.cpp_FUN_00557170 ; 00487f3e
        ;   XREF to: 00557170 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00557170()
    ADD ESP,0x1c                        ; 00487f43
    TEST EAX,EAX                        ; 00487f46
    JZ 0x00487f5f                       ; 00487f48
        ;   XREF to: 00487f5f (CONDITIONAL_JUMP)  ; LAB_00487f5f
    MOV EAX,[0x005fe9dc]                ; 00487f4a | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00487f4f | g_CGameInstance.foul_language_flag
    MOV ESI,0x1                         ; 00487f52
    TEST EDX,EDX                        ; 00487f57
    JZ 0x00488110                       ; 00487f59
        ;   XREF to: 00488110 (CONDITIONAL_JUMP)  ; LAB_00488110
    TEST ESI,ESI                        ; 00487f5f
        ;   Label: LAB_00487f5f
    JZ 0x00488130                       ; 00487f61
        ;   XREF to: 00488130 (CONDITIONAL_JUMP)  ; LAB_00488130
    CMP dword ptr [EBX + 0x168],0x0     ; 00487f67
        ;   Label: LAB_00487f67
    JZ 0x004888ef                       ; 00487f6e
        ;   XREF to: 004888ef (CONDITIONAL_JUMP)  ; LAB_004888ef
    FLD float ptr [EBX + 0x464]         ; 00487f74
    FADD float ptr [EBP + 0x18]         ; 00487f7a
    FST float ptr [EBX + 0x464]         ; 00487f7d
    FCOMP float ptr [EBX + 0x468]       ; 00487f83
    FNSTSW AX                           ; 00487f89
    SAHF                                ; 00487f8b
    JC 0x0048806b                       ; 00487f8c
        ;   XREF to: 0048806b (CONDITIONAL_JUMP)  ; LAB_0048806b
    FLD float ptr [EBX + 0x468]         ; 00487f92
    FSUBR float ptr [EBX + 0x464]       ; 00487f98
    FSTP float ptr [EBX + 0x464]        ; 00487f9e
    TEST ESI,ESI                        ; 00487fa4
    JZ 0x0048806b                       ; 00487fa6
        ;   XREF to: 0048806b (CONDITIONAL_JUMP)  ; LAB_0048806b
    MOV EAX,dword ptr [EBX + 0x158]     ; 00487fac
    CMP EAX,0xd                         ; 00487fb2
    JA 0x0048804b                       ; 00487fb5
        ;   XREF to: 0048804b (CONDITIONAL_JUMP)  ; caseD_a
    JMP dword ptr [EAX*0x4 + 0x487e74]  ; 00487fbb | caseD_0 | caseD_1 | caseD_a
        ;   Label: switchD
    PUSH 0xffff                         ; 00487fc2
        ;   Label: caseD_0
    PUSH 0x0                            ; 00487fc7
    PUSH 0x10000                        ; 00487fc9
    PUSH 0x4000                         ; 00487fce
    PUSH 0x0                            ; 00487fd3
    LEA ESI,[EBX + 0x20]                ; 00487fd5
    PUSH ESI                            ; 00487fd8
    MOV EDI,dword ptr [0x005fc5a0]      ; 00487fd9 | DAT_005fc5a0
    PUSH EDI                            ; 00487fdf
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 00487fe0
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00487fe5
    PUSH ESI                            ; 00487fe8
        ;   Label: LAB_00487fe8
    LEA ESI,[EBX + 0x470]               ; 00487fe9
    PUSH ESI                            ; 00487fef
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0 ; 00487ff0
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00487ff5
    PUSH 0x7fff                         ; 00487ff8
    PUSH 0x0                            ; 00487ffd
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00487fff
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    MOV EDX,EAX                         ; 00488004
    SAR EDX,0x1f                        ; 00488006
    MOV dword ptr [ESI + 0x3c],EAX      ; 00488009
    SHL EDX,0x8                         ; 0048800c
    SBB EAX,EDX                         ; 0048800f
    SAR EAX,0x8                         ; 00488011
    MOV EDX,EAX                         ; 00488014
    SAR EDX,0x1f                        ; 00488016
    SHL EDX,0x2                         ; 00488019
    SBB EAX,EDX                         ; 0048801c
    SAR EAX,0x2                         ; 0048801e
    ADD ESP,0x8                         ; 00488021
    PUSH 0x41200000                     ; 00488024
    PUSH ESI                            ; 00488029
    MOV byte ptr [ESI + 0x1c],AL        ; 0048802a
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 0048802d
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
        ;   Label: LAB_0048802d
    ADD ESP,0x8                         ; 00488032
    PUSH ESI                            ; 00488035
    MOV EAX,[0x00603b28]                ; 00488036 | g_CDemonSetPtr
    PUSH EAX                            ; 0048803b | g_CDemonSetInstance
    MOV dword ptr [ESI + 0x20],0x0      ; 0048803c
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0 ; 00488043
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 00488048
    CMP byte ptr [EBX + 0x3f8],0x0      ; 0048804b
        ;   Label: caseD_2
    JZ 0x0048806b                       ; 00488052
        ;   XREF to: 0048806b (CONDITIONAL_JUMP)  ; LAB_0048806b
    MOV EDX,dword ptr [EBX + 0x45c]     ; 00488054
    PUSH EDX                            ; 0048805a
    CALL sound_sndmain.cpp_FUN_00556700 ; 0048805b
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00488060
    TEST EAX,EAX                        ; 00488063
    JZ 0x004888ba                       ; 00488065
        ;   XREF to: 004888ba (CONDITIONAL_JUMP)  ; LAB_004888ba
    MOV EAX,dword ptr [EBX + 0x168]     ; 0048806b
        ;   Label: LAB_0048806b
    MOV EDI,dword ptr [EBX + 0x3ec]     ; 00488071
    MOV dword ptr [EBX + 0x4b4],EAX     ; 00488077
    TEST EDI,EDI                        ; 0048807d
    JZ 0x004880b7                       ; 0048807f
        ;   XREF to: 004880b7 (CONDITIONAL_JUMP)  ; LAB_004880b7
    CMP dword ptr [EBX + 0x3e4],0x0     ; 00488081
    JZ 0x00488959                       ; 00488088
        ;   XREF to: 00488959 (CONDITIONAL_JUMP)  ; LAB_00488959
    CMP dword ptr [EBX + 0x168],0x0     ; 0048808e
    JNZ 0x00488920                      ; 00488095
        ;   XREF to: 00488920 (CONDITIONAL_JUMP)  ; LAB_00488920
    FLD float ptr [EBX + 0x46c]         ; 0048809b
    FSUB float ptr [EBP + 0x18]         ; 004880a1
    FST float ptr [EBX + 0x46c]         ; 004880a4
    FLDZ                                ; 004880aa
    FCOMPP                              ; 004880ac
    FNSTSW AX                           ; 004880ae
    SAHF                                ; 004880b0
    JNC 0x00488903                      ; 004880b1
        ;   XREF to: 00488903 (CONDITIONAL_JUMP)  ; LAB_00488903
    MOV ESP,EBP                         ; 004880b7
        ;   Label: LAB_004880b7
    POP EBP                             ; 004880b9
    POP EDI                             ; 004880ba
    POP ESI                             ; 004880bb
    POP EBX                             ; 004880bc
    RET                                 ; 004880bd
    PUSH EDI                            ; 004880be
        ;   Label: LAB_004880be
    MOV EDX,dword ptr [0x005fba60]      ; 004880bf | DAT_005fba60
    PUSH EDX                            ; 004880c5
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004880c6
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004880cb
    TEST EAX,EAX                        ; 004880ce
    JZ 0x00487ee4                       ; 004880d0
        ;   XREF to: 00487ee4 (CONDITIONAL_JUMP)  ; LAB_00487ee4
    FLD float ptr [EBX + 0x234]         ; 004880d6
    MOV ESI,0x1                         ; 004880dc
    PUSH EBX                            ; 004880e1
    MOV dword ptr [EBX + 0x3ec],0x1     ; 004880e2
    MOV ECX,dword ptr [0x00603b28]      ; 004880ec | g_CDemonSetPtr
    MOV dword ptr [EBX + 0x168],0x1     ; 004880f2
    PUSH ECX                            ; 004880fc | g_CDemonSetInstance
    FSTP float ptr [EBX + 0x46c]        ; 004880fd
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00534820 ; 00488103
        ;   XREF to: 00534820 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00534820(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00488108
    JMP 0x00487ee4                      ; 0048810b
        ;   XREF to: 00487ee4 (UNCONDITIONAL_JUMP)  ; LAB_00487ee4
    PUSH 0x3                            ; 00488110
        ;   Label: LAB_00488110
    PUSH 0x5bda2d                       ; 00488112 | DAT_005bda2d
    LEA EAX,[EBX + 0x3f8]               ; 00488117
    PUSH EAX                            ; 0048811d
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0048811e
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00488123
    TEST EAX,EAX                        ; 00488126
    JNZ 0x00487f5f                      ; 00488128
        ;   XREF to: 00487f5f (CONDITIONAL_JUMP)  ; LAB_00487f5f
    XOR ESI,ESI                         ; 0048812e
    MOV ECX,dword ptr [EBX + 0x45c]     ; 00488130
        ;   Label: LAB_00488130
    PUSH ECX                            ; 00488136
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00488137
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0048813c
    JMP 0x00487f67                      ; 0048813f
        ;   XREF to: 00487f67 (UNCONDITIONAL_JUMP)  ; LAB_00487f67
    XOR ECX,ECX                         ; 00488144
        ;   Label: caseD_c
    MOV EDI,0x42000000                  ; 00488146
    MOV dword ptr [ESP + 0x98],ECX      ; 0048814b
    MOV dword ptr [ESP + 0x90],ECX      ; 00488152
    MOV dword ptr [ESP + 0x94],EDI      ; 00488159
    PUSH dword ptr [EBX + 0x3e0]        ; 00488160
    MOV EAX,dword ptr [EBX + 0x3dc]     ; 00488166
    PUSH dword ptr [EBX + 0x3cc]        ; 0048816c
    PUSH EAX                            ; 00488172
    MOV EDX,dword ptr [EBX + 0x3d0]     ; 00488173
    PUSH EDX                            ; 00488179
    MOV ECX,dword ptr [EBX + 0x3d8]     ; 0048817a
    PUSH ECX                            ; 00488180
    MOV ESI,dword ptr [EBX + 0x3d4]     ; 00488181
    PUSH ESI                            ; 00488187
    LEA EAX,[ESP + 0xa8]                ; 00488188
    PUSH EAX                            ; 0048818f
    LEA ESI,[EBX + 0x20]                ; 00488190
    PUSH ESI                            ; 00488193
    MOV EDI,dword ptr [0x005fc5a0]      ; 00488194 | DAT_005fc5a0
    PUSH EDI                            ; 0048819a
    CALL core_fire.cpp_CFireEffect_createFirefly_FUN_004a29d0 ; 0048819b
        ;   XREF to: 004a29d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFirefly_FUN_004a29d0(CFireEffect * this_ptr, undefined4 param_2, undefined4 param_3, int param_4, ...)
    ADD ESP,0x24                        ; 004881a0
    JMP 0x00487fe8                      ; 004881a3
        ;   XREF to: 00487fe8 (UNCONDITIONAL_JUMP)  ; LAB_00487fe8
    LEA EDI,[ESP + 0x48]                ; 004881a8
        ;   Label: caseD_d
    LEA ESI,[EBX + 0x20]                ; 004881ac
    MOVSD ES:EDI,ESI                    ; 004881af
    MOVSD ES:EDI,ESI                    ; 004881b0
    MOVSD ES:EDI,ESI                    ; 004881b1
    LEA EDI,[ESP + 0xfc]                ; 004881b2
    LEA ESI,[EBX + 0x30]                ; 004881b9
    MOVSD ES:EDI,ESI                    ; 004881bc
    MOVSD ES:EDI,ESI                    ; 004881bd
    MOVSD ES:EDI,ESI                    ; 004881be
    FLD float ptr [EBX + 0x4bc]         ; 004881bf
    FMUL float ptr [0x005bda34]         ; 004881c5 | DAT_005bda34
    FLD float ptr [ESP + 0xfc]          ; 004881cb
    FXCH                                ; 004881d2
    FSTP float ptr [ESP + 0x17c]        ; 004881d4
    FMUL float ptr [ESP + 0x17c]        ; 004881db
    PUSH 0x0                            ; 004881e2
    FLD float ptr [ESP + 0x104]         ; 004881e4
    FMUL float ptr [ESP + 0x180]        ; 004881eb
    PUSH 0x3                            ; 004881f2
    LEA EAX,[ESP + 0x104]               ; 004881f4
    MOV EDX,dword ptr [0x005fed24]      ; 004881fb | g_CGorePtr
    PUSH EAX                            ; 00488201
    LEA EAX,[ESP + 0x54]                ; 00488202
    FLD float ptr [ESP + 0x110]         ; 00488206
    PUSH EAX                            ; 0048820d
    FMUL float ptr [ESP + 0x18c]        ; 0048820e
    PUSH EDX                            ; 00488215
    FXCH ST2                            ; 00488216
    FSTP float ptr [ESP + 0x110]        ; 00488218
    FSTP float ptr [ESP + 0x114]        ; 0048821f
    FSTP float ptr [ESP + 0x118]        ; 00488226
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 0048822d
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00488232
    JMP 0x0048804b                      ; 00488235
        ;   XREF to: 0048804b (UNCONDITIONAL_JUMP)  ; caseD_a
    LEA ESI,[EBX + 0x20]                ; 0048823a
        ;   Label: caseD_1
    XOR EDI,EDI                         ; 0048823d
    LEA EAX,[ESP + 0x78]                ; 0048823f
        ;   Label: LAB_0048823f
    CMP EAX,ESI                         ; 00488243
    JZ 0x0048825e                       ; 00488245
        ;   XREF to: 0048825e (CONDITIONAL_JUMP)  ; LAB_0048825e
    MOV EAX,dword ptr [ESI]             ; 00488247
    MOV dword ptr [ESP + 0x78],EAX      ; 00488249
    MOV EAX,dword ptr [ESI + 0x4]       ; 0048824d
    MOV dword ptr [ESP + 0x7c],EAX      ; 00488250
    MOV EAX,dword ptr [ESI + 0x8]       ; 00488254
    MOV dword ptr [ESP + 0x80],EAX      ; 00488257
    PUSH 0x3f000000                     ; 0048825e
        ;   Label: LAB_0048825e
    PUSH 0xbf000000                     ; 00488263
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00488268
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 0048826d
    FLD float ptr [ESP + 0x190]         ; 00488274
    ADD ESP,0x8                         ; 0048827b
    FMUL float ptr [EBX + 0x15c]        ; 0048827e
    PUSH 0x3f000000                     ; 00488284
    FADD float ptr [ESP + 0x7c]         ; 00488289
    PUSH 0xbf000000                     ; 0048828d
    FSTP float ptr [ESP + 0x80]         ; 00488292
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00488299
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 0048829e
    FLD float ptr [ESP + 0x190]         ; 004882a5
    FMUL float ptr [EBX + 0x164]        ; 004882ac
    ADD ESP,0x8                         ; 004882b2
    XOR EDX,EDX                         ; 004882b5
    FADD float ptr [ESP + 0x80]         ; 004882b7
    MOV dword ptr [ESP + 0x6c],EDX      ; 004882be
    FSTP float ptr [ESP + 0x80]         ; 004882c2
    MOV EAX,dword ptr [EBX + 0x160]     ; 004882c9
    PUSH 0x4000                         ; 004882cf
    MOV dword ptr [ESP + 0x74],EAX      ; 004882d4
    LEA EAX,[ESP + 0x70]                ; 004882d8
    PUSH EAX                            ; 004882dc
    LEA EAX,[ESP + 0x80]                ; 004882dd
    PUSH 0x3f800000                     ; 004882e4
    PUSH EAX                            ; 004882e9
    MOV EAX,[0x005fc5a0]                ; 004882ea | DAT_005fc5a0
    PUSH EAX                            ; 004882ef
    INC EDI                             ; 004882f0
    MOV dword ptr [ESP + 0x88],EDX      ; 004882f1
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560 ; 004882f8
        ;   XREF to: 004a2560 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004882fd
    CMP EDI,0x4                         ; 00488300
    JGE 0x0048804b                      ; 00488303
        ;   XREF to: 0048804b (CONDITIONAL_JUMP)  ; caseD_a
    JMP 0x0048823f                      ; 00488309
        ;   XREF to: 0048823f (UNCONDITIONAL_JUMP)  ; LAB_0048823f
    PUSH 0x3fc90fdb                     ; 0048830e
        ;   Label: caseD_4
    PUSH 0x3f490fdb                     ; 00488313
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00488318
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 0048831d
    FLD float ptr [ESP + 0x190]         ; 00488324
    ADD ESP,0x8                         ; 0048832b
    PUSH 0x40c90fdb                     ; 0048832e
    PUSH 0x0                            ; 00488333
    FSTP float ptr [ESP + 0x16c]        ; 00488335
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0048833c
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 00488341
    FLD float ptr [ESP + 0x190]         ; 00488348
    ADD ESP,0x8                         ; 0048834f
    MOV EAX,dword ptr [EBX + 0x3c4]     ; 00488352
    FLD float ptr [ESP + 0x164]         ; 00488358
    MOV dword ptr [ESP + 0x168],EAX     ; 0048835f
    FLD ST0                             ; 00488366
    FCOS                                ; 00488368
    FLD ST2                             ; 0048836a
    FCOS                                ; 0048836c
    FXCH ST2                            ; 0048836e
    FSIN                                ; 00488370
    FXCH ST3                            ; 00488372
    FSIN                                ; 00488374
    FLD float ptr [ESP + 0x168]         ; 00488376
    FMULP ST3                           ; 0048837d
    FLD float ptr [ESP + 0x168]         ; 0048837f
    FMULP ST4                           ; 00488386
    FMUL float ptr [ESP + 0x168]        ; 00488388
    FXCH ST2                            ; 0048838f
    FMUL ST1                            ; 00488391
    LEA EAX,[EBX + 0x248]               ; 00488393
    FXCH ST2                            ; 00488399
    FMULP                               ; 0048839b
    PUSH EAX                            ; 0048839d
    FXCH ST2                            ; 0048839e
    FSTP float ptr [ESP + 0x5c]         ; 004883a0
    FSTP float ptr [ESP + 0x58]         ; 004883a4
    FSTP float ptr [ESP + 0x60]         ; 004883a8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004883ac
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004883b1
    PUSH EAX                            ; 004883b4
    LEA EAX,[ESP + 0x58]                ; 004883b5
    PUSH EAX                            ; 004883b9
    LEA EAX,[EBX + 0x20]                ; 004883ba
    PUSH EAX                            ; 004883bd
    MOV ESI,dword ptr [0x005fc5a0]      ; 004883be | DAT_005fc5a0
    PUSH ESI                            ; 004883c4
    CALL core_fire.cpp_CFireEffect_createRock_FUN_004a28e0 ; 004883c5
        ;   XREF to: 004a28e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRock_FUN_004a28e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 004883ca
    JMP 0x0048804b                      ; 004883cd
        ;   XREF to: 0048804b (UNCONDITIONAL_JUMP)  ; caseD_a
    XOR EDX,EDX                         ; 004883d2
        ;   Label: caseD_b
    MOV dword ptr [ESP + 0x44],EDX      ; 004883d4
    MOV dword ptr [ESP + 0x40],EDX      ; 004883d8
    MOV dword ptr [ESP + 0x3c],EDX      ; 004883dc
    FLD float ptr [EBX + 0x4b8]         ; 004883e0
    FMUL float ptr [0x005bda38]         ; 004883e6 | DAT_005bda38
    SUB ESP,0x4                         ; 004883ec
    FSTP float ptr [ESP]                ; 004883ef
    PUSH 0x0                            ; 004883f2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004883f4
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    FLD float ptr [EBX + 0x4b8]         ; 004883f9
    MOV dword ptr [ESP + 0x190],EAX     ; 004883ff
    FMUL float ptr [0x005bda38]         ; 00488406 | DAT_005bda38
    FLD float ptr [ESP + 0x190]         ; 0048840c
    FSUB float ptr [EBX + 0x4b8]        ; 00488413
    ADD ESP,0x8                         ; 00488419
    FSTP float ptr [ESP + 0x180]        ; 0048841c
    SUB ESP,0x4                         ; 00488423
    FSTP float ptr [ESP]                ; 00488426
    PUSH 0x0                            ; 00488429
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0048842b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 00488430
    FLD float ptr [ESP + 0x190]         ; 00488437
    ADD ESP,0x8                         ; 0048843e
    FLD float ptr [EBX + 0x20]          ; 00488441
    FADD float ptr [ESP + 0x180]        ; 00488444
    FXCH                                ; 0048844b
    FSUB float ptr [EBX + 0x4b8]        ; 0048844d
    FXCH                                ; 00488453
    FSTP float ptr [ESP + 0x84]         ; 00488455
    MOV EAX,dword ptr [EBX + 0x24]      ; 0048845c
    MOV dword ptr [ESP + 0x88],EAX      ; 0048845f
    FADD float ptr [EBX + 0x28]         ; 00488466
    LEA EAX,[EBX + 0x248]               ; 00488469
    FSTP float ptr [ESP + 0x8c]         ; 0048846f
    PUSH dword ptr [EBX + 0x3c8]        ; 00488476
    PUSH EAX                            ; 0048847c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0048847d
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00488482
    PUSH EAX                            ; 00488485
    LEA EAX,[ESP + 0x44]                ; 00488486
    PUSH EAX                            ; 0048848a
    LEA EAX,[ESP + 0x90]                ; 0048848b
    PUSH EAX                            ; 00488492
    MOV EDI,dword ptr [0x005fc5a0]      ; 00488493 | DAT_005fc5a0
    PUSH EDI                            ; 00488499
    CALL core_fire.cpp_CFireEffect_createLeaf_FUN_004a2930 ; 0048849a
        ;   XREF to: 004a2930 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLeaf_FUN_004a2930(CFireEffect * this_ptr, undefined4 param_2, undefined4 param_3, CKeyFramedModel * param_4, ...)
    ADD ESP,0x14                        ; 0048849f
    MOV EAX,dword ptr [EBX + 0x20]      ; 004884a2
    MOV dword ptr [ESP + 0x84],EAX      ; 004884a5
    MOV EAX,dword ptr [EBX + 0x28]      ; 004884ac
    MOV dword ptr [ESP + 0x88],EAX      ; 004884af
    MOV dword ptr [ESP + 0x8c],EAX      ; 004884b6
    JMP 0x0048804b                      ; 004884bd
        ;   XREF to: 0048804b (UNCONDITIONAL_JUMP)  ; caseD_a
    PUSH EBX                            ; 004884c2
        ;   Label: caseD_5
    LEA ESI,[ESP + 0x130]               ; 004884c3
    CALL core_emitter.cpp_FUN_00488ea0  ; 004884ca
        ;   XREF to: 00488ea0 (UNCONDITIONAL_CALL)  ; undefined core_emitter.cpp_FUN_00488ea0()
    ADD ESP,0x4                         ; 004884cf
    PUSH 0x0                            ; 004884d2
    PUSH 0x1                            ; 004884d4
    PUSH 0x2                            ; 004884d6
    LEA EAX,[EBX + 0x30]                ; 004884d8
    PUSH EAX                            ; 004884db
    LEA EAX,[ESP + 0x100]               ; 004884dc
    LEA EDI,[ESP + 0x100]               ; 004884e3
    PUSH EAX                            ; 004884ea
    MOV EDX,dword ptr [0x005fc5a0]      ; 004884eb | DAT_005fc5a0
    LEA ESI,[ESP + 0x140]               ; 004884f1
    PUSH EDX                            ; 004884f8
    MOVSD ES:EDI,ESI                    ; 004884f9
    MOVSD ES:EDI,ESI                    ; 004884fa
    MOVSD ES:EDI,ESI                    ; 004884fb
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0 ; 004884fc
        ;   XREF to: 004a3af0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    MOV ECX,dword ptr [0x01d5ba14]      ; 00488501 | DAT_01d5ba14
    LEA EDI,[ESP + 0x12c]               ; 00488507
    MOV ECX,dword ptr [ECX*0x4 + 0x1d5ba04] ; 0048850e
    LEA ESI,[ESP + 0xfc]                ; 00488515
    LEA EAX,[ECX + 0x20]                ; 0048851c
    ADD ESP,0x18                        ; 0048851f
    LEA EDX,[EBX + 0x20]                ; 00488522
    FLD float ptr [EAX]                 ; 00488525
    FLD float ptr [EAX + 0x4]           ; 00488527
    FLD float ptr [EAX + 0x8]           ; 0048852a
    FXCH ST2                            ; 0048852d
    FSUB float ptr [EDX]                ; 0048852f
    FXCH                                ; 00488531
    FSUB float ptr [EDX + 0x4]          ; 00488533
    FXCH ST2                            ; 00488536
    FSUB float ptr [EDX + 0x8]          ; 00488538
    FXCH                                ; 0048853b
    FSTP float ptr [ESP + 0xe4]         ; 0048853d
    FXCH                                ; 00488544
    FSTP float ptr [ESP + 0xe8]         ; 00488546
    FSTP float ptr [ESP + 0xec]         ; 0048854d
    MOVSD ES:EDI,ESI                    ; 00488554
    MOVSD ES:EDI,ESI                    ; 00488555
    MOVSD ES:EDI,ESI                    ; 00488556
    FLD float ptr [ESP + 0x118]         ; 00488557
    FMUL ST0                            ; 0048855e
    FLD float ptr [ESP + 0x114]         ; 00488560
    FMUL ST0                            ; 00488567
    FADDP                               ; 00488569
    FLD float ptr [ESP + 0x11c]         ; 0048856b
    FMUL ST0                            ; 00488572
    FADDP                               ; 00488574
    FSQRT                               ; 00488576
    FCOMP double ptr [0x005bda4c]       ; 00488578 | DAT_005bda4c
    FNSTSW AX                           ; 0048857e
    SAHF                                ; 00488580
    JNC 0x0048804b                      ; 00488581
        ;   XREF to: 0048804b (CONDITIONAL_JUMP)  ; caseD_a
    PUSH EDX                            ; 00488587
    PUSH ECX                            ; 00488588
    LEA ESI,[ESP + 0xbc]                ; 00488589
    CALL core_actor.cpp_FUN_00408bf0    ; 00488590
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    ADD ESP,0x8                         ; 00488595
    PUSH 0x40000000                     ; 00488598
    PUSH 0x1                            ; 0048859d
    PUSH 0x3f800000                     ; 0048859f
    PUSH 0x0                            ; 004885a4
    PUSH 0x0                            ; 004885a6
    LEA EAX,[ESP + 0xbc]                ; 004885a8
    PUSH EAX                            ; 004885af
    MOV EAX,[0x01d5ba14]                ; 004885b0 | DAT_01d5ba14
    LEA EDI,[ESP + 0xc0]                ; 004885b5
    MOV ECX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004885bc
    LEA ESI,[ESP + 0xcc]                ; 004885c3
    PUSH ECX                            ; 004885ca
    MOVSD ES:EDI,ESI                    ; 004885cb
    MOVSD ES:EDI,ESI                    ; 004885cc
    MOVSD ES:EDI,ESI                    ; 004885cd
    CALL core_charactr.cpp_FUN_0042fbd0 ; 004885ce
        ;   XREF to: 0042fbd0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fbd0()
    ADD ESP,0x1c                        ; 004885d3
    JMP 0x0048804b                      ; 004885d6
        ;   XREF to: 0048804b (UNCONDITIONAL_JUMP)  ; caseD_a
    PUSH 0x0                            ; 004885db
        ;   Label: caseD_6
    LEA ESI,[EBX + 0x20]                ; 004885dd
    PUSH ESI                            ; 004885e0
    MOV EDX,dword ptr [0x005fc5a0]      ; 004885e1 | DAT_005fc5a0
    PUSH EDX                            ; 004885e7
    CALL core_fire.cpp_FUN_004a3ed0     ; 004885e8
        ;   XREF to: 004a3ed0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3ed0()
    ADD ESP,0xc                         ; 004885ed
    PUSH 0x0                            ; 004885f0
    PUSH ESI                            ; 004885f2
    MOV ECX,dword ptr [0x005fc5a0]      ; 004885f3 | DAT_005fc5a0
    PUSH ECX                            ; 004885f9
    CALL core_fire.cpp_FUN_004a3ed0     ; 004885fa
        ;   XREF to: 004a3ed0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3ed0()
    ADD ESP,0xc                         ; 004885ff
    PUSH 0x0                            ; 00488602
    PUSH ESI                            ; 00488604
    MOV EDI,dword ptr [0x005fc5a0]      ; 00488605 | DAT_005fc5a0
    PUSH EDI                            ; 0048860b
    CALL core_fire.cpp_FUN_004a3ed0     ; 0048860c
        ;   XREF to: 004a3ed0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3ed0()
    ADD ESP,0xc                         ; 00488611
    PUSH 0x0                            ; 00488614
    PUSH ESI                            ; 00488616
    MOV EAX,[0x005fc5a0]                ; 00488617 | DAT_005fc5a0
    PUSH EAX                            ; 0048861c
    CALL core_fire.cpp_FUN_004a3ed0     ; 0048861d
        ;   XREF to: 004a3ed0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3ed0()
    ADD ESP,0xc                         ; 00488622
    JMP 0x0048804b                      ; 00488625
        ;   XREF to: 0048804b (UNCONDITIONAL_JUMP)  ; caseD_a
    FLD float ptr [EBX + 0x15c]         ; 0048862a
        ;   Label: caseD_7
    FMUL double ptr [0x005bda44]        ; 00488630 | DAT_005bda44
    SUB ESP,0x4                         ; 00488636
    FSTP float ptr [ESP]                ; 00488639
    PUSH 0x0                            ; 0048863c
    LEA ESI,[EBX + 0x20]                ; 0048863e
    PUSH dword ptr [EBX + 0x160]        ; 00488641
    PUSH ESI                            ; 00488647
    MOV EDI,dword ptr [0x005fc5a0]      ; 00488648 | DAT_005fc5a0
    PUSH EDI                            ; 0048864e
    CALL core_fire.cpp_FUN_004a3bd0     ; 0048864f
        ;   XREF to: 004a3bd0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3bd0()
    LEA EAX,[ESP + 0xb0]                ; 00488654
    ADD ESP,0x14                        ; 0048865b
    CMP EAX,ESI                         ; 0048865e
    JZ 0x0048867f                       ; 00488660
        ;   XREF to: 0048867f (CONDITIONAL_JUMP)  ; LAB_0048867f
    MOV EAX,dword ptr [ESI]             ; 00488662
    MOV dword ptr [ESP + 0x9c],EAX      ; 00488664
    MOV EAX,dword ptr [ESI + 0x4]       ; 0048866b
    MOV dword ptr [ESP + 0xa0],EAX      ; 0048866e
    MOV EAX,dword ptr [ESI + 0x8]       ; 00488675
    MOV dword ptr [ESP + 0xa4],EAX      ; 00488678
    FLD float ptr [EBX + 0x160]         ; 0048867f
        ;   Label: LAB_0048867f
    FMUL double ptr [0x005bda44]        ; 00488685 | DAT_005bda44
    LEA EAX,[ESP + 0x9c]                ; 0048868b
    LEA ESI,[EBX + 0x470]               ; 00488692
    PUSH EAX                            ; 00488698
    FLD float ptr [ESP + 0xa4]          ; 00488699
    FXCH                                ; 004886a0
    FADD ST0,ST1                        ; 004886a2
    PUSH ESI                            ; 004886a4
    FSTP ST1                            ; 004886a5
    FSTP float ptr [ESP + 0xa8]         ; 004886a7
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0 ; 004886ae
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004886b3
    PUSH 0x7fff                         ; 004886b6
    PUSH 0x0                            ; 004886bb
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004886bd
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    MOV EDX,EAX                         ; 004886c2
    SAR EDX,0x1f                        ; 004886c4
    MOV dword ptr [ESI + 0x3c],EAX      ; 004886c7
    SHL EDX,0x8                         ; 004886ca
    SBB EAX,EDX                         ; 004886cd
    SAR EAX,0x8                         ; 004886cf
    MOV EDX,EAX                         ; 004886d2
    SAR EDX,0x1f                        ; 004886d4
    SHL EDX,0x2                         ; 004886d7
    SBB EAX,EDX                         ; 004886da
    SAR EAX,0x2                         ; 004886dc
    ADD ESP,0x8                         ; 004886df
    MOV byte ptr [ESI + 0x1c],AL        ; 004886e2
    PUSH dword ptr [EBX + 0x160]        ; 004886e5
    PUSH ESI                            ; 004886eb
    JMP 0x0048802d                      ; 004886ec
        ;   XREF to: 0048802d (UNCONDITIONAL_JUMP)  ; LAB_0048802d
    PUSH 0xffff                         ; 004886f1
        ;   Label: caseD_8
    PUSH 0x1                            ; 004886f6
    PUSH 0x10000                        ; 004886f8
    PUSH 0x4000                         ; 004886fd
    PUSH 0x0                            ; 00488702
    LEA EAX,[EBX + 0x20]                ; 00488704
    PUSH EAX                            ; 00488707
    MOV ESI,dword ptr [0x005fc5a0]      ; 00488708 | DAT_005fc5a0
    PUSH ESI                            ; 0048870e
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 0048870f
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00488714
    JMP 0x0048804b                      ; 00488717
        ;   XREF to: 0048804b (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV EAX,dword ptr [EBX + 0x3f0]     ; 0048871c
        ;   Label: caseD_9
    TEST EAX,EAX                        ; 00488722
    JZ 0x0048804b                       ; 00488724
        ;   XREF to: 0048804b (CONDITIONAL_JUMP)  ; caseD_a
    PUSH EAX                            ; 0048872a
    MOV EDX,dword ptr [EAX + 0x154]     ; 0048872b
    LEA ESI,[ESP + 0x4]                 ; 00488731
    LEA EDI,[ESP + 0x1c]                ; 00488735
    CALL dword ptr [EDX + 0x1c]         ; 00488739
    MOV ECX,0x6                         ; 0048873c
    LEA ESI,[ESP + 0x4]                 ; 00488741
    ADD ESP,0x4                         ; 00488745
    MOVSD.REP ES:EDI,ESI                ; 00488748
    LEA EAX,[ESP + 0x18]                ; 0048874a
    FLD float ptr [ESP + 0x18]          ; 0048874e
    FLD float ptr [ESP + 0x1c]          ; 00488752
    FLD float ptr [ESP + 0x20]          ; 00488756
    LEA EDI,[ESP + 0x120]               ; 0048875a
    LEA ESI,[ESP + 0xcc]                ; 00488761
    FXCH ST2                            ; 00488768
    FADD float ptr [EAX + 0xc]          ; 0048876a
    FXCH                                ; 0048876d
    FADD float ptr [EAX + 0x10]         ; 0048876f
    FXCH ST2                            ; 00488772
    FADD float ptr [EAX + 0x14]         ; 00488774
    FXCH                                ; 00488777
    FSTP float ptr [ESP + 0xcc]         ; 00488779
    FXCH                                ; 00488780
    FSTP float ptr [ESP + 0xd0]         ; 00488782
    FSTP float ptr [ESP + 0xd4]         ; 00488789
    MOVSD ES:EDI,ESI                    ; 00488790
    MOVSD ES:EDI,ESI                    ; 00488791
    MOVSD ES:EDI,ESI                    ; 00488792
    FLD float ptr [0x005bda3c]          ; 00488793 | DAT_005bda3c
    FLD float ptr [ESP + 0x120]         ; 00488799
    FMUL ST1                            ; 004887a0
    FLD float ptr [ESP + 0x124]         ; 004887a2
    FMUL ST2                            ; 004887a9
    FLD float ptr [ESP + 0x128]         ; 004887ab
    FMULP ST3                           ; 004887b2
    LEA EAX,[ESP + 0x144]               ; 004887b4
    LEA EDI,[ESP + 0x144]               ; 004887bb
    LEA ESI,[ESP + 0x138]               ; 004887c2
    FXCH                                ; 004887c9
    FSTP float ptr [ESP + 0x138]        ; 004887cb
    FSTP float ptr [ESP + 0x13c]        ; 004887d2
    FSTP float ptr [ESP + 0x140]        ; 004887d9
    MOVSD ES:EDI,ESI                    ; 004887e0
    MOVSD ES:EDI,ESI                    ; 004887e1
    MOVSD ES:EDI,ESI                    ; 004887e2
    PUSH EAX                            ; 004887e3
    MOV EDX,dword ptr [EBX + 0x3f0]     ; 004887e4
    PUSH EDX                            ; 004887ea
    LEA ESI,[ESP + 0x38]                ; 004887eb
    LEA EDI,[ESP + 0x68]                ; 004887ef
    CALL core_actor.cpp_FUN_00408b00    ; 004887f3
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x38]                ; 004887f8
    ADD ESP,0x8                         ; 004887fc
    MOVSD ES:EDI,ESI                    ; 004887ff
    MOVSD ES:EDI,ESI                    ; 00488800
    MOVSD ES:EDI,ESI                    ; 00488801
    LEA EDX,[ESP + 0x108]               ; 00488802
    MOV EAX,dword ptr [EBX + 0x3f0]     ; 00488809
    LEA EDI,[ESP + 0x108]               ; 0048880f
    LEA ESI,[ESP + 0xd8]                ; 00488816
    FLD float ptr [EAX + 0x24]          ; 0048881d
    FLD float ptr [EAX + 0x28]          ; 00488820
    FLD float ptr [EAX + 0x20]          ; 00488823
    LEA EAX,[ESP + 0xc0]                ; 00488826
    FADD float ptr [ESP + 0x60]         ; 0048882d
    FXCH ST2                            ; 00488831
    FADD float ptr [ESP + 0x64]         ; 00488833
    FXCH                                ; 00488837
    FADD float ptr [ESP + 0x68]         ; 00488839
    FXCH ST2                            ; 0048883d
    FSTP float ptr [ESP + 0xd8]         ; 0048883f
    FSTP float ptr [ESP + 0xdc]         ; 00488846
    FSTP float ptr [ESP + 0xe0]         ; 0048884d
    MOVSD ES:EDI,ESI                    ; 00488854
    MOVSD ES:EDI,ESI                    ; 00488855
    MOVSD ES:EDI,ESI                    ; 00488856
    CMP EAX,EDX                         ; 00488857
    JZ 0x00488885                       ; 00488859
        ;   XREF to: 00488885 (CONDITIONAL_JUMP)  ; LAB_00488885
    MOV EAX,dword ptr [ESP + 0x108]     ; 0048885b
    MOV dword ptr [ESP + 0xc0],EAX      ; 00488862
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00488869
    MOV dword ptr [ESP + 0xc4],EAX      ; 00488870
    MOV EAX,dword ptr [ESP + 0x110]     ; 00488877
    MOV dword ptr [ESP + 0xc8],EAX      ; 0048887e
    PUSH 0xffff                         ; 00488885
        ;   Label: LAB_00488885
    PUSH 0x3e800000                     ; 0048888a
    PUSH 0x1                            ; 0048888f
    PUSH 0x40800000                     ; 00488891
    PUSH 0x0                            ; 00488896
    PUSH 0x0                            ; 00488898
    LEA EAX,[ESP + 0xd8]                ; 0048889a
    PUSH EAX                            ; 004888a1
    LEA EAX,[EBX + 0x20]                ; 004888a2
    PUSH EAX                            ; 004888a5
    MOV ECX,dword ptr [0x005fc5a0]      ; 004888a6 | DAT_005fc5a0
    PUSH ECX                            ; 004888ac
    CALL core_fire.cpp_FUN_004a3c50     ; 004888ad
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3c50()
    ADD ESP,0x24                        ; 004888b2
    JMP 0x0048804b                      ; 004888b5
        ;   XREF to: 0048804b (UNCONDITIONAL_JUMP)  ; caseD_a
    CMP dword ptr [EBX + 0x460],0x1     ; 004888ba
        ;   Label: LAB_004888ba
    JNZ 0x004888d0                      ; 004888c1
        ;   XREF to: 004888d0 (CONDITIONAL_JUMP)  ; LAB_004888d0
    CMP dword ptr [EBX + 0x4b4],0x0     ; 004888c3
    JNZ 0x0048806b                      ; 004888ca
        ;   XREF to: 0048806b (CONDITIONAL_JUMP)  ; LAB_0048806b
    LEA EAX,[EBX + 0x3f8]               ; 004888d0
        ;   Label: LAB_004888d0
    PUSH EAX                            ; 004888d6
    MOV EDX,dword ptr [EBX + 0x154]     ; 004888d7
    PUSH EBX                            ; 004888dd
    CALL dword ptr [EDX + 0x2c]         ; 004888de
    ADD ESP,0x8                         ; 004888e1
    MOV dword ptr [EBX + 0x45c],EAX     ; 004888e4
    JMP 0x0048806b                      ; 004888ea
        ;   XREF to: 0048806b (UNCONDITIONAL_JUMP)  ; LAB_0048806b
    MOV EAX,dword ptr [EBX + 0x45c]     ; 004888ef
        ;   Label: LAB_004888ef
    PUSH EAX                            ; 004888f5
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004888f6
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004888fb
    JMP 0x0048806b                      ; 004888fe
        ;   XREF to: 0048806b (UNCONDITIONAL_JUMP)  ; LAB_0048806b
    MOV dword ptr [EBX + 0x168],0x1     ; 00488903
        ;   Label: LAB_00488903
    MOV EAX,dword ptr [EBX + 0x234]     ; 0048890d
    MOV dword ptr [EBX + 0x46c],EAX     ; 00488913
    MOV ESP,EBP                         ; 00488919
    POP EBP                             ; 0048891b
    POP EDI                             ; 0048891c
    POP ESI                             ; 0048891d
    POP EBX                             ; 0048891e
    RET                                 ; 0048891f
    FLD float ptr [EBX + 0x46c]         ; 00488920
        ;   Label: LAB_00488920
    FSUB float ptr [EBP + 0x18]         ; 00488926
    FST float ptr [EBX + 0x46c]         ; 00488929
    FLDZ                                ; 0048892f
    FCOMPP                              ; 00488931
    FNSTSW AX                           ; 00488933
    SAHF                                ; 00488935
    JC 0x004880b7                       ; 00488936
        ;   XREF to: 004880b7 (CONDITIONAL_JUMP)  ; LAB_004880b7
    MOV dword ptr [EBX + 0x168],0x0     ; 0048893c
    MOV EAX,dword ptr [EBX + 0x3e8]     ; 00488946
    MOV dword ptr [EBX + 0x46c],EAX     ; 0048894c
    MOV ESP,EBP                         ; 00488952
    POP EBP                             ; 00488954
    POP EDI                             ; 00488955
    POP ESI                             ; 00488956
    POP EBX                             ; 00488957
    RET                                 ; 00488958
    FLD float ptr [EBX + 0x234]         ; 00488959
        ;   Label: LAB_00488959
    FLDZ                                ; 0048895f
    FCOMPP                              ; 00488961
    FNSTSW AX                           ; 00488963
    SAHF                                ; 00488965
    JNC 0x004880b7                      ; 00488966
        ;   XREF to: 004880b7 (CONDITIONAL_JUMP)  ; LAB_004880b7
    FLD float ptr [EBX + 0x46c]         ; 0048896c
    FSUB float ptr [EBP + 0x18]         ; 00488972
    FST float ptr [EBX + 0x46c]         ; 00488975
    FLDZ                                ; 0048897b
    FCOMPP                              ; 0048897d
    FNSTSW AX                           ; 0048897f
    SAHF                                ; 00488981
    JC 0x004880b7                       ; 00488982
        ;   XREF to: 004880b7 (CONDITIONAL_JUMP)  ; LAB_004880b7
    MOV dword ptr [EBX + 0x46c],0x0     ; 00488988
    MOV dword ptr [EBX + 0x168],0x0     ; 00488992
    MOV ESP,EBP                         ; 0048899c
    POP EBP                             ; 0048899e
    POP EDI                             ; 0048899f
    POP ESI                             ; 004889a0
    POP EBX                             ; 004889a1
    RET                                 ; 004889a2

