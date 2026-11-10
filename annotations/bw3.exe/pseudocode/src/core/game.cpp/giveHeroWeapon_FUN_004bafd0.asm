; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_giveHeroWeapon_FUN_004bafd0(char *class_name)
;
; Parameters:
; char *           Stack[0x4]:4   class_name
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bbe21
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_005c2928
;   TerminatedCString s_giveHeroWeapon_This_is_n_005c2939
;   undefined4 DAT_00600530
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d81080
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_inv.cpp_FUN_004da880
;   core_main.c_FUN_004e4330
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bafd0
        ;   Label: core_game.cpp_giveHeroWeapon_FUN_004bafd0
    PUSH ESI                            ; 004bafd1
    PUSH EDI                            ; 004bafd2
    PUSH EBP                            ; 004bafd3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004bafd4
    PUSH EDX                            ; 004bafd8
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 004bafd9
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 004bafde
    PUSH EAX                            ; 004bafe1
    MOV ECX,dword ptr [0x00600530]      ; 004bafe2 | DAT_00600530
    PUSH ECX                            ; 004bafe8 | DAT_01d81080
    MOV EBX,EAX                         ; 004bafe9
    MOV ESI,EAX                         ; 004bafeb
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530 ; 004bafed
        ;   XREF to: 004f7530 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004baff2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004baff5
    PUSH EBX                            ; 004baffb
    CALL dword ptr [EAX]                ; 004baffc
    ADD ESP,0x4                         ; 004baffe
    MOV EDI,dword ptr [0x02d0c150]      ; 004bb001 | g_CWeaponClassInfo.name_hash
    PUSH EDI                            ; 004bb007
    PUSH EBX                            ; 004bb008
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004bb009
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004bb00e
    MOV EBX,EAX                         ; 004bb011
    TEST EAX,EAX                        ; 004bb013
    JZ 0x004bb061                       ; 004bb015
        ;   XREF to: 004bb061 (CONDITIONAL_JUMP)  ; LAB_004bb061
    MOV dword ptr [EBX + 0x568],0x1f4   ; 004bb017
        ;   Label: LAB_004bb017
    MOV EBX,dword ptr [0x01d5ba14]      ; 004bb021 | DAT_01d5ba14
    MOV EDX,dword ptr [EBX*0x4 + 0x1d5ba04] ; 004bb027
    PUSH EDX                            ; 004bb02e
    MOV EAX,dword ptr [ESI + 0x154]     ; 004bb02f
    PUSH ESI                            ; 004bb035
    CALL dword ptr [EAX + 0x88]         ; 004bb036
    ADD ESP,0x8                         ; 004bb03c
    MOV EAX,[0x01d5ba14]                ; 004bb03f | DAT_01d5ba14
    PUSH 0x1                            ; 004bb044
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bb046
    PUSH ESI                            ; 004bb04d
    ADD EAX,0x206e8                     ; 004bb04e
    PUSH EAX                            ; 004bb053
    CALL core_inv.cpp_FUN_004da880      ; 004bb054
        ;   XREF to: 004da880 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004da880(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004bb059
    POP EBP                             ; 004bb05c
    POP EDI                             ; 004bb05d
    POP ESI                             ; 004bb05e
    POP EBX                             ; 004bb05f
    RET                                 ; 004bb060
    MOV EBP,0x5c2928                    ; 004bb061 | = "..\\core\\game.cpp"
        ;   Label: LAB_004bb061
    MOV EAX,0xc18                       ; 004bb066
    PUSH 0x5c2939                       ; 004bb06b | = "giveHeroWeapon - This is not a weapon"
    MOV dword ptr [0x01d71de0],EBP      ; 004bb070 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004bb076 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004bb07b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004bb080
    JMP 0x004bb017                      ; 004bb083
        ;   XREF to: 004bb017 (UNCONDITIONAL_JUMP)  ; LAB_004bb017

