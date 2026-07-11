; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c3a0(undefined4 param_1,int param_2)
;
;
; XREF[9]:
;   FUN_0040c450 at 0040c48b
;   FUN_0040c4f0 at 0040c52b
;   FUN_0040c590 at 0040c5d0
;   FUN_0040c630 at 0040c66f
;   FUN_0040c6d0 at 0040c784
;   FUN_0040c880 at 0040c8b3
;   FUN_0040c900 at 0040c934
;   FUN_0040cf70 at 0040cfd7
;   FUN_0040d110 at 0040d175
;
; Referenced Globals:
;   string s_//_%s_00577bf7
;   undefined4 DAT_00577c02
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;   undefined4 DAT_00763e90
;
; Called Functions:
;   FUN_0040c320
;   FUN_005644f0
;   FUN_00564570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c3a0
        ;   Label: FUN_0040c3a0
    PUSH ESI                            ; 0040c3a1
    PUSH EDI                            ; 0040c3a2
    PUSH EBP                            ; 0040c3a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040c3a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040c3a8
    CMP dword ptr [0x00763e88],0x1      ; 0040c3ac | DAT_00763e88
    JNZ 0x0040c3ea                      ; 0040c3b3
        ;   XREF to: 0040c3ea (CONDITIONAL_JUMP)  ; LAB_0040c3ea
    MOV EAX,[0x00763e84]                ; 0040c3b5 | DAT_00763e84
        ;   Label: LAB_0040c3b5
    PUSH EAX                            ; 0040c3ba
    CALL FUN_00564570                   ; 0040c3bb
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined FUN_00564570()
    ADD ESP,0x4                         ; 0040c3c0
    MOV EBX,EAX                         ; 0040c3c3
    TEST EAX,EAX                        ; 0040c3c5
    JL 0x0040c3de                       ; 0040c3c7
        ;   XREF to: 0040c3de (CONDITIONAL_JUMP)  ; LAB_0040c3de
    CMP EBX,0xa                         ; 0040c3c9
        ;   Label: LAB_0040c3c9
    JNZ 0x0040c3b5                      ; 0040c3cc
        ;   XREF to: 0040c3b5 (CONDITIONAL_JUMP)  ; LAB_0040c3b5
    MOV EAX,[0x00763e84]                ; 0040c3ce | DAT_00763e84
    TEST byte ptr [EAX + 0xc],0x20      ; 0040c3d3
    JNZ 0x0040c440                      ; 0040c3d7
        ;   XREF to: 0040c440 (CONDITIONAL_JUMP)  ; LAB_0040c440
    POP EBP                             ; 0040c3d9
    POP EDI                             ; 0040c3da
    POP ESI                             ; 0040c3db
    POP EBX                             ; 0040c3dc
    RET                                 ; 0040c3dd
    PUSH ESI                            ; 0040c3de
        ;   Label: LAB_0040c3de
    PUSH EDI                            ; 0040c3df
    CALL FUN_0040c320                   ; 0040c3e0
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c320()
    ADD ESP,0x8                         ; 0040c3e5
    JMP 0x0040c3c9                      ; 0040c3e8
        ;   XREF to: 0040c3c9 (UNCONDITIONAL_JUMP)  ; LAB_0040c3c9
    CMP dword ptr [0x00763e90],0x0      ; 0040c3ea | DAT_00763e90
        ;   Label: LAB_0040c3ea
    JNZ 0x0040c41c                      ; 0040c3f1
        ;   XREF to: 0040c41c (CONDITIONAL_JUMP)  ; LAB_0040c41c
    TEST ESI,ESI                        ; 0040c3f3
    JZ 0x0040c41c                       ; 0040c3f5
        ;   XREF to: 0040c41c (CONDITIONAL_JUMP)  ; LAB_0040c41c
    PUSH ESI                            ; 0040c3f7
    PUSH 0x577bf7                       ; 0040c3f8 | = "    // %s\n"
    MOV EBX,dword ptr [0x00763e84]      ; 0040c3fd | DAT_00763e84
    PUSH EBX                            ; 0040c403
    CALL FUN_005644f0                   ; 0040c404
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0xc                         ; 0040c409
    MOV EAX,[0x00763e84]                ; 0040c40c | DAT_00763e84
    TEST byte ptr [EAX + 0xc],0x20      ; 0040c411
    JNZ 0x0040c440                      ; 0040c415
        ;   XREF to: 0040c440 (CONDITIONAL_JUMP)  ; LAB_0040c440
    POP EBP                             ; 0040c417
    POP EDI                             ; 0040c418
    POP ESI                             ; 0040c419
    POP EBX                             ; 0040c41a
    RET                                 ; 0040c41b
    PUSH 0x577c02                       ; 0040c41c | DAT_00577c02
        ;   Label: LAB_0040c41c
    MOV EBP,dword ptr [0x00763e84]      ; 0040c421 | DAT_00763e84
    PUSH EBP                            ; 0040c427
    CALL FUN_005644f0                   ; 0040c428
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0x8                         ; 0040c42d
    MOV EAX,[0x00763e84]                ; 0040c430 | DAT_00763e84
    TEST byte ptr [EAX + 0xc],0x20      ; 0040c435
    JNZ 0x0040c440                      ; 0040c439
        ;   XREF to: 0040c440 (CONDITIONAL_JUMP)  ; LAB_0040c440
    POP EBP                             ; 0040c43b
    POP EDI                             ; 0040c43c
    POP ESI                             ; 0040c43d
    POP EBX                             ; 0040c43e
    RET                                 ; 0040c43f
    PUSH ESI                            ; 0040c440
        ;   Label: LAB_0040c440
    PUSH EDI                            ; 0040c441
    CALL FUN_0040c320                   ; 0040c442
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c320()
    ADD ESP,0x8                         ; 0040c447
    POP EBP                             ; 0040c44a
    POP EDI                             ; 0040c44b
    POP ESI                             ; 0040c44c
    POP EBX                             ; 0040c44d
    RET                                 ; 0040c44e

