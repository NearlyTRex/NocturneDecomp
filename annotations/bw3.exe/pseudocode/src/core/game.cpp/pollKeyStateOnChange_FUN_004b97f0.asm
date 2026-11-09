; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004b97f0(int key_index,int *output_state)
;
; Parameters:
; int              Stack[0x4]:4   key_index
; int *            Stack[0x8]:4   output_state
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b97f0
        ;   Label: core_game.cpp_pollKeyStateOnChange_FUN_004b97f0
    MOV AL,byte ptr [EDX + 0x1d21fa0]   ; 004b97f4
    CMP AL,byte ptr [EDX + 0x1c6cef0]   ; 004b97fa
    JNZ 0x004b9803                      ; 004b9800
        ;   XREF to: 004b9803 (CONDITIONAL_JUMP)  ; LAB_004b9803
    RET                                 ; 004b9802
    XOR EAX,EAX                         ; 004b9803
        ;   Label: LAB_004b9803
    MOV AL,byte ptr [EDX + 0x1c6cef0]   ; 004b9805
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b980b
    MOV dword ptr [EDX],EAX             ; 004b980f
    RET                                 ; 004b9811

