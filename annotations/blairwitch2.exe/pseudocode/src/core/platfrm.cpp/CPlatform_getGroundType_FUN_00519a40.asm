; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_platfrm_cpp_CPlatform_getGroundType_FUN_00519a40(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00519a40
        ;   Label: core_platfrm.cpp_CPlatform_getGroundType_FUN_00519a40
    MOV EAX,dword ptr [EAX + 0x434]     ; 00519a44
    RET                                 ; 00519a4a

