; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e7470(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_pGemPos_005dc6a6
;   TerminatedCString s_pGemOrient_005dc6ae
;   TerminatedCString s_pEmitterPos_005dc6b9
;   TerminatedCString s_exists_005dc6c5
;   undefined4 DAT_005dc6cc
;   undefined4 DAT_005dc6ce
;   undefined4 DAT_005dc6d0
;   undefined4 DAT_00617ec0
;
; Called Functions:
;   FUN_0040b4b0
;   FUN_0040b550
;   FUN_0040b960
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e7470
        ;   Label: FUN_004e7470
    PUSH EBP                            ; 004e7471
    SUB ESP,0x4                         ; 004e7472
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e7475
    PUSH ESI                            ; 004e7479
    CALL FUN_0040c330                   ; 004e747a
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    MOV EDX,dword ptr [0x00617ec0]      ; 004e747f | DAT_00617ec0
    ADD ESP,0x4                         ; 004e7485
    CMP EDX,0x2                         ; 004e7488
    JGE 0x004e7512                      ; 004e748b
        ;   XREF to: 004e7512 (CONDITIONAL_JUMP)  ; LAB_004e7512
    CMP dword ptr [0x00617ec0],0x3      ; 004e7491 | DAT_00617ec0
        ;   Label: LAB_004e7491
    JL 0x004e750c                       ; 004e7498
        ;   XREF to: 004e750c (CONDITIONAL_JUMP)  ; LAB_004e750c
    PUSH EDI                            ; 004e749a
    PUSH EBX                            ; 004e749b
    LEA EAX,[ESI + 0x74c]               ; 004e749c
    LEA EBP,[ESI + 0x7a0]               ; 004e74a2
    XOR EBX,EBX                         ; 004e74a8
    LEA EDI,[ESI + 0x79c]               ; 004e74aa
    MOV dword ptr [ESP + 0x8],EAX       ; 004e74b0
    ADD ESI,0x798                       ; 004e74b4
    IMUL EAX,EBX,0x64                   ; 004e74ba
        ;   Label: LAB_004e74ba
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e74bd
    PUSH 0x5dc6c5                       ; 004e74c1 | = "exists"
    ADD EAX,EDX                         ; 004e74c6
    PUSH EAX                            ; 004e74c8
    CALL FUN_0040b960                   ; 004e74c9
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004e74ce
    PUSH 0x5dc6cc                       ; 004e74d1 | DAT_005dc6cc
    PUSH ESI                            ; 004e74d6
    CALL FUN_0040b960                   ; 004e74d7
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004e74dc
    PUSH 0x5dc6ce                       ; 004e74df | DAT_005dc6ce
    PUSH EDI                            ; 004e74e4
    CALL FUN_0040b960                   ; 004e74e5
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004e74ea
    PUSH 0x5dc6d0                       ; 004e74ed | DAT_005dc6d0
    INC EBX                             ; 004e74f2
    PUSH EBP                            ; 004e74f3
    ADD ESI,0x64                        ; 004e74f4
    ADD EDI,0x64                        ; 004e74f7
    CALL FUN_0040b960                   ; 004e74fa
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004e74ff
    ADD EBP,0x64                        ; 004e7502
    CMP EBX,0xc                         ; 004e7505
    JL 0x004e74ba                       ; 004e7508
        ;   XREF to: 004e74ba (CONDITIONAL_JUMP)  ; LAB_004e74ba
    POP EBX                             ; 004e750a
    POP EDI                             ; 004e750b
    ADD ESP,0x4                         ; 004e750c
        ;   Label: LAB_004e750c
    POP EBP                             ; 004e750f
    POP ESI                             ; 004e7510
    RET                                 ; 004e7511
    PUSH 0x5dc6a6                       ; 004e7512 | = "pGemPos"
        ;   Label: LAB_004e7512
    LEA EAX,[ESI + 0x728]               ; 004e7517
    PUSH EAX                            ; 004e751d
    CALL FUN_0040b4b0                   ; 004e751e
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 004e7523
    PUSH 0x5dc6ae                       ; 004e7526 | = "pGemOrient"
    LEA EAX,[ESI + 0x734]               ; 004e752b
    PUSH EAX                            ; 004e7531
    CALL FUN_0040b550                   ; 004e7532
        ;   XREF to: 0040b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b550()
    ADD ESP,0x8                         ; 004e7537
    PUSH 0x5dc6b9                       ; 004e753a | = "pEmitterPos"
    LEA EAX,[ESI + 0x740]               ; 004e753f
    PUSH EAX                            ; 004e7545
    CALL FUN_0040b4b0                   ; 004e7546
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 004e754b
    JMP 0x004e7491                      ; 004e754e
        ;   XREF to: 004e7491 (UNCONDITIONAL_JUMP)  ; LAB_004e7491

