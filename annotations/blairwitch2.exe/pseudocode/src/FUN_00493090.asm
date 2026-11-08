; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00493090(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f6440
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493090
        ;   Label: FUN_00493090
    MOV EBX,dword ptr [ESP + 0x8]       ; 00493091
    TEST byte ptr [ESP + 0xc],0x4       ; 00493095
    JNZ 0x004930b6                      ; 0049309a
        ;   XREF to: 004930b6 (CONDITIONAL_JUMP)  ; LAB_004930b6
    PUSH 0x1                            ; 0049309c
    PUSH EBX                            ; 0049309e
    CALL FUN_00408930                   ; 0049309f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004930a4
    MOV DL,byte ptr [ESP + 0xc]         ; 004930a7
    MOV EBX,EAX                         ; 004930ab
    TEST DL,0x2                         ; 004930ad
    JNZ 0x004930d1                      ; 004930b0
        ;   XREF to: 004930d1 (CONDITIONAL_JUMP)  ; LAB_004930d1
    MOV EAX,EBX                         ; 004930b2
    POP EBX                             ; 004930b4
    RET                                 ; 004930b5
    PUSH 0x5f6440                       ; 004930b6 | DAT_005f6440
        ;   Label: LAB_004930b6
    PUSH EBX                            ; 004930bb
    CALL FUN_005b7fa7                   ; 004930bc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004930c1
    PUSH EAX                            ; 004930c4
    CALL FUN_005b7fce                   ; 004930c5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004930ca
    MOV EAX,EBX                         ; 004930cd
    POP EBX                             ; 004930cf
    RET                                 ; 004930d0
    PUSH EAX                            ; 004930d1
        ;   Label: LAB_004930d1
    CALL FUN_005b7fdc                   ; 004930d2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004930d7
    MOV EAX,EBX                         ; 004930da
    POP EBX                             ; 004930dc
    RET                                 ; 004930dd

