; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_dlight_cpp_assignInt_FUN_00476c40(int *dst,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dst
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00476c40
        ;   Label: core_dlight.cpp_assignInt_FUN_00476c40
    MOV EAX,dword ptr [ESP + 0x8]       ; 00476c44
    MOV EAX,dword ptr [EAX]             ; 00476c48
    MOV dword ptr [EDX],EAX             ; 00476c4a
    MOV EAX,EDX                         ; 00476c4c
    RET                                 ; 00476c4e

