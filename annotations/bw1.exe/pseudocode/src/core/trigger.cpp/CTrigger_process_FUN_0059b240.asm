; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_process_FUN_0059b240(CTrigger *this_ptr,float delta_time)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0059b230 = 0059b300
;   float g_FLOAT_005f809c = 0.5
;   double g_DOUBLE_005f80a4 = 65536
;   float g_FLOAT_006071b0 = 256
;   CEventList* g_CEventListPtr = 01c51d80
;   CFireEffect* g_CFireEffectPtr = 01c57074
;   CDemonMission* g_CDemonMission_PTR_0061f650 = 01d2c900
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   int g_FastSqrtMagic
;   int g_HeroCount
;   undefined4 DAT_01d2c900
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0
;   core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00552490
;   core_trigger.cpp_CTrigger_containsActor_FUN_0059c090
;   shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b240
        ;   Label: core_trigger.cpp_CTrigger_process_FUN_0059b240
    PUSH ESI                            ; 0059b241
    PUSH EDI                            ; 0059b242
    PUSH EBP                            ; 0059b243
    MOV EBP,ESP                         ; 0059b244
    SUB ESP,0xe0                        ; 0059b246
    AND ESP,0xfffffff8                  ; 0059b24c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b24f
    XOR EDX,EDX                         ; 0059b252
    MOV dword ptr [EAX + 0x300],EDX     ; 0059b254
    MOV EAX,dword ptr [EAX + 0x174]     ; 0059b25a
    MOV dword ptr [ESP + 0xcc],EDX      ; 0059b260
    CMP EAX,0x9                         ; 0059b267
    JA 0x0059b2eb                       ; 0059b26a
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x59b208]  ; 0059b270 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b277
        ;   Label: caseD_0
    ADD EAX,0x20                        ; 0059b27a
    PUSH dword ptr [EAX + 0x138]        ; 0059b27d
    PUSH EAX                            ; 0059b283
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0 ; 0059b284
        ;   XREF to: 004ea6f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0059b289
    TEST EAX,EAX                        ; 0059b28c
    JZ 0x0059b2eb                       ; 0059b28e
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059b290
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b293
    PUSH ECX                            ; 0059b296
    MOV EAX,dword ptr [EAX + 0x154]     ; 0059b297
    LEA ESI,[ESP + 0xc]                 ; 0059b29d
    CALL dword ptr [EAX + 0x1c]         ; 0059b2a1
    MOV EBX,dword ptr [0x01d06aa0]      ; 0059b2a4 | g_HeroCount
    ADD ESP,0x4                         ; 0059b2aa
    XOR ESI,ESI                         ; 0059b2ad
    TEST EBX,EBX                        ; 0059b2af
    JLE 0x0059b2eb                      ; 0059b2b1
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    XOR EBX,EBX                         ; 0059b2b3
    MOV EAX,dword ptr [EBX + 0x1d06aa4] ; 0059b2b5
        ;   Label: LAB_0059b2b5
    PUSH EAX                            ; 0059b2bb
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059b2bc
    PUSH EDX                            ; 0059b2bf
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_0059c090 ; 0059b2c0
        ;   XREF to: 0059c090 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_0059c090(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0059b2c5
    TEST EAX,EAX                        ; 0059b2c8
    JZ 0x0059b357                       ; 0059b2ca
        ;   XREF to: 0059b357 (CONDITIONAL_JUMP)  ; LAB_0059b357
    MOV ECX,0x1                         ; 0059b2d0
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059b2d5
    MOV EAX,dword ptr [EBX + 0x1d06aa4] ; 0059b2d8
    MOV dword ptr [ESP + 0xcc],ECX      ; 0059b2de
    MOV dword ptr [EDX + 0x300],EAX     ; 0059b2e5
        ;   Label: LAB_0059b2e5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b2eb
        ;   Label: default
    MOV EAX,dword ptr [EAX + 0x15c]     ; 0059b2ee
    CMP EAX,0x3                         ; 0059b2f4
    JA 0x0059b31c                       ; 0059b2f7
        ;   XREF to: 0059b31c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x59b230]  ; 0059b2f9 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0059b300
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 0059b307
    JZ 0x0059b825                       ; 0059b309
        ;   XREF to: 0059b825 (CONDITIONAL_JUMP)  ; LAB_0059b825
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b30f
        ;   Label: LAB_0059b30f
    MOV dword ptr [EAX + 0x16c],0x1     ; 0059b312
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059b31c
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0059b31f
    MOV EBX,dword ptr [EDX + 0x16c]     ; 0059b326
    MOV dword ptr [EDX + 0x2ec],EAX     ; 0059b32c
    TEST EBX,EBX                        ; 0059b332
    JZ 0x0059b88f                       ; 0059b334
        ;   XREF to: 0059b88f (CONDITIONAL_JUMP)  ; LAB_0059b88f
    LEA EAX,[EDX + 0x224]               ; 0059b33a
    PUSH EAX                            ; 0059b340
    MOV EDI,dword ptr [0x0061b4d0]      ; 0059b341 | g_CEventListPtr
    PUSH EDI                            ; 0059b347
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 0059b348
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0059b34d
    MOV ESP,EBP                         ; 0059b350
    POP EBP                             ; 0059b352
    POP EDI                             ; 0059b353
    POP ESI                             ; 0059b354
    POP EBX                             ; 0059b355
    RET                                 ; 0059b356
    MOV EDI,dword ptr [0x01d06aa0]      ; 0059b357 | g_HeroCount
        ;   Label: LAB_0059b357
    INC ESI                             ; 0059b35d
    ADD EBX,0x4                         ; 0059b35e
    CMP ESI,EDI                         ; 0059b361
    JL 0x0059b2b5                       ; 0059b363
        ;   XREF to: 0059b2b5 (CONDITIONAL_JUMP)  ; LAB_0059b2b5
    JMP 0x0059b2eb                      ; 0059b369
        ;   XREF to: 0059b2eb (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b36b
        ;   Label: caseD_1
    CMP dword ptr [EAX + 0x36c],0x0     ; 0059b36e
    JNZ 0x0059b395                      ; 0059b375
        ;   XREF to: 0059b395 (CONDITIONAL_JUMP)  ; LAB_0059b395
    ADD EAX,0x178                       ; 0059b377
    PUSH EAX                            ; 0059b37c
    MOV EBX,dword ptr [0x0061f650]      ; 0059b37d | g_CDemonMission_PTR_0061f650
    PUSH EBX                            ; 0059b383 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0 ; 0059b384
        ;   XREF to: 0051b6c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0059b389
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059b38c
    MOV dword ptr [EDX + 0x36c],EAX     ; 0059b38f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b395
        ;   Label: LAB_0059b395
    MOV ESI,dword ptr [EAX + 0x36c]     ; 0059b398
    TEST ESI,ESI                        ; 0059b39e
    JZ 0x0059b2eb                       ; 0059b3a0
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    MOV EDI,dword ptr [ESI + 0x70]      ; 0059b3a6
    CMP EDI,0x1                         ; 0059b3a9
    JNZ 0x0059b2eb                      ; 0059b3ac
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    LEA EBX,[ESI + 0x20]                ; 0059b3b2
    FLD float ptr [EAX + 0x20]          ; 0059b3b5
    FSUB float ptr [EBX]                ; 0059b3b8
    FMUL ST0                            ; 0059b3ba
    FLD float ptr [EAX + 0x24]          ; 0059b3bc
    FSUB float ptr [EBX + 0x4]          ; 0059b3bf
    FMUL ST0                            ; 0059b3c2
    FLD float ptr [EAX + 0x28]          ; 0059b3c4
    FXCH                                ; 0059b3c7
    FADDP ST2,ST0                       ; 0059b3c9
    FSUB float ptr [EBX + 0x8]          ; 0059b3cb
    FMUL ST0                            ; 0059b3ce
    FLD float ptr [EAX + 0x158]         ; 0059b3d0
    FXCH                                ; 0059b3d6
    FADDP ST2,ST0                       ; 0059b3d8
    FMUL float ptr [EAX + 0x158]        ; 0059b3da
    FXCH                                ; 0059b3e0
    FCOMPP                              ; 0059b3e2
    FNSTSW AX                           ; 0059b3e4
    SAHF                                ; 0059b3e6
    JA 0x0059b2eb                       ; 0059b3e7
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    PUSH ESI                            ; 0059b3ed
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b3ee
    PUSH EAX                            ; 0059b3f1
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_0059c090 ; 0059b3f2
        ;   XREF to: 0059c090 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_0059c090(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0059b3f7
    TEST EAX,EAX                        ; 0059b3fa
    JZ 0x0059b2eb                       ; 0059b3fc
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b402
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059b405
    MOV EAX,dword ptr [EAX + 0x36c]     ; 0059b408
    MOV dword ptr [ESP + 0xcc],EDI      ; 0059b40e
    JMP 0x0059b2e5                      ; 0059b415
        ;   XREF to: 0059b2e5 (UNCONDITIONAL_JUMP)  ; LAB_0059b2e5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b41a
        ;   Label: caseD_2
    ADD EAX,0x20                        ; 0059b41d
    PUSH dword ptr [EAX + 0x138]        ; 0059b420
    PUSH EAX                            ; 0059b426
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0 ; 0059b427
        ;   XREF to: 004ea6f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0059b42c
    TEST EAX,EAX                        ; 0059b42f
    JZ 0x0059b2eb                       ; 0059b431
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBP + 0x14]      ; 0059b437
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b43a
    PUSH ESI                            ; 0059b43d
    MOV EAX,dword ptr [EAX + 0x154]     ; 0059b43e
    LEA ESI,[ESP + 0x3c]                ; 0059b444
    LEA EDI,[ESP + 0x24]                ; 0059b448
    CALL dword ptr [EAX + 0x1c]         ; 0059b44c
    MOV ECX,0x6                         ; 0059b44f
    LEA ESI,[ESP + 0x3c]                ; 0059b454
    ADD ESP,0x4                         ; 0059b458
    MOVSD.REP ES:EDI,ESI                ; 0059b45b
    LEA EAX,[ESP + 0x20]                ; 0059b45d
    FLD float ptr [ESP + 0x20]          ; 0059b461
    FLD float ptr [ESP + 0x24]          ; 0059b465
    FLD float ptr [ESP + 0x28]          ; 0059b469
    LEA EDI,[ESP + 0x68]                ; 0059b46d
    LEA ESI,[ESP + 0x8c]                ; 0059b471
    FXCH ST2                            ; 0059b478
    FADD float ptr [EAX + 0xc]          ; 0059b47a
    FXCH                                ; 0059b47d
    FADD float ptr [EAX + 0x10]         ; 0059b47f
    FXCH ST2                            ; 0059b482
    FADD float ptr [EAX + 0x14]         ; 0059b484
    FXCH                                ; 0059b487
    FSTP float ptr [ESP + 0x8c]         ; 0059b489
    FXCH                                ; 0059b490
    FSTP float ptr [ESP + 0x90]         ; 0059b492
    FSTP float ptr [ESP + 0x94]         ; 0059b499
    MOVSD ES:EDI,ESI                    ; 0059b4a0
    MOVSD ES:EDI,ESI                    ; 0059b4a1
    MOVSD ES:EDI,ESI                    ; 0059b4a2
    FLD float ptr [0x005f809c]          ; 0059b4a3 | g_FLOAT_005f809c
    FLD float ptr [ESP + 0x68]          ; 0059b4a9
    FMUL ST1                            ; 0059b4ad
    FLD float ptr [ESP + 0x6c]          ; 0059b4af
    FMUL ST2                            ; 0059b4b3
    FLD float ptr [ESP + 0x70]          ; 0059b4b5
    FMULP ST3                           ; 0059b4b9
    LEA EAX,[ESP + 0x80]                ; 0059b4bb
    LEA EDI,[ESP + 0x80]                ; 0059b4c2
    LEA ESI,[ESP + 0x74]                ; 0059b4c9
    FXCH                                ; 0059b4cd
    FSTP float ptr [ESP + 0x74]         ; 0059b4cf
    FSTP float ptr [ESP + 0x78]         ; 0059b4d3
    FSTP float ptr [ESP + 0x7c]         ; 0059b4d7
    MOVSD ES:EDI,ESI                    ; 0059b4db
    MOVSD ES:EDI,ESI                    ; 0059b4dc
    MOVSD ES:EDI,ESI                    ; 0059b4dd
    PUSH EAX                            ; 0059b4de
    MOV EDI,dword ptr [EBP + 0x14]      ; 0059b4df
    PUSH EDI                            ; 0059b4e2
    LEA ESI,[ESP + 0xa0]                ; 0059b4e3
    LEA EBX,[ESP + 0x58]                ; 0059b4ea
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40 ; 0059b4ee
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40(CDemonActor * this_ptr, CVector3f * input_local_point, CVector3f * output_world_point)
    LEA EDI,[ESP + 0xac]                ; 0059b4f3
    LEA ESI,[ESP + 0xa0]                ; 0059b4fa
    ADD ESP,0x8                         ; 0059b501
    LEA EAX,[ESP + 0xa4]                ; 0059b504
    MOVSD ES:EDI,ESI                    ; 0059b50b
    MOVSD ES:EDI,ESI                    ; 0059b50c
    MOVSD ES:EDI,ESI                    ; 0059b50d
    CMP EBX,EAX                         ; 0059b50e
    JZ 0x0059b533                       ; 0059b510
        ;   XREF to: 0059b533 (CONDITIONAL_JUMP)  ; LAB_0059b533
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0059b512
    MOV dword ptr [ESP + 0x50],EAX      ; 0059b519
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0059b51d
    MOV dword ptr [ESP + 0x54],EAX      ; 0059b524
    MOV EAX,dword ptr [ESP + 0xac]      ; 0059b528
    MOV dword ptr [ESP + 0x58],EAX      ; 0059b52f
    LEA EBX,[ESP + 0x5c]                ; 0059b533
        ;   Label: LAB_0059b533
    LEA EAX,[ESP + 0x50]                ; 0059b537
    FLD float ptr [EAX]                 ; 0059b53b
    FMUL float ptr [0x006071b0]         ; 0059b53d | g_FLOAT_006071b0
    FISTP dword ptr [EBX]               ; 0059b543
    FLD float ptr [EAX + 0x4]           ; 0059b545
    FMUL float ptr [0x006071b0]         ; 0059b548 | g_FLOAT_006071b0
    FISTP dword ptr [EBX + 0x4]         ; 0059b54e
    FLD float ptr [EAX + 0x8]           ; 0059b551
    FMUL float ptr [0x006071b0]         ; 0059b554 | g_FLOAT_006071b0
    FISTP dword ptr [EBX + 0x8]         ; 0059b55a
    PUSH 0x0                            ; 0059b55d
    LEA EAX,[ESP + 0x60]                ; 0059b55f
    PUSH EAX                            ; 0059b563
    MOV EAX,[0x00622c18]                ; 0059b564 | g_CDemonSetPtr
    PUSH EAX                            ; 0059b569 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00552490 ; 0059b56a
        ;   XREF to: 00552490 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00552490(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    ADD ESP,0xc                         ; 0059b56f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059b572
    FLD float ptr [EDX + 0x21c]         ; 0059b575
    FMUL double ptr [0x005f80a4]        ; 0059b57b | g_DOUBLE_005f80a4
    MOV dword ptr [ESP + 0xdc],EAX      ; 0059b581
    FILD dword ptr [ESP + 0xdc]         ; 0059b588
    FSTP double ptr [ESP]               ; 0059b58f
    FCOMP double ptr [ESP]              ; 0059b592
    FNSTSW AX                           ; 0059b595
    SAHF                                ; 0059b597
    JA 0x0059b2eb                       ; 0059b598
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    FLD float ptr [EDX + 0x220]         ; 0059b59e
    FMUL double ptr [0x005f80a4]        ; 0059b5a4 | g_DOUBLE_005f80a4
    FCOMP double ptr [ESP]              ; 0059b5aa
    FNSTSW AX                           ; 0059b5ad
    SAHF                                ; 0059b5af
    JC 0x0059b2eb                       ; 0059b5b0
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESP + 0xcc],0x1      ; 0059b5b6
    JMP 0x0059b2eb                      ; 0059b5c1
        ;   XREF to: 0059b2eb (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b5c6
        ;   Label: caseD_3
    MOV EAX,dword ptr [EAX + 0x2f0]     ; 0059b5c9
    MOV dword ptr [ESP + 0xcc],EAX      ; 0059b5cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b5d6
    MOV dword ptr [EAX + 0x2f0],0x0     ; 0059b5d9
    JMP 0x0059b2eb                      ; 0059b5e3
        ;   XREF to: 0059b2eb (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b5e8
        ;   Label: caseD_7
    FLD float ptr [EAX + 0x370]         ; 0059b5eb
    FSUB float ptr [EBP + 0x18]         ; 0059b5f1
    FST float ptr [EAX + 0x370]         ; 0059b5f4
    FLDZ                                ; 0059b5fa
    FCOMPP                              ; 0059b5fc
    FNSTSW AX                           ; 0059b5fe
    SAHF                                ; 0059b600
    JBE 0x0059b60c                      ; 0059b601
        ;   XREF to: 0059b60c (CONDITIONAL_JUMP)  ; LAB_0059b60c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b603
    MOV dword ptr [EAX + 0x370],EDX     ; 0059b606
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b60c
        ;   Label: LAB_0059b60c
    FLD float ptr [EAX + 0x2f8]         ; 0059b60f
    FLDZ                                ; 0059b615
    FCOMPP                              ; 0059b617
    FNSTSW AX                           ; 0059b619
    SAHF                                ; 0059b61b
    JC 0x0059b62f                       ; 0059b61c
        ;   XREF to: 0059b62f (CONDITIONAL_JUMP)  ; LAB_0059b62f
    MOV EAX,0x1                         ; 0059b61e
    MOV dword ptr [ESP + 0xcc],EAX      ; 0059b623
    JMP 0x0059b2eb                      ; 0059b62a
        ;   XREF to: 0059b2eb (UNCONDITIONAL_JUMP)  ; default
    XOR EAX,EAX                         ; 0059b62f
        ;   Label: LAB_0059b62f
    MOV dword ptr [ESP + 0xcc],EAX      ; 0059b631
    JMP 0x0059b2eb                      ; 0059b638
        ;   XREF to: 0059b2eb (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b63d
        ;   Label: caseD_6
    LEA EBX,[EAX + 0x20]                ; 0059b640
    PUSH dword ptr [EAX + 0x158]        ; 0059b643
    PUSH EBX                            ; 0059b649
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0 ; 0059b64a
        ;   XREF to: 004ea6f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0059b64f
    TEST EAX,EAX                        ; 0059b652
    JZ 0x0059b2eb                       ; 0059b654
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b65a
    FLD float ptr [EAX + 0x160]         ; 0059b65d
    FMUL ST0                            ; 0059b663
    FLD float ptr [EAX + 0x164]         ; 0059b665
    FMUL ST0                            ; 0059b66b
    FADDP                               ; 0059b66d
    FLD float ptr [EAX + 0x168]         ; 0059b66f
    FMUL ST0                            ; 0059b675
    FADDP                               ; 0059b677
    PUSH 0x0                            ; 0059b679
    FSTP float ptr [ESP + 0xc0]         ; 0059b67b
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0059b682
    MOV ECX,dword ptr [0x01cc804c]      ; 0059b689 | g_FastSqrtMagic
    SAR EAX,0x1                         ; 0059b68f
    PUSH 0x0                            ; 0059b691
    ADD EAX,ECX                         ; 0059b693
    PUSH EAX                            ; 0059b695
    PUSH EBX                            ; 0059b696
    MOV EBX,dword ptr [0x0061c010]      ; 0059b697 | g_CFireEffectPtr
    PUSH EBX                            ; 0059b69d
    CALL core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0 ; 0059b69e
        ;   XREF to: 004b6ce0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 0059b6a3
    MOV dword ptr [ESP + 0xcc],EAX      ; 0059b6a6
    JMP 0x0059b2eb                      ; 0059b6ad
        ;   XREF to: 0059b2eb (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b6b2
        ;   Label: caseD_8
    ADD EAX,0x20                        ; 0059b6b5
    PUSH dword ptr [EAX + 0x138]        ; 0059b6b8
    PUSH EAX                            ; 0059b6be
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0 ; 0059b6bf
        ;   XREF to: 004ea6f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0059b6c4
    TEST EAX,EAX                        ; 0059b6c7
    JZ 0x0059b2eb                       ; 0059b6c9
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    XOR EDI,EDI                         ; 0059b6cf
    XOR ESI,ESI                         ; 0059b6d1
    MOV EAX,[0x00622c18]                ; 0059b6d3 | g_CDemonSetPtr
        ;   Label: LAB_0059b6d3
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0059b6d8 | g_CDemonSetInstance.actor_count
    JGE 0x0059b2eb                      ; 0059b6de
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d168] ; 0059b6e4 | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 0059b6eb
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059b6ec
    CALL dword ptr [EAX + 0x5c]         ; 0059b6f2
    ADD ESP,0x4                         ; 0059b6f5
    TEST EAX,EAX                        ; 0059b6f8
    JNZ 0x0059b702                      ; 0059b6fa
        ;   XREF to: 0059b702 (CONDITIONAL_JUMP)  ; LAB_0059b702
    INC ESI                             ; 0059b6fc
        ;   Label: LAB_0059b6fc
    ADD EDI,0x4                         ; 0059b6fd
    JMP 0x0059b6d3                      ; 0059b700
        ;   XREF to: 0059b6d3 (UNCONDITIONAL_JUMP)  ; LAB_0059b6d3
    PUSH EBX                            ; 0059b702
        ;   Label: LAB_0059b702
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059b703
    PUSH ECX                            ; 0059b706
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_0059c090 ; 0059b707
        ;   XREF to: 0059c090 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_0059c090(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0059b70c
    TEST EAX,EAX                        ; 0059b70f
    JZ 0x0059b6fc                       ; 0059b711
        ;   XREF to: 0059b6fc (CONDITIONAL_JUMP)  ; LAB_0059b6fc
    MOV ESI,0x1                         ; 0059b713
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b718
    MOV dword ptr [ESP + 0xcc],ESI      ; 0059b71b
    MOV dword ptr [EAX + 0x300],EBX     ; 0059b722
    JMP 0x0059b2eb                      ; 0059b728
        ;   XREF to: 0059b2eb (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b72d
        ;   Label: caseD_9
    LEA EBX,[EAX + 0x20]                ; 0059b730
    PUSH dword ptr [EAX + 0x158]        ; 0059b733
    PUSH EBX                            ; 0059b739
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0 ; 0059b73a
        ;   XREF to: 004ea6f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0059b73f
    TEST EAX,EAX                        ; 0059b742
    JZ 0x0059b2eb                       ; 0059b744
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b74a
    ADD EAX,0x178                       ; 0059b74d
    MOV dword ptr [ESP + 0xd8],EBX      ; 0059b752
    MOV dword ptr [ESP + 0xd4],EAX      ; 0059b759
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b760
    XOR EDI,EDI                         ; 0059b763
    ADD EAX,0x1c8                       ; 0059b765
    XOR ESI,ESI                         ; 0059b76a
    MOV dword ptr [ESP + 0xd0],EAX      ; 0059b76c
    MOV EAX,[0x00622c18]                ; 0059b773 | g_CDemonSetPtr
        ;   Label: LAB_0059b773
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0059b778 | g_CDemonSetInstance.actor_count
    JGE 0x0059b2eb                      ; 0059b77e
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; default
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d168] ; 0059b784 | g_CDemonSetInstance.actors[0]
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b78b
    FLD float ptr [EAX + 0x158]         ; 0059b78e
    FMUL ST0                            ; 0059b794
    LEA EAX,[EBX + 0x20]                ; 0059b796
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0059b799
    FLD float ptr [EAX]                 ; 0059b7a0
    FSUB float ptr [EDX]                ; 0059b7a2
    FMUL ST0                            ; 0059b7a4
    FLD float ptr [EAX + 0x4]           ; 0059b7a6
    FSUB float ptr [EDX + 0x4]          ; 0059b7a9
    FMUL ST0                            ; 0059b7ac
    FLD float ptr [EAX + 0x8]           ; 0059b7ae
    FXCH                                ; 0059b7b1
    FADDP ST2,ST0                       ; 0059b7b3
    FSUB float ptr [EDX + 0x8]          ; 0059b7b5
    FMUL ST0                            ; 0059b7b8
    FADDP                               ; 0059b7ba
    FCOMPP                              ; 0059b7bc
    FNSTSW AX                           ; 0059b7be
    SAHF                                ; 0059b7c0
    JBE 0x0059b7c9                      ; 0059b7c1
        ;   XREF to: 0059b7c9 (CONDITIONAL_JUMP)  ; LAB_0059b7c9
    INC ESI                             ; 0059b7c3
        ;   Label: LAB_0059b7c3
    ADD EDI,0x4                         ; 0059b7c4
    JMP 0x0059b773                      ; 0059b7c7
        ;   XREF to: 0059b773 (UNCONDITIONAL_JUMP)  ; LAB_0059b773
    CMP EBX,dword ptr [EBP + 0x14]      ; 0059b7c9
        ;   Label: LAB_0059b7c9
    JZ 0x0059b7c3                       ; 0059b7cc
        ;   XREF to: 0059b7c3 (CONDITIONAL_JUMP)  ; LAB_0059b7c3
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0059b7ce
    PUSH EAX                            ; 0059b7d5
    PUSH EBX                            ; 0059b7d6
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0059b7d7
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0059b7dc
    TEST EAX,EAX                        ; 0059b7df
    JZ 0x0059b7c3                       ; 0059b7e1
        ;   XREF to: 0059b7c3 (CONDITIONAL_JUMP)  ; LAB_0059b7c3
    PUSH 0x0                            ; 0059b7e3
    PUSH EBX                            ; 0059b7e5
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0059b7e6
    PUSH EDX                            ; 0059b7ed
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0 ; 0059b7ee
        ;   XREF to: 0049dea0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0059b7f3
    TEST EAX,EAX                        ; 0059b7f6
    JZ 0x0059b7c3                       ; 0059b7f8
        ;   XREF to: 0059b7c3 (CONDITIONAL_JUMP)  ; LAB_0059b7c3
    PUSH EBX                            ; 0059b7fa
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059b7fb
    PUSH ECX                            ; 0059b7fe
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_0059c090 ; 0059b7ff
        ;   XREF to: 0059c090 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_0059c090(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0059b804
    TEST EAX,EAX                        ; 0059b807
    JZ 0x0059b7c3                       ; 0059b809
        ;   XREF to: 0059b7c3 (CONDITIONAL_JUMP)  ; LAB_0059b7c3
    MOV ESI,0x1                         ; 0059b80b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b810
    MOV dword ptr [ESP + 0xcc],ESI      ; 0059b813
    MOV dword ptr [EAX + 0x300],EBX     ; 0059b81a
    JMP 0x0059b2eb                      ; 0059b820
        ;   XREF to: 0059b2eb (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b825
        ;   Label: LAB_0059b825
    CMP dword ptr [EAX + 0x15c],0x0     ; 0059b828
    JNZ 0x0059b31c                      ; 0059b82f
        ;   XREF to: 0059b31c (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0x16c],EDX     ; 0059b835
    JMP 0x0059b31c                      ; 0059b83b
        ;   XREF to: 0059b31c (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b840
        ;   Label: caseD_2
    CMP dword ptr [EAX + 0x2ec],0x0     ; 0059b843
    JNZ 0x0059b85a                      ; 0059b84a
        ;   XREF to: 0059b85a (CONDITIONAL_JUMP)  ; LAB_0059b85a
    CMP dword ptr [ESP + 0xcc],0x0      ; 0059b84c
    JNZ 0x0059b30f                      ; 0059b854
        ;   XREF to: 0059b30f (CONDITIONAL_JUMP)  ; LAB_0059b30f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b85a
        ;   Label: LAB_0059b85a
    MOV dword ptr [EAX + 0x16c],0x0     ; 0059b85d
    JMP 0x0059b31c                      ; 0059b867
        ;   XREF to: 0059b31c (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b86c
        ;   Label: caseD_3
    MOV EBX,dword ptr [EAX + 0x2ec]     ; 0059b86f
    CMP EBX,0x1                         ; 0059b875
    JNZ 0x0059b85a                      ; 0059b878
        ;   XREF to: 0059b85a (CONDITIONAL_JUMP)  ; LAB_0059b85a
    CMP dword ptr [ESP + 0xcc],0x0      ; 0059b87a
    JNZ 0x0059b85a                      ; 0059b882
        ;   XREF to: 0059b85a (CONDITIONAL_JUMP)  ; LAB_0059b85a
    MOV dword ptr [EAX + 0x16c],EBX     ; 0059b884
    JMP 0x0059b31c                      ; 0059b88a
        ;   XREF to: 0059b31c (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EDX + 0x288]               ; 0059b88f
        ;   Label: LAB_0059b88f
    PUSH EAX                            ; 0059b895
    MOV ESI,dword ptr [0x0061b4d0]      ; 0059b896 | g_CEventListPtr
    PUSH ESI                            ; 0059b89c
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 0059b89d
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0059b8a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b8a5
    MOV dword ptr [EAX + 0x300],EBX     ; 0059b8a8
    MOV ESP,EBP                         ; 0059b8ae
    POP EBP                             ; 0059b8b0
    POP EDI                             ; 0059b8b1
    POP ESI                             ; 0059b8b2
    POP EBX                             ; 0059b8b3
    RET                                 ; 0059b8b4

