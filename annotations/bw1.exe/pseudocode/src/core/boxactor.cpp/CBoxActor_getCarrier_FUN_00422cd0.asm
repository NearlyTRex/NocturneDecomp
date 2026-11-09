; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_boxactor_cpp_CBoxActor_getCarrier_FUN_00422cd0(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422cd0
        ;   Label: core_boxactor.cpp_CBoxActor_getCarrier_FUN_00422cd0
    MOV EAX,dword ptr [EAX + 0x318]     ; 00422cd4
    RET                                 ; 00422cda

