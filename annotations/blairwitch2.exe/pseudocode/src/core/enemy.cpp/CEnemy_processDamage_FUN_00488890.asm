; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_00488890(CEnemy *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; XREF[28]:
;   core_armour.cpp_CArmour_processDamage_FUN_0040f0a0 at 0040f0da
;   core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800 at 0059f897
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00412760 at 0041289f
;   core_batman.cpp_CBatman_processDamage_FUN_00414290 at 004143cf
;   core_beast.cpp_CBeast_processDamage_FUN_00414b60 at 00414b71
;   core_biggs.cpp_CBiggs_processDamage_FUN_004152e0 at 0041536a
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_00419eb0 at 00419ef9
;   core_bride.cpp_CBride_processDamage_FUN_0041ead0 at 0041ec39
;   core_bugs.cpp_CBugs_processDamage_FUN_0041f910 at 0041f928
;   core_construc.cpp_CConstruct_processDamage_FUN_00437de0 at 00437e60
;   ... and 18 more
;
; Referenced Globals:
;   undefined4 s_ShotInvulnerable_005d2df7+2
;   undefined4 DAT_006141f0
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488890
        ;   Label: core_enemy.cpp_CEnemy_processDamage_FUN_00488890
    PUSH ESI                            ; 00488891
    PUSH EDI                            ; 00488892
    PUSH EBP                            ; 00488893
    MOV EBX,dword ptr [ESP + 0x14]      ; 00488894
    MOV ESI,dword ptr [ESP + 0x18]      ; 00488898
    CMP dword ptr [EBX + 0x281c],0x0    ; 0048889c
    JNZ 0x004888d0                      ; 004888a3
        ;   XREF to: 004888d0 (CONDITIONAL_JUMP)  ; LAB_004888d0
    PUSH EBX                            ; 004888a5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004888a6
    CALL dword ptr [EAX + 0x100]        ; 004888ac
    ADD ESP,0x4                         ; 004888b2
    PUSH ESI                            ; 004888b5
    PUSH EBX                            ; 004888b6
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 004888b7
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    FLD float ptr [ESI + 0x4]           ; 004888bc
    FLDZ                                ; 004888bf
    ADD ESP,0x8                         ; 004888c1
    FCOMPP                              ; 004888c4
    FNSTSW AX                           ; 004888c6
    SAHF                                ; 004888c8
    JC 0x004888e9                       ; 004888c9
        ;   XREF to: 004888e9 (CONDITIONAL_JUMP)  ; LAB_004888e9
    POP EBP                             ; 004888cb
        ;   Label: LAB_004888cb
    POP EDI                             ; 004888cc
    POP ESI                             ; 004888cd
    POP EBX                             ; 004888ce
    RET                                 ; 004888cf
    PUSH 0x5d2df9                       ; 004888d0 | s_ShotInvulnerable_005d2df7+2
        ;   Label: LAB_004888d0
    MOV EDX,dword ptr [0x006141f0]      ; 004888d5 | DAT_006141f0
    PUSH EDX                            ; 004888db
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004888dc
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004888e1
    POP EBP                             ; 004888e4
    POP EDI                             ; 004888e5
    POP ESI                             ; 004888e6
    POP EBX                             ; 004888e7
    RET                                 ; 004888e8
    MOV ECX,dword ptr [0x007bdc94]      ; 004888e9 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_004888e9
    PUSH ECX                            ; 004888ef
    MOV EDI,dword ptr [ESI + 0x38]      ; 004888f0
    PUSH EDI                            ; 004888f3
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004888f4
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004888f9
    MOV EDX,EAX                         ; 004888fc
    TEST EAX,EAX                        ; 004888fe
    JNZ 0x00488917                      ; 00488900
        ;   XREF to: 00488917 (CONDITIONAL_JUMP)  ; LAB_00488917
    MOV EBP,dword ptr [0x007bdc94]      ; 00488902 | g_CCharacterClassInfo.name_hash
    PUSH EBP                            ; 00488908
    MOV EAX,dword ptr [ESI + 0x34]      ; 00488909
    PUSH EAX                            ; 0048890c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0048890d
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00488912
    MOV EDX,EAX                         ; 00488915
    TEST EDX,EDX                        ; 00488917
        ;   Label: LAB_00488917
    JZ 0x004888cb                       ; 00488919
        ;   XREF to: 004888cb (CONDITIONAL_JUMP)  ; LAB_004888cb
    MOV dword ptr [EBX + 0x10a7c],0x41700000 ; 0048891b
    MOV dword ptr [EBX + 0x10a6c],0x1   ; 00488925
    MOV dword ptr [EBX + 0x10a78],EDX   ; 0048892f
    POP EBP                             ; 00488935
    POP EDI                             ; 00488936
    POP ESI                             ; 00488937
    POP EBX                             ; 00488938
    RET                                 ; 00488939

