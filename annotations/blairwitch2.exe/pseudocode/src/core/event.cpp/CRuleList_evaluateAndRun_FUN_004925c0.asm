; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_004925c0(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hero.cpp_FUN_004d03b0 at 004d049a
;   unkafter_stranger.cpp_FUN_0045ca30 at 0045cabd
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   core_event.cpp_CRuleList_findFirst_FUN_00492570
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004925c0
        ;   Label: core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0
    PUSH EDX                            ; 004925c4
    CALL core_event.cpp_CRuleList_findFirst_FUN_00492570 ; 004925c5
        ;   XREF to: 00492570 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_findFirst_FUN_00492570(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 004925ca
    TEST EAX,EAX                        ; 004925cd
    JGE 0x004925d4                      ; 004925cf
        ;   XREF to: 004925d4 (CONDITIONAL_JUMP)  ; LAB_004925d4
    XOR EAX,EAX                         ; 004925d1
    RET                                 ; 004925d3
    MOV EDX,EAX                         ; 004925d4
        ;   Label: LAB_004925d4
    SHL EAX,0x2                         ; 004925d6
    SUB EAX,EDX                         ; 004925d9
    SHL EAX,0x3                         ; 004925db
    ADD EAX,EDX                         ; 004925de
    MOV EDX,dword ptr [ESP + 0x4]       ; 004925e0
    SHL EAX,0x2                         ; 004925e4
    ADD EDX,0x1f8                       ; 004925e7
    ADD EAX,EDX                         ; 004925ed
    PUSH EAX                            ; 004925ef
    MOV ECX,dword ptr [0x006141f0]      ; 004925f0 | DAT_006141f0
    PUSH ECX                            ; 004925f6
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004925f7
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    MOV EAX,0x1                         ; 004925fc
    ADD ESP,0x8                         ; 00492601
    RET                                 ; 00492604

