; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056f820(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d68d7
;
; Called Functions:
;   FUN_0056f580
;   FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f820
        ;   Label: FUN_0056f820
    PUSH ESI                            ; 0056f821
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056f822
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056f826
    PUSH EBX                            ; 0056f82a
    PUSH ESI                            ; 0056f82b
    CALL FUN_0056f580                   ; 0056f82c
        ;   XREF to: 0056f580 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f580()
    ADD ESP,0x8                         ; 0056f831
    MOV SI,word ptr [ESI + 0x4]         ; 0056f834
    AND ESI,0xffff                      ; 0056f838
    PUSH ESI                            ; 0056f83e
    PUSH 0x5d68d7                       ; 0056f83f | DAT_005d68d7
    XOR DL,DL                           ; 0056f844
    MOV ESI,EBX                         ; 0056f846
    MOV AL,byte ptr [ESI]               ; 0056f848
        ;   Label: LAB_0056f848
    CMP AL,DL                           ; 0056f84a
    JZ 0x0056f860                       ; 0056f84c
        ;   XREF to: 0056f860 (CONDITIONAL_JUMP)  ; LAB_0056f860
    CMP AL,0x0                          ; 0056f84e
    JZ 0x0056f85e                       ; 0056f850
        ;   XREF to: 0056f85e (CONDITIONAL_JUMP)  ; LAB_0056f85e
    INC ESI                             ; 0056f852
    MOV AL,byte ptr [ESI]               ; 0056f853
    CMP AL,DL                           ; 0056f855
    JZ 0x0056f860                       ; 0056f857
        ;   XREF to: 0056f860 (CONDITIONAL_JUMP)  ; LAB_0056f860
    INC ESI                             ; 0056f859
    CMP AL,0x0                          ; 0056f85a
    JNZ 0x0056f848                      ; 0056f85c
        ;   XREF to: 0056f848 (CONDITIONAL_JUMP)  ; LAB_0056f848
    SUB ESI,ESI                         ; 0056f85e
        ;   Label: LAB_0056f85e
    PUSH ESI                            ; 0056f860
        ;   Label: LAB_0056f860
    CALL FUN_005a28c0                   ; 0056f861
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 0056f866
    POP ESI                             ; 0056f869
    POP EBX                             ; 0056f86a
    RET                                 ; 0056f86b

