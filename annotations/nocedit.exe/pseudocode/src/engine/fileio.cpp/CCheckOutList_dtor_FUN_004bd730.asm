; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCheckOutList * engine_fileio.cpp_CCheckOutList_dtor_FUN_004bd730(CCheckOutList * this_ptr)
;
; Parameters:
; CCheckOutList *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd730
        ;   Label: engine_fileio.cpp_CCheckOutList_dtor_FUN_004bd730
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bd731
    PUSH EBX                            ; 004bd735
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004bd736
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004bd73b
    MOV EAX,EBX                         ; 004bd73e
    POP EBX                             ; 004bd740
    RET                                 ; 004bd741

