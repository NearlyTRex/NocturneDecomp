; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_process_FUN_00524250 at 005242bb
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 0052448c
;   core_msnedit.cpp_CDemonMission_playMission_FUN_00538ba0 at 00538c95
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_006391fb
;   TerminatedCString s_none_0063920f
;   TerminatedCString s_core_mission_cpp_00639214
;   TerminatedCString s_CDemonMission_buildActiv_00639228
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEventList g_CEventListInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_FUN_00570fc0
;   core_setcolid.cpp_CDemonSet_FUN_005743e0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524120
        ;   Label: core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
    PUSH ESI                            ; 00524121
    PUSH EDI                            ; 00524122
    MOV EDI,dword ptr [ESP + 0x10]      ; 00524123
    MOV EAX,[0x006810c8]                ; 00524127 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x14d154],0x0  ; 0052412c | g_CDemonSetInstance.actor_list_ptr
    MOV EBX,dword ptr [EDI + 0x548]     ; 00524136
    TEST EBX,EBX                        ; 0052413c
    JZ 0x00524166                       ; 0052413e
        ;   XREF to: 00524166 (CONDITIONAL_JUMP)  ; LAB_00524166
    PUSH 0x423                          ; 00524140
        ;   Label: LAB_00524140
    PUSH 0x6391fb                       ; 00524145 | = "..\\core\\mission.cpp"
    PUSH EBX                            ; 0052414a
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0052414b
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00524150
    MOV EDX,dword ptr [EDI]             ; 00524153
    ADD ESP,0xc                         ; 00524155
    CMP EAX,EDX                         ; 00524158
    JZ 0x00524187                       ; 0052415a
        ;   XREF to: 00524187 (CONDITIONAL_JUMP)  ; LAB_00524187
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0052415c
        ;   Label: LAB_0052415c
    TEST EBX,EBX                        ; 00524162
    JNZ 0x00524140                      ; 00524164
        ;   XREF to: 00524140 (CONDITIONAL_JUMP)  ; LAB_00524140
    MOV EAX,[0x006810c8]                ; 00524166 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00524166
    PUSH EAX                            ; 0052416b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_FUN_005743e0 ; 0052416c
        ;   XREF to: 005743e0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_FUN_005743e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00524171
    MOV EDX,dword ptr [0x006810c8]      ; 00524174 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0052417a | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00570fc0 ; 0052417b
        ;   XREF to: 00570fc0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570fc0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00524180
    POP EDI                             ; 00524183
    POP ESI                             ; 00524184
    POP EBX                             ; 00524185
    RET                                 ; 00524186
    CMP dword ptr [EBX + 0x70],0x0      ; 00524187
        ;   Label: LAB_00524187
    JNZ 0x0052422f                      ; 0052418b
        ;   XREF to: 0052422f (CONDITIONAL_JUMP)  ; LAB_0052422f
    CMP byte ptr [EBX + 0x78],0x0       ; 00524191
    JNZ 0x00524202                      ; 00524195
        ;   XREF to: 00524202 (CONDITIONAL_JUMP)  ; LAB_00524202
    PUSH dword ptr [EBX + 0x74]         ; 00524197
        ;   Label: LAB_00524197
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0052419a
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 0052419f
    TEST EAX,EAX                        ; 005241a2
    JZ 0x0052423e                       ; 005241a4
        ;   XREF to: 0052423e (CONDITIONAL_JUMP)  ; LAB_0052423e
    MOV dword ptr [EBX + 0x70],0x1      ; 005241aa
    MOV EAX,[0x006810c8]                ; 005241b1 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005241b1
    CMP dword ptr [EAX + 0x14d154],0x7d0 ; 005241b6 | g_CDemonSetInstance.actor_list_ptr
    JL 0x005241e5                       ; 005241c0
        ;   XREF to: 005241e5 (CONDITIONAL_JUMP)  ; LAB_005241e5
    MOV ECX,0x639214                    ; 005241c2 | = "..\\core\\mission.cpp"
    MOV ESI,0x44e                       ; 005241c7
    PUSH 0x639228                       ; 005241cc | = "CDemonMission::buildActiveSetActorLis..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005241d1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005241d7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005241dd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005241e2
    MOV EAX,[0x006810c8]                ; 005241e5 | g_CDemonSetPtr
        ;   Label: LAB_005241e5
    MOV ESI,dword ptr [EAX + 0x14d154]  ; 005241ea | g_CDemonSetInstance.actor_list_ptr
    MOV dword ptr [EAX + ESI*0x4 + 0x14d158],EBX ; 005241f0 | g_CDemonSetInstance.actor_list_data[0]
    INC dword ptr [EAX + 0x14d154]      ; 005241f7 | g_CDemonSetInstance.actor_list_ptr
    JMP 0x0052415c                      ; 005241fd
        ;   XREF to: 0052415c (UNCONDITIONAL_JUMP)  ; LAB_0052415c
    PUSH 0x63920f                       ; 00524202 | = "none"
        ;   Label: LAB_00524202
    LEA ESI,[EBX + 0x78]                ; 00524207
    PUSH ESI                            ; 0052420a
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0052420b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00524210
    TEST EAX,EAX                        ; 00524213
    JZ 0x00524197                       ; 00524215
        ;   XREF to: 00524197 (CONDITIONAL_JUMP)  ; LAB_00524197
    PUSH ESI                            ; 00524217
    MOV ESI,dword ptr [0x006793d0]      ; 00524218 | g_CEventListPtr
    PUSH ESI                            ; 0052421e | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0052421f
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00524224
    TEST EAX,EAX                        ; 00524227
    JNZ 0x00524197                      ; 00524229
        ;   XREF to: 00524197 (CONDITIONAL_JUMP)  ; LAB_00524197
    CMP dword ptr [EBX + 0x70],0x1      ; 0052422f
        ;   Label: LAB_0052422f
    JZ 0x005241b1                       ; 00524233
        ;   XREF to: 005241b1 (CONDITIONAL_JUMP)  ; LAB_005241b1
    JMP 0x0052415c                      ; 00524239
        ;   XREF to: 0052415c (UNCONDITIONAL_JUMP)  ; LAB_0052415c
    MOV dword ptr [EBX + 0x70],0x2      ; 0052423e
        ;   Label: LAB_0052423e
    JMP 0x0052415c                      ; 00524245
        ;   XREF to: 0052415c (UNCONDITIONAL_JUMP)  ; LAB_0052415c

