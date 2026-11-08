; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00579390(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_nextWayPoint_005d73db
;   TerminatedCString s_adjCount_005d73e8
;   undefined4 DAT_006071c4
;
; Called Functions:
;   FUN_0040b8b0
;   FUN_0040b930
;   FUN_0056e940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579390
        ;   Label: FUN_00579390
    PUSH ESI                            ; 00579391
    PUSH EDI                            ; 00579392
    PUSH EBP                            ; 00579393
    SUB ESP,0x4                         ; 00579394
    MOV EDI,dword ptr [ESP + 0x18]      ; 00579397
    PUSH EDI                            ; 0057939b
    CALL FUN_0056e940                   ; 0057939c
        ;   XREF to: 0056e940 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e940()
    MOV EDX,dword ptr [0x006071c4]      ; 005793a1 | DAT_006071c4
    ADD ESP,0x4                         ; 005793a7
    CMP EDX,0x2                         ; 005793aa
    JL 0x005793c8                       ; 005793ad
        ;   XREF to: 005793c8 (CONDITIONAL_JUMP)  ; LAB_005793c8
    CMP dword ptr [0x006071c4],0x2      ; 005793af | DAT_006071c4
        ;   Label: LAB_005793af
    JGE 0x005793dc                      ; 005793b6
        ;   XREF to: 005793dc (CONDITIONAL_JUMP)  ; LAB_005793dc
    LEA EAX,[EAX]                       ; 005793b8
    MOV EDX,EDX                         ; 005793be
    ADD ESP,0x4                         ; 005793c0
        ;   Label: LAB_005793c0
    POP EBP                             ; 005793c3
    POP EDI                             ; 005793c4
    POP ESI                             ; 005793c5
    POP EBX                             ; 005793c6
    RET                                 ; 005793c7
    PUSH 0x5d73db                       ; 005793c8 | = "nextWayPoint"
        ;   Label: LAB_005793c8
    LEA EBX,[ESP + 0x4]                 ; 005793cd
    PUSH EBX                            ; 005793d1
    CALL FUN_0040b930                   ; 005793d2
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b930()
    ADD ESP,0x8                         ; 005793d7
    JMP 0x005793af                      ; 005793da
        ;   XREF to: 005793af (UNCONDITIONAL_JUMP)  ; LAB_005793af
    PUSH 0x5d73e8                       ; 005793dc | = "adjCount"
        ;   Label: LAB_005793dc
    LEA EBX,[EDI + 0x374]               ; 005793e1
    PUSH EBX                            ; 005793e7
    XOR ESI,ESI                         ; 005793e8
    CALL FUN_0040b8b0                   ; 005793ea
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    MOV EBX,dword ptr [EDI + 0x374]     ; 005793ef
    ADD ESP,0x8                         ; 005793f5
    TEST EBX,EBX                        ; 005793f8
    JLE 0x005793c0                      ; 005793fa
        ;   XREF to: 005793c0 (CONDITIONAL_JUMP)  ; LAB_005793c0
    LEA EBX,[EDI + 0x378]               ; 005793fc
    PUSH 0x0                            ; 00579402
        ;   Label: LAB_00579402
    PUSH EBX                            ; 00579404
    INC ESI                             ; 00579405
    CALL FUN_0040b930                   ; 00579406
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b930()
    ADD ESP,0x8                         ; 0057940b
    MOV EBP,dword ptr [EDI + 0x374]     ; 0057940e
    ADD EBX,0x8                         ; 00579414
    CMP ESI,EBP                         ; 00579417
    JL 0x00579402                       ; 00579419
        ;   XREF to: 00579402 (CONDITIONAL_JUMP)  ; LAB_00579402
    ADD ESP,0x4                         ; 0057941b
    POP EBP                             ; 0057941e
    POP EDI                             ; 0057941f
    POP ESI                             ; 00579420
    POP EBX                             ; 00579421
    RET                                 ; 00579422

