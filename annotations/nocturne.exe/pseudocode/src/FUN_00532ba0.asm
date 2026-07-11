; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532ba0(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_00553910 at 005539d2
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9d7c
;   undefined4 DAT_02dc9e24
;
; Called Functions:
;   FUN_005322e0
;   FUN_00532320
;   FUN_00553470
;   FUN_00553520
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00532ba0
        ;   Label: FUN_00532ba0
    SUB ESP,0x4                         ; 00532ba1
    CMP dword ptr [0x01c02594],0x0      ; 00532ba4 | DAT_01c02594
    JZ 0x00532c60                       ; 00532bab
        ;   XREF to: 00532c60 (CONDITIONAL_JUMP)  ; LAB_00532c60
    PUSH EDI                            ; 00532bb1
    CMP dword ptr [0x02dc9e24],0x0      ; 00532bb2 | DAT_02dc9e24
    JNZ 0x00532c4c                      ; 00532bb9
        ;   XREF to: 00532c4c (CONDITIONAL_JUMP)  ; LAB_00532c4c
    PUSH ESI                            ; 00532bbf
    PUSH EBX                            ; 00532bc0
    MOV EDX,dword ptr [0x005b761c]      ; 00532bc1 | DAT_005b761c
    MOV ESI,dword ptr [0x005b7624]      ; 00532bc7 | DAT_005b7624
    IMUL EDX,ESI                        ; 00532bcd
    MOV EAX,EDX                         ; 00532bd0
    SAR EDX,0x1f                        ; 00532bd2
    SHL EDX,0x3                         ; 00532bd5
    SBB EAX,EDX                         ; 00532bd8
    SAR EAX,0x3                         ; 00532bda
    MOV EBX,dword ptr [0x01bd2fa0]      ; 00532bdd | DAT_01bd2fa0
    XOR EDI,EDI                         ; 00532be3
    MOV EBP,EAX                         ; 00532be5
    CALL FUN_00553470                   ; 00532be7
        ;   XREF to: 00553470 (UNCONDITIONAL_CALL)  ; undefined FUN_00553470()
    CALL FUN_005322e0                   ; 00532bec
        ;   XREF to: 005322e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005322e0()
    MOV EAX,[0x005b7620]                ; 00532bf1 | DAT_005b7620
    MOV dword ptr [ESP + 0xc],EDI       ; 00532bf6
    TEST EAX,EAX                        ; 00532bfa
    JLE 0x00532c40                      ; 00532bfc
        ;   XREF to: 00532c40 (CONDITIONAL_JUMP)  ; LAB_00532c40
    XOR EDX,EDX                         ; 00532bfe
    MOV ECX,EBP                         ; 00532c00
        ;   Label: LAB_00532c00
    MOV ESI,EBX                         ; 00532c02
    MOV EDI,dword ptr [EDX + 0x1bd2fa0] ; 00532c04 | DAT_01bd2fa0 | DAT_01bd2fa4
    PUSH EDI                            ; 00532c0a
    MOV EAX,ECX                         ; 00532c0b
    SHR ECX,0x2                         ; 00532c0d
    MOVSD.REP ES:EDI,ESI                ; 00532c10
    MOV CL,AL                           ; 00532c12
    AND CL,0x3                          ; 00532c14
    MOVSB.REP ES:EDI,ESI                ; 00532c17
    POP EDI                             ; 00532c19
    ADD EDX,0x4                         ; 00532c1a
    MOV ECX,dword ptr [ESP + 0xc]       ; 00532c1d
    MOV ESI,dword ptr [0x005b7620]      ; 00532c21 | DAT_005b7620
    INC ECX                             ; 00532c27
    ADD EBX,EBP                         ; 00532c28
    MOV dword ptr [ESP + 0xc],ECX       ; 00532c2a
    CMP ECX,ESI                         ; 00532c2e
    JL 0x00532c00                       ; 00532c30
        ;   XREF to: 00532c00 (CONDITIONAL_JUMP)  ; LAB_00532c00
    LEA EAX,[EAX]                       ; 00532c32
    LEA EDX,[EDX]                       ; 00532c38
    MOV EAX,EAX                         ; 00532c3e
    CALL FUN_00532320                   ; 00532c40
        ;   XREF to: 00532320 (UNCONDITIONAL_CALL)  ; undefined FUN_00532320()
        ;   Label: LAB_00532c40
    CALL FUN_00553520                   ; 00532c45
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; undefined FUN_00553520()
    POP EBX                             ; 00532c4a
    POP ESI                             ; 00532c4b
    XOR EDI,EDI                         ; 00532c4c
        ;   Label: LAB_00532c4c
    MOV dword ptr [0x02dc9e24],EDI      ; 00532c4e | DAT_02dc9e24
    CALL dword ptr [0x02dc9d7c]         ; 00532c54 | DAT_02dc9d7c
    POP EDI                             ; 00532c5a
    ADD ESP,0x4                         ; 00532c5b
    POP EBP                             ; 00532c5e
    RET                                 ; 00532c5f
    XOR EAX,EAX                         ; 00532c60
        ;   Label: LAB_00532c60
    ADD ESP,0x4                         ; 00532c62
    POP EBP                             ; 00532c65
    RET                                 ; 00532c66

