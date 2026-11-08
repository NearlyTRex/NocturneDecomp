; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00492ef0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0044fcc0
;   FUN_0046b350
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492ef0
        ;   Label: FUN_00492ef0
    PUSH ESI                            ; 00492ef1
    PUSH EDI                            ; 00492ef2
    PUSH EBP                            ; 00492ef3
    SUB ESP,0x48                        ; 00492ef4
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00492ef7
    PUSH EBX                            ; 00492efb
    CALL FUN_004089d0                   ; 00492efc
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 00492f01
    PUSH 0x0                            ; 00492f04
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00492f06
    PUSH EBX                            ; 00492f0c
    LEA ESI,[ESP + 0x8]                 ; 00492f0d
    LEA EDI,[ESP + 0x20]                ; 00492f11
    CALL dword ptr [EAX + 0x24]         ; 00492f15
    MOV ECX,0x6                         ; 00492f18
    ADD ESP,0x4                         ; 00492f1d
    LEA EAX,[ESP + 0x1c]                ; 00492f20
    LEA ESI,[ESP + 0x4]                 ; 00492f24
    PUSH EAX                            ; 00492f28
    MOVSD.REP ES:EDI,ESI                ; 00492f29
    CALL FUN_0041a840                   ; 00492f2b
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 00492f30
    MOV ESI,EAX                         ; 00492f33
    TEST EAX,EAX                        ; 00492f35
    JNZ 0x00492f4c                      ; 00492f37
        ;   XREF to: 00492f4c (CONDITIONAL_JUMP)  ; LAB_00492f4c
    PUSH EBX                            ; 00492f39
    CALL FUN_00408a10                   ; 00492f3a
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 00492f3f
    MOV EAX,ESI                         ; 00492f42
    ADD ESP,0x48                        ; 00492f44
    POP EBP                             ; 00492f47
    POP EDI                             ; 00492f48
    POP ESI                             ; 00492f49
    POP EBX                             ; 00492f4a
    RET                                 ; 00492f4b
    XOR EDX,EDX                         ; 00492f4c
        ;   Label: LAB_00492f4c
    MOV dword ptr [ESP + 0x3c],EDX      ; 00492f4e
    MOV EAX,dword ptr [EBX + 0x534]     ; 00492f52
    MOV dword ptr [ESP + 0x44],EAX      ; 00492f58
    LEA EAX,[ESP + 0x30]                ; 00492f5c
    MOV dword ptr [ESP + 0x40],EDX      ; 00492f60
    PUSH EAX                            ; 00492f64
    MOV dword ptr [ESP + 0x34],EDX      ; 00492f65
    MOV dword ptr [ESP + 0x3c],EDX      ; 00492f69
    PUSH 0x265370c                      ; 00492f6d
    MOV EDX,dword ptr [0x0060b280]      ; 00492f72 | DAT_0060b280
    MOV EBP,0x40000000                  ; 00492f78
    PUSH EDX                            ; 00492f7d
    MOV dword ptr [ESP + 0x40],EBP      ; 00492f7e
    CALL FUN_0046b350                   ; 00492f82
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 00492f87
    PUSH 0x265370c                      ; 00492f8a
    LEA EAX,[ESP + 0x40]                ; 00492f8f
    PUSH EAX                            ; 00492f93
    MOV ECX,dword ptr [0x0060b280]      ; 00492f94 | DAT_0060b280
    PUSH ECX                            ; 00492f9a
    CALL FUN_0046b350                   ; 00492f9b
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 00492fa0
    PUSH -0x1                           ; 00492fa3
    LEA EAX,[EBX + 0x350]               ; 00492fa5
    PUSH 0x0                            ; 00492fab
    PUSH EAX                            ; 00492fad
    CALL FUN_0044fcc0                   ; 00492fae
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 00492fb3
    MOV EDI,dword ptr [0x0060b280]      ; 00492fb6 | DAT_0060b280
    PUSH EDI                            ; 00492fbc
    CALL thunk_FUN_004e9810             ; 00492fbd
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 00492fc2
    MOV EBP,dword ptr [0x0060b280]      ; 00492fc5 | DAT_0060b280
    PUSH EBP                            ; 00492fcb
    CALL thunk_FUN_004e9810             ; 00492fcc
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 00492fd1
    PUSH EBX                            ; 00492fd4
    CALL FUN_00408a10                   ; 00492fd5
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 00492fda
    MOV EAX,ESI                         ; 00492fdd
    ADD ESP,0x48                        ; 00492fdf
    POP EBP                             ; 00492fe2
    POP EDI                             ; 00492fe3
    POP ESI                             ; 00492fe4
    POP EBX                             ; 00492fe5
    RET                                 ; 00492fe6

