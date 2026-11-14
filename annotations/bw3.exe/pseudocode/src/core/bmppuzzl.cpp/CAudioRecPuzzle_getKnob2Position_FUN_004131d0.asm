; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_getKnob2Position_FUN_004131d0(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004131d0
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_getKnob2Position_FUN_004131d0
    MOV EAX,dword ptr [EAX + 0x40]      ; 004131d4
    RET                                 ; 004131d7

