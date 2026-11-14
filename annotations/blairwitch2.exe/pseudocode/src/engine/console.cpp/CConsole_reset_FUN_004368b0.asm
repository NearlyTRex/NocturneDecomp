; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_CConsole_reset_FUN_004368b0(CConsole *this_ptr)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b6190
;   engine_console.cpp_CConsole_ctor_FUN_00436680 at 004366cc
;
; Referenced Globals:
;   TerminatedCString s_console_txt_00609ed8
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   engine_dosio.cpp_FUN_00461440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004368b0
        ;   Label: engine_console.cpp_CConsole_reset_FUN_004368b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004368b1
    PUSH 0xfa0                          ; 004368b5
    PUSH 0x0                            ; 004368ba
    LEA EAX,[EBX + 0x8]                 ; 004368bc
    PUSH EAX                            ; 004368bf
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004368c0
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004368c5
    MOV dword ptr [EBX + 0xfa8],0x0     ; 004368c8
    PUSH 0x609ed8                       ; 004368d2 | = "console.txt"
    MOV dword ptr [EBX + 0xfac],0x0     ; 004368d7
    CALL engine_dosio.cpp_FUN_00461440  ; 004368e1
        ;   XREF to: 00461440 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00461440()
    ADD ESP,0x4                         ; 004368e6
    POP EBX                             ; 004368e9
    RET                                 ; 004368ea

