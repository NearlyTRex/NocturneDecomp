; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_getSpeedSetting_FUN_004175d0(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004175d0
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_getSpeedSetting_FUN_004175d0
    MOV EAX,dword ptr [EAX + 0x44]      ; 004175d4
    RET                                 ; 004175d7

