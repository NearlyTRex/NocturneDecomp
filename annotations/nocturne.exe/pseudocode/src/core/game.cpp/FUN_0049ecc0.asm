; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_0049ecc0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c02598
;   undefined4 DAT_01c781c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ecc0
        ;   Label: core_game.cpp_FUN_0049ecc0
    MOV AL,byte ptr [EDX + 0x1c781c0]   ; 0049ecc4 | DAT_01c781c0
    CMP AL,byte ptr [EDX + 0x1c02598]   ; 0049ecca | DAT_01c02598
    JNZ 0x0049ecd3                      ; 0049ecd0
        ;   XREF to: 0049ecd3 (CONDITIONAL_JUMP)  ; LAB_0049ecd3
    RET                                 ; 0049ecd2
    XOR EAX,EAX                         ; 0049ecd3
        ;   Label: LAB_0049ecd3
    MOV AL,byte ptr [EDX + 0x1c02598]   ; 0049ecd5 | DAT_01c02598
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ecdb
    MOV dword ptr [EDX],EAX             ; 0049ecdf
    RET                                 ; 0049ece1

