; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_FUN_004e7540(undefined4 param_1)
;
;
; Called Functions:
;   crt_heap.c__heapwalk_FUN_005a5bd0
;   support_trstream.cpp_FUN_005744b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7540
        ;   Label: core_melee.cpp_FUN_004e7540
    PUSH ESI                            ; 004e7541
    PUSH EDI                            ; 004e7542
    PUSH EBP                            ; 004e7543
    MOV EBP,ESP                         ; 004e7544
    SUB ESP,0x10                        ; 004e7546
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e7549
    XOR EDX,EDX                         ; 004e754c
    MOV word ptr [EBP + -0xc],DX        ; 004e754e
    XOR EDX,EDX                         ; 004e7552
    MOV dword ptr [EBP + -0x10],EDX     ; 004e7554
    LEA EAX,[EBP + -0x10]               ; 004e7557
        ;   Label: LAB_004e7557
    PUSH EAX                            ; 004e755a
    CALL crt_heap.c__heapwalk_FUN_005a5bd0 ; 004e755b
        ;   XREF to: 005a5bd0 (UNCONDITIONAL_CALL)  ; undefined crt_heap.c__heapwalk_FUN_005a5bd0()
    ADD ESP,0x4                         ; 004e7560
    TEST EAX,EAX                        ; 004e7563
    JZ 0x004e7589                       ; 004e7565
        ;   XREF to: 004e7589 (CONDITIONAL_JUMP)  ; LAB_004e7589
    DEC EAX                             ; 004e7567
    CMP EAX,0x4                         ; 004e7568
    JA 0x004e7582                       ; 004e756b
        ;   XREF to: 004e7582 (CONDITIONAL_JUMP)  ; LAB_004e7582
    JMP dword ptr [EAX*0x4 + 0x4e7520]  ; 004e756d
    MOV ESP,EBP                         ; 004e7582
        ;   Label: LAB_004e7582
    POP EBP                             ; 004e7584
    POP EDI                             ; 004e7585
    POP ESI                             ; 004e7586
    POP EBX                             ; 004e7587
    RET                                 ; 004e7588
    MOV ECX,dword ptr [EBP + -0xa]      ; 004e7589
        ;   Label: LAB_004e7589
    MOV ESI,dword ptr [EBP + -0x6]      ; 004e758c
    PUSH ECX                            ; 004e758f
    TEST ESI,ESI                        ; 004e7590
    JZ 0x004e75b5                       ; 004e7592
        ;   XREF to: 004e75b5 (CONDITIONAL_JUMP)  ; LAB_004e75b5
    MOV EAX,0x5c716a                    ; 004e7594
    PUSH EAX                            ; 004e7599
        ;   Label: LAB_004e7599
    XOR EAX,EAX                         ; 004e759a
    MOV AX,word ptr [EBP + -0xc]        ; 004e759c
    PUSH EAX                            ; 004e75a0
    MOV EDI,dword ptr [EBP + -0x10]     ; 004e75a1
    PUSH EDI                            ; 004e75a4
    PUSH 0x5c7174                       ; 004e75a5
    PUSH EBX                            ; 004e75aa
    CALL support_trstream.cpp_FUN_005744b0 ; 004e75ab
        ;   XREF to: 005744b0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005744b0()
    ADD ESP,0x18                        ; 004e75b0
    JMP 0x004e7557                      ; 004e75b3
        ;   XREF to: 004e7557 (UNCONDITIONAL_JUMP)  ; LAB_004e7557
    MOV EAX,0x5c716f                    ; 004e75b5
        ;   Label: LAB_004e75b5
    JMP 0x004e7599                      ; 004e75ba
        ;   XREF to: 004e7599 (UNCONDITIONAL_JUMP)  ; LAB_004e7599

