; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_bat_cpp_assignInt_FUN_00415050(int *dst,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dst
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00415050
        ;   Label: core_bat.cpp_assignInt_FUN_00415050
    MOV EAX,dword ptr [ESP + 0x8]       ; 00415054
    MOV EAX,dword ptr [EAX]             ; 00415058
    MOV dword ptr [EDX],EAX             ; 0041505a
    MOV EAX,EDX                         ; 0041505c
    RET                                 ; 0041505e

