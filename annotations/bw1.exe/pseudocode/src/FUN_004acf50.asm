; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004acf50(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005df1dc
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01c43530
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01ccf624
;
; Called Functions:
;   FUN_004d7f50
;   FUN_00532250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004acf50
        ;   Label: FUN_004acf50
    PUSH EDI                            ; 004acf51
    PUSH EBP                            ; 004acf52
    SUB ESP,0x8                         ; 004acf53
    MOV EBX,dword ptr [ESP + 0x18]      ; 004acf56
    CMP dword ptr [EBX + 0x48],0x0      ; 004acf5a
    JNZ 0x004acfc9                      ; 004acf5e
        ;   XREF to: 004acfc9 (CONDITIONAL_JUMP)  ; LAB_004acfc9
    MOV dword ptr [EBX + 0x48],0x1      ; 004acf60
    MOV EAX,[0x0061d95c]                ; 004acf67 | DAT_0061d95c
        ;   Label: LAB_004acf67
    MOV EAX,dword ptr [EAX + 0x294]     ; 004acf6c | DAT_01ccf624
    MOV EDX,dword ptr [0x01c43530]      ; 004acf72 | DAT_01c43530
    MOV dword ptr [ESP],EAX             ; 004acf78
    MOV EAX,dword ptr [EBX + 0x50]      ; 004acf7b
    IMUL EDX                            ; 004acf7e
    SHRD EAX,EDX,0x10                   ; 004acf80
    MOV dword ptr [ESP + 0x4],EAX       ; 004acf84
    FILD dword ptr [ESP + 0x4]          ; 004acf88
    FMUL double ptr [0x005df1dc]        ; 004acf8c | DAT_005df1dc
    SUB ESP,0x4                         ; 004acf92
    MOV EDI,dword ptr [0x0061d95c]      ; 004acf95 | DAT_0061d95c
    FSTP float ptr [ESP]                ; 004acf9b
    PUSH EDI                            ; 004acf9e | DAT_01ccf390
    CALL FUN_004d7f50                   ; 004acf9f
        ;   XREF to: 004d7f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7f50()
    ADD ESP,0x8                         ; 004acfa4
    PUSH EBX                            ; 004acfa7
    CALL FUN_00532250                   ; 004acfa8
        ;   XREF to: 00532250 (UNCONDITIONAL_CALL)  ; undefined FUN_00532250()
    ADD ESP,0x4                         ; 004acfad
    MOV EBP,dword ptr [0x0061d95c]      ; 004acfb0 | DAT_0061d95c
    PUSH dword ptr [ESP]                ; 004acfb6
    PUSH EBP                            ; 004acfb9 | DAT_01ccf390
    CALL FUN_004d7f50                   ; 004acfba
        ;   XREF to: 004d7f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7f50()
    ADD ESP,0x8                         ; 004acfbf
    ADD ESP,0x8                         ; 004acfc2
    POP EBP                             ; 004acfc5
    POP EDI                             ; 004acfc6
    POP EBX                             ; 004acfc7
    RET                                 ; 004acfc8
    MOV EAX,[0x01c43530]                ; 004acfc9 | DAT_01c43530
        ;   Label: LAB_004acfc9
    MOV EDX,dword ptr [EBX + 0x50]      ; 004acfce
    MOV ECX,dword ptr [EBX + 0x44]      ; 004acfd1
    IMUL EDX                            ; 004acfd4
    SHRD EAX,EDX,0x10                   ; 004acfd6
    MOV EDX,EAX                         ; 004acfda
    MOV EAX,ECX                         ; 004acfdc
    IMUL EDX                            ; 004acfde
    SHRD EAX,EDX,0x10                   ; 004acfe0
    MOV ECX,dword ptr [EBX + 0x40]      ; 004acfe4
    SUB ECX,EAX                         ; 004acfe7
    MOV dword ptr [EBX + 0x40],ECX      ; 004acfe9
    TEST ECX,ECX                        ; 004acfec
    JGE 0x004acf67                      ; 004acfee
        ;   XREF to: 004acf67 (CONDITIONAL_JUMP)  ; LAB_004acf67
    MOV dword ptr [EBX + 0x24],0x0      ; 004acff4
    MOV dword ptr [EBX + 0x40],0x0      ; 004acffb
    JMP 0x004acf67                      ; 004ad002
        ;   XREF to: 004acf67 (UNCONDITIONAL_JUMP)  ; LAB_004acf67

