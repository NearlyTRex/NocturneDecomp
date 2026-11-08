; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a9f00(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004a6ba0 at 004a6c06
;   FUN_004a9a60 at 004a9a80
;
; Called Functions:
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9f00
        ;   Label: FUN_004a9f00
    PUSH ESI                            ; 004a9f01
    PUSH EDI                            ; 004a9f02
    PUSH EBP                            ; 004a9f03
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a9f04
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a9f08
    MOV EDX,dword ptr [EDI + 0x1908]    ; 004a9f0c
    XOR EBX,EBX                         ; 004a9f12
    TEST EDX,EDX                        ; 004a9f14
    JLE 0x004a9f3a                      ; 004a9f16
        ;   XREF to: 004a9f3a (CONDITIONAL_JUMP)  ; LAB_004a9f3a
    LEA ESI,[EDI + 0x190c]              ; 004a9f18
    PUSH EBP                            ; 004a9f1e
        ;   Label: LAB_004a9f1e
    PUSH ESI                            ; 004a9f1f
    CALL FUN_005c04e0                   ; 004a9f20
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004a9f25
    TEST EAX,EAX                        ; 004a9f28
    JZ 0x004a9f44                       ; 004a9f2a
        ;   XREF to: 004a9f44 (CONDITIONAL_JUMP)  ; LAB_004a9f44
    INC EBX                             ; 004a9f2c
    MOV ECX,dword ptr [EDI + 0x1908]    ; 004a9f2d
    ADD ESI,0x20                        ; 004a9f33
    CMP EBX,ECX                         ; 004a9f36
    JL 0x004a9f1e                       ; 004a9f38
        ;   XREF to: 004a9f1e (CONDITIONAL_JUMP)  ; LAB_004a9f1e
    MOV EAX,0xffffffff                  ; 004a9f3a
        ;   Label: LAB_004a9f3a
    POP EBP                             ; 004a9f3f
    POP EDI                             ; 004a9f40
    POP ESI                             ; 004a9f41
    POP EBX                             ; 004a9f42
    RET                                 ; 004a9f43
    MOV EAX,EBX                         ; 004a9f44
        ;   Label: LAB_004a9f44
    POP EBP                             ; 004a9f46
    POP EDI                             ; 004a9f47
    POP ESI                             ; 004a9f48
    POP EBX                             ; 004a9f49
    RET                                 ; 004a9f4a

