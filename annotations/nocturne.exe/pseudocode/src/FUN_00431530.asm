; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00431530(int *param_1,int *param_2,int *param_3)
;
;
; XREF[4]:
;   FUN_00409290 at 004092d1
;   FUN_00409590 at 004095d1
;   FUN_00432cd0 at 004332ae
;   FUN_004610a0 at 00461134
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431530
        ;   Label: FUN_00431530
    PUSH ESI                            ; 00431531
    PUSH EDI                            ; 00431532
    PUSH EBP                            ; 00431533
    MOV ECX,dword ptr [ESP + 0x14]      ; 00431534
    MOV EDI,dword ptr [ESP + 0x18]      ; 00431538
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043153c
    MOV EBX,dword ptr [EDI]             ; 00431540
    MOV EDX,dword ptr [ECX + 0x8]       ; 00431542
    MOV EAX,dword ptr [ECX]             ; 00431545
    MOV EBP,dword ptr [EDI + 0x8]       ; 00431547
    ADD EBX,EDX                         ; 0043154a
    ADD EAX,EBP                         ; 0043154c
    SUB EBX,EAX                         ; 0043154e
    MOV EAX,EDX                         ; 00431550
    MOV EDX,dword ptr [ECX]             ; 00431552
    SUB EAX,EDX                         ; 00431554
    MOV EDX,EAX                         ; 00431556
    CMP EDX,EBX                         ; 00431558
    JGE 0x0043156e                      ; 0043155a
        ;   XREF to: 0043156e (CONDITIONAL_JUMP)  ; LAB_0043156e
    NEG EBX                             ; 0043155c
    CMP EDX,EBX                         ; 0043155e
    JLE 0x00431575                      ; 00431560
        ;   XREF to: 00431575 (CONDITIONAL_JUMP)  ; LAB_00431575
    NEG EBX                             ; 00431562
    XOR EAX,EAX                         ; 00431564
    SAR EDX,0x1                         ; 00431566
    RCR EAX,0x1                         ; 00431568
    IDIV EBX                            ; 0043156a
    JMP 0x0043157c                      ; 0043156c
        ;   XREF to: 0043157c (UNCONDITIONAL_JUMP)  ; LAB_0043157c
    MOV EAX,0x7fffffff                  ; 0043156e
        ;   Label: LAB_0043156e
    JMP 0x0043157c                      ; 00431573
        ;   XREF to: 0043157c (UNCONDITIONAL_JUMP)  ; LAB_0043157c
    NEG EBX                             ; 00431575
        ;   Label: LAB_00431575
    MOV EAX,0x80000000                  ; 00431577
    MOV EBX,EAX                         ; 0043157c
        ;   Label: LAB_0043157c
    MOV EBP,dword ptr [ECX + 0x8]       ; 0043157e
    MOV EAX,dword ptr [EDI + 0x8]       ; 00431581
    MOV EDX,EBX                         ; 00431584
    SUB EAX,EBP                         ; 00431586
    IMUL EDX                            ; 00431588
    ADD EAX,EAX                         ; 0043158a
    ADC EDX,EDX                         ; 0043158c
    MOV EAX,EDX                         ; 0043158e
    MOV EDX,dword ptr [ECX + 0x8]       ; 00431590
    ADD EAX,EDX                         ; 00431593
    MOV dword ptr [ESI + 0x8],EAX       ; 00431595
    MOV dword ptr [ESI],EAX             ; 00431598
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043159a
    SUB EAX,dword ptr [ECX + 0x4]       ; 0043159d
    MOV EDX,EBX                         ; 004315a0
    IMUL EDX                            ; 004315a2
    ADD EAX,EAX                         ; 004315a4
    ADC EDX,EDX                         ; 004315a6
    MOV EAX,EDX                         ; 004315a8
    MOV EDX,dword ptr [ECX + 0x4]       ; 004315aa
    ADD EAX,EDX                         ; 004315ad
    MOV dword ptr [ESI + 0x4],EAX       ; 004315af
    MOV EAX,dword ptr [EDI + 0x18]      ; 004315b2
    MOV EBP,dword ptr [ECX + 0x18]      ; 004315b5
    MOV EDX,EBX                         ; 004315b8
    SUB EAX,EBP                         ; 004315ba
    IMUL EDX                            ; 004315bc
    ADD EAX,EAX                         ; 004315be
    ADC EDX,EDX                         ; 004315c0
    MOV EAX,EDX                         ; 004315c2
    MOV EDX,dword ptr [ECX + 0x18]      ; 004315c4
    ADD EAX,EDX                         ; 004315c7
    MOV dword ptr [ESI + 0x18],EAX      ; 004315c9
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004315cc
    SUB EAX,dword ptr [ECX + 0x1c]      ; 004315cf
    MOV EDX,EBX                         ; 004315d2
    IMUL EDX                            ; 004315d4
    ADD EAX,EAX                         ; 004315d6
    ADC EDX,EDX                         ; 004315d8
    MOV EAX,EDX                         ; 004315da
    MOV EDX,dword ptr [ECX + 0x1c]      ; 004315dc
    ADD EAX,EDX                         ; 004315df
    MOV dword ptr [ESI + 0x1c],EAX      ; 004315e1
    MOV EAX,dword ptr [EDI + 0x20]      ; 004315e4
    MOV EBP,dword ptr [ECX + 0x20]      ; 004315e7
    MOV EDX,EBX                         ; 004315ea
    SUB EAX,EBP                         ; 004315ec
    IMUL EDX                            ; 004315ee
    ADD EAX,EAX                         ; 004315f0
    ADC EDX,EDX                         ; 004315f2
    MOV EAX,EDX                         ; 004315f4
    MOV EDX,dword ptr [ECX + 0x20]      ; 004315f6
    ADD EAX,EDX                         ; 004315f9
    MOV dword ptr [ESI + 0x20],EAX      ; 004315fb
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004315fe
    SUB EAX,dword ptr [ECX + 0x2c]      ; 00431601
    MOV EDX,EBX                         ; 00431604
    IMUL EDX                            ; 00431606
    ADD EAX,EAX                         ; 00431608
    ADC EDX,EDX                         ; 0043160a
    MOV EAX,EDX                         ; 0043160c
    MOV EDX,dword ptr [ECX + 0x2c]      ; 0043160e
    MOV dword ptr [ESI + 0x10],0xffffffff ; 00431611
    ADD EDX,EAX                         ; 00431618
    MOV dword ptr [ESI + 0x2c],EDX      ; 0043161a
    POP EBP                             ; 0043161d
    POP EDI                             ; 0043161e
    POP ESI                             ; 0043161f
    POP EBX                             ; 00431620
    RET                                 ; 00431621

