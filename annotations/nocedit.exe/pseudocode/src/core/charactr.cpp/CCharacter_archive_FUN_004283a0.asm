; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_archive_FUN_004283a0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_enemy.cpp_CEnemy_archive_FUN_004a9660 at 004a96d1
;   core_hero.cpp_CHero_archive_FUN_004f2610 at 004f26a3
;   core_npc.cpp_CNPC_archive_FUN_00544ba0 at 00544bb0
;
; Referenced Globals:
;   TerminatedCString s_hitPoints_00616f4e
;   TerminatedCString s_numCarryHands_00616f58
;   TerminatedCString s_carry_hand_00616f66
;   TerminatedCString s_carry_actor_00616f71
;   TerminatedCString s_numCarryHands_00616f7d
;   TerminatedCString s_carry_hand_00616f8b
;   TerminatedCString s_carry_actor_00616f96
;   TerminatedCString s_talkToMeEvent_00616fa2
;   TerminatedCString s_grabbedBy_00616fb0
;   TerminatedCString s_grabbedType_00616fba
;   TerminatedCString s_clothList_00616fc6
;   TerminatedCString s_sizeScale_00616fd0
;   TerminatedCString s_healthBarMode_00616fda
;   TerminatedCString s_descriptiveName_00616fe8
;   TerminatedCString s_maxHitPoints_00616ff8
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveClothList_FUN_0040be60
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveLocalizedString_FUN_0040b6e0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004283a0
        ;   Label: core_charactr.cpp_CCharacter_archive_FUN_004283a0
    PUSH ESI                            ; 004283a1
    PUSH EDI                            ; 004283a2
    PUSH EBP                            ; 004283a3
    SUB ESP,0x10                        ; 004283a4
    MOV EBX,dword ptr [ESP + 0x24]      ; 004283a7
    PUSH EBX                            ; 004283ab
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 004283ac
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004283b1
    PUSH 0x616f4e                       ; 004283b4 | = "hitPoints"
    LEA EAX,[EBX + 0x243c]              ; 004283b9
    PUSH EAX                            ; 004283bf
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004283c0
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x0066e770]      ; 004283c5 | g_CCharacterClassVersion
    ADD ESP,0x8                         ; 004283cb
    CMP EDX,0x2                         ; 004283ce
    JL 0x00428450                       ; 004283d1
        ;   XREF to: 00428450 (CONDITIONAL_JUMP)  ; LAB_00428450
    CMP dword ptr [0x00822038],0x1      ; 004283d7 | g_ActorReadingMode
    JZ 0x004284f0                       ; 004283de
        ;   XREF to: 004284f0 (CONDITIONAL_JUMP)  ; LAB_004284f0
    XOR ESI,ESI                         ; 004283e4
    MOV EAX,EBX                         ; 004283e6
    MOV dword ptr [ESP],ESI             ; 004283e8
    LEA EDX,[EBX + 0x88]                ; 004283eb
    MOV dword ptr [ESP + 0xc],ESI       ; 004283f1
    CMP dword ptr [EAX + 0x24b4],0x0    ; 004283f5
        ;   Label: LAB_004283f5
    JZ 0x00428402                       ; 004283fc
        ;   XREF to: 00428402 (CONDITIONAL_JUMP)  ; LAB_00428402
    INC dword ptr [ESP + 0xc]           ; 004283fe
    ADD EAX,0x44                        ; 00428402
        ;   Label: LAB_00428402
    CMP EAX,EDX                         ; 00428405
    JNZ 0x004283f5                      ; 00428407
        ;   XREF to: 004283f5 (CONDITIONAL_JUMP)  ; LAB_004283f5
    PUSH 0x616f7d                       ; 00428409 | = "numCarryHands"
    LEA EAX,[ESP + 0x10]                ; 0042840e
    MOV EDI,0x2                         ; 00428412
    PUSH EAX                            ; 00428417
    XOR EBP,EBP                         ; 00428418
    MOV dword ptr [ESP + 0x8],EDI       ; 0042841a
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0042841e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00428423
    LEA ESI,[EBX + 0x24ac]              ; 00428426
    MOV dword ptr [ESP],EBP             ; 0042842c
    IMUL EAX,dword ptr [ESP],0x44       ; 0042842f
        ;   Label: LAB_0042842f
    CMP dword ptr [EBX + EAX*0x1 + 0x24b4],0x0 ; 00428433
    JNZ 0x00428557                      ; 0042843b
        ;   XREF to: 00428557 (CONDITIONAL_JUMP)  ; LAB_00428557
    MOV EBP,dword ptr [ESP]             ; 00428441
        ;   Label: LAB_00428441
    INC EBP                             ; 00428444
    MOV dword ptr [ESP],EBP             ; 00428445
    CMP EBP,0x2                         ; 00428448
    JL 0x0042842f                       ; 0042844b
        ;   XREF to: 0042842f (CONDITIONAL_JUMP)  ; LAB_0042842f
    LEA EAX,[EAX]                       ; 0042844d
    CMP dword ptr [0x0066e770],0x3      ; 00428450 | g_CCharacterClassVersion
        ;   Label: LAB_00428450
    JL 0x0042846d                       ; 00428457
        ;   XREF to: 0042846d (CONDITIONAL_JUMP)  ; LAB_0042846d
    PUSH 0x616fa2                       ; 00428459 | = "talkToMeEvent"
    LEA EAX,[EBX + 0x2534]              ; 0042845e
    PUSH EAX                            ; 00428464
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 00428465
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0042846a
    CMP dword ptr [0x0066e770],0x4      ; 0042846d | g_CCharacterClassVersion
        ;   Label: LAB_0042846d
    JL 0x004284b2                       ; 00428474
        ;   XREF to: 004284b2 (CONDITIONAL_JUMP)  ; LAB_004284b2
    PUSH 0x616fb0                       ; 00428476 | = "grabbedBy"
    LEA EAX,[EBX + 0x2598]              ; 0042847b
    PUSH EAX                            ; 00428481
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 00428482
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00428487
    PUSH 0x616fba                       ; 0042848a | = "grabbedType"
    LEA EAX,[EBX + 0x259c]              ; 0042848f
    PUSH EAX                            ; 00428495
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00428496
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042849b
    PUSH 0x616fc6                       ; 0042849e | = "clothList"
    LEA EAX,[EBX + 0x2a94]              ; 004284a3
    PUSH EAX                            ; 004284a9
    CALL core_actor.cpp_archiveClothList_FUN_0040be60 ; 004284aa
        ;   XREF to: 0040be60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveClothList_FUN_0040be60(CClothList * cloth_list, char * property_name)
    ADD ESP,0x8                         ; 004284af
    CMP dword ptr [0x0066e770],0x5      ; 004284b2 | g_CCharacterClassVersion
        ;   Label: LAB_004284b2
    JL 0x004284cf                       ; 004284b9
        ;   XREF to: 004284cf (CONDITIONAL_JUMP)  ; LAB_004284cf
    PUSH 0x616fd0                       ; 004284bb | = "sizeScale"
    LEA EAX,[EBX + 0x261c]              ; 004284c0
    PUSH EAX                            ; 004284c6
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004284c7
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004284cc
    CMP dword ptr [0x0066e770],0x6      ; 004284cf | g_CCharacterClassVersion
        ;   Label: LAB_004284cf
    JGE 0x00428585                      ; 004284d6
        ;   XREF to: 00428585 (CONDITIONAL_JUMP)  ; LAB_00428585
    MOV EAX,dword ptr [EBX + 0x243c]    ; 004284dc
    MOV dword ptr [EBX + 0x2440],EAX    ; 004284e2
    ADD ESP,0x10                        ; 004284e8
    POP EBP                             ; 004284eb
    POP EDI                             ; 004284ec
    POP ESI                             ; 004284ed
    POP EBX                             ; 004284ee
    RET                                 ; 004284ef
    PUSH 0x616f58                       ; 004284f0 | = "numCarryHands"
        ;   Label: LAB_004284f0
    LEA EAX,[ESP + 0x8]                 ; 004284f5
    PUSH EAX                            ; 004284f9
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004284fa
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004284ff
    XOR EBP,EBP                         ; 00428502
    MOV EAX,dword ptr [ESP + 0x4]       ; 00428504
    MOV dword ptr [ESP],EBP             ; 00428508
    TEST EAX,EAX                        ; 0042850b
    JLE 0x00428450                      ; 0042850d
        ;   XREF to: 00428450 (CONDITIONAL_JUMP)  ; LAB_00428450
    LEA ESI,[EBX + 0x24ac]              ; 00428513
    PUSH 0x616f66                       ; 00428519 | = "carry hand"
        ;   Label: LAB_00428519
    LEA EAX,[ESP + 0xc]                 ; 0042851e
    PUSH EAX                            ; 00428522
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00428523
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00428528
    IMUL EAX,dword ptr [ESP + 0x8],0x44 ; 0042852b
    ADD EAX,ESI                         ; 00428530
    PUSH 0x616f71                       ; 00428532 | = "carry actor"
    ADD EAX,0x8                         ; 00428537
    PUSH EAX                            ; 0042853a
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 0042853b
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00428540
    MOV ECX,dword ptr [ESP]             ; 00428543
    INC ECX                             ; 00428546
    MOV EDI,dword ptr [ESP + 0x4]       ; 00428547
    MOV dword ptr [ESP],ECX             ; 0042854b
    CMP ECX,EDI                         ; 0042854e
    JL 0x00428519                       ; 00428550
        ;   XREF to: 00428519 (CONDITIONAL_JUMP)  ; LAB_00428519
    JMP 0x00428450                      ; 00428552
        ;   XREF to: 00428450 (UNCONDITIONAL_JUMP)  ; LAB_00428450
    PUSH 0x616f8b                       ; 00428557 | = "carry hand"
        ;   Label: LAB_00428557
    LEA EAX,[ESP + 0x4]                 ; 0042855c
    PUSH EAX                            ; 00428560
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00428561
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00428566
    IMUL EAX,dword ptr [ESP],0x44       ; 00428569
    ADD EAX,ESI                         ; 0042856d
    PUSH 0x616f96                       ; 0042856f | = "carry actor"
    ADD EAX,0x8                         ; 00428574
    PUSH EAX                            ; 00428577
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 00428578
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042857d
    JMP 0x00428441                      ; 00428580
        ;   XREF to: 00428441 (UNCONDITIONAL_JUMP)  ; LAB_00428441
    PUSH 0x616fda                       ; 00428585 | = "healthBarMode"
        ;   Label: LAB_00428585
    LEA EAX,[EBX + 0x2444]              ; 0042858a
    PUSH EAX                            ; 00428590
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00428591
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00428596
    PUSH 0x616fe8                       ; 00428599 | = "descriptiveName"
    LEA EAX,[EBX + 0x2448]              ; 0042859e
    PUSH EAX                            ; 004285a4
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040b6e0 ; 004285a5
        ;   XREF to: 0040b6e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040b6e0(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 004285aa
    PUSH 0x616ff8                       ; 004285ad | = "maxHitPoints"
    ADD EBX,0x2440                      ; 004285b2
    PUSH EBX                            ; 004285b8
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004285b9
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004285be
    ADD ESP,0x10                        ; 004285c1
    POP EBP                             ; 004285c4
    POP EDI                             ; 004285c5
    POP ESI                             ; 004285c6
    POP EBX                             ; 004285c7
    RET                                 ; 004285c8

