; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00415410(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f3680
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b6e80
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415410
        ;   Label: FUN_00415410
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415411
    TEST byte ptr [ESP + 0xc],0x4       ; 00415415
    JNZ 0x0041548d                      ; 0041541a
        ;   XREF to: 0041548d (CONDITIONAL_JUMP)  ; LAB_0041548d
    PUSH 0x0                            ; 0041541c
    ADD EBX,0x10c7c                     ; 0041541e
    PUSH EBX                            ; 00415424
    CALL FUN_005b6e80                   ; 00415425
        ;   XREF to: 005b6e80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6e80()
    ADD ESP,0x8                         ; 0041542a
    PUSH 0x0                            ; 0041542d
    SUB EAX,0xd25c                      ; 0041542f
    PUSH EAX                            ; 00415434
    CALL FUN_0040f2b0                   ; 00415435
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 0041543a
    PUSH 0x0                            ; 0041543d
    SUB EAX,0x9c8                       ; 0041543f
    PUSH EAX                            ; 00415444
    CALL FUN_0059df70                   ; 00415445
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 0041544a
    PUSH 0x0                            ; 0041544d
    SUB EAX,0x34c                       ; 0041544f
    PUSH EAX                            ; 00415454
    CALL FUN_005b1480                   ; 00415455
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 0041545a
    PUSH 0x0                            ; 0041545d
    SUB EAX,0x2a58                      ; 0041545f
    PUSH EAX                            ; 00415464
    CALL FUN_00544d50                   ; 00415465
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 0041546a
    PUSH 0x1                            ; 0041546d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0041546f
    PUSH EBX                            ; 00415475
    CALL FUN_00408930                   ; 00415476
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0041547b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041547e
    MOV EBX,EAX                         ; 00415482
    TEST DL,0x2                         ; 00415484
    JNZ 0x004154a8                      ; 00415487
        ;   XREF to: 004154a8 (CONDITIONAL_JUMP)  ; LAB_004154a8
    MOV EAX,EBX                         ; 00415489
    POP EBX                             ; 0041548b
    RET                                 ; 0041548c
    PUSH 0x5f3680                       ; 0041548d | DAT_005f3680
        ;   Label: LAB_0041548d
    PUSH EBX                            ; 00415492
    CALL FUN_005b7fa7                   ; 00415493
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00415498
    PUSH EAX                            ; 0041549b
    CALL FUN_005b7fce                   ; 0041549c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004154a1
    MOV EAX,EBX                         ; 004154a4
    POP EBX                             ; 004154a6
    RET                                 ; 004154a7
    PUSH EAX                            ; 004154a8
        ;   Label: LAB_004154a8
    CALL FUN_005b7fdc                   ; 004154a9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004154ae
    MOV EAX,EBX                         ; 004154b1
    POP EBX                             ; 004154b3
    RET                                 ; 004154b4

