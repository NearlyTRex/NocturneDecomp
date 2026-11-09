; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_boxactor_cpp_CBoxActor_getGroundType_FUN_00422ce0(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422ce0
        ;   Label: core_boxactor.cpp_CBoxActor_getGroundType_FUN_00422ce0
    MOV EAX,dword ptr [EAX + 0x5f0]     ; 00422ce4
    RET                                 ; 00422cea

