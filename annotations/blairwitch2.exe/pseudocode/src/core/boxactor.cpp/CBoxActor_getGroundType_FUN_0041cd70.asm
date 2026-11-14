; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_boxactor_cpp_CBoxActor_getGroundType_FUN_0041cd70(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041cd70
        ;   Label: core_boxactor.cpp_CBoxActor_getGroundType_FUN_0041cd70
    MOV EAX,dword ptr [EAX + 0x74c]     ; 0041cd74
    RET                                 ; 0041cd7a

