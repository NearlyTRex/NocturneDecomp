; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a8510(int param_1,byte param_2)
;
;
; Referenced Globals:
;   void* PTR_FUN_005e0294 = 004a8510
;   undefined4 DAT_005e0340
;
; Called Functions:
;   FUN_004a83a0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8510
        ;   Label: FUN_004a8510
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a8511
    TEST byte ptr [ESP + 0xc],0x4       ; 004a8515
    JNZ 0x004a853d                      ; 004a851a
        ;   XREF to: 004a853d (CONDITIONAL_JUMP)  ; LAB_004a853d
    PUSH 0x1                            ; 004a851c
    PUSH EBX                            ; 004a851e
    MOV dword ptr [EBX + 0x14],0x5e0294 ; 004a851f | PTR_FUN_005e0294
    CALL FUN_004a83a0                   ; 004a8526
        ;   XREF to: 004a83a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a83a0()
    ADD ESP,0x8                         ; 004a852b
    MOV DL,byte ptr [ESP + 0xc]         ; 004a852e
    MOV EBX,EAX                         ; 004a8532
    TEST DL,0x2                         ; 004a8534
    JNZ 0x004a8558                      ; 004a8537
        ;   XREF to: 004a8558 (CONDITIONAL_JUMP)  ; LAB_004a8558
    MOV EAX,EBX                         ; 004a8539
    POP EBX                             ; 004a853b
    RET                                 ; 004a853c
    PUSH 0x5e0340                       ; 004a853d | DAT_005e0340
        ;   Label: LAB_004a853d
    PUSH EBX                            ; 004a8542
    CALL FUN_005a308f                   ; 004a8543
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004a8548
    PUSH EAX                            ; 004a854b
    CALL FUN_005a30b6                   ; 004a854c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004a8551
    MOV EAX,EBX                         ; 004a8554
    POP EBX                             ; 004a8556
    RET                                 ; 004a8557
    PUSH EAX                            ; 004a8558
        ;   Label: LAB_004a8558
    CALL FUN_005a30c4                   ; 004a8559
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004a855e
    MOV EAX,EBX                         ; 004a8561
    POP EBX                             ; 004a8563
    RET                                 ; 004a8564

