; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005a671c(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005a65b8 at 005a65cd
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a671c
        ;   Label: FUN_005a671c
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a671d
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a6721
    MOV word ptr [EAX + 0x1e],0x0       ; 005a6725
    MOV BL,byte ptr [EDX]               ; 005a672b
    CMP BL,0x2d                         ; 005a672d
    JNZ 0x005a6738                      ; 005a6730
        ;   XREF to: 005a6738 (CONDITIONAL_JUMP)  ; LAB_005a6738
    OR byte ptr [EAX + 0x1e],0x8        ; 005a6732
    JMP 0x005a677a                      ; 005a6736
        ;   XREF to: 005a677a (UNCONDITIONAL_JUMP)  ; LAB_005a677a
    CMP BL,0x23                         ; 005a6738
        ;   Label: LAB_005a6738
    JNZ 0x005a6743                      ; 005a673b
        ;   XREF to: 005a6743 (CONDITIONAL_JUMP)  ; LAB_005a6743
    OR byte ptr [EAX + 0x1e],0x1        ; 005a673d
    JMP 0x005a677a                      ; 005a6741
        ;   XREF to: 005a677a (UNCONDITIONAL_JUMP)  ; LAB_005a677a
    CMP BL,0x2b                         ; 005a6743
        ;   Label: LAB_005a6743
    JNZ 0x005a675b                      ; 005a6746
        ;   XREF to: 005a675b (CONDITIONAL_JUMP)  ; LAB_005a675b
    MOV CH,byte ptr [EAX + 0x1e]        ; 005a6748
    OR CH,0x4                           ; 005a674b
    MOV BL,CH                           ; 005a674e
    MOV byte ptr [EAX + 0x1e],CH        ; 005a6750
    AND BL,0xfd                         ; 005a6753
    MOV byte ptr [EAX + 0x1e],BL        ; 005a6756
    JMP 0x005a677a                      ; 005a6759
        ;   XREF to: 005a677a (UNCONDITIONAL_JUMP)  ; LAB_005a677a
    CMP BL,0x20                         ; 005a675b
        ;   Label: LAB_005a675b
    JNZ 0x005a6772                      ; 005a675e
        ;   XREF to: 005a6772 (CONDITIONAL_JUMP)  ; LAB_005a6772
    MOV BH,byte ptr [EAX + 0x1e]        ; 005a6760
    TEST BH,0x4                         ; 005a6763
    JNZ 0x005a677a                      ; 005a6766
        ;   XREF to: 005a677a (CONDITIONAL_JUMP)  ; LAB_005a677a
    MOV CL,BH                           ; 005a6768
    OR CL,0x2                           ; 005a676a
    MOV byte ptr [EAX + 0x1e],CL        ; 005a676d
    JMP 0x005a677a                      ; 005a6770
        ;   XREF to: 005a677a (UNCONDITIONAL_JUMP)  ; LAB_005a677a
    CMP BL,0x30                         ; 005a6772
        ;   Label: LAB_005a6772
    JNZ 0x005a6788                      ; 005a6775
        ;   XREF to: 005a6788 (CONDITIONAL_JUMP)  ; LAB_005a6788
    MOV byte ptr [EAX + 0x16],BL        ; 005a6777
    INC EDX                             ; 005a677a
        ;   Label: LAB_005a677a
    MOV BL,byte ptr [EDX]               ; 005a677b
    CMP BL,0x2d                         ; 005a677d
    JNZ 0x005a6738                      ; 005a6780
        ;   XREF to: 005a6738 (CONDITIONAL_JUMP)  ; LAB_005a6738
    OR byte ptr [EAX + 0x1e],0x8        ; 005a6782
    JMP 0x005a677a                      ; 005a6786
        ;   XREF to: 005a677a (UNCONDITIONAL_JUMP)  ; LAB_005a677a
    MOV EAX,EDX                         ; 005a6788
        ;   Label: LAB_005a6788
    POP EBX                             ; 005a678a
    RET                                 ; 005a678b

