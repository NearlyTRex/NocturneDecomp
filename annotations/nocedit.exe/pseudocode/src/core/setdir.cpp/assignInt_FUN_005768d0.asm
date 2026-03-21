; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_setdir_cpp_assignInt_FUN_005768d0(int *a,int *b)
;
; Parameters:
; int *            Stack[0x4]:4   a
; int *            Stack[0x8]:4   b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005768d0
        ;   Label: core_setdir.cpp_assignInt_FUN_005768d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005768d4
    MOV EAX,dword ptr [EAX]             ; 005768d8
    MOV dword ptr [EDX],EAX             ; 005768da
    MOV EAX,EDX                         ; 005768dc
    RET                                 ; 005768de

