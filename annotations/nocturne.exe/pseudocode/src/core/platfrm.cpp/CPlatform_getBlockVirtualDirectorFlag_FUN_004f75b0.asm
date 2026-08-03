; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_platfrm_cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_004f75b0(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f75b0
        ;   Label: core_platfrm.cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_004f75b0
    MOV EAX,dword ptr [EAX + 0x4bc]     ; 004f75b4
    RET                                 ; 004f75ba

