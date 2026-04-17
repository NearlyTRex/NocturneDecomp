; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004dc270(int key_index,int *output_state)
;
; Parameters:
; int              Stack[0x4]:4   key_index
; int *            Stack[0x8]:4   output_state
;
; Referenced Globals:
;   char[4952] g_KeyboardState
;   char[600] g_PrevKeyboardState
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004dc270
        ;   Label: core_game.cpp_pollKeyStateOnChange_FUN_004dc270
    MOV AL,byte ptr [EDX + 0x2d82670]   ; 004dc274 | g_PrevKeyboardState
    CMP AL,byte ptr [EDX + 0x2d03e98]   ; 004dc27a | g_KeyboardState
    JNZ 0x004dc283                      ; 004dc280
        ;   XREF to: 004dc283 (CONDITIONAL_JUMP)  ; LAB_004dc283
    RET                                 ; 004dc282
    XOR EAX,EAX                         ; 004dc283
        ;   Label: LAB_004dc283
    MOV AL,byte ptr [EDX + 0x2d03e98]   ; 004dc285 | g_KeyboardState
    MOV EDX,dword ptr [ESP + 0x8]       ; 004dc28b
    MOV dword ptr [EDX],EAX             ; 004dc28f
    RET                                 ; 004dc291

