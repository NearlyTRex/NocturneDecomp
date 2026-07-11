; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046f2a0(int param_1)
;
;
; XREF[2]:
;   FUN_0046f7e0 at 0046f934
;   FUN_00470eb0 at 00471346
;
; Called Functions:
;   FUN_0046f130
;   FUN_0046f1e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f2a0
        ;   Label: FUN_0046f2a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046f2a1
    MOV EDX,dword ptr [EBX + 0x134]     ; 0046f2a5
    TEST EDX,EDX                        ; 0046f2ab
    JG 0x0046f2ba                       ; 0046f2ad
        ;   XREF to: 0046f2ba (CONDITIONAL_JUMP)  ; LAB_0046f2ba
    PUSH EBX                            ; 0046f2af
    CALL FUN_0046f130                   ; 0046f2b0
        ;   XREF to: 0046f130 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f130()
    ADD ESP,0x4                         ; 0046f2b5
    POP EBX                             ; 0046f2b8
    RET                                 ; 0046f2b9
    MOV EAX,EDX                         ; 0046f2ba
        ;   Label: LAB_0046f2ba
    PUSH EAX                            ; 0046f2bc
    DEC EDX                             ; 0046f2bd
    PUSH EDX                            ; 0046f2be
    PUSH EBX                            ; 0046f2bf
    MOV dword ptr [EBX + 0x134],EDX     ; 0046f2c0
    CALL FUN_0046f1e0                   ; 0046f2c6
        ;   XREF to: 0046f1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f1e0()
    ADD ESP,0xc                         ; 0046f2cb
    PUSH EBX                            ; 0046f2ce
    CALL FUN_0046f130                   ; 0046f2cf
        ;   XREF to: 0046f130 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f130()
    ADD ESP,0x4                         ; 0046f2d4
    POP EBX                             ; 0046f2d7
    RET                                 ; 0046f2d8

