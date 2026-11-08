; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056d400(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00605ab0
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d400
        ;   Label: FUN_0056d400
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056d401
    TEST byte ptr [ESP + 0xc],0x4       ; 0056d405
    JNZ 0x0056d45d                      ; 0056d40a
        ;   XREF to: 0056d45d (CONDITIONAL_JUMP)  ; LAB_0056d45d
    PUSH 0x0                            ; 0056d40c
    ADD EBX,0x35dc                      ; 0056d40e
    PUSH EBX                            ; 0056d414
    CALL FUN_0040ee30                   ; 0056d415
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 0056d41a
    PUSH 0x0                            ; 0056d41d
    SUB EAX,0x93c                       ; 0056d41f
    PUSH EAX                            ; 0056d424
    CALL FUN_00441ca0                   ; 0056d425
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 0056d42a
    PUSH 0x0                            ; 0056d42d
    SUB EAX,0x2b48                      ; 0056d42f
    PUSH EAX                            ; 0056d434
    CALL FUN_005673f0                   ; 0056d435
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 0056d43a
    PUSH 0x1                            ; 0056d43d
    LEA EBX,[EAX + 0xfffffea8]          ; 0056d43f
    PUSH EBX                            ; 0056d445
    CALL FUN_00408730                   ; 0056d446
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0056d44b
    MOV DL,byte ptr [ESP + 0xc]         ; 0056d44e
    MOV EBX,EAX                         ; 0056d452
    TEST DL,0x2                         ; 0056d454
    JNZ 0x0056d478                      ; 0056d457
        ;   XREF to: 0056d478 (CONDITIONAL_JUMP)  ; LAB_0056d478
    MOV EAX,EBX                         ; 0056d459
    POP EBX                             ; 0056d45b
    RET                                 ; 0056d45c
    PUSH 0x605ab0                       ; 0056d45d | DAT_00605ab0
        ;   Label: LAB_0056d45d
    PUSH EBX                            ; 0056d462
    CALL FUN_005c030f                   ; 0056d463
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0056d468
    PUSH EAX                            ; 0056d46b
    CALL FUN_005c0336                   ; 0056d46c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0056d471
    MOV EAX,EBX                         ; 0056d474
    POP EBX                             ; 0056d476
    RET                                 ; 0056d477
    PUSH EAX                            ; 0056d478
        ;   Label: LAB_0056d478
    CALL FUN_005c0344                   ; 0056d479
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0056d47e
    MOV EAX,EBX                         ; 0056d481
    POP EBX                             ; 0056d483
    RET                                 ; 0056d484

