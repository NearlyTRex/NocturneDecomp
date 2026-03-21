; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_game_cpp_assignInt_FUN_004e4440(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e4440
        ;   Label: core_game.cpp_assignInt_FUN_004e4440
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e4444
    MOV EAX,dword ptr [EAX]             ; 004e4448
    MOV dword ptr [EDX],EAX             ; 004e444a
    MOV EAX,EDX                         ; 004e444c
    RET                                 ; 004e444e

