; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00434570(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00434810 at 0043486f
;   FUN_00434910 at 0043492b
;
; Called Functions:
;   FUN_004338f0
;   FUN_00433a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434570
        ;   Label: FUN_00434570
    PUSH ESI                            ; 00434571
    PUSH EDI                            ; 00434572
    PUSH EBP                            ; 00434573
    MOV EBP,ESP                         ; 00434574
    SUB ESP,0x4                         ; 00434576
    MOV ESI,dword ptr [EBP + 0x14]      ; 00434579
    MOV EDI,dword ptr [EBP + 0x20]      ; 0043457c
    PUSH EDI                            ; 0043457f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00434580
    PUSH EDX                            ; 00434583
    CALL FUN_00433a90                   ; 00434584
        ;   XREF to: 00433a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00433a90()
    ADD ESP,0x8                         ; 00434589
    TEST EAX,EAX                        ; 0043458c
    JL 0x004345bf                       ; 0043458e
        ;   XREF to: 004345bf (CONDITIONAL_JUMP)  ; LAB_004345bf
    MOV EBX,0x1                         ; 00434590
    MOV ECX,dword ptr [ESI + 0x8]       ; 00434595
    MOV EAX,dword ptr [ESI + 0xc]       ; 00434598
    DEC ECX                             ; 0043459b
    DEC EAX                             ; 0043459c
    XOR ESI,ESI                         ; 0043459d
    SHL EBX,CL                          ; 0043459f
    MOV dword ptr [EBP + -0x4],EAX      ; 004345a1
    TEST EBX,EBX                        ; 004345a4
    JZ 0x004345b2                       ; 004345a6
        ;   XREF to: 004345b2 (CONDITIONAL_JUMP)  ; LAB_004345b2
    TEST dword ptr [EBP + -0x4],EBX     ; 004345a8
        ;   Label: LAB_004345a8
    JZ 0x004345e0                       ; 004345ab
        ;   XREF to: 004345e0 (CONDITIONAL_JUMP)  ; LAB_004345e0
    TEST dword ptr [EBP + 0x18],EBX     ; 004345ad
    JNZ 0x004345cb                      ; 004345b0
        ;   XREF to: 004345cb (CONDITIONAL_JUMP)  ; LAB_004345cb
    TEST EBX,EBX                        ; 004345b2
        ;   Label: LAB_004345b2
    JNZ 0x004345fc                      ; 004345b4
        ;   XREF to: 004345fc (CONDITIONAL_JUMP)  ; LAB_004345fc
    MOV EAX,ESI                         ; 004345b6
    MOV ESP,EBP                         ; 004345b8
        ;   Label: LAB_004345b8
    POP EBP                             ; 004345ba
    POP EDI                             ; 004345bb
    POP ESI                             ; 004345bc
    POP EBX                             ; 004345bd
    RET                                 ; 004345be
    CMP EAX,-0x1                        ; 004345bf
        ;   Label: LAB_004345bf
    JZ 0x004345b8                       ; 004345c2
        ;   XREF to: 004345b8 (CONDITIONAL_JUMP)  ; LAB_004345b8
    MOV EAX,0xfffffffd                  ; 004345c4
        ;   Label: LAB_004345c4
    JMP 0x004345b8                      ; 004345c9
        ;   XREF to: 004345b8 (UNCONDITIONAL_JUMP)  ; LAB_004345b8
    PUSH EDI                            ; 004345cb
        ;   Label: LAB_004345cb
    PUSH 0x1                            ; 004345cc
    PUSH 0x1                            ; 004345ce
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004345d0
    PUSH EDX                            ; 004345d3
    CALL FUN_004338f0                   ; 004345d4
        ;   XREF to: 004338f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004338f0()
    ADD ESP,0x10                        ; 004345d9
    TEST EAX,EAX                        ; 004345dc
    JL 0x004345f3                       ; 004345de
        ;   XREF to: 004345f3 (CONDITIONAL_JUMP)  ; LAB_004345f3
    SAR EBX,0x1                         ; 004345e0
        ;   Label: LAB_004345e0
    TEST EBX,EBX                        ; 004345e2
    JNZ 0x004345a8                      ; 004345e4
        ;   XREF to: 004345a8 (CONDITIONAL_JUMP)  ; LAB_004345a8
    TEST EBX,EBX                        ; 004345e6
    JNZ 0x004345fc                      ; 004345e8
        ;   XREF to: 004345fc (CONDITIONAL_JUMP)  ; LAB_004345fc
    MOV EAX,ESI                         ; 004345ea
    MOV ESP,EBP                         ; 004345ec
    POP EBP                             ; 004345ee
    POP EDI                             ; 004345ef
    POP ESI                             ; 004345f0
    POP EBX                             ; 004345f1
    RET                                 ; 004345f2
    CMP EAX,-0x2                        ; 004345f3
        ;   Label: LAB_004345f3
    JNZ 0x004345c4                      ; 004345f6
        ;   XREF to: 004345c4 (CONDITIONAL_JUMP)  ; LAB_004345c4
    MOV ESI,EAX                         ; 004345f8
    JMP 0x004345e0                      ; 004345fa
        ;   XREF to: 004345e0 (UNCONDITIONAL_JUMP)  ; LAB_004345e0
    MOV ECX,dword ptr [EBP + 0x18]      ; 004345fc
        ;   Label: LAB_004345fc
    PUSH EDI                            ; 004345ff
    TEST EBX,ECX                        ; 00434600
    SETNZ AL                            ; 00434602
    AND EAX,0xff                        ; 00434605
    PUSH EAX                            ; 0043460a
    PUSH 0x1                            ; 0043460b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0043460d
    PUSH EAX                            ; 00434610
    CALL FUN_004338f0                   ; 00434611
        ;   XREF to: 004338f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004338f0()
    ADD ESP,0x10                        ; 00434616
    TEST EAX,EAX                        ; 00434619
    JL 0x0043462c                       ; 0043461b
        ;   XREF to: 0043462c (CONDITIONAL_JUMP)  ; LAB_0043462c
    SAR EBX,0x1                         ; 0043461d
    TEST EBX,EBX                        ; 0043461f
    JNZ 0x004345fc                      ; 00434621
        ;   XREF to: 004345fc (CONDITIONAL_JUMP)  ; LAB_004345fc
    MOV EAX,ESI                         ; 00434623
    MOV ESP,EBP                         ; 00434625
    POP EBP                             ; 00434627
    POP EDI                             ; 00434628
    POP ESI                             ; 00434629
    POP EBX                             ; 0043462a
    RET                                 ; 0043462b
    CMP EAX,-0x2                        ; 0043462c
        ;   Label: LAB_0043462c
    JNZ 0x004345c4                      ; 0043462f
        ;   XREF to: 004345c4 (CONDITIONAL_JUMP)  ; LAB_004345c4
    MOV ESI,EAX                         ; 00434631
    SAR EBX,0x1                         ; 00434633
    TEST EBX,EBX                        ; 00434635
    JNZ 0x004345fc                      ; 00434637
        ;   XREF to: 004345fc (CONDITIONAL_JUMP)  ; LAB_004345fc
    MOV EAX,ESI                         ; 00434639
    MOV ESP,EBP                         ; 0043463b
    POP EBP                             ; 0043463d
    POP EDI                             ; 0043463e
    POP ESI                             ; 0043463f
    POP EBX                             ; 00434640
    RET                                 ; 00434641

