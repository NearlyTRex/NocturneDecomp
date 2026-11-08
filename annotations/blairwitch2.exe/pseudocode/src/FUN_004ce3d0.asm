; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ce3d0(int param_1)
;
;
; XREF[10]:
;   FUN_00410c00 at 00410c0f
;   FUN_00436600 at 0043660f
;   FUN_00450580 at 004505db
;   FUN_004b2840 at 004b2866
;   FUN_004cd9c0 at 004cd9cf
;   FUN_004d6540 at 004d654f
;   FUN_00501400 at 00501440
;   FUN_00520f40 at 00520f4f
;   FUN_0056f210 at 0056f21f
;   FUN_00571a30 at 00571a66
;
; Referenced Globals:
;   undefined4 DAT_005f8274
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_004da840
;   FUN_00511d10
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce3d0
        ;   Label: FUN_004ce3d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ce3d1
    MOV dword ptr [EDX + 0x2b0],0x5f8274 ; 004ce3d5 | DAT_005f8274
    XOR EAX,EAX                         ; 004ce3df
    CMP EDX,dword ptr [EAX + 0x1cedee4] ; 004ce3e1
        ;   Label: LAB_004ce3e1
    JZ 0x004ce489                       ; 004ce3e7
        ;   XREF to: 004ce489 (CONDITIONAL_JUMP)  ; LAB_004ce489
    ADD EAX,0x4                         ; 004ce3ed
        ;   Label: LAB_004ce3ed
    CMP EAX,0x10                        ; 004ce3f0
    JNZ 0x004ce3e1                      ; 004ce3f3
        ;   XREF to: 004ce3e1 (CONDITIONAL_JUMP)  ; LAB_004ce3e1
    PUSH 0x0                            ; 004ce3f5
    ADD EDX,0x24fc4                     ; 004ce3f7
    PUSH EDX                            ; 004ce3fd
    CALL FUN_004da840                   ; 004ce3fe
        ;   XREF to: 004da840 (UNCONDITIONAL_CALL)  ; undefined FUN_004da840()
    ADD ESP,0x8                         ; 004ce403
    PUSH 0x0                            ; 004ce406
    SUB EAX,0x624                       ; 004ce408
    PUSH EAX                            ; 004ce40d
    CALL FUN_004da840                   ; 004ce40e
        ;   XREF to: 004da840 (UNCONDITIONAL_CALL)  ; undefined FUN_004da840()
    ADD ESP,0x8                         ; 004ce413
    PUSH 0x0                            ; 004ce416
    SUB EAX,0x624                       ; 004ce418
    PUSH EAX                            ; 004ce41d
    CALL FUN_004da840                   ; 004ce41e
        ;   XREF to: 004da840 (UNCONDITIONAL_CALL)  ; undefined FUN_004da840()
    ADD ESP,0x8                         ; 004ce423
    PUSH 0x0                            ; 004ce426
    SUB EAX,0x138e0                     ; 004ce428
    PUSH EAX                            ; 004ce42d
    CALL FUN_00511d10                   ; 004ce42e
        ;   XREF to: 00511d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00511d10()
    ADD ESP,0x8                         ; 004ce433
    PUSH 0x0                            ; 004ce436
    SUB EAX,0xd07c                      ; 004ce438
    PUSH EAX                            ; 004ce43d
    CALL FUN_0040f2b0                   ; 004ce43e
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 004ce443
    PUSH 0x0                            ; 004ce446
    SUB EAX,0x9c8                       ; 004ce448
    PUSH EAX                            ; 004ce44d
    CALL FUN_0059df70                   ; 004ce44e
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 004ce453
    PUSH 0x0                            ; 004ce456
    SUB EAX,0x34c                       ; 004ce458
    PUSH EAX                            ; 004ce45d
    CALL FUN_005b1480                   ; 004ce45e
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 004ce463
    PUSH 0x0                            ; 004ce466
    SUB EAX,0x2a58                      ; 004ce468
    PUSH EAX                            ; 004ce46d
    CALL FUN_00544d50                   ; 004ce46e
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 004ce473
    PUSH 0x1                            ; 004ce476
    LEA EDX,[EAX + 0xfffffd4c]          ; 004ce478
    PUSH EDX                            ; 004ce47e
    CALL FUN_00408930                   ; 004ce47f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004ce484
    POP EBX                             ; 004ce487
    RET                                 ; 004ce488
    XOR EBX,EBX                         ; 004ce489
        ;   Label: LAB_004ce489
    MOV dword ptr [EAX + 0x1cedee4],EBX ; 004ce48b
    JMP 0x004ce3ed                      ; 004ce491
        ;   XREF to: 004ce3ed (UNCONDITIONAL_JUMP)  ; LAB_004ce3ed

