; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044c510(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe5d0
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c510
        ;   Label: FUN_0044c510
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044c511
    TEST byte ptr [ESP + 0xc],0x4       ; 0044c515
    JNZ 0x0044c536                      ; 0044c51a
        ;   XREF to: 0044c536 (CONDITIONAL_JUMP)  ; LAB_0044c536
    PUSH 0x1                            ; 0044c51c
    PUSH EBX                            ; 0044c51e
    CALL FUN_00408730                   ; 0044c51f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0044c524
    MOV DL,byte ptr [ESP + 0xc]         ; 0044c527
    MOV EBX,EAX                         ; 0044c52b
    TEST DL,0x2                         ; 0044c52d
    JNZ 0x0044c551                      ; 0044c530
        ;   XREF to: 0044c551 (CONDITIONAL_JUMP)  ; LAB_0044c551
    MOV EAX,EBX                         ; 0044c532
    POP EBX                             ; 0044c534
    RET                                 ; 0044c535
    PUSH 0x5fe5d0                       ; 0044c536 | DAT_005fe5d0
        ;   Label: LAB_0044c536
    PUSH EBX                            ; 0044c53b
    CALL FUN_005c030f                   ; 0044c53c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0044c541
    PUSH EAX                            ; 0044c544
    CALL FUN_005c0336                   ; 0044c545
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0044c54a
    MOV EAX,EBX                         ; 0044c54d
    POP EBX                             ; 0044c54f
    RET                                 ; 0044c550
    PUSH EAX                            ; 0044c551
        ;   Label: LAB_0044c551
    CALL FUN_005c0344                   ; 0044c552
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0044c557
    MOV EAX,EBX                         ; 0044c55a
    POP EBX                             ; 0044c55c
    RET                                 ; 0044c55d

