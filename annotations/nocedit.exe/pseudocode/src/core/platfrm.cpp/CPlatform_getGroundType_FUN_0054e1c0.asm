; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_platfrm_cpp_CPlatform_getGroundType_FUN_0054e1c0(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054e1c0
        ;   Label: core_platfrm.cpp_CPlatform_getGroundType_FUN_0054e1c0
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 0054e1c4
    RET                                 ; 0054e1ca

