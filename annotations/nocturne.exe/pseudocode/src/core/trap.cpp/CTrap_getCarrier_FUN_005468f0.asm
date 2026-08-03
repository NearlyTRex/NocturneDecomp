; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_trap_cpp_CTrap_getCarrier_FUN_005468f0(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005468f0
        ;   Label: core_trap.cpp_CTrap_getCarrier_FUN_005468f0
    MOV EAX,dword ptr [EAX + 0x2cc]     ; 005468f4
    RET                                 ; 005468fa

