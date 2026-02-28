; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_loadSet_FUN_00523fb0(CDemonMission *this_ptr,int set_index)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   set_index
;
; XREF[8]:
;   core_mission.cpp_CDemonMission_FUN_00524760 at 005247e2
;   core_mission.cpp_CDemonMission_createFromSingleSet_FUN_005243a0 at 00524405
;   core_mission.cpp_CDemonMission_process_FUN_00524250 at 00524366
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 0052447b
;   core_msnedit.cpp_CDemonMission_playMission_FUN_00538ba0 at 00538c5d
;   core_msnedit.cpp_CDemonMission_rebuildWaypointConnectivity_FUN_0053d7b0 at 0053d807
;   core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140 at 0053c1d1
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538898
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 DAT_032613d4
;
; Called Functions:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0
;   core_set.cpp_CDemonSet_load_FUN_00569410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523fb0
        ;   Label: core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0
    PUSH ESI                            ; 00523fb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00523fb2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00523fb6
    CMP EAX,dword ptr [EBX]             ; 00523fba
    JNZ 0x00523fc1                      ; 00523fbc
        ;   XREF to: 00523fc1 (CONDITIONAL_JUMP)  ; LAB_00523fc1
    POP ESI                             ; 00523fbe
        ;   Label: LAB_00523fbe
    POP EBX                             ; 00523fbf
    RET                                 ; 00523fc0
    MOV EDX,EAX                         ; 00523fc1
        ;   Label: LAB_00523fc1
    MOV dword ptr [EBX],EAX             ; 00523fc3
    SHL EDX,0x8                         ; 00523fc5
    LEA EAX,[EBX + 0x148]               ; 00523fc8
    ADD EAX,EDX                         ; 00523fce
    PUSH EAX                            ; 00523fd0
    MOV ECX,dword ptr [0x006810c8]      ; 00523fd1 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 00523fd7 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_load_FUN_00569410 ; 00523fd8
        ;   XREF to: 00569410 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_load_FUN_00569410(CDemonSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00523fdd
    PUSH EBX                            ; 00523fe0
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 00523fe1
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    MOV ESI,dword ptr [EBX + 0x884]     ; 00523fe6
    ADD ESP,0x4                         ; 00523fec
    TEST ESI,ESI                        ; 00523fef
    JZ 0x0052401e                       ; 00523ff1
        ;   XREF to: 0052401e (CONDITIONAL_JUMP)  ; LAB_0052401e
    XOR ESI,ESI                         ; 00523ff3
        ;   Label: LAB_00523ff3
    XOR EBX,EBX                         ; 00523ff5
    MOV EAX,[0x006810c8]                ; 00523ff7 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00523ff7
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 00523ffc | g_CDemonSetInstance.actor_count
    JGE 0x00523fbe                      ; 00524002
        ;   XREF to: 00523fbe (CONDITIONAL_JUMP)  ; LAB_00523fbe
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 00524004 | g_CDemonSetInstance.actors[0] | DAT_032613d4
    PUSH EAX                            ; 0052400b
    MOV EDX,dword ptr [EAX + 0x154]     ; 0052400c
    ADD ESI,0x4                         ; 00524012
    INC EBX                             ; 00524015
    CALL dword ptr [EDX + 0x48]         ; 00524016
    ADD ESP,0x4                         ; 00524019
    JMP 0x00523ff7                      ; 0052401c
        ;   XREF to: 00523ff7 (UNCONDITIONAL_JUMP)  ; LAB_00523ff7
    PUSH EBX                            ; 0052401e
        ;   Label: LAB_0052401e
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0 ; 0052401f
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00524024
    JMP 0x00523ff3                      ; 00524027
        ;   XREF to: 00523ff3 (UNCONDITIONAL_JUMP)  ; LAB_00523ff3

