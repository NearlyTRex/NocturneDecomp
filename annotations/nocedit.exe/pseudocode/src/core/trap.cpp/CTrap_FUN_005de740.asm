; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_trap_cpp_CTrap_FUN_005de740(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005de740
        ;   Label: core_trap.cpp_CTrap_FUN_005de740
    MOV EAX,dword ptr [ESP + 0x8]       ; 005de744
    MOV dword ptr [EDX + 0x2d4],EAX     ; 005de748
    RET                                 ; 005de74e

