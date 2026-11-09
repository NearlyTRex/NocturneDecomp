; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_boxactor_cpp_CBoxActor_getGroundType_FUN_00420170(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00420170
        ;   Label: core_boxactor.cpp_CBoxActor_getGroundType_FUN_00420170
    MOV EAX,dword ptr [EAX + 0x5f0]     ; 00420174
    RET                                 ; 0042017a

