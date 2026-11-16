; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetMusic_FUN_004c4d10(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_ctor_FUN_004b4180 at 004b440c
;   core_game.cpp_CGame_showChapterSelect_FUN_004be8d0 at 004be938
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c4d10
        ;   Label: core_game.cpp_CGame_resetMusic_FUN_004c4d10
    MOV dword ptr [EAX + 0x2fc],0x0     ; 004c4d14
    MOV dword ptr [EAX + 0x300],0x0     ; 004c4d1e
    MOV dword ptr [EAX + 0x304],0x0     ; 004c4d28
    MOV dword ptr [EAX + 0x308],0x3f800000 ; 004c4d32
    MOV byte ptr [EAX + 0x298],0x0      ; 004c4d3c
    RET                                 ; 004c4d43

