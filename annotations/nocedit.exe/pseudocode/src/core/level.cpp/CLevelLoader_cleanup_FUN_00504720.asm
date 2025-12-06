; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_level.cpp_CLevelLoader_cleanup_FUN_00504720(CLevelLoader * this_ptr)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db316
;
; Referenced Globals:
;   TerminatedCString s_gLevelIndicator_Used_d_c_00631038
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_ConsolePtr
;   CKeyFramedModel g_LoadingMoonModel
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00504720
        ;   Label: core_level.cpp_CLevelLoader_cleanup_FUN_00504720
    MOV EDX,dword ptr [EAX]             ; 00504724
    PUSH EDX                            ; 00504726
    PUSH 0x631038                       ; 00504727 | = "gLevelIndicator: Used %d calls\n" | s_gLevelIndicator_Used_d_c_00631038 = gLevelIndicator: Used %d calls

    MOV ECX,dword ptr [0x0066e8e0]      ; 0050472c | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH ECX                            ; 00504732 | CConsole g_ConsolePtr
    MOV dword ptr [EAX + 0xc],0x0       ; 00504733
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0050473a | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050473f
    PUSH 0x2dcd980                      ; 00504742 | CKeyFramedModel g_LoadingMoonModel
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690 ; 00504747 | void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
        ;   XREF to: 00477690 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050474c
    RET                                 ; 0050474f

