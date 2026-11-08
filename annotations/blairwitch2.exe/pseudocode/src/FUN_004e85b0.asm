; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e85b0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9c60
;
; Called Functions:
;   FUN_00408930
;   FUN_00438a70
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e85b0
        ;   Label: FUN_004e85b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e85b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004e85b5
    JNZ 0x004e85ed                      ; 004e85ba
        ;   XREF to: 004e85ed (CONDITIONAL_JUMP)  ; LAB_004e85ed
    PUSH 0x0                            ; 004e85bc
    ADD EBX,0x300                       ; 004e85be
    PUSH EBX                            ; 004e85c4
    CALL FUN_00438a70                   ; 004e85c5
        ;   XREF to: 00438a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00438a70()
    ADD ESP,0x8                         ; 004e85ca
    PUSH 0x1                            ; 004e85cd
    LEA EBX,[EAX + 0xfffffd00]          ; 004e85cf
    PUSH EBX                            ; 004e85d5
    CALL FUN_00408930                   ; 004e85d6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004e85db
    MOV DL,byte ptr [ESP + 0xc]         ; 004e85de
    MOV EBX,EAX                         ; 004e85e2
    TEST DL,0x2                         ; 004e85e4
    JNZ 0x004e8608                      ; 004e85e7
        ;   XREF to: 004e8608 (CONDITIONAL_JUMP)  ; LAB_004e8608
    MOV EAX,EBX                         ; 004e85e9
    POP EBX                             ; 004e85eb
    RET                                 ; 004e85ec
    PUSH 0x5f9c60                       ; 004e85ed | DAT_005f9c60
        ;   Label: LAB_004e85ed
    PUSH EBX                            ; 004e85f2
    CALL FUN_005b7fa7                   ; 004e85f3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004e85f8
    PUSH EAX                            ; 004e85fb
    CALL FUN_005b7fce                   ; 004e85fc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004e8601
    MOV EAX,EBX                         ; 004e8604
    POP EBX                             ; 004e8606
    RET                                 ; 004e8607
    PUSH EAX                            ; 004e8608
        ;   Label: LAB_004e8608
    CALL FUN_005b7fdc                   ; 004e8609
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004e860e
    MOV EAX,EBX                         ; 004e8611
    POP EBX                             ; 004e8613
    RET                                 ; 004e8614

