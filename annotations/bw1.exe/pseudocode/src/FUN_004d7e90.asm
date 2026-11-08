; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d7e90(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061abc0
;   undefined4 DAT_0061f650
;   undefined4 DAT_00622580
;   undefined4 DAT_01cd05c0
;
; Called Functions:
;   FUN_00496150
;   FUN_0051bad0
;   FUN_0052c6b0
;   FUN_0052cab0
;   FUN_0052e120
;   FUN_0059c4d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d7e90
        ;   Label: FUN_004d7e90
    PUSH EDI                            ; 004d7e91
    PUSH EBP                            ; 004d7e92
    SUB ESP,0x68                        ; 004d7e93
    PUSH 0x1                            ; 004d7e96
    PUSH 0x64                           ; 004d7e98
    LEA EAX,[ESP + 0x8]                 ; 004d7e9a
    PUSH EAX                            ; 004d7e9e
    MOV ECX,0x19                        ; 004d7e9f
    LEA EDI,[ESP + 0xc]                 ; 004d7ea4
    PUSH 0x5e336a                       ; 004d7ea8
    MOV EDX,dword ptr [0x0061abc0]      ; 004d7ead | DAT_0061abc0
    MOV ESI,0x61db70                    ; 004d7eb3
    PUSH EDX                            ; 004d7eb8
    MOVSD.REP ES:EDI,ESI                ; 004d7eb9
    CALL FUN_00496150                   ; 004d7ebb
        ;   XREF to: 00496150 (UNCONDITIONAL_CALL)  ; undefined FUN_00496150()
    ADD ESP,0x14                        ; 004d7ec0
    TEST EAX,EAX                        ; 004d7ec3
    JNZ 0x004d7ece                      ; 004d7ec5
        ;   XREF to: 004d7ece (CONDITIONAL_JUMP)  ; LAB_004d7ece
    ADD ESP,0x68                        ; 004d7ec7
    POP EBP                             ; 004d7eca
    POP EDI                             ; 004d7ecb
    POP ESI                             ; 004d7ecc
    RET                                 ; 004d7ecd
    MOV EAX,ESP                         ; 004d7ece
        ;   Label: LAB_004d7ece
    PUSH EAX                            ; 004d7ed0
    LEA EAX,[ESP + 0x68]                ; 004d7ed1
    PUSH EAX                            ; 004d7ed5
    CALL FUN_0059c4d0                   ; 004d7ed6
        ;   XREF to: 0059c4d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c4d0()
    ADD ESP,0x8                         ; 004d7edb
    PUSH EAX                            ; 004d7ede
    MOV ECX,dword ptr [0x00622580]      ; 004d7edf | DAT_00622580
    PUSH ECX                            ; 004d7ee5
    CALL FUN_0052c6b0                   ; 004d7ee6
        ;   XREF to: 0052c6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052c6b0()
    ADD ESP,0x8                         ; 004d7eeb
    TEST EAX,EAX                        ; 004d7eee
    JZ 0x004d7f1e                       ; 004d7ef0
        ;   XREF to: 004d7f1e (CONDITIONAL_JUMP)  ; LAB_004d7f1e
    XOR AH,AH                           ; 004d7ef2
    MOV byte ptr [0x01cd05c0],AH        ; 004d7ef4 | DAT_01cd05c0
    MOV ESI,dword ptr [0x00622580]      ; 004d7efa | DAT_00622580
        ;   Label: LAB_004d7efa
    PUSH ESI                            ; 004d7f00
    CALL FUN_0052e120                   ; 004d7f01
        ;   XREF to: 0052e120 (UNCONDITIONAL_CALL)  ; undefined FUN_0052e120()
    ADD ESP,0x4                         ; 004d7f06
    TEST EAX,EAX                        ; 004d7f09
    JZ 0x004d7f37                       ; 004d7f0b
        ;   XREF to: 004d7f37 (CONDITIONAL_JUMP)  ; LAB_004d7f37
    MOV EBP,dword ptr [0x0061f650]      ; 004d7f0d | DAT_0061f650
    PUSH EBP                            ; 004d7f13
    CALL FUN_0051bad0                   ; 004d7f14
        ;   XREF to: 0051bad0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051bad0()
    ADD ESP,0x4                         ; 004d7f19
    JMP 0x004d7efa                      ; 004d7f1c
        ;   XREF to: 004d7efa (UNCONDITIONAL_JUMP)  ; LAB_004d7efa
    PUSH EBX                            ; 004d7f1e
        ;   Label: LAB_004d7f1e
    PUSH EAX                            ; 004d7f1f
    MOV EBX,dword ptr [0x00622580]      ; 004d7f20 | DAT_00622580
    PUSH EBX                            ; 004d7f26
    CALL FUN_0052cab0                   ; 004d7f27
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cab0()
    ADD ESP,0x8                         ; 004d7f2c
    POP EBX                             ; 004d7f2f
    ADD ESP,0x68                        ; 004d7f30
    POP EBP                             ; 004d7f33
    POP EDI                             ; 004d7f34
    POP ESI                             ; 004d7f35
    RET                                 ; 004d7f36
    PUSH 0x1                            ; 004d7f37
        ;   Label: LAB_004d7f37
    MOV EDI,dword ptr [0x00622580]      ; 004d7f39 | DAT_00622580
    PUSH EDI                            ; 004d7f3f
    CALL FUN_0052cab0                   ; 004d7f40
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cab0()
    ADD ESP,0x8                         ; 004d7f45
    ADD ESP,0x68                        ; 004d7f48
    POP EBP                             ; 004d7f4b
    POP EDI                             ; 004d7f4c
    POP ESI                             ; 004d7f4d
    RET                                 ; 004d7f4e

