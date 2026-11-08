; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00537440(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006048d0
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537440
        ;   Label: FUN_00537440
    MOV EBX,dword ptr [ESP + 0x8]       ; 00537441
    TEST byte ptr [ESP + 0xc],0x4       ; 00537445
    JNZ 0x00537466                      ; 0053744a
        ;   XREF to: 00537466 (CONDITIONAL_JUMP)  ; LAB_00537466
    PUSH 0x1                            ; 0053744c
    PUSH EBX                            ; 0053744e
    CALL FUN_00408730                   ; 0053744f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00537454
    MOV DL,byte ptr [ESP + 0xc]         ; 00537457
    MOV EBX,EAX                         ; 0053745b
    TEST DL,0x2                         ; 0053745d
    JNZ 0x00537481                      ; 00537460
        ;   XREF to: 00537481 (CONDITIONAL_JUMP)  ; LAB_00537481
    MOV EAX,EBX                         ; 00537462
    POP EBX                             ; 00537464
    RET                                 ; 00537465
    PUSH 0x6048d0                       ; 00537466 | DAT_006048d0
        ;   Label: LAB_00537466
    PUSH EBX                            ; 0053746b
    CALL FUN_005c030f                   ; 0053746c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00537471
    PUSH EAX                            ; 00537474
    CALL FUN_005c0336                   ; 00537475
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0053747a
    MOV EAX,EBX                         ; 0053747d
    POP EBX                             ; 0053747f
    RET                                 ; 00537480
    PUSH EAX                            ; 00537481
        ;   Label: LAB_00537481
    CALL FUN_005c0344                   ; 00537482
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00537487
    MOV EAX,EBX                         ; 0053748a
    POP EBX                             ; 0053748c
    RET                                 ; 0053748d

