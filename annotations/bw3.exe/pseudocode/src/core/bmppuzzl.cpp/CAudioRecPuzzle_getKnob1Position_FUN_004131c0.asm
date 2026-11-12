; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_getKnob1Position_FUN_004131c0(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004131c0
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_getKnob1Position_FUN_004131c0
    MOV EAX,dword ptr [EAX + 0x3c]      ; 004131c4
    RET                                 ; 004131c7

