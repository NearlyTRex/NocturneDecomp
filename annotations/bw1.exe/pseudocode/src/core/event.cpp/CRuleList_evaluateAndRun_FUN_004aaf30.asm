; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_004aaf30(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_doc.cpp_FUN_00474fc0 at 0047504d
;   core_hero.cpp_FUN_004ec640 at 004ec72a
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_event.cpp_CRuleList_findFirst_FUN_004aaee0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004aaf30
        ;   Label: core_event.cpp_CRuleList_evaluateAndRun_FUN_004aaf30
    PUSH EDX                            ; 004aaf34
    CALL core_event.cpp_CRuleList_findFirst_FUN_004aaee0 ; 004aaf35
        ;   XREF to: 004aaee0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_findFirst_FUN_004aaee0(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004aaf3a
    TEST EAX,EAX                        ; 004aaf3d
    JGE 0x004aaf44                      ; 004aaf3f
        ;   XREF to: 004aaf44 (CONDITIONAL_JUMP)  ; LAB_004aaf44
    XOR EAX,EAX                         ; 004aaf41
    RET                                 ; 004aaf43
    MOV EDX,EAX                         ; 004aaf44
        ;   Label: LAB_004aaf44
    SHL EAX,0x2                         ; 004aaf46
    SUB EAX,EDX                         ; 004aaf49
    SHL EAX,0x3                         ; 004aaf4b
    ADD EAX,EDX                         ; 004aaf4e
    MOV EDX,dword ptr [ESP + 0x4]       ; 004aaf50
    SHL EAX,0x2                         ; 004aaf54
    ADD EDX,0x1f8                       ; 004aaf57
    ADD EAX,EDX                         ; 004aaf5d
    PUSH EAX                            ; 004aaf5f
    MOV ECX,dword ptr [0x0061b4d0]      ; 004aaf60 | DAT_0061b4d0
    PUSH ECX                            ; 004aaf66
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004aaf67
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    MOV EAX,0x1                         ; 004aaf6c
    ADD ESP,0x8                         ; 004aaf71
    RET                                 ; 004aaf74

