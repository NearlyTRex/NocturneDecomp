; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCheckOutList * __cdecl engine_fileio_cpp_CCheckOutList_ctor_FUN_004bd710(CCheckOutList *this_ptr)
;
; Parameters:
; CCheckOutList *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bd710
        ;   Label: engine_fileio.cpp_CCheckOutList_ctor_FUN_004bd710
    MOV dword ptr [EAX + 0x4],0x0       ; 004bd714
    MOV dword ptr [EAX],0x0             ; 004bd71b
    RET                                 ; 004bd721

