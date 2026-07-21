; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_004c5fa0(undefined4 *param_1)
;
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049ddaf
;
; Referenced Globals:
;   string s_gLevelIndicator:_Used_%d_calls_005878cd
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   FUN_00452f10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c5fa0
        ;   Label: core_level.cpp_CLevelLoader_cleanup_FUN_004c5fa0
    MOV EDX,dword ptr [EAX]             ; 004c5fa4
    PUSH EDX                            ; 004c5fa6
    PUSH 0x5878cd                       ; 004c5fa7 | = "gLevelIndicator: Used %d calls\n"
    MOV ECX,dword ptr [0x005ad350]      ; 004c5fac | PTR_DAT_005ad350
    PUSH ECX                            ; 004c5fb2 | DAT_0077ad0c
    MOV dword ptr [EAX + 0xc],0x0       ; 004c5fb3
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004c5fba
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 004c5fbf
    PUSH 0x1cc3290                      ; 004c5fc2
    CALL FUN_00452f10                   ; 004c5fc7
        ;   XREF to: 00452f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00452f10()
    ADD ESP,0x4                         ; 004c5fcc
    RET                                 ; 004c5fcf

