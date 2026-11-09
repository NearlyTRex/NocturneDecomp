; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004d0d70(int key_index,int *output_state)
;
; Parameters:
; int              Stack[0x4]:4   key_index
; int *            Stack[0x8]:4   output_state
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d0d70
        ;   Label: core_game.cpp_pollKeyStateOnChange_FUN_004d0d70
    MOV AL,byte ptr [EDX + 0x1ccff98]   ; 004d0d74
    CMP AL,byte ptr [EDX + 0x1c50950]   ; 004d0d7a
    JNZ 0x004d0d83                      ; 004d0d80
        ;   XREF to: 004d0d83 (CONDITIONAL_JUMP)  ; LAB_004d0d83
    RET                                 ; 004d0d82
    XOR EAX,EAX                         ; 004d0d83
        ;   Label: LAB_004d0d83
    MOV AL,byte ptr [EDX + 0x1c50950]   ; 004d0d85
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d0d8b
    MOV dword ptr [EDX],EAX             ; 004d0d8f
    RET                                 ; 004d0d91

