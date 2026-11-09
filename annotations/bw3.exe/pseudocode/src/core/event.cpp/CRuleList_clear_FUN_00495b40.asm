; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CRuleList_clear_FUN_00495b40(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_door.cpp_CDoor_ctor_FUN_00463ab0 at 00463ad5
;   core_lever.cpp_CLever_ctor_FUN_004e0100 at 004e0123
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00495b40
        ;   Label: core_event.cpp_CRuleList_clear_FUN_00495b40
    MOV dword ptr [EAX],0x0             ; 00495b44
    RET                                 ; 00495b4a

