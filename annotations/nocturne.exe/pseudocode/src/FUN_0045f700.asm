; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045f700(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   FUN_00404610
;   FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f700
        ;   Label: FUN_0045f700
    PUSH ESI                            ; 0045f701
    PUSH EBP                            ; 0045f702
    MOV ESI,dword ptr [ESP + 0x10]      ; 0045f703
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045f707
    CMP dword ptr [ESI + 0xc],0x0       ; 0045f70b
    JNZ 0x0045f747                      ; 0045f70f
        ;   XREF to: 0045f747 (CONDITIONAL_JUMP)  ; LAB_0045f747
    CMP dword ptr [ESI + 0x4],0x0       ; 0045f711
        ;   Label: LAB_0045f711
    JZ 0x0045f759                       ; 0045f715
        ;   XREF to: 0045f759 (CONDITIONAL_JUMP)  ; LAB_0045f759
    PUSH EDI                            ; 0045f717
    XOR EBP,EBP                         ; 0045f718
    MOV EDI,0x463a79                    ; 0045f71a | LAB_00463a79
    MOV dword ptr [0x01c039a0],EBP      ; 0045f71f | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 0045f725 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],EDI      ; 0045f72b | DAT_01c00c7c
    POP EDI                             ; 0045f731
    LEA EAX,[EBX + 0x18]                ; 0045f732
        ;   Label: LAB_0045f732
    PUSH EAX                            ; 0045f735
    MOV EDX,dword ptr [EBX + 0x4]       ; 0045f736
    PUSH EDX                            ; 0045f739
    PUSH ESI                            ; 0045f73a
    CALL FUN_0045ed80                   ; 0045f73b
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined FUN_0045ed80()
    ADD ESP,0xc                         ; 0045f740
    POP EBP                             ; 0045f743
        ;   Label: LAB_0045f743
    POP ESI                             ; 0045f744
    POP EBX                             ; 0045f745
    RET                                 ; 0045f746
    LEA EAX,[EBX + 0x8]                 ; 0045f747
        ;   Label: LAB_0045f747
    PUSH EAX                            ; 0045f74a
    CALL FUN_00404610                   ; 0045f74b
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined FUN_00404610()
    ADD ESP,0x4                         ; 0045f750
    TEST EAX,EAX                        ; 0045f753
    JZ 0x0045f743                       ; 0045f755
        ;   XREF to: 0045f743 (CONDITIONAL_JUMP)  ; LAB_0045f743
    JMP 0x0045f711                      ; 0045f757
        ;   XREF to: 0045f711 (UNCONDITIONAL_JUMP)  ; LAB_0045f711
    CMP dword ptr [0x005b7624],0x20     ; 0045f759 | DAT_005b7624
        ;   Label: LAB_0045f759
    JNZ 0x0045f784                      ; 0045f760
        ;   XREF to: 0045f784 (CONDITIONAL_JUMP)  ; LAB_0045f784
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0045f762 | DAT_01c00c7c | LAB_0052f031
    MOV ECX,0x6                         ; 0045f76c
        ;   Label: LAB_0045f76c
    MOV EDX,0x2cd                       ; 0045f771
    MOV dword ptr [0x01c039a4],ECX      ; 0045f776 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EDX      ; 0045f77c | DAT_01c039a0
    JMP 0x0045f732                      ; 0045f782
        ;   XREF to: 0045f732 (UNCONDITIONAL_JUMP)  ; LAB_0045f732
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0045f784 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_0045f784
    JMP 0x0045f76c                      ; 0045f78e
        ;   XREF to: 0045f76c (UNCONDITIONAL_JUMP)  ; LAB_0045f76c

