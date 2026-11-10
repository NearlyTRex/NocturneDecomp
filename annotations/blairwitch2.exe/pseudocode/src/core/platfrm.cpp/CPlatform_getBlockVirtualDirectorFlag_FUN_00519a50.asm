; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_platfrm_cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_00519a50(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00519a50
        ;   Label: core_platfrm.cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_00519a50
    MOV EAX,dword ptr [EAX + 0x620]     ; 00519a54
    RET                                 ; 00519a5a

