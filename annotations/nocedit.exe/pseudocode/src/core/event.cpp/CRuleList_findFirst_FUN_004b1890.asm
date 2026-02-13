; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_event_cpp_CRuleList_findFirst_FUN_004b1890(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_event.cpp_CRuleList_evaluateAndRun_FUN_004b18e0 at 004b18e5
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1890
        ;   Label: core_event.cpp_CRuleList_findFirst_FUN_004b1890
    PUSH ESI                            ; 004b1891
    PUSH EDI                            ; 004b1892
    PUSH EBP                            ; 004b1893
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b1894
    MOV EDX,dword ptr [EDI]             ; 004b1898
    XOR EBX,EBX                         ; 004b189a
    TEST EDX,EDX                        ; 004b189c
    JLE 0x004b18c1                      ; 004b189e
        ;   XREF to: 004b18c1 (CONDITIONAL_JUMP)  ; LAB_004b18c1
    LEA ESI,[EDI + 0x4]                 ; 004b18a0
    PUSH ESI                            ; 004b18a3
        ;   Label: LAB_004b18a3
    MOV EBP,dword ptr [0x006793d0]      ; 004b18a4 | g_CEventListPtr
    PUSH EBP                            ; 004b18aa | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004b18ab
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004b18b0
    TEST EAX,EAX                        ; 004b18b3
    JNZ 0x004b18cb                      ; 004b18b5
        ;   XREF to: 004b18cb (CONDITIONAL_JUMP)  ; LAB_004b18cb
    INC EBX                             ; 004b18b7
    MOV ECX,dword ptr [EDI]             ; 004b18b8
    ADD ESI,0x64                        ; 004b18ba
    CMP EBX,ECX                         ; 004b18bd
    JL 0x004b18a3                       ; 004b18bf
        ;   XREF to: 004b18a3 (CONDITIONAL_JUMP)  ; LAB_004b18a3
    MOV EAX,0xffffffff                  ; 004b18c1
        ;   Label: LAB_004b18c1
    POP EBP                             ; 004b18c6
    POP EDI                             ; 004b18c7
    POP ESI                             ; 004b18c8
    POP EBX                             ; 004b18c9
    RET                                 ; 004b18ca
    MOV EAX,EBX                         ; 004b18cb
        ;   Label: LAB_004b18cb
    POP EBP                             ; 004b18cd
    POP EDI                             ; 004b18ce
    POP ESI                             ; 004b18cf
    POP EBX                             ; 004b18d0
    RET                                 ; 004b18d1

