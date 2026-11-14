; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_setdir_cpp_assignInt2_FUN_005143b0(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005143b0
        ;   Label: core_setdir.cpp_assignInt2_FUN_005143b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005143b4
    MOV EAX,dword ptr [EAX]             ; 005143b8
    MOV dword ptr [EDX],EAX             ; 005143ba
    MOV EAX,EDX                         ; 005143bc
    RET                                 ; 005143be

