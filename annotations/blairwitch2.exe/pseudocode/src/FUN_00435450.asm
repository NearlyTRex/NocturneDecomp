; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00435450(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f4410
;
; Called Functions:
;   FUN_00433e90
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435450
        ;   Label: FUN_00435450
    MOV EBX,dword ptr [ESP + 0x8]       ; 00435451
    TEST byte ptr [ESP + 0xc],0x4       ; 00435455
    JNZ 0x00435476                      ; 0043545a
        ;   XREF to: 00435476 (CONDITIONAL_JUMP)  ; LAB_00435476
    PUSH 0x1                            ; 0043545c
    PUSH EBX                            ; 0043545e
    CALL FUN_00433e90                   ; 0043545f
        ;   XREF to: 00433e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e90()
    ADD ESP,0x8                         ; 00435464
    MOV DL,byte ptr [ESP + 0xc]         ; 00435467
    MOV EBX,EAX                         ; 0043546b
    TEST DL,0x2                         ; 0043546d
    JNZ 0x00435491                      ; 00435470
        ;   XREF to: 00435491 (CONDITIONAL_JUMP)  ; LAB_00435491
    MOV EAX,EBX                         ; 00435472
    POP EBX                             ; 00435474
    RET                                 ; 00435475
    PUSH 0x5f4410                       ; 00435476 | DAT_005f4410
        ;   Label: LAB_00435476
    PUSH EBX                            ; 0043547b
    CALL FUN_005b7fa7                   ; 0043547c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00435481
    PUSH EAX                            ; 00435484
    CALL FUN_005b7fce                   ; 00435485
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0043548a
    MOV EAX,EBX                         ; 0043548d
    POP EBX                             ; 0043548f
    RET                                 ; 00435490
    PUSH EAX                            ; 00435491
        ;   Label: LAB_00435491
    CALL FUN_005b7fdc                   ; 00435492
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00435497
    MOV EAX,EBX                         ; 0043549a
    POP EBX                             ; 0043549c
    RET                                 ; 0043549d

