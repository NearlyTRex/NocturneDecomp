; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_zombie_cpp_assignInt_FUN_005fcd10(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005fcd10
        ;   Label: core_zombie.cpp_assignInt_FUN_005fcd10
    MOV EAX,dword ptr [ESP + 0x8]       ; 005fcd14
    MOV EAX,dword ptr [EAX]             ; 005fcd18
    MOV dword ptr [EDX],EAX             ; 005fcd1a
    MOV EAX,EDX                         ; 005fcd1c
    RET                                 ; 005fcd1e

