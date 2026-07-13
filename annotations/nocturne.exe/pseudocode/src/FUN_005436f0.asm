; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005436f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a2ea0
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_00438250
;   FUN_004efdd0
;   FUN_0051b6e0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005436f0
        ;   Label: FUN_005436f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005436f1
    TEST byte ptr [ESP + 0xc],0x4       ; 005436f5
    JNZ 0x00543791                      ; 005436fa
        ;   XREF to: 00543791 (CONDITIONAL_JUMP)  ; LAB_00543791
    PUSH 0x0                            ; 00543700
    ADD EBX,0xbc8c                      ; 00543702
    PUSH EBX                            ; 00543708
    CALL FUN_004efdd0                   ; 00543709
        ;   XREF to: 004efdd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004efdd0()
    ADD ESP,0x8                         ; 0054370e
    PUSH 0x0                            ; 00543711
    SUB EAX,0x88c8                      ; 00543713
    PUSH EAX                            ; 00543718
    CALL FUN_0040fe50                   ; 00543719
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 0054371e
    PUSH 0x0                            ; 00543721
    SUB EAX,0x4b0                       ; 00543723
    PUSH EAX                            ; 00543728
    CALL FUN_0040fe30                   ; 00543729
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 0054372e
    PUSH 0x0                            ; 00543731
    SUB EAX,0x20c                       ; 00543733
    PUSH EAX                            ; 00543738
    CALL FUN_0040fe10                   ; 00543739
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 0054373e
    PUSH 0x0                            ; 00543741
    SUB EAX,0xb4                        ; 00543743
    PUSH EAX                            ; 00543748
    CALL FUN_0040fe10                   ; 00543749
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 0054374e
    PUSH 0x0                            ; 00543751
    SUB EAX,0x1c8                       ; 00543753
    PUSH EAX                            ; 00543758
    CALL FUN_00438250                   ; 00543759
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 0054375e
    PUSH 0x0                            ; 00543761
    SUB EAX,0x293c                      ; 00543763
    PUSH EAX                            ; 00543768
    CALL FUN_0051b6e0                   ; 00543769
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 0054376e
    PUSH 0x1                            ; 00543771
    LEA EBX,[EAX + 0xfffffeb0]          ; 00543773
    PUSH EBX                            ; 00543779
    CALL FUN_00409ea0                   ; 0054377a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 0054377f
    MOV DL,byte ptr [ESP + 0xc]         ; 00543782
    MOV EBX,EAX                         ; 00543786
    TEST DL,0x2                         ; 00543788
    JNZ 0x005437ac                      ; 0054378b
        ;   XREF to: 005437ac (CONDITIONAL_JUMP)  ; LAB_005437ac
    MOV EAX,EBX                         ; 0054378d
    POP EBX                             ; 0054378f
    RET                                 ; 00543790
    PUSH 0x5a2ea0                       ; 00543791 | DAT_005a2ea0
        ;   Label: LAB_00543791
    PUSH EBX                            ; 00543796
    CALL FUN_0056445f                   ; 00543797
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0054379c
    PUSH EAX                            ; 0054379f
    CALL FUN_00564486                   ; 005437a0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 005437a5
    MOV EAX,EBX                         ; 005437a8
    POP EBX                             ; 005437aa
    RET                                 ; 005437ab
    PUSH EAX                            ; 005437ac
        ;   Label: LAB_005437ac
    CALL FUN_00564494                   ; 005437ad
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 005437b2
    MOV EAX,EBX                         ; 005437b5
    POP EBX                             ; 005437b7
    RET                                 ; 005437b8

