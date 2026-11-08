; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00495d60(int *param_1)
;
;
; XREF[1]:
;   FUN_00495db0 at 00495db5
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;
; Called Functions:
;   FUN_00491aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495d60
        ;   Label: FUN_00495d60
    PUSH ESI                            ; 00495d61
    PUSH EDI                            ; 00495d62
    PUSH EBP                            ; 00495d63
    MOV EDI,dword ptr [ESP + 0x14]      ; 00495d64
    MOV EDX,dword ptr [EDI]             ; 00495d68
    XOR EBX,EBX                         ; 00495d6a
    TEST EDX,EDX                        ; 00495d6c
    JLE 0x00495d91                      ; 00495d6e
        ;   XREF to: 00495d91 (CONDITIONAL_JUMP)  ; LAB_00495d91
    LEA ESI,[EDI + 0x4]                 ; 00495d70
    PUSH ESI                            ; 00495d73
        ;   Label: LAB_00495d73
    MOV EBP,dword ptr [0x005fba60]      ; 00495d74 | DAT_005fba60
    PUSH EBP                            ; 00495d7a
    CALL FUN_00491aa0                   ; 00495d7b
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 00495d80
    TEST EAX,EAX                        ; 00495d83
    JNZ 0x00495d9b                      ; 00495d85
        ;   XREF to: 00495d9b (CONDITIONAL_JUMP)  ; LAB_00495d9b
    INC EBX                             ; 00495d87
    MOV ECX,dword ptr [EDI]             ; 00495d88
    ADD ESI,0x64                        ; 00495d8a
    CMP EBX,ECX                         ; 00495d8d
    JL 0x00495d73                       ; 00495d8f
        ;   XREF to: 00495d73 (CONDITIONAL_JUMP)  ; LAB_00495d73
    MOV EAX,0xffffffff                  ; 00495d91
        ;   Label: LAB_00495d91
    POP EBP                             ; 00495d96
    POP EDI                             ; 00495d97
    POP ESI                             ; 00495d98
    POP EBX                             ; 00495d99
    RET                                 ; 00495d9a
    MOV EAX,EBX                         ; 00495d9b
        ;   Label: LAB_00495d9b
    POP EBP                             ; 00495d9d
    POP EDI                             ; 00495d9e
    POP ESI                             ; 00495d9f
    POP EBX                             ; 00495da0
    RET                                 ; 00495da1

