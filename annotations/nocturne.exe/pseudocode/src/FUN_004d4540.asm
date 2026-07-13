; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d4540(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a05f4 = 004d4650
;   undefined4 DAT_005a0740
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_00435160
;   FUN_00438250
;   FUN_004e0070
;   FUN_0051b6e0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4540
        ;   Label: FUN_004d4540
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d4541
    TEST byte ptr [ESP + 0xc],0x4       ; 004d4545
    JNZ 0x004d4621                      ; 004d454a
        ;   XREF to: 004d4621 (CONDITIONAL_JUMP)  ; LAB_004d4621
    MOV EAX,dword ptr [EBX + 0x4757c]   ; 004d4550
    MOV dword ptr [EBX + 0x14c],0x5a05f4 ; 004d4556 | PTR_FUN_005a05f4
    TEST EAX,EAX                        ; 004d4560
    JZ 0x004d4576                       ; 004d4562
        ;   XREF to: 004d4576 (CONDITIONAL_JUMP)  ; LAB_004d4576
    PUSH 0x2                            ; 004d4564
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004d4566
    PUSH EAX                            ; 004d456c
    CALL dword ptr [EDX + 0xc8]         ; 004d456d
    ADD ESP,0x8                         ; 004d4573
    PUSH 0x0                            ; 004d4576
        ;   Label: LAB_004d4576
    ADD EBX,0x4694c                     ; 004d4578
    PUSH EBX                            ; 004d457e
    MOV dword ptr [EBX + 0xc30],0x0     ; 004d457f
    CALL FUN_004e0070                   ; 004d4589
        ;   XREF to: 004e0070 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0070()
    ADD ESP,0x8                         ; 004d458e
    PUSH 0x0                            ; 004d4591
    SUB EAX,0x3ab60                     ; 004d4593
    PUSH EAX                            ; 004d4598
    CALL FUN_00435160                   ; 004d4599
        ;   XREF to: 00435160 (UNCONDITIONAL_CALL)  ; undefined FUN_00435160()
    ADD ESP,0x8                         ; 004d459e
    PUSH 0x0                            ; 004d45a1
    SUB EAX,0x8a28                      ; 004d45a3
    PUSH EAX                            ; 004d45a8
    CALL FUN_0040fe50                   ; 004d45a9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 004d45ae
    PUSH 0x0                            ; 004d45b1
    SUB EAX,0x4b0                       ; 004d45b3
    PUSH EAX                            ; 004d45b8
    CALL FUN_0040fe30                   ; 004d45b9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 004d45be
    PUSH 0x0                            ; 004d45c1
    SUB EAX,0x20c                       ; 004d45c3
    PUSH EAX                            ; 004d45c8
    CALL FUN_0040fe10                   ; 004d45c9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 004d45ce
    PUSH 0x0                            ; 004d45d1
    SUB EAX,0xb4                        ; 004d45d3
    PUSH EAX                            ; 004d45d8
    CALL FUN_0040fe10                   ; 004d45d9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 004d45de
    PUSH 0x0                            ; 004d45e1
    SUB EAX,0x1c8                       ; 004d45e3
    PUSH EAX                            ; 004d45e8
    CALL FUN_00438250                   ; 004d45e9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 004d45ee
    PUSH 0x0                            ; 004d45f1
    SUB EAX,0x293c                      ; 004d45f3
    PUSH EAX                            ; 004d45f8
    CALL FUN_0051b6e0                   ; 004d45f9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 004d45fe
    PUSH 0x1                            ; 004d4601
    LEA EBX,[EAX + 0xfffffeb0]          ; 004d4603
    PUSH EBX                            ; 004d4609
    CALL FUN_00409ea0                   ; 004d460a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 004d460f
    MOV DL,byte ptr [ESP + 0xc]         ; 004d4612
    MOV EBX,EAX                         ; 004d4616
    TEST DL,0x2                         ; 004d4618
    JNZ 0x004d463c                      ; 004d461b
        ;   XREF to: 004d463c (CONDITIONAL_JUMP)  ; LAB_004d463c
    MOV EAX,EBX                         ; 004d461d
    POP EBX                             ; 004d461f
    RET                                 ; 004d4620
    PUSH 0x5a0740                       ; 004d4621 | DAT_005a0740
        ;   Label: LAB_004d4621
    PUSH EBX                            ; 004d4626
    CALL FUN_0056445f                   ; 004d4627
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004d462c
    PUSH EAX                            ; 004d462f
    CALL FUN_00564486                   ; 004d4630
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004d4635
    MOV EAX,EBX                         ; 004d4638
    POP EBX                             ; 004d463a
    RET                                 ; 004d463b
    PUSH EAX                            ; 004d463c
        ;   Label: LAB_004d463c
    CALL FUN_00564494                   ; 004d463d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004d4642
    MOV EAX,EBX                         ; 004d4645
    POP EBX                             ; 004d4647
    RET                                 ; 004d4648

