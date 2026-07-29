; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_processDismemberment_FUN_004dc2d0(CMobster *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_mobster.cpp_CMobster_processDamage_FUN_004dc690 at 004dc6bc
;
; Referenced Globals:
;   undefined1* switchdataD_004dc2b4 = 004dc310
;   TerminatedCString s_limb_wav_0058a451
;   double DOUBLE_0058a461 = 0.333000000000000
;   double DOUBLE_0058a469 = 0.666000000000000
;   double DOUBLE_0058a471 = 7
;   double DOUBLE_0058a479 = 0.5
;   double DOUBLE_0058a481 = 2.5
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77600
;   undefined4 DAT_01c777cc
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
;   core_bodypart.cpp_createBodyPart_FUN_00415b30
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc2d0
        ;   Label: core_mobster.cpp_CMobster_processDismemberment_FUN_004dc2d0
    PUSH ESI                            ; 004dc2d1
    PUSH EDI                            ; 004dc2d2
    PUSH EBP                            ; 004dc2d3
    MOV EBP,ESP                         ; 004dc2d4
    SUB ESP,0x1c                        ; 004dc2d6
    AND ESP,0xfffffff8                  ; 004dc2d9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004dc2dc
    MOV ESI,dword ptr [EBP + 0x18]      ; 004dc2df
    FLD float ptr [ESI + 0x2c]          ; 004dc2e2
    FLDZ                                ; 004dc2e5
    FCOMPP                              ; 004dc2e7
    FNSTSW AX                           ; 004dc2e9
    SAHF                                ; 004dc2eb
    JNC 0x004dc318                      ; 004dc2ec
        ;   XREF to: 004dc318 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004dc2ee
    JNZ 0x004dc318                      ; 004dc2f1
        ;   XREF to: 004dc318 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004dc2f3
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 004dc2f8
    MOV EDI,0x6                         ; 004dc2fa
    SAR EDX,0x1f                        ; 004dc2ff
    IDIV EDI                            ; 004dc302
    CMP EDX,0x5                         ; 004dc304
    JA 0x004dc318                       ; 004dc307
        ;   XREF to: 004dc318 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4dc2b4]  ; 004dc309 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbdc8]    ; 004dc310
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004dc316
        ;   Label: LAB_004dc316
    MOV ECX,dword ptr [EBX + 0xbdc8]    ; 004dc318
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004dc31e
    CMP EAX,ECX                         ; 004dc320
    JNZ 0x004dc5d2                      ; 004dc322
        ;   XREF to: 004dc5d2 (CONDITIONAL_JUMP)  ; LAB_004dc5d2
    MOV ECX,dword ptr [EBX + 0xbdec]    ; 004dc328
        ;   Label: LAB_004dc328
    CMP ECX,dword ptr [ESI]             ; 004dc32e
    JNZ 0x004dc363                      ; 004dc330
        ;   XREF to: 004dc363 (CONDITIONAL_JUMP)  ; LAB_004dc363
    PUSH 0x3f800000                     ; 004dc332
    PUSH 0x0                            ; 004dc337
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004dc339
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x20],EAX      ; 004dc33e
    FLD float ptr [ESP + 0x20]          ; 004dc342
    ADD ESP,0x8                         ; 004dc346
    FST double ptr [ESP]                ; 004dc349
    FCOMP double ptr [0x0058a461]       ; 004dc34c | DOUBLE_0058a461
    FNSTSW AX                           ; 004dc352
    SAHF                                ; 004dc354
    JNC 0x004dc613                      ; 004dc355
        ;   XREF to: 004dc613 (CONDITIONAL_JUMP)  ; LAB_004dc613
    MOV EAX,dword ptr [EBX + 0xbdc8]    ; 004dc35b
    MOV dword ptr [ESI],EAX             ; 004dc361
        ;   Label: LAB_004dc361
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004dc363
        ;   Label: LAB_004dc363
    MOV EDI,dword ptr [EBX + 0xbdf0]    ; 004dc366
    MOV dword ptr [ESP + 0x14],EAX      ; 004dc36c
    CMP EDI,dword ptr [ESI]             ; 004dc370
    JNZ 0x004dc37c                      ; 004dc372
        ;   XREF to: 004dc37c (CONDITIONAL_JUMP)  ; LAB_004dc37c
    MOV dword ptr [ESP + 0x14],0x3d4ccccd ; 004dc374
    MOV EDX,dword ptr [EBX + 0xbdec]    ; 004dc37c
        ;   Label: LAB_004dc37c
    CMP EDX,dword ptr [ESI]             ; 004dc382
    JNZ 0x004dc38e                      ; 004dc384
        ;   XREF to: 004dc38e (CONDITIONAL_JUMP)  ; LAB_004dc38e
    MOV dword ptr [ESP + 0x14],0x3d75c28f ; 004dc386
    MOV EAX,[0x005b9354]                ; 004dc38e | DAT_005b9354
        ;   Label: LAB_004dc38e
    CMP dword ptr [EAX + 0x1e0],0x0     ; 004dc393 | DAT_01c777cc
    JZ 0x004dc3a4                       ; 004dc39a
        ;   XREF to: 004dc3a4 (CONDITIONAL_JUMP)  ; LAB_004dc3a4
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 004dc39c
    MOV EAX,[0x005b9354]                ; 004dc3a4 | DAT_005b9354
        ;   Label: LAB_004dc3a4
    MOV EDX,dword ptr [EAX + 0x14]      ; 004dc3a9 | DAT_01c77600
    TEST EDX,EDX                        ; 004dc3ac
    JNZ 0x004dc3b4                      ; 004dc3ae
        ;   XREF to: 004dc3b4 (CONDITIONAL_JUMP)  ; LAB_004dc3b4
    MOV dword ptr [ESP + 0x14],EDX      ; 004dc3b0
    PUSH dword ptr [ESP + 0x14]         ; 004dc3b4
        ;   Label: LAB_004dc3b4
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004dc3b8
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 004dc3bd
    TEST EAX,EAX                        ; 004dc3c0
    JZ 0x004dc56a                       ; 004dc3c2
        ;   XREF to: 004dc56a (CONDITIONAL_JUMP)  ; LAB_004dc56a
    PUSH 0x0                            ; 004dc3c8
    PUSH 0x0                            ; 004dc3ca
    PUSH 0x0                            ; 004dc3cc
    PUSH EBX                            ; 004dc3ce
    LEA EAX,[ESI + 0xc]                 ; 004dc3cf
    PUSH EAX                            ; 004dc3d2
    LEA EAX,[EBX + 0x30]                ; 004dc3d3
    PUSH EAX                            ; 004dc3d6
    LEA EAX,[EBX + 0x20]                ; 004dc3d7
    PUSH EAX                            ; 004dc3da
    CALL core_bodypart.cpp_createBodyPart_FUN_00415b30 ; 004dc3db
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00415b30(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004dc3e0
    MOV EDI,EAX                         ; 004dc3e3
    PUSH 0x0                            ; 004dc3e5
    MOV dword ptr [ESP + 0x14],EAX      ; 004dc3e7
    MOV EAX,dword ptr [ESI]             ; 004dc3eb
    PUSH EAX                            ; 004dc3ed
    PUSH EDI                            ; 004dc3ee
    PUSH EBX                            ; 004dc3ef
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 004dc3f0
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004dc3f5
    MOV EDX,dword ptr [EBX + 0xbdc8]    ; 004dc3f7
    ADD ESP,0x10                        ; 004dc3fd
    CMP EAX,EDX                         ; 004dc400
    JNZ 0x004dc417                      ; 004dc402
        ;   XREF to: 004dc417 (CONDITIONAL_JUMP)  ; LAB_004dc417
    PUSH 0x0                            ; 004dc404
    MOV ECX,dword ptr [EBX + 0xbdcc]    ; 004dc406
    PUSH ECX                            ; 004dc40c
    PUSH EDI                            ; 004dc40d
    PUSH EBX                            ; 004dc40e
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 004dc40f
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004dc414
    MOV EDI,dword ptr [EBX + 0xbdd0]    ; 004dc417
        ;   Label: LAB_004dc417
    CMP EDI,dword ptr [ESI]             ; 004dc41d
    JNZ 0x004dc438                      ; 004dc41f
        ;   XREF to: 004dc438 (CONDITIONAL_JUMP)  ; LAB_004dc438
    PUSH 0x0                            ; 004dc421
    MOV EAX,dword ptr [EBX + 0xbdd4]    ; 004dc423
    PUSH EAX                            ; 004dc429
    MOV EDX,dword ptr [ESP + 0x18]      ; 004dc42a
    PUSH EDX                            ; 004dc42e
    PUSH EBX                            ; 004dc42f
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 004dc430
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004dc435
    MOV ECX,dword ptr [EBX + 0xbdec]    ; 004dc438
        ;   Label: LAB_004dc438
    CMP ECX,dword ptr [ESI]             ; 004dc43e
    JNZ 0x004dc4d0                      ; 004dc440
        ;   XREF to: 004dc4d0 (CONDITIONAL_JUMP)  ; LAB_004dc4d0
    PUSH 0x0                            ; 004dc446
    LEA EDI,[ESI + 0xc]                 ; 004dc448
    PUSH EDI                            ; 004dc44b
    MOV EAX,dword ptr [EBX + 0xbdd0]    ; 004dc44c
    PUSH EAX                            ; 004dc452
    PUSH EBX                            ; 004dc453
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004dc454
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004dc459
    PUSH 0x0                            ; 004dc45c
    PUSH EDI                            ; 004dc45e
    MOV EDX,dword ptr [EBX + 0xbdd4]    ; 004dc45f
    PUSH EDX                            ; 004dc465
    PUSH EBX                            ; 004dc466
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004dc467
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004dc46c
    PUSH 0x0                            ; 004dc46f
    PUSH EDI                            ; 004dc471
    MOV ECX,dword ptr [EBX + 0xbdc8]    ; 004dc472
    PUSH ECX                            ; 004dc478
    PUSH EBX                            ; 004dc479
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004dc47a
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004dc47f
    PUSH 0x0                            ; 004dc482
    PUSH EDI                            ; 004dc484
    MOV EAX,dword ptr [EBX + 0xbdcc]    ; 004dc485
    PUSH EAX                            ; 004dc48b
    PUSH EBX                            ; 004dc48c
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004dc48d
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004dc492
    PUSH 0x0                            ; 004dc495
    PUSH EDI                            ; 004dc497
    MOV EDX,dword ptr [EBX + 0xbdf0]    ; 004dc498
    PUSH EDX                            ; 004dc49e
    PUSH EBX                            ; 004dc49f
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 004dc4a0
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004dc4a5
    PUSH 0x0                            ; 004dc4a8
    PUSH 0x1                            ; 004dc4aa
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004dc4ac
    PUSH EBX                            ; 004dc4b2
    CALL dword ptr [EAX + 0x120]        ; 004dc4b3
    ADD ESP,0xc                         ; 004dc4b9
    PUSH 0x0                            ; 004dc4bc
    PUSH 0x0                            ; 004dc4be
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004dc4c0
    PUSH EBX                            ; 004dc4c6
    CALL dword ptr [EAX + 0x120]        ; 004dc4c7
    ADD ESP,0xc                         ; 004dc4cd
    PUSH 0x58a451                       ; 004dc4d0 | = "limb?.wav"
        ;   Label: LAB_004dc4d0
    PUSH EBX                            ; 004dc4d5
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490 ; 004dc4d6
        ;   XREF to: 0042b490 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 004dc4db
    MOV ECX,dword ptr [ESP + 0x10]      ; 004dc4de
    PUSH ECX                            ; 004dc4e2
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 ; 004dc4e3
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xbdf0]    ; 004dc4e8
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2290] ; 004dc4ee
    ADD ESP,0x4                         ; 004dc4f5
    TEST EDI,EDI                        ; 004dc4f8
    JZ 0x004dc630                       ; 004dc4fa
        ;   XREF to: 004dc630 (CONDITIONAL_JUMP)  ; LAB_004dc630
    FLD float ptr [ESI + 0x8]           ; 004dc500
        ;   Label: LAB_004dc500
    FLD ST0                             ; 004dc503
    FMUL double ptr [0x0058a471]        ; 004dc505 | DOUBLE_0058a471
    MOV EAX,dword ptr [ESI]             ; 004dc50b
    FSTP ST1                            ; 004dc50d
    FSTP float ptr [ESI + 0x8]          ; 004dc50f
    CMP EAX,dword ptr [EBX + 0xbdd0]    ; 004dc512
    JNZ 0x004dc63c                      ; 004dc518
        ;   XREF to: 004dc63c (CONDITIONAL_JUMP)  ; LAB_004dc63c
    PUSH 0x0                            ; 004dc51e
        ;   Label: LAB_004dc51e
    PUSH 0x1                            ; 004dc520
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004dc522
    PUSH EBX                            ; 004dc528
    CALL dword ptr [EAX + 0x120]        ; 004dc529
    ADD ESP,0xc                         ; 004dc52f
    PUSH 0x0                            ; 004dc532
    PUSH 0x0                            ; 004dc534
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004dc536
    PUSH EBX                            ; 004dc53c
    CALL dword ptr [EAX + 0x120]        ; 004dc53d
    ADD ESP,0xc                         ; 004dc543
    MOV EDI,dword ptr [EBX + 0xbdc8]    ; 004dc546
        ;   Label: LAB_004dc546
    MOV EAX,dword ptr [ESI]             ; 004dc54c
    CMP EAX,EDI                         ; 004dc54e
    JNZ 0x004dc64d                      ; 004dc550
        ;   XREF to: 004dc64d (CONDITIONAL_JUMP)  ; LAB_004dc64d
    PUSH 0x0                            ; 004dc556
        ;   Label: LAB_004dc556
    PUSH 0x0                            ; 004dc558
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004dc55a
    PUSH EBX                            ; 004dc560
    CALL dword ptr [EAX + 0x120]        ; 004dc561
    ADD ESP,0xc                         ; 004dc567
    MOV ECX,dword ptr [EBX + 0xbdf0]    ; 004dc56a
        ;   Label: LAB_004dc56a
    MOV EAX,dword ptr [ESI]             ; 004dc570
    CMP EAX,ECX                         ; 004dc572
    JZ 0x004dc65e                       ; 004dc574
        ;   XREF to: 004dc65e (CONDITIONAL_JUMP)  ; LAB_004dc65e
    CMP EAX,dword ptr [EBX + 0xbde8]    ; 004dc57a
    JZ 0x004dc58e                       ; 004dc580
        ;   XREF to: 004dc58e (CONDITIONAL_JUMP)  ; LAB_004dc58e
    CMP EAX,dword ptr [EBX + 0xbdec]    ; 004dc582
    JNZ 0x004dc675                      ; 004dc588
        ;   XREF to: 004dc675 (CONDITIONAL_JUMP)  ; LAB_004dc675
    MOV EAX,dword ptr [ESI + 0x4]       ; 004dc58e
        ;   Label: LAB_004dc58e
    MOV dword ptr [ESI + 0x4],EAX       ; 004dc591
    MOV ESP,EBP                         ; 004dc594
    POP EBP                             ; 004dc596
    POP EDI                             ; 004dc597
    POP ESI                             ; 004dc598
    POP EBX                             ; 004dc599
    RET                                 ; 004dc59a
    MOV EAX,dword ptr [EBX + 0xbdcc]    ; 004dc59b
        ;   Label: caseD_1
    JMP 0x004dc316                      ; 004dc5a1
        ;   XREF to: 004dc316 (UNCONDITIONAL_JUMP)  ; LAB_004dc316
    MOV EAX,dword ptr [EBX + 0xbdd0]    ; 004dc5a6
        ;   Label: caseD_2
    JMP 0x004dc316                      ; 004dc5ac
        ;   XREF to: 004dc316 (UNCONDITIONAL_JUMP)  ; LAB_004dc316
    MOV EAX,dword ptr [EBX + 0xbdd4]    ; 004dc5b1
        ;   Label: caseD_3
    JMP 0x004dc316                      ; 004dc5b7
        ;   XREF to: 004dc316 (UNCONDITIONAL_JUMP)  ; LAB_004dc316
    MOV EAX,dword ptr [EBX + 0xbdf0]    ; 004dc5bc
        ;   Label: caseD_4
    JMP 0x004dc316                      ; 004dc5c2
        ;   XREF to: 004dc316 (UNCONDITIONAL_JUMP)  ; LAB_004dc316
    MOV EAX,dword ptr [EBX + 0xbdec]    ; 004dc5c7
        ;   Label: caseD_5
    JMP 0x004dc316                      ; 004dc5cd
        ;   XREF to: 004dc316 (UNCONDITIONAL_JUMP)  ; LAB_004dc316
    CMP EAX,dword ptr [EBX + 0xbdcc]    ; 004dc5d2
        ;   Label: LAB_004dc5d2
    JZ 0x004dc328                       ; 004dc5d8
        ;   XREF to: 004dc328 (CONDITIONAL_JUMP)  ; LAB_004dc328
    CMP EAX,dword ptr [EBX + 0xbdd0]    ; 004dc5de
    JZ 0x004dc328                       ; 004dc5e4
        ;   XREF to: 004dc328 (CONDITIONAL_JUMP)  ; LAB_004dc328
    CMP EAX,dword ptr [EBX + 0xbdd4]    ; 004dc5ea
    JZ 0x004dc328                       ; 004dc5f0
        ;   XREF to: 004dc328 (CONDITIONAL_JUMP)  ; LAB_004dc328
    CMP EAX,dword ptr [EBX + 0xbdec]    ; 004dc5f6
    JZ 0x004dc328                       ; 004dc5fc
        ;   XREF to: 004dc328 (CONDITIONAL_JUMP)  ; LAB_004dc328
    CMP EAX,dword ptr [EBX + 0xbdf0]    ; 004dc602
    JZ 0x004dc328                       ; 004dc608
        ;   XREF to: 004dc328 (CONDITIONAL_JUMP)  ; LAB_004dc328
    JMP 0x004dc56a                      ; 004dc60e
        ;   XREF to: 004dc56a (UNCONDITIONAL_JUMP)  ; LAB_004dc56a
    FLD double ptr [ESP]                ; 004dc613
        ;   Label: LAB_004dc613
    FCOMP double ptr [0x0058a469]       ; 004dc616 | DOUBLE_0058a469
    FNSTSW AX                           ; 004dc61c
    SAHF                                ; 004dc61e
    JNC 0x004dc363                      ; 004dc61f
        ;   XREF to: 004dc363 (CONDITIONAL_JUMP)  ; LAB_004dc363
    MOV EAX,dword ptr [EBX + 0xbdd0]    ; 004dc625
    JMP 0x004dc361                      ; 004dc62b
        ;   XREF to: 004dc361 (UNCONDITIONAL_JUMP)  ; LAB_004dc361
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004dc630
        ;   Label: LAB_004dc630
    JMP 0x004dc500                      ; 004dc637
        ;   XREF to: 004dc500 (UNCONDITIONAL_JUMP)  ; LAB_004dc500
    CMP EAX,dword ptr [EBX + 0xbdd4]    ; 004dc63c
        ;   Label: LAB_004dc63c
    JZ 0x004dc51e                       ; 004dc642
        ;   XREF to: 004dc51e (CONDITIONAL_JUMP)  ; LAB_004dc51e
    JMP 0x004dc546                      ; 004dc648
        ;   XREF to: 004dc546 (UNCONDITIONAL_JUMP)  ; LAB_004dc546
    CMP EAX,dword ptr [EBX + 0xbdcc]    ; 004dc64d
        ;   Label: LAB_004dc64d
    JZ 0x004dc556                       ; 004dc653
        ;   XREF to: 004dc556 (CONDITIONAL_JUMP)  ; LAB_004dc556
    JMP 0x004dc56a                      ; 004dc659
        ;   XREF to: 004dc56a (UNCONDITIONAL_JUMP)  ; LAB_004dc56a
    FLD float ptr [ESI + 0x4]           ; 004dc65e
        ;   Label: LAB_004dc65e
    FLD ST0                             ; 004dc661
    FMUL double ptr [0x0058a481]        ; 004dc663 | DOUBLE_0058a481
    FSTP ST1                            ; 004dc669
    FSTP float ptr [ESI + 0x4]          ; 004dc66b
    MOV ESP,EBP                         ; 004dc66e
    POP EBP                             ; 004dc670
    POP EDI                             ; 004dc671
    POP ESI                             ; 004dc672
    POP EBX                             ; 004dc673
    RET                                 ; 004dc674
    FLD float ptr [ESI + 0x4]           ; 004dc675
        ;   Label: LAB_004dc675
    FLD ST0                             ; 004dc678
    FMUL double ptr [0x0058a479]        ; 004dc67a | DOUBLE_0058a479
    FSTP ST1                            ; 004dc680
    FSTP float ptr [ESI + 0x4]          ; 004dc682
    MOV ESP,EBP                         ; 004dc685
    POP EBP                             ; 004dc687
    POP EDI                             ; 004dc688
    POP ESI                             ; 004dc689
    POP EBX                             ; 004dc68a
    RET                                 ; 004dc68b

