; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fbf20(int param_1)
;
;
; XREF[2]:
;   FUN_004fbb70 at 004fbbe9
;   FUN_004fc0d0 at 004fc14d
;
; Referenced Globals:
;   void* switchdataD_004fbf00 = 004fbf92
;
; Called Functions:
;   FUN_004fc070
;   FUN_004fc190
;   FUN_004fc420
;   FUN_004fc480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbf20
        ;   Label: FUN_004fbf20
    PUSH ESI                            ; 004fbf21
    PUSH EDI                            ; 004fbf22
    PUSH EBP                            ; 004fbf23
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fbf24
    PUSH EBX                            ; 004fbf28
    CALL FUN_004fc070                   ; 004fbf29
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    ADD ESP,0x4                         ; 004fbf2e
    MOV EDX,dword ptr [EBX + 0x28]      ; 004fbf31
    MOV ESI,EAX                         ; 004fbf34
    TEST EDX,EDX                        ; 004fbf36
    JL 0x004fbff8                       ; 004fbf38
        ;   XREF to: 004fbff8 (CONDITIONAL_JUMP)  ; LAB_004fbff8
    CMP EDX,dword ptr [EAX + 0x24]      ; 004fbf3e
    JZ 0x004fbff8                       ; 004fbf41
        ;   XREF to: 004fbff8 (CONDITIONAL_JUMP)  ; LAB_004fbff8
    MOV EDI,dword ptr [EBX + 0x2c]      ; 004fbf47
    TEST EDI,EDI                        ; 004fbf4a
    JNZ 0x004fbfc2                      ; 004fbf4c
        ;   XREF to: 004fbfc2 (CONDITIONAL_JUMP)  ; LAB_004fbfc2
    MOV EAX,dword ptr [ESI + 0x70]      ; 004fbf52
        ;   Label: LAB_004fbf52
    XOR EDX,EDX                         ; 004fbf55
    XOR EDI,EDI                         ; 004fbf57
    TEST EAX,EAX                        ; 004fbf59
    JLE 0x004fbf69                      ; 004fbf5b
        ;   XREF to: 004fbf69 (CONDITIONAL_JUMP)  ; LAB_004fbf69
    MOV EAX,dword ptr [ESI + 0x74]      ; 004fbf5d
    MOV EBP,dword ptr [EBX + 0x28]      ; 004fbf60
        ;   Label: LAB_004fbf60
    CMP EBP,dword ptr [EAX]             ; 004fbf63
    JNZ 0x004fbfcd                      ; 004fbf65
        ;   XREF to: 004fbfcd (CONDITIONAL_JUMP)  ; LAB_004fbfcd
    MOV EDI,EAX                         ; 004fbf67
    TEST EDI,EDI                        ; 004fbf69
        ;   Label: LAB_004fbf69
    JZ 0x004fbfc6                       ; 004fbf6b
        ;   XREF to: 004fbfc6 (CONDITIONAL_JUMP)  ; default
    CMP EDI,dword ptr [EBX + 0x2c]      ; 004fbf6d
    JZ 0x004fbfc6                       ; 004fbf70
        ;   XREF to: 004fbfc6 (CONDITIONAL_JUMP)  ; default
    PUSH EBX                            ; 004fbf72
    MOV dword ptr [EBX + 0x2c],0x0      ; 004fbf73
    CALL FUN_004fc480                   ; 004fbf7a
        ;   XREF to: 004fc480 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc480()
    MOV EAX,dword ptr [EDI + 0x4]       ; 004fbf7f
    DEC EAX                             ; 004fbf82
    ADD ESP,0x4                         ; 004fbf83
    CMP EAX,0x5                         ; 004fbf86
    JA 0x004fbfc6                       ; 004fbf89
        ;   XREF to: 004fbfc6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4fbf00]  ; 004fbf8b | caseD_1 | caseD_2 | caseD_6
        ;   Label: switchD
    MOV EDX,dword ptr [EDI + 0x8]       ; 004fbf92
        ;   Label: caseD_1
    PUSH dword ptr [EDI + 0xc]          ; 004fbf95
    PUSH EDX                            ; 004fbf98
    PUSH EBX                            ; 004fbf99
    CALL FUN_004fc420                   ; 004fbf9a
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc420()
    MOV ECX,dword ptr [EDI + 0x14]      ; 004fbf9f
    ADD ESP,0xc                         ; 004fbfa2
    TEST ECX,ECX                        ; 004fbfa5
    JZ 0x004fbfb8                       ; 004fbfa7
        ;   XREF to: 004fbfb8 (CONDITIONAL_JUMP)  ; LAB_004fbfb8
    PUSH EBX                            ; 004fbfa9
    CALL FUN_004fc070                   ; 004fbfaa
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fbfaf
    ADD ESP,0x4                         ; 004fbfb2
    MOV dword ptr [EBX + 0x28],EAX      ; 004fbfb5
    MOV EAX,0x1                         ; 004fbfb8
        ;   Label: LAB_004fbfb8
    POP EBP                             ; 004fbfbd
    POP EDI                             ; 004fbfbe
    POP ESI                             ; 004fbfbf
    POP EBX                             ; 004fbfc0
    RET                                 ; 004fbfc1
    CMP EDX,dword ptr [EDI]             ; 004fbfc2
        ;   Label: LAB_004fbfc2
    JNZ 0x004fbf52                      ; 004fbfc4
        ;   XREF to: 004fbf52 (CONDITIONAL_JUMP)  ; LAB_004fbf52
    XOR EAX,EAX                         ; 004fbfc6
        ;   Label: default
    POP EBP                             ; 004fbfc8
    POP EDI                             ; 004fbfc9
    POP ESI                             ; 004fbfca
    POP EBX                             ; 004fbfcb
    RET                                 ; 004fbfcc
    INC EDX                             ; 004fbfcd
        ;   Label: LAB_004fbfcd
    MOV ECX,dword ptr [ESI + 0x70]      ; 004fbfce
    ADD EAX,0x18                        ; 004fbfd1
    CMP EDX,ECX                         ; 004fbfd4
    JL 0x004fbf60                       ; 004fbfd6
        ;   XREF to: 004fbf60 (CONDITIONAL_JUMP)  ; LAB_004fbf60
    JMP 0x004fbf69                      ; 004fbfd8
        ;   XREF to: 004fbf69 (UNCONDITIONAL_JUMP)  ; LAB_004fbf69
    MOV dword ptr [EBX + 0x2c],EDI      ; 004fbfda
        ;   Label: caseD_2
    XOR EAX,EAX                         ; 004fbfdd
    POP EBP                             ; 004fbfdf
    POP EDI                             ; 004fbfe0
    POP ESI                             ; 004fbfe1
    POP EBX                             ; 004fbfe2
    RET                                 ; 004fbfe3
    PUSH EDI                            ; 004fbfe4
        ;   Label: caseD_3
    PUSH EBX                            ; 004fbfe5
    MOV dword ptr [EBX + 0x2c],EDI      ; 004fbfe6
    CALL FUN_004fc190                   ; 004fbfe9
        ;   XREF to: 004fc190 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc190()
    ADD ESP,0x8                         ; 004fbfee
    XOR EAX,EAX                         ; 004fbff1
    POP EBP                             ; 004fbff3
    POP EDI                             ; 004fbff4
    POP ESI                             ; 004fbff5
    POP EBX                             ; 004fbff6
    RET                                 ; 004fbff7
    MOV dword ptr [EBX + 0x2c],0x0      ; 004fbff8
        ;   Label: LAB_004fbff8
    XOR EAX,EAX                         ; 004fbfff
    POP EBP                             ; 004fc001
    POP EDI                             ; 004fc002
    POP ESI                             ; 004fc003
    POP EBX                             ; 004fc004
    RET                                 ; 004fc005

