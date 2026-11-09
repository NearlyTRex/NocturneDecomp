; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005be628(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005be6d8 at 005be6e2
;
; Referenced Globals:
;   void* PTR_VirtualAlloc_005c8660 = 001c9262
;   undefined4 DAT_0061f240
;   undefined4 DAT_0061f6ec
;
; Called Functions:
;   crt_unknown.c_FUN_005b86b0
;   crt_unknown.c_FUN_005be5b0
;   crt_unknown.c_FUN_005be6ec
;   VirtualAlloc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be628
        ;   Label: crt_unknown.c_FUN_005be628
    PUSH ESI                            ; 005be629
    PUSH EDI                            ; 005be62a
    CMP dword ptr [0x0061f6ec],0x0      ; 005be62b | DAT_0061f6ec
    JNZ 0x005be63a                      ; 005be632
        ;   XREF to: 005be63a (CONDITIONAL_JUMP)  ; LAB_005be63a
    XOR EAX,EAX                         ; 005be634
    POP EDI                             ; 005be636
    POP ESI                             ; 005be637
    POP EBX                             ; 005be638
    RET                                 ; 005be639
    CMP dword ptr [0x0061f240],-0x2     ; 005be63a | DAT_0061f240
        ;   Label: LAB_005be63a
    JNZ 0x005be649                      ; 005be641
        ;   XREF to: 005be649 (CONDITIONAL_JUMP)  ; LAB_005be649
    XOR EAX,EAX                         ; 005be643
    POP EDI                             ; 005be645
    POP ESI                             ; 005be646
    POP EBX                             ; 005be647
    RET                                 ; 005be648
    LEA EAX,[ESP + 0x10]                ; 005be649
        ;   Label: LAB_005be649
    PUSH EAX                            ; 005be64d
    CALL crt_unknown.c_FUN_005be6ec     ; 005be64e
        ;   XREF to: 005be6ec (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be6ec()
    ADD ESP,0x4                         ; 005be653
    TEST EAX,EAX                        ; 005be656
    JZ 0x005be6d3                       ; 005be658
        ;   XREF to: 005be6d3 (CONDITIONAL_JUMP)  ; LAB_005be6d3
    PUSH 0x40                           ; 005be65e
    PUSH 0x1000                         ; 005be660
    MOV ECX,dword ptr [ESP + 0x18]      ; 005be665
    PUSH ECX                            ; 005be669
    PUSH 0x0                            ; 005be66a
    CALL dword ptr CS:[0x5c8660]        ; 005be66c | PTR_VirtualAlloc_005c8660
    MOV EBX,EAX                         ; 005be673
    TEST EAX,EAX                        ; 005be675
    JZ 0x005be6d3                       ; 005be677
        ;   XREF to: 005be6d3 (CONDITIONAL_JUMP)  ; LAB_005be6d3
    MOV EAX,dword ptr [ESP + 0x10]      ; 005be679
    MOV ESI,dword ptr [ESP + 0x10]      ; 005be67d
    SUB EAX,0x4                         ; 005be681
    CMP EAX,ESI                         ; 005be684
    JBE 0x005be68e                      ; 005be686
        ;   XREF to: 005be68e (CONDITIONAL_JUMP)  ; LAB_005be68e
    XOR EAX,EAX                         ; 005be688
    POP EDI                             ; 005be68a
    POP ESI                             ; 005be68b
    POP EBX                             ; 005be68c
    RET                                 ; 005be68d
    MOV dword ptr [ESP + 0x10],EAX      ; 005be68e
        ;   Label: LAB_005be68e
    CMP EAX,0x38                        ; 005be692
    JNC 0x005be69d                      ; 005be695
        ;   XREF to: 005be69d (CONDITIONAL_JUMP)  ; LAB_005be69d
    XOR EAX,EAX                         ; 005be697
    POP EDI                             ; 005be699
    POP ESI                             ; 005be69a
    POP EBX                             ; 005be69b
    RET                                 ; 005be69c
    PUSH EBX                            ; 005be69d
        ;   Label: LAB_005be69d
    MOV dword ptr [EBX],EAX             ; 005be69e
    CALL crt_unknown.c_FUN_005be5b0     ; 005be6a0
        ;   XREF to: 005be5b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be5b0()
    MOV EDX,EAX                         ; 005be6a5
    ADD ESP,0x4                         ; 005be6a7
    MOV EAX,dword ptr [EAX]             ; 005be6aa
    MOV dword ptr [ESP + 0x10],EAX      ; 005be6ac
    OR AL,0x1                           ; 005be6b0
    MOV dword ptr [EDX],EAX             ; 005be6b2
    ADD EDX,0x4                         ; 005be6b4
    MOV EDI,dword ptr [EBX + 0x18]      ; 005be6b7
    MOV dword ptr [EBX + 0x14],0x0      ; 005be6ba
    INC EDI                             ; 005be6c1
    PUSH EDX                            ; 005be6c2
    MOV dword ptr [EBX + 0x18],EDI      ; 005be6c3
    CALL crt_unknown.c_FUN_005b86b0     ; 005be6c6
        ;   XREF to: 005b86b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86b0()
    MOV EAX,0x1                         ; 005be6cb
    ADD ESP,0x4                         ; 005be6d0
    POP EDI                             ; 005be6d3
        ;   Label: LAB_005be6d3
    POP ESI                             ; 005be6d4
    POP EBX                             ; 005be6d5
    RET                                 ; 005be6d6

