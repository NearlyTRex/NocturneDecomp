; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00441f60(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_0042c510 at 0042c6bd
;   FUN_00591ff0 at 0059207c
;
; Called Functions:
;   FUN_0043eea0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00441f60
        ;   Label: FUN_00441f60
    PUSH EDI                            ; 00441f61
    PUSH EBP                            ; 00441f62
    MOV EDI,dword ptr [ESP + 0x10]      ; 00441f63
    MOV EBP,dword ptr [ESP + 0x14]      ; 00441f67
    MOV EDX,dword ptr [EDI]             ; 00441f6b
    XOR ESI,ESI                         ; 00441f6d
    TEST EDX,EDX                        ; 00441f6f
    JLE 0x00441f9b                      ; 00441f71
        ;   XREF to: 00441f9b (CONDITIONAL_JUMP)  ; LAB_00441f9b
    PUSH EBX                            ; 00441f73
    MOV EBX,EDI                         ; 00441f74
    MOV ECX,dword ptr [ESP + 0x20]      ; 00441f76
        ;   Label: LAB_00441f76
    PUSH ECX                            ; 00441f7a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00441f7b
    PUSH EAX                            ; 00441f7f
    PUSH EBP                            ; 00441f80
    MOV EDX,dword ptr [EBX + 0x194]     ; 00441f81
    PUSH EDX                            ; 00441f87
    ADD EBX,0x4                         ; 00441f88
    INC ESI                             ; 00441f8b
    CALL FUN_0043eea0                   ; 00441f8c
        ;   XREF to: 0043eea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043eea0()
    MOV ECX,dword ptr [EDI]             ; 00441f91
    ADD ESP,0x10                        ; 00441f93
    CMP ESI,ECX                         ; 00441f96
    JL 0x00441f76                       ; 00441f98
        ;   XREF to: 00441f76 (CONDITIONAL_JUMP)  ; LAB_00441f76
    POP EBX                             ; 00441f9a
    POP EBP                             ; 00441f9b
        ;   Label: LAB_00441f9b
    POP EDI                             ; 00441f9c
    POP ESI                             ; 00441f9d
    RET                                 ; 00441f9e

