; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_process_FUN_004d92a0 at 004d92eb
;   core_mission.cpp_CDemonMission_run_FUN_004d9440 at 004d94ac
;
; Referenced Globals:
;   TerminatedCString s_none_00589d44
;   TerminatedCString s_core_mission_cpp_00589d49
;   TerminatedCString s_CDemonMission_buildActiv_00589d5d
;   undefined4 DAT_005b7650
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_main.c_FUN_004c8440
;   core_set.cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0
;   core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9180
        ;   Label: core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180
    PUSH ESI                            ; 004d9181
    PUSH EDI                            ; 004d9182
    MOV EDI,dword ptr [ESP + 0x10]      ; 004d9183
    MOV EAX,[0x005be368]                ; 004d9187 | g_CDemonSet_PTR_005be368
    MOV dword ptr [EAX + 0x14cd6c],0x0  ; 004d918c | g_CDemonSet_01e57284.actor_count
    MOV EBX,dword ptr [EDI + 0x514]     ; 004d9196
    TEST EBX,EBX                        ; 004d919c
    JZ 0x004d91b1                       ; 004d919e
        ;   XREF to: 004d91b1 (CONDITIONAL_JUMP)  ; LAB_004d91b1
    MOV EDX,dword ptr [EDI]             ; 004d91a0
        ;   Label: LAB_004d91a0
    CMP EDX,dword ptr [EBX + 0x2c]      ; 004d91a2
    JZ 0x004d91d2                       ; 004d91a5
        ;   XREF to: 004d91d2 (CONDITIONAL_JUMP)  ; LAB_004d91d2
    MOV EBX,dword ptr [EBX + 0x144]     ; 004d91a7
        ;   Label: LAB_004d91a7
    TEST EBX,EBX                        ; 004d91ad
    JNZ 0x004d91a0                      ; 004d91af
        ;   XREF to: 004d91a0 (CONDITIONAL_JUMP)  ; LAB_004d91a0
    MOV EAX,[0x005be368]                ; 004d91b1 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_004d91b1
    PUSH EAX                            ; 004d91b6 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0 ; 004d91b7
        ;   XREF to: 005119b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d91bc
    MOV EDX,dword ptr [0x005be368]      ; 004d91bf | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 004d91c5 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0 ; 004d91c6
        ;   XREF to: 0050e6b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d91cb
    POP EDI                             ; 004d91ce
    POP ESI                             ; 004d91cf
    POP EBX                             ; 004d91d0
    RET                                 ; 004d91d1
    CMP dword ptr [EBX + 0x70],0x0      ; 004d91d2
        ;   Label: LAB_004d91d2
    JNZ 0x004d927a                      ; 004d91d6
        ;   XREF to: 004d927a (CONDITIONAL_JUMP)  ; LAB_004d927a
    CMP byte ptr [EBX + 0x78],0x0       ; 004d91dc
    JNZ 0x004d924d                      ; 004d91e0
        ;   XREF to: 004d924d (CONDITIONAL_JUMP)  ; LAB_004d924d
    PUSH dword ptr [EBX + 0x74]         ; 004d91e2
        ;   Label: LAB_004d91e2
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004d91e5
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 004d91ea
    TEST EAX,EAX                        ; 004d91ed
    JZ 0x004d9289                       ; 004d91ef
        ;   XREF to: 004d9289 (CONDITIONAL_JUMP)  ; LAB_004d9289
    MOV dword ptr [EBX + 0x70],0x1      ; 004d91f5
    MOV EAX,[0x005be368]                ; 004d91fc | g_CDemonSet_PTR_005be368
        ;   Label: LAB_004d91fc
    CMP dword ptr [EAX + 0x14cd6c],0x7d0 ; 004d9201 | g_CDemonSet_01e57284.actor_count
    JL 0x004d9230                       ; 004d920b
        ;   XREF to: 004d9230 (CONDITIONAL_JUMP)  ; LAB_004d9230
    MOV ECX,0x589d49                    ; 004d920d | = "..\\core\\mission.cpp"
    MOV ESI,0x44e                       ; 004d9212
    PUSH 0x589d5d                       ; 004d9217 | = "CDemonMission::buildActiveSetActorLis..."
    MOV dword ptr [0x01cc4800],ECX      ; 004d921c | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004d9222 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d9228
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d922d
    MOV EAX,[0x005be368]                ; 004d9230 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_004d9230
    MOV ESI,dword ptr [EAX + 0x14cd6c]  ; 004d9235 | g_CDemonSet_01e57284.actor_count
    MOV dword ptr [EAX + ESI*0x4 + 0x14cd70],EBX ; 004d923b | g_CDemonSet_01e57284.actors[0]
    INC dword ptr [EAX + 0x14cd6c]      ; 004d9242 | g_CDemonSet_01e57284.actor_count
    JMP 0x004d91a7                      ; 004d9248
        ;   XREF to: 004d91a7 (UNCONDITIONAL_JUMP)  ; LAB_004d91a7
    PUSH 0x589d44                       ; 004d924d | = "none"
        ;   Label: LAB_004d924d
    LEA ESI,[EBX + 0x78]                ; 004d9252
    PUSH ESI                            ; 004d9255
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d9256
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d925b
    TEST EAX,EAX                        ; 004d925e
    JZ 0x004d91e2                       ; 004d9260
        ;   XREF to: 004d91e2 (CONDITIONAL_JUMP)  ; LAB_004d91e2
    PUSH ESI                            ; 004d9262
    MOV ESI,dword ptr [0x005b7650]      ; 004d9263 | DAT_005b7650
    PUSH ESI                            ; 004d9269
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004d926a
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004d926f
    TEST EAX,EAX                        ; 004d9272
    JNZ 0x004d91e2                      ; 004d9274
        ;   XREF to: 004d91e2 (CONDITIONAL_JUMP)  ; LAB_004d91e2
    CMP dword ptr [EBX + 0x70],0x1      ; 004d927a
        ;   Label: LAB_004d927a
    JZ 0x004d91fc                       ; 004d927e
        ;   XREF to: 004d91fc (CONDITIONAL_JUMP)  ; LAB_004d91fc
    JMP 0x004d91a7                      ; 004d9284
        ;   XREF to: 004d91a7 (UNCONDITIONAL_JUMP)  ; LAB_004d91a7
    MOV dword ptr [EBX + 0x70],0x2      ; 004d9289
        ;   Label: LAB_004d9289
    JMP 0x004d91a7                      ; 004d9290
        ;   XREF to: 004d91a7 (UNCONDITIONAL_JUMP)  ; LAB_004d91a7

