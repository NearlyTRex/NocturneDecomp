; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_getBlockVirtualDirectorFlag_FUN_00422a50(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422a50
        ;   Label: core_boxactor.cpp_CBoxActor_getBlockVirtualDirectorFlag_FUN_00422a50
    MOV EAX,dword ptr [EAX + 0x668]     ; 00422a54
    RET                                 ; 00422a5a

