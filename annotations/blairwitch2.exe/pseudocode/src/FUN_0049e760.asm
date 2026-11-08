; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049e760(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   FUN_00410170 at 00410541
;   FUN_00486cb0 at 0048769a
;
; Referenced Globals:
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01ca13e8
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_0049ab30
;   FUN_00534800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e760
        ;   Label: FUN_0049e760
    PUSH dword ptr [ESP + 0x1c]         ; 0049e761
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049e765
    PUSH dword ptr [ESP + 0x1c]         ; 0049e769
    PUSH EDX                            ; 0049e76d
    MOV EDX,dword ptr [0x01ca13e8]      ; 0049e76e | DAT_01ca13e8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049e774
    SUB EAX,EDX                         ; 0049e77b
    SHL EAX,0x2                         ; 0049e77d
    SUB EAX,EDX                         ; 0049e780
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049e782
    SHL EAX,0x2                         ; 0049e786
    PUSH ECX                            ; 0049e789
    ADD EAX,0x1ca13ec                   ; 0049e78a
    PUSH EAX                            ; 0049e78f
    CALL FUN_0049ab30                   ; 0049e790
        ;   XREF to: 0049ab30 (UNCONDITIONAL_CALL)  ; undefined FUN_0049ab30()
    MOV EBX,dword ptr [0x01ca13e8]      ; 0049e795 | DAT_01ca13e8
    INC EBX                             ; 0049e79b
    ADD ESP,0x14                        ; 0049e79c
    MOV dword ptr [0x01ca13e8],EBX      ; 0049e79f | DAT_01ca13e8
    CMP EBX,0xa                         ; 0049e7a5
    JGE 0x0049e7b3                      ; 0049e7a8
        ;   XREF to: 0049e7b3 (CONDITIONAL_JUMP)  ; LAB_0049e7b3
    CMP dword ptr [ESP + 0x14],0x0      ; 0049e7aa
    JNZ 0x0049e7c6                      ; 0049e7af
        ;   XREF to: 0049e7c6 (CONDITIONAL_JUMP)  ; LAB_0049e7c6
    POP EBX                             ; 0049e7b1
    RET                                 ; 0049e7b2
    PUSH EDI                            ; 0049e7b3
        ;   Label: LAB_0049e7b3
    XOR EDI,EDI                         ; 0049e7b4
    MOV dword ptr [0x01ca13e8],EDI      ; 0049e7b6 | DAT_01ca13e8
    POP EDI                             ; 0049e7bc
    CMP dword ptr [ESP + 0x14],0x0      ; 0049e7bd
    JNZ 0x0049e7c6                      ; 0049e7c2
        ;   XREF to: 0049e7c6 (CONDITIONAL_JUMP)  ; LAB_0049e7c6
    POP EBX                             ; 0049e7c4
    RET                                 ; 0049e7c5
    PUSH 0x3f800000                     ; 0049e7c6
        ;   Label: LAB_0049e7c6
    PUSH 0x0                            ; 0049e7cb
    PUSH 0x0                            ; 0049e7cd
    MOV EAX,[0x0061b5a8]                ; 0049e7cf | DAT_0061b5a8
    PUSH 0x42c80000                     ; 0049e7d4
    PUSH EAX                            ; 0049e7d9 | DAT_01e661b8
    CALL FUN_00534800                   ; 0049e7da
        ;   XREF to: 00534800 (UNCONDITIONAL_CALL)  ; undefined FUN_00534800()
    ADD ESP,0x14                        ; 0049e7df
    POP EBX                             ; 0049e7e2
    RET                                 ; 0049e7e3

