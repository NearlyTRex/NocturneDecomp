; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_004fc820(int *param_1)
;
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_run_FUN_004fcb00 at 004fcb6c
;   core_mission.cpp_FUN_004fc940 at 004fc99b
;
; Referenced Globals:
;   undefined4 DAT_005de812
;   TerminatedCString s_core_mission_cpp_005de817
;   TerminatedCString s_CDemonMission_buildActiv_005de82b
;   undefined4 DAT_006141f0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_FUN_0040d060
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_main.c_FUN_004e4500
;   core_set.cpp_FUN_00534820
;   core_setcolid.cpp_FUN_00537fc0
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc820
        ;   Label: core_mission.cpp_FUN_004fc820
    PUSH ESI                            ; 004fc821
    PUSH EDI                            ; 004fc822
    MOV EDI,dword ptr [ESP + 0x10]      ; 004fc823
    MOV EAX,[0x0061b5a8]                ; 004fc827 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x14d164],0x0  ; 004fc82c | g_CDemonSetInstance.field1364324_0x14d164
    MOV EBX,dword ptr [EDI + 0x1114]    ; 004fc836
    TEST EBX,EBX                        ; 004fc83c
    JZ 0x004fc851                       ; 004fc83e
        ;   XREF to: 004fc851 (CONDITIONAL_JUMP)  ; LAB_004fc851
    MOV EDX,dword ptr [EDI]             ; 004fc840
        ;   Label: LAB_004fc840
    CMP EDX,dword ptr [EBX + 0x2c]      ; 004fc842
    JZ 0x004fc872                       ; 004fc845
        ;   XREF to: 004fc872 (CONDITIONAL_JUMP)  ; LAB_004fc872
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004fc847
        ;   Label: LAB_004fc847
    TEST EBX,EBX                        ; 004fc84d
    JNZ 0x004fc840                      ; 004fc84f
        ;   XREF to: 004fc840 (CONDITIONAL_JUMP)  ; LAB_004fc840
    MOV EAX,[0x0061b5a8]                ; 004fc851 | g_CDemonSetPtr
        ;   Label: LAB_004fc851
    PUSH EAX                            ; 004fc856
    CALL core_setcolid.cpp_FUN_00537fc0 ; 004fc857
        ;   XREF to: 00537fc0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_00537fc0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004fc85c
    MOV EDX,dword ptr [0x0061b5a8]      ; 004fc85f | g_CDemonSetPtr
    PUSH EDX                            ; 004fc865
    CALL core_set.cpp_FUN_00534820      ; 004fc866
        ;   XREF to: 00534820 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00534820(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004fc86b
    POP EDI                             ; 004fc86e
    POP ESI                             ; 004fc86f
    POP EBX                             ; 004fc870
    RET                                 ; 004fc871
    CMP dword ptr [EBX + 0x70],0x0      ; 004fc872
        ;   Label: LAB_004fc872
    JNZ 0x004fc91a                      ; 004fc876
        ;   XREF to: 004fc91a (CONDITIONAL_JUMP)  ; LAB_004fc91a
    CMP byte ptr [EBX + 0x78],0x0       ; 004fc87c
    JNZ 0x004fc8ed                      ; 004fc880
        ;   XREF to: 004fc8ed (CONDITIONAL_JUMP)  ; LAB_004fc8ed
    PUSH dword ptr [EBX + 0x74]         ; 004fc882
        ;   Label: LAB_004fc882
    CALL core_actor.cpp_FUN_0040d060    ; 004fc885
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004fc88a
    TEST EAX,EAX                        ; 004fc88d
    JZ 0x004fc929                       ; 004fc88f
        ;   XREF to: 004fc929 (CONDITIONAL_JUMP)  ; LAB_004fc929
    MOV dword ptr [EBX + 0x70],0x1      ; 004fc895
    MOV EAX,[0x0061b5a8]                ; 004fc89c | g_CDemonSetPtr
        ;   Label: LAB_004fc89c
    CMP dword ptr [EAX + 0x14d164],0x7d0 ; 004fc8a1 | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x004fc8d0                       ; 004fc8ab
        ;   XREF to: 004fc8d0 (CONDITIONAL_JUMP)  ; LAB_004fc8d0
    MOV ECX,0x5de817                    ; 004fc8ad | = "..\\core\\mission.cpp"
    MOV ESI,0x48a                       ; 004fc8b2
    PUSH 0x5de82b                       ; 004fc8b7 | = "CDemonMission::buildActiveSetActorLis..."
    MOV dword ptr [0x01d046a0],ECX      ; 004fc8bc | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004fc8c2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004fc8c8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004fc8cd
    MOV EAX,[0x0061b5a8]                ; 004fc8d0 | g_CDemonSetPtr
        ;   Label: LAB_004fc8d0
    MOV ESI,dword ptr [EAX + 0x14d164]  ; 004fc8d5 | g_CDemonSetInstance.field1364324_0x14d164
    MOV dword ptr [EAX + ESI*0x4 + 0x14d168],EBX ; 004fc8db | g_CDemonSetInstance.field1364328_0x14d168
    INC dword ptr [EAX + 0x14d164]      ; 004fc8e2 | g_CDemonSetInstance.field1364324_0x14d164
    JMP 0x004fc847                      ; 004fc8e8
        ;   XREF to: 004fc847 (UNCONDITIONAL_JUMP)  ; LAB_004fc847
    PUSH 0x5de812                       ; 004fc8ed | DAT_005de812
        ;   Label: LAB_004fc8ed
    LEA ESI,[EBX + 0x78]                ; 004fc8f2
    PUSH ESI                            ; 004fc8f5
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004fc8f6
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fc8fb
    TEST EAX,EAX                        ; 004fc8fe
    JZ 0x004fc882                       ; 004fc900
        ;   XREF to: 004fc882 (CONDITIONAL_JUMP)  ; LAB_004fc882
    PUSH ESI                            ; 004fc902
    MOV ESI,dword ptr [0x006141f0]      ; 004fc903 | DAT_006141f0
    PUSH ESI                            ; 004fc909
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 004fc90a
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004fc90f
    TEST EAX,EAX                        ; 004fc912
    JNZ 0x004fc882                      ; 004fc914
        ;   XREF to: 004fc882 (CONDITIONAL_JUMP)  ; LAB_004fc882
    CMP dword ptr [EBX + 0x70],0x1      ; 004fc91a
        ;   Label: LAB_004fc91a
    JZ 0x004fc89c                       ; 004fc91e
        ;   XREF to: 004fc89c (CONDITIONAL_JUMP)  ; LAB_004fc89c
    JMP 0x004fc847                      ; 004fc924
        ;   XREF to: 004fc847 (UNCONDITIONAL_JUMP)  ; LAB_004fc847
    MOV dword ptr [EBX + 0x70],0x2      ; 004fc929
        ;   Label: LAB_004fc929
    JMP 0x004fc847                      ; 004fc930
        ;   XREF to: 004fc847 (UNCONDITIONAL_JUMP)  ; LAB_004fc847

