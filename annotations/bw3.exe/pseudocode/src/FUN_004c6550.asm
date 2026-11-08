; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c6550(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e08d0
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6550
        ;   Label: FUN_004c6550
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c6551
    TEST byte ptr [ESP + 0xc],0x4       ; 004c6555
    JNZ 0x004c65ad                      ; 004c655a
        ;   XREF to: 004c65ad (CONDITIONAL_JUMP)  ; LAB_004c65ad
    PUSH 0x0                            ; 004c655c
    ADD EBX,0x385c                      ; 004c655e
    PUSH EBX                            ; 004c6564
    CALL FUN_00410370                   ; 004c6565
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 004c656a
    PUSH 0x0                            ; 004c656d
    SUB EAX,0x954                       ; 004c656f
    PUSH EAX                            ; 004c6574
    CALL FUN_0043f900                   ; 004c6575
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 004c657a
    PUSH 0x0                            ; 004c657d
    SUB EAX,0x2db0                      ; 004c657f
    PUSH EAX                            ; 004c6584
    CALL FUN_0054bf80                   ; 004c6585
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 004c658a
    PUSH 0x1                            ; 004c658d
    LEA EBX,[EAX + 0xfffffea8]          ; 004c658f
    PUSH EBX                            ; 004c6595
    CALL FUN_00408770                   ; 004c6596
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004c659b
    MOV DL,byte ptr [ESP + 0xc]         ; 004c659e
    MOV EBX,EAX                         ; 004c65a2
    TEST DL,0x2                         ; 004c65a4
    JNZ 0x004c65c8                      ; 004c65a7
        ;   XREF to: 004c65c8 (CONDITIONAL_JUMP)  ; LAB_004c65c8
    MOV EAX,EBX                         ; 004c65a9
    POP EBX                             ; 004c65ab
    RET                                 ; 004c65ac
    PUSH 0x5e08d0                       ; 004c65ad | DAT_005e08d0
        ;   Label: LAB_004c65ad
    PUSH EBX                            ; 004c65b2
    CALL FUN_005a308f                   ; 004c65b3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004c65b8
    PUSH EAX                            ; 004c65bb
    CALL FUN_005a30b6                   ; 004c65bc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004c65c1
    MOV EAX,EBX                         ; 004c65c4
    POP EBX                             ; 004c65c6
    RET                                 ; 004c65c7
    PUSH EAX                            ; 004c65c8
        ;   Label: LAB_004c65c8
    CALL FUN_005a30c4                   ; 004c65c9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004c65ce
    MOV EAX,EBX                         ; 004c65d1
    POP EBX                             ; 004c65d3
    RET                                 ; 004c65d4

