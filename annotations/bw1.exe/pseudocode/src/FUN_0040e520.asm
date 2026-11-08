; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e520(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fb670
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e520
        ;   Label: FUN_0040e520
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e521
    TEST byte ptr [ESP + 0xc],0x4       ; 0040e525
    JNZ 0x0040e546                      ; 0040e52a
        ;   XREF to: 0040e546 (CONDITIONAL_JUMP)  ; LAB_0040e546
    PUSH 0x1                            ; 0040e52c
    PUSH EBX                            ; 0040e52e
    CALL FUN_00408730                   ; 0040e52f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0040e534
    MOV DL,byte ptr [ESP + 0xc]         ; 0040e537
    MOV EBX,EAX                         ; 0040e53b
    TEST DL,0x2                         ; 0040e53d
    JNZ 0x0040e561                      ; 0040e540
        ;   XREF to: 0040e561 (CONDITIONAL_JUMP)  ; LAB_0040e561
    MOV EAX,EBX                         ; 0040e542
    POP EBX                             ; 0040e544
    RET                                 ; 0040e545
    PUSH 0x5fb670                       ; 0040e546 | DAT_005fb670
        ;   Label: LAB_0040e546
    PUSH EBX                            ; 0040e54b
    CALL FUN_005c030f                   ; 0040e54c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0040e551
    PUSH EAX                            ; 0040e554
    CALL FUN_005c0336                   ; 0040e555
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0040e55a
    MOV EAX,EBX                         ; 0040e55d
    POP EBX                             ; 0040e55f
    RET                                 ; 0040e560
    PUSH EAX                            ; 0040e561
        ;   Label: LAB_0040e561
    CALL FUN_005c0344                   ; 0040e562
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0040e567
    MOV EAX,EBX                         ; 0040e56a
    POP EBX                             ; 0040e56c
    RET                                 ; 0040e56d

