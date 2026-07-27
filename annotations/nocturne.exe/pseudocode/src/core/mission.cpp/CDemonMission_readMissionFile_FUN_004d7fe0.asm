; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004d7fe0(undefined4 *param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x158]:1  local_158
; undefined        Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xf3]:1  local_f3
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_FUN_004a4170 at 004a47db
;   core_mission.cpp_CDemonMission_load_FUN_004d7ee0 at 004d7f2a
;
; Referenced Globals:
;   TerminatedCString s_d_d_005896b0
;   TerminatedCString s_core_mission_cpp_005896b7
;   TerminatedCString s_Invalid_mission_version_005896cb
;   TerminatedCString s_core_mission_cpp_00589727
;   TerminatedCString s_This_mission_uses_actor_0058973b
;   TerminatedCString s_core_mission_cpp_00589786
;   TerminatedCString s_No_name_in_mission_0058979a
;   TerminatedCString s_s_005897ad
;   TerminatedCString s_d_005897b1
;   TerminatedCString s_s_005897b5
;   TerminatedCString s_d_005897b9
;   TerminatedCString s_s_d_005897bd
;   TerminatedCString s_core_mission_cpp_005897c4
;   TerminatedCString s_Actor_type_s_is_saved_in_005897d8
;   TerminatedCString s_d_00589841
;   ... and 22 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_load_FUN_0040c160
;   core_actor.cpp_createActorByName_FUN_0040d540
;   core_actor.cpp_getActorClassByName_FUN_0040d4d0
;   core_actor.cpp_resetActorTypeInfo_FUN_0040d8f0
;   core_gore.cpp_CGore_load_FUN_004b0820
;   core_gore.cpp_CGore_reset_FUN_004afdb0
;   core_inv.cpp_CInventory_loadItems_FUN_004c14d0
;   core_main.c_FUN_004c8440
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
;   core_mission.cpp_FUN_004d7ea0
;   core_mission.cpp_FUN_004d9900
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7fe0
        ;   Label: core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0
    PUSH ESI                            ; 004d7fe1
    PUSH EDI                            ; 004d7fe2
    PUSH EBP                            ; 004d7fe3
    SUB ESP,0x148                       ; 004d7fe4
    MOV EBX,dword ptr [ESP + 0x15c]     ; 004d7fea
    PUSH EBX                            ; 004d7ff1
    CALL core_mission.cpp_FUN_004d7ea0  ; 004d7ff2
        ;   XREF to: 004d7ea0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004d7ea0()
    ADD ESP,0x4                         ; 004d7ff7
    CMP dword ptr [ESP + 0x164],0x0     ; 004d7ffa
    JZ 0x004d84d1                       ; 004d8002
        ;   XREF to: 004d84d1 (CONDITIONAL_JUMP)  ; LAB_004d84d1
    MOV ESI,dword ptr [ESP + 0x160]     ; 004d8008
        ;   Label: LAB_004d8008
    PUSH ESI                            ; 004d800f
        ;   Label: LAB_004d800f
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d8010
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d8015
    TEST EAX,EAX                        ; 004d8018
    JL 0x004d8021                       ; 004d801a
        ;   XREF to: 004d8021 (CONDITIONAL_JUMP)  ; LAB_004d8021
    CMP EAX,0xa                         ; 004d801c
    JNZ 0x004d800f                      ; 004d801f
        ;   XREF to: 004d800f (CONDITIONAL_JUMP)  ; LAB_004d800f
    LEA EAX,[ESP + 0x12c]               ; 004d8021
        ;   Label: LAB_004d8021
    PUSH EAX                            ; 004d8028
    LEA EAX,[EBX + 0x8]                 ; 004d8029
    PUSH EAX                            ; 004d802c
    PUSH 0x5896b0                       ; 004d802d | = "%d,%d\n"
    MOV ECX,dword ptr [ESP + 0x16c]     ; 004d8032
    PUSH ECX                            ; 004d8039
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004d803a
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV ESI,dword ptr [EBX + 0x8]       ; 004d803f
    ADD ESP,0x10                        ; 004d8042
    CMP ESI,0x7                         ; 004d8045
    JLE 0x004d8070                      ; 004d8048
        ;   XREF to: 004d8070 (CONDITIONAL_JUMP)  ; LAB_004d8070
    PUSH 0x7                            ; 004d804a
    PUSH ESI                            ; 004d804c
    MOV EDI,0x5896b7                    ; 004d804d | = "..\\core\\mission.cpp"
    MOV EBP,0xe2                        ; 004d8052
    PUSH 0x5896cb                       ; 004d8057 | = "Invalid mission version number: %d, c..."
    MOV dword ptr [0x01cc4800],EDI      ; 004d805c | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004d8062 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d8068
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 004d806d
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004d8070
        ;   Label: LAB_004d8070
    CMP EDX,0x4                         ; 004d8077
    JGE 0x004d80a0                      ; 004d807a
        ;   XREF to: 004d80a0 (CONDITIONAL_JUMP)  ; LAB_004d80a0
    PUSH EDX                            ; 004d807c
    MOV ECX,0x589727                    ; 004d807d | = "..\\core\\mission.cpp"
    MOV ESI,0xe5                        ; 004d8082
    PUSH 0x58973b                       ; 004d8087 | = "This mission uses actor format versio..."
    MOV dword ptr [0x01cc4800],ECX      ; 004d808c | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004d8092 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d8098
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004d809d
    CMP dword ptr [EBX + 0x8],0x2       ; 004d80a0
        ;   Label: LAB_004d80a0
    JL 0x004d84df                       ; 004d80a4
        ;   XREF to: 004d84df (CONDITIONAL_JUMP)  ; LAB_004d84df
    MOV ESI,dword ptr [ESP + 0x160]     ; 004d80aa
        ;   Label: LAB_004d80aa
    PUSH ESI                            ; 004d80b1
        ;   Label: LAB_004d80b1
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d80b2
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d80b7
    TEST EAX,EAX                        ; 004d80ba
    JL 0x004d80c3                       ; 004d80bc
        ;   XREF to: 004d80c3 (CONDITIONAL_JUMP)  ; LAB_004d80c3
    CMP EAX,0xa                         ; 004d80be
    JNZ 0x004d80b1                      ; 004d80c1
        ;   XREF to: 004d80b1 (CONDITIONAL_JUMP)  ; LAB_004d80b1
    LEA EAX,[EBX + 0x10]                ; 004d80c3
        ;   Label: LAB_004d80c3
    PUSH EAX                            ; 004d80c6
    PUSH 0x5897ad                       ; 004d80c7 | = "%s\n"
    MOV ECX,dword ptr [ESP + 0x168]     ; 004d80cc
    PUSH ECX                            ; 004d80d3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004d80d4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004d80d9
    MOV ESI,dword ptr [ESP + 0x160]     ; 004d80dc
    PUSH ESI                            ; 004d80e3
        ;   Label: LAB_004d80e3
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d80e4
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d80e9
    TEST EAX,EAX                        ; 004d80ec
    JL 0x004d80f5                       ; 004d80ee
        ;   XREF to: 004d80f5 (CONDITIONAL_JUMP)  ; LAB_004d80f5
    CMP EAX,0xa                         ; 004d80f0
    JNZ 0x004d80e3                      ; 004d80f3
        ;   XREF to: 004d80e3 (CONDITIONAL_JUMP)  ; LAB_004d80e3
    LEA EAX,[EBX + 0x110]               ; 004d80f5
        ;   Label: LAB_004d80f5
    PUSH EAX                            ; 004d80fb
    PUSH 0x5897b1                       ; 004d80fc | = "%d\n"
    MOV ESI,dword ptr [ESP + 0x168]     ; 004d8101
    PUSH ESI                            ; 004d8108
    XOR EBP,EBP                         ; 004d8109
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004d810b
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EDI,dword ptr [EBX + 0x110]     ; 004d8110
    ADD ESP,0xc                         ; 004d8116
    TEST EDI,EDI                        ; 004d8119
    JLE 0x004d8150                      ; 004d811b
        ;   XREF to: 004d8150 (CONDITIONAL_JUMP)  ; LAB_004d8150
    LEA ESI,[EBX + 0x114]               ; 004d811d
    PUSH ESI                            ; 004d8123
        ;   Label: LAB_004d8123
    PUSH 0x5897b5                       ; 004d8124 | = "%s\n"
    MOV EAX,dword ptr [ESP + 0x168]     ; 004d8129
    PUSH EAX                            ; 004d8130
    INC EBP                             ; 004d8131
    ADD ESI,0x100                       ; 004d8132
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004d8138
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EDX,dword ptr [EBX + 0x110]     ; 004d813d
    ADD ESP,0xc                         ; 004d8143
    CMP EBP,EDX                         ; 004d8146
    JL 0x004d8123                       ; 004d8148
        ;   XREF to: 004d8123 (CONDITIONAL_JUMP)  ; LAB_004d8123
    LEA EAX,[EAX]                       ; 004d814a
    CALL core_actor.cpp_resetActorTypeInfo_FUN_0040d8f0 ; 004d8150
        ;   XREF to: 0040d8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_resetActorTypeInfo_FUN_0040d8f0()
        ;   Label: LAB_004d8150
    CMP dword ptr [EBX + 0x8],0x3       ; 004d8155
    JL 0x004d8245                       ; 004d8159
        ;   XREF to: 004d8245 (CONDITIONAL_JUMP)  ; LAB_004d8245
    MOV ESI,dword ptr [ESP + 0x160]     ; 004d815f
    PUSH ESI                            ; 004d8166
        ;   Label: LAB_004d8166
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d8167
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d816c
    TEST EAX,EAX                        ; 004d816f
    JL 0x004d8178                       ; 004d8171
        ;   XREF to: 004d8178 (CONDITIONAL_JUMP)  ; LAB_004d8178
    CMP EAX,0xa                         ; 004d8173
    JNZ 0x004d8166                      ; 004d8176
        ;   XREF to: 004d8166 (CONDITIONAL_JUMP)  ; LAB_004d8166
    LEA EAX,[ESP + 0x138]               ; 004d8178
        ;   Label: LAB_004d8178
    PUSH EAX                            ; 004d817f
    PUSH 0x5897b9                       ; 004d8180 | = "%d\n"
    MOV ESI,dword ptr [ESP + 0x168]     ; 004d8185
    PUSH ESI                            ; 004d818c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004d818d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004d8192
    MOV EDI,dword ptr [ESP + 0x138]     ; 004d8195
    XOR EBP,EBP                         ; 004d819c
    TEST EDI,EDI                        ; 004d819e
    JLE 0x004d8245                      ; 004d81a0
        ;   XREF to: 004d8245 (CONDITIONAL_JUMP)  ; LAB_004d8245
    LEA EAX,[ESP + 0x13c]               ; 004d81a6
        ;   Label: LAB_004d81a6
    PUSH EAX                            ; 004d81ad
    LEA EAX,[ESP + 0x4]                 ; 004d81ae
    PUSH EAX                            ; 004d81b2
    MOV ECX,0x19                        ; 004d81b3
    LEA EDI,[ESP + 0x8]                 ; 004d81b8
    PUSH 0x5897bd                       ; 004d81bc | = "%s %d\n"
    MOV EDX,dword ptr [ESP + 0x16c]     ; 004d81c1
    MOV ESI,0x5baf98                    ; 004d81c8 | = "corrupt!"
    PUSH EDX                            ; 004d81cd
    MOVSD.REP ES:EDI,ESI                ; 004d81ce | = "corrupt!" | s_corrupt_005baf98+4
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004d81d0
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 004d81d5
    MOV EAX,ESP                         ; 004d81d8
    PUSH EAX                            ; 004d81da
    CALL core_actor.cpp_getActorClassByName_FUN_0040d4d0 ; 004d81db
        ;   XREF to: 0040d4d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getActorClassByName_FUN_0040d4d0()
    MOV ESI,EAX                         ; 004d81e0
    ADD ESP,0x4                         ; 004d81e2
    MOV EDI,EAX                         ; 004d81e5
    TEST EAX,EAX                        ; 004d81e7
    JZ 0x004d8235                       ; 004d81e9
        ;   XREF to: 004d8235 (CONDITIONAL_JUMP)  ; LAB_004d8235
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004d81eb
    MOV ECX,dword ptr [ESI + 0x34]      ; 004d81f2
    CMP EAX,ECX                         ; 004d81f5
    JLE 0x004d8229                      ; 004d81f7
        ;   XREF to: 004d8229 (CONDITIONAL_JUMP)  ; LAB_004d8229
    PUSH ECX                            ; 004d81f9
    MOV ESI,dword ptr [ESP + 0x140]     ; 004d81fa
    MOV EAX,0x5897c4                    ; 004d8201 | = "..\\core\\mission.cpp"
    PUSH ESI                            ; 004d8206
    MOV [0x01cc4800],EAX                ; 004d8207 | PTR_01cc4800
    LEA EAX,[ESP + 0x8]                 ; 004d820c
    PUSH EAX                            ; 004d8210
    MOV EDX,0x108                       ; 004d8211
    PUSH 0x5897d8                       ; 004d8216 | = "Actor type %s is saved in mission in ..."
    MOV dword ptr [0x01cc4804],EDX      ; 004d821b | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d8221
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x10                        ; 004d8226
    MOV ESI,dword ptr [EDI + 0x30]      ; 004d8229
        ;   Label: LAB_004d8229
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004d822c
    MOV dword ptr [ESI],EAX             ; 004d8233
    MOV EAX,dword ptr [ESP + 0x138]     ; 004d8235
        ;   Label: LAB_004d8235
    INC EBP                             ; 004d823c
    CMP EBP,EAX                         ; 004d823d
    JL 0x004d81a6                       ; 004d823f
        ;   XREF to: 004d81a6 (CONDITIONAL_JUMP)  ; LAB_004d81a6
    MOV ESI,dword ptr [ESP + 0x160]     ; 004d8245
        ;   Label: LAB_004d8245
    PUSH ESI                            ; 004d824c
        ;   Label: LAB_004d824c
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d824d
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d8252
    TEST EAX,EAX                        ; 004d8255
    JL 0x004d825e                       ; 004d8257
        ;   XREF to: 004d825e (CONDITIONAL_JUMP)  ; LAB_004d825e
    CMP EAX,0xa                         ; 004d8259
    JNZ 0x004d824c                      ; 004d825c
        ;   XREF to: 004d824c (CONDITIONAL_JUMP)  ; LAB_004d824c
    LEA EAX,[ESP + 0x130]               ; 004d825e
        ;   Label: LAB_004d825e
    PUSH EAX                            ; 004d8265
    PUSH 0x589841                       ; 004d8266 | = "%d\n"
    MOV EDI,dword ptr [ESP + 0x168]     ; 004d826b
    PUSH EDI                            ; 004d8272
    XOR EBP,EBP                         ; 004d8273
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004d8275
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004d827a
    MOV dword ptr [ESP + 0x134],EBP     ; 004d827d
    CMP dword ptr [EBX + 0x8],0x6       ; 004d8284
    JL 0x004d8506                       ; 004d8288
        ;   XREF to: 004d8506 (CONDITIONAL_JUMP)  ; LAB_004d8506
    MOV ESI,EDI                         ; 004d828e
    PUSH ESI                            ; 004d8290
        ;   Label: LAB_004d8290
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d8291
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d8296
    TEST EAX,EAX                        ; 004d8299
    JL 0x004d82a2                       ; 004d829b
        ;   XREF to: 004d82a2 (CONDITIONAL_JUMP)  ; LAB_004d82a2
    CMP EAX,0xa                         ; 004d829d
    JNZ 0x004d8290                      ; 004d82a0
        ;   XREF to: 004d8290 (CONDITIONAL_JUMP)  ; LAB_004d8290
    LEA EAX,[ESP + 0x134]               ; 004d82a2
        ;   Label: LAB_004d82a2
    PUSH EAX                            ; 004d82a9
    PUSH 0x589845                       ; 004d82aa | = "%d\n"
    MOV EDX,dword ptr [ESP + 0x168]     ; 004d82af
    PUSH EDX                            ; 004d82b6
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004d82b7
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004d82bc
    MOV dword ptr [EBX + 0xc],0x1       ; 004d82bf
    MOV ESI,dword ptr [ESP + 0x160]     ; 004d82c6
        ;   Label: LAB_004d82c6
    PUSH ESI                            ; 004d82cd
        ;   Label: LAB_004d82cd
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d82ce
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d82d3
    TEST EAX,EAX                        ; 004d82d6
    JL 0x004d82df                       ; 004d82d8
        ;   XREF to: 004d82df (CONDITIONAL_JUMP)  ; LAB_004d82df
    CMP EAX,0xa                         ; 004d82da
    JNZ 0x004d82cd                      ; 004d82dd
        ;   XREF to: 004d82cd (CONDITIONAL_JUMP)  ; LAB_004d82cd
    MOV dword ptr [EBX + 0x858],0x0     ; 004d82df
        ;   Label: LAB_004d82df
    XOR ECX,ECX                         ; 004d82e9
    MOV dword ptr [EBX + 0x854],0x0     ; 004d82eb
    MOV dword ptr [ESP + 0x144],ECX     ; 004d82f5
    MOV EAX,dword ptr [ESP + 0x130]     ; 004d82fc
        ;   Label: LAB_004d82fc
    MOV ESI,dword ptr [ESP + 0x134]     ; 004d8303
    MOV EDI,dword ptr [ESP + 0x144]     ; 004d830a
    ADD EAX,ESI                         ; 004d8311
    CMP EAX,EDI                         ; 004d8313
    JG 0x004d850e                       ; 004d8315
        ;   XREF to: 004d850e (CONDITIONAL_JUMP)  ; LAB_004d850e
    MOV ESI,dword ptr [ESP + 0x160]     ; 004d831b
    PUSH ESI                            ; 004d8322
        ;   Label: LAB_004d8322
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d8323
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d8328
    TEST EAX,EAX                        ; 004d832b
    JL 0x004d8334                       ; 004d832d
        ;   XREF to: 004d8334 (CONDITIONAL_JUMP)  ; LAB_004d8334
    CMP EAX,0xa                         ; 004d832f
    JNZ 0x004d8322                      ; 004d8332
        ;   XREF to: 004d8322 (CONDITIONAL_JUMP)  ; LAB_004d8322
    MOV EDX,dword ptr [ESP + 0x130]     ; 004d8334
        ;   Label: LAB_004d8334
    MOV ESI,dword ptr [EBX + 0x514]     ; 004d833b
    XOR EBP,EBP                         ; 004d8341
    TEST EDX,EDX                        ; 004d8343
    JLE 0x004d8391                      ; 004d8345
        ;   XREF to: 004d8391 (CONDITIONAL_JUMP)  ; LAB_004d8391
    TEST ESI,ESI                        ; 004d8347
        ;   Label: LAB_004d8347
    JNZ 0x004d836e                      ; 004d8349
        ;   XREF to: 004d836e (CONDITIONAL_JUMP)  ; LAB_004d836e
    MOV EDX,0x589879                    ; 004d834b | = "..\\core\\mission.cpp"
    MOV ECX,0x142                       ; 004d8350
    PUSH 0x58988d                       ; 004d8355 | = "CDemonMission::load - actor list coun..."
    MOV dword ptr [0x01cc4800],EDX      ; 004d835a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004d8360 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d8366
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d836b
    MOV ECX,dword ptr [ESP + 0x160]     ; 004d836e
        ;   Label: LAB_004d836e
    PUSH ECX                            ; 004d8375
    PUSH ESI                            ; 004d8376
    CALL core_actor.cpp_CDemonActor_load_FUN_0040c160 ; 004d8377
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_load_FUN_0040c160()
    ADD ESP,0x8                         ; 004d837c
    INC EBP                             ; 004d837f
    MOV EDI,dword ptr [ESP + 0x130]     ; 004d8380
    MOV ESI,dword ptr [ESI + 0x144]     ; 004d8387
    CMP EBP,EDI                         ; 004d838d
    JL 0x004d8347                       ; 004d838f
        ;   XREF to: 004d8347 (CONDITIONAL_JUMP)  ; LAB_004d8347
    CMP dword ptr [EBX + 0xc],0x0       ; 004d8391
        ;   Label: LAB_004d8391
    JZ 0x004d840f                       ; 004d8395
        ;   XREF to: 004d840f (CONDITIONAL_JUMP)  ; LAB_004d840f
    MOV EAX,dword ptr [ESP + 0x130]     ; 004d839b
    MOV ESI,dword ptr [EBX + 0x514]     ; 004d83a2
    XOR EBP,EBP                         ; 004d83a8
    TEST EAX,EAX                        ; 004d83aa
    JLE 0x004d8408                      ; 004d83ac
        ;   XREF to: 004d8408 (CONDITIONAL_JUMP)  ; LAB_004d8408
    TEST ESI,ESI                        ; 004d83ae
        ;   Label: LAB_004d83ae
    JNZ 0x004d83d4                      ; 004d83b0
        ;   XREF to: 004d83d4 (CONDITIONAL_JUMP)  ; LAB_004d83d4
    MOV EAX,0x5898c1                    ; 004d83b2 | = "..\\core\\mission.cpp"
    MOV EDX,0x14e                       ; 004d83b7
    PUSH 0x5898d5                       ; 004d83bc | = "CDemonMission::load - actor list coun..."
    MOV [0x01cc4800],EAX                ; 004d83c1 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004d83c6 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d83cc
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d83d1
    MOV ECX,dword ptr [0x01cae124]      ; 004d83d4 | g_CHeroActorType_01cae0ec.name_hash
        ;   Label: LAB_004d83d4
    PUSH ECX                            ; 004d83da
    PUSH ESI                            ; 004d83db
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004d83dc
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004d83e1
    TEST EAX,EAX                        ; 004d83e4
    JZ 0x004d83f6                       ; 004d83e6
        ;   XREF to: 004d83f6 (CONDITIONAL_JUMP)  ; LAB_004d83f6
    ADD EAX,0x1f5a0                     ; 004d83e8
    PUSH EAX                            ; 004d83ed
    CALL core_inv.cpp_CInventory_loadItems_FUN_004c14d0 ; 004d83ee
        ;   XREF to: 004c14d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_loadItems_FUN_004c14d0()
    ADD ESP,0x4                         ; 004d83f3
    MOV EDI,dword ptr [ESP + 0x130]     ; 004d83f6
        ;   Label: LAB_004d83f6
    INC EBP                             ; 004d83fd
    MOV ESI,dword ptr [ESI + 0x144]     ; 004d83fe
    CMP EBP,EDI                         ; 004d8404
    JL 0x004d83ae                       ; 004d8406
        ;   XREF to: 004d83ae (CONDITIONAL_JUMP)  ; LAB_004d83ae
    MOV dword ptr [EBX + 0xc],0x0       ; 004d8408
        ;   Label: LAB_004d8408
    TEST ESI,ESI                        ; 004d840f
        ;   Label: LAB_004d840f
    JZ 0x004d8436                       ; 004d8411
        ;   XREF to: 004d8436 (CONDITIONAL_JUMP)  ; LAB_004d8436
    MOV ESI,0x589909                    ; 004d8413 | = "..\\core\\mission.cpp"
    MOV EDI,0x155                       ; 004d8418
    PUSH 0x58991d                       ; 004d841d | = "CDemonMission::load - actor list coun..."
    MOV dword ptr [0x01cc4800],ESI      ; 004d8422 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004d8428 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d842e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d8433
    CMP dword ptr [EBX + 0x854],0x0     ; 004d8436
        ;   Label: LAB_004d8436
    JZ 0x004d8461                       ; 004d843d
        ;   XREF to: 004d8461 (CONDITIONAL_JUMP)  ; LAB_004d8461
    MOV EAX,0x589951                    ; 004d843f | = "..\\core\\mission.cpp"
    MOV EDX,0x156                       ; 004d8444
    PUSH 0x589965                       ; 004d8449 | = "CDemonMission::load - actor list coun..."
    MOV [0x01cc4800],EAX                ; 004d844e | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004d8453 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d8459
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d845e
    MOV ECX,dword ptr [EBX + 0x8]       ; 004d8461
        ;   Label: LAB_004d8461
    MOV dword ptr [EBX + 0x858],0x0     ; 004d8464
    CMP ECX,0x4                         ; 004d846e
    JGE 0x004d84a5                      ; 004d8471
        ;   XREF to: 004d84a5 (CONDITIONAL_JUMP)  ; LAB_004d84a5
    MOV ESI,dword ptr [ESP + 0x160]     ; 004d8473
    PUSH ESI                            ; 004d847a
        ;   Label: LAB_004d847a
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d847b
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d8480
    TEST EAX,EAX                        ; 004d8483
    JL 0x004d848c                       ; 004d8485
        ;   XREF to: 004d848c (CONDITIONAL_JUMP)  ; LAB_004d848c
    CMP EAX,0xa                         ; 004d8487
    JNZ 0x004d847a                      ; 004d848a
        ;   XREF to: 004d847a (CONDITIONAL_JUMP)  ; LAB_004d847a
    MOV ESI,dword ptr [ESP + 0x160]     ; 004d848c
        ;   Label: LAB_004d848c
    PUSH ESI                            ; 004d8493
        ;   Label: LAB_004d8493
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d8494
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d8499
    TEST EAX,EAX                        ; 004d849c
    JL 0x004d84a5                       ; 004d849e
        ;   XREF to: 004d84a5 (CONDITIONAL_JUMP)  ; LAB_004d84a5
    CMP EAX,0xa                         ; 004d84a0
    JNZ 0x004d8493                      ; 004d84a3
        ;   XREF to: 004d8493 (CONDITIONAL_JUMP)  ; LAB_004d8493
    MOV ESI,dword ptr [0x005b96c4]      ; 004d84a5 | INT_005b96c4
        ;   Label: LAB_004d84a5
    PUSH ESI                            ; 004d84ab
    MOV dword ptr [EBX],0xffffffff      ; 004d84ac
    CALL core_gore.cpp_CGore_reset_FUN_004afdb0 ; 004d84b2
        ;   XREF to: 004afdb0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_reset_FUN_004afdb0()
    MOV EDI,dword ptr [EBX + 0x8]       ; 004d84b7
    ADD ESP,0x4                         ; 004d84ba
    CMP EDI,0x7                         ; 004d84bd
    JGE 0x004d8610                      ; 004d84c0
        ;   XREF to: 004d8610 (CONDITIONAL_JUMP)  ; LAB_004d8610
    ADD ESP,0x148                       ; 004d84c6
    POP EBP                             ; 004d84cc
    POP EDI                             ; 004d84cd
    POP ESI                             ; 004d84ce
    POP EBX                             ; 004d84cf
    RET                                 ; 004d84d0
    PUSH EBX                            ; 004d84d1
        ;   Label: LAB_004d84d1
    CALL core_mission.cpp_FUN_004d9900  ; 004d84d2
        ;   XREF to: 004d9900 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004d9900()
    ADD ESP,0x4                         ; 004d84d7
    JMP 0x004d8008                      ; 004d84da
        ;   XREF to: 004d8008 (UNCONDITIONAL_JUMP)  ; LAB_004d8008
    MOV EAX,0x589786                    ; 004d84df | = "..\\core\\mission.cpp"
        ;   Label: LAB_004d84df
    MOV EDX,0xea                        ; 004d84e4
    PUSH 0x58979a                       ; 004d84e9 | = "No name in mission"
    MOV [0x01cc4800],EAX                ; 004d84ee | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004d84f3 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d84f9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d84fe
    JMP 0x004d80aa                      ; 004d8501
        ;   XREF to: 004d80aa (UNCONDITIONAL_JUMP)  ; LAB_004d80aa
    MOV dword ptr [EBX + 0xc],EBP       ; 004d8506
        ;   Label: LAB_004d8506
    JMP 0x004d82c6                      ; 004d8509
        ;   XREF to: 004d82c6 (UNCONDITIONAL_JUMP)  ; LAB_004d82c6
    MOV ECX,0x19                        ; 004d850e
        ;   Label: LAB_004d850e
    LEA EDI,[ESP + 0xc8]                ; 004d8513
    LEA EAX,[ESP + 0x64]                ; 004d851a
    MOV ESI,0x5bb000                    ; 004d851e | DAT_005bb000
    PUSH EAX                            ; 004d8523
    LEA EAX,[ESP + 0xcc]                ; 004d8524
    MOVSD.REP ES:EDI,ESI                ; 004d852b | DAT_005bb000 | DAT_005bb004
    PUSH EAX                            ; 004d852d
    MOV EBP,dword ptr [ESP + 0x168]     ; 004d852e
    MOV ECX,0x19                        ; 004d8535
    PUSH 0x589849                       ; 004d853a | = "%s \"%[^\"]\"\n"
    LEA EDI,[ESP + 0x70]                ; 004d853f
    MOV ESI,0x5bb068                    ; 004d8543 | DAT_005bb068
    PUSH EBP                            ; 004d8548
    MOVSD.REP ES:EDI,ESI                ; 004d8549 | DAT_005bb068 | DAT_005bb06c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004d854b
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 004d8550
    LEA EAX,[ESP + 0xc8]                ; 004d8553
    PUSH EAX                            ; 004d855a
    LEA ESI,[ESP + 0x68]                ; 004d855b
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004d855f
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040d540()
    MOV EBP,EAX                         ; 004d8564
    ADD ESP,0x4                         ; 004d8566
    MOV EDI,EAX                         ; 004d8569
    MOV dword ptr [ESP + 0x140],EAX     ; 004d856b
    PUSH EDI                            ; 004d8572
    MOV AL,byte ptr [ESI]               ; 004d8573
        ;   Label: LAB_004d8573
    MOV byte ptr [EDI],AL               ; 004d8575
    CMP AL,0x0                          ; 004d8577
    JZ 0x004d858b                       ; 004d8579
        ;   XREF to: 004d858b (CONDITIONAL_JUMP)  ; LAB_004d858b
    MOV AL,byte ptr [ESI + 0x1]         ; 004d857b
    ADD ESI,0x2                         ; 004d857e
    MOV byte ptr [EDI + 0x1],AL         ; 004d8581
    ADD EDI,0x2                         ; 004d8584
    CMP AL,0x0                          ; 004d8587
    JNZ 0x004d8573                      ; 004d8589
        ;   XREF to: 004d8573 (CONDITIONAL_JUMP)  ; LAB_004d8573
    POP EDI                             ; 004d858b
        ;   Label: LAB_004d858b
    PUSH EBP                            ; 004d858c
    PUSH EBX                            ; 004d858d
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60 ; 004d858e
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60()
    ADD ESP,0x8                         ; 004d8593
    MOV EAX,dword ptr [ESP + 0x144]     ; 004d8596
    CMP EAX,dword ptr [ESP + 0x130]     ; 004d859d
    JNZ 0x004d85ac                      ; 004d85a4
        ;   XREF to: 004d85ac (CONDITIONAL_JUMP)  ; LAB_004d85ac
    MOV dword ptr [EBX + 0x854],EBP     ; 004d85a6
    CMP dword ptr [EBX + 0x858],0x7d0   ; 004d85ac
        ;   Label: LAB_004d85ac
    JL 0x004d85db                       ; 004d85b6
        ;   XREF to: 004d85db (CONDITIONAL_JUMP)  ; LAB_004d85db
    MOV ESI,0x589855                    ; 004d85b8 | = "..\\core\\mission.cpp"
    MOV EDI,0x135                       ; 004d85bd
    PUSH 0x589869                       ; 004d85c2 | = "Too many actors"
    MOV dword ptr [0x01cc4800],ESI      ; 004d85c7 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004d85cd | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d85d3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d85d8
    MOV EAX,dword ptr [EBX + 0x858]     ; 004d85db
        ;   Label: LAB_004d85db
    MOV ESI,dword ptr [ESP + 0x140]     ; 004d85e1
    MOV dword ptr [EBX + EAX*0x4 + 0x85c],ESI ; 004d85e8
    MOV EAX,dword ptr [ESP + 0x144]     ; 004d85ef
    MOV EBP,dword ptr [EBX + 0x858]     ; 004d85f6
    INC EAX                             ; 004d85fc
    INC EBP                             ; 004d85fd
    MOV dword ptr [ESP + 0x144],EAX     ; 004d85fe
    MOV dword ptr [EBX + 0x858],EBP     ; 004d8605
    JMP 0x004d82fc                      ; 004d860b
        ;   XREF to: 004d82fc (UNCONDITIONAL_JUMP)  ; LAB_004d82fc
    MOV EBP,dword ptr [ESP + 0x160]     ; 004d8610
        ;   Label: LAB_004d8610
    PUSH EBP                            ; 004d8617
    MOV EAX,[0x005b96c4]                ; 004d8618 | INT_005b96c4
    PUSH EAX                            ; 004d861d
    CALL core_gore.cpp_CGore_load_FUN_004b0820 ; 004d861e
        ;   XREF to: 004b0820 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_load_FUN_004b0820()
    ADD ESP,0x8                         ; 004d8623
    ADD ESP,0x148                       ; 004d8626
    POP EBP                             ; 004d862c
    POP EDI                             ; 004d862d
    POP ESI                             ; 004d862e
    POP EBX                             ; 004d862f
    RET                                 ; 004d8630

