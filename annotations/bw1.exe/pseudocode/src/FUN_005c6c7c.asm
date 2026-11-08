; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_005c6c7c(void)
;
;
; XREF[1]:
;   FUN_005c0d8c at 005c0da2
;
; Referenced Globals:
;   undefined1 DAT_005fab90
;   undefined1 DAT_005fab94
;   void* PTR_DAT_00626650 = 005fab90
;   void* PTR_DAT_00626654 = 005fab94
;   undefined1 DAT_00626663
;   undefined1 DAT_00626664
;   undefined1 DAT_00626665
;   undefined1 DAT_00626666
;   undefined1 DAT_00626667
;
; Called Functions:
;   FUN_005c2500
;   FUN_005c3050
;   FUN_005c91d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6c7c
        ;   Label: FUN_005c6c7c
    PUSH ESI                            ; 005c6c7d
    PUSH EDI                            ; 005c6c7e
    CMP byte ptr [0x00626664],0x0       ; 005c6c7f | DAT_00626664
    JNZ 0x005c6d41                      ; 005c6c86
        ;   XREF to: 005c6d41 (CONDITIONAL_JUMP)  ; LAB_005c6d41
    MOV EBX,0x626650                    ; 005c6c8c | PTR_DAT_00626650
    JMP 0x005c6cd4                      ; 005c6c91
        ;   XREF to: 005c6cd4 (UNCONDITIONAL_JUMP)  ; LAB_005c6cd4
    PUSH EDX                            ; 005c6c93 | DAT_005fab90
        ;   Label: LAB_005c6c93
    CALL FUN_005c3050                   ; 005c6c94
        ;   XREF to: 005c3050 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3050()
    MOV EDX,EAX                         ; 005c6c99
    ADD ESP,0x4                         ; 005c6c9b
    TEST EAX,EAX                        ; 005c6c9e
    JZ 0x005c6cd1                       ; 005c6ca0
        ;   XREF to: 005c6cd1 (CONDITIONAL_JUMP)  ; LAB_005c6cd1
    MOV EDI,EAX                         ; 005c6ca2
    PUSH ES                             ; 005c6ca4
    MOV AX,DS                           ; 005c6ca5
    MOV ES,AX                           ; 005c6ca7
    SUB ECX,ECX                         ; 005c6ca9
    DEC ECX                             ; 005c6cab
    XOR EAX,EAX                         ; 005c6cac
    SCASB.REPNE ES:EDI                  ; 005c6cae
    NOT ECX                             ; 005c6cb0
    DEC ECX                             ; 005c6cb2
    POP ES                              ; 005c6cb3
    CMP ECX,0x103                       ; 005c6cb4
    JA 0x005c6cd1                       ; 005c6cba
        ;   XREF to: 005c6cd1 (CONDITIONAL_JUMP)  ; LAB_005c6cd1
    PUSH 0x103                          ; 005c6cbc
    PUSH EDX                            ; 005c6cc1
    PUSH 0x626664                       ; 005c6cc2 | DAT_00626664
    CALL FUN_005c2500                   ; 005c6cc7
        ;   XREF to: 005c2500 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2500()
    ADD ESP,0xc                         ; 005c6ccc
    JMP 0x005c6cdb                      ; 005c6ccf
        ;   XREF to: 005c6cdb (UNCONDITIONAL_JUMP)  ; LAB_005c6cdb
    ADD EBX,0x4                         ; 005c6cd1
        ;   Label: LAB_005c6cd1
    MOV EDX,dword ptr [EBX]             ; 005c6cd4 | PTR_DAT_00626650 | PTR_DAT_00626654
        ;   Label: LAB_005c6cd4
    CMP byte ptr [EDX],0x0              ; 005c6cd6 | DAT_005fab90 | DAT_005fab94
    JNZ 0x005c6c93                      ; 005c6cd9
        ;   XREF to: 005c6c93 (CONDITIONAL_JUMP)  ; LAB_005c6c93
    CMP byte ptr [0x00626664],0x0       ; 005c6cdb | DAT_00626664
        ;   Label: LAB_005c6cdb
    JNZ 0x005c6d11                      ; 005c6ce2
        ;   XREF to: 005c6d11 (CONDITIONAL_JUMP)  ; LAB_005c6d11
    PUSH 0x0                            ; 005c6ce4
    PUSH 0x0                            ; 005c6ce6
    CALL FUN_005c91d0                   ; 005c6ce8
        ;   XREF to: 005c91d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c91d0()
    ADD ESP,0x8                         ; 005c6ced
    MOV EDI,0x626664                    ; 005c6cf0 | DAT_00626664
    MOV ESI,EAX                         ; 005c6cf5
    PUSH EDI                            ; 005c6cf7 | DAT_00626664
    MOV AL,byte ptr [ESI]               ; 005c6cf8
        ;   Label: LAB_005c6cf8
    MOV byte ptr [EDI],AL               ; 005c6cfa | DAT_00626664 | DAT_00626666
    CMP AL,0x0                          ; 005c6cfc
    JZ 0x005c6d10                       ; 005c6cfe
        ;   XREF to: 005c6d10 (CONDITIONAL_JUMP)  ; LAB_005c6d10
    MOV AL,byte ptr [ESI + 0x1]         ; 005c6d00
    ADD ESI,0x2                         ; 005c6d03
    MOV byte ptr [EDI + 0x1],AL         ; 005c6d06 | DAT_00626665 | DAT_00626667
    ADD EDI,0x2                         ; 005c6d09
    CMP AL,0x0                          ; 005c6d0c
    JNZ 0x005c6cf8                      ; 005c6d0e
        ;   XREF to: 005c6cf8 (CONDITIONAL_JUMP)  ; LAB_005c6cf8
    POP EDI                             ; 005c6d10
        ;   Label: LAB_005c6d10
    MOV EDI,0x626664                    ; 005c6d11 | DAT_00626664
        ;   Label: LAB_005c6d11
    PUSH ES                             ; 005c6d16
    MOV AX,DS                           ; 005c6d17
    MOV ES,AX                           ; 005c6d19
    SUB ECX,ECX                         ; 005c6d1b
    DEC ECX                             ; 005c6d1d
    XOR EAX,EAX                         ; 005c6d1e
    SCASB.REPNE ES:EDI                  ; 005c6d20 | DAT_00626664 | DAT_00626665
    NOT ECX                             ; 005c6d22
    DEC ECX                             ; 005c6d24
    POP ES                              ; 005c6d25
    LEA EDX,[ECX + -0x1]                ; 005c6d26
    ADD EDX,0x626664                    ; 005c6d29 | DAT_00626664
    MOV AL,byte ptr [EDX]               ; 005c6d2f | DAT_00626663 | DAT_00626664
    CMP AL,0x5c                         ; 005c6d31
    JZ 0x005c6d41                       ; 005c6d33
        ;   XREF to: 005c6d41 (CONDITIONAL_JUMP)  ; LAB_005c6d41
    CMP AL,0x2f                         ; 005c6d35
    JZ 0x005c6d41                       ; 005c6d37
        ;   XREF to: 005c6d41 (CONDITIONAL_JUMP)  ; LAB_005c6d41
    INC EDX                             ; 005c6d39
    MOV byte ptr [EDX],0x5c             ; 005c6d3a | DAT_00626664 | DAT_00626665
    INC EDX                             ; 005c6d3d
    MOV byte ptr [EDX],0x0              ; 005c6d3e | DAT_00626665 | DAT_00626666
    MOV EAX,0x626664                    ; 005c6d41 | DAT_00626664
        ;   Label: LAB_005c6d41
    POP EDI                             ; 005c6d46
    POP ESI                             ; 005c6d47
    POP EBX                             ; 005c6d48
    RET                                 ; 005c6d49

