; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_0041f0e0(CBoxActor *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041f0e0
        ;   Label: core_boxactor.cpp_CBoxActor_pickup_FUN_0041f0e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041f0e4
    MOV dword ptr [EDX + 0x310],EAX     ; 0041f0e8
    RET                                 ; 0041f0ee

