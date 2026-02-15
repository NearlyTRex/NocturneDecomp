; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl core_game_cpp_FUN_004e4440(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e4440
        ;   Label: core_game.cpp_FUN_004e4440
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e4444
    MOV EAX,dword ptr [EAX]             ; 004e4448
    MOV dword ptr [EDX],EAX             ; 004e444a
    MOV EAX,EDX                         ; 004e444c
    RET                                 ; 004e444e

