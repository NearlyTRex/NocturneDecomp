; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_shovel_cpp_CShovel_fire_FUN_00562490(CShovel *this_ptr)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Warning_called_fire_for_005f1a1f
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_00445430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00562490
        ;   Label: core_shovel.cpp_CShovel_fire_FUN_00562490
    PUSH EDX                            ; 00562494
    PUSH 0x5f1a1f                       ; 00562495 | = "Warning: called fire() for melee weap..."
    MOV ECX,dword ptr [0x00611100]      ; 0056249a | g_CConsolePtr
    PUSH ECX                            ; 005624a0 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 005624a1
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005624a6
    XOR EAX,EAX                         ; 005624a9
    RET                                 ; 005624ab

