; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonTexturedDepthWriteOp47_FUN_004075f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004075f0
        ;   Label: engine_3d.c_renderPolygonTexturedDepthWriteOp47_FUN_004075f0
    PUSH ESI                            ; 004075f1
    PUSH EBP                            ; 004075f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004075f3
    LEA ESI,[EBX + 0x18]                ; 004075f7
    LEA EAX,[EBX + 0x8]                 ; 004075fa
    PUSH EAX                            ; 004075fd
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 004075fe
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00407603
    TEST EAX,EAX                        ; 00407606
    JZ 0x0040764b                       ; 00407608
        ;   XREF to: 0040764b (CONDITIONAL_JUMP)  ; LAB_0040764b
    CMP dword ptr [0x01c03948],0x0      ; 0040760a | DAT_01c03948
    JNZ 0x00407666                      ; 00407611
        ;   XREF to: 00407666 (CONDITIONAL_JUMP)  ; LAB_00407666
    CMP dword ptr [0x005b7624],0x20     ; 00407613 | DAT_005b7624
    JNZ 0x0040765a                      ; 0040761a
        ;   XREF to: 0040765a (CONDITIONAL_JUMP)  ; LAB_0040765a
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040761c | DAT_01c00c7c | LAB_005300ec
    PUSH EDI                            ; 00407626
        ;   Label: LAB_00407626
    MOV EDI,0x81                        ; 00407627
    PUSH ESI                            ; 0040762c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040762d
    MOV EBP,0x1                         ; 00407630
    PUSH EAX                            ; 00407635
    MOV dword ptr [0x01c039a0],EDI      ; 00407636 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 0040763c | DAT_01c039a4
    CALL FUN_00432cd0                   ; 00407642
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 00407647
    POP EDI                             ; 0040764a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040764b
        ;   Label: LAB_0040764b
    ADD EBX,0x18                        ; 0040764e
    SHL EAX,0x2                         ; 00407651
    ADD EAX,EBX                         ; 00407654
    POP EBP                             ; 00407656
    POP ESI                             ; 00407657
    POP EBX                             ; 00407658
    RET                                 ; 00407659
    MOV dword ptr [0x01c00c7c],0x530322 ; 0040765a | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_0040765a
    JMP 0x00407626                      ; 00407664
        ;   XREF to: 00407626 (UNCONDITIONAL_JUMP)  ; LAB_00407626
    CMP dword ptr [0x005b7624],0x20     ; 00407666 | DAT_005b7624
        ;   Label: LAB_00407666
    JNZ 0x0040767b                      ; 0040766d
        ;   XREF to: 0040767b (CONDITIONAL_JUMP)  ; LAB_0040767b
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040766f | DAT_01c00c7c | LAB_0052f031
    JMP 0x00407626                      ; 00407679
        ;   XREF to: 00407626 (UNCONDITIONAL_JUMP)  ; LAB_00407626
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0040767b | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_0040767b
    JMP 0x00407626                      ; 00407685
        ;   XREF to: 00407626 (UNCONDITIONAL_JUMP)  ; LAB_00407626

