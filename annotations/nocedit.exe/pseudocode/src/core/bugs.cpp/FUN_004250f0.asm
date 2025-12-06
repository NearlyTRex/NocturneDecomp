; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bugs.cpp_FUN_004250f0()
;
;
; Referenced Globals:
;   void* switchdataD_004250d4 = 0042512b
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_bugs.cpp_FUN_00425cc0
;   core_bugs.cpp_FUN_00425fe0
;   core_bugs.cpp_FUN_00426410
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004250f0
        ;   Label: core_bugs.cpp_FUN_004250f0
    PUSH EDI                            ; 004250f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004250f2
    PUSH dword ptr [ESP + 0x10]         ; 004250f6
    PUSH EBX                            ; 004250fa
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 004250fb | int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00425100
    TEST EAX,EAX                        ; 00425103
    JZ 0x00425138                       ; 00425105 | caseD_3
        ;   XREF to: 00425138 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x19898],0x0   ; 00425107
    JZ 0x0042513b                       ; 0042510e | LAB_0042513b
        ;   XREF to: 0042513b (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1989c],0x0   ; 00425110
        ;   Label: LAB_00425110
    JZ 0x00425161                       ; 00425117 | LAB_00425161
        ;   XREF to: 00425161 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0xbebc]    ; 00425119
        ;   Label: LAB_00425119
    CMP EAX,0x3                         ; 0042511f
    JA 0x00425138                       ; 00425122 | caseD_3
        ;   XREF to: 00425138 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x4250d4]  ; 00425124 | void * switchdataD_004250d4
        ;   Label: switchD
    PUSH dword ptr [ESP + 0x10]         ; 0042512b
        ;   Label: caseD_0
    PUSH EBX                            ; 0042512f
    CALL core_bugs.cpp_FUN_00425cc0     ; 00425130 | undefined core_bugs.cpp_FUN_00425cc0()
        ;   XREF to: 00425cc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00425135
    POP EDI                             ; 00425138
        ;   Label: caseD_3
    POP EBX                             ; 00425139
    RET                                 ; 0042513a
    LEA EAX,[EBX + 0x198a0]             ; 0042513b
        ;   Label: LAB_0042513b
    PUSH EAX                            ; 00425141
    MOV ECX,dword ptr [0x006793d0]      ; 00425142 | CEventList g_CEventListInstance | CEventList * g_CEventListPtr
    PUSH ECX                            ; 00425148 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00425149 | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0042514e
    TEST EAX,EAX                        ; 00425151
    JZ 0x00425110                       ; 00425153 | LAB_00425110
        ;   XREF to: 00425110 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x19898],0x1   ; 00425155
    JMP 0x00425110                      ; 0042515f | LAB_00425110
        ;   XREF to: 00425110 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x19904]             ; 00425161
        ;   Label: LAB_00425161
    PUSH EAX                            ; 00425167
    MOV EDI,dword ptr [0x006793d0]      ; 00425168 | CEventList * g_CEventListPtr
    PUSH EDI                            ; 0042516e | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0042516f | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00425174
    TEST EAX,EAX                        ; 00425177
    JZ 0x00425119                       ; 00425179 | LAB_00425119
        ;   XREF to: 00425119 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1989c],0x1   ; 0042517b
    JMP 0x00425119                      ; 00425185 | LAB_00425119
        ;   XREF to: 00425119 (UNCONDITIONAL_JUMP)
    PUSH dword ptr [ESP + 0x10]         ; 00425187
        ;   Label: caseD_1
    PUSH EBX                            ; 0042518b
    CALL core_bugs.cpp_FUN_00425fe0     ; 0042518c | undefined core_bugs.cpp_FUN_00425fe0()
        ;   XREF to: 00425fe0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00425191
    POP EDI                             ; 00425194
    POP EBX                             ; 00425195
    RET                                 ; 00425196
    PUSH dword ptr [ESP + 0x10]         ; 00425197
        ;   Label: caseD_2
    PUSH EBX                            ; 0042519b
    CALL core_bugs.cpp_FUN_00426410     ; 0042519c | undefined core_bugs.cpp_FUN_00426410()
        ;   XREF to: 00426410 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004251a1
    POP EDI                             ; 004251a4
    POP EBX                             ; 004251a5
    RET                                 ; 004251a6

