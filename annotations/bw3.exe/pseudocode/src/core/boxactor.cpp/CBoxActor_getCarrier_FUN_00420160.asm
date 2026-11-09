; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_boxactor_cpp_CBoxActor_getCarrier_FUN_00420160(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00420160
        ;   Label: core_boxactor.cpp_CBoxActor_getCarrier_FUN_00420160
    MOV EAX,dword ptr [EAX + 0x318]     ; 00420164
    RET                                 ; 0042016a

