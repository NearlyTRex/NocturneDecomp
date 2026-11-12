; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_dlight_cpp_assignInt_FUN_00452500(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00452500
        ;   Label: core_dlight.cpp_assignInt_FUN_00452500
    MOV EAX,dword ptr [ESP + 0x8]       ; 00452504
    MOV EAX,dword ptr [EAX]             ; 00452508
    MOV dword ptr [EDX],EAX             ; 0045250a
    MOV EAX,EDX                         ; 0045250c
    RET                                 ; 0045250e

