; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_trap_cpp_CTrap_getCarrier_FUN_00599de0(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00599de0
        ;   Label: core_trap.cpp_CTrap_getCarrier_FUN_00599de0
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 00599de4
    RET                                 ; 00599dea

