; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049d600(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)
;
;
; XREF[2]:
;   FUN_0040cb60 at 0040cd7f
;   FUN_00486cb0 at 0048729a
;
; Referenced Globals:
;   undefined4 DAT_01c950d8
;
; Called Functions:
;   FUN_0044fd20
;   FUN_00496750
;   FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d600
        ;   Label: FUN_0049d600
    PUSH EBP                            ; 0049d601
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049d602
    MOV EDX,dword ptr [0x01c950d8]      ; 0049d606 | DAT_01c950d8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049d60c
    ADD EAX,EDX                         ; 0049d613
    SHL EAX,0x2                         ; 0049d615
    MOV EBX,0x1c950dc                   ; 0049d618
    ADD EAX,EDX                         ; 0049d61d
    INC EDX                             ; 0049d61f
    SHL EAX,0x2                         ; 0049d620
    MOV dword ptr [0x01c950d8],EDX      ; 0049d623 | DAT_01c950d8
    ADD EBX,EAX                         ; 0049d629
    CMP EDX,0x40                        ; 0049d62b
    JGE 0x0049d64f                      ; 0049d62e
        ;   XREF to: 0049d64f (CONDITIONAL_JUMP)  ; LAB_0049d64f
    TEST ECX,ECX                        ; 0049d630
        ;   Label: LAB_0049d630
    JZ 0x0049d65b                       ; 0049d632
        ;   XREF to: 0049d65b (CONDITIONAL_JUMP)  ; LAB_0049d65b
    PUSH dword ptr [ESP + 0x1c]         ; 0049d634
        ;   Label: LAB_0049d634
    PUSH ECX                            ; 0049d638
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0049d639
    PUSH EBP                            ; 0049d63d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049d63e
    PUSH EAX                            ; 0049d642
    PUSH EBX                            ; 0049d643
    CALL FUN_00496750                   ; 0049d644
        ;   XREF to: 00496750 (UNCONDITIONAL_CALL)  ; undefined FUN_00496750()
    ADD ESP,0x14                        ; 0049d649
    POP EBP                             ; 0049d64c
    POP EBX                             ; 0049d64d
    RET                                 ; 0049d64e
    PUSH EDI                            ; 0049d64f
        ;   Label: LAB_0049d64f
    XOR EDI,EDI                         ; 0049d650
    MOV dword ptr [0x01c950d8],EDI      ; 0049d652 | DAT_01c950d8
    POP EDI                             ; 0049d658
    JMP 0x0049d630                      ; 0049d659
        ;   XREF to: 0049d630 (UNCONDITIONAL_JUMP)  ; LAB_0049d630
    CALL FUN_005b849c                   ; 0049d65b
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; undefined FUN_005b849c()
        ;   Label: LAB_0049d65b
    MOV EDX,EAX                         ; 0049d660
    MOV ECX,0x4                         ; 0049d662
    SAR EDX,0x1f                        ; 0049d667
    IDIV ECX                            ; 0049d66a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049d66c
    ADD EAX,EDX                         ; 0049d673
    SHL EAX,0x2                         ; 0049d675
    SUB EAX,EDX                         ; 0049d678
    SHL EAX,0x2                         ; 0049d67a
    MOV EDX,EAX                         ; 0049d67d
    SHL EAX,0x2                         ; 0049d67f
    ADD EAX,EDX                         ; 0049d682
    ADD EAX,0x1c3e4e8                   ; 0049d684
    PUSH EAX                            ; 0049d689
    CALL FUN_0044fd20                   ; 0049d68a
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 0049d68f
    MOV ECX,EAX                         ; 0049d692
    JMP 0x0049d634                      ; 0049d694
        ;   XREF to: 0049d634 (UNCONDITIONAL_JUMP)  ; LAB_0049d634

