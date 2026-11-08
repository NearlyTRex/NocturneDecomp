; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005614d0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006054a0
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

    PUSH EBX                            ; 005614d0
        ;   Label: FUN_005614d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005614d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005614d5
    JNZ 0x0056152d                      ; 005614da
        ;   XREF to: 0056152d (CONDITIONAL_JUMP)  ; LAB_0056152d
    PUSH 0x0                            ; 005614dc
    ADD EBX,0x35dc                      ; 005614de
    PUSH EBX                            ; 005614e4
    CALL FUN_0040ee30                   ; 005614e5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 005614ea
    PUSH 0x0                            ; 005614ed
    SUB EAX,0x93c                       ; 005614ef
    PUSH EAX                            ; 005614f4
    CALL FUN_00441ca0                   ; 005614f5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 005614fa
    PUSH 0x0                            ; 005614fd
    SUB EAX,0x2b48                      ; 005614ff
    PUSH EAX                            ; 00561504
    CALL FUN_005673f0                   ; 00561505
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 0056150a
    PUSH 0x1                            ; 0056150d
    LEA EBX,[EAX + 0xfffffea8]          ; 0056150f
    PUSH EBX                            ; 00561515
    CALL FUN_00408730                   ; 00561516
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0056151b
    MOV DL,byte ptr [ESP + 0xc]         ; 0056151e
    MOV EBX,EAX                         ; 00561522
    TEST DL,0x2                         ; 00561524
    JNZ 0x00561548                      ; 00561527
        ;   XREF to: 00561548 (CONDITIONAL_JUMP)  ; LAB_00561548
    MOV EAX,EBX                         ; 00561529
    POP EBX                             ; 0056152b
    RET                                 ; 0056152c
    PUSH 0x6054a0                       ; 0056152d | DAT_006054a0
        ;   Label: LAB_0056152d
    PUSH EBX                            ; 00561532
    CALL FUN_005c030f                   ; 00561533
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00561538
    PUSH EAX                            ; 0056153b
    CALL FUN_005c0336                   ; 0056153c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00561541
    MOV EAX,EBX                         ; 00561544
    POP EBX                             ; 00561546
    RET                                 ; 00561547
    PUSH EAX                            ; 00561548
        ;   Label: LAB_00561548
    CALL FUN_005c0344                   ; 00561549
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0056154e
    MOV EAX,EBX                         ; 00561551
    POP EBX                             ; 00561553
    RET                                 ; 00561554

