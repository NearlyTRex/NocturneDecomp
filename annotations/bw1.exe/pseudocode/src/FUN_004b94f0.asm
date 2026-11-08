; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b94f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00600580
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b94f0
        ;   Label: FUN_004b94f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b94f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004b94f5
    JNZ 0x004b952d                      ; 004b94fa
        ;   XREF to: 004b952d (CONDITIONAL_JUMP)  ; LAB_004b952d
    PUSH 0x1                            ; 004b94fc
    ADD EBX,0x340                       ; 004b94fe
    PUSH EBX                            ; 004b9504
    CALL FUN_00408730                   ; 004b9505
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004b950a
    PUSH 0x1                            ; 004b950d
    LEA EBX,[EAX + 0xfffffcc0]          ; 004b950f
    PUSH EBX                            ; 004b9515
    CALL FUN_00408730                   ; 004b9516
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004b951b
    MOV DL,byte ptr [ESP + 0xc]         ; 004b951e
    MOV EBX,EAX                         ; 004b9522
    TEST DL,0x2                         ; 004b9524
    JNZ 0x004b9548                      ; 004b9527
        ;   XREF to: 004b9548 (CONDITIONAL_JUMP)  ; LAB_004b9548
    MOV EAX,EBX                         ; 004b9529
    POP EBX                             ; 004b952b
    RET                                 ; 004b952c
    PUSH 0x600580                       ; 004b952d | DAT_00600580
        ;   Label: LAB_004b952d
    PUSH EBX                            ; 004b9532
    CALL FUN_005c030f                   ; 004b9533
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004b9538
    PUSH EAX                            ; 004b953b
    CALL FUN_005c0336                   ; 004b953c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004b9541
    MOV EAX,EBX                         ; 004b9544
    POP EBX                             ; 004b9546
    RET                                 ; 004b9547
    PUSH EAX                            ; 004b9548
        ;   Label: LAB_004b9548
    CALL FUN_005c0344                   ; 004b9549
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004b954e
    MOV EAX,EBX                         ; 004b9551
    POP EBX                             ; 004b9553
    RET                                 ; 004b9554

