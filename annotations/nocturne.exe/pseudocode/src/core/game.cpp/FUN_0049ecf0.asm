; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_0049ecf0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c02598
;   undefined4 DAT_01c781c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ecf0
        ;   Label: core_game.cpp_FUN_0049ecf0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0049ecf4
    MOV AL,byte ptr [EDX + 0x1c781c0]   ; 0049ecf8 | DAT_01c781c0
    CMP AL,byte ptr [EDX + 0x1c02598]   ; 0049ecfe | DAT_01c02598
    JZ 0x0049ed11                       ; 0049ed04
        ;   XREF to: 0049ed11 (CONDITIONAL_JUMP)  ; LAB_0049ed11
    XOR EAX,EAX                         ; 0049ed06
    MOV AL,byte ptr [EDX + 0x1c02598]   ; 0049ed08 | DAT_01c02598
    MOV dword ptr [ECX],EAX             ; 0049ed0e
    RET                                 ; 0049ed10
    MOV dword ptr [ECX],0x0             ; 0049ed11
        ;   Label: LAB_0049ed11
    RET                                 ; 0049ed17

