; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CRuleList_clear_FUN_004aacc0(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_door.cpp_CDoor_ctor_FUN_00477270 at 00477295
;   core_lever.cpp_CLever_ctor_FUN_004ff040 at 004ff063
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004aacc0
        ;   Label: core_event.cpp_CRuleList_clear_FUN_004aacc0
    MOV dword ptr [EAX],0x0             ; 004aacc4
    RET                                 ; 004aacca

