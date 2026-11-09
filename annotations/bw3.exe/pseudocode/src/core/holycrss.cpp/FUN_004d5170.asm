; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_holycrss_cpp_FUN_004d5170(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Warning_called_fire_for_005c51ac
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_FUN_00441ff0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d5170
        ;   Label: core_holycrss.cpp_FUN_004d5170
    PUSH EDX                            ; 004d5174
    PUSH 0x5c51ac                       ; 004d5175 | = "Warning: called fire() for melee weap..."
    MOV ECX,dword ptr [0x005f1690]      ; 004d517a | g_CConsolePtr
    PUSH ECX                            ; 004d5180 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 004d5181
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 004d5186
    XOR EAX,EAX                         ; 004d5189
    RET                                 ; 004d518b

