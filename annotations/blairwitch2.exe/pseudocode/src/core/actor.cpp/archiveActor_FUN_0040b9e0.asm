; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveActor_FUN_0040b9e0(undefined4 *param_1,char *param_2)
;
;
; XREF[41]:
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040e860 at 0040e90e
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 at 0059fd12
;   core_bodypart.cpp_CBodyPart_archive_FUN_00415f50 at 004160e9
;   core_boneguy.cpp_CBoneGuy_archive_FUN_00419c50 at 00419e00
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041c7f0 at 0041c8af
;   core_chain.cpp_CChain_archive_FUN_005b5e10 at 005b5e52
;   core_charactr.cpp_CCharacter_archive_FUN_00422c30 at 00422d12
;   core_conveyor.cpp_CConstruct_archive_FUN_00437b80 at 00437da0
;   core_crate.cpp_CCrate_archive_FUN_0043a1d0 at 0043a20b
;   core_dest.cpp_CActorDestination_archive_FUN_00447450 at 0044749d
;   ... and 31 more
;
; Referenced Globals:
;   undefined4 DAT_005cab4e
;   undefined1 DAT_00609590
;   undefined4 DAT_00618170
;   undefined4 DAT_007bc034
;   undefined4 DAT_007bc038
;   undefined4 DAT_007bc03c
;   undefined4 DAT_01d182f0
;
; Called Functions:
;   core_mission.cpp_CDemonMission_loadActor_FUN_004fc040
;   core_mission.cpp_CDemonMission_saveActor_FUN_004fc1a0
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b9e0
        ;   Label: core_actor.cpp_archiveActor_FUN_0040b9e0
    PUSH ESI                            ; 0040b9e1
    PUSH EBP                            ; 0040b9e2
    CMP dword ptr [0x007bc038],0x1      ; 0040b9e3 | DAT_007bc038
    JNZ 0x0040ba18                      ; 0040b9ea
        ;   XREF to: 0040ba18 (CONDITIONAL_JUMP)  ; LAB_0040ba18
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040b9ec
    PUSH EDX                            ; 0040b9f0
    MOV ECX,dword ptr [0x007bc03c]      ; 0040b9f1 | DAT_007bc03c
    PUSH ECX                            ; 0040b9f7
    MOV EBX,dword ptr [0x007bc034]      ; 0040b9f8 | DAT_007bc034
    PUSH EBX                            ; 0040b9fe
    MOV ESI,dword ptr [0x00618170]      ; 0040b9ff | DAT_00618170
    PUSH ESI                            ; 0040ba05 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_loadActor_FUN_004fc040 ; 0040ba06
        ;   XREF to: 004fc040 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_loadActor_FUN_004fc040(CDemonMission * this_ptr, _FILE * file, CDemonActor * current_actor, char * property_description)
    ADD ESP,0x10                        ; 0040ba0b
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040ba0e
    MOV dword ptr [EDX],EAX             ; 0040ba12
    POP EBP                             ; 0040ba14
    POP ESI                             ; 0040ba15
    POP EBX                             ; 0040ba16
    RET                                 ; 0040ba17
    PUSH EDI                            ; 0040ba18
        ;   Label: LAB_0040ba18
    PUSH 0x609590                       ; 0040ba19 | DAT_00609590
    PUSH 0x5cab4e                       ; 0040ba1e | DAT_005cab4e
    MOV ECX,dword ptr [0x007bc034]      ; 0040ba23 | DAT_007bc034
    PUSH ECX                            ; 0040ba29
    CALL crt_unknown.c_FUN_005b8010     ; 0040ba2a
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0040ba2f
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040ba32
    PUSH EBX                            ; 0040ba36
    MOV ESI,dword ptr [0x007bc03c]      ; 0040ba37 | DAT_007bc03c
    PUSH ESI                            ; 0040ba3d
    MOV EDI,dword ptr [0x007bc034]      ; 0040ba3e | DAT_007bc034
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040ba44
    PUSH EDI                            ; 0040ba48
    MOV EBP,dword ptr [EAX]             ; 0040ba49
    PUSH EBP                            ; 0040ba4b
    MOV EAX,[0x00618170]                ; 0040ba4c | DAT_00618170
    PUSH EAX                            ; 0040ba51 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_saveActor_FUN_004fc1a0 ; 0040ba52
        ;   XREF to: 004fc1a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_saveActor_FUN_004fc1a0(CDemonMission * this_ptr, CDemonActor * actor_ptr, _FILE * file, CDemonActor * current_actor, ...)
    ADD ESP,0x14                        ; 0040ba57
    POP EDI                             ; 0040ba5a
    POP EBP                             ; 0040ba5b
    POP ESI                             ; 0040ba5c
    POP EBX                             ; 0040ba5d
    RET                                 ; 0040ba5e

