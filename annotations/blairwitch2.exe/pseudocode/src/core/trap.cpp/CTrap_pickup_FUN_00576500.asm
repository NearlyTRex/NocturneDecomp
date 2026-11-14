; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_pickup_FUN_00576500(CTrap *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00576500
        ;   Label: core_trap.cpp_CTrap_pickup_FUN_00576500
    MOV EAX,dword ptr [ESP + 0x8]       ; 00576504
    MOV dword ptr [EDX + 0x430],EAX     ; 00576508
    RET                                 ; 0057650e

