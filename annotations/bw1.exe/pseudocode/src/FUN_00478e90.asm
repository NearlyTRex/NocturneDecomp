; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00478e90(undefined4 param_1)
;
;
; XREF[4]:
;   FUN_00478fb0 at 00478fd6
;   FUN_00479180 at 004791f7
;   FUN_005967a0 at 00596836
;   FUN_005a0fd0 at 005a100e
;
; Referenced Globals:
;   undefined4 DAT_01b6892c
;
; Called Functions:
;   FUN_00478ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478e90
        ;   Label: FUN_00478e90
    PUSH ESI                            ; 00478e91
    PUSH EDI                            ; 00478e92
    PUSH EBP                            ; 00478e93
    MOV EDI,dword ptr [ESP + 0x14]      ; 00478e94
    MOV EDX,dword ptr [0x01b6892c]      ; 00478e98 | DAT_01b6892c
    CMP EDX,0x1                         ; 00478e9e
    JL 0x00478ed0                       ; 00478ea1
        ;   XREF to: 00478ed0 (CONDITIONAL_JUMP)  ; LAB_00478ed0
    XOR ESI,ESI                         ; 00478ea3
    TEST EDX,EDX                        ; 00478ea5
    JLE 0x00478ec9                      ; 00478ea7
        ;   XREF to: 00478ec9 (CONDITIONAL_JUMP)  ; LAB_00478ec9
    XOR EBX,EBX                         ; 00478ea9
    MOV EAX,EBX                         ; 00478eab
        ;   Label: LAB_00478eab
    PUSH EDI                            ; 00478ead
    CALL dword ptr [EAX + 0x1b68930]    ; 00478eae
    ADD ESP,0x4                         ; 00478eb4
    TEST EAX,EAX                        ; 00478eb7
    JNZ 0x00478ede                      ; 00478eb9
        ;   XREF to: 00478ede (CONDITIONAL_JUMP)  ; LAB_00478ede
    MOV EBP,dword ptr [0x01b6892c]      ; 00478ebb | DAT_01b6892c
    INC ESI                             ; 00478ec1
    ADD EBX,0x4                         ; 00478ec2
    CMP ESI,EBP                         ; 00478ec5
    JL 0x00478eab                       ; 00478ec7
        ;   XREF to: 00478eab (CONDITIONAL_JUMP)  ; LAB_00478eab
    XOR EAX,EAX                         ; 00478ec9
        ;   Label: LAB_00478ec9
    POP EBP                             ; 00478ecb
    POP EDI                             ; 00478ecc
    POP ESI                             ; 00478ecd
    POP EBX                             ; 00478ece
    RET                                 ; 00478ecf
    PUSH EDI                            ; 00478ed0
        ;   Label: LAB_00478ed0
    CALL FUN_00478ef0                   ; 00478ed1
        ;   XREF to: 00478ef0 (UNCONDITIONAL_CALL)  ; undefined FUN_00478ef0()
    ADD ESP,0x4                         ; 00478ed6
    POP EBP                             ; 00478ed9
    POP EDI                             ; 00478eda
    POP ESI                             ; 00478edb
    POP EBX                             ; 00478edc
    RET                                 ; 00478edd
    MOV EAX,0x1                         ; 00478ede
        ;   Label: LAB_00478ede
    POP EBP                             ; 00478ee3
    POP EDI                             ; 00478ee4
    POP ESI                             ; 00478ee5
    POP EBX                             ; 00478ee6
    RET                                 ; 00478ee7

