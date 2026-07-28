; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_00481890(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hero.cpp_CHero_tryPullLever_FUN_004b52f0 at 004b5463
;   core_hero.cpp_FUN_004b5110 at 004b5203
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_0047ab70
;   core_event.cpp_CRuleList_findFirst_FUN_00481840
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00481890
        ;   Label: core_event.cpp_CRuleList_evaluateAndRun_FUN_00481890
    PUSH EDX                            ; 00481894
    CALL core_event.cpp_CRuleList_findFirst_FUN_00481840 ; 00481895
        ;   XREF to: 00481840 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_findFirst_FUN_00481840(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 0048189a
    TEST EAX,EAX                        ; 0048189d
    JGE 0x004818a4                      ; 0048189f
        ;   XREF to: 004818a4 (CONDITIONAL_JUMP)  ; LAB_004818a4
    XOR EAX,EAX                         ; 004818a1
    RET                                 ; 004818a3
    MOV EDX,EAX                         ; 004818a4
        ;   Label: LAB_004818a4
    SHL EAX,0x2                         ; 004818a6
    SUB EAX,EDX                         ; 004818a9
    SHL EAX,0x3                         ; 004818ab
    ADD EAX,EDX                         ; 004818ae
    MOV EDX,dword ptr [ESP + 0x4]       ; 004818b0
    SHL EAX,0x2                         ; 004818b4
    ADD EDX,0x1f8                       ; 004818b7
    ADD EAX,EDX                         ; 004818bd
    PUSH EAX                            ; 004818bf
    MOV ECX,dword ptr [0x005b7650]      ; 004818c0 | DAT_005b7650
    PUSH ECX                            ; 004818c6
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004818c7
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    MOV EAX,0x1                         ; 004818cc
    ADD ESP,0x8                         ; 004818d1
    RET                                 ; 004818d4

