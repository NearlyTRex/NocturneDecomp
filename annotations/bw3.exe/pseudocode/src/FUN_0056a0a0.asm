; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056a0a0(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0056aa10 at 0056aa43
;
; Called Functions:
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a0a0
        ;   Label: FUN_0056a0a0
    PUSH ESI                            ; 0056a0a1
    PUSH EDI                            ; 0056a0a2
    PUSH EBP                            ; 0056a0a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0056a0a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0056a0a8
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0056a0ac
    TEST ESI,ESI                        ; 0056a0b0
    JL 0x0056a0bc                       ; 0056a0b2
        ;   XREF to: 0056a0bc (CONDITIONAL_JUMP)  ; LAB_0056a0bc
    CMP ESI,0x400                       ; 0056a0b4
    JL 0x0056a0f1                       ; 0056a0ba
        ;   XREF to: 0056a0f1 (CONDITIONAL_JUMP)  ; LAB_0056a0f1
    MOV EDX,dword ptr [EDI + 0x18004]   ; 0056a0bc
        ;   Label: LAB_0056a0bc
    XOR EBX,EBX                         ; 0056a0c2
    TEST EDX,EDX                        ; 0056a0c4
    JLE 0x0056a0e7                      ; 0056a0c6
        ;   XREF to: 0056a0e7 (CONDITIONAL_JUMP)  ; LAB_0056a0e7
    LEA ESI,[EDI + 0x8]                 ; 0056a0c8
    PUSH EBP                            ; 0056a0cb
        ;   Label: LAB_0056a0cb
    PUSH ESI                            ; 0056a0cc
    CALL FUN_005a3260                   ; 0056a0cd
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 0056a0d2
    TEST EAX,EAX                        ; 0056a0d5
    JZ 0x0056a11a                       ; 0056a0d7
        ;   XREF to: 0056a11a (CONDITIONAL_JUMP)  ; LAB_0056a11a
    INC EBX                             ; 0056a0d9
    MOV ECX,dword ptr [EDI + 0x18004]   ; 0056a0da
    ADD ESI,0x60                        ; 0056a0e0
    CMP EBX,ECX                         ; 0056a0e3
    JL 0x0056a0cb                       ; 0056a0e5
        ;   XREF to: 0056a0cb (CONDITIONAL_JUMP)  ; LAB_0056a0cb
    MOV EAX,0xffffffff                  ; 0056a0e7
        ;   Label: LAB_0056a0e7
    POP EBP                             ; 0056a0ec
    POP EDI                             ; 0056a0ed
    POP ESI                             ; 0056a0ee
    POP EBX                             ; 0056a0ef
    RET                                 ; 0056a0f0
    LEA EAX,[ESI*0x4 + 0x0]             ; 0056a0f1
        ;   Label: LAB_0056a0f1
    SUB EAX,ESI                         ; 0056a0f8
    LEA EBX,[EDI + 0x4]                 ; 0056a0fa
    SHL EAX,0x5                         ; 0056a0fd
    ADD EAX,EBX                         ; 0056a100
    PUSH EBP                            ; 0056a102
    ADD EAX,0x4                         ; 0056a103
    PUSH EAX                            ; 0056a106
    CALL FUN_005a3260                   ; 0056a107
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 0056a10c
    TEST EAX,EAX                        ; 0056a10f
    JNZ 0x0056a0bc                      ; 0056a111
        ;   XREF to: 0056a0bc (CONDITIONAL_JUMP)  ; LAB_0056a0bc
    MOV EAX,ESI                         ; 0056a113
    POP EBP                             ; 0056a115
    POP EDI                             ; 0056a116
    POP ESI                             ; 0056a117
    POP EBX                             ; 0056a118
    RET                                 ; 0056a119
    MOV EAX,EBX                         ; 0056a11a
        ;   Label: LAB_0056a11a
    POP EBP                             ; 0056a11c
    POP EDI                             ; 0056a11d
    POP ESI                             ; 0056a11e
    POP EBX                             ; 0056a11f
    RET                                 ; 0056a120

