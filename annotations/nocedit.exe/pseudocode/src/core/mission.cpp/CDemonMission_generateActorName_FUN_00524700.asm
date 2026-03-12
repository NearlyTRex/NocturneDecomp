; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; char[32]         Stack[-0x2c]:32  local_2c
;
; XREF[17]:
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00413f20 at 00413f92
;   core_bodypart.cpp_createBodyPart_FUN_00418e10 at 00418eca
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004e0344
;   core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930 at 004dd96d
;   core_game.cpp_giveHeroWeapon_FUN_004dd870 at 004dd88d
;   core_gore.cpp_CGore_spawnFlies_FUN_004edf30 at 004edff6
;   core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80 at 004f3de7
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fe862
;   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0 at 00520c32
;   core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70 at 00523baa
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_00524660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524700
        ;   Label: core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
    PUSH ESI                            ; 00524701
    PUSH EDI                            ; 00524702
    SUB ESP,0x20                        ; 00524703
    MOV EDI,dword ptr [ESP + 0x34]      ; 00524706
    PUSH EDI                            ; 0052470a
    MOV byte ptr [EDI],0x0              ; 0052470b
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 0052470e
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00524713
    MOV BL,byte ptr [EAX]               ; 00524716
    MOV EDX,EAX                         ; 00524718
    CMP BL,0x43                         ; 0052471a
    JNZ 0x00524722                      ; 0052471d
        ;   XREF to: 00524722 (CONDITIONAL_JUMP)  ; LAB_00524722
    LEA EDX,[EAX + 0x1]                 ; 0052471f
    PUSH EDX                            ; 00524722
        ;   Label: LAB_00524722
    LEA EAX,[ESP + 0x4]                 ; 00524723
    PUSH EAX                            ; 00524727
    MOV EDX,dword ptr [ESP + 0x38]      ; 00524728
    PUSH EDX                            ; 0052472c
    CALL core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_00524660 ; 0052472d
        ;   XREF to: 00524660 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_00524660(CDemonMission * this_ptr, char * out_buf, char * base_name)
    ADD ESP,0xc                         ; 00524732
    MOV ESI,ESP                         ; 00524735
    PUSH EDI                            ; 00524737
    MOV AL,byte ptr [ESI]               ; 00524738
        ;   Label: LAB_00524738
    MOV byte ptr [EDI],AL               ; 0052473a
    CMP AL,0x0                          ; 0052473c
    JZ 0x00524750                       ; 0052473e
        ;   XREF to: 00524750 (CONDITIONAL_JUMP)  ; LAB_00524750
    MOV AL,byte ptr [ESI + 0x1]         ; 00524740
    ADD ESI,0x2                         ; 00524743
    MOV byte ptr [EDI + 0x1],AL         ; 00524746
    ADD EDI,0x2                         ; 00524749
    CMP AL,0x0                          ; 0052474c
    JNZ 0x00524738                      ; 0052474e
        ;   XREF to: 00524738 (CONDITIONAL_JUMP)  ; LAB_00524738
    POP EDI                             ; 00524750
        ;   Label: LAB_00524750
    ADD ESP,0x20                        ; 00524751
    POP EDI                             ; 00524754
    POP ESI                             ; 00524755
    POP EBX                             ; 00524756
    RET                                 ; 00524757

