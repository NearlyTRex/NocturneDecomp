; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e04d0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9280
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e04d0
        ;   Label: FUN_004e04d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e04d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004e04d5
    JNZ 0x004e04f6                      ; 004e04da
        ;   XREF to: 004e04f6 (CONDITIONAL_JUMP)  ; LAB_004e04f6
    PUSH 0x1                            ; 004e04dc
    PUSH EBX                            ; 004e04de
    CALL FUN_00408930                   ; 004e04df
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004e04e4
    MOV DL,byte ptr [ESP + 0xc]         ; 004e04e7
    MOV EBX,EAX                         ; 004e04eb
    TEST DL,0x2                         ; 004e04ed
    JNZ 0x004e0511                      ; 004e04f0
        ;   XREF to: 004e0511 (CONDITIONAL_JUMP)  ; LAB_004e0511
    MOV EAX,EBX                         ; 004e04f2
    POP EBX                             ; 004e04f4
    RET                                 ; 004e04f5
    PUSH 0x5f9280                       ; 004e04f6 | DAT_005f9280
        ;   Label: LAB_004e04f6
    PUSH EBX                            ; 004e04fb
    CALL FUN_005b7fa7                   ; 004e04fc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004e0501
    PUSH EAX                            ; 004e0504
    CALL FUN_005b7fce                   ; 004e0505
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004e050a
    MOV EAX,EBX                         ; 004e050d
    POP EBX                             ; 004e050f
    RET                                 ; 004e0510
    PUSH EAX                            ; 004e0511
        ;   Label: LAB_004e0511
    CALL FUN_005b7fdc                   ; 004e0512
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004e0517
    MOV EAX,EBX                         ; 004e051a
    POP EBX                             ; 004e051c
    RET                                 ; 004e051d

