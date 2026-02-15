; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_getBlockVirtualDirectorFlag_FUN_00422330(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422330
        ;   Label: core_boxactor.cpp_CBoxActor_getBlockVirtualDirectorFlag_FUN_00422330
    MOV EAX,dword ptr [EAX + 0x668]     ; 00422334
    RET                                 ; 0042233a

