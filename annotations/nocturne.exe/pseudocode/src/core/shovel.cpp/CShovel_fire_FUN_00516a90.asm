; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_shovel_cpp_CShovel_fire_FUN_00516a90(CShovel *this_ptr)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Warning_called_fire_for_005910d1
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00516a90
        ;   Label: core_shovel.cpp_CShovel_fire_FUN_00516a90
    PUSH EDX                            ; 00516a94
    PUSH 0x5910d1                       ; 00516a95 | = "Warning: called fire() for melee weap..."
    MOV ECX,dword ptr [0x005ad350]      ; 00516a9a | PTR_DAT_005ad350
    PUSH ECX                            ; 00516aa0 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00516aa1
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 00516aa6
    XOR EAX,EAX                         ; 00516aa9
    RET                                 ; 00516aab

