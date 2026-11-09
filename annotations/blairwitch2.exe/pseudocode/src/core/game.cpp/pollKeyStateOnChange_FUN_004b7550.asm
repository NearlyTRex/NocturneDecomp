; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004b7550(int key_index,int *output_state)
;
; Parameters:
; int              Stack[0x4]:4   key_index
; int *            Stack[0x8]:4   output_state
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7550
        ;   Label: core_game.cpp_pollKeyStateOnChange_FUN_004b7550
    MOV AL,byte ptr [EDX + 0x1cb7528]   ; 004b7554
    CMP AL,byte ptr [EDX + 0x1c37790]   ; 004b755a
    JNZ 0x004b7563                      ; 004b7560
        ;   XREF to: 004b7563 (CONDITIONAL_JUMP)  ; LAB_004b7563
    RET                                 ; 004b7562
    XOR EAX,EAX                         ; 004b7563
        ;   Label: LAB_004b7563
    MOV AL,byte ptr [EDX + 0x1c37790]   ; 004b7565
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b756b
    MOV dword ptr [EDX],EAX             ; 004b756f
    RET                                 ; 004b7571

