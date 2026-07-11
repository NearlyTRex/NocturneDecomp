; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f8b40(int *param_1)
;
;
; XREF[2]:
;   FUN_004c90e0 at 004c9386
;   FUN_004f8840 at 004f8857
;
; Called Functions:
;   FUN_004f7ac0
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8b40
        ;   Label: FUN_004f8b40
    PUSH ESI                            ; 004f8b41
    PUSH EDI                            ; 004f8b42
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f8b43
    MOV EDX,dword ptr [EDI]             ; 004f8b47
    XOR ESI,ESI                         ; 004f8b49
    TEST EDX,EDX                        ; 004f8b4b
    JLE 0x004f8b69                      ; 004f8b4d
        ;   XREF to: 004f8b69 (CONDITIONAL_JUMP)  ; LAB_004f8b69
    MOV EBX,EDI                         ; 004f8b4f
    MOV EAX,dword ptr [EBX + 0x4]       ; 004f8b51
        ;   Label: LAB_004f8b51
    TEST EAX,EAX                        ; 004f8b54
    JNZ 0x004f8b73                      ; 004f8b56
        ;   XREF to: 004f8b73 (CONDITIONAL_JUMP)  ; LAB_004f8b73
    MOV dword ptr [EBX + 0x4],0x0       ; 004f8b58
        ;   Label: LAB_004f8b58
    INC ESI                             ; 004f8b5f
    MOV ECX,dword ptr [EDI]             ; 004f8b60
    ADD EBX,0x4                         ; 004f8b62
    CMP ESI,ECX                         ; 004f8b65
    JL 0x004f8b51                       ; 004f8b67
        ;   XREF to: 004f8b51 (CONDITIONAL_JUMP)  ; LAB_004f8b51
    MOV dword ptr [EDI],0x0             ; 004f8b69
        ;   Label: LAB_004f8b69
    POP EDI                             ; 004f8b6f
    POP ESI                             ; 004f8b70
    POP EBX                             ; 004f8b71
    RET                                 ; 004f8b72
    PUSH 0x0                            ; 004f8b73
        ;   Label: LAB_004f8b73
    PUSH EAX                            ; 004f8b75
    CALL FUN_004f7ac0                   ; 004f8b76
        ;   XREF to: 004f7ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7ac0()
    ADD ESP,0x8                         ; 004f8b7b
    PUSH EAX                            ; 004f8b7e
    CALL FUN_00564494                   ; 004f8b7f
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004f8b84
    JMP 0x004f8b58                      ; 004f8b87
        ;   XREF to: 004f8b58 (UNCONDITIONAL_JUMP)  ; LAB_004f8b58

