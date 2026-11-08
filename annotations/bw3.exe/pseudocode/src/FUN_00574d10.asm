; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574d10(int param_1)
;
;
; XREF[1]:
;   FUN_00574b50 at 00574b63
;
; Called Functions:
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574d10
        ;   Label: FUN_00574d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574d11
    MOV EDX,dword ptr [EBX + 0x4]       ; 00574d15
    TEST EDX,EDX                        ; 00574d18
    JZ 0x00574d29                       ; 00574d1a
        ;   XREF to: 00574d29 (CONDITIONAL_JUMP)  ; LAB_00574d29
    CMP dword ptr [EBX + 0x14],0x0      ; 00574d1c
    JNZ 0x00574d40                      ; 00574d20
        ;   XREF to: 00574d40 (CONDITIONAL_JUMP)  ; LAB_00574d40
    MOV dword ptr [EBX + 0x4],0x0       ; 00574d22
        ;   Label: LAB_00574d22
    MOV dword ptr [EBX + 0xc],0x0       ; 00574d29
        ;   Label: LAB_00574d29
    MOV dword ptr [EBX + 0x14],0x1      ; 00574d30
    MOV dword ptr [EBX + 0x8],0x0       ; 00574d37
    POP EBX                             ; 00574d3e
    RET                                 ; 00574d3f
    PUSH EDX                            ; 00574d40
        ;   Label: LAB_00574d40
    CALL FUN_005a3770                   ; 00574d41
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 00574d46
    JMP 0x00574d22                      ; 00574d49
        ;   XREF to: 00574d22 (UNCONDITIONAL_JUMP)  ; LAB_00574d22

