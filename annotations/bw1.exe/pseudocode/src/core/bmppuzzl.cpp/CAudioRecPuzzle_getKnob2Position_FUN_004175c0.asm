; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_getKnob2Position_FUN_004175c0(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004175c0
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_getKnob2Position_FUN_004175c0
    MOV EAX,dword ptr [EAX + 0x40]      ; 004175c4
    RET                                 ; 004175c7

