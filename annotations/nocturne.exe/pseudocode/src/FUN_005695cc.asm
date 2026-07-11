; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005695cc(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00569468 at 0056947d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005695cc
        ;   Label: FUN_005695cc
    MOV EDX,dword ptr [ESP + 0x8]       ; 005695cd
    MOV EAX,dword ptr [ESP + 0xc]       ; 005695d1
    MOV word ptr [EAX + 0x1e],0x0       ; 005695d5
    MOV BL,byte ptr [EDX]               ; 005695db
    CMP BL,0x2d                         ; 005695dd
    JNZ 0x005695e8                      ; 005695e0
        ;   XREF to: 005695e8 (CONDITIONAL_JUMP)  ; LAB_005695e8
    OR byte ptr [EAX + 0x1e],0x8        ; 005695e2
    JMP 0x0056962a                      ; 005695e6
        ;   XREF to: 0056962a (UNCONDITIONAL_JUMP)  ; LAB_0056962a
    CMP BL,0x23                         ; 005695e8
        ;   Label: LAB_005695e8
    JNZ 0x005695f3                      ; 005695eb
        ;   XREF to: 005695f3 (CONDITIONAL_JUMP)  ; LAB_005695f3
    OR byte ptr [EAX + 0x1e],0x1        ; 005695ed
    JMP 0x0056962a                      ; 005695f1
        ;   XREF to: 0056962a (UNCONDITIONAL_JUMP)  ; LAB_0056962a
    CMP BL,0x2b                         ; 005695f3
        ;   Label: LAB_005695f3
    JNZ 0x0056960b                      ; 005695f6
        ;   XREF to: 0056960b (CONDITIONAL_JUMP)  ; LAB_0056960b
    MOV CH,byte ptr [EAX + 0x1e]        ; 005695f8
    OR CH,0x4                           ; 005695fb
    MOV BL,CH                           ; 005695fe
    MOV byte ptr [EAX + 0x1e],CH        ; 00569600
    AND BL,0xfd                         ; 00569603
    MOV byte ptr [EAX + 0x1e],BL        ; 00569606
    JMP 0x0056962a                      ; 00569609
        ;   XREF to: 0056962a (UNCONDITIONAL_JUMP)  ; LAB_0056962a
    CMP BL,0x20                         ; 0056960b
        ;   Label: LAB_0056960b
    JNZ 0x00569622                      ; 0056960e
        ;   XREF to: 00569622 (CONDITIONAL_JUMP)  ; LAB_00569622
    MOV BH,byte ptr [EAX + 0x1e]        ; 00569610
    TEST BH,0x4                         ; 00569613
    JNZ 0x0056962a                      ; 00569616
        ;   XREF to: 0056962a (CONDITIONAL_JUMP)  ; LAB_0056962a
    MOV CL,BH                           ; 00569618
    OR CL,0x2                           ; 0056961a
    MOV byte ptr [EAX + 0x1e],CL        ; 0056961d
    JMP 0x0056962a                      ; 00569620
        ;   XREF to: 0056962a (UNCONDITIONAL_JUMP)  ; LAB_0056962a
    CMP BL,0x30                         ; 00569622
        ;   Label: LAB_00569622
    JNZ 0x00569638                      ; 00569625
        ;   XREF to: 00569638 (CONDITIONAL_JUMP)  ; LAB_00569638
    MOV byte ptr [EAX + 0x16],BL        ; 00569627
    INC EDX                             ; 0056962a
        ;   Label: LAB_0056962a
    MOV BL,byte ptr [EDX]               ; 0056962b
    CMP BL,0x2d                         ; 0056962d
    JNZ 0x005695e8                      ; 00569630
        ;   XREF to: 005695e8 (CONDITIONAL_JUMP)  ; LAB_005695e8
    OR byte ptr [EAX + 0x1e],0x8        ; 00569632
    JMP 0x0056962a                      ; 00569636
        ;   XREF to: 0056962a (UNCONDITIONAL_JUMP)  ; LAB_0056962a
    MOV EAX,EDX                         ; 00569638
        ;   Label: LAB_00569638
    POP EBX                             ; 0056963a
    RET                                 ; 0056963b

