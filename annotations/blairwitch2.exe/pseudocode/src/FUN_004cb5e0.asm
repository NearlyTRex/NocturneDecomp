; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cb5e0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004cb700 at 004cb761
;
; Called Functions:
;   FUN_004cb400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb5e0
        ;   Label: FUN_004cb5e0
    PUSH ESI                            ; 004cb5e1
    PUSH EDI                            ; 004cb5e2
    PUSH EBP                            ; 004cb5e3
    SUB ESP,0x10                        ; 004cb5e4
    MOV EBX,dword ptr [ESP + 0x24]      ; 004cb5e7
    MOV EBP,dword ptr [EBX + 0x10]      ; 004cb5eb
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004cb5ee
    NEG EBP                             ; 004cb5f1
    CMP EBP,EDX                         ; 004cb5f3
    JGE 0x004cb5f9                      ; 004cb5f5
        ;   XREF to: 004cb5f9 (CONDITIONAL_JUMP)  ; LAB_004cb5f9
    MOV EBP,EDX                         ; 004cb5f7
    MOV EAX,dword ptr [EBX + 0x10]      ; 004cb5f9
        ;   Label: LAB_004cb5f9
    MOV dword ptr [ESP + 0x4],EAX       ; 004cb5fc
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cb600
    MOV EAX,dword ptr [EBX + 0x40]      ; 004cb604
    CMP EAX,ECX                         ; 004cb607
    JGE 0x004cb60f                      ; 004cb609
        ;   XREF to: 004cb60f (CONDITIONAL_JUMP)  ; LAB_004cb60f
    MOV dword ptr [ESP + 0x4],EAX       ; 004cb60b
    MOV EAX,dword ptr [EBX + 0x14]      ; 004cb60f
        ;   Label: LAB_004cb60f
    MOV ESI,dword ptr [EBX + 0x44]      ; 004cb612
    NEG EAX                             ; 004cb615
    CMP EAX,ESI                         ; 004cb617
    JGE 0x004cb61d                      ; 004cb619
        ;   XREF to: 004cb61d (CONDITIONAL_JUMP)  ; LAB_004cb61d
    MOV EAX,ESI                         ; 004cb61b
    MOV ESI,dword ptr [EBX + 0x14]      ; 004cb61d
        ;   Label: LAB_004cb61d
    MOV dword ptr [ESP],ESI             ; 004cb620
    MOV EDI,dword ptr [ESP]             ; 004cb623
    MOV ESI,dword ptr [EBX + 0x48]      ; 004cb626
    CMP ESI,EDI                         ; 004cb629
    JGE 0x004cb630                      ; 004cb62b
        ;   XREF to: 004cb630 (CONDITIONAL_JUMP)  ; LAB_004cb630
    MOV dword ptr [ESP],ESI             ; 004cb62d
    MOV EDI,EAX                         ; 004cb630
        ;   Label: LAB_004cb630
    TEST EAX,EAX                        ; 004cb632
    JL 0x004cb6af                       ; 004cb634
        ;   XREF to: 004cb6af (CONDITIONAL_JUMP)  ; LAB_004cb6af
    MOV EDI,dword ptr [ESP]             ; 004cb63a
        ;   Label: LAB_004cb63a
    DEC EDI                             ; 004cb63d
    TEST EDI,EDI                        ; 004cb63e
    JL 0x004cb67c                       ; 004cb640
        ;   XREF to: 004cb67c (CONDITIONAL_JUMP)  ; LAB_004cb67c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cb642
    DEC EAX                             ; 004cb646
    MOV dword ptr [ESP + 0xc],EAX       ; 004cb647
    MOV ESI,EBP                         ; 004cb64b
        ;   Label: LAB_004cb64b
    TEST EBP,EBP                        ; 004cb64d
    JL 0x004cb6d4                       ; 004cb64f
        ;   XREF to: 004cb6d4 (CONDITIONAL_JUMP)  ; LAB_004cb6d4
        ;   Label: LAB_004cb64f
    MOV ESI,dword ptr [ESP + 0xc]       ; 004cb655
    TEST ESI,ESI                        ; 004cb659
    JL 0x004cb677                       ; 004cb65b
        ;   XREF to: 004cb677 (CONDITIONAL_JUMP)  ; LAB_004cb677
    MOV EAX,dword ptr [EBX + 0x30]      ; 004cb65d
        ;   Label: LAB_004cb65d
    ADD EAX,EDI                         ; 004cb660
    PUSH EAX                            ; 004cb662
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004cb663
    ADD EAX,ESI                         ; 004cb666
    PUSH EAX                            ; 004cb668
    PUSH EBX                            ; 004cb669
    DEC ESI                             ; 004cb66a
    CALL FUN_004cb400                   ; 004cb66b
        ;   XREF to: 004cb400 (UNCONDITIONAL_CALL)  ; undefined FUN_004cb400()
    ADD ESP,0xc                         ; 004cb670
    TEST ESI,ESI                        ; 004cb673
    JGE 0x004cb65d                      ; 004cb675
        ;   XREF to: 004cb65d (CONDITIONAL_JUMP)  ; LAB_004cb65d
    DEC EDI                             ; 004cb677
        ;   Label: LAB_004cb677
    TEST EDI,EDI                        ; 004cb678
    JGE 0x004cb64b                      ; 004cb67a
        ;   XREF to: 004cb64b (CONDITIONAL_JUMP)  ; LAB_004cb64b
    ADD ESP,0x10                        ; 004cb67c
        ;   Label: LAB_004cb67c
    POP EBP                             ; 004cb67f
    POP EDI                             ; 004cb680
    POP ESI                             ; 004cb681
    POP EBX                             ; 004cb682
    RET                                 ; 004cb683
    INC EDI                             ; 004cb684
        ;   Label: LAB_004cb684
    TEST EDI,EDI                        ; 004cb685
    JGE 0x004cb63a                      ; 004cb687
        ;   XREF to: 004cb63a (CONDITIONAL_JUMP)  ; LAB_004cb63a
    MOV ESI,EBP                         ; 004cb689
        ;   Label: LAB_004cb689
    TEST EBP,EBP                        ; 004cb68b
    JL 0x004cb6ba                       ; 004cb68d
        ;   XREF to: 004cb6ba (CONDITIONAL_JUMP)  ; LAB_004cb6ba
        ;   Label: LAB_004cb68d
    MOV ESI,dword ptr [ESP + 0x8]       ; 004cb68f
    TEST ESI,ESI                        ; 004cb693
        ;   Label: LAB_004cb693
    JL 0x004cb684                       ; 004cb695
        ;   XREF to: 004cb684 (CONDITIONAL_JUMP)  ; LAB_004cb684
    MOV EAX,dword ptr [EBX + 0x30]      ; 004cb697
    ADD EAX,EDI                         ; 004cb69a
    PUSH EAX                            ; 004cb69c
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004cb69d
    ADD EAX,ESI                         ; 004cb6a0
    PUSH EAX                            ; 004cb6a2
    PUSH EBX                            ; 004cb6a3
    DEC ESI                             ; 004cb6a4
    CALL FUN_004cb400                   ; 004cb6a5
        ;   XREF to: 004cb400 (UNCONDITIONAL_CALL)  ; undefined FUN_004cb400()
    ADD ESP,0xc                         ; 004cb6aa
    JMP 0x004cb693                      ; 004cb6ad
        ;   XREF to: 004cb693 (UNCONDITIONAL_JUMP)  ; LAB_004cb693
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cb6af
        ;   Label: LAB_004cb6af
    DEC EAX                             ; 004cb6b3
    MOV dword ptr [ESP + 0x8],EAX       ; 004cb6b4
    JMP 0x004cb689                      ; 004cb6b8
        ;   XREF to: 004cb689 (UNCONDITIONAL_JUMP)  ; LAB_004cb689
    MOV EAX,dword ptr [EBX + 0x30]      ; 004cb6ba
        ;   Label: LAB_004cb6ba
    ADD EAX,EDI                         ; 004cb6bd
    PUSH EAX                            ; 004cb6bf
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004cb6c0
    ADD EAX,ESI                         ; 004cb6c3
    PUSH EAX                            ; 004cb6c5
    PUSH EBX                            ; 004cb6c6
    INC ESI                             ; 004cb6c7
    CALL FUN_004cb400                   ; 004cb6c8
        ;   XREF to: 004cb400 (UNCONDITIONAL_CALL)  ; undefined FUN_004cb400()
    ADD ESP,0xc                         ; 004cb6cd
    TEST ESI,ESI                        ; 004cb6d0
    JMP 0x004cb68d                      ; 004cb6d2
        ;   XREF to: 004cb68d (UNCONDITIONAL_JUMP)  ; LAB_004cb68d
    MOV EAX,dword ptr [EBX + 0x30]      ; 004cb6d4
        ;   Label: LAB_004cb6d4
    ADD EAX,EDI                         ; 004cb6d7
    PUSH EAX                            ; 004cb6d9
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004cb6da
    ADD EAX,ESI                         ; 004cb6dd
    PUSH EAX                            ; 004cb6df
    PUSH EBX                            ; 004cb6e0
    INC ESI                             ; 004cb6e1
    CALL FUN_004cb400                   ; 004cb6e2
        ;   XREF to: 004cb400 (UNCONDITIONAL_CALL)  ; undefined FUN_004cb400()
    ADD ESP,0xc                         ; 004cb6e7
    TEST ESI,ESI                        ; 004cb6ea
    JMP 0x004cb64f                      ; 004cb6ec
        ;   XREF to: 004cb64f (UNCONDITIONAL_JUMP)  ; LAB_004cb64f

