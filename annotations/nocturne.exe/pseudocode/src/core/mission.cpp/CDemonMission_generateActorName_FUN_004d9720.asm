; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x2b]:1  local_2b
;
; XREF[13]:
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530 at 004115a2
;   core_bodypart.cpp_createBodyPart_FUN_00415b30 at 00415be3
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a1fe3
;   core_game.cpp_FUN_004a03a0 at 004a03d3
;   core_game.cpp_giveHeroWeapon_FUN_004a02e0 at 004a02fd
;   core_gore.cpp_CGore_spawnFlies_FUN_004b0580 at 004b063c
;   core_hero.cpp_CHeroPlaceholder_createHero_FUN_004b6080 at 004b60e7
;   core_inv.cpp_CInventory_addItem_FUN_004bf360 at 004c0050
;   core_mimic.cpp_CMimic_processMorph_FUN_004d5e20 at 004d5eb2
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60 at 004d8c9a
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004d9680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9720
        ;   Label: core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
    PUSH ESI                            ; 004d9721
    PUSH EDI                            ; 004d9722
    SUB ESP,0x20                        ; 004d9723
    MOV EDI,dword ptr [ESP + 0x34]      ; 004d9726
    PUSH EDI                            ; 004d972a
    MOV byte ptr [EDI],0x0              ; 004d972b
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004d972e
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0()
    ADD ESP,0x4                         ; 004d9733
    MOV BL,byte ptr [EAX]               ; 004d9736
    MOV EDX,EAX                         ; 004d9738
    CMP BL,0x43                         ; 004d973a
    JNZ 0x004d9742                      ; 004d973d
        ;   XREF to: 004d9742 (CONDITIONAL_JUMP)  ; LAB_004d9742
    LEA EDX,[EAX + 0x1]                 ; 004d973f
    PUSH EDX                            ; 004d9742
        ;   Label: LAB_004d9742
    LEA EAX,[ESP + 0x4]                 ; 004d9743
    PUSH EAX                            ; 004d9747
    MOV EDX,dword ptr [ESP + 0x38]      ; 004d9748
    PUSH EDX                            ; 004d974c
    CALL core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004d9680 ; 004d974d
        ;   XREF to: 004d9680 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004d9680()
    ADD ESP,0xc                         ; 004d9752
    MOV ESI,ESP                         ; 004d9755
    PUSH EDI                            ; 004d9757
    MOV AL,byte ptr [ESI]               ; 004d9758
        ;   Label: LAB_004d9758
    MOV byte ptr [EDI],AL               ; 004d975a
    CMP AL,0x0                          ; 004d975c
    JZ 0x004d9770                       ; 004d975e
        ;   XREF to: 004d9770 (CONDITIONAL_JUMP)  ; LAB_004d9770
    MOV AL,byte ptr [ESI + 0x1]         ; 004d9760
    ADD ESI,0x2                         ; 004d9763
    MOV byte ptr [EDI + 0x1],AL         ; 004d9766
    ADD EDI,0x2                         ; 004d9769
    CMP AL,0x0                          ; 004d976c
    JNZ 0x004d9758                      ; 004d976e
        ;   XREF to: 004d9758 (CONDITIONAL_JUMP)  ; LAB_004d9758
    POP EDI                             ; 004d9770
        ;   Label: LAB_004d9770
    ADD ESP,0x20                        ; 004d9771
    POP EDI                             ; 004d9774
    POP ESI                             ; 004d9775
    POP EBX                             ; 004d9776
    RET                                 ; 004d9777

