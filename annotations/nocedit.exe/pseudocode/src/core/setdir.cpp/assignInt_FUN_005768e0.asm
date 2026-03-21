; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_setdir_cpp_assignInt_FUN_005768e0(int *a,int *b)
;
; Parameters:
; int *            Stack[0x4]:4   a
; int *            Stack[0x8]:4   b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005768e0
        ;   Label: core_setdir.cpp_assignInt_FUN_005768e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005768e4
    MOV EAX,dword ptr [EAX]             ; 005768e8
    MOV dword ptr [EDX],EAX             ; 005768ea
    MOV EAX,EDX                         ; 005768ec
    RET                                 ; 005768ee

