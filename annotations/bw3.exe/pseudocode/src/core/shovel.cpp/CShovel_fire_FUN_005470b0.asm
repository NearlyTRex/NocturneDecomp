; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_shovel_cpp_CShovel_fire_FUN_005470b0(CShovel *this_ptr)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Warning_called_fire_for_005d154a
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_FUN_00441ff0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005470b0
        ;   Label: core_shovel.cpp_CShovel_fire_FUN_005470b0
    PUSH EDX                            ; 005470b4
    PUSH 0x5d154a                       ; 005470b5 | = "Warning: called fire() for melee weap..."
    MOV ECX,dword ptr [0x005f1690]      ; 005470ba | g_CConsolePtr
    PUSH ECX                            ; 005470c0 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 005470c1
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 005470c6
    XOR EAX,EAX                         ; 005470c9
    RET                                 ; 005470cb

