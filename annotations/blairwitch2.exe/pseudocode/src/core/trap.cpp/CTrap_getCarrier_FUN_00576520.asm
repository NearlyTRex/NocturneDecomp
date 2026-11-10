; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_trap_cpp_CTrap_getCarrier_FUN_00576520(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00576520
        ;   Label: core_trap.cpp_CTrap_getCarrier_FUN_00576520
    MOV EAX,dword ptr [EAX + 0x430]     ; 00576524
    RET                                 ; 0057652a

