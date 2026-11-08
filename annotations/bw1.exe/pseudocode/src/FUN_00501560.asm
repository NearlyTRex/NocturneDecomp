; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00501560(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00603130
;
; Called Functions:
;   FUN_005ad5d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501560
        ;   Label: FUN_00501560
    MOV EBX,dword ptr [ESP + 0x8]       ; 00501561
    TEST byte ptr [ESP + 0xc],0x4       ; 00501565
    JNZ 0x00501586                      ; 0050156a
        ;   XREF to: 00501586 (CONDITIONAL_JUMP)  ; LAB_00501586
    PUSH 0x1                            ; 0050156c
    PUSH EBX                            ; 0050156e
    CALL FUN_005ad5d0                   ; 0050156f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad5d0()
    ADD ESP,0x8                         ; 00501574
    MOV DL,byte ptr [ESP + 0xc]         ; 00501577
    MOV EBX,EAX                         ; 0050157b
    TEST DL,0x2                         ; 0050157d
    JNZ 0x005015a1                      ; 00501580
        ;   XREF to: 005015a1 (CONDITIONAL_JUMP)  ; LAB_005015a1
    MOV EAX,EBX                         ; 00501582
    POP EBX                             ; 00501584
    RET                                 ; 00501585
    PUSH 0x603130                       ; 00501586 | DAT_00603130
        ;   Label: LAB_00501586
    PUSH EBX                            ; 0050158b
    CALL FUN_005c030f                   ; 0050158c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00501591
    PUSH EAX                            ; 00501594
    CALL FUN_005c0336                   ; 00501595
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0050159a
    MOV EAX,EBX                         ; 0050159d
    POP EBX                             ; 0050159f
    RET                                 ; 005015a0
    PUSH EAX                            ; 005015a1
        ;   Label: LAB_005015a1
    CALL FUN_005c0344                   ; 005015a2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005015a7
    MOV EAX,EBX                         ; 005015aa
    POP EBX                             ; 005015ac
    RET                                 ; 005015ad

