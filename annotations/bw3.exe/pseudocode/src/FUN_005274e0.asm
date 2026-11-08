; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005274e0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005e36e4 = 005275c0
;   undefined4 DAT_005e3830
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_004fa8c0
;   FUN_0050ad40
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005274e0
        ;   Label: FUN_005274e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005274e1
    TEST byte ptr [ESP + 0xc],0x4       ; 005274e5
    JNZ 0x0052758b                      ; 005274ea
        ;   XREF to: 0052758b (CONDITIONAL_JUMP)  ; LAB_0052758b
    MOV EDX,dword ptr [EBX + 0x20810]   ; 005274f0
    MOV dword ptr [EBX + 0x154],0x5e36e4 ; 005274f6 | PTR_FUN_005e36e4
    TEST EDX,EDX                        ; 00527500
    JZ 0x0052751a                       ; 00527502
        ;   XREF to: 0052751a (CONDITIONAL_JUMP)  ; LAB_0052751a
    MOV EAX,EDX                         ; 00527504
    JZ 0x0052751a                       ; 00527506
        ;   XREF to: 0052751a (CONDITIONAL_JUMP)  ; LAB_0052751a
    PUSH 0x2                            ; 00527508
    MOV EDX,dword ptr [EDX + 0x154]     ; 0052750a
    PUSH EAX                            ; 00527510
    CALL dword ptr [EDX + 0xd0]         ; 00527511
    ADD ESP,0x8                         ; 00527517
    PUSH 0x0                            ; 0052751a
        ;   Label: LAB_0052751a
    ADD EBX,0x20814                     ; 0052751c
    PUSH EBX                            ; 00527522
    CALL FUN_004fa8c0                   ; 00527523
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa8c0()
    ADD ESP,0x8                         ; 00527528
    PUSH 0x0                            ; 0052752b
    SUB EAX,0x13a48                     ; 0052752d
    PUSH EAX                            ; 00527532
    CALL FUN_0050ad40                   ; 00527533
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ad40()
    ADD ESP,0x8                         ; 00527538
    PUSH 0x0                            ; 0052753b
    SUB EAX,0x9570                      ; 0052753d
    PUSH EAX                            ; 00527542
    CALL FUN_00410370                   ; 00527543
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 00527548
    PUSH 0x0                            ; 0052754b
    SUB EAX,0x954                       ; 0052754d
    PUSH EAX                            ; 00527552
    CALL FUN_0043f900                   ; 00527553
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 00527558
    PUSH 0x0                            ; 0052755b
    SUB EAX,0x2db0                      ; 0052755d
    PUSH EAX                            ; 00527562
    CALL FUN_0054bf80                   ; 00527563
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 00527568
    PUSH 0x1                            ; 0052756b
    LEA EBX,[EAX + 0xfffffea8]          ; 0052756d
    PUSH EBX                            ; 00527573
    CALL FUN_00408770                   ; 00527574
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00527579
    MOV DL,byte ptr [ESP + 0xc]         ; 0052757c
    MOV EBX,EAX                         ; 00527580
    TEST DL,0x2                         ; 00527582
    JNZ 0x005275a6                      ; 00527585
        ;   XREF to: 005275a6 (CONDITIONAL_JUMP)  ; LAB_005275a6
    MOV EAX,EBX                         ; 00527587
    POP EBX                             ; 00527589
    RET                                 ; 0052758a
    PUSH 0x5e3830                       ; 0052758b | DAT_005e3830
        ;   Label: LAB_0052758b
    PUSH EBX                            ; 00527590
    CALL FUN_005a308f                   ; 00527591
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00527596
    PUSH EAX                            ; 00527599
    CALL FUN_005a30b6                   ; 0052759a
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0052759f
    MOV EAX,EBX                         ; 005275a2
    POP EBX                             ; 005275a4
    RET                                 ; 005275a5
    PUSH EAX                            ; 005275a6
        ;   Label: LAB_005275a6
    CALL FUN_005a30c4                   ; 005275a7
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 005275ac
    MOV EAX,EBX                         ; 005275af
    POP EBX                             ; 005275b1
    RET                                 ; 005275b2

