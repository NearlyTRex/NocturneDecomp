; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_boxactor_cpp_CBoxActor_getCarrier_FUN_0041f150(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041f150
        ;   Label: core_boxactor.cpp_CBoxActor_getCarrier_FUN_0041f150
    MOV EAX,dword ptr [EAX + 0x310]     ; 0041f154
    RET                                 ; 0041f15a

