; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_trap_cpp_CTrap_getCarrier_FUN_0056cdd0(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056cdd0
        ;   Label: core_trap.cpp_CTrap_getCarrier_FUN_0056cdd0
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 0056cdd4
    RET                                 ; 0056cdda

