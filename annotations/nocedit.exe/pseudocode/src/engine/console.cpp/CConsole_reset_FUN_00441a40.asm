; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_CConsole_reset_FUN_00441a40(CConsole *this_ptr)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004daf9b
;   engine_console.cpp_CConsole_ctor_FUN_00441810 at 0044185c
;
; Referenced Globals:
;   char[28] g_ConsoleLogFilename
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_remove_FUN_005ff9d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441a40
        ;   Label: engine_console.cpp_CConsole_reset_FUN_00441a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441a41
    PUSH 0xfa0                          ; 00441a45
    PUSH 0x0                            ; 00441a4a
    LEA EAX,[EBX + 0x4]                 ; 00441a4c
    PUSH EAX                            ; 00441a4f
    CALL crt_memory.c_memset_FUN_005fde40 ; 00441a50
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00441a55
    MOV dword ptr [EBX + 0xfa4],0x0     ; 00441a58
    PUSH 0x66e8e8                       ; 00441a62 | g_ConsoleLogFilename
    MOV dword ptr [EBX + 0xfa8],0x0     ; 00441a67
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 00441a71
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00441a76
    POP EBX                             ; 00441a79
    RET                                 ; 00441a7a

