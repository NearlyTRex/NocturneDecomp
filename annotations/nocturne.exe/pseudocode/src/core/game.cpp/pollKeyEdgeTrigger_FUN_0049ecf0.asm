; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_pollKeyEdgeTrigger_FUN_0049ecf0(int key_index,uint *out_state)
;
; Parameters:
; int              Stack[0x4]:4   key_index
; uint *           Stack[0x8]:4   out_state
;
; Referenced Globals:
;   char[4952] g_KeyboardState
;   char[600] g_PrevKeyboardState
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ecf0
        ;   Label: core_game.cpp_pollKeyEdgeTrigger_FUN_0049ecf0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0049ecf4
    MOV AL,byte ptr [EDX + 0x1c781c0]   ; 0049ecf8 | g_PrevKeyboardState
    CMP AL,byte ptr [EDX + 0x1c02598]   ; 0049ecfe | g_KeyboardState
    JZ 0x0049ed11                       ; 0049ed04
        ;   XREF to: 0049ed11 (CONDITIONAL_JUMP)  ; LAB_0049ed11
    XOR EAX,EAX                         ; 0049ed06
    MOV AL,byte ptr [EDX + 0x1c02598]   ; 0049ed08 | g_KeyboardState
    MOV dword ptr [ECX],EAX             ; 0049ed0e
    RET                                 ; 0049ed10
    MOV dword ptr [ECX],0x0             ; 0049ed11
        ;   Label: LAB_0049ed11
    RET                                 ; 0049ed17

