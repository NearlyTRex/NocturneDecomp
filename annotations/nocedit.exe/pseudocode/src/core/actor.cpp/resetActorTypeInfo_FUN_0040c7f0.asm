; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_resetActorTypeInfo_FUN_0040c7f0(void)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 at 00523020
;
; Referenced Globals:
;   int g_NumActorClassTypes
;   CDemonActorType*[200] g_ActorClassRegistrations
;   undefined4 g_ActorClassRegistrations[1]
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c7f0
        ;   Label: core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0
    MOV EBX,dword ptr [0x00822044]      ; 0040c7f1 | g_NumActorClassTypes
    XOR EDX,EDX                         ; 0040c7f7
    TEST EBX,EBX                        ; 0040c7f9
    JLE 0x0040c820                      ; 0040c7fb
        ;   XREF to: 0040c820 (CONDITIONAL_JUMP)  ; LAB_0040c820
    XOR EAX,EAX                         ; 0040c7fd
    MOV ECX,dword ptr [EAX + 0x822048]  ; 0040c7ff | g_ActorClassRegistrations | g_ActorClassRegistrations[1]
        ;   Label: LAB_0040c7ff
    MOV ECX,dword ptr [ECX + 0x30]      ; 0040c805
    ADD EAX,0x4                         ; 0040c808
    INC EDX                             ; 0040c80b
    MOV dword ptr [ECX],0x1             ; 0040c80c
    CMP EDX,EBX                         ; 0040c812
    JL 0x0040c7ff                       ; 0040c814
        ;   XREF to: 0040c7ff (CONDITIONAL_JUMP)  ; LAB_0040c7ff
    LEA EAX,[EAX]                       ; 0040c816
    LEA EDX,[EDX]                       ; 0040c81c
    MOV dword ptr [0x00822044],EBX      ; 0040c820 | g_NumActorClassTypes
        ;   Label: LAB_0040c820
    POP EBX                             ; 0040c826
    RET                                 ; 0040c827

