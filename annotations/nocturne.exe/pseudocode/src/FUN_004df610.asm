; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df610(undefined4 param_1,int param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004e01b0 at 004e01e0
;   FUN_004e02c0 at 004e02e7
;
; Called Functions:
;   FUN_00453080
;   FUN_004df2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df610
        ;   Label: FUN_004df610
    PUSH EBP                            ; 004df611
    MOV EBP,ESP                         ; 004df612
    MOV EBX,dword ptr [EBP + 0x10]      ; 004df614
    MOV EAX,dword ptr [EBX + 0x118]     ; 004df617
    PUSH EAX                            ; 004df61d
    LEA EAX,[EBX + 0x124]               ; 004df61e
    PUSH EAX                            ; 004df624
    PUSH 0x48                           ; 004df625
    MOV EAX,dword ptr [EBX + 0x114]     ; 004df627
    PUSH EAX                            ; 004df62d
    MOV EAX,dword ptr [EBX + 0x110]     ; 004df62e
    PUSH EAX                            ; 004df634
    MOV EDX,dword ptr [EBP + 0x14]      ; 004df635
    PUSH EDX                            ; 004df638
    PUSH EBX                            ; 004df639
    CALL FUN_00453080                   ; 004df63a
        ;   XREF to: 00453080 (UNCONDITIONAL_CALL)  ; undefined FUN_00453080()
    ADD ESP,0x8                         ; 004df63f
    PUSH EAX                            ; 004df642
    MOV EAX,dword ptr [EBX + 0x104]     ; 004df643
    PUSH EAX                            ; 004df649
    MOV ECX,dword ptr [EBP + 0xc]       ; 004df64a
    PUSH ECX                            ; 004df64d
    CALL FUN_004df2f0                   ; 004df64e
        ;   XREF to: 004df2f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004df2f0()
    ADD ESP,0x20                        ; 004df653
    POP EBP                             ; 004df656
    POP EBX                             ; 004df657
    RET                                 ; 004df658

