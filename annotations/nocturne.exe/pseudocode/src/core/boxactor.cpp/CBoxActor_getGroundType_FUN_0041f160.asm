; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_boxactor_cpp_CBoxActor_getGroundType_FUN_0041f160(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041f160
        ;   Label: core_boxactor.cpp_CBoxActor_getGroundType_FUN_0041f160
    MOV EAX,dword ptr [EAX + 0x5e8]     ; 0041f164
    RET                                 ; 0041f16a

