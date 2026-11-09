; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_enemy_cpp_FUN_00489120(CDemonActor *param_1)
;
;
; XREF[29]:
;   core_baal.cpp_FUN_00597c70 at 00597c77
;   core_boneguy.cpp_CBoneGuy_archive_FUN_00419070 at 0041907c
;   core_bugs.cpp_FUN_00421960 at 00421969
;   core_carved.cpp_FUN_00428650 at 00428657
;   core_constrct.cpp_FUN_00443ca0 at 00443caa
;   core_cow.cpp_FUN_004456b0 at 004456b6
;   core_dog.cpp_FUN_00463460 at 00463466
;   core_gargoyle.cpp_FUN_004c5e50 at 004c5e57
;   core_ghoul.cpp_FUN_004c8cc0 at 004c8cc6
;   core_hecaitmx.cpp_FUN_00598590 at 00598597
;   ... and 19 more
;
; Referenced Globals:
;   TerminatedCString s_speed_005bdb82
;   TerminatedCString s_hitPoints_005bdb88
;   TerminatedCString s_poolMe_005bdb92
;   TerminatedCString s_speed_005bdb99
;   TerminatedCString s_poolMe_005bdb9f
;   TerminatedCString s_randomizeMe_005bdba6
;   TerminatedCString s_scriptVictim_005bdbb2
;   TerminatedCString s_patrolNamePattern_005bdbbf
;   TerminatedCString s_guardDistance_005bdbd1
;   TerminatedCString s_victimHeight_005bdbdf
;   TerminatedCString s_victim_005bdbec
;   TerminatedCString s_attack_damage_005bdbf3
;   TerminatedCString s_spawn_amount_005bdc01
;   TerminatedCString s_spawn_item_class_005bdc0e
;   TerminatedCString s_spawned_item_already_005bdc1f
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;   core_charactr.cpp_FUN_0042b450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489120
        ;   Label: core_enemy.cpp_FUN_00489120
    PUSH ESI                            ; 00489121
    MOV EBX,dword ptr [ESP + 0xc]       ; 00489122
    MOV EDX,dword ptr [0x005fba00]      ; 00489126 | g_CEnemyClassVersion
    LEA ESI,[EBX + 0xcdcc]              ; 0048912c
    CMP EDX,0x4                         ; 00489132
    JGE 0x0048918f                      ; 00489135
        ;   XREF to: 0048918f (CONDITIONAL_JUMP)  ; LAB_0048918f
    PUSH EBX                            ; 00489137
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 00489138
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    MOV EAX,[0x005fba00]                ; 0048913d | g_CEnemyClassVersion
    ADD ESP,0x4                         ; 00489142
    CMP EAX,0x2                         ; 00489145
    JL 0x00489158                       ; 00489148
        ;   XREF to: 00489158 (CONDITIONAL_JUMP)  ; LAB_00489158
    PUSH 0x5bdb82                       ; 0048914a | = "speed"
    PUSH ESI                            ; 0048914f
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00489150
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00489155
    CMP dword ptr [0x005fba00],0x3      ; 00489158 | g_CEnemyClassVersion
        ;   Label: LAB_00489158
    JGE 0x00489164                      ; 0048915f
        ;   XREF to: 00489164 (CONDITIONAL_JUMP)  ; LAB_00489164
    POP ESI                             ; 00489161
        ;   Label: LAB_00489161
    POP EBX                             ; 00489162
    RET                                 ; 00489163
    PUSH 0x5bdb88                       ; 00489164 | = "hitPoints"
        ;   Label: LAB_00489164
    LEA ESI,[EBX + 0x2538]              ; 00489169
    PUSH ESI                            ; 0048916f
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00489170
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00489175
    PUSH 0x5bdb92                       ; 00489178 | = "poolMe"
    ADD EBX,0xcdd0                      ; 0048917d
    PUSH EBX                            ; 00489183
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00489184
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00489189
    POP ESI                             ; 0048918c
    POP EBX                             ; 0048918d
    RET                                 ; 0048918e
    PUSH EBX                            ; 0048918f
        ;   Label: LAB_0048918f
    CALL core_charactr.cpp_FUN_0042b450 ; 00489190
        ;   XREF to: 0042b450 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b450()
    ADD ESP,0x4                         ; 00489195
    PUSH 0x5bdb99                       ; 00489198 | = "speed"
    PUSH ESI                            ; 0048919d
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0048919e
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004891a3
    PUSH 0x5bdb9f                       ; 004891a6 | = "poolMe"
    LEA ESI,[EBX + 0xcdd0]              ; 004891ab
    PUSH ESI                            ; 004891b1
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004891b2
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    MOV ECX,dword ptr [0x005fba00]      ; 004891b7 | g_CEnemyClassVersion
    ADD ESP,0x8                         ; 004891bd
    CMP ECX,0x5                         ; 004891c0
    JL 0x004891d9                       ; 004891c3
        ;   XREF to: 004891d9 (CONDITIONAL_JUMP)  ; LAB_004891d9
    PUSH 0x5bdba6                       ; 004891c5 | = "randomizeMe"
    LEA ESI,[EBX + 0xcdd4]              ; 004891ca
    PUSH ESI                            ; 004891d0
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004891d1
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004891d6
    CMP dword ptr [0x005fba00],0x6      ; 004891d9 | g_CEnemyClassVersion
        ;   Label: LAB_004891d9
    JL 0x004891f6                       ; 004891e0
        ;   XREF to: 004891f6 (CONDITIONAL_JUMP)  ; LAB_004891f6
    PUSH 0x5bdbb2                       ; 004891e2 | = "scriptVictim"
    LEA ESI,[EBX + 0xd04c]              ; 004891e7
    PUSH ESI                            ; 004891ed
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 004891ee
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 004891f3
    CMP dword ptr [0x005fba00],0x7      ; 004891f6 | g_CEnemyClassVersion
        ;   Label: LAB_004891f6
    JL 0x00489213                       ; 004891fd
        ;   XREF to: 00489213 (CONDITIONAL_JUMP)  ; LAB_00489213
    PUSH 0x5bdbbf                       ; 004891ff | = "patrolNamePattern"
    LEA ESI,[EBX + 0xcdf0]              ; 00489204
    PUSH ESI                            ; 0048920a
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0048920b
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00489210
    CMP dword ptr [0x005fba00],0x8      ; 00489213 | g_CEnemyClassVersion
        ;   Label: LAB_00489213
    JL 0x00489230                       ; 0048921a
        ;   XREF to: 00489230 (CONDITIONAL_JUMP)  ; LAB_00489230
    PUSH 0x5bdbd1                       ; 0048921c | = "guardDistance"
    LEA ESI,[EBX + 0xcddc]              ; 00489221
    PUSH ESI                            ; 00489227
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00489228
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0048922d
    CMP dword ptr [0x005fba00],0x9      ; 00489230 | g_CEnemyClassVersion
        ;   Label: LAB_00489230
    JL 0x0048924d                       ; 00489237
        ;   XREF to: 0048924d (CONDITIONAL_JUMP)  ; LAB_0048924d
    PUSH 0x5bdbdf                       ; 00489239 | = "victimHeight"
    LEA ESI,[EBX + 0xce58]              ; 0048923e
    PUSH ESI                            ; 00489244
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00489245
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0048924a
    CMP dword ptr [0x005fba00],0xa      ; 0048924d | g_CEnemyClassVersion
        ;   Label: LAB_0048924d
    JL 0x0048926a                       ; 00489254
        ;   XREF to: 0048926a (CONDITIONAL_JUMP)  ; LAB_0048926a
    PUSH 0x5bdbec                       ; 00489256 | = "victim"
    LEA ESI,[EBX + 0xcde4]              ; 0048925b
    PUSH ESI                            ; 00489261
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00489262
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00489267
    CMP dword ptr [0x005fba00],0xb      ; 0048926a | g_CEnemyClassVersion
        ;   Label: LAB_0048926a
    JL 0x00489287                       ; 00489271
        ;   XREF to: 00489287 (CONDITIONAL_JUMP)  ; LAB_00489287
    PUSH 0x5bdbf3                       ; 00489273 | = "attack_damage"
    LEA ESI,[EBX + 0xce5c]              ; 00489278
    PUSH ESI                            ; 0048927e
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0048927f
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00489284
    CMP dword ptr [0x005fba00],0xc      ; 00489287 | g_CEnemyClassVersion
        ;   Label: LAB_00489287
    JL 0x004892b8                       ; 0048928e
        ;   XREF to: 004892b8 (CONDITIONAL_JUMP)  ; LAB_004892b8
    PUSH 0x5bdc01                       ; 00489290 | = "spawn_amount"
    LEA ESI,[EBX + 0xce64]              ; 00489295
    PUSH ESI                            ; 0048929b
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0048929c
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004892a1
    PUSH 0x5bdc0e                       ; 004892a4 | = "spawn_item_class"
    LEA ESI,[EBX + 0xce68]              ; 004892a9
    PUSH ESI                            ; 004892af
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004892b0
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004892b5
    CMP dword ptr [0x005fba00],0xd      ; 004892b8 | g_CEnemyClassVersion
        ;   Label: LAB_004892b8
    JL 0x004892d5                       ; 004892bf
        ;   XREF to: 004892d5 (CONDITIONAL_JUMP)  ; LAB_004892d5
    PUSH 0x5bdc1f                       ; 004892c1 | = "spawned_item_already"
    LEA ESI,[EBX + 0xcecc]              ; 004892c6
    PUSH ESI                            ; 004892cc
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004892cd
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004892d2
    CMP dword ptr [0x005fba00],0xe      ; 004892d5 | g_CEnemyClassVersion
        ;   Label: LAB_004892d5
    JL 0x00489161                       ; 004892dc
        ;   XREF to: 00489161 (CONDITIONAL_JUMP)  ; LAB_00489161
    PUSH 0x5bdc34                       ; 004892e2 | = "spawnmodelName"
    ADD EBX,0xced0                      ; 004892e7
    PUSH EBX                            ; 004892ed
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 004892ee
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0()
    ADD ESP,0x8                         ; 004892f3
    POP ESI                             ; 004892f6
    POP EBX                             ; 004892f7
    RET                                 ; 004892f8

