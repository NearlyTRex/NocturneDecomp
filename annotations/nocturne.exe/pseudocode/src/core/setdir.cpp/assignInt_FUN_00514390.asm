; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_setdir_cpp_assignInt_FUN_00514390(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00514390
        ;   Label: core_setdir.cpp_assignInt_FUN_00514390
    MOV EAX,dword ptr [ESP + 0x8]       ; 00514394
    MOV EAX,dword ptr [EAX]             ; 00514398
    MOV dword ptr [EDX],EAX             ; 0051439a
    MOV EAX,EDX                         ; 0051439c
    RET                                 ; 0051439e

