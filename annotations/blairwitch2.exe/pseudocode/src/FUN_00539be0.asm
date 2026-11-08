; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00539be0(void)
;
;
; XREF[2]:
;   FUN_0052c090 at 0052c0d5
;   FUN_005398d0 at 005398e1
;
; Called Functions:
;   FUN_005386a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539be0
        ;   Label: FUN_00539be0
    PUSH ESI                            ; 00539be1
    PUSH EDI                            ; 00539be2
    PUSH EBP                            ; 00539be3
    MOV EBP,0x2093d34                   ; 00539be4
    XOR EDI,EDI                         ; 00539be9
    ADD EBP,0xf0                        ; 00539beb
    IMUL EBX,EDI,0xf0                   ; 00539bf1
        ;   Label: LAB_00539bf1
    MOV ESI,EBP                         ; 00539bf7
    ADD EBX,0x2093d34                   ; 00539bf9
    PUSH EBX                            ; 00539bff
        ;   Label: LAB_00539bff
    CALL FUN_005386a0                   ; 00539c00
        ;   XREF to: 005386a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005386a0()
    ADD EBX,0x28                        ; 00539c05
    ADD ESP,0x4                         ; 00539c08
    CMP EBX,ESI                         ; 00539c0b
    JNZ 0x00539bff                      ; 00539c0d
        ;   XREF to: 00539bff (CONDITIONAL_JUMP)  ; LAB_00539bff
    INC EDI                             ; 00539c0f
    ADD EBP,0xf0                        ; 00539c10
    CMP EDI,0xfa                        ; 00539c16
    JL 0x00539bf1                       ; 00539c1c
        ;   XREF to: 00539bf1 (CONDITIONAL_JUMP)  ; LAB_00539bf1
    POP EBP                             ; 00539c1e
    POP EDI                             ; 00539c1f
    POP ESI                             ; 00539c20
    POP EBX                             ; 00539c21
    RET                                 ; 00539c22

