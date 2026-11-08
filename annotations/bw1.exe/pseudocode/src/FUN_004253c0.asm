; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004253c0(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004253a4 = 004253fb
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   FUN_00426030
;   FUN_004263d0
;   FUN_00426860
;   FUN_0042e1a0
;   FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004253c0
        ;   Label: FUN_004253c0
    PUSH EDI                            ; 004253c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004253c2
    PUSH dword ptr [ESP + 0x10]         ; 004253c6
    PUSH EBX                            ; 004253ca
    CALL FUN_0042e1a0                   ; 004253cb
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e1a0()
    ADD ESP,0x8                         ; 004253d0
    TEST EAX,EAX                        ; 004253d3
    JZ 0x00425408                       ; 004253d5
        ;   XREF to: 00425408 (CONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [EBX + 0x19c44],0x0   ; 004253d7
    JZ 0x0042540b                       ; 004253de
        ;   XREF to: 0042540b (CONDITIONAL_JUMP)  ; LAB_0042540b
    CMP dword ptr [EBX + 0x19c48],0x0   ; 004253e0
        ;   Label: LAB_004253e0
    JZ 0x00425431                       ; 004253e7
        ;   XREF to: 00425431 (CONDITIONAL_JUMP)  ; LAB_00425431
    MOV EAX,dword ptr [EBX + 0xc268]    ; 004253e9
        ;   Label: LAB_004253e9
    CMP EAX,0x3                         ; 004253ef
    JA 0x00425408                       ; 004253f2
        ;   XREF to: 00425408 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4253a4]  ; 004253f4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH dword ptr [ESP + 0x10]         ; 004253fb
        ;   Label: caseD_0
    PUSH EBX                            ; 004253ff
    CALL FUN_00426030                   ; 00425400
        ;   XREF to: 00426030 (UNCONDITIONAL_CALL)  ; undefined FUN_00426030()
    ADD ESP,0x8                         ; 00425405
    POP EDI                             ; 00425408
        ;   Label: caseD_3
    POP EBX                             ; 00425409
    RET                                 ; 0042540a
    LEA EAX,[EBX + 0x19c4c]             ; 0042540b
        ;   Label: LAB_0042540b
    PUSH EAX                            ; 00425411
    MOV ECX,dword ptr [0x0061b4d0]      ; 00425412 | DAT_0061b4d0
    PUSH ECX                            ; 00425418
    CALL FUN_004a6c30                   ; 00425419
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 0042541e
    TEST EAX,EAX                        ; 00425421
    JZ 0x004253e0                       ; 00425423
        ;   XREF to: 004253e0 (CONDITIONAL_JUMP)  ; LAB_004253e0
    MOV dword ptr [EBX + 0x19c44],0x1   ; 00425425
    JMP 0x004253e0                      ; 0042542f
        ;   XREF to: 004253e0 (UNCONDITIONAL_JUMP)  ; LAB_004253e0
    LEA EAX,[EBX + 0x19cb0]             ; 00425431
        ;   Label: LAB_00425431
    PUSH EAX                            ; 00425437
    MOV EDI,dword ptr [0x0061b4d0]      ; 00425438 | DAT_0061b4d0
    PUSH EDI                            ; 0042543e
    CALL FUN_004a6c30                   ; 0042543f
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 00425444
    TEST EAX,EAX                        ; 00425447
    JZ 0x004253e9                       ; 00425449
        ;   XREF to: 004253e9 (CONDITIONAL_JUMP)  ; LAB_004253e9
    MOV dword ptr [EBX + 0x19c48],0x1   ; 0042544b
    JMP 0x004253e9                      ; 00425455
        ;   XREF to: 004253e9 (UNCONDITIONAL_JUMP)  ; LAB_004253e9
    PUSH dword ptr [ESP + 0x10]         ; 00425457
        ;   Label: caseD_1
    PUSH EBX                            ; 0042545b
    CALL FUN_004263d0                   ; 0042545c
        ;   XREF to: 004263d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004263d0()
    ADD ESP,0x8                         ; 00425461
    POP EDI                             ; 00425464
    POP EBX                             ; 00425465
    RET                                 ; 00425466
    PUSH dword ptr [ESP + 0x10]         ; 00425467
        ;   Label: caseD_2
    PUSH EBX                            ; 0042546b
    CALL FUN_00426860                   ; 0042546c
        ;   XREF to: 00426860 (UNCONDITIONAL_CALL)  ; undefined FUN_00426860()
    ADD ESP,0x8                         ; 00425471
    POP EDI                             ; 00425474
    POP EBX                             ; 00425475
    RET                                 ; 00425476

