; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00438390(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f4810
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438390
        ;   Label: FUN_00438390
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438391
    TEST byte ptr [ESP + 0xc],0x4       ; 00438395
    JNZ 0x004383fd                      ; 0043839a
        ;   XREF to: 004383fd (CONDITIONAL_JUMP)  ; LAB_004383fd
    PUSH 0x0                            ; 0043839c
    ADD EBX,0x3a20                      ; 0043839e
    PUSH EBX                            ; 004383a4
    CALL FUN_0040f2b0                   ; 004383a5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 004383aa
    PUSH 0x0                            ; 004383ad
    SUB EAX,0x9c8                       ; 004383af
    PUSH EAX                            ; 004383b4
    CALL FUN_0059df70                   ; 004383b5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 004383ba
    PUSH 0x0                            ; 004383bd
    SUB EAX,0x34c                       ; 004383bf
    PUSH EAX                            ; 004383c4
    CALL FUN_005b1480                   ; 004383c5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 004383ca
    PUSH 0x0                            ; 004383cd
    SUB EAX,0x2a58                      ; 004383cf
    PUSH EAX                            ; 004383d4
    CALL FUN_00544d50                   ; 004383d5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 004383da
    PUSH 0x1                            ; 004383dd
    LEA EBX,[EAX + 0xfffffd4c]          ; 004383df
    PUSH EBX                            ; 004383e5
    CALL FUN_00408930                   ; 004383e6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004383eb
    MOV DL,byte ptr [ESP + 0xc]         ; 004383ee
    MOV EBX,EAX                         ; 004383f2
    TEST DL,0x2                         ; 004383f4
    JNZ 0x00438418                      ; 004383f7
        ;   XREF to: 00438418 (CONDITIONAL_JUMP)  ; LAB_00438418
    MOV EAX,EBX                         ; 004383f9
    POP EBX                             ; 004383fb
    RET                                 ; 004383fc
    PUSH 0x5f4810                       ; 004383fd | DAT_005f4810
        ;   Label: LAB_004383fd
    PUSH EBX                            ; 00438402
    CALL FUN_005b7fa7                   ; 00438403
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00438408
    PUSH EAX                            ; 0043840b
    CALL FUN_005b7fce                   ; 0043840c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00438411
    MOV EAX,EBX                         ; 00438414
    POP EBX                             ; 00438416
    RET                                 ; 00438417
    PUSH EAX                            ; 00438418
        ;   Label: LAB_00438418
    CALL FUN_005b7fdc                   ; 00438419
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0043841e
    MOV EAX,EBX                         ; 00438421
    POP EBX                             ; 00438423
    RET                                 ; 00438424

