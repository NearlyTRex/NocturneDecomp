; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CRuleList_clear_FUN_00492350(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_door.cpp_CDoor_ctor_FUN_0045ed60 at 0045ed85
;   core_lever.cpp_CLever_ctor_FUN_004e1c20 at 004e1c43
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00492350
        ;   Label: core_event.cpp_CRuleList_clear_FUN_00492350
    MOV dword ptr [EAX],0x0             ; 00492354
    RET                                 ; 0049235a

