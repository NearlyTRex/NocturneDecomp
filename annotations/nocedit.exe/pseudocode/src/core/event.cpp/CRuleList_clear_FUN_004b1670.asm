; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_CRuleList_clear_FUN_004b1670(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_door.cpp_CDoor_ctor_FUN_0047fad0 at 0047faf5
;   core_door.cpp_FUN_00481650 at 00481656
;   core_lever.cpp_CLever_ctor_FUN_005047d0 at 005047f3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1670
        ;   Label: core_event.cpp_CRuleList_clear_FUN_004b1670
    MOV dword ptr [EAX],0x0             ; 004b1674
    RET                                 ; 004b167a

