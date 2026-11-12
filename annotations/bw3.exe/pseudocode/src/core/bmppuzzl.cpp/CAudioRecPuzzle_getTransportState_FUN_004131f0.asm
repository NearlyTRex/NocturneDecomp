; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_getTransportState_FUN_004131f0(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004131f0
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_getTransportState_FUN_004131f0
    MOV EAX,dword ptr [EAX + 0x34]      ; 004131f4
    RET                                 ; 004131f7

