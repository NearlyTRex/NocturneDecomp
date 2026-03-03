; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_archive_FUN_004a9660(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; XREF[27]:
;   core_armour.cpp_CArmour_archive_FUN_004123a0 at 004123a7
;   core_batcreat.cpp_CBatCreature_archive_FUN_00415d70 at 00415d77
;   core_batman.cpp_CBatman_archive_FUN_00417580 at 00417587
;   core_beast.cpp_CBeast_archive_FUN_00418330 at 00418337
;   core_biggs.cpp_CBiggs_archive_FUN_00418ac0 at 00418ac7
;   core_boneguy.cpp_CBoneGuy_archive_FUN_0041d270 at 0041d27c
;   core_bride.cpp_CBride_archive_FUN_00424560 at 00424566
;   core_bugs.cpp_CBugs_archive_FUN_004254f0 at 004254f9
;   core_cow.cpp_CZombieCow_archive_FUN_00444840 at 00444846
;   core_dog.cpp_CZombieDog_archive_FUN_0047f7b0 at 0047f7b6
;   ... and 17 more
;
; Referenced Globals:
;   TerminatedCString s_speed_0062430d
;   TerminatedCString s_hitPoints_00624313
;   TerminatedCString s_poolMe_0062431d
;   TerminatedCString s_speed_00624324
;   TerminatedCString s_poolMe_0062432a
;   TerminatedCString s_randomizeMe_00624331
;   TerminatedCString s_scriptVictim_0062433d
;   TerminatedCString s_patrolNamePattern_0062434a
;   TerminatedCString s_guardDistance_0062435c
;   TerminatedCString s_victimHeight_0062436a
;   TerminatedCString s_victim_00624377
;   int g_CEnemyClassVersion = 0xa
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;   core_charactr.cpp_CCharacter_archive_FUN_004283a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9660
        ;   Label: core_enemy.cpp_CEnemy_archive_FUN_004a9660
    PUSH ESI                            ; 004a9661
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a9662
    MOV EDX,dword ptr [0x0067937c]      ; 004a9666 | g_CEnemyClassVersion
    LEA ESI,[EBX + 0xbe24]              ; 004a966c
    CMP EDX,0x4                         ; 004a9672
    JGE 0x004a96d0                      ; 004a9675
        ;   XREF to: 004a96d0 (CONDITIONAL_JUMP)  ; LAB_004a96d0
    PUSH EBX                            ; 004a9677
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 004a9678
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    MOV ECX,dword ptr [0x0067937c]      ; 004a967d | g_CEnemyClassVersion
    ADD ESP,0x4                         ; 004a9683
    CMP ECX,0x2                         ; 004a9686
    JL 0x004a9699                       ; 004a9689
        ;   XREF to: 004a9699 (CONDITIONAL_JUMP)  ; LAB_004a9699
    PUSH 0x62430d                       ; 004a968b | = "speed"
    PUSH ESI                            ; 004a9690
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004a9691
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a9696
    CMP dword ptr [0x0067937c],0x3      ; 004a9699 | g_CEnemyClassVersion
        ;   Label: LAB_004a9699
    JGE 0x004a96a5                      ; 004a96a0
        ;   XREF to: 004a96a5 (CONDITIONAL_JUMP)  ; LAB_004a96a5
    POP ESI                             ; 004a96a2
        ;   Label: LAB_004a96a2
    POP EBX                             ; 004a96a3
    RET                                 ; 004a96a4
    PUSH 0x624313                       ; 004a96a5 | = "hitPoints"
        ;   Label: LAB_004a96a5
    LEA ESI,[EBX + 0x243c]              ; 004a96aa
    PUSH ESI                            ; 004a96b0
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004a96b1
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a96b6
    PUSH 0x62431d                       ; 004a96b9 | = "poolMe"
    ADD EBX,0xbe28                      ; 004a96be
    PUSH EBX                            ; 004a96c4
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004a96c5
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a96ca
    POP ESI                             ; 004a96cd
    POP EBX                             ; 004a96ce
    RET                                 ; 004a96cf
    PUSH EBX                            ; 004a96d0
        ;   Label: LAB_004a96d0
    CALL core_charactr.cpp_CCharacter_archive_FUN_004283a0 ; 004a96d1
        ;   XREF to: 004283a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_004283a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004a96d6
    PUSH 0x624324                       ; 004a96d9 | = "speed"
    PUSH ESI                            ; 004a96de
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004a96df
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a96e4
    PUSH 0x62432a                       ; 004a96e7 | = "poolMe"
    LEA ESI,[EBX + 0xbe28]              ; 004a96ec
    PUSH ESI                            ; 004a96f2
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004a96f3
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV ECX,dword ptr [0x0067937c]      ; 004a96f8 | g_CEnemyClassVersion
    ADD ESP,0x8                         ; 004a96fe
    CMP ECX,0x5                         ; 004a9701
    JL 0x004a971a                       ; 004a9704
        ;   XREF to: 004a971a (CONDITIONAL_JUMP)  ; LAB_004a971a
    PUSH 0x624331                       ; 004a9706 | = "randomizeMe"
    LEA ESI,[EBX + 0xbe2c]              ; 004a970b
    PUSH ESI                            ; 004a9711
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004a9712
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a9717
    CMP dword ptr [0x0067937c],0x6      ; 004a971a | g_CEnemyClassVersion
        ;   Label: LAB_004a971a
    JL 0x004a9737                       ; 004a9721
        ;   XREF to: 004a9737 (CONDITIONAL_JUMP)  ; LAB_004a9737
    PUSH 0x62433d                       ; 004a9723 | = "scriptVictim"
    LEA ESI,[EBX + 0xbeb4]              ; 004a9728
    PUSH ESI                            ; 004a972e
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004a972f
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a9734
    CMP dword ptr [0x0067937c],0x7      ; 004a9737 | g_CEnemyClassVersion
        ;   Label: LAB_004a9737
    JL 0x004a9754                       ; 004a973e
        ;   XREF to: 004a9754 (CONDITIONAL_JUMP)  ; LAB_004a9754
    PUSH 0x62434a                       ; 004a9740 | = "patrolNamePattern"
    LEA ESI,[EBX + 0xbe48]              ; 004a9745
    PUSH ESI                            ; 004a974b
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 004a974c
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004a9751
    CMP dword ptr [0x0067937c],0x8      ; 004a9754 | g_CEnemyClassVersion
        ;   Label: LAB_004a9754
    JL 0x004a9771                       ; 004a975b
        ;   XREF to: 004a9771 (CONDITIONAL_JUMP)  ; LAB_004a9771
    PUSH 0x62435c                       ; 004a975d | = "guardDistance"
    LEA ESI,[EBX + 0xbe34]              ; 004a9762
    PUSH ESI                            ; 004a9768
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004a9769
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a976e
    CMP dword ptr [0x0067937c],0x9      ; 004a9771 | g_CEnemyClassVersion
        ;   Label: LAB_004a9771
    JL 0x004a978e                       ; 004a9778
        ;   XREF to: 004a978e (CONDITIONAL_JUMP)  ; LAB_004a978e
    PUSH 0x62436a                       ; 004a977a | = "victimHeight"
    LEA ESI,[EBX + 0xbeb0]              ; 004a977f
    PUSH ESI                            ; 004a9785
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004a9786
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a978b
    CMP dword ptr [0x0067937c],0xa      ; 004a978e | g_CEnemyClassVersion
        ;   Label: LAB_004a978e
    JL 0x004a96a2                       ; 004a9795
        ;   XREF to: 004a96a2 (CONDITIONAL_JUMP)  ; LAB_004a96a2
    PUSH 0x624377                       ; 004a979b | = "victim"
    ADD EBX,0xbe3c                      ; 004a97a0
    PUSH EBX                            ; 004a97a6
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004a97a7
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a97ac
    POP ESI                             ; 004a97af
    POP EBX                             ; 004a97b0
    RET                                 ; 004a97b1

