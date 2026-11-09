; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_pickup_FUN_0056cdb0(CTrap *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056cdb0
        ;   Label: core_trap.cpp_CTrap_pickup_FUN_0056cdb0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056cdb4
    MOV dword ptr [EDX + 0x2d4],EAX     ; 0056cdb8
    RET                                 ; 0056cdbe

