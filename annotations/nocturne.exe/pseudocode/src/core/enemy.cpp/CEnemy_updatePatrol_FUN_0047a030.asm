; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy *this_ptr,float delta_time)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[18]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 00412a43
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413f7a
;   core_boneguy.cpp_CBoneGuy_process_FUN_00418a00 at 004192c7
;   core_bride.cpp_CBride_process_FUN_0041fe40 at 0041ff75
;   core_cow.cpp_CZombieCow_process_FUN_0043bdb0 at 0043c12b
;   core_dog.cpp_CZombieDog_process_FUN_00454750 at 00454b21
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90 at 0045985d
;   core_drone.cpp_CDrone_process_FUN_00462a60 at 00462edb
;   core_gargoyle.cpp_CGargoyle_process_FUN_004a7870 at 004a7e90
;   core_ghoul.cpp_CGhoul_process_FUN_004a9270 at 004aa1da
;   ... and 8 more
;
; Referenced Globals:
;   TerminatedCString s_Capture_0057f38f
;   undefined4 DAT_005b7650
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c777c0
;
; Called Functions:
;   core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a030
        ;   Label: core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047a031
    MOV EAX,[0x005b9354]                ; 0047a035 | DAT_005b9354
    CMP dword ptr [EAX + 0x1d4],0x0     ; 0047a03a | DAT_01c777c0
    JNZ 0x0047a05b                      ; 0047a041
        ;   XREF to: 0047a05b (CONDITIONAL_JUMP)  ; LAB_0047a05b
    PUSH 0x57f38f                       ; 0047a043 | = "Capture"
    MOV ECX,dword ptr [0x005b7650]      ; 0047a048 | DAT_005b7650
    PUSH ECX                            ; 0047a04e
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0047a04f
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0047a054
    TEST EAX,EAX                        ; 0047a057
    JZ 0x0047a06c                       ; 0047a059
        ;   XREF to: 0047a06c (CONDITIONAL_JUMP)  ; LAB_0047a06c
    PUSH 0x0                            ; 0047a05b
        ;   Label: LAB_0047a05b
    PUSH dword ptr [ESP + 0x10]         ; 0047a05d
    PUSH EBX                            ; 0047a061
    CALL core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0 ; 0047a062
        ;   XREF to: 0042a1e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0(CCharacter * this_ptr, float delta_time, char * pattern)
    ADD ESP,0xc                         ; 0047a067
    POP EBX                             ; 0047a06a
    RET                                 ; 0047a06b
    LEA EAX,[EBX + 0xbcb0]              ; 0047a06c
        ;   Label: LAB_0047a06c
    PUSH EAX                            ; 0047a072
    PUSH dword ptr [ESP + 0x10]         ; 0047a073
    PUSH EBX                            ; 0047a077
    CALL core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0 ; 0047a078
        ;   XREF to: 0042a1e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0(CCharacter * this_ptr, float delta_time, char * pattern)
    ADD ESP,0xc                         ; 0047a07d
    POP EBX                             ; 0047a080
    RET                                 ; 0047a081

