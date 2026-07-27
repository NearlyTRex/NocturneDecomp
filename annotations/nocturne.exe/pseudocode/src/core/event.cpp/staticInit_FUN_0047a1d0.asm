; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_staticInit_FUN_0047a1d0(void)
;
;
; Called Functions:
;   core_event.cpp_CEventList_ctor_FUN_0047a9e0
;
; *****************************************************************************

section .text

    PUSH 0x1c03a10                      ; 0047a1d0
        ;   Label: core_event.cpp_staticInit_FUN_0047a1d0
    CALL core_event.cpp_CEventList_ctor_FUN_0047a9e0 ; 0047a1d5
        ;   XREF to: 0047a9e0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_ctor_FUN_0047a9e0()
    ADD ESP,0x4                         ; 0047a1da
    RET                                 ; 0047a1dd

