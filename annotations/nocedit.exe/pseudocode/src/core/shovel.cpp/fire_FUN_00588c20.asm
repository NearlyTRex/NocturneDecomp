; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_shovel.cpp_fire_FUN_00588c20()
;
;
; Referenced Globals:
;   TerminatedCString s_Warning_called_fire_for__00649ba6
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_ConsolePtr
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00588c20
        ;   Label: core_shovel.cpp_fire_FUN_00588c20
    PUSH EDX                            ; 00588c24
    PUSH 0x649ba6                       ; 00588c25 | = "Warning: called fire() for melee weap..." | s_Warning_called_fire_for__00649ba6 = Warning: called fire() for melee weapon %s

    MOV ECX,dword ptr [0x0066e8e0]      ; 00588c2a | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH ECX                            ; 00588c30 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00588c31 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00588c36
    XOR EAX,EAX                         ; 00588c39
    RET                                 ; 00588c3b

