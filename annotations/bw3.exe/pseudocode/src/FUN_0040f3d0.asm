; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040f3d0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005db870
;
; Called Functions:
;   FUN_00408770
;   FUN_004448f0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f3d0
        ;   Label: FUN_0040f3d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f3d1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040f3d5
    JNZ 0x0040f40d                      ; 0040f3da
        ;   XREF to: 0040f40d (CONDITIONAL_JUMP)  ; LAB_0040f40d
    PUSH 0x0                            ; 0040f3dc
    ADD EBX,0x178                       ; 0040f3de
    PUSH EBX                            ; 0040f3e4
    CALL FUN_004448f0                   ; 0040f3e5
        ;   XREF to: 004448f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004448f0()
    ADD ESP,0x8                         ; 0040f3ea
    PUSH 0x1                            ; 0040f3ed
    LEA EBX,[EAX + 0xfffffe88]          ; 0040f3ef
    PUSH EBX                            ; 0040f3f5
    CALL FUN_00408770                   ; 0040f3f6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0040f3fb
    MOV DL,byte ptr [ESP + 0xc]         ; 0040f3fe
    MOV EBX,EAX                         ; 0040f402
    TEST DL,0x2                         ; 0040f404
    JNZ 0x0040f428                      ; 0040f407
        ;   XREF to: 0040f428 (CONDITIONAL_JUMP)  ; LAB_0040f428
    MOV EAX,EBX                         ; 0040f409
    POP EBX                             ; 0040f40b
    RET                                 ; 0040f40c
    PUSH 0x5db870                       ; 0040f40d | DAT_005db870
        ;   Label: LAB_0040f40d
    PUSH EBX                            ; 0040f412
    CALL FUN_005a308f                   ; 0040f413
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0040f418
    PUSH EAX                            ; 0040f41b
    CALL FUN_005a30b6                   ; 0040f41c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0040f421
    MOV EAX,EBX                         ; 0040f424
    POP EBX                             ; 0040f426
    RET                                 ; 0040f427
    PUSH EAX                            ; 0040f428
        ;   Label: LAB_0040f428
    CALL FUN_005a30c4                   ; 0040f429
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0040f42e
    MOV EAX,EBX                         ; 0040f431
    POP EBX                             ; 0040f433
    RET                                 ; 0040f434

