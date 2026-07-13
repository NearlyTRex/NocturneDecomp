; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_10007420(uint param_1,FILE *param_2)
;
;
; XREF[2]:
;   _sprintf at 10005688
;   write_char at 10006946
;
; Referenced Globals:
;   undefined4 DAT_10016db0
;   undefined1 DAT_10016db4
;   undefined4 DAT_100170a8
;   undefined4 DAT_100170c8
;   undefined4 DAT_10241870
;
; Called Functions:
;   __getbuf
;   __write
;   FUN_100091b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10007420
        ;   Label: FUN_10007420
    PUSH ESI                            ; 10007421
    MOV ESI,dword ptr [ESP + 0x10]      ; 10007422
    PUSH EDI                            ; 10007426
    PUSH EBP                            ; 10007427
    MOV EDI,dword ptr [ESI + 0x10]      ; 10007428
    MOV EAX,dword ptr [ESI + 0xc]       ; 1000742b
    TEST AL,0x82                        ; 1000742e
    JZ 0x1000755d                       ; 10007430
        ;   XREF to: 1000755d (CONDITIONAL_JUMP)  ; LAB_1000755d
    TEST AL,0x40                        ; 10007436
    JNZ 0x1000755d                      ; 10007438
        ;   XREF to: 1000755d (CONDITIONAL_JUMP)  ; LAB_1000755d
    TEST AL,0x1                         ; 1000743e
    JZ 0x1000745d                       ; 10007440
        ;   XREF to: 1000745d (CONDITIONAL_JUMP)  ; LAB_1000745d
    MOV dword ptr [ESI + 0x4],0x0       ; 10007442
    MOV EAX,dword ptr [ESI + 0xc]       ; 10007449
    TEST AL,0x10                        ; 1000744c
    JZ 0x100074d4                       ; 1000744e
        ;   XREF to: 100074d4 (CONDITIONAL_JUMP)  ; LAB_100074d4
    MOV EAX,dword ptr [ESI + 0x8]       ; 10007454
    MOV dword ptr [ESI],EAX             ; 10007457
    AND dword ptr [ESI + 0xc],0xfffffffe ; 10007459
    MOV EAX,dword ptr [ESI + 0xc]       ; 1000745d
        ;   Label: LAB_1000745d
    XOR EBP,EBP                         ; 10007460
    OR EAX,0x2                          ; 10007462
    MOV dword ptr [ESI + 0xc],EAX       ; 10007465
    AND EAX,0xffffffef                  ; 10007468
    MOV dword ptr [ESI + 0xc],EAX       ; 1000746b
    MOV dword ptr [ESI + 0x4],0x0       ; 1000746e
    TEST dword ptr [ESI + 0xc],0x10c    ; 10007475
    JNZ 0x100074a4                      ; 1000747c
        ;   XREF to: 100074a4 (CONDITIONAL_JUMP)  ; LAB_100074a4
    CMP ESI,0x100170a8                  ; 1000747e | DAT_100170a8
    JZ 0x1000748e                       ; 10007484
        ;   XREF to: 1000748e (CONDITIONAL_JUMP)  ; LAB_1000748e
    CMP ESI,0x100170c8                  ; 10007486 | DAT_100170c8
    JNZ 0x1000749b                      ; 1000748c
        ;   XREF to: 1000749b (CONDITIONAL_JUMP)  ; LAB_1000749b
    PUSH EDI                            ; 1000748e
        ;   Label: LAB_1000748e
    CALL FUN_100091b0                   ; 1000748f
        ;   XREF to: 100091b0 (UNCONDITIONAL_CALL)  ; undefined FUN_100091b0()
    ADD ESP,0x4                         ; 10007494
    TEST EAX,EAX                        ; 10007497
    JNZ 0x100074a4                      ; 10007499
        ;   XREF to: 100074a4 (CONDITIONAL_JUMP)  ; LAB_100074a4
    PUSH ESI                            ; 1000749b
        ;   Label: LAB_1000749b
    CALL __getbuf                       ; 1000749c
        ;   XREF to: 1000a700 (UNCONDITIONAL_CALL)  ; void __getbuf(FILE * _File)
    ADD ESP,0x4                         ; 100074a1
    TEST dword ptr [ESI + 0xc],0x108    ; 100074a4
        ;   Label: LAB_100074a4
    JZ 0x10007527                       ; 100074ab
        ;   XREF to: 10007527 (CONDITIONAL_JUMP)  ; LAB_10007527
    MOV EAX,dword ptr [ESI + 0x8]       ; 100074ad
    MOV EBX,dword ptr [ESI]             ; 100074b0
    SUB EBX,EAX                         ; 100074b2
    INC EAX                             ; 100074b4
    MOV dword ptr [ESI],EAX             ; 100074b5
    MOV EAX,dword ptr [ESI + 0x18]      ; 100074b7
    DEC EAX                             ; 100074ba
    TEST EBX,EBX                        ; 100074bb
    MOV dword ptr [ESI + 0x4],EAX       ; 100074bd
    JLE 0x100074e4                      ; 100074c0
        ;   XREF to: 100074e4 (CONDITIONAL_JUMP)  ; LAB_100074e4
    PUSH EBX                            ; 100074c2
    MOV EAX,dword ptr [ESI + 0x8]       ; 100074c3
    PUSH EAX                            ; 100074c6
    PUSH EDI                            ; 100074c7
    CALL __write                        ; 100074c8
        ;   XREF to: 10008f30 (UNCONDITIONAL_CALL)  ; int __write(int _FileHandle, void * _Buf, uint _MaxCharCount)
    ADD ESP,0xc                         ; 100074cd
    MOV EBP,EAX                         ; 100074d0
    JMP 0x1000751c                      ; 100074d2
        ;   XREF to: 1000751c (UNCONDITIONAL_JUMP)  ; LAB_1000751c
    OR EAX,0x20                         ; 100074d4
        ;   Label: LAB_100074d4
    POP EBP                             ; 100074d7
    POP EDI                             ; 100074d8
    MOV dword ptr [ESI + 0xc],EAX       ; 100074d9
    MOV EAX,0xffffffff                  ; 100074dc
    POP ESI                             ; 100074e1
    POP EBX                             ; 100074e2
    RET                                 ; 100074e3
    MOV EAX,0x10016db0                  ; 100074e4 | DAT_10016db0
        ;   Label: LAB_100074e4
    CMP EDI,-0x1                        ; 100074e9
    JZ 0x10007509                       ; 100074ec
        ;   XREF to: 10007509 (CONDITIONAL_JUMP)  ; LAB_10007509
    MOV EAX,EDI                         ; 100074ee
    MOV ECX,EDI                         ; 100074f0
    AND EAX,0xffffffe7                  ; 100074f2
    AND ECX,0x1f                        ; 100074f5
    SAR EAX,0x3                         ; 100074f8
    SHL ECX,0x2                         ; 100074fb
    MOV EAX,dword ptr [EAX + 0x10241870] ; 100074fe | DAT_10241870
    LEA EDX,[ECX + ECX*0x8]             ; 10007504
    ADD EAX,EDX                         ; 10007507
    TEST byte ptr [EAX + 0x4],0x20      ; 10007509 | DAT_10016db4
        ;   Label: LAB_10007509
    JZ 0x1000751c                       ; 1000750d
        ;   XREF to: 1000751c (CONDITIONAL_JUMP)  ; LAB_1000751c
    PUSH 0x2                            ; 1000750f
    PUSH 0x0                            ; 10007511
    PUSH EDI                            ; 10007513
    CALL __write                        ; 10007514
        ;   XREF to: 1000a5f0 (UNCONDITIONAL_CALL)  ; int __write(int _FileHandle, void * _Buf, uint _MaxCharCount)
    ADD ESP,0xc                         ; 10007519
    MOV AL,byte ptr [ESP + 0x14]        ; 1000751c
        ;   Label: LAB_1000751c
    MOV ECX,dword ptr [ESI + 0x8]       ; 10007520
    MOV byte ptr [ECX],AL               ; 10007523
    JMP 0x1000753d                      ; 10007525
        ;   XREF to: 1000753d (UNCONDITIONAL_JUMP)  ; LAB_1000753d
    MOV EBX,0x1                         ; 10007527
        ;   Label: LAB_10007527
    LEA EAX,[ESP + 0x14]                ; 1000752c
    PUSH EBX                            ; 10007530
    PUSH EAX                            ; 10007531
    PUSH EDI                            ; 10007532
    CALL __write                        ; 10007533
        ;   XREF to: 10008f30 (UNCONDITIONAL_CALL)  ; int __write(int _FileHandle, void * _Buf, uint _MaxCharCount)
    ADD ESP,0xc                         ; 10007538
    MOV EBP,EAX                         ; 1000753b
    CMP EBP,EBX                         ; 1000753d
        ;   Label: LAB_1000753d
    JZ 0x1000754f                       ; 1000753f
        ;   XREF to: 1000754f (CONDITIONAL_JUMP)  ; LAB_1000754f
    MOV EAX,0xffffffff                  ; 10007541
    POP EBP                             ; 10007546
    OR dword ptr [ESI + 0xc],0x20       ; 10007547
    POP EDI                             ; 1000754b
    POP ESI                             ; 1000754c
    POP EBX                             ; 1000754d
    RET                                 ; 1000754e
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000754f
        ;   Label: LAB_1000754f
    POP EBP                             ; 10007553
    AND EAX,0xff                        ; 10007554
    POP EDI                             ; 10007559
    POP ESI                             ; 1000755a
    POP EBX                             ; 1000755b
    RET                                 ; 1000755c
    OR EAX,0x20                         ; 1000755d
        ;   Label: LAB_1000755d
    POP EBP                             ; 10007560
    POP EDI                             ; 10007561
    MOV dword ptr [ESI + 0xc],EAX       ; 10007562
    MOV EAX,0xffffffff                  ; 10007565
    POP ESI                             ; 1000756a
    POP EBX                             ; 1000756b
    RET                                 ; 1000756c

