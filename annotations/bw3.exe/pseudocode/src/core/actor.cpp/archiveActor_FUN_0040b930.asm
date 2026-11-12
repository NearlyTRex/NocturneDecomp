; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveActor_FUN_0040b930(undefined4 *param_1,char *param_2)
;
;
; XREF[31]:
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040e8f0 at 0040e99e
;   core_bodypart.cpp_CBodyPart_archive_FUN_00414fd0 at 00415169
;   core_boneguy.cpp_CBoneGuy_archive_FUN_00419070 at 00419220
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041fb90 at 0041fc4f
;   core_chain.cpp_CChain_archive_FUN_0042a9d0 at 0042aa12
;   core_charactr.cpp_CCharacter_archive_FUN_0042b450 at 0042b534
;   core_construc.cpp_CConstruct_archive_FUN_00443ca0 at 00443ec0
;   core_crate.cpp_CCrate_archive_FUN_00446040 at 0044607b
;   core_demnfolk.cpp_CDemnfolk_archive_FUN_004583c0 at 00458463
;   core_dest.cpp_CActorDestination_archive_FUN_00459500 at 0045954d
;   ... and 21 more
;
; Referenced Globals:
;   undefined4 DAT_005b5afd
;   undefined1 DAT_005f0990
;   undefined4 DAT_00600530
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;   undefined4 DAT_007df9bc
;   undefined4 DAT_01d81080
;
; Called Functions:
;   core_mission.cpp_CDemonMission_loadActor_FUN_004f6770
;   core_mission.cpp_CDemonMission_saveActor_FUN_004f68d0
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b930
        ;   Label: core_actor.cpp_archiveActor_FUN_0040b930
    PUSH ESI                            ; 0040b931
    PUSH EBP                            ; 0040b932
    CMP dword ptr [0x007df9b8],0x1      ; 0040b933 | DAT_007df9b8
    JNZ 0x0040b968                      ; 0040b93a
        ;   XREF to: 0040b968 (CONDITIONAL_JUMP)  ; LAB_0040b968
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040b93c
    PUSH EDX                            ; 0040b940
    MOV ECX,dword ptr [0x007df9bc]      ; 0040b941 | DAT_007df9bc
    PUSH ECX                            ; 0040b947
    MOV EBX,dword ptr [0x007df9b4]      ; 0040b948 | DAT_007df9b4
    PUSH EBX                            ; 0040b94e
    MOV ESI,dword ptr [0x00600530]      ; 0040b94f | DAT_00600530
    PUSH ESI                            ; 0040b955 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_loadActor_FUN_004f6770 ; 0040b956
        ;   XREF to: 004f6770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_loadActor_FUN_004f6770(CDemonMission * this_ptr, _FILE * file, CDemonActor * current_actor, char * property_description)
    ADD ESP,0x10                        ; 0040b95b
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040b95e
    MOV dword ptr [EDX],EAX             ; 0040b962
    POP EBP                             ; 0040b964
    POP ESI                             ; 0040b965
    POP EBX                             ; 0040b966
    RET                                 ; 0040b967
    PUSH EDI                            ; 0040b968
        ;   Label: LAB_0040b968
    PUSH 0x5f0990                       ; 0040b969 | DAT_005f0990
    PUSH 0x5b5afd                       ; 0040b96e | DAT_005b5afd
    MOV ECX,dword ptr [0x007df9b4]      ; 0040b973 | DAT_007df9b4
    PUSH ECX                            ; 0040b979
    CALL crt_unknown.c_FUN_005a3140     ; 0040b97a
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0040b97f
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040b982
    PUSH EBX                            ; 0040b986
    MOV ESI,dword ptr [0x007df9bc]      ; 0040b987 | DAT_007df9bc
    PUSH ESI                            ; 0040b98d
    MOV EDI,dword ptr [0x007df9b4]      ; 0040b98e | DAT_007df9b4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040b994
    PUSH EDI                            ; 0040b998
    MOV EBP,dword ptr [EAX]             ; 0040b999
    PUSH EBP                            ; 0040b99b
    MOV EAX,[0x00600530]                ; 0040b99c | DAT_00600530
    PUSH EAX                            ; 0040b9a1 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_saveActor_FUN_004f68d0 ; 0040b9a2
        ;   XREF to: 004f68d0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_saveActor_FUN_004f68d0(CDemonMission * this_ptr, CDemonActor * actor_ptr, _FILE * file, CDemonActor * current_actor, ...)
    ADD ESP,0x14                        ; 0040b9a7
    POP EDI                             ; 0040b9aa
    POP EBP                             ; 0040b9ab
    POP ESI                             ; 0040b9ac
    POP EBX                             ; 0040b9ad
    RET                                 ; 0040b9ae

