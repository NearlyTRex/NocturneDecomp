; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e550(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_0054e3a0 at 0054e412
;
; Called Functions:
;   FUN_00548c10
;   FUN_0054e420
;   FUN_0054ea40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e550
        ;   Label: FUN_0054e550
    PUSH ESI                            ; 0054e551
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054e552
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054e556
    CMP EAX,dword ptr [EBX + 0x2320]    ; 0054e55a
    JNZ 0x0054e585                      ; 0054e560
        ;   XREF to: 0054e585 (CONDITIONAL_JUMP)  ; LAB_0054e585
    MOV ECX,dword ptr [EBX + 0x2324]    ; 0054e562
        ;   Label: LAB_0054e562
    PUSH ECX                            ; 0054e568
    MOV ESI,dword ptr [EBX + 0x2320]    ; 0054e569
    PUSH ESI                            ; 0054e56f
    PUSH EBX                            ; 0054e570
    CALL FUN_0054ea40                   ; 0054e571
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    ADD ESP,0x4                         ; 0054e576
    PUSH EAX                            ; 0054e579
    CALL FUN_00548c10                   ; 0054e57a
        ;   XREF to: 00548c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00548c10()
    ADD ESP,0xc                         ; 0054e57f
    POP ESI                             ; 0054e582
    POP EBX                             ; 0054e583
    RET                                 ; 0054e584
    PUSH EAX                            ; 0054e585
        ;   Label: LAB_0054e585
    PUSH EBX                            ; 0054e586
    CALL FUN_0054e420                   ; 0054e587
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e420()
    ADD ESP,0x8                         ; 0054e58c
    JMP 0x0054e562                      ; 0054e58f
        ;   XREF to: 0054e562 (UNCONDITIONAL_JUMP)  ; LAB_0054e562

