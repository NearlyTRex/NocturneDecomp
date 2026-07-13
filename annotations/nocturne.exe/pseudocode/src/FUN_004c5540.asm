; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c5540(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059fbd0
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_00438250
;   FUN_0051b6e0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5540
        ;   Label: FUN_004c5540
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c5541
    TEST byte ptr [ESP + 0xc],0x4       ; 004c5545
    JNZ 0x004c55d1                      ; 004c554a
        ;   XREF to: 004c55d1 (CONDITIONAL_JUMP)  ; LAB_004c55d1
    PUSH 0x0                            ; 004c5550
    ADD EBX,0x33c4                      ; 004c5552
    PUSH EBX                            ; 004c5558
    CALL FUN_0040fe50                   ; 004c5559
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 004c555e
    PUSH 0x0                            ; 004c5561
    SUB EAX,0x4b0                       ; 004c5563
    PUSH EAX                            ; 004c5568
    CALL FUN_0040fe30                   ; 004c5569
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 004c556e
    PUSH 0x0                            ; 004c5571
    SUB EAX,0x20c                       ; 004c5573
    PUSH EAX                            ; 004c5578
    CALL FUN_0040fe10                   ; 004c5579
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 004c557e
    PUSH 0x0                            ; 004c5581
    SUB EAX,0xb4                        ; 004c5583
    PUSH EAX                            ; 004c5588
    CALL FUN_0040fe10                   ; 004c5589
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 004c558e
    PUSH 0x0                            ; 004c5591
    SUB EAX,0x1c8                       ; 004c5593
    PUSH EAX                            ; 004c5598
    CALL FUN_00438250                   ; 004c5599
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 004c559e
    PUSH 0x0                            ; 004c55a1
    SUB EAX,0x293c                      ; 004c55a3
    PUSH EAX                            ; 004c55a8
    CALL FUN_0051b6e0                   ; 004c55a9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 004c55ae
    PUSH 0x1                            ; 004c55b1
    LEA EBX,[EAX + 0xfffffeb0]          ; 004c55b3
    PUSH EBX                            ; 004c55b9
    CALL FUN_00409ea0                   ; 004c55ba
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 004c55bf
    MOV DL,byte ptr [ESP + 0xc]         ; 004c55c2
    MOV EBX,EAX                         ; 004c55c6
    TEST DL,0x2                         ; 004c55c8
    JNZ 0x004c55ec                      ; 004c55cb
        ;   XREF to: 004c55ec (CONDITIONAL_JUMP)  ; LAB_004c55ec
    MOV EAX,EBX                         ; 004c55cd
    POP EBX                             ; 004c55cf
    RET                                 ; 004c55d0
    PUSH 0x59fbd0                       ; 004c55d1 | DAT_0059fbd0
        ;   Label: LAB_004c55d1
    PUSH EBX                            ; 004c55d6
    CALL FUN_0056445f                   ; 004c55d7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004c55dc
    PUSH EAX                            ; 004c55df
    CALL FUN_00564486                   ; 004c55e0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004c55e5
    MOV EAX,EBX                         ; 004c55e8
    POP EBX                             ; 004c55ea
    RET                                 ; 004c55eb
    PUSH EAX                            ; 004c55ec
        ;   Label: LAB_004c55ec
    CALL FUN_00564494                   ; 004c55ed
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004c55f2
    MOV EAX,EBX                         ; 004c55f5
    POP EBX                             ; 004c55f7
    RET                                 ; 004c55f8

