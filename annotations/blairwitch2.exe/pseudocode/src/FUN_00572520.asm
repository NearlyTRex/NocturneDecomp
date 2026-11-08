; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00572520(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fcc40
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572520
        ;   Label: FUN_00572520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572521
    TEST byte ptr [ESP + 0xc],0x4       ; 00572525
    JNZ 0x00572546                      ; 0057252a
        ;   XREF to: 00572546 (CONDITIONAL_JUMP)  ; LAB_00572546
    PUSH 0x1                            ; 0057252c
    PUSH EBX                            ; 0057252e
    CALL FUN_00408930                   ; 0057252f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 00572534
    MOV DL,byte ptr [ESP + 0xc]         ; 00572537
    MOV EBX,EAX                         ; 0057253b
    TEST DL,0x2                         ; 0057253d
    JNZ 0x00572561                      ; 00572540
        ;   XREF to: 00572561 (CONDITIONAL_JUMP)  ; LAB_00572561
    MOV EAX,EBX                         ; 00572542
    POP EBX                             ; 00572544
    RET                                 ; 00572545
    PUSH 0x5fcc40                       ; 00572546 | DAT_005fcc40
        ;   Label: LAB_00572546
    PUSH EBX                            ; 0057254b
    CALL FUN_005b7fa7                   ; 0057254c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00572551
    PUSH EAX                            ; 00572554
    CALL FUN_005b7fce                   ; 00572555
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0057255a
    MOV EAX,EBX                         ; 0057255d
    POP EBX                             ; 0057255f
    RET                                 ; 00572560
    PUSH EAX                            ; 00572561
        ;   Label: LAB_00572561
    CALL FUN_005b7fdc                   ; 00572562
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00572567
    MOV EAX,EBX                         ; 0057256a
    POP EBX                             ; 0057256c
    RET                                 ; 0057256d

