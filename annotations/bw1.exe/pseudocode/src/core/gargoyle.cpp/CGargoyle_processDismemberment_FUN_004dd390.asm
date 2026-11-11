; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gargoyle_cpp_CGargoyle_processDismemberment_FUN_004dd390(CGargoyle *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gargoyle.cpp_CGargoyle_processDamage_FUN_004dd630 at 004dd6ab
;
; Referenced Globals:
;   undefined1* switchdataD_004dd378 = 004dd3cd
;   undefined4 DAT_005e39dc
;   undefined4 DAT_005e39e4
;   undefined4 DAT_005e39ec
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.gratuitous_dismemberment
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
;   core_bodypart.cpp_createBodyPart_FUN_00418940
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd390
        ;   Label: core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004dd390
    PUSH ESI                            ; 004dd391
    PUSH EDI                            ; 004dd392
    PUSH EBP                            ; 004dd393
    SUB ESP,0xc                         ; 004dd394
    MOV EBX,dword ptr [ESP + 0x20]      ; 004dd397
    MOV ESI,dword ptr [ESP + 0x24]      ; 004dd39b
    FLD float ptr [ESI + 0x2c]          ; 004dd39f
    FLDZ                                ; 004dd3a2
    FCOMPP                              ; 004dd3a4
    FNSTSW AX                           ; 004dd3a6
    SAHF                                ; 004dd3a8
    JNC 0x004dd3d5                      ; 004dd3a9
        ;   XREF to: 004dd3d5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004dd3ab
    JNZ 0x004dd3d5                      ; 004dd3ae
        ;   XREF to: 004dd3d5 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005c084c ; 004dd3b0
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 004dd3b5
    MOV EDI,0x6                         ; 004dd3b7
    SAR EDX,0x1f                        ; 004dd3bc
    IDIV EDI                            ; 004dd3bf
    CMP EDX,0x5                         ; 004dd3c1
    JA 0x004dd3d5                       ; 004dd3c4
        ;   XREF to: 004dd3d5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4dd378]  ; 004dd3c6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc268]    ; 004dd3cd
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004dd3d3
        ;   Label: LAB_004dd3d3
    MOV ECX,dword ptr [EBX + 0xc268]    ; 004dd3d5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004dd3db
    CMP EAX,ECX                         ; 004dd3dd
    JNZ 0x004dd5ac                      ; 004dd3df
        ;   XREF to: 004dd5ac (CONDITIONAL_JUMP)  ; LAB_004dd5ac
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004dd3e5
        ;   Label: LAB_004dd3e5
    MOV EBP,dword ptr [EBX + 0xc290]    ; 004dd3e8
    MOV dword ptr [ESP + 0x8],EAX       ; 004dd3ee
    CMP EBP,dword ptr [ESI]             ; 004dd3f2
    JNZ 0x004dd3fe                      ; 004dd3f4
        ;   XREF to: 004dd3fe (CONDITIONAL_JUMP)  ; LAB_004dd3fe
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004dd3f6
    MOV EDX,dword ptr [EBX + 0xc28c]    ; 004dd3fe
        ;   Label: LAB_004dd3fe
    CMP EDX,dword ptr [ESI]             ; 004dd404
    JNZ 0x004dd410                      ; 004dd406
        ;   XREF to: 004dd410 (CONDITIONAL_JUMP)  ; LAB_004dd410
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004dd408
    MOV EAX,[0x0061d95c]                ; 004dd410 | g_CGamePtr
        ;   Label: LAB_004dd410
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004dd415 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x004dd426                       ; 004dd41c
        ;   XREF to: 004dd426 (CONDITIONAL_JUMP)  ; LAB_004dd426
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004dd41e
    PUSH dword ptr [ESP + 0x8]          ; 004dd426
        ;   Label: LAB_004dd426
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004dd42a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004dd42f
    TEST EAX,EAX                        ; 004dd432
    JZ 0x004dd543                       ; 004dd434
        ;   XREF to: 004dd543 (CONDITIONAL_JUMP)  ; LAB_004dd543
    MOV EAX,dword ptr [EBX + 0x27a0]    ; 004dd43a
    PUSH EAX                            ; 004dd440
    PUSH 0x0                            ; 004dd441
    PUSH 0x0                            ; 004dd443
    PUSH EBX                            ; 004dd445
    LEA EAX,[ESI + 0xc]                 ; 004dd446
    PUSH EAX                            ; 004dd449
    LEA EAX,[EBX + 0x30]                ; 004dd44a
    PUSH EAX                            ; 004dd44d
    LEA EAX,[EBX + 0x20]                ; 004dd44e
    PUSH EAX                            ; 004dd451
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 004dd452
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004dd457
    PUSH 0x1                            ; 004dd45a
    MOV EDX,dword ptr [ESI]             ; 004dd45c
    PUSH EDX                            ; 004dd45e
    PUSH EAX                            ; 004dd45f
    PUSH EBX                            ; 004dd460
    MOV EDI,EAX                         ; 004dd461
    MOV EBP,EAX                         ; 004dd463
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004dd465
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004dd46a
    MOV ECX,dword ptr [EBX + 0xc268]    ; 004dd46c
    ADD ESP,0x10                        ; 004dd472
    CMP EAX,ECX                         ; 004dd475
    JNZ 0x004dd48c                      ; 004dd477
        ;   XREF to: 004dd48c (CONDITIONAL_JUMP)  ; LAB_004dd48c
    PUSH 0x1                            ; 004dd479
    MOV EAX,dword ptr [EBX + 0xc26c]    ; 004dd47b
    PUSH EAX                            ; 004dd481
    PUSH EDI                            ; 004dd482
    PUSH EBX                            ; 004dd483
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004dd484
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004dd489
    MOV EDX,dword ptr [EBX + 0xc270]    ; 004dd48c
        ;   Label: LAB_004dd48c
    CMP EDX,dword ptr [ESI]             ; 004dd492
    JNZ 0x004dd4a9                      ; 004dd494
        ;   XREF to: 004dd4a9 (CONDITIONAL_JUMP)  ; LAB_004dd4a9
    PUSH 0x1                            ; 004dd496
    MOV ECX,dword ptr [EBX + 0xc274]    ; 004dd498
    PUSH ECX                            ; 004dd49e
    PUSH EBP                            ; 004dd49f
    PUSH EBX                            ; 004dd4a0
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004dd4a1
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004dd4a6
    MOV EDI,dword ptr [EBX + 0xc28c]    ; 004dd4a9
        ;   Label: LAB_004dd4a9
    CMP EDI,dword ptr [ESI]             ; 004dd4af
    JNZ 0x004dd515                      ; 004dd4b1
        ;   XREF to: 004dd515 (CONDITIONAL_JUMP)  ; LAB_004dd515
    PUSH 0x1                            ; 004dd4b3
    LEA EDI,[ESI + 0xc]                 ; 004dd4b5
    PUSH EDI                            ; 004dd4b8
    MOV EAX,dword ptr [EBX + 0xc270]    ; 004dd4b9
    PUSH EAX                            ; 004dd4bf
    PUSH EBX                            ; 004dd4c0
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004dd4c1
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004dd4c6
    PUSH 0x1                            ; 004dd4c9
    PUSH EDI                            ; 004dd4cb
    MOV EDX,dword ptr [EBX + 0xc274]    ; 004dd4cc
    PUSH EDX                            ; 004dd4d2
    PUSH EBX                            ; 004dd4d3
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004dd4d4
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004dd4d9
    PUSH 0x1                            ; 004dd4dc
    PUSH EDI                            ; 004dd4de
    MOV ECX,dword ptr [EBX + 0xc268]    ; 004dd4df
    PUSH ECX                            ; 004dd4e5
    PUSH EBX                            ; 004dd4e6
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004dd4e7
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004dd4ec
    PUSH 0x1                            ; 004dd4ef
    PUSH EDI                            ; 004dd4f1
    MOV EAX,dword ptr [EBX + 0xc26c]    ; 004dd4f2
    PUSH EAX                            ; 004dd4f8
    PUSH EBX                            ; 004dd4f9
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004dd4fa
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004dd4ff
    PUSH 0x1                            ; 004dd502
    PUSH EDI                            ; 004dd504
    MOV EDX,dword ptr [EBX + 0xc290]    ; 004dd505
    PUSH EDX                            ; 004dd50b
    PUSH EBX                            ; 004dd50c
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004dd50d
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004dd512
    PUSH EBP                            ; 004dd515
        ;   Label: LAB_004dd515
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 004dd516
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xc290]    ; 004dd51b
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004dd521
    ADD ESP,0x4                         ; 004dd528
    TEST ECX,ECX                        ; 004dd52b
    JZ 0x004dd5ed                       ; 004dd52d
        ;   XREF to: 004dd5ed (CONDITIONAL_JUMP)  ; LAB_004dd5ed
    FLD float ptr [ESI + 0x8]           ; 004dd533
        ;   Label: LAB_004dd533
    FLD ST0                             ; 004dd536
    FMUL double ptr [0x005e39dc]        ; 004dd538 | DAT_005e39dc
    FSTP ST1                            ; 004dd53e
    FSTP float ptr [ESI + 0x8]          ; 004dd540
    MOV EDI,dword ptr [EBX + 0xc290]    ; 004dd543
        ;   Label: LAB_004dd543
    MOV EAX,dword ptr [ESI]             ; 004dd549
    CMP EAX,EDI                         ; 004dd54b
    JZ 0x004dd5f9                       ; 004dd54d
        ;   XREF to: 004dd5f9 (CONDITIONAL_JUMP)  ; LAB_004dd5f9
    CMP EAX,dword ptr [EBX + 0xc288]    ; 004dd553
    JZ 0x004dd567                       ; 004dd559
        ;   XREF to: 004dd567 (CONDITIONAL_JUMP)  ; LAB_004dd567
    CMP EAX,dword ptr [EBX + 0xc28c]    ; 004dd55b
    JNZ 0x004dd611                      ; 004dd561
        ;   XREF to: 004dd611 (CONDITIONAL_JUMP)  ; LAB_004dd611
    MOV EAX,dword ptr [ESI + 0x4]       ; 004dd567
        ;   Label: LAB_004dd567
    MOV dword ptr [ESI + 0x4],EAX       ; 004dd56a
    ADD ESP,0xc                         ; 004dd56d
    POP EBP                             ; 004dd570
    POP EDI                             ; 004dd571
    POP ESI                             ; 004dd572
    POP EBX                             ; 004dd573
    RET                                 ; 004dd574
    MOV EAX,dword ptr [EBX + 0xc26c]    ; 004dd575
        ;   Label: caseD_1
    JMP 0x004dd3d3                      ; 004dd57b
        ;   XREF to: 004dd3d3 (UNCONDITIONAL_JUMP)  ; LAB_004dd3d3
    MOV EAX,dword ptr [EBX + 0xc270]    ; 004dd580
        ;   Label: caseD_2
    JMP 0x004dd3d3                      ; 004dd586
        ;   XREF to: 004dd3d3 (UNCONDITIONAL_JUMP)  ; LAB_004dd3d3
    MOV EAX,dword ptr [EBX + 0xc274]    ; 004dd58b
        ;   Label: caseD_3
    JMP 0x004dd3d3                      ; 004dd591
        ;   XREF to: 004dd3d3 (UNCONDITIONAL_JUMP)  ; LAB_004dd3d3
    MOV EAX,dword ptr [EBX + 0xc290]    ; 004dd596
        ;   Label: caseD_4
    JMP 0x004dd3d3                      ; 004dd59c
        ;   XREF to: 004dd3d3 (UNCONDITIONAL_JUMP)  ; LAB_004dd3d3
    MOV EAX,dword ptr [EBX + 0xc28c]    ; 004dd5a1
        ;   Label: caseD_5
    JMP 0x004dd3d3                      ; 004dd5a7
        ;   XREF to: 004dd3d3 (UNCONDITIONAL_JUMP)  ; LAB_004dd3d3
    CMP EAX,dword ptr [EBX + 0xc26c]    ; 004dd5ac
        ;   Label: LAB_004dd5ac
    JZ 0x004dd3e5                       ; 004dd5b2
        ;   XREF to: 004dd3e5 (CONDITIONAL_JUMP)  ; LAB_004dd3e5
    CMP EAX,dword ptr [EBX + 0xc270]    ; 004dd5b8
    JZ 0x004dd3e5                       ; 004dd5be
        ;   XREF to: 004dd3e5 (CONDITIONAL_JUMP)  ; LAB_004dd3e5
    CMP EAX,dword ptr [EBX + 0xc274]    ; 004dd5c4
    JZ 0x004dd3e5                       ; 004dd5ca
        ;   XREF to: 004dd3e5 (CONDITIONAL_JUMP)  ; LAB_004dd3e5
    CMP EAX,dword ptr [EBX + 0xc28c]    ; 004dd5d0
    JZ 0x004dd3e5                       ; 004dd5d6
        ;   XREF to: 004dd3e5 (CONDITIONAL_JUMP)  ; LAB_004dd3e5
    CMP EAX,dword ptr [EBX + 0xc290]    ; 004dd5dc
    JZ 0x004dd3e5                       ; 004dd5e2
        ;   XREF to: 004dd3e5 (CONDITIONAL_JUMP)  ; LAB_004dd3e5
    JMP 0x004dd543                      ; 004dd5e8
        ;   XREF to: 004dd543 (UNCONDITIONAL_JUMP)  ; LAB_004dd543
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004dd5ed
        ;   Label: LAB_004dd5ed
    JMP 0x004dd533                      ; 004dd5f4
        ;   XREF to: 004dd533 (UNCONDITIONAL_JUMP)  ; LAB_004dd533
    FLD float ptr [ESI + 0x4]           ; 004dd5f9
        ;   Label: LAB_004dd5f9
    FLD ST0                             ; 004dd5fc
    FMUL double ptr [0x005e39ec]        ; 004dd5fe | DAT_005e39ec
    FSTP ST1                            ; 004dd604
    FSTP float ptr [ESI + 0x4]          ; 004dd606
    ADD ESP,0xc                         ; 004dd609
    POP EBP                             ; 004dd60c
    POP EDI                             ; 004dd60d
    POP ESI                             ; 004dd60e
    POP EBX                             ; 004dd60f
    RET                                 ; 004dd610
    FLD float ptr [ESI + 0x4]           ; 004dd611
        ;   Label: LAB_004dd611
    FLD ST0                             ; 004dd614
    FMUL double ptr [0x005e39e4]        ; 004dd616 | DAT_005e39e4
    FSTP ST1                            ; 004dd61c
    FSTP float ptr [ESI + 0x4]          ; 004dd61e
    ADD ESP,0xc                         ; 004dd621
    POP EBP                             ; 004dd624
    POP EDI                             ; 004dd625
    POP ESI                             ; 004dd626
    POP EBX                             ; 004dd627
    RET                                 ; 004dd628

