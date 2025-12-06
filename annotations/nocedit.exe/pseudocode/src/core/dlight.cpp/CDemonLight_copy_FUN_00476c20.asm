; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonLight * core_dlight.cpp_CDemonLight_copy_FUN_00476c20(CDemonLight * this_ptr, CDemonLight * other)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00476c20
        ;   Label: core_dlight.cpp_CDemonLight_copy_FUN_00476c20
    MOV EAX,dword ptr [ESP + 0x8]       ; 00476c24
    MOV EAX,dword ptr [EAX]             ; 00476c28
    MOV dword ptr [EDX],EAX             ; 00476c2a
    MOV EAX,EDX                         ; 00476c2c
    RET                                 ; 00476c2e

