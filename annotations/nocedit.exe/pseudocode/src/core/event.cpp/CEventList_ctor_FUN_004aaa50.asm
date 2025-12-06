; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CEventList * core_event.cpp_CEventList_ctor_FUN_004aaa50(CEventList * this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_event.cpp_staticInit_FUN_004aa260 at 004aa265
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004aaa70
;   core_event.cpp_CEventList_FUN_004b0460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aaa50
        ;   Label: core_event.cpp_CEventList_ctor_FUN_004aaa50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004aaa51
    PUSH EBX                            ; 004aaa55
    CALL core_event.cpp_CEventList_FUN_004aaa70 ; 004aaa56 | void core_event.cpp_CEventList_FUN_004aaa70(CEventList * this_ptr)
        ;   XREF to: 004aaa70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004aaa5b
    PUSH EBX                            ; 004aaa5e
    CALL core_event.cpp_CEventList_FUN_004b0460 ; 004aaa5f | void core_event.cpp_CEventList_FUN_004b0460(CEventList * this_ptr)
        ;   XREF to: 004b0460 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004aaa64
    MOV EAX,EBX                         ; 004aaa67
    POP EBX                             ; 004aaa69
    RET                                 ; 004aaa6a

