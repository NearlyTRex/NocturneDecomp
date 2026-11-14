; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_004f6f80(int *param_1)
;
;
; XREF[4]:
;   core_event.cpp_FUN_0048c2e0 at 0048f54e
;   core_mission.cpp_CDemonMission_process_FUN_004f70a0 at 004f70fb
;   core_mission.cpp_CDemonMission_run_FUN_004f72a0 at 004f7308
;   core_mission.cpp_FUN_004f6de0 at 004f6e55
;
; Referenced Globals:
;   undefined4 DAT_005c8b57
;   TerminatedCString s_core_mission_cpp_005c8b5c
;   TerminatedCString s_CDemonMission_buildActiv_005c8b70
;   undefined4 DAT_005fba60
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_main.c_FUN_004e4330
;   core_set.cpp_FUN_0053b460
;   core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_0053eda0
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6f80
        ;   Label: core_mission.cpp_FUN_004f6f80
    PUSH ESI                            ; 004f6f81
    PUSH EDI                            ; 004f6f82
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f6f83
    MOV EAX,[0x00603b28]                ; 004f6f87 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x14d164],0x0  ; 004f6f8c | g_CDemonSetInstance.actor_count
    MOV EBX,dword ptr [EDI + 0x143c]    ; 004f6f96
    TEST EBX,EBX                        ; 004f6f9c
    JZ 0x004f6fb1                       ; 004f6f9e
        ;   XREF to: 004f6fb1 (CONDITIONAL_JUMP)  ; LAB_004f6fb1
    MOV EDX,dword ptr [EDI]             ; 004f6fa0
        ;   Label: LAB_004f6fa0
    CMP EDX,dword ptr [EBX + 0x2c]      ; 004f6fa2
    JZ 0x004f6fd2                       ; 004f6fa5
        ;   XREF to: 004f6fd2 (CONDITIONAL_JUMP)  ; LAB_004f6fd2
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004f6fa7
        ;   Label: LAB_004f6fa7
    TEST EBX,EBX                        ; 004f6fad
    JNZ 0x004f6fa0                      ; 004f6faf
        ;   XREF to: 004f6fa0 (CONDITIONAL_JUMP)  ; LAB_004f6fa0
    MOV EAX,[0x00603b28]                ; 004f6fb1 | g_CDemonSetPtr
        ;   Label: LAB_004f6fb1
    PUSH EAX                            ; 004f6fb6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_0053eda0 ; 004f6fb7
        ;   XREF to: 0053eda0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_0053eda0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004f6fbc
    MOV EDX,dword ptr [0x00603b28]      ; 004f6fbf | g_CDemonSetPtr
    PUSH EDX                            ; 004f6fc5 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_0053b460      ; 004f6fc6
        ;   XREF to: 0053b460 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0053b460()
    ADD ESP,0x4                         ; 004f6fcb
    POP EDI                             ; 004f6fce
    POP ESI                             ; 004f6fcf
    POP EBX                             ; 004f6fd0
    RET                                 ; 004f6fd1
    CMP dword ptr [EBX + 0x70],0x0      ; 004f6fd2
        ;   Label: LAB_004f6fd2
    JNZ 0x004f707a                      ; 004f6fd6
        ;   XREF to: 004f707a (CONDITIONAL_JUMP)  ; LAB_004f707a
    CMP byte ptr [EBX + 0x78],0x0       ; 004f6fdc
    JNZ 0x004f704d                      ; 004f6fe0
        ;   XREF to: 004f704d (CONDITIONAL_JUMP)  ; LAB_004f704d
    PUSH dword ptr [EBX + 0x74]         ; 004f6fe2
        ;   Label: LAB_004f6fe2
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004f6fe5
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004f6fea
    TEST EAX,EAX                        ; 004f6fed
    JZ 0x004f7089                       ; 004f6fef
        ;   XREF to: 004f7089 (CONDITIONAL_JUMP)  ; LAB_004f7089
    MOV dword ptr [EBX + 0x70],0x1      ; 004f6ff5
    MOV EAX,[0x00603b28]                ; 004f6ffc | g_CDemonSetPtr
        ;   Label: LAB_004f6ffc
    CMP dword ptr [EAX + 0x14d164],0x7d0 ; 004f7001 | g_CDemonSetInstance.actor_count
    JL 0x004f7030                       ; 004f700b
        ;   XREF to: 004f7030 (CONDITIONAL_JUMP)  ; LAB_004f7030
    MOV ECX,0x5c8b5c                    ; 004f700d | = "..\\core\\mission.cpp"
    MOV ESI,0x497                       ; 004f7012
    PUSH 0x5c8b70                       ; 004f7017 | = "CDemonMission::buildActiveSetActorLis..."
    MOV dword ptr [0x01d71de0],ECX      ; 004f701c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004f7022 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f7028
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f702d
    MOV EAX,[0x00603b28]                ; 004f7030 | g_CDemonSetPtr
        ;   Label: LAB_004f7030
    MOV ESI,dword ptr [EAX + 0x14d164]  ; 004f7035 | g_CDemonSetInstance.actor_count
    MOV dword ptr [EAX + ESI*0x4 + 0x14d168],EBX ; 004f703b | g_CDemonSetInstance.actors[0]
    INC dword ptr [EAX + 0x14d164]      ; 004f7042 | g_CDemonSetInstance.actor_count
    JMP 0x004f6fa7                      ; 004f7048
        ;   XREF to: 004f6fa7 (UNCONDITIONAL_JUMP)  ; LAB_004f6fa7
    PUSH 0x5c8b57                       ; 004f704d | DAT_005c8b57
        ;   Label: LAB_004f704d
    LEA ESI,[EBX + 0x78]                ; 004f7052
    PUSH ESI                            ; 004f7055
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004f7056
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f705b
    TEST EAX,EAX                        ; 004f705e
    JZ 0x004f6fe2                       ; 004f7060
        ;   XREF to: 004f6fe2 (CONDITIONAL_JUMP)  ; LAB_004f6fe2
    PUSH ESI                            ; 004f7062
    MOV ESI,dword ptr [0x005fba60]      ; 004f7063 | DAT_005fba60
    PUSH ESI                            ; 004f7069
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004f706a
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f706f
    TEST EAX,EAX                        ; 004f7072
    JNZ 0x004f6fe2                      ; 004f7074
        ;   XREF to: 004f6fe2 (CONDITIONAL_JUMP)  ; LAB_004f6fe2
    CMP dword ptr [EBX + 0x70],0x1      ; 004f707a
        ;   Label: LAB_004f707a
    JZ 0x004f6ffc                       ; 004f707e
        ;   XREF to: 004f6ffc (CONDITIONAL_JUMP)  ; LAB_004f6ffc
    JMP 0x004f6fa7                      ; 004f7084
        ;   XREF to: 004f6fa7 (UNCONDITIONAL_JUMP)  ; LAB_004f6fa7
    MOV dword ptr [EBX + 0x70],0x2      ; 004f7089
        ;   Label: LAB_004f7089
    JMP 0x004f6fa7                      ; 004f7090
        ;   XREF to: 004f6fa7 (UNCONDITIONAL_JUMP)  ; LAB_004f6fa7

