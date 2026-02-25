; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   core_mission.cpp_CDemonMission_FUN_00523f50 at 00523f7f
;   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 at 00524b7b
;   core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0 at 00523fe1
;   core_msnedit.cpp_CDemonMission_FUN_0053bc80 at 0053bcba
;   core_msnedit.cpp_CDemonMission_FUN_0053bd80 at 0053bf42
;   core_msnedit.cpp_CDemonMission_FUN_0053d7b0 at 0053d814
;   core_msnedit.cpp_CDemonMission_FUN_0053d8b0 at 0053dbde
;   core_msnedit.cpp_CDemonMission_FUN_0053e220 at 0053e310
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 00539497
;   core_msnedit.cpp_CDemonMission_importActorsFrom_FUN_0053b9f0 at 0053bbea
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00639133
;   TerminatedCString s_core_mission_cpp_00639147
;   TerminatedCString s_CDemonMission_buildSetAc_0063915b
;   CDemonSet* g_CDemonSetPtr = 03114278
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00570fc0
;   core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005743e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523e60
        ;   Label: core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
    PUSH ESI                            ; 00523e61
    PUSH EDI                            ; 00523e62
    PUSH EBP                            ; 00523e63
    MOV ESI,dword ptr [ESP + 0x14]      ; 00523e64
    MOV EAX,[0x006810c8]                ; 00523e68 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x14d154],0x0  ; 00523e6d | g_CDemonSetInstance.actor_count
    MOV EBX,dword ptr [ESI + 0x548]     ; 00523e77
    TEST EBX,EBX                        ; 00523e7d
    JZ 0x00523eb1                       ; 00523e7f
        ;   XREF to: 00523eb1 (CONDITIONAL_JUMP)  ; LAB_00523eb1
    MOV EDI,0x639147                    ; 00523e81 | = "..\\core\\mission.cpp"
    MOV EBP,0x36d                       ; 00523e86
    PUSH 0x365                          ; 00523e8b
        ;   Label: LAB_00523e8b
    PUSH 0x639133                       ; 00523e90 | = "..\\core\\mission.cpp"
    PUSH EBX                            ; 00523e95
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00523e96
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00523e9b
    MOV EDX,dword ptr [ESI]             ; 00523e9e
    ADD ESP,0xc                         ; 00523ea0
    CMP EAX,EDX                         ; 00523ea3
    JZ 0x00523ed4                       ; 00523ea5
        ;   XREF to: 00523ed4 (CONDITIONAL_JUMP)  ; LAB_00523ed4
    MOV EBX,dword ptr [EBX + 0x14c]     ; 00523ea7
        ;   Label: LAB_00523ea7
    TEST EBX,EBX                        ; 00523ead
    JNZ 0x00523e8b                      ; 00523eaf
        ;   XREF to: 00523e8b (CONDITIONAL_JUMP)  ; LAB_00523e8b
    MOV ECX,dword ptr [0x006810c8]      ; 00523eb1 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00523eb1
    PUSH ECX                            ; 00523eb7 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005743e0 ; 00523eb8
        ;   XREF to: 005743e0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005743e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00523ebd
    MOV EBX,dword ptr [0x006810c8]      ; 00523ec0 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 00523ec6 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00570fc0 ; 00523ec7
        ;   XREF to: 00570fc0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00570fc0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00523ecc
    POP EBP                             ; 00523ecf
    POP EDI                             ; 00523ed0
    POP ESI                             ; 00523ed1
    POP EBX                             ; 00523ed2
    RET                                 ; 00523ed3
    MOV EAX,[0x006810c8]                ; 00523ed4 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00523ed4
    CMP dword ptr [EAX + 0x14d154],0x7d0 ; 00523ed9 | g_CDemonSetInstance.actor_count
    JL 0x00523efe                       ; 00523ee3
        ;   XREF to: 00523efe (CONDITIONAL_JUMP)  ; LAB_00523efe
    PUSH 0x63915b                       ; 00523ee5 | = "CDemonMission::buildSetActorList - To..."
    MOV dword ptr [0x02f0ca48],EDI      ; 00523eea | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00523ef0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00523ef6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00523efb
    MOV EAX,[0x006810c8]                ; 00523efe | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00523efe
    MOV EDX,dword ptr [EAX + 0x14d154]  ; 00523f03 | g_CDemonSetInstance.actor_count
    MOV dword ptr [EAX + EDX*0x4 + 0x14d158],EBX ; 00523f09 | g_CDemonSetInstance.actors[0]
    INC dword ptr [EAX + 0x14d154]      ; 00523f10 | g_CDemonSetInstance.actor_count
    JMP 0x00523ea7                      ; 00523f16
        ;   XREF to: 00523ea7 (UNCONDITIONAL_JUMP)  ; LAB_00523ea7

