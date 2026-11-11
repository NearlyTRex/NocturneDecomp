; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042f4f0(undefined4 *param_1,int param_2,uint param_3,uint param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;   crt_unknown.c_FUN_005b86a0
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f4f0
        ;   Label: cockpit_ckptutil.c_FUN_0042f4f0
    PUSH ESI                            ; 0042f4f1
    PUSH EDI                            ; 0042f4f2
    PUSH EBP                            ; 0042f4f3
    SUB ESP,0x68                        ; 0042f4f4
    MOV EBP,dword ptr [ESP + 0x88]      ; 0042f4f7
    MOV EAX,dword ptr [ESP + 0x80]      ; 0042f4fe
    IMUL EAX,EBP                        ; 0042f505
    MOV EBX,dword ptr [ESP + 0x80]      ; 0042f508
    IMUL EBX,dword ptr [ESP + 0x84]     ; 0042f50f
    IMUL EBX,EBP                        ; 0042f517
    PUSH EBX                            ; 0042f51a
    MOV dword ptr [ESP + 0x64],EAX      ; 0042f51b
    CALL crt_memory.c_malloc_FUN_005b8580 ; 0042f51f
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0042f524
    MOV dword ptr [ESP + 0x54],EAX      ; 0042f527
    TEST EAX,EAX                        ; 0042f52b
    JZ 0x0042f5dc                       ; 0042f52d
        ;   XREF to: 0042f5dc (CONDITIONAL_JUMP)  ; LAB_0042f5dc
    CMP EBP,0x1                         ; 0042f533
        ;   Label: LAB_0042f533
    JNZ 0x0042f615                      ; 0042f536
        ;   XREF to: 0042f615 (CONDITIONAL_JUMP)  ; LAB_0042f615
    MOV EAX,dword ptr [ESP + 0x84]      ; 0042f53c
    XOR ESI,ESI                         ; 0042f543
    TEST EAX,EAX                        ; 0042f545
    JBE 0x0042f59d                      ; 0042f547
        ;   XREF to: 0042f59d (CONDITIONAL_JUMP)  ; LAB_0042f59d
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042f549
    MOV dword ptr [ESP + 0x50],EAX      ; 0042f54d
    IMUL EDI,EAX,0x0                    ; 0042f551
    MOV EAX,dword ptr [ESP + 0x84]      ; 0042f554
        ;   Label: LAB_0042f554
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0042f55b
    MOV EBX,dword ptr [ESP + 0x54]      ; 0042f55f
    SUB EAX,ESI                         ; 0042f563
    MOV ECX,dword ptr [ESP + 0x60]      ; 0042f565
    DEC EAX                             ; 0042f569
    ADD EDX,EDI                         ; 0042f56a
    ADD EBX,EAX                         ; 0042f56c
    XOR EAX,EAX                         ; 0042f56e
    TEST ECX,ECX                        ; 0042f570
    JBE 0x0042f58b                      ; 0042f572
        ;   XREF to: 0042f58b (CONDITIONAL_JUMP)  ; LAB_0042f58b
    MOV CL,byte ptr [EDX]               ; 0042f574
        ;   Label: LAB_0042f574
    MOV byte ptr [EBX],CL               ; 0042f576
    MOV ECX,dword ptr [ESP + 0x84]      ; 0042f578
    INC EAX                             ; 0042f57f
    ADD EBX,ECX                         ; 0042f580
    MOV ECX,dword ptr [ESP + 0x60]      ; 0042f582
    INC EDX                             ; 0042f586
    CMP EAX,ECX                         ; 0042f587
    JC 0x0042f574                       ; 0042f589
        ;   XREF to: 0042f574 (CONDITIONAL_JUMP)  ; LAB_0042f574
    MOV EBX,dword ptr [ESP + 0x50]      ; 0042f58b
        ;   Label: LAB_0042f58b
    MOV EAX,dword ptr [ESP + 0x84]      ; 0042f58f
    INC ESI                             ; 0042f596
    ADD EDI,EBX                         ; 0042f597
    CMP ESI,EAX                         ; 0042f599
    JC 0x0042f554                       ; 0042f59b
        ;   XREF to: 0042f554 (CONDITIONAL_JUMP)  ; LAB_0042f554
    MOV ECX,dword ptr [ESP + 0x80]      ; 0042f59d
        ;   Label: LAB_0042f59d
    IMUL ECX,dword ptr [ESP + 0x84]     ; 0042f5a4
    IMUL ECX,EBP                        ; 0042f5ac
    MOV ESI,dword ptr [ESP + 0x54]      ; 0042f5af
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0042f5b3
    PUSH EDI                            ; 0042f5b7
    MOV EAX,ECX                         ; 0042f5b8
    SHR ECX,0x2                         ; 0042f5ba
    MOVSD.REP ES:EDI,ESI                ; 0042f5bd
    MOV CL,AL                           ; 0042f5bf
    AND CL,0x3                          ; 0042f5c1
    MOVSB.REP ES:EDI,ESI                ; 0042f5c4
    POP EDI                             ; 0042f5c6
    MOV ESI,dword ptr [ESP + 0x54]      ; 0042f5c7
    PUSH ESI                            ; 0042f5cb
    CALL crt_unknown.c_FUN_005b86a0     ; 0042f5cc
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0042f5d1
    ADD ESP,0x68                        ; 0042f5d4
    POP EBP                             ; 0042f5d7
    POP EDI                             ; 0042f5d8
    POP ESI                             ; 0042f5d9
    POP EBX                             ; 0042f5da
    RET                                 ; 0042f5db
    PUSH EBX                            ; 0042f5dc
        ;   Label: LAB_0042f5dc
    PUSH 0x5cd7c6                       ; 0042f5dd
    LEA EAX,[ESP + 0x8]                 ; 0042f5e2
    PUSH EAX                            ; 0042f5e6
    MOV EBX,0x82f                       ; 0042f5e7
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0042f5ec
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0042f5f1
    MOV EAX,ESP                         ; 0042f5f4
    MOV ECX,0x5cd800                    ; 0042f5f6
    PUSH EAX                            ; 0042f5fb
    MOV dword ptr [0x01d046a4],EBX      ; 0042f5fc | DAT_01d046a4
    MOV dword ptr [0x01d046a0],ECX      ; 0042f602 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 0042f608
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042f60d
    JMP 0x0042f533                      ; 0042f610
        ;   XREF to: 0042f533 (UNCONDITIONAL_JUMP)  ; LAB_0042f533
    XOR ESI,ESI                         ; 0042f615
        ;   Label: LAB_0042f615
    MOV EDI,dword ptr [ESP + 0x84]      ; 0042f617
    MOV dword ptr [ESP + 0x58],ESI      ; 0042f61e
    TEST EDI,EDI                        ; 0042f622
    JBE 0x0042f59d                      ; 0042f624
        ;   XREF to: 0042f59d (CONDITIONAL_JUMP)  ; LAB_0042f59d
    MOV EAX,EDI                         ; 0042f62a
    IMUL EAX,EBP                        ; 0042f62c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0042f62f
    MOV EDX,dword ptr [ESP + 0x58]      ; 0042f633
        ;   Label: LAB_0042f633
    IMUL EDX,dword ptr [ESP + 0x60]     ; 0042f637
    MOV EAX,dword ptr [ESP + 0x84]      ; 0042f63c
    SUB EAX,dword ptr [ESP + 0x58]      ; 0042f643
    DEC EAX                             ; 0042f647
    IMUL EAX,EBP                        ; 0042f648
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0042f64b
    MOV EBX,dword ptr [ESP + 0x54]      ; 0042f64f
    MOV ECX,dword ptr [ESP + 0x60]      ; 0042f653
    ADD EBX,EAX                         ; 0042f657
    XOR EAX,EAX                         ; 0042f659
    ADD EDX,ESI                         ; 0042f65b
    MOV dword ptr [ESP + 0x64],EAX      ; 0042f65d
    TEST ECX,ECX                        ; 0042f661
    JBE 0x0042f694                      ; 0042f663
        ;   XREF to: 0042f694 (CONDITIONAL_JUMP)  ; LAB_0042f694
    MOV ECX,EBP                         ; 0042f665
        ;   Label: LAB_0042f665
    MOV ESI,EDX                         ; 0042f667
    MOV EDI,EBX                         ; 0042f669
    PUSH EDI                            ; 0042f66b
    MOV EAX,ECX                         ; 0042f66c
    SHR ECX,0x2                         ; 0042f66e
    MOVSD.REP ES:EDI,ESI                ; 0042f671
    MOV CL,AL                           ; 0042f673
    AND CL,0x3                          ; 0042f675
    MOVSB.REP ES:EDI,ESI                ; 0042f678
    POP EDI                             ; 0042f67a
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0042f67b
    MOV EDI,dword ptr [ESP + 0x64]      ; 0042f67f
    MOV ECX,dword ptr [ESP + 0x60]      ; 0042f683
    ADD EDX,EBP                         ; 0042f687
    INC EDI                             ; 0042f689
    ADD EBX,ESI                         ; 0042f68a
    MOV dword ptr [ESP + 0x64],EDI      ; 0042f68c
    CMP EDI,ECX                         ; 0042f690
    JC 0x0042f665                       ; 0042f692
        ;   XREF to: 0042f665 (CONDITIONAL_JUMP)  ; LAB_0042f665
    MOV EDX,dword ptr [ESP + 0x58]      ; 0042f694
        ;   Label: LAB_0042f694
    INC EDX                             ; 0042f698
    MOV ECX,dword ptr [ESP + 0x84]      ; 0042f699
    MOV dword ptr [ESP + 0x58],EDX      ; 0042f6a0
    CMP EDX,ECX                         ; 0042f6a4
    JNC 0x0042f59d                      ; 0042f6a6
        ;   XREF to: 0042f59d (CONDITIONAL_JUMP)  ; LAB_0042f59d
    JMP 0x0042f633                      ; 0042f6ac
        ;   XREF to: 0042f633 (UNCONDITIONAL_JUMP)  ; LAB_0042f633

