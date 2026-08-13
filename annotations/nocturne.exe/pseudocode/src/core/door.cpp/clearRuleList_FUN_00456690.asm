; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRuleList * __cdecl core_door_cpp_clearRuleList_FUN_00456690(CRuleList *rule_list)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   rule_list
;
; Called Functions:
;   core_event.cpp_CRuleList_FUN_00481620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456690
        ;   Label: core_door.cpp_clearRuleList_FUN_00456690
    MOV EBX,dword ptr [ESP + 0x8]       ; 00456691
    PUSH EBX                            ; 00456695
    CALL core_event.cpp_CRuleList_FUN_00481620 ; 00456696
        ;   XREF to: 00481620 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CRuleList_FUN_00481620(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 0045669b
    MOV EAX,EBX                         ; 0045669e
    POP EBX                             ; 004566a0
    RET                                 ; 004566a1

