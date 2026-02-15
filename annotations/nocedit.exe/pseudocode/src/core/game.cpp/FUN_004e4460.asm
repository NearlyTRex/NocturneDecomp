; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl core_game_cpp_FUN_004e4460(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e4460
        ;   Label: core_game.cpp_FUN_004e4460
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e4464
    MOV EAX,dword ptr [EAX]             ; 004e4468
    MOV dword ptr [EDX],EAX             ; 004e446a
    MOV EAX,EDX                         ; 004e446c
    RET                                 ; 004e446e

