; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054ce30(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00604fb0
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

    PUSH EBX                            ; 0054ce30
        ;   Label: FUN_0054ce30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054ce31
    TEST byte ptr [ESP + 0xc],0x4       ; 0054ce35
    JNZ 0x0054ce8d                      ; 0054ce3a
        ;   XREF to: 0054ce8d (CONDITIONAL_JUMP)  ; LAB_0054ce8d
    PUSH 0x0                            ; 0054ce3c
    ADD EBX,0x35dc                      ; 0054ce3e
    PUSH EBX                            ; 0054ce44
    CALL FUN_0040ee30                   ; 0054ce45
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 0054ce4a
    PUSH 0x0                            ; 0054ce4d
    SUB EAX,0x93c                       ; 0054ce4f
    PUSH EAX                            ; 0054ce54
    CALL FUN_00441ca0                   ; 0054ce55
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 0054ce5a
    PUSH 0x0                            ; 0054ce5d
    SUB EAX,0x2b48                      ; 0054ce5f
    PUSH EAX                            ; 0054ce64
    CALL FUN_005673f0                   ; 0054ce65
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 0054ce6a
    PUSH 0x1                            ; 0054ce6d
    LEA EBX,[EAX + 0xfffffea8]          ; 0054ce6f
    PUSH EBX                            ; 0054ce75
    CALL FUN_00408730                   ; 0054ce76
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0054ce7b
    MOV DL,byte ptr [ESP + 0xc]         ; 0054ce7e
    MOV EBX,EAX                         ; 0054ce82
    TEST DL,0x2                         ; 0054ce84
    JNZ 0x0054cea8                      ; 0054ce87
        ;   XREF to: 0054cea8 (CONDITIONAL_JUMP)  ; LAB_0054cea8
    MOV EAX,EBX                         ; 0054ce89
    POP EBX                             ; 0054ce8b
    RET                                 ; 0054ce8c
    PUSH 0x604fb0                       ; 0054ce8d | DAT_00604fb0
        ;   Label: LAB_0054ce8d
    PUSH EBX                            ; 0054ce92
    CALL FUN_005c030f                   ; 0054ce93
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0054ce98
    PUSH EAX                            ; 0054ce9b
    CALL FUN_005c0336                   ; 0054ce9c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0054cea1
    MOV EAX,EBX                         ; 0054cea4
    POP EBX                             ; 0054cea6
    RET                                 ; 0054cea7
    PUSH EAX                            ; 0054cea8
        ;   Label: LAB_0054cea8
    CALL FUN_005c0344                   ; 0054cea9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0054ceae
    MOV EAX,EBX                         ; 0054ceb1
    POP EBX                             ; 0054ceb3
    RET                                 ; 0054ceb4

