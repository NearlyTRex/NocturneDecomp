; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActor * core_boxactor.cpp_CBoxActor_getCarrier_FUN_00422550(CBoxActor * this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422550
        ;   Label: core_boxactor.cpp_CBoxActor_getCarrier_FUN_00422550
    MOV EAX,dword ptr [EAX + 0x318]     ; 00422554
    RET                                 ; 0042255a

