; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_boxactor_cpp_CBoxActor_getCarrier_FUN_0041cd60(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041cd60
        ;   Label: core_boxactor.cpp_CBoxActor_getCarrier_FUN_0041cd60
    MOV EAX,dword ptr [EAX + 0x474]     ; 0041cd64
    RET                                 ; 0041cd6a

