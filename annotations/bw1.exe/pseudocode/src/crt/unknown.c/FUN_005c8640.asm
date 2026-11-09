; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c8640(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c871c at 005c87d3
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005c6e80
;   crt_unknown.c_FUN_005c871c
;   crt_unknown.c_FUN_005c8ae0
;   crt_unknown.c_FUN_005c8b38
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8640
        ;   Label: crt_unknown.c_FUN_005c8640
    PUSH ESI                            ; 005c8641
    PUSH EDI                            ; 005c8642
    SUB ESP,0x200                       ; 005c8643
    MOV EDI,dword ptr [ESP + 0x210]     ; 005c8649
    PUSH 0x1                            ; 005c8650
    PUSH 0x0                            ; 005c8652
    PUSH EDI                            ; 005c8654
    CALL crt_unknown.c_FUN_005c6e80     ; 005c8655
        ;   XREF to: 005c6e80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6e80()
    MOV EBX,EAX                         ; 005c865a
    ADD ESP,0xc                         ; 005c865c
    CMP EAX,-0x1                        ; 005c865f
    JZ 0x005c870f                       ; 005c8662
        ;   XREF to: 005c870f (CONDITIONAL_JUMP)  ; LAB_005c870f
    PUSH 0x2                            ; 005c8668
    PUSH 0x0                            ; 005c866a
    PUSH EDI                            ; 005c866c
    CALL crt_unknown.c_FUN_005c6e80     ; 005c866d
        ;   XREF to: 005c6e80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6e80()
    ADD ESP,0xc                         ; 005c8672
    CMP EAX,-0x1                        ; 005c8675
    JZ 0x005c870f                       ; 005c8678
        ;   XREF to: 005c870f (CONDITIONAL_JUMP)  ; LAB_005c870f
    CMP EBX,EAX                         ; 005c867e
    JLE 0x005c86e0                      ; 005c8680
        ;   XREF to: 005c86e0 (CONDITIONAL_JUMP)  ; LAB_005c86e0
    PUSH EDI                            ; 005c8682
    SUB EBX,EAX                         ; 005c8683
    CALL crt_unknown.c_FUN_005c8ae0     ; 005c8685
        ;   XREF to: 005c8ae0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8ae0()
    ADD ESP,0x4                         ; 005c868a
    AND AH,0x7f                         ; 005c868d
    PUSH EAX                            ; 005c8690
    PUSH EDI                            ; 005c8691
    CALL crt_unknown.c_FUN_005c8b38     ; 005c8692
        ;   XREF to: 005c8b38 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8b38()
    ADD ESP,0x8                         ; 005c8697
    TEST EBX,EBX                        ; 005c869a
    JLE 0x005c870d                      ; 005c869c
        ;   XREF to: 005c870d (CONDITIONAL_JUMP)  ; LAB_005c870d
    PUSH 0x200                          ; 005c86a2
    PUSH 0x0                            ; 005c86a7
    LEA EAX,[ESP + 0x8]                 ; 005c86a9
    PUSH EAX                            ; 005c86ad
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005c86ae
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005c86b3
    CMP EBX,0x200                       ; 005c86b6
        ;   Label: LAB_005c86b6
    JLE 0x005c86c5                      ; 005c86bc
        ;   XREF to: 005c86c5 (CONDITIONAL_JUMP)  ; LAB_005c86c5
    MOV ESI,0x200                       ; 005c86be
    JMP 0x005c86c7                      ; 005c86c3
        ;   XREF to: 005c86c7 (UNCONDITIONAL_JUMP)  ; LAB_005c86c7
    MOV ESI,EBX                         ; 005c86c5
        ;   Label: LAB_005c86c5
    PUSH ESI                            ; 005c86c7
        ;   Label: LAB_005c86c7
    LEA EAX,[ESP + 0x4]                 ; 005c86c8
    PUSH EAX                            ; 005c86cc
    PUSH EDI                            ; 005c86cd
    CALL crt_unknown.c_FUN_005c871c     ; 005c86ce
        ;   XREF to: 005c871c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c871c()
    ADD ESP,0xc                         ; 005c86d3
    TEST EAX,EAX                        ; 005c86d6
    JL 0x005c870f                       ; 005c86d8
        ;   XREF to: 005c870f (CONDITIONAL_JUMP)  ; LAB_005c870f
    SUB EBX,ESI                         ; 005c86da
    JNZ 0x005c86b6                      ; 005c86dc
        ;   XREF to: 005c86b6 (CONDITIONAL_JUMP)  ; LAB_005c86b6
    JMP 0x005c870d                      ; 005c86de
        ;   XREF to: 005c870d (UNCONDITIONAL_JUMP)  ; LAB_005c870d
    PUSH 0x0                            ; 005c86e0
        ;   Label: LAB_005c86e0
    PUSH EBX                            ; 005c86e2
    PUSH EDI                            ; 005c86e3
    CALL crt_unknown.c_FUN_005c6e80     ; 005c86e4
        ;   XREF to: 005c6e80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6e80()
    ADD ESP,0xc                         ; 005c86e9
    PUSH EDI                            ; 005c86ec
    MOV EBX,EAX                         ; 005c86ed
    CALL crt_unknown.c_FUN_005c8ae0     ; 005c86ef
        ;   XREF to: 005c8ae0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8ae0()
    ADD ESP,0x4                         ; 005c86f4
    AND AH,0x7f                         ; 005c86f7
    PUSH EAX                            ; 005c86fa
    PUSH EDI                            ; 005c86fb
    CALL crt_unknown.c_FUN_005c8b38     ; 005c86fc
        ;   XREF to: 005c8b38 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8b38()
    ADD ESP,0x8                         ; 005c8701
    CMP EBX,-0x1                        ; 005c8704
    JNZ 0x005c870d                      ; 005c8707
        ;   XREF to: 005c870d (CONDITIONAL_JUMP)  ; LAB_005c870d
    MOV EAX,EBX                         ; 005c8709
    JMP 0x005c870f                      ; 005c870b
        ;   XREF to: 005c870f (UNCONDITIONAL_JUMP)  ; LAB_005c870f
    XOR EAX,EAX                         ; 005c870d
        ;   Label: LAB_005c870d
    ADD ESP,0x200                       ; 005c870f
        ;   Label: LAB_005c870f
    POP EDI                             ; 005c8715
    POP ESI                             ; 005c8716
    POP EBX                             ; 005c8717
    RET                                 ; 005c8718

