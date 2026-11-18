; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_process_FUN_0056e230(CTrigger *this_ptr,float delta_time)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0056e220 = 0056e2f0
;   float g_FLOAT_005d660b = 0.5
;   double g_DOUBLE_005d6613 = 65536
;   float g_FLOAT_005e58b0 = 256
;   CEventList* g_CEventListPtr = 01c6e360
;   CFireEffect* g_CFireEffect_PTR_005fc5a0 = 01c73654
;   CDemonMission* g_CDemonMission_PTR_00600530 = 01d81080
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   int g_FastSqrtMagic
;   int g_HeroCount
;   undefined4 DAT_01d81080
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b80
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004a3790
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20
;   core_trigger.cpp_CTrigger_containsActor_FUN_0056f080
;   shape_edittool.cpp_wildcardStringMatch_FUN_00486a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e230
        ;   Label: core_trigger.cpp_CTrigger_process_FUN_0056e230
    PUSH ESI                            ; 0056e231
    PUSH EDI                            ; 0056e232
    PUSH EBP                            ; 0056e233
    MOV EBP,ESP                         ; 0056e234
    SUB ESP,0xe0                        ; 0056e236
    AND ESP,0xfffffff8                  ; 0056e23c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e23f
    XOR EDX,EDX                         ; 0056e242
    MOV dword ptr [EAX + 0x300],EDX     ; 0056e244
    MOV EAX,dword ptr [EAX + 0x174]     ; 0056e24a
    MOV dword ptr [ESP + 0xcc],EDX      ; 0056e250
    CMP EAX,0x9                         ; 0056e257
    JA 0x0056e2db                       ; 0056e25a
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x56e1f8]  ; 0056e260 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e267
        ;   Label: caseD_0
    ADD EAX,0x20                        ; 0056e26a
    PUSH dword ptr [EAX + 0x138]        ; 0056e26d
    PUSH EAX                            ; 0056e273
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370 ; 0056e274
        ;   XREF to: 004d2370 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0056e279
    TEST EAX,EAX                        ; 0056e27c
    JZ 0x0056e2db                       ; 0056e27e
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056e280
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e283
    PUSH ECX                            ; 0056e286
    MOV EAX,dword ptr [EAX + 0x154]     ; 0056e287
    LEA ESI,[ESP + 0xc]                 ; 0056e28d
    CALL dword ptr [EAX + 0x1c]         ; 0056e291
    MOV EBX,dword ptr [0x01d5ba00]      ; 0056e294 | g_HeroCount
    ADD ESP,0x4                         ; 0056e29a
    XOR ESI,ESI                         ; 0056e29d
    TEST EBX,EBX                        ; 0056e29f
    JLE 0x0056e2db                      ; 0056e2a1
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    XOR EBX,EBX                         ; 0056e2a3
    MOV EAX,dword ptr [EBX + 0x1d5ba04] ; 0056e2a5
        ;   Label: LAB_0056e2a5
    PUSH EAX                            ; 0056e2ab
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056e2ac
    PUSH EDX                            ; 0056e2af
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_0056f080 ; 0056e2b0
        ;   XREF to: 0056f080 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_0056f080(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056e2b5
    TEST EAX,EAX                        ; 0056e2b8
    JZ 0x0056e347                       ; 0056e2ba
        ;   XREF to: 0056e347 (CONDITIONAL_JUMP)  ; LAB_0056e347
    MOV ECX,0x1                         ; 0056e2c0
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056e2c5
    MOV EAX,dword ptr [EBX + 0x1d5ba04] ; 0056e2c8
    MOV dword ptr [ESP + 0xcc],ECX      ; 0056e2ce
    MOV dword ptr [EDX + 0x300],EAX     ; 0056e2d5
        ;   Label: LAB_0056e2d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e2db
        ;   Label: default
    MOV EAX,dword ptr [EAX + 0x15c]     ; 0056e2de
    CMP EAX,0x3                         ; 0056e2e4
    JA 0x0056e30c                       ; 0056e2e7
        ;   XREF to: 0056e30c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x56e220]  ; 0056e2e9 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0056e2f0
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 0056e2f7
    JZ 0x0056e817                       ; 0056e2f9
        ;   XREF to: 0056e817 (CONDITIONAL_JUMP)  ; LAB_0056e817
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e2ff
        ;   Label: LAB_0056e2ff
    MOV dword ptr [EAX + 0x16c],0x1     ; 0056e302
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056e30c
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0056e30f
    MOV EBX,dword ptr [EDX + 0x16c]     ; 0056e316
    MOV dword ptr [EDX + 0x2ec],EAX     ; 0056e31c
    TEST EBX,EBX                        ; 0056e322
    JZ 0x0056e881                       ; 0056e324
        ;   XREF to: 0056e881 (CONDITIONAL_JUMP)  ; LAB_0056e881
    LEA EAX,[EDX + 0x224]               ; 0056e32a
    PUSH EAX                            ; 0056e330
    MOV EDI,dword ptr [0x005fba60]      ; 0056e331 | g_CEventListPtr
    PUSH EDI                            ; 0056e337
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 0056e338
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0056e33d
    MOV ESP,EBP                         ; 0056e340
    POP EBP                             ; 0056e342
    POP EDI                             ; 0056e343
    POP ESI                             ; 0056e344
    POP EBX                             ; 0056e345
    RET                                 ; 0056e346
    MOV EDI,dword ptr [0x01d5ba00]      ; 0056e347 | g_HeroCount
        ;   Label: LAB_0056e347
    INC ESI                             ; 0056e34d
    ADD EBX,0x4                         ; 0056e34e
    CMP ESI,EDI                         ; 0056e351
    JL 0x0056e2a5                       ; 0056e353
        ;   XREF to: 0056e2a5 (CONDITIONAL_JUMP)  ; LAB_0056e2a5
    JMP 0x0056e2db                      ; 0056e359
        ;   XREF to: 0056e2db (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e35b
        ;   Label: caseD_1
    CMP dword ptr [EAX + 0x36c],0x0     ; 0056e35e
    JNZ 0x0056e385                      ; 0056e365
        ;   XREF to: 0056e385 (CONDITIONAL_JUMP)  ; LAB_0056e385
    ADD EAX,0x178                       ; 0056e367
    PUSH EAX                            ; 0056e36c
    MOV EBX,dword ptr [0x00600530]      ; 0056e36d | g_CDemonMission_PTR_00600530
    PUSH EBX                            ; 0056e373 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90 ; 0056e374
        ;   XREF to: 004f6e90 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0056e379
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056e37c
    MOV dword ptr [EDX + 0x36c],EAX     ; 0056e37f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e385
        ;   Label: LAB_0056e385
    MOV ESI,dword ptr [EAX + 0x36c]     ; 0056e388
    TEST ESI,ESI                        ; 0056e38e
    JZ 0x0056e2db                       ; 0056e390
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    MOV EDI,dword ptr [ESI + 0x70]      ; 0056e396
    CMP EDI,0x1                         ; 0056e399
    JNZ 0x0056e2db                      ; 0056e39c
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    LEA EBX,[ESI + 0x20]                ; 0056e3a2
    FLD float ptr [EAX + 0x20]          ; 0056e3a5
    FSUB float ptr [EBX]                ; 0056e3a8
    FMUL ST0                            ; 0056e3aa
    FLD float ptr [EAX + 0x24]          ; 0056e3ac
    FSUB float ptr [EBX + 0x4]          ; 0056e3af
    FMUL ST0                            ; 0056e3b2
    FLD float ptr [EAX + 0x28]          ; 0056e3b4
    FXCH                                ; 0056e3b7
    FADDP ST2,ST0                       ; 0056e3b9
    FSUB float ptr [EBX + 0x8]          ; 0056e3bb
    FMUL ST0                            ; 0056e3be
    FLD float ptr [EAX + 0x158]         ; 0056e3c0
    FXCH                                ; 0056e3c6
    FADDP ST2,ST0                       ; 0056e3c8
    FMUL float ptr [EAX + 0x158]        ; 0056e3ca
    FXCH                                ; 0056e3d0
    FCOMPP                              ; 0056e3d2
    FNSTSW AX                           ; 0056e3d4
    SAHF                                ; 0056e3d6
    JA 0x0056e2db                       ; 0056e3d7
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    PUSH ESI                            ; 0056e3dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e3de
    PUSH EAX                            ; 0056e3e1
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_0056f080 ; 0056e3e2
        ;   XREF to: 0056f080 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_0056f080(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056e3e7
    TEST EAX,EAX                        ; 0056e3ea
    JZ 0x0056e2db                       ; 0056e3ec
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e3f2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056e3f5
    MOV EAX,dword ptr [EAX + 0x36c]     ; 0056e3f8
    MOV dword ptr [ESP + 0xcc],EDI      ; 0056e3fe
    JMP 0x0056e2d5                      ; 0056e405
        ;   XREF to: 0056e2d5 (UNCONDITIONAL_JUMP)  ; LAB_0056e2d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e40a
        ;   Label: caseD_2
    ADD EAX,0x20                        ; 0056e40d
    PUSH dword ptr [EAX + 0x138]        ; 0056e410
    PUSH EAX                            ; 0056e416
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370 ; 0056e417
        ;   XREF to: 004d2370 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0056e41c
    TEST EAX,EAX                        ; 0056e41f
    JZ 0x0056e2db                       ; 0056e421
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056e427
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e42a
    PUSH ESI                            ; 0056e42d
    MOV EAX,dword ptr [EAX + 0x154]     ; 0056e42e
    LEA ESI,[ESP + 0x3c]                ; 0056e434
    LEA EDI,[ESP + 0x24]                ; 0056e438
    CALL dword ptr [EAX + 0x1c]         ; 0056e43c
    MOV ECX,0x6                         ; 0056e43f
    LEA ESI,[ESP + 0x3c]                ; 0056e444
    ADD ESP,0x4                         ; 0056e448
    MOVSD.REP ES:EDI,ESI                ; 0056e44b
    LEA EAX,[ESP + 0x20]                ; 0056e44d
    FLD float ptr [ESP + 0x20]          ; 0056e451
    FLD float ptr [ESP + 0x24]          ; 0056e455
    FLD float ptr [ESP + 0x28]          ; 0056e459
    LEA EDI,[ESP + 0x68]                ; 0056e45d
    LEA ESI,[ESP + 0x8c]                ; 0056e461
    FXCH ST2                            ; 0056e468
    FADD float ptr [EAX + 0xc]          ; 0056e46a
    FXCH                                ; 0056e46d
    FADD float ptr [EAX + 0x10]         ; 0056e46f
    FXCH ST2                            ; 0056e472
    FADD float ptr [EAX + 0x14]         ; 0056e474
    FXCH                                ; 0056e477
    FSTP float ptr [ESP + 0x8c]         ; 0056e479
    FXCH                                ; 0056e480
    FSTP float ptr [ESP + 0x90]         ; 0056e482
    FSTP float ptr [ESP + 0x94]         ; 0056e489
    MOVSD ES:EDI,ESI                    ; 0056e490
    MOVSD ES:EDI,ESI                    ; 0056e491
    MOVSD ES:EDI,ESI                    ; 0056e492
    FLD float ptr [0x005d660b]          ; 0056e493 | g_FLOAT_005d660b
    FLD float ptr [ESP + 0x68]          ; 0056e499
    FMUL ST1                            ; 0056e49d
    FLD float ptr [ESP + 0x6c]          ; 0056e49f
    FMUL ST2                            ; 0056e4a3
    FLD float ptr [ESP + 0x70]          ; 0056e4a5
    FMULP ST3                           ; 0056e4a9
    LEA EAX,[ESP + 0x80]                ; 0056e4ab
    LEA EDI,[ESP + 0x80]                ; 0056e4b2
    LEA ESI,[ESP + 0x74]                ; 0056e4b9
    FXCH                                ; 0056e4bd
    FSTP float ptr [ESP + 0x74]         ; 0056e4bf
    FSTP float ptr [ESP + 0x78]         ; 0056e4c3
    FSTP float ptr [ESP + 0x7c]         ; 0056e4c7
    MOVSD ES:EDI,ESI                    ; 0056e4cb
    MOVSD ES:EDI,ESI                    ; 0056e4cc
    MOVSD ES:EDI,ESI                    ; 0056e4cd
    PUSH EAX                            ; 0056e4ce
    MOV EDI,dword ptr [EBP + 0x14]      ; 0056e4cf
    PUSH EDI                            ; 0056e4d2
    LEA ESI,[ESP + 0xa0]                ; 0056e4d3
    LEA EBX,[ESP + 0x58]                ; 0056e4da
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b80 ; 0056e4de
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b80(CDemonActor * this_ptr, CVector3f * input_local_point, CVector3f * output_world_point)
    LEA EDI,[ESP + 0xac]                ; 0056e4e3
    LEA ESI,[ESP + 0xa0]                ; 0056e4ea
    ADD ESP,0x8                         ; 0056e4f1
    LEA EAX,[ESP + 0xa4]                ; 0056e4f4
    MOVSD ES:EDI,ESI                    ; 0056e4fb
    MOVSD ES:EDI,ESI                    ; 0056e4fc
    MOVSD ES:EDI,ESI                    ; 0056e4fd
    CMP EBX,EAX                         ; 0056e4fe
    JZ 0x0056e523                       ; 0056e500
        ;   XREF to: 0056e523 (CONDITIONAL_JUMP)  ; LAB_0056e523
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0056e502
    MOV dword ptr [ESP + 0x50],EAX      ; 0056e509
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0056e50d
    MOV dword ptr [ESP + 0x54],EAX      ; 0056e514
    MOV EAX,dword ptr [ESP + 0xac]      ; 0056e518
    MOV dword ptr [ESP + 0x58],EAX      ; 0056e51f
    LEA EBX,[ESP + 0x5c]                ; 0056e523
        ;   Label: LAB_0056e523
    LEA EAX,[ESP + 0x50]                ; 0056e527
    FLD float ptr [EAX]                 ; 0056e52b
    FMUL float ptr [0x005e58b0]         ; 0056e52d | g_FLOAT_005e58b0
    FISTP dword ptr [EBX]               ; 0056e533
    FLD float ptr [EAX + 0x4]           ; 0056e535
    FMUL float ptr [0x005e58b0]         ; 0056e538 | g_FLOAT_005e58b0
    FISTP dword ptr [EBX + 0x4]         ; 0056e53e
    FLD float ptr [EAX + 0x8]           ; 0056e541
    FMUL float ptr [0x005e58b0]         ; 0056e544 | g_FLOAT_005e58b0
    FISTP dword ptr [EBX + 0x8]         ; 0056e54a
    PUSH 0x0                            ; 0056e54d
    LEA EAX,[ESP + 0x60]                ; 0056e54f
    PUSH EAX                            ; 0056e553
    MOV EAX,[0x00603b28]                ; 0056e554 | g_CDemonSetPtr
    PUSH EAX                            ; 0056e559 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20 ; 0056e55a
        ;   XREF to: 00537e20 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    ADD ESP,0xc                         ; 0056e55f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056e562
    FLD float ptr [EDX + 0x21c]         ; 0056e565
    FMUL double ptr [0x005d6613]        ; 0056e56b | g_DOUBLE_005d6613
    MOV dword ptr [ESP + 0xdc],EAX      ; 0056e571
    FILD dword ptr [ESP + 0xdc]         ; 0056e578
    FSTP double ptr [ESP]               ; 0056e57f
    FCOMP double ptr [ESP]              ; 0056e582
    FNSTSW AX                           ; 0056e585
    SAHF                                ; 0056e587
    JA 0x0056e2db                       ; 0056e588
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    FLD float ptr [EDX + 0x220]         ; 0056e58e
    FMUL double ptr [0x005d6613]        ; 0056e594 | g_DOUBLE_005d6613
    FCOMP double ptr [ESP]              ; 0056e59a
    FNSTSW AX                           ; 0056e59d
    SAHF                                ; 0056e59f
    JC 0x0056e2db                       ; 0056e5a0
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESP + 0xcc],0x1      ; 0056e5a6
    JMP 0x0056e2db                      ; 0056e5b1
        ;   XREF to: 0056e2db (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e5b6
        ;   Label: caseD_3
    MOV EAX,dword ptr [EAX + 0x2f0]     ; 0056e5b9
    MOV dword ptr [ESP + 0xcc],EAX      ; 0056e5bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e5c6
    MOV dword ptr [EAX + 0x2f0],0x0     ; 0056e5c9
    JMP 0x0056e2db                      ; 0056e5d3
        ;   XREF to: 0056e2db (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e5d8
        ;   Label: caseD_7
    FLD float ptr [EAX + 0x370]         ; 0056e5db
    FSUB float ptr [EBP + 0x18]         ; 0056e5e1
    FST float ptr [EAX + 0x370]         ; 0056e5e4
    FLDZ                                ; 0056e5ea
    FCOMPP                              ; 0056e5ec
    FNSTSW AX                           ; 0056e5ee
    SAHF                                ; 0056e5f0
    JBE 0x0056e5fc                      ; 0056e5f1
        ;   XREF to: 0056e5fc (CONDITIONAL_JUMP)  ; LAB_0056e5fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e5f3
    MOV dword ptr [EAX + 0x370],EDX     ; 0056e5f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e5fc
        ;   Label: LAB_0056e5fc
    FLD float ptr [EAX + 0x2f8]         ; 0056e5ff
    FLDZ                                ; 0056e605
    FCOMPP                              ; 0056e607
    FNSTSW AX                           ; 0056e609
    SAHF                                ; 0056e60b
    JC 0x0056e61f                       ; 0056e60c
        ;   XREF to: 0056e61f (CONDITIONAL_JUMP)  ; LAB_0056e61f
    MOV EAX,0x1                         ; 0056e60e
    MOV dword ptr [ESP + 0xcc],EAX      ; 0056e613
    JMP 0x0056e2db                      ; 0056e61a
        ;   XREF to: 0056e2db (UNCONDITIONAL_JUMP)  ; default
    XOR EAX,EAX                         ; 0056e61f
        ;   Label: LAB_0056e61f
    MOV dword ptr [ESP + 0xcc],EAX      ; 0056e621
    JMP 0x0056e2db                      ; 0056e628
        ;   XREF to: 0056e2db (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e62d
        ;   Label: caseD_6
    LEA EBX,[EAX + 0x20]                ; 0056e630
    PUSH dword ptr [EAX + 0x158]        ; 0056e633
    PUSH EBX                            ; 0056e639
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370 ; 0056e63a
        ;   XREF to: 004d2370 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0056e63f
    TEST EAX,EAX                        ; 0056e642
    JZ 0x0056e2db                       ; 0056e644
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e64a
    FLD float ptr [EAX + 0x160]         ; 0056e64d
    FMUL ST0                            ; 0056e653
    FLD float ptr [EAX + 0x164]         ; 0056e655
    FMUL ST0                            ; 0056e65b
    FADDP                               ; 0056e65d
    FLD float ptr [EAX + 0x168]         ; 0056e65f
    FMUL ST0                            ; 0056e665
    PUSH 0x0                            ; 0056e667
    FADDP                               ; 0056e669
    MOV ECX,dword ptr [0x01d1a0a4]      ; 0056e66b | g_FastSqrtMagic
    FSTP float ptr [ESP + 0xc0]         ; 0056e671
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0056e678
    PUSH 0x0                            ; 0056e67f
    SAR EAX,0x1                         ; 0056e681
    PUSH 0x0                            ; 0056e683
    ADD EAX,ECX                         ; 0056e685
    PUSH EAX                            ; 0056e687
    PUSH EBX                            ; 0056e688
    MOV EBX,dword ptr [0x005fc5a0]      ; 0056e689 | g_CFireEffect_PTR_005fc5a0
    PUSH EBX                            ; 0056e68f
    CALL core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004a3790 ; 0056e690
        ;   XREF to: 004a3790 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004a3790(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x18                        ; 0056e695
    MOV dword ptr [ESP + 0xcc],EAX      ; 0056e698
    JMP 0x0056e2db                      ; 0056e69f
        ;   XREF to: 0056e2db (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e6a4
        ;   Label: caseD_8
    ADD EAX,0x20                        ; 0056e6a7
    PUSH dword ptr [EAX + 0x138]        ; 0056e6aa
    PUSH EAX                            ; 0056e6b0
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370 ; 0056e6b1
        ;   XREF to: 004d2370 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0056e6b6
    TEST EAX,EAX                        ; 0056e6b9
    JZ 0x0056e2db                       ; 0056e6bb
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    XOR EDI,EDI                         ; 0056e6c1
    XOR ESI,ESI                         ; 0056e6c3
    MOV EAX,[0x00603b28]                ; 0056e6c5 | g_CDemonSetPtr
        ;   Label: LAB_0056e6c5
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0056e6ca | g_CDemonSetInstance.actor_count
    JGE 0x0056e2db                      ; 0056e6d0
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d168] ; 0056e6d6 | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 0056e6dd
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056e6de
    CALL dword ptr [EAX + 0x5c]         ; 0056e6e4
    ADD ESP,0x4                         ; 0056e6e7
    TEST EAX,EAX                        ; 0056e6ea
    JNZ 0x0056e6f4                      ; 0056e6ec
        ;   XREF to: 0056e6f4 (CONDITIONAL_JUMP)  ; LAB_0056e6f4
    INC ESI                             ; 0056e6ee
        ;   Label: LAB_0056e6ee
    ADD EDI,0x4                         ; 0056e6ef
    JMP 0x0056e6c5                      ; 0056e6f2
        ;   XREF to: 0056e6c5 (UNCONDITIONAL_JUMP)  ; LAB_0056e6c5
    PUSH EBX                            ; 0056e6f4
        ;   Label: LAB_0056e6f4
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056e6f5
    PUSH ECX                            ; 0056e6f8
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_0056f080 ; 0056e6f9
        ;   XREF to: 0056f080 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_0056f080(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056e6fe
    TEST EAX,EAX                        ; 0056e701
    JZ 0x0056e6ee                       ; 0056e703
        ;   XREF to: 0056e6ee (CONDITIONAL_JUMP)  ; LAB_0056e6ee
    MOV ESI,0x1                         ; 0056e705
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e70a
    MOV dword ptr [ESP + 0xcc],ESI      ; 0056e70d
    MOV dword ptr [EAX + 0x300],EBX     ; 0056e714
    JMP 0x0056e2db                      ; 0056e71a
        ;   XREF to: 0056e2db (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e71f
        ;   Label: caseD_9
    LEA EBX,[EAX + 0x20]                ; 0056e722
    PUSH dword ptr [EAX + 0x158]        ; 0056e725
    PUSH EBX                            ; 0056e72b
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370 ; 0056e72c
        ;   XREF to: 004d2370 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0056e731
    TEST EAX,EAX                        ; 0056e734
    JZ 0x0056e2db                       ; 0056e736
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e73c
    ADD EAX,0x178                       ; 0056e73f
    MOV dword ptr [ESP + 0xd8],EBX      ; 0056e744
    MOV dword ptr [ESP + 0xd4],EAX      ; 0056e74b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e752
    XOR EDI,EDI                         ; 0056e755
    ADD EAX,0x1c8                       ; 0056e757
    XOR ESI,ESI                         ; 0056e75c
    MOV dword ptr [ESP + 0xd0],EAX      ; 0056e75e
    MOV EAX,[0x00603b28]                ; 0056e765 | g_CDemonSetPtr
        ;   Label: LAB_0056e765
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0056e76a | g_CDemonSetInstance.actor_count
    JGE 0x0056e2db                      ; 0056e770
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; default
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d168] ; 0056e776 | g_CDemonSetInstance.actors[0]
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e77d
    FLD float ptr [EAX + 0x158]         ; 0056e780
    FMUL ST0                            ; 0056e786
    LEA EAX,[EBX + 0x20]                ; 0056e788
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0056e78b
    FLD float ptr [EAX]                 ; 0056e792
    FSUB float ptr [EDX]                ; 0056e794
    FMUL ST0                            ; 0056e796
    FLD float ptr [EAX + 0x4]           ; 0056e798
    FSUB float ptr [EDX + 0x4]          ; 0056e79b
    FMUL ST0                            ; 0056e79e
    FLD float ptr [EAX + 0x8]           ; 0056e7a0
    FXCH                                ; 0056e7a3
    FADDP ST2,ST0                       ; 0056e7a5
    FSUB float ptr [EDX + 0x8]          ; 0056e7a7
    FMUL ST0                            ; 0056e7aa
    FADDP                               ; 0056e7ac
    FCOMPP                              ; 0056e7ae
    FNSTSW AX                           ; 0056e7b0
    SAHF                                ; 0056e7b2
    JBE 0x0056e7bb                      ; 0056e7b3
        ;   XREF to: 0056e7bb (CONDITIONAL_JUMP)  ; LAB_0056e7bb
    INC ESI                             ; 0056e7b5
        ;   Label: LAB_0056e7b5
    ADD EDI,0x4                         ; 0056e7b6
    JMP 0x0056e765                      ; 0056e7b9
        ;   XREF to: 0056e765 (UNCONDITIONAL_JUMP)  ; LAB_0056e765
    CMP EBX,dword ptr [EBP + 0x14]      ; 0056e7bb
        ;   Label: LAB_0056e7bb
    JZ 0x0056e7b5                       ; 0056e7be
        ;   XREF to: 0056e7b5 (CONDITIONAL_JUMP)  ; LAB_0056e7b5
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0056e7c0
    PUSH EAX                            ; 0056e7c7
    PUSH EBX                            ; 0056e7c8
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 0056e7c9
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0056e7ce
    TEST EAX,EAX                        ; 0056e7d1
    JZ 0x0056e7b5                       ; 0056e7d3
        ;   XREF to: 0056e7b5 (CONDITIONAL_JUMP)  ; LAB_0056e7b5
    PUSH 0x0                            ; 0056e7d5
    PUSH EBX                            ; 0056e7d7
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0056e7d8
    PUSH EDX                            ; 0056e7df
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00486a40 ; 0056e7e0
        ;   XREF to: 00486a40 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00486a40(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0056e7e5
    TEST EAX,EAX                        ; 0056e7e8
    JZ 0x0056e7b5                       ; 0056e7ea
        ;   XREF to: 0056e7b5 (CONDITIONAL_JUMP)  ; LAB_0056e7b5
    PUSH EBX                            ; 0056e7ec
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056e7ed
    PUSH ECX                            ; 0056e7f0
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_0056f080 ; 0056e7f1
        ;   XREF to: 0056f080 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_0056f080(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056e7f6
    TEST EAX,EAX                        ; 0056e7f9
    JZ 0x0056e7b5                       ; 0056e7fb
        ;   XREF to: 0056e7b5 (CONDITIONAL_JUMP)  ; LAB_0056e7b5
    MOV ESI,0x1                         ; 0056e7fd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e802
    MOV dword ptr [ESP + 0xcc],ESI      ; 0056e805
    MOV dword ptr [EAX + 0x300],EBX     ; 0056e80c
    JMP 0x0056e2db                      ; 0056e812
        ;   XREF to: 0056e2db (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e817
        ;   Label: LAB_0056e817
    CMP dword ptr [EAX + 0x15c],0x0     ; 0056e81a
    JNZ 0x0056e30c                      ; 0056e821
        ;   XREF to: 0056e30c (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0x16c],EDX     ; 0056e827
    JMP 0x0056e30c                      ; 0056e82d
        ;   XREF to: 0056e30c (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e832
        ;   Label: caseD_2
    CMP dword ptr [EAX + 0x2ec],0x0     ; 0056e835
    JNZ 0x0056e84c                      ; 0056e83c
        ;   XREF to: 0056e84c (CONDITIONAL_JUMP)  ; LAB_0056e84c
    CMP dword ptr [ESP + 0xcc],0x0      ; 0056e83e
    JNZ 0x0056e2ff                      ; 0056e846
        ;   XREF to: 0056e2ff (CONDITIONAL_JUMP)  ; LAB_0056e2ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e84c
        ;   Label: LAB_0056e84c
    MOV dword ptr [EAX + 0x16c],0x0     ; 0056e84f
    JMP 0x0056e30c                      ; 0056e859
        ;   XREF to: 0056e30c (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e85e
        ;   Label: caseD_3
    MOV EBX,dword ptr [EAX + 0x2ec]     ; 0056e861
    CMP EBX,0x1                         ; 0056e867
    JNZ 0x0056e84c                      ; 0056e86a
        ;   XREF to: 0056e84c (CONDITIONAL_JUMP)  ; LAB_0056e84c
    CMP dword ptr [ESP + 0xcc],0x0      ; 0056e86c
    JNZ 0x0056e84c                      ; 0056e874
        ;   XREF to: 0056e84c (CONDITIONAL_JUMP)  ; LAB_0056e84c
    MOV dword ptr [EAX + 0x16c],EBX     ; 0056e876
    JMP 0x0056e30c                      ; 0056e87c
        ;   XREF to: 0056e30c (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EDX + 0x288]               ; 0056e881
        ;   Label: LAB_0056e881
    PUSH EAX                            ; 0056e887
    MOV ESI,dword ptr [0x005fba60]      ; 0056e888 | g_CEventListPtr
    PUSH ESI                            ; 0056e88e
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 0056e88f
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0056e894
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e897
    MOV dword ptr [EAX + 0x300],EBX     ; 0056e89a
    MOV ESP,EBP                         ; 0056e8a0
    POP EBP                             ; 0056e8a2
    POP EDI                             ; 0056e8a3
    POP ESI                             ; 0056e8a4
    POP EBX                             ; 0056e8a5
    RET                                 ; 0056e8a6

