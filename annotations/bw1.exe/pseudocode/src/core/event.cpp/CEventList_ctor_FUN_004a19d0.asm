; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEventList * __cdecl core_event_cpp_CEventList_ctor_FUN_004a19d0(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_event.cpp_staticInit_FUN_004a11a0 at 004a11a5
;
; Called Functions:
;   core_event.cpp_CEventList_reset_FUN_004a19f0
;   core_event.cpp_FUN_004a9a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a19d0
        ;   Label: core_event.cpp_CEventList_ctor_FUN_004a19d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a19d1
    PUSH EBX                            ; 004a19d5
    CALL core_event.cpp_CEventList_reset_FUN_004a19f0 ; 004a19d6
        ;   XREF to: 004a19f0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_reset_FUN_004a19f0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004a19db
    PUSH EBX                            ; 004a19de
    CALL core_event.cpp_FUN_004a9a00    ; 004a19df
        ;   XREF to: 004a9a00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9a00()
    ADD ESP,0x4                         ; 004a19e4
    MOV EAX,EBX                         ; 004a19e7
    POP EBX                             ; 004a19e9
    RET                                 ; 004a19ea

