; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_loadSet_FUN_004d9020(CDemonMission *this_ptr,int set_index)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   set_index
;
; XREF[4]:
;   core_mission.cpp_CDemonMission_createFromSingleSet_FUN_004d93d0 at 004d9426
;   core_mission.cpp_CDemonMission_process_FUN_004d92a0 at 004d9396
;   core_mission.cpp_CDemonMission_run_FUN_004d9440 at 004d949b
;   core_mission.cpp_CDemonMission_startMission_FUN_004d9780 at 004d9802
;
; Referenced Globals:
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;
; Called Functions:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0
;   core_set.cpp_CDemonSet_load_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9020
        ;   Label: core_mission.cpp_CDemonMission_loadSet_FUN_004d9020
    PUSH ESI                            ; 004d9021
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d9022
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d9026
    CMP EAX,dword ptr [EBX]             ; 004d902a
    JNZ 0x004d9031                      ; 004d902c
        ;   XREF to: 004d9031 (CONDITIONAL_JUMP)  ; LAB_004d9031
    POP ESI                             ; 004d902e
        ;   Label: LAB_004d902e
    POP EBX                             ; 004d902f
    RET                                 ; 004d9030
    MOV EDX,EAX                         ; 004d9031
        ;   Label: LAB_004d9031
    MOV dword ptr [EBX],EAX             ; 004d9033
    SHL EDX,0x8                         ; 004d9035
    LEA EAX,[EBX + 0x114]               ; 004d9038
    ADD EAX,EDX                         ; 004d903e
    PUSH EAX                            ; 004d9040
    MOV ECX,dword ptr [0x005be368]      ; 004d9041 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 004d9047 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_load_FUN_00506f10 ; 004d9048
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_load_FUN_00506f10(CDemonSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d904d
    PUSH EBX                            ; 004d9050
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0 ; 004d9051
        ;   XREF to: 004d8ee0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(CDemonMission * this_ptr)
    MOV ESI,dword ptr [EBX + 0x850]     ; 004d9056
    ADD ESP,0x4                         ; 004d905c
    TEST ESI,ESI                        ; 004d905f
    JZ 0x004d908e                       ; 004d9061
        ;   XREF to: 004d908e (CONDITIONAL_JUMP)  ; LAB_004d908e
    XOR ESI,ESI                         ; 004d9063
        ;   Label: LAB_004d9063
    XOR EBX,EBX                         ; 004d9065
    MOV EAX,[0x005be368]                ; 004d9067 | g_CDemonSet_PTR_005be368 | g_CDemonSet_01e57284
        ;   Label: LAB_004d9067
    CMP EBX,dword ptr [EAX + 0x14cd6c]  ; 004d906c | g_CDemonSet_01e57284.actor_count
    JGE 0x004d902e                      ; 004d9072
        ;   XREF to: 004d902e (CONDITIONAL_JUMP)  ; LAB_004d902e
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x14cd70] ; 004d9074 | g_CDemonSet_01e57284.actors[0]
    PUSH EAX                            ; 004d907b
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004d907c
    ADD ESI,0x4                         ; 004d9082
    INC EBX                             ; 004d9085
    CALL dword ptr [EDX + 0x48]         ; 004d9086
    ADD ESP,0x4                         ; 004d9089
    JMP 0x004d9067                      ; 004d908c
        ;   XREF to: 004d9067 (UNCONDITIONAL_JUMP)  ; LAB_004d9067
    PUSH EBX                            ; 004d908e
        ;   Label: LAB_004d908e
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0 ; 004d908f
        ;   XREF to: 004d8db0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004d9094
    JMP 0x004d9063                      ; 004d9097
        ;   XREF to: 004d9063 (UNCONDITIONAL_JUMP)  ; LAB_004d9063

