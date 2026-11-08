; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005874c0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_00587cd0 at 0058829f
;
; Referenced Globals:
;   undefined4 DAT_01c6e2b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005874c0
        ;   Label: FUN_005874c0
    PUSH ESI                            ; 005874c1
    PUSH EDI                            ; 005874c2
    PUSH EBP                            ; 005874c3
    MOV ECX,dword ptr [ESP + 0x14]      ; 005874c4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005874c8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005874cc
    MOV EBX,dword ptr [EDI + 0x4]       ; 005874d0
    MOV EDX,dword ptr [ECX + 0x8]       ; 005874d3
    MOV EAX,dword ptr [ECX + 0x4]       ; 005874d6
    MOV EBP,dword ptr [EDI + 0x8]       ; 005874d9
    ADD EBX,EDX                         ; 005874dc
    ADD EAX,EBP                         ; 005874de
    SUB EBX,EAX                         ; 005874e0
    MOV EAX,EDX                         ; 005874e2
    MOV EDX,dword ptr [ECX + 0x4]       ; 005874e4
    SUB EAX,EDX                         ; 005874e7
    MOV EDX,EAX                         ; 005874e9
    CMP EDX,EBX                         ; 005874eb
    JGE 0x00587501                      ; 005874ed
        ;   XREF to: 00587501 (CONDITIONAL_JUMP)  ; LAB_00587501
    NEG EBX                             ; 005874ef
    CMP EDX,EBX                         ; 005874f1
    JLE 0x00587508                      ; 005874f3
        ;   XREF to: 00587508 (CONDITIONAL_JUMP)  ; LAB_00587508
    NEG EBX                             ; 005874f5
    XOR EAX,EAX                         ; 005874f7
    SAR EDX,0x1                         ; 005874f9
    RCR EAX,0x1                         ; 005874fb
    IDIV EBX                            ; 005874fd
    JMP 0x0058750f                      ; 005874ff
        ;   XREF to: 0058750f (UNCONDITIONAL_JUMP)  ; LAB_0058750f
    MOV EAX,0x7fffffff                  ; 00587501
        ;   Label: LAB_00587501
    JMP 0x0058750f                      ; 00587506
        ;   XREF to: 0058750f (UNCONDITIONAL_JUMP)  ; LAB_0058750f
    NEG EBX                             ; 00587508
        ;   Label: LAB_00587508
    MOV EAX,0x80000000                  ; 0058750a
    MOV EBX,EAX                         ; 0058750f
        ;   Label: LAB_0058750f
    MOV EBP,dword ptr [ECX + 0x8]       ; 00587511
    MOV EAX,dword ptr [EDI + 0x8]       ; 00587514
    MOV EDX,EBX                         ; 00587517
    SUB EAX,EBP                         ; 00587519
    IMUL EDX                            ; 0058751b
    ADD EAX,EAX                         ; 0058751d
    ADC EDX,EDX                         ; 0058751f
    MOV EAX,EDX                         ; 00587521
    MOV EDX,dword ptr [ECX + 0x8]       ; 00587523
    ADD EAX,EDX                         ; 00587526
    MOV dword ptr [ESI + 0x8],EAX       ; 00587528
    MOV dword ptr [ESI + 0x4],EAX       ; 0058752b
    MOV EAX,dword ptr [EDI]             ; 0058752e
    SUB EAX,dword ptr [ECX]             ; 00587530
    MOV EDX,EBX                         ; 00587532
    IMUL EDX                            ; 00587534
    ADD EAX,EAX                         ; 00587536
    ADC EDX,EDX                         ; 00587538
    MOV EAX,EDX                         ; 0058753a
    MOV EDX,dword ptr [ECX]             ; 0058753c
    ADD EAX,EDX                         ; 0058753e
    MOV dword ptr [ESI],EAX             ; 00587540
    MOV AH,byte ptr [0x01c6e2b4]        ; 00587542 | DAT_01c6e2b4
    MOV dword ptr [ESI + 0x10],0xffffffff ; 00587548
    TEST AH,0x4                         ; 0058754f
    JNZ 0x00587559                      ; 00587552
        ;   XREF to: 00587559 (CONDITIONAL_JUMP)  ; LAB_00587559
    POP EBP                             ; 00587554
    POP EDI                             ; 00587555
    POP ESI                             ; 00587556
    POP EBX                             ; 00587557
    RET                                 ; 00587558
    MOV EAX,dword ptr [EDI + 0x20]      ; 00587559
        ;   Label: LAB_00587559
    MOV EDI,dword ptr [ECX + 0x20]      ; 0058755c
    MOV EDX,EBX                         ; 0058755f
    SUB EAX,EDI                         ; 00587561
    IMUL EDX                            ; 00587563
    ADD EAX,EAX                         ; 00587565
    ADC EDX,EDX                         ; 00587567
    MOV EAX,EDX                         ; 00587569
    MOV EDX,dword ptr [ECX + 0x20]      ; 0058756b
    ADD EAX,EDX                         ; 0058756e
    MOV dword ptr [ESI + 0x20],EAX      ; 00587570
    POP EBP                             ; 00587573
    POP EDI                             ; 00587574
    POP ESI                             ; 00587575
    POP EBX                             ; 00587576
    RET                                 ; 00587577

