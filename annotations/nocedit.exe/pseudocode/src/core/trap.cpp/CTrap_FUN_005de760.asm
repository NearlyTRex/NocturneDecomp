; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_trap.cpp_CTrap_FUN_005de760(CTrap * this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005de760
        ;   Label: core_trap.cpp_CTrap_FUN_005de760
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 005de764
    RET                                 ; 005de76a

