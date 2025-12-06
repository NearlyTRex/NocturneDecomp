; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_trap.cpp_CTrap_FUN_005de750(CTrap * this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005de750
        ;   Label: core_trap.cpp_CTrap_FUN_005de750
    MOV dword ptr [EAX + 0x2d4],0x0     ; 005de754
    RET                                 ; 005de75e

