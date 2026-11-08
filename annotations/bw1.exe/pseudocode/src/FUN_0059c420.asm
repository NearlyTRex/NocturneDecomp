; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059c420(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006072b0
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c420
        ;   Label: FUN_0059c420
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c421
    TEST byte ptr [ESP + 0xc],0x4       ; 0059c425
    JNZ 0x0059c446                      ; 0059c42a
        ;   XREF to: 0059c446 (CONDITIONAL_JUMP)  ; LAB_0059c446
    PUSH 0x1                            ; 0059c42c
    PUSH EBX                            ; 0059c42e
    CALL FUN_00408730                   ; 0059c42f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0059c434
    MOV DL,byte ptr [ESP + 0xc]         ; 0059c437
    MOV EBX,EAX                         ; 0059c43b
    TEST DL,0x2                         ; 0059c43d
    JNZ 0x0059c461                      ; 0059c440
        ;   XREF to: 0059c461 (CONDITIONAL_JUMP)  ; LAB_0059c461
    MOV EAX,EBX                         ; 0059c442
    POP EBX                             ; 0059c444
    RET                                 ; 0059c445
    PUSH 0x6072b0                       ; 0059c446 | DAT_006072b0
        ;   Label: LAB_0059c446
    PUSH EBX                            ; 0059c44b
    CALL FUN_005c030f                   ; 0059c44c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0059c451
    PUSH EAX                            ; 0059c454
    CALL FUN_005c0336                   ; 0059c455
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0059c45a
    MOV EAX,EBX                         ; 0059c45d
    POP EBX                             ; 0059c45f
    RET                                 ; 0059c460
    PUSH EAX                            ; 0059c461
        ;   Label: LAB_0059c461
    CALL FUN_005c0344                   ; 0059c462
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0059c467
    MOV EAX,EBX                         ; 0059c46a
    POP EBX                             ; 0059c46c
    RET                                 ; 0059c46d

