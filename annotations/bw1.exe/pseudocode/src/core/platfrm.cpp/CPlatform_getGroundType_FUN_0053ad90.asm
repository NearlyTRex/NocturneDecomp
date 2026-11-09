; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_platfrm_cpp_CPlatform_getGroundType_FUN_0053ad90(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ad90
        ;   Label: core_platfrm.cpp_CPlatform_getGroundType_FUN_0053ad90
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 0053ad94
    RET                                 ; 0053ad9a

