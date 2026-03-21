; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_game_cpp_assignInt_FUN_004e4460(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e4460
        ;   Label: core_game.cpp_assignInt_FUN_004e4460
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e4464
    MOV EAX,dword ptr [EAX]             ; 004e4468
    MOV dword ptr [EDX],EAX             ; 004e446a
    MOV EAX,EDX                         ; 004e446c
    RET                                 ; 004e446e

