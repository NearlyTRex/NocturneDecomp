; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_004e1b80(CLevelLoader *this_ptr)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b653b
;
; Referenced Globals:
;   TerminatedCString s_gLevelIndicator_Used_d_c_005dbee2
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_dmodel.cpp_FUN_0044e590
;   engine_console.cpp_CConsole_printf_FUN_00436710
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e1b80
        ;   Label: core_level.cpp_CLevelLoader_cleanup_FUN_004e1b80
    MOV EDX,dword ptr [EAX]             ; 004e1b84
    PUSH EDX                            ; 004e1b86
    PUSH 0x5dbee2                       ; 004e1b87 | = "gLevelIndicator: Used %d calls\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 004e1b8c | g_CConsolePtr
    PUSH ECX                            ; 004e1b92 | g_CConsoleInstance
    MOV dword ptr [EAX + 0xc],0x0       ; 004e1b93
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004e1b9a
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004e1b9f
    PUSH 0x1d03130                      ; 004e1ba2
    CALL core_dmodel.cpp_FUN_0044e590   ; 004e1ba7
        ;   XREF to: 0044e590 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_0044e590()
    ADD ESP,0x4                         ; 004e1bac
    RET                                 ; 004e1baf

