; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_004200f0(CBoxActor *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004200f0
        ;   Label: core_boxactor.cpp_CBoxActor_pickup_FUN_004200f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004200f4
    MOV dword ptr [EDX + 0x318],EAX     ; 004200f8
    RET                                 ; 004200fe

