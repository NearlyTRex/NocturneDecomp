; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c0d60(byte *param_1,int param_2)
;
;
; XREF[2]:
;   FUN_005b9e10 at 005b9e49
;   FUN_005c0d30 at 005c0d40
;
; Referenced Globals:
;   undefined4 DAT_026807f0
;
; Called Functions:
;   FUN_005c0e00
;   FUN_005c0e50
;   FUN_005c4260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0d60
        ;   Label: FUN_005c0d60
    PUSH ESI                            ; 005c0d61
    PUSH EDI                            ; 005c0d62
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c0d63
    MOV EDI,dword ptr [ESP + 0x14]      ; 005c0d67
    XOR ESI,ESI                         ; 005c0d6b
    PUSH EBX                            ; 005c0d6d
        ;   Label: LAB_005c0d6d
    CALL FUN_005c4260                   ; 005c0d6e
        ;   XREF to: 005c4260 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4260()
    ADD ESP,0x4                         ; 005c0d73
    TEST EAX,EAX                        ; 005c0d76
    JNZ 0x005c0dba                      ; 005c0d78
        ;   XREF to: 005c0dba (CONDITIONAL_JUMP)  ; LAB_005c0dba
    TEST EDI,EDI                        ; 005c0d7a
    JBE 0x005c0dba                      ; 005c0d7c
        ;   XREF to: 005c0dba (CONDITIONAL_JUMP)  ; LAB_005c0dba
    CMP dword ptr [0x026807f0],0x0      ; 005c0d7e | DAT_026807f0
    JZ 0x005c0dab                       ; 005c0d85
        ;   XREF to: 005c0dab (CONDITIONAL_JUMP)  ; LAB_005c0dab
    MOV AL,byte ptr [EBX]               ; 005c0d87
    MOV AL,byte ptr [EAX + 0x2680801]   ; 005c0d89
    AND AL,0x1                          ; 005c0d8f
    AND EAX,0xff                        ; 005c0d91
    JZ 0x005c0dab                       ; 005c0d96
        ;   XREF to: 005c0dab (CONDITIONAL_JUMP)  ; LAB_005c0dab
    CMP byte ptr [EBX + 0x1],0x0        ; 005c0d98
    JZ 0x005c0dba                       ; 005c0d9c
        ;   XREF to: 005c0dba (CONDITIONAL_JUMP)  ; LAB_005c0dba
    PUSH EBX                            ; 005c0d9e
    CALL FUN_005c0e50                   ; 005c0d9f
        ;   XREF to: 005c0e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0e50()
    ADD ESP,0x4                         ; 005c0da4
    ADD ESI,EAX                         ; 005c0da7
    JMP 0x005c0dac                      ; 005c0da9
        ;   XREF to: 005c0dac (UNCONDITIONAL_JUMP)  ; LAB_005c0dac
    INC ESI                             ; 005c0dab
        ;   Label: LAB_005c0dab
    PUSH EBX                            ; 005c0dac
        ;   Label: LAB_005c0dac
    CALL FUN_005c0e00                   ; 005c0dad
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0e00()
    DEC EDI                             ; 005c0db2
    MOV EBX,EAX                         ; 005c0db3
    ADD ESP,0x4                         ; 005c0db5
    JMP 0x005c0d6d                      ; 005c0db8
        ;   XREF to: 005c0d6d (UNCONDITIONAL_JUMP)  ; LAB_005c0d6d
    MOV EAX,ESI                         ; 005c0dba
        ;   Label: LAB_005c0dba
    POP EDI                             ; 005c0dbc
    POP ESI                             ; 005c0dbd
    POP EBX                             ; 005c0dbe
    RET                                 ; 005c0dbf

