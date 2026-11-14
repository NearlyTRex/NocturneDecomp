; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_0051b7b0(int *param_1)
;
;
; XREF[4]:
;   core_event.cpp_FUN_004a1d00 at 004a4c4c
;   core_mission.cpp_CDemonMission_process_FUN_0051b8d0 at 0051b92b
;   core_mission.cpp_CDemonMission_run_FUN_0051bad0 at 0051bb38
;   core_mission.cpp_FUN_0051b610 at 0051b685
;
; Referenced Globals:
;   TerminatedCString s_none_005e9855
;   TerminatedCString s_core_mission_cpp_005e985a
;   TerminatedCString s_CDemonMission_buildActiv_005e986e
;   undefined4 DAT_0061b4d0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_main.c_FUN_005030e0
;   core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0
;   core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005593e0
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b7b0
        ;   Label: core_mission.cpp_FUN_0051b7b0
    PUSH ESI                            ; 0051b7b1
    PUSH EDI                            ; 0051b7b2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0051b7b3
    MOV EAX,[0x00622c18]                ; 0051b7b7 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x14d164],0x0  ; 0051b7bc | g_CDemonSetInstance.actor_count
    MOV EBX,dword ptr [EDI + 0x1118]    ; 0051b7c6
    TEST EBX,EBX                        ; 0051b7cc
    JZ 0x0051b7e1                       ; 0051b7ce
        ;   XREF to: 0051b7e1 (CONDITIONAL_JUMP)  ; LAB_0051b7e1
    MOV EDX,dword ptr [EDI]             ; 0051b7d0
        ;   Label: LAB_0051b7d0
    CMP EDX,dword ptr [EBX + 0x2c]      ; 0051b7d2
    JZ 0x0051b802                       ; 0051b7d5
        ;   XREF to: 0051b802 (CONDITIONAL_JUMP)  ; LAB_0051b802
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0051b7d7
        ;   Label: LAB_0051b7d7
    TEST EBX,EBX                        ; 0051b7dd
    JNZ 0x0051b7d0                      ; 0051b7df
        ;   XREF to: 0051b7d0 (CONDITIONAL_JUMP)  ; LAB_0051b7d0
    MOV EAX,[0x00622c18]                ; 0051b7e1 | g_CDemonSetPtr
        ;   Label: LAB_0051b7e1
    PUSH EAX                            ; 0051b7e6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005593e0 ; 0051b7e7
        ;   XREF to: 005593e0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005593e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0051b7ec
    MOV EDX,dword ptr [0x00622c18]      ; 0051b7ef | g_CDemonSetPtr
    PUSH EDX                            ; 0051b7f5 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0 ; 0051b7f6
        ;   XREF to: 00555ad0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0051b7fb
    POP EDI                             ; 0051b7fe
    POP ESI                             ; 0051b7ff
    POP EBX                             ; 0051b800
    RET                                 ; 0051b801
    CMP dword ptr [EBX + 0x70],0x0      ; 0051b802
        ;   Label: LAB_0051b802
    JNZ 0x0051b8aa                      ; 0051b806
        ;   XREF to: 0051b8aa (CONDITIONAL_JUMP)  ; LAB_0051b8aa
    CMP byte ptr [EBX + 0x78],0x0       ; 0051b80c
    JNZ 0x0051b87d                      ; 0051b810
        ;   XREF to: 0051b87d (CONDITIONAL_JUMP)  ; LAB_0051b87d
    PUSH dword ptr [EBX + 0x74]         ; 0051b812
        ;   Label: LAB_0051b812
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0051b815
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0051b81a
    TEST EAX,EAX                        ; 0051b81d
    JZ 0x0051b8b9                       ; 0051b81f
        ;   XREF to: 0051b8b9 (CONDITIONAL_JUMP)  ; LAB_0051b8b9
    MOV dword ptr [EBX + 0x70],0x1      ; 0051b825
    MOV EAX,[0x00622c18]                ; 0051b82c | g_CDemonSetPtr
        ;   Label: LAB_0051b82c
    CMP dword ptr [EAX + 0x14d164],0x7d0 ; 0051b831 | g_CDemonSetInstance.actor_count
    JL 0x0051b860                       ; 0051b83b
        ;   XREF to: 0051b860 (CONDITIONAL_JUMP)  ; LAB_0051b860
    MOV ECX,0x5e985a                    ; 0051b83d | = "..\\core\\mission.cpp"
    MOV ESI,0x497                       ; 0051b842
    PUSH 0x5e986e                       ; 0051b847 | = "CDemonMission::buildActiveSetActorLis..."
    MOV dword ptr [0x01d1d400],ECX      ; 0051b84c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0051b852 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051b858
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051b85d
    MOV EAX,[0x00622c18]                ; 0051b860 | g_CDemonSetPtr
        ;   Label: LAB_0051b860
    MOV ESI,dword ptr [EAX + 0x14d164]  ; 0051b865 | g_CDemonSetInstance.actor_count
    MOV dword ptr [EAX + ESI*0x4 + 0x14d168],EBX ; 0051b86b | g_CDemonSetInstance.actors[0]
    INC dword ptr [EAX + 0x14d164]      ; 0051b872 | g_CDemonSetInstance.actor_count
    JMP 0x0051b7d7                      ; 0051b878
        ;   XREF to: 0051b7d7 (UNCONDITIONAL_JUMP)  ; LAB_0051b7d7
    PUSH 0x5e9855                       ; 0051b87d | = "none"
        ;   Label: LAB_0051b87d
    LEA ESI,[EBX + 0x78]                ; 0051b882
    PUSH ESI                            ; 0051b885
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0051b886
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0051b88b
    TEST EAX,EAX                        ; 0051b88e
    JZ 0x0051b812                       ; 0051b890
        ;   XREF to: 0051b812 (CONDITIONAL_JUMP)  ; LAB_0051b812
    PUSH ESI                            ; 0051b892
    MOV ESI,dword ptr [0x0061b4d0]      ; 0051b893 | DAT_0061b4d0
    PUSH ESI                            ; 0051b899
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0051b89a
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0051b89f
    TEST EAX,EAX                        ; 0051b8a2
    JNZ 0x0051b812                      ; 0051b8a4
        ;   XREF to: 0051b812 (CONDITIONAL_JUMP)  ; LAB_0051b812
    CMP dword ptr [EBX + 0x70],0x1      ; 0051b8aa
        ;   Label: LAB_0051b8aa
    JZ 0x0051b82c                       ; 0051b8ae
        ;   XREF to: 0051b82c (CONDITIONAL_JUMP)  ; LAB_0051b82c
    JMP 0x0051b7d7                      ; 0051b8b4
        ;   XREF to: 0051b7d7 (UNCONDITIONAL_JUMP)  ; LAB_0051b7d7
    MOV dword ptr [EBX + 0x70],0x2      ; 0051b8b9
        ;   Label: LAB_0051b8b9
    JMP 0x0051b7d7                      ; 0051b8c0
        ;   XREF to: 0051b7d7 (UNCONDITIONAL_JUMP)  ; LAB_0051b7d7

