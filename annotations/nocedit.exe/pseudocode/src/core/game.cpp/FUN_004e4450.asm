; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl core_game_cpp_FUN_004e4450(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e4450
        ;   Label: core_game.cpp_FUN_004e4450
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e4454
    MOV EAX,dword ptr [EAX]             ; 004e4458
    MOV dword ptr [EDX],EAX             ; 004e445a
    MOV EAX,EDX                         ; 004e445c
    RET                                 ; 004e445e

