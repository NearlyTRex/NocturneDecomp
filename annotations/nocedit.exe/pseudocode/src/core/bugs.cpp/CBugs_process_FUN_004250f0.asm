; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_process_FUN_004250f0(CBugs *this_ptr,float delta_time)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   void* switchdataD_004250d4 = 0042512b
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_bugs.cpp_CBugs_FUN_00425cc0
;   core_bugs.cpp_CBugs_FUN_00425fe0
;   core_bugs.cpp_CBugs_FUN_00426410
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004250f0
        ;   Label: core_bugs.cpp_CBugs_process_FUN_004250f0
    PUSH EDI                            ; 004250f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004250f2
    PUSH dword ptr [ESP + 0x10]         ; 004250f6
    PUSH EBX                            ; 004250fa
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 004250fb
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00425100
    TEST EAX,EAX                        ; 00425103
    JZ 0x00425138                       ; 00425105
        ;   XREF to: 00425138 (CONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [EBX + 0x19898],0x0   ; 00425107
    JZ 0x0042513b                       ; 0042510e
        ;   XREF to: 0042513b (CONDITIONAL_JUMP)  ; LAB_0042513b
    CMP dword ptr [EBX + 0x1989c],0x0   ; 00425110
        ;   Label: LAB_00425110
    JZ 0x00425161                       ; 00425117
        ;   XREF to: 00425161 (CONDITIONAL_JUMP)  ; LAB_00425161
    MOV EAX,dword ptr [EBX + 0xbebc]    ; 00425119
        ;   Label: LAB_00425119
    CMP EAX,0x3                         ; 0042511f
    JA 0x00425138                       ; 00425122
        ;   XREF to: 00425138 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4250d4]  ; 00425124 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    PUSH dword ptr [ESP + 0x10]         ; 0042512b
        ;   Label: caseD_0
    PUSH EBX                            ; 0042512f
    CALL core_bugs.cpp_CBugs_FUN_00425cc0 ; 00425130
        ;   XREF to: 00425cc0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_00425cc0(CBugs * this_ptr)
    ADD ESP,0x8                         ; 00425135
    POP EDI                             ; 00425138
        ;   Label: caseD_3
    POP EBX                             ; 00425139
    RET                                 ; 0042513a
    LEA EAX,[EBX + 0x198a0]             ; 0042513b
        ;   Label: LAB_0042513b
    PUSH EAX                            ; 00425141
    MOV ECX,dword ptr [0x006793d0]      ; 00425142 | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 00425148 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00425149
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0042514e
    TEST EAX,EAX                        ; 00425151
    JZ 0x00425110                       ; 00425153
        ;   XREF to: 00425110 (CONDITIONAL_JUMP)  ; LAB_00425110
    MOV dword ptr [EBX + 0x19898],0x1   ; 00425155
    JMP 0x00425110                      ; 0042515f
        ;   XREF to: 00425110 (UNCONDITIONAL_JUMP)  ; LAB_00425110
    LEA EAX,[EBX + 0x19904]             ; 00425161
        ;   Label: LAB_00425161
    PUSH EAX                            ; 00425167
    MOV EDI,dword ptr [0x006793d0]      ; 00425168 | g_CEventListPtr
    PUSH EDI                            ; 0042516e | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0042516f
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00425174
    TEST EAX,EAX                        ; 00425177
    JZ 0x00425119                       ; 00425179
        ;   XREF to: 00425119 (CONDITIONAL_JUMP)  ; LAB_00425119
    MOV dword ptr [EBX + 0x1989c],0x1   ; 0042517b
    JMP 0x00425119                      ; 00425185
        ;   XREF to: 00425119 (UNCONDITIONAL_JUMP)  ; LAB_00425119
    PUSH dword ptr [ESP + 0x10]         ; 00425187
        ;   Label: caseD_1
    PUSH EBX                            ; 0042518b
    CALL core_bugs.cpp_CBugs_FUN_00425fe0 ; 0042518c
        ;   XREF to: 00425fe0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_00425fe0(CBugs * this_ptr)
    ADD ESP,0x8                         ; 00425191
    POP EDI                             ; 00425194
    POP EBX                             ; 00425195
    RET                                 ; 00425196
    PUSH dword ptr [ESP + 0x10]         ; 00425197
        ;   Label: caseD_2
    PUSH EBX                            ; 0042519b
    CALL core_bugs.cpp_CBugs_FUN_00426410 ; 0042519c
        ;   XREF to: 00426410 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_00426410(CBugs * this_ptr)
    ADD ESP,0x8                         ; 004251a1
    POP EDI                             ; 004251a4
    POP EBX                             ; 004251a5
    RET                                 ; 004251a6

