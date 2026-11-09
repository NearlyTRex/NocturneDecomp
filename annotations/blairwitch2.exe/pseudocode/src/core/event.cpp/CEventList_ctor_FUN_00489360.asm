; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEventList * __cdecl core_event_cpp_CEventList_ctor_FUN_00489360(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_event.cpp_staticInit_FUN_00488b30 at 00488b35
;
; Called Functions:
;   core_event.cpp_CEventList_reset_FUN_00489380
;   core_event.cpp_FUN_004910b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489360
        ;   Label: core_event.cpp_CEventList_ctor_FUN_00489360
    MOV EBX,dword ptr [ESP + 0x8]       ; 00489361
    PUSH EBX                            ; 00489365
    CALL core_event.cpp_CEventList_reset_FUN_00489380 ; 00489366
        ;   XREF to: 00489380 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_reset_FUN_00489380(CEventList * this_ptr)
    ADD ESP,0x4                         ; 0048936b
    PUSH EBX                            ; 0048936e
    CALL core_event.cpp_FUN_004910b0    ; 0048936f
        ;   XREF to: 004910b0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004910b0()
    ADD ESP,0x4                         ; 00489374
    MOV EAX,EBX                         ; 00489377
    POP EBX                             ; 00489379
    RET                                 ; 0048937a

