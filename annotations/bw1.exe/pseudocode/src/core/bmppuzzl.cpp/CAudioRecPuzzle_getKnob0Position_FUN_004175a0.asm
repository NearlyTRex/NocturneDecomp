; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_getKnob0Position_FUN_004175a0(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004175a0
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_getKnob0Position_FUN_004175a0
    MOV EAX,dword ptr [EAX + 0x38]      ; 004175a4
    RET                                 ; 004175a7

