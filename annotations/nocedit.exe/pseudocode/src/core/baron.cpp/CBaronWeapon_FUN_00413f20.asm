; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_baron_cpp_CBaronWeapon_FUN_00413f20(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_baron.cpp_CBaronWeapon_FUN_00413df0 at 00413df6
;   core_baron.cpp_CBaronWeapon_FUN_00413e30 at 00413e36
;   core_baron.cpp_CBaronWeapon_process_FUN_00413dc0 at 00413dc5
;   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90 at 00413ee9
;
; Referenced Globals:
;   TerminatedCString s_CBaron_0061510c
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CBaronClassInfo.name_hash
;   CDemonMission g_CDemonMissionInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70
;   core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413f20
        ;   Label: core_baron.cpp_CBaronWeapon_FUN_00413f20
    PUSH ESI                            ; 00413f21
    PUSH EDI                            ; 00413f22
    PUSH EBP                            ; 00413f23
    MOV EDI,dword ptr [ESP + 0x14]      ; 00413f24
    CMP dword ptr [EDI + 0x578],0x0     ; 00413f28
    JNZ 0x00413f4b                      ; 00413f2f
        ;   XREF to: 00413f4b (CONDITIONAL_JUMP)  ; LAB_00413f4b
    XOR ESI,ESI                         ; 00413f31
    XOR EBX,EBX                         ; 00413f33
    MOV EAX,[0x006810c8]                ; 00413f35 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00413f35
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 00413f3a | g_CDemonSetInstance.actor_list_ptr
    JL 0x00413f50                       ; 00413f40
        ;   XREF to: 00413f50 (CONDITIONAL_JUMP)  ; LAB_00413f50
    CMP dword ptr [EDI + 0x578],0x0     ; 00413f42
        ;   Label: LAB_00413f42
    JZ 0x00413f77                       ; 00413f49
        ;   XREF to: 00413f77 (CONDITIONAL_JUMP)  ; LAB_00413f77
    POP EBP                             ; 00413f4b
        ;   Label: LAB_00413f4b
    POP EDI                             ; 00413f4c
    POP ESI                             ; 00413f4d
    POP EBX                             ; 00413f4e
    RET                                 ; 00413f4f
    MOV EBP,dword ptr [0x00822518]      ; 00413f50 | g_CBaronClassInfo.name_hash
        ;   Label: LAB_00413f50
    PUSH EBP                            ; 00413f56
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 00413f57 | g_CDemonSetInstance.actor_list_data[0]
    PUSH EDX                            ; 00413f5e
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00413f5f
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00413f64
    MOV dword ptr [EDI + 0x578],EAX     ; 00413f67
    TEST EAX,EAX                        ; 00413f6d
    JNZ 0x00413f42                      ; 00413f6f
        ;   XREF to: 00413f42 (CONDITIONAL_JUMP)  ; LAB_00413f42
    INC EBX                             ; 00413f71
    ADD ESI,0x4                         ; 00413f72
    JMP 0x00413f35                      ; 00413f75
        ;   XREF to: 00413f35 (UNCONDITIONAL_JUMP)  ; LAB_00413f35
    PUSH 0x61510c                       ; 00413f77 | = "CBaron"
        ;   Label: LAB_00413f77
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 00413f7c
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 00413f81
    PUSH EAX                            ; 00413f84
    MOV EBP,dword ptr [0x0067d550]      ; 00413f85 | g_CDemonMissionPtr
    PUSH EBP                            ; 00413f8b | g_CDemonMissionInstance
    MOV dword ptr [EDI + 0x578],EAX     ; 00413f8c
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 00413f92
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00413f97
    MOV EAX,dword ptr [EDI + 0x578]     ; 00413f9a
    PUSH EAX                            ; 00413fa0
    MOV EBX,dword ptr [EAX + 0x154]     ; 00413fa1
    CALL dword ptr [EBX]                ; 00413fa7
    ADD ESP,0x4                         ; 00413fa9
    MOV EAX,dword ptr [EDI + 0x578]     ; 00413fac
    PUSH EAX                            ; 00413fb2
    MOV EDX,dword ptr [0x0067d550]      ; 00413fb3 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EDX                            ; 00413fb9 | g_CDemonMissionInstance
    LEA ESI,[EDI + 0x30]                ; 00413fba
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70 ; 00413fbd
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00413fc2
    ADD EDI,0x20                        ; 00413fc5
    PUSH ESI                            ; 00413fc8
    MOV EAX,dword ptr [EDI + 0x558]     ; 00413fc9
    PUSH EDI                            ; 00413fcf
    MOV EBX,dword ptr [EAX + 0x154]     ; 00413fd0
    PUSH EAX                            ; 00413fd6
    CALL dword ptr [EBX + 0x60]         ; 00413fd7
    ADD ESP,0xc                         ; 00413fda
    POP EBP                             ; 00413fdd
    POP EDI                             ; 00413fde
    POP ESI                             ; 00413fdf
    POP EBX                             ; 00413fe0
    RET                                 ; 00413fe1

