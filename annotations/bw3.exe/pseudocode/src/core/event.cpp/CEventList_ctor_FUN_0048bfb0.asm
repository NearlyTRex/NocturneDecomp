; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEventList * __cdecl core_event_cpp_CEventList_ctor_FUN_0048bfb0(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_event.cpp_staticInit_FUN_0048b780 at 0048b785
;
; Called Functions:
;   core_event.cpp_CEventList_reset_FUN_0048bfd0
;   core_event.cpp_FUN_00494880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048bfb0
        ;   Label: core_event.cpp_CEventList_ctor_FUN_0048bfb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048bfb1
    PUSH EBX                            ; 0048bfb5
    CALL core_event.cpp_CEventList_reset_FUN_0048bfd0 ; 0048bfb6
        ;   XREF to: 0048bfd0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_reset_FUN_0048bfd0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 0048bfbb
    PUSH EBX                            ; 0048bfbe
    CALL core_event.cpp_FUN_00494880    ; 0048bfbf
        ;   XREF to: 00494880 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_00494880()
    ADD ESP,0x4                         ; 0048bfc4
    MOV EAX,EBX                         ; 0048bfc7
    POP EBX                             ; 0048bfc9
    RET                                 ; 0048bfca

