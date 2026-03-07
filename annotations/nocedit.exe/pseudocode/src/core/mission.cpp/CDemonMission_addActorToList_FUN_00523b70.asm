; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(CDemonMission *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[17]:
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00413f20 at 00413fbd
;   core_bodypart.cpp_createBodyPart_FUN_00418e10 at 00418eda
;   core_gore.cpp_CGore_spawnFlies_FUN_004edf30 at 004ee006
;   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0 at 00520c48
;   core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 at 00524a40
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_00524c20 at 00524d6f
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 at 00523475
;   core_msnedit.cpp_CDemonMission_changeActorType_FUN_0053d8b0 at 0053dbd5
;   core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220 at 0053e400
;   core_msnedit.cpp_CDemonMission_importActorsFrom_FUN_0053b9f0 at 0053bbda
;   ... and 7 more
;
; Called Functions:
;   core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523b70
        ;   Label: core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70
    PUSH ESI                            ; 00523b71
    MOV ESI,dword ptr [ESP + 0xc]       ; 00523b72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00523b76
    TEST EBX,EBX                        ; 00523b7a
    JZ 0x00523ba5                       ; 00523b7c
        ;   XREF to: 00523ba5 (CONDITIONAL_JUMP)  ; LAB_00523ba5
    CMP byte ptr [EBX],0x0              ; 00523b7e
    JZ 0x00523ba8                       ; 00523b81
        ;   XREF to: 00523ba8 (CONDITIONAL_JUMP)  ; LAB_00523ba8
    MOV EDX,dword ptr [ESI + 0x54c]     ; 00523b83
        ;   Label: LAB_00523b83
    TEST EDX,EDX                        ; 00523b89
    JNZ 0x00523bb4                      ; 00523b8b
        ;   XREF to: 00523bb4 (CONDITIONAL_JUMP)  ; LAB_00523bb4
    MOV dword ptr [EBX + 0x14c],EDX     ; 00523b8d
    MOV dword ptr [EBX + 0x150],EDX     ; 00523b93
    MOV dword ptr [ESI + 0x548],EBX     ; 00523b99
    MOV dword ptr [ESI + 0x54c],EBX     ; 00523b9f
    POP ESI                             ; 00523ba5
        ;   Label: LAB_00523ba5
    POP EBX                             ; 00523ba6
    RET                                 ; 00523ba7
    PUSH EBX                            ; 00523ba8
        ;   Label: LAB_00523ba8
    PUSH ESI                            ; 00523ba9
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 00523baa
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00523baf
    JMP 0x00523b83                      ; 00523bb2
        ;   XREF to: 00523b83 (UNCONDITIONAL_JUMP)  ; LAB_00523b83
    MOV dword ptr [EBX + 0x14c],0x0     ; 00523bb4
        ;   Label: LAB_00523bb4
    MOV dword ptr [EBX + 0x150],EDX     ; 00523bbe
    MOV EAX,dword ptr [ESI + 0x54c]     ; 00523bc4
    MOV dword ptr [EAX + 0x14c],EBX     ; 00523bca
    MOV dword ptr [ESI + 0x54c],EBX     ; 00523bd0
    POP ESI                             ; 00523bd6
    POP EBX                             ; 00523bd7
    RET                                 ; 00523bd8

