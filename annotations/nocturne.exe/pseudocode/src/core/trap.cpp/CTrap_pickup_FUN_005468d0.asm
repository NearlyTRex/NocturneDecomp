; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_pickup_FUN_005468d0(CTrap *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005468d0
        ;   Label: core_trap.cpp_CTrap_pickup_FUN_005468d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005468d4
    MOV dword ptr [EDX + 0x2cc],EAX     ; 005468d8
    RET                                 ; 005468de

