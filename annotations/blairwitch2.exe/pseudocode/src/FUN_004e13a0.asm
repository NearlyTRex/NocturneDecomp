; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e13a0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9430
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

    PUSH EBX                            ; 004e13a0
        ;   Label: FUN_004e13a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e13a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004e13a5
    JNZ 0x004e140d                      ; 004e13aa
        ;   XREF to: 004e140d (CONDITIONAL_JUMP)  ; LAB_004e140d
    PUSH 0x0                            ; 004e13ac
    ADD EBX,0x3a20                      ; 004e13ae
    PUSH EBX                            ; 004e13b4
    CALL FUN_0040f2b0                   ; 004e13b5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 004e13ba
    PUSH 0x0                            ; 004e13bd
    SUB EAX,0x9c8                       ; 004e13bf
    PUSH EAX                            ; 004e13c4
    CALL FUN_0059df70                   ; 004e13c5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 004e13ca
    PUSH 0x0                            ; 004e13cd
    SUB EAX,0x34c                       ; 004e13cf
    PUSH EAX                            ; 004e13d4
    CALL FUN_005b1480                   ; 004e13d5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 004e13da
    PUSH 0x0                            ; 004e13dd
    SUB EAX,0x2a58                      ; 004e13df
    PUSH EAX                            ; 004e13e4
    CALL FUN_00544d50                   ; 004e13e5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 004e13ea
    PUSH 0x1                            ; 004e13ed
    LEA EBX,[EAX + 0xfffffd4c]          ; 004e13ef
    PUSH EBX                            ; 004e13f5
    CALL FUN_00408930                   ; 004e13f6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004e13fb
    MOV DL,byte ptr [ESP + 0xc]         ; 004e13fe
    MOV EBX,EAX                         ; 004e1402
    TEST DL,0x2                         ; 004e1404
    JNZ 0x004e1428                      ; 004e1407
        ;   XREF to: 004e1428 (CONDITIONAL_JUMP)  ; LAB_004e1428
    MOV EAX,EBX                         ; 004e1409
    POP EBX                             ; 004e140b
    RET                                 ; 004e140c
    PUSH 0x5f9430                       ; 004e140d | DAT_005f9430
        ;   Label: LAB_004e140d
    PUSH EBX                            ; 004e1412
    CALL FUN_005b7fa7                   ; 004e1413
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004e1418
    PUSH EAX                            ; 004e141b
    CALL FUN_005b7fce                   ; 004e141c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004e1421
    MOV EAX,EBX                         ; 004e1424
    POP EBX                             ; 004e1426
    RET                                 ; 004e1427
    PUSH EAX                            ; 004e1428
        ;   Label: LAB_004e1428
    CALL FUN_005b7fdc                   ; 004e1429
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004e142e
    MOV EAX,EBX                         ; 004e1431
    POP EBX                             ; 004e1433
    RET                                 ; 004e1434

