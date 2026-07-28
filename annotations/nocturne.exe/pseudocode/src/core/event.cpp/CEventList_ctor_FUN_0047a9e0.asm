; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEventList * __cdecl core_event_cpp_CEventList_ctor_FUN_0047a9e0(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_event.cpp_staticInit_FUN_0047a1d0 at 0047a1d5
;
; Called Functions:
;   core_event.cpp_CEventList_reset_FUN_0047aa00
;   core_event.cpp_CEventList_resetGameFlags_FUN_00480410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a9e0
        ;   Label: core_event.cpp_CEventList_ctor_FUN_0047a9e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047a9e1
    PUSH EBX                            ; 0047a9e5
    CALL core_event.cpp_CEventList_reset_FUN_0047aa00 ; 0047a9e6
        ;   XREF to: 0047aa00 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_reset_FUN_0047aa00(CEventList * this_ptr)
    ADD ESP,0x4                         ; 0047a9eb
    PUSH EBX                            ; 0047a9ee
    CALL core_event.cpp_CEventList_resetGameFlags_FUN_00480410 ; 0047a9ef
        ;   XREF to: 00480410 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_resetGameFlags_FUN_00480410(CEventList * this_ptr)
    ADD ESP,0x4                         ; 0047a9f4
    MOV EAX,EBX                         ; 0047a9f7
    POP EBX                             ; 0047a9f9
    RET                                 ; 0047a9fa

