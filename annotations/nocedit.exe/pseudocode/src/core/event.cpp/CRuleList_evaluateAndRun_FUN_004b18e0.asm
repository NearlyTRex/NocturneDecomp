; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_004b18e0(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hero.cpp_CHero_FUN_004f2d70 at 004f2e63
;   core_hero.cpp_CHero_FUN_004f2f50 at 004f30c3
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004aabe0
;   core_event.cpp_CRuleList_findFirst_FUN_004b1890
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b18e0
        ;   Label: core_event.cpp_CRuleList_evaluateAndRun_FUN_004b18e0
    PUSH EDX                            ; 004b18e4
    CALL core_event.cpp_CRuleList_findFirst_FUN_004b1890 ; 004b18e5
        ;   XREF to: 004b1890 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_findFirst_FUN_004b1890(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004b18ea
    TEST EAX,EAX                        ; 004b18ed
    JGE 0x004b18f4                      ; 004b18ef
        ;   XREF to: 004b18f4 (CONDITIONAL_JUMP)  ; LAB_004b18f4
    XOR EAX,EAX                         ; 004b18f1
    RET                                 ; 004b18f3
    MOV EDX,EAX                         ; 004b18f4
        ;   Label: LAB_004b18f4
    SHL EAX,0x2                         ; 004b18f6
    SUB EAX,EDX                         ; 004b18f9
    SHL EAX,0x3                         ; 004b18fb
    ADD EAX,EDX                         ; 004b18fe
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b1900
    SHL EAX,0x2                         ; 004b1904
    ADD EDX,0x1f8                       ; 004b1907
    ADD EAX,EDX                         ; 004b190d
    PUSH EAX                            ; 004b190f
    MOV ECX,dword ptr [0x006793d0]      ; 004b1910 | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 004b1916 | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004b1917
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    MOV EAX,0x1                         ; 004b191c
    ADD ESP,0x8                         ; 004b1921
    RET                                 ; 004b1924

