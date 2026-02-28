; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0(void)
;
;
; XREF[5]:
;   core_actor.cpp_CDemonActor_save_FUN_0040af30 at 0040af3f
;   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 at 0052371b
;   core_msnedit.cpp_CDemonMission_replicateActor_FUN_0053bd80 at 0053bdb2
;   core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140 at 0053c1db
;   core_msnedit.cpp_CDemonMission_undoActorChanges_FUN_0053c0b0 at 0053c0bf
;
; Referenced Globals:
;   int g_NumActorClassTypes
;   CDemonActorType*[200] g_ActorClassRegistrations
;   undefined4 g_ActorClassRegistrations[1]
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040c7c0
        ;   Label: core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
    MOV ESI,dword ptr [0x00822044]      ; 0040c7c1 | g_NumActorClassTypes
    XOR EAX,EAX                         ; 0040c7c7
    TEST ESI,ESI                        ; 0040c7c9
    JLE 0x0040c7e7                      ; 0040c7cb
        ;   XREF to: 0040c7e7 (CONDITIONAL_JUMP)  ; LAB_0040c7e7
    PUSH EBX                            ; 0040c7cd
    XOR EDX,EDX                         ; 0040c7ce
    MOV ECX,dword ptr [EDX + 0x822048]  ; 0040c7d0 | g_ActorClassRegistrations | g_ActorClassRegistrations[1]
        ;   Label: LAB_0040c7d0
    ADD EDX,0x4                         ; 0040c7d6
    MOV EBX,dword ptr [ECX + 0x30]      ; 0040c7d9
    MOV ECX,dword ptr [ECX + 0x34]      ; 0040c7dc
    INC EAX                             ; 0040c7df
    MOV dword ptr [EBX],ECX             ; 0040c7e0
    CMP EAX,ESI                         ; 0040c7e2
    JL 0x0040c7d0                       ; 0040c7e4
        ;   XREF to: 0040c7d0 (CONDITIONAL_JUMP)  ; LAB_0040c7d0
    POP EBX                             ; 0040c7e6
    MOV dword ptr [0x00822044],ESI      ; 0040c7e7 | g_NumActorClassTypes
        ;   Label: LAB_0040c7e7
    POP ESI                             ; 0040c7ed
    RET                                 ; 0040c7ee

