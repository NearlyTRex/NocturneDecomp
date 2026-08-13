; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CRuleList_FUN_00481620(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_door.cpp_CDoor_ctor_FUN_00455050 at 00455075
;   core_door.cpp_clearRuleList_FUN_00456690 at 00456696
;   core_lever.cpp_CLever_ctor_FUN_004c6040 at 004c6063
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00481620
        ;   Label: core_event.cpp_CRuleList_FUN_00481620
    MOV dword ptr [EAX],0x0             ; 00481624
    RET                                 ; 0048162a

