; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_004fefa0(CLevelLoader *this_ptr)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cf9a9
;
; Referenced Globals:
;   TerminatedCString s_gLevelIndicator_Used_d_c_005e6cea
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_dmodel.cpp_FUN_00467160
;   engine_console.cpp_CConsole_printf_FUN_00445430
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fefa0
        ;   Label: core_level.cpp_CLevelLoader_cleanup_FUN_004fefa0
    MOV EDX,dword ptr [EAX]             ; 004fefa4
    PUSH EDX                            ; 004fefa6
    PUSH 0x5e6cea                       ; 004fefa7 | = "gLevelIndicator: Used %d calls\n"
    MOV ECX,dword ptr [0x00611100]      ; 004fefac | g_CConsolePtr
    PUSH ECX                            ; 004fefb2 | g_CConsoleInstance
    MOV dword ptr [EAX + 0xc],0x0       ; 004fefb3
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004fefba
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004fefbf
    PUSH 0x1d1be4c                      ; 004fefc2
    CALL core_dmodel.cpp_FUN_00467160   ; 004fefc7
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467160()
    ADD ESP,0x4                         ; 004fefcc
    RET                                 ; 004fefcf

