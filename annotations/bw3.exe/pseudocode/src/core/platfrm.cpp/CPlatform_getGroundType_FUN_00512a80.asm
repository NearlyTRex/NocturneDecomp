; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_platfrm_cpp_CPlatform_getGroundType_FUN_00512a80(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00512a80
        ;   Label: core_platfrm.cpp_CPlatform_getGroundType_FUN_00512a80
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 00512a84
    RET                                 ; 00512a8a

