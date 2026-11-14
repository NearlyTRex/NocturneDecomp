; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b7580(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7580
        ;   Label: core_game.cpp_FUN_004b7580
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b7584
    MOV AL,byte ptr [EDX + 0x1cb7528]   ; 004b7588
    CMP AL,byte ptr [EDX + 0x1c37790]   ; 004b758e
    JZ 0x004b75a1                       ; 004b7594
        ;   XREF to: 004b75a1 (CONDITIONAL_JUMP)  ; LAB_004b75a1
    XOR EAX,EAX                         ; 004b7596
    MOV AL,byte ptr [EDX + 0x1c37790]   ; 004b7598
    MOV dword ptr [ECX],EAX             ; 004b759e
    RET                                 ; 004b75a0
    MOV dword ptr [ECX],0x0             ; 004b75a1
        ;   Label: LAB_004b75a1
    RET                                 ; 004b75a7

