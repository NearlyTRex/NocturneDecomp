; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_00422c60(CBoxActor *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00422c60
        ;   Label: core_boxactor.cpp_CBoxActor_pickup_FUN_00422c60
    MOV EAX,dword ptr [ESP + 0x8]       ; 00422c64
    MOV dword ptr [EDX + 0x318],EAX     ; 00422c68
    RET                                 ; 00422c6e

