; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveActor_FUN_0040b870(CDemonActor *actor_ptr,char *property_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
; char *           Stack[0x8]:4   property_name
;
; XREF[35]:
;   core_ammobox.cpp_CAmmoBox_archive_FUN_00411900 at 004119ae
;   core_bodypart.cpp_CBodyPart_archive_FUN_00419880 at 00419a19
;   core_boneguy.cpp_CBoneGuy_archive_FUN_0041d270 at 0041d420
;   core_boxactor.cpp_CBoxActor_archive_FUN_00422060 at 00422152
;   core_chain.cpp_CChain_archive_FUN_00430fe0 at 00431022
;   core_charactr.cpp_CCharacter_archive_FUN_004283a0 at 00428482
;   core_crate.cpp_CCrate_archive_FUN_00448910 at 0044894b
;   core_dest.cpp_CActorDestination_archive_FUN_0046fdb0 at 0046fdfd
;   core_dracbrid.cpp_CDraculaBride_archive_FUN_00485dd0 at 00485f7f
;   core_emitter.cpp_CEmitter_archive_FUN_004a8b30 at 004a8caa
;   ... and 25 more
;
; Referenced Globals:
;   TerminatedCString s_s_00613f30
;   char[104] g_PropertyNamePrefix
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   _FILE* g_ActorDataFile
;   int g_ActorReadingMode
;   CDemonActor* g_CurrentActorBeingProcessed
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_mission.cpp_CDemonMission_loadActor_FUN_00523990
;   core_mission.cpp_CDemonMission_saveActor_FUN_00523af0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b870
        ;   Label: core_actor.cpp_archiveActor_FUN_0040b870
    PUSH ESI                            ; 0040b871
    PUSH EBP                            ; 0040b872
    CMP dword ptr [0x00822038],0x1      ; 0040b873 | g_ActorReadingMode
    JNZ 0x0040b8a8                      ; 0040b87a
        ;   XREF to: 0040b8a8 (CONDITIONAL_JUMP)  ; LAB_0040b8a8
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040b87c
    PUSH EDX                            ; 0040b880
    MOV ECX,dword ptr [0x0082203c]      ; 0040b881 | g_CurrentActorBeingProcessed
    PUSH ECX                            ; 0040b887
    MOV EBX,dword ptr [0x00822034]      ; 0040b888 | g_ActorDataFile
    PUSH EBX                            ; 0040b88e
    MOV ESI,dword ptr [0x0067d550]      ; 0040b88f | g_CDemonMissionPtr
    PUSH ESI                            ; 0040b895 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_loadActor_FUN_00523990 ; 0040b896
        ;   XREF to: 00523990 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_loadActor_FUN_00523990(CDemonMission * this_ptr, _FILE * file, CDemonActor * current_actor, char * property_description)
    ADD ESP,0x10                        ; 0040b89b
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040b89e
    MOV dword ptr [EDX],EAX             ; 0040b8a2
    POP EBP                             ; 0040b8a4
    POP ESI                             ; 0040b8a5
    POP EBX                             ; 0040b8a6
    RET                                 ; 0040b8a7
    PUSH EDI                            ; 0040b8a8
        ;   Label: LAB_0040b8a8
    PUSH 0x66e178                       ; 0040b8a9 | g_PropertyNamePrefix
    PUSH 0x613f30                       ; 0040b8ae | = "%s"
    MOV ECX,dword ptr [0x00822034]      ; 0040b8b3 | g_ActorDataFile
    PUSH ECX                            ; 0040b8b9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040b8ba
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040b8bf
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040b8c2
    PUSH EBX                            ; 0040b8c6
    MOV ESI,dword ptr [0x0082203c]      ; 0040b8c7 | g_CurrentActorBeingProcessed
    PUSH ESI                            ; 0040b8cd
    MOV EDI,dword ptr [0x00822034]      ; 0040b8ce | g_ActorDataFile
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040b8d4
    PUSH EDI                            ; 0040b8d8
    MOV EBP,dword ptr [EAX]             ; 0040b8d9
    PUSH EBP                            ; 0040b8db
    MOV EAX,[0x0067d550]                ; 0040b8dc | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EAX                            ; 0040b8e1 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_saveActor_FUN_00523af0 ; 0040b8e2
        ;   XREF to: 00523af0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_saveActor_FUN_00523af0(CDemonMission * this_ptr, CDemonActor * actor_ptr, _FILE * file, CDemonActor * current_actor, ...)
    ADD ESP,0x14                        ; 0040b8e7
    POP EDI                             ; 0040b8ea
    POP EBP                             ; 0040b8eb
    POP ESI                             ; 0040b8ec
    POP EBX                             ; 0040b8ed
    RET                                 ; 0040b8ee

