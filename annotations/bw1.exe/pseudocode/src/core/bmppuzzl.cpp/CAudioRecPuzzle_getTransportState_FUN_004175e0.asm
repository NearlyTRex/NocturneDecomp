; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_getTransportState_FUN_004175e0(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004175e0
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_getTransportState_FUN_004175e0
    MOV EAX,dword ptr [EAX + 0x34]      ; 004175e4
    RET                                 ; 004175e7

