; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00552d00(void)
;
;
; XREF[4]:
;   FUN_00552d60 at 00552d67
;   FUN_00552dc0 at 00552dc8
;   FUN_00552e40 at 00552e58
;   FUN_00553680 at 00553702
;
; Referenced Globals:
;   undefined4 DAT_0061bca8
;   undefined4 DAT_0061bcc8
;
; Called Functions:
;   FUN_00551440
;   FUN_005532f0
;   FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00552d00
        ;   Label: FUN_00552d00
    MOV ESI,dword ptr [0x0061bcc8]      ; 00552d01 | DAT_0061bcc8
    TEST ESI,ESI                        ; 00552d07
    JL 0x00552d15                       ; 00552d09
        ;   XREF to: 00552d15 (CONDITIONAL_JUMP)  ; LAB_00552d15
    MOV EAX,ESI                         ; 00552d0b
    MOV dword ptr [0x0061bcc8],ESI      ; 00552d0d | DAT_0061bcc8
    POP ESI                             ; 00552d13
    RET                                 ; 00552d14
    PUSH EBX                            ; 00552d15
        ;   Label: LAB_00552d15
    CALL FUN_005532f0                   ; 00552d16
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005532f0()
    CALL FUN_00551440                   ; 00552d1b
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    XOR ESI,ESI                         ; 00552d20
    XOR EBX,EBX                         ; 00552d22
    IMUL EAX,ESI,0x108                  ; 00552d24
        ;   Label: LAB_00552d24
    ADD EAX,0x2649028                   ; 00552d2a
    PUSH EAX                            ; 00552d2f
    PUSH EBX                            ; 00552d30
    MOV dword ptr [0x0061bcc8],ESI      ; 00552d31 | DAT_0061bcc8
    CALL FUN_00558a30                   ; 00552d37
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00558a30()
    MOV ESI,dword ptr [0x0061bcc8]      ; 00552d3c | DAT_0061bcc8
    ADD ESP,0x8                         ; 00552d42
    TEST EAX,EAX                        ; 00552d45
    JZ 0x00552d50                       ; 00552d47
        ;   XREF to: 00552d50 (CONDITIONAL_JUMP)  ; LAB_00552d50
    INC ESI                             ; 00552d49
    INC EBX                             ; 00552d4a
    CMP ESI,0x8                         ; 00552d4b
    JL 0x00552d24                       ; 00552d4e
        ;   XREF to: 00552d24 (CONDITIONAL_JUMP)  ; LAB_00552d24
    MOV EAX,[0x0061bca8]                ; 00552d50 | DAT_0061bca8
        ;   Label: LAB_00552d50
    POP EBX                             ; 00552d55
    MOV dword ptr [0x0061bcc8],ESI      ; 00552d56 | DAT_0061bcc8
    POP ESI                             ; 00552d5c
    RET                                 ; 00552d5d

