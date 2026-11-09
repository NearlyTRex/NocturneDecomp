; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_shovel_cpp_CShovel_fire_FUN_0053fea0(CShovel *this_ptr)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Warning_called_fire_for_005e684d
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0053fea0
        ;   Label: core_shovel.cpp_CShovel_fire_FUN_0053fea0
    PUSH EDX                            ; 0053fea4
    PUSH 0x5e684d                       ; 0053fea5 | = "Warning: called fire() for melee weap..."
    MOV ECX,dword ptr [0x00609ed0]      ; 0053feaa | g_CConsolePtr
    PUSH ECX                            ; 0053feb0 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0053feb1
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 0053feb6
    XOR EAX,EAX                         ; 0053feb9
    RET                                 ; 0053febb

