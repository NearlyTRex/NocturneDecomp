; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050e580(int *param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004ff2c0 at 0050184e
;
; Called Functions:
;   FUN_0050e550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e580
        ;   Label: FUN_0050e580
    PUSH ESI                            ; 0050e581
    PUSH EDI                            ; 0050e582
    PUSH EBP                            ; 0050e583
    MOV EDI,dword ptr [ESP + 0x14]      ; 0050e584
    MOV EBP,dword ptr [ESP + 0x18]      ; 0050e588
    MOV EDX,dword ptr [EDI]             ; 0050e58c
    XOR EBX,EBX                         ; 0050e58e
    TEST EDX,EDX                        ; 0050e590
    JLE 0x0050e5ab                      ; 0050e592
        ;   XREF to: 0050e5ab (CONDITIONAL_JUMP)  ; LAB_0050e5ab
    MOV ESI,EDI                         ; 0050e594
    CMP EBP,dword ptr [ESI + 0x14c]     ; 0050e596
        ;   Label: LAB_0050e596
    JZ 0x0050e5b0                       ; 0050e59c
        ;   XREF to: 0050e5b0 (CONDITIONAL_JUMP)  ; LAB_0050e5b0
    INC EBX                             ; 0050e59e
        ;   Label: LAB_0050e59e
    MOV ECX,dword ptr [EDI]             ; 0050e59f
    ADD ESI,0x1a0                       ; 0050e5a1
    CMP EBX,ECX                         ; 0050e5a7
    JL 0x0050e596                       ; 0050e5a9
        ;   XREF to: 0050e596 (CONDITIONAL_JUMP)  ; LAB_0050e596
    POP EBP                             ; 0050e5ab
        ;   Label: LAB_0050e5ab
    POP EDI                             ; 0050e5ac
    POP ESI                             ; 0050e5ad
    POP EBX                             ; 0050e5ae
    RET                                 ; 0050e5af
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050e5b0
        ;   Label: LAB_0050e5b0
    PUSH EDX                            ; 0050e5b4
    PUSH EBX                            ; 0050e5b5
    PUSH EDI                            ; 0050e5b6
    CALL FUN_0050e550                   ; 0050e5b7
        ;   XREF to: 0050e550 (UNCONDITIONAL_CALL)  ; undefined FUN_0050e550()
    ADD ESP,0xc                         ; 0050e5bc
    JMP 0x0050e59e                      ; 0050e5bf
        ;   XREF to: 0050e59e (UNCONDITIONAL_JUMP)  ; LAB_0050e59e

