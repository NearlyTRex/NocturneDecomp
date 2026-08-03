; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_platfrm_cpp_CPlatform_getGroundType_FUN_004f75a0(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f75a0
        ;   Label: core_platfrm.cpp_CPlatform_getGroundType_FUN_004f75a0
    MOV EAX,dword ptr [EAX + 0x2d0]     ; 004f75a4
    RET                                 ; 004f75aa

