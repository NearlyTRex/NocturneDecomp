; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a9f50(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004a6ba0 at 004a6c14
;   FUN_004a9bf0 at 004a9c47
;
; Called Functions:
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9f50
        ;   Label: FUN_004a9f50
    PUSH ESI                            ; 004a9f51
    PUSH EDI                            ; 004a9f52
    PUSH EBP                            ; 004a9f53
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a9f54
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a9f58
    MOV EDX,dword ptr [EDI + 0x3210]    ; 004a9f5c
    XOR EBX,EBX                         ; 004a9f62
    TEST EDX,EDX                        ; 004a9f64
    JLE 0x004a9f8a                      ; 004a9f66
        ;   XREF to: 004a9f8a (CONDITIONAL_JUMP)  ; LAB_004a9f8a
    LEA ESI,[EDI + 0x3214]              ; 004a9f68
    PUSH EBP                            ; 004a9f6e
        ;   Label: LAB_004a9f6e
    PUSH ESI                            ; 004a9f6f
    CALL FUN_005c04e0                   ; 004a9f70
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004a9f75
    TEST EAX,EAX                        ; 004a9f78
    JZ 0x004a9f94                       ; 004a9f7a
        ;   XREF to: 004a9f94 (CONDITIONAL_JUMP)  ; LAB_004a9f94
    INC EBX                             ; 004a9f7c
    MOV ECX,dword ptr [EDI + 0x3210]    ; 004a9f7d
    ADD ESI,0x20                        ; 004a9f83
    CMP EBX,ECX                         ; 004a9f86
    JL 0x004a9f6e                       ; 004a9f88
        ;   XREF to: 004a9f6e (CONDITIONAL_JUMP)  ; LAB_004a9f6e
    MOV EAX,0xffffffff                  ; 004a9f8a
        ;   Label: LAB_004a9f8a
    POP EBP                             ; 004a9f8f
    POP EDI                             ; 004a9f90
    POP ESI                             ; 004a9f91
    POP EBX                             ; 004a9f92
    RET                                 ; 004a9f93
    MOV EAX,EBX                         ; 004a9f94
        ;   Label: LAB_004a9f94
    POP EBP                             ; 004a9f96
    POP EDI                             ; 004a9f97
    POP ESI                             ; 004a9f98
    POP EBX                             ; 004a9f99
    RET                                 ; 004a9f9a

