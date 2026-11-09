; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_platfrm_cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_00512a90(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00512a90
        ;   Label: core_platfrm.cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_00512a90
    MOV EAX,dword ptr [EAX + 0x4c4]     ; 00512a94
    RET                                 ; 00512a9a

