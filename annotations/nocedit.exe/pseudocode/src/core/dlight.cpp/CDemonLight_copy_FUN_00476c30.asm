; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonLight * __cdecl core_dlight_cpp_CDemonLight_copy_FUN_00476c30(CDemonLight *this_ptr,CDemonLight *other)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00476c30
        ;   Label: core_dlight.cpp_CDemonLight_copy_FUN_00476c30
    MOV EAX,dword ptr [ESP + 0x8]       ; 00476c34
    MOV EAX,dword ptr [EAX]             ; 00476c38
    MOV dword ptr [EDX],EAX             ; 00476c3a
    MOV EAX,EDX                         ; 00476c3c
    RET                                 ; 00476c3e

