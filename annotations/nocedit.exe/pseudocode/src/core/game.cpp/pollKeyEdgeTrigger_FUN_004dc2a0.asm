; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_pollKeyEdgeTrigger_FUN_004dc2a0(void)
;
;
; Referenced Globals:
;   char[256] g_KeyboardState
;   char[600] g_PrevKeyboardState
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004dc2a0
        ;   Label: core_game.cpp_pollKeyEdgeTrigger_FUN_004dc2a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004dc2a4
    MOV AL,byte ptr [EDX + 0x2d82670]   ; 004dc2a8 | g_PrevKeyboardState
    CMP AL,byte ptr [EDX + 0x2d03e98]   ; 004dc2ae | g_KeyboardState
    JZ 0x004dc2c1                       ; 004dc2b4
        ;   XREF to: 004dc2c1 (CONDITIONAL_JUMP)  ; LAB_004dc2c1
    XOR EAX,EAX                         ; 004dc2b6
    MOV AL,byte ptr [EDX + 0x2d03e98]   ; 004dc2b8 | g_KeyboardState
    MOV dword ptr [ECX],EAX             ; 004dc2be
    RET                                 ; 004dc2c0
    MOV dword ptr [ECX],0x0             ; 004dc2c1
        ;   Label: LAB_004dc2c1
    RET                                 ; 004dc2c7

