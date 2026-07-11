; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00564a88(undefined4 *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00564a70 at 00564a7b
;
; Called Functions:
;   FUN_005635c0
;   FUN_005638e0
;   FUN_0056afc0
;   FUN_0056b1a4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564a88
        ;   Label: FUN_00564a88
    PUSH ESI                            ; 00564a89
    PUSH EDI                            ; 00564a8a
    PUSH EBP                            ; 00564a8b
    MOV EBX,dword ptr [ESP + 0x14]      ; 00564a8c
    MOV EDI,dword ptr [ESP + 0x18]      ; 00564a90
    TEST EBX,EBX                        ; 00564a94
    JNZ 0x00564aa6                      ; 00564a96
        ;   XREF to: 00564aa6 (CONDITIONAL_JUMP)  ; LAB_00564aa6
    PUSH EDI                            ; 00564a98
    CALL FUN_005635c0                   ; 00564a99
        ;   XREF to: 005635c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635c0()
    ADD ESP,0x4                         ; 00564a9e
    POP EBP                             ; 00564aa1
    POP EDI                             ; 00564aa2
    POP ESI                             ; 00564aa3
    POP EBX                             ; 00564aa4
    RET                                 ; 00564aa5
    TEST EDI,EDI                        ; 00564aa6
        ;   Label: LAB_00564aa6
    JNZ 0x00564aba                      ; 00564aa8
        ;   XREF to: 00564aba (CONDITIONAL_JUMP)  ; LAB_00564aba
    PUSH EBX                            ; 00564aaa
    CALL FUN_005638e0                   ; 00564aab
        ;   XREF to: 005638e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638e0()
    ADD ESP,0x4                         ; 00564ab0
    XOR EAX,EAX                         ; 00564ab3
    POP EBP                             ; 00564ab5
    POP EDI                             ; 00564ab6
    POP ESI                             ; 00564ab7
    POP EBX                             ; 00564ab8
    RET                                 ; 00564ab9
    PUSH EBX                            ; 00564aba
        ;   Label: LAB_00564aba
    CALL FUN_0056afc0                   ; 00564abb
        ;   XREF to: 0056afc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056afc0()
    ADD ESP,0x4                         ; 00564ac0
    PUSH EDI                            ; 00564ac3
    PUSH EBX                            ; 00564ac4
    MOV ESI,EAX                         ; 00564ac5
    CALL FUN_0056b1a4                   ; 00564ac7
        ;   XREF to: 0056b1a4 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b1a4()
    ADD ESP,0x8                         ; 00564acc
    MOV EBP,EAX                         ; 00564acf
    TEST EAX,EAX                        ; 00564ad1
    JNZ 0x00564b15                      ; 00564ad3
        ;   XREF to: 00564b15 (CONDITIONAL_JUMP)  ; LAB_00564b15
    PUSH EDI                            ; 00564ad5
    CALL FUN_005635c0                   ; 00564ad6
        ;   XREF to: 005635c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635c0()
    ADD ESP,0x4                         ; 00564adb
    MOV EBP,EAX                         ; 00564ade
    TEST EAX,EAX                        ; 00564ae0
    JZ 0x00564b0b                       ; 00564ae2
        ;   XREF to: 00564b0b (CONDITIONAL_JUMP)  ; LAB_00564b0b
    MOV ECX,ESI                         ; 00564ae4
    MOV EDI,EAX                         ; 00564ae6
    MOV ESI,EBX                         ; 00564ae8
    PUSH ES                             ; 00564aea
    MOV AX,DS                           ; 00564aeb
    MOV ES,AX                           ; 00564aed
    PUSH EDI                            ; 00564aef
    MOV EAX,ECX                         ; 00564af0
    SHR ECX,0x2                         ; 00564af2
    MOVSD.REP ES:EDI,ESI                ; 00564af5
    MOV CL,AL                           ; 00564af7
    AND CL,0x3                          ; 00564af9
    MOVSB.REP ES:EDI,ESI                ; 00564afc
    POP EDI                             ; 00564afe
    POP ES                              ; 00564aff
    PUSH EBX                            ; 00564b00
    CALL FUN_005638e0                   ; 00564b01
        ;   XREF to: 005638e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638e0()
    ADD ESP,0x4                         ; 00564b06
    JMP 0x00564b15                      ; 00564b09
        ;   XREF to: 00564b15 (UNCONDITIONAL_JUMP)  ; LAB_00564b15
    PUSH ESI                            ; 00564b0b
        ;   Label: LAB_00564b0b
    PUSH EBX                            ; 00564b0c
    CALL FUN_0056b1a4                   ; 00564b0d
        ;   XREF to: 0056b1a4 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b1a4()
    ADD ESP,0x8                         ; 00564b12
    MOV EAX,EBP                         ; 00564b15
        ;   Label: LAB_00564b15
    POP EBP                             ; 00564b17
    POP EDI                             ; 00564b18
    POP ESI                             ; 00564b19
    POP EBX                             ; 00564b1a
    RET                                 ; 00564b1b

