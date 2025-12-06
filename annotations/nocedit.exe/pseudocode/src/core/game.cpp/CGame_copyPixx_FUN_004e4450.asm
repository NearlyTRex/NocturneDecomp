; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGame * core_game.cpp_CGame_copyPixx_FUN_004e4450(CGame * this_ptr, CGame * other)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; CGame *          Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e4450
        ;   Label: core_game.cpp_CGame_copyPixx_FUN_004e4450
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e4454
    MOV EAX,dword ptr [EAX]             ; 004e4458
    MOV dword ptr [EDX],EAX             ; 004e445a
    MOV EAX,EDX                         ; 004e445c
    RET                                 ; 004e445e

