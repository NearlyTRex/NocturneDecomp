; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041f390(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0041f374 = 0041f3cb
;   undefined4 DAT_006141f0
;
; Called Functions:
;   FUN_00420000
;   FUN_004203a0
;   FUN_00420830
;   FUN_004244b0
;   FUN_0048e340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f390
        ;   Label: FUN_0041f390
    PUSH EDI                            ; 0041f391
    MOV EBX,dword ptr [ESP + 0xc]       ; 0041f392
    PUSH dword ptr [ESP + 0x10]         ; 0041f396
    PUSH EBX                            ; 0041f39a
    CALL FUN_004244b0                   ; 0041f39b
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 0041f3a0
    TEST EAX,EAX                        ; 0041f3a3
    JZ 0x0041f3d8                       ; 0041f3a5
        ;   XREF to: 0041f3d8 (CONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [EBX + 0x1e4d4],0x0   ; 0041f3a7
    JZ 0x0041f3db                       ; 0041f3ae
        ;   XREF to: 0041f3db (CONDITIONAL_JUMP)  ; LAB_0041f3db
    CMP dword ptr [EBX + 0x1e4d8],0x0   ; 0041f3b0
        ;   Label: LAB_0041f3b0
    JZ 0x0041f401                       ; 0041f3b7
        ;   XREF to: 0041f401 (CONDITIONAL_JUMP)  ; LAB_0041f401
    MOV EAX,dword ptr [EBX + 0x10af8]   ; 0041f3b9
        ;   Label: LAB_0041f3b9
    CMP EAX,0x3                         ; 0041f3bf
    JA 0x0041f3d8                       ; 0041f3c2
        ;   XREF to: 0041f3d8 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x41f374]  ; 0041f3c4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH dword ptr [ESP + 0x10]         ; 0041f3cb
        ;   Label: caseD_0
    PUSH EBX                            ; 0041f3cf
    CALL FUN_00420000                   ; 0041f3d0
        ;   XREF to: 00420000 (UNCONDITIONAL_CALL)  ; undefined FUN_00420000()
    ADD ESP,0x8                         ; 0041f3d5
    POP EDI                             ; 0041f3d8
        ;   Label: caseD_3
    POP EBX                             ; 0041f3d9
    RET                                 ; 0041f3da
    LEA EAX,[EBX + 0x1e4dc]             ; 0041f3db
        ;   Label: LAB_0041f3db
    PUSH EAX                            ; 0041f3e1
    MOV ECX,dword ptr [0x006141f0]      ; 0041f3e2 | DAT_006141f0
    PUSH ECX                            ; 0041f3e8
    CALL FUN_0048e340                   ; 0041f3e9
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 0041f3ee
    TEST EAX,EAX                        ; 0041f3f1
    JZ 0x0041f3b0                       ; 0041f3f3
        ;   XREF to: 0041f3b0 (CONDITIONAL_JUMP)  ; LAB_0041f3b0
    MOV dword ptr [EBX + 0x1e4d4],0x1   ; 0041f3f5
    JMP 0x0041f3b0                      ; 0041f3ff
        ;   XREF to: 0041f3b0 (UNCONDITIONAL_JUMP)  ; LAB_0041f3b0
    LEA EAX,[EBX + 0x1e540]             ; 0041f401
        ;   Label: LAB_0041f401
    PUSH EAX                            ; 0041f407
    MOV EDI,dword ptr [0x006141f0]      ; 0041f408 | DAT_006141f0
    PUSH EDI                            ; 0041f40e
    CALL FUN_0048e340                   ; 0041f40f
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 0041f414
    TEST EAX,EAX                        ; 0041f417
    JZ 0x0041f3b9                       ; 0041f419
        ;   XREF to: 0041f3b9 (CONDITIONAL_JUMP)  ; LAB_0041f3b9
    MOV dword ptr [EBX + 0x1e4d8],0x1   ; 0041f41b
    JMP 0x0041f3b9                      ; 0041f425
        ;   XREF to: 0041f3b9 (UNCONDITIONAL_JUMP)  ; LAB_0041f3b9
    PUSH dword ptr [ESP + 0x10]         ; 0041f427
        ;   Label: caseD_1
    PUSH EBX                            ; 0041f42b
    CALL FUN_004203a0                   ; 0041f42c
        ;   XREF to: 004203a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004203a0()
    ADD ESP,0x8                         ; 0041f431
    POP EDI                             ; 0041f434
    POP EBX                             ; 0041f435
    RET                                 ; 0041f436
    PUSH dword ptr [ESP + 0x10]         ; 0041f437
        ;   Label: caseD_2
    PUSH EBX                            ; 0041f43b
    CALL FUN_00420830                   ; 0041f43c
        ;   XREF to: 00420830 (UNCONDITIONAL_CALL)  ; undefined FUN_00420830()
    ADD ESP,0x8                         ; 0041f441
    POP EDI                             ; 0041f444
    POP EBX                             ; 0041f445
    RET                                 ; 0041f446

