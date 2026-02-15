; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_staticInit_FUN_004aa260(void)
;
;
; Referenced Globals:
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_event.cpp_CEventList_ctor_FUN_004aaa50
;
; *****************************************************************************

section .text

    PUSH 0x2d05310                      ; 004aa260 | g_CEventListInstance
        ;   Label: core_event.cpp_staticInit_FUN_004aa260
    CALL core_event.cpp_CEventList_ctor_FUN_004aaa50 ; 004aa265
        ;   XREF to: 004aaa50 (UNCONDITIONAL_CALL)  ; CEventList * core_event.cpp_CEventList_ctor_FUN_004aaa50(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004aa26a
    RET                                 ; 004aa26d

