; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(CDemonMission *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[12]:
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530 at 004115cd
;   core_bodypart.cpp_createBodyPart_FUN_00415b30 at 00415bf3
;   core_gore.cpp_CGore_spawnFlies_FUN_004b0580 at 004b064c
;   core_mimic.cpp_CMimic_processMorph_FUN_004d5e20 at 004d5ec8
;   core_mission.cpp_CDemonMission_createOneHero_FUN_004d9920 at 004d9a40
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20 at 004d9d63
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0 at 004d858e
;   core_passngr.cpp_CPassenger_process_FUN_004ef890 at 004ef9b6
;   core_stranger.cpp_FUN_0053f310 at 0053f5a2
;   core_succubus.cpp_FUN_00540f50 at 005412f9
;   ... and 2 more
;
; Called Functions:
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8c60
        ;   Label: core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
    PUSH ESI                            ; 004d8c61
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d8c62
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d8c66
    TEST EBX,EBX                        ; 004d8c6a
    JZ 0x004d8c95                       ; 004d8c6c
        ;   XREF to: 004d8c95 (CONDITIONAL_JUMP)  ; LAB_004d8c95
    CMP byte ptr [EBX],0x0              ; 004d8c6e
    JZ 0x004d8c98                       ; 004d8c71
        ;   XREF to: 004d8c98 (CONDITIONAL_JUMP)  ; LAB_004d8c98
    MOV EDX,dword ptr [ESI + 0x518]     ; 004d8c73
        ;   Label: LAB_004d8c73
    TEST EDX,EDX                        ; 004d8c79
    JNZ 0x004d8ca4                      ; 004d8c7b
        ;   XREF to: 004d8ca4 (CONDITIONAL_JUMP)  ; LAB_004d8ca4
    MOV dword ptr [EBX + 0x144],EDX     ; 004d8c7d
    MOV dword ptr [EBX + 0x148],EDX     ; 004d8c83
    MOV dword ptr [ESI + 0x514],EBX     ; 004d8c89
    MOV dword ptr [ESI + 0x518],EBX     ; 004d8c8f
    POP ESI                             ; 004d8c95
        ;   Label: LAB_004d8c95
    POP EBX                             ; 004d8c96
    RET                                 ; 004d8c97
    PUSH EBX                            ; 004d8c98
        ;   Label: LAB_004d8c98
    PUSH ESI                            ; 004d8c99
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004d8c9a
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d8c9f
    JMP 0x004d8c73                      ; 004d8ca2
        ;   XREF to: 004d8c73 (UNCONDITIONAL_JUMP)  ; LAB_004d8c73
    MOV dword ptr [EBX + 0x144],0x0     ; 004d8ca4
        ;   Label: LAB_004d8ca4
    MOV dword ptr [EBX + 0x148],EDX     ; 004d8cae
    MOV EAX,dword ptr [ESI + 0x518]     ; 004d8cb4
    MOV dword ptr [EAX + 0x144],EBX     ; 004d8cba
    MOV dword ptr [ESI + 0x518],EBX     ; 004d8cc0
    POP ESI                             ; 004d8cc6
    POP EBX                             ; 004d8cc7
    RET                                 ; 004d8cc8

