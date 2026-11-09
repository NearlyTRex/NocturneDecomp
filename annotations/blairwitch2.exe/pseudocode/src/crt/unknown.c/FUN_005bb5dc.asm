; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * crt_unknown_c_FUN_005bb5dc(char *param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bb478 at 005bb48d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb5dc
        ;   Label: crt_unknown.c_FUN_005bb5dc
    MOV EDX,dword ptr [ESP + 0x8]       ; 005bb5dd
    MOV EAX,dword ptr [ESP + 0xc]       ; 005bb5e1
    MOV word ptr [EAX + 0x1e],0x0       ; 005bb5e5
    MOV BL,byte ptr [EDX]               ; 005bb5eb
    CMP BL,0x2d                         ; 005bb5ed
    JNZ 0x005bb5f8                      ; 005bb5f0
        ;   XREF to: 005bb5f8 (CONDITIONAL_JUMP)  ; LAB_005bb5f8
    OR byte ptr [EAX + 0x1e],0x8        ; 005bb5f2
    JMP 0x005bb63a                      ; 005bb5f6
        ;   XREF to: 005bb63a (UNCONDITIONAL_JUMP)  ; LAB_005bb63a
    CMP BL,0x23                         ; 005bb5f8
        ;   Label: LAB_005bb5f8
    JNZ 0x005bb603                      ; 005bb5fb
        ;   XREF to: 005bb603 (CONDITIONAL_JUMP)  ; LAB_005bb603
    OR byte ptr [EAX + 0x1e],0x1        ; 005bb5fd
    JMP 0x005bb63a                      ; 005bb601
        ;   XREF to: 005bb63a (UNCONDITIONAL_JUMP)  ; LAB_005bb63a
    CMP BL,0x2b                         ; 005bb603
        ;   Label: LAB_005bb603
    JNZ 0x005bb61b                      ; 005bb606
        ;   XREF to: 005bb61b (CONDITIONAL_JUMP)  ; LAB_005bb61b
    MOV CH,byte ptr [EAX + 0x1e]        ; 005bb608
    OR CH,0x4                           ; 005bb60b
    MOV BL,CH                           ; 005bb60e
    MOV byte ptr [EAX + 0x1e],CH        ; 005bb610
    AND BL,0xfd                         ; 005bb613
    MOV byte ptr [EAX + 0x1e],BL        ; 005bb616
    JMP 0x005bb63a                      ; 005bb619
        ;   XREF to: 005bb63a (UNCONDITIONAL_JUMP)  ; LAB_005bb63a
    CMP BL,0x20                         ; 005bb61b
        ;   Label: LAB_005bb61b
    JNZ 0x005bb632                      ; 005bb61e
        ;   XREF to: 005bb632 (CONDITIONAL_JUMP)  ; LAB_005bb632
    MOV BH,byte ptr [EAX + 0x1e]        ; 005bb620
    TEST BH,0x4                         ; 005bb623
    JNZ 0x005bb63a                      ; 005bb626
        ;   XREF to: 005bb63a (CONDITIONAL_JUMP)  ; LAB_005bb63a
    MOV CL,BH                           ; 005bb628
    OR CL,0x2                           ; 005bb62a
    MOV byte ptr [EAX + 0x1e],CL        ; 005bb62d
    JMP 0x005bb63a                      ; 005bb630
        ;   XREF to: 005bb63a (UNCONDITIONAL_JUMP)  ; LAB_005bb63a
    CMP BL,0x30                         ; 005bb632
        ;   Label: LAB_005bb632
    JNZ 0x005bb648                      ; 005bb635
        ;   XREF to: 005bb648 (CONDITIONAL_JUMP)  ; LAB_005bb648
    MOV byte ptr [EAX + 0x16],BL        ; 005bb637
    INC EDX                             ; 005bb63a
        ;   Label: LAB_005bb63a
    MOV BL,byte ptr [EDX]               ; 005bb63b
    CMP BL,0x2d                         ; 005bb63d
    JNZ 0x005bb5f8                      ; 005bb640
        ;   XREF to: 005bb5f8 (CONDITIONAL_JUMP)  ; LAB_005bb5f8
    OR byte ptr [EAX + 0x1e],0x8        ; 005bb642
    JMP 0x005bb63a                      ; 005bb646
        ;   XREF to: 005bb63a (UNCONDITIONAL_JUMP)  ; LAB_005bb63a
    MOV EAX,EDX                         ; 005bb648
        ;   Label: LAB_005bb648
    POP EBX                             ; 005bb64a
    RET                                 ; 005bb64b

