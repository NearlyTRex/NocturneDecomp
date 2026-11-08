; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9d00(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_0040cb60 at 0040cc5f
;
; Referenced Globals:
;   undefined4 DAT_01cde344
;   undefined4 DAT_01cde348
;
; Called Functions:
;   FUN_004c8e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9d00
        ;   Label: FUN_004c9d00
    PUSH ESI                            ; 004c9d01
    PUSH EDI                            ; 004c9d02
    PUSH EBP                            ; 004c9d03
    MOV EBP,ESP                         ; 004c9d04
    MOV EDX,0x1cde34c                   ; 004c9d06
    MOV ECX,dword ptr [0x01cde344]      ; 004c9d0b | DAT_01cde344
    MOV EAX,[0x01cde344]                ; 004c9d11 | DAT_01cde344
    INC ECX                             ; 004c9d16
    SHL EAX,0x6                         ; 004c9d17
    MOV dword ptr [0x01cde344],ECX      ; 004c9d1a | DAT_01cde344
    ADD EDX,EAX                         ; 004c9d20
    CMP ECX,0x3e8                       ; 004c9d22
    JGE 0x004c9d6d                      ; 004c9d28
        ;   XREF to: 004c9d6d (CONDITIONAL_JUMP)  ; LAB_004c9d6d
    MOV EDI,dword ptr [0x01cde348]      ; 004c9d2a | DAT_01cde348
        ;   Label: LAB_004c9d2a
    CMP EDI,0x3e8                       ; 004c9d30
    JGE 0x004c9d40                      ; 004c9d36
        ;   XREF to: 004c9d40 (CONDITIONAL_JUMP)  ; LAB_004c9d40
    LEA EAX,[EDI + 0x1]                 ; 004c9d38
    MOV [0x01cde348],EAX                ; 004c9d3b | DAT_01cde348
    MOV ECX,dword ptr [EBP + 0x28]      ; 004c9d40
        ;   Label: LAB_004c9d40
    PUSH ECX                            ; 004c9d43
    MOV EBX,dword ptr [EBP + 0x24]      ; 004c9d44
    MOV ESI,dword ptr [EBP + 0x20]      ; 004c9d47
    PUSH EBX                            ; 004c9d4a
    CMP ESI,0xb                         ; 004c9d4b
    SETZ AL                             ; 004c9d4e
    AND EAX,0xff                        ; 004c9d51
    PUSH EAX                            ; 004c9d56
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004c9d57
    PUSH EDI                            ; 004c9d5a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c9d5b
    PUSH EAX                            ; 004c9d5e
    PUSH EDX                            ; 004c9d5f
    CALL FUN_004c8e80                   ; 004c9d60
        ;   XREF to: 004c8e80 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8e80()
    ADD ESP,0x18                        ; 004c9d65
    POP EBP                             ; 004c9d68
    POP EDI                             ; 004c9d69
    POP ESI                             ; 004c9d6a
    POP EBX                             ; 004c9d6b
    RET                                 ; 004c9d6c
    XOR ESI,ESI                         ; 004c9d6d
        ;   Label: LAB_004c9d6d
    MOV dword ptr [0x01cde344],ESI      ; 004c9d6f | DAT_01cde344
    JMP 0x004c9d2a                      ; 004c9d75
        ;   XREF to: 004c9d2a (UNCONDITIONAL_JUMP)  ; LAB_004c9d2a

