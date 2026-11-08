; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c44f0(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005ca0c0 at 005ca22e
;
; Called Functions:
;   FUN_005c445c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c44f0
        ;   Label: FUN_005c44f0
    MOV EBP,ESP                         ; 005c44f1
    PUSH EBX                            ; 005c44f3
    PUSH ESI                            ; 005c44f4
    MOV EBX,dword ptr [EBP + 0xc]       ; 005c44f5
    CMP EBX,0x1000                      ; 005c44f8
    JLE 0x005c4511                      ; 005c44fe
        ;   XREF to: 005c4511 (CONDITIONAL_JUMP)  ; LAB_005c4511
    PUSH 0x1000                         ; 005c4500
    MOV ECX,dword ptr [EBP + 0x8]       ; 005c4505
    PUSH ECX                            ; 005c4508
    SUB EBX,0x1000                      ; 005c4509
    JMP 0x005c4528                      ; 005c450f
        ;   XREF to: 005c4528 (UNCONDITIONAL_JUMP)  ; LAB_005c4528
    CMP EBX,0xfffff000                  ; 005c4511
        ;   Label: LAB_005c4511
    JGE 0x005c4530                      ; 005c4517
        ;   XREF to: 005c4530 (CONDITIONAL_JUMP)  ; LAB_005c4530
    PUSH 0xfffff000                     ; 005c4519
    MOV EDX,dword ptr [EBP + 0x8]       ; 005c451e
    PUSH EDX                            ; 005c4521
    ADD EBX,0x1000                      ; 005c4522
    CALL FUN_005c445c                   ; 005c4528
        ;   XREF to: 005c445c (UNCONDITIONAL_CALL)  ; undefined FUN_005c445c()
        ;   Label: LAB_005c4528
    ADD ESP,0x8                         ; 005c452d
    PUSH EBX                            ; 005c4530
        ;   Label: LAB_005c4530
    MOV ESI,dword ptr [EBP + 0x8]       ; 005c4531
    PUSH ESI                            ; 005c4534
    CALL FUN_005c445c                   ; 005c4535
        ;   XREF to: 005c445c (UNCONDITIONAL_CALL)  ; undefined FUN_005c445c()
    ADD ESP,0x8                         ; 005c453a
    POP ESI                             ; 005c453d
    POP EBX                             ; 005c453e
    POP EBP                             ; 005c453f
    RET                                 ; 005c4540

