; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00448640(void)
;
;
; XREF[1]:
;   FUN_004e4e20 at 004e4e87
;
; Referenced Globals:
;   undefined4 DAT_01511cb8
;   undefined4 DAT_01511cbc
;   undefined4 DAT_01511cc0
;   undefined4 DAT_01511cc4
;   undefined4 DAT_01511cc8
;   undefined4 DAT_01511ccc
;   undefined4 DAT_01511cd0
;   undefined4 DAT_01511cd4
;   undefined4 DAT_01511cd8
;   undefined4 DAT_01511cdc
;   undefined4 DAT_01511ce0
;   undefined4 DAT_01c25590
;   undefined4 DAT_01d63250
;
; Called Functions:
;   FUN_004a7b90
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448640
        ;   Label: FUN_00448640
    PUSH ESI                            ; 00448641
    PUSH EDI                            ; 00448642
    PUSH EBP                            ; 00448643
    MOV EDX,dword ptr [0x01511cb8]      ; 00448644 | DAT_01511cb8
    TEST EDX,EDX                        ; 0044864a
    JNZ 0x004487c5                      ; 0044864c
        ;   XREF to: 004487c5 (CONDITIONAL_JUMP)  ; LAB_004487c5
    XOR EBX,EBX                         ; 00448652
        ;   Label: LAB_00448652
    MOV ESI,dword ptr [0x01511cbc]      ; 00448654 | DAT_01511cbc
    MOV dword ptr [0x01511cb8],EBX      ; 0044865a | DAT_01511cb8
    TEST ESI,ESI                        ; 00448660
    JZ 0x00448677                       ; 00448662
        ;   XREF to: 00448677 (CONDITIONAL_JUMP)  ; LAB_00448677
    PUSH EBX                            ; 00448664
    PUSH ESI                            ; 00448665
    CALL FUN_004a7b90                   ; 00448666
        ;   XREF to: 004a7b90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b90()
    ADD ESP,0x8                         ; 0044866b
    PUSH EAX                            ; 0044866e
    CALL FUN_005b7fdc                   ; 0044866f
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00448674
    XOR EBP,EBP                         ; 00448677
        ;   Label: LAB_00448677
    MOV EAX,[0x01511cc0]                ; 00448679 | DAT_01511cc0
    MOV dword ptr [0x01511cbc],EBP      ; 0044867e | DAT_01511cbc
    TEST EAX,EAX                        ; 00448684
    JZ 0x0044869b                       ; 00448686
        ;   XREF to: 0044869b (CONDITIONAL_JUMP)  ; LAB_0044869b
    PUSH EBP                            ; 00448688
    PUSH EAX                            ; 00448689
    CALL FUN_004a7b90                   ; 0044868a
        ;   XREF to: 004a7b90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b90()
    ADD ESP,0x8                         ; 0044868f
    PUSH EAX                            ; 00448692
    CALL FUN_005b7fdc                   ; 00448693
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00448698
    XOR ECX,ECX                         ; 0044869b
        ;   Label: LAB_0044869b
    MOV EBX,dword ptr [0x01511cc4]      ; 0044869d | DAT_01511cc4
    MOV dword ptr [0x01511cc0],ECX      ; 004486a3 | DAT_01511cc0
    TEST EBX,EBX                        ; 004486a9
    JZ 0x004486c0                       ; 004486ab
        ;   XREF to: 004486c0 (CONDITIONAL_JUMP)  ; LAB_004486c0
    PUSH ECX                            ; 004486ad
    PUSH EBX                            ; 004486ae
    CALL FUN_004a7b90                   ; 004486af
        ;   XREF to: 004a7b90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b90()
    ADD ESP,0x8                         ; 004486b4
    PUSH EAX                            ; 004486b7
    CALL FUN_005b7fdc                   ; 004486b8
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004486bd
    XOR EDI,EDI                         ; 004486c0
        ;   Label: LAB_004486c0
    MOV EBP,dword ptr [0x01511cc8]      ; 004486c2 | DAT_01511cc8
    MOV dword ptr [0x01511cc4],EDI      ; 004486c8 | DAT_01511cc4
    TEST EBP,EBP                        ; 004486ce
    JZ 0x004486e5                       ; 004486d0
        ;   XREF to: 004486e5 (CONDITIONAL_JUMP)  ; LAB_004486e5
    PUSH EDI                            ; 004486d2
    PUSH EBP                            ; 004486d3
    CALL FUN_004a7b90                   ; 004486d4
        ;   XREF to: 004a7b90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b90()
    ADD ESP,0x8                         ; 004486d9
    PUSH EAX                            ; 004486dc
    CALL FUN_005b7fdc                   ; 004486dd
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004486e2
    XOR EDX,EDX                         ; 004486e5
        ;   Label: LAB_004486e5
    MOV EBX,dword ptr [0x01511ccc]      ; 004486e7 | DAT_01511ccc
    MOV dword ptr [0x01c25590],EDX      ; 004486ed | DAT_01c25590
    MOV dword ptr [0x01511cc8],EDX      ; 004486f3 | DAT_01511cc8
    TEST EBX,EBX                        ; 004486f9
    JZ 0x00448710                       ; 004486fb
        ;   XREF to: 00448710 (CONDITIONAL_JUMP)  ; LAB_00448710
    PUSH EDX                            ; 004486fd
    PUSH EBX                            ; 004486fe
    CALL FUN_004a7b90                   ; 004486ff
        ;   XREF to: 004a7b90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b90()
    ADD ESP,0x8                         ; 00448704
    PUSH EAX                            ; 00448707
    CALL FUN_005b7fdc                   ; 00448708
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0044870d
    XOR EDI,EDI                         ; 00448710
        ;   Label: LAB_00448710
    MOV EBP,dword ptr [0x01511cd0]      ; 00448712 | DAT_01511cd0
    MOV dword ptr [0x01511ccc],EDI      ; 00448718 | DAT_01511ccc
    TEST EBP,EBP                        ; 0044871e
    JZ 0x00448735                       ; 00448720
        ;   XREF to: 00448735 (CONDITIONAL_JUMP)  ; LAB_00448735
    PUSH EDI                            ; 00448722
    PUSH EBP                            ; 00448723
    CALL FUN_004a7b90                   ; 00448724
        ;   XREF to: 004a7b90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b90()
    ADD ESP,0x8                         ; 00448729
    PUSH EAX                            ; 0044872c
    CALL FUN_005b7fdc                   ; 0044872d
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00448732
    XOR EDX,EDX                         ; 00448735
        ;   Label: LAB_00448735
    MOV ECX,dword ptr [0x01d63250]      ; 00448737 | DAT_01d63250
    MOV dword ptr [0x01511cd0],EDX      ; 0044873d | DAT_01511cd0
    TEST ECX,ECX                        ; 00448743
    JZ 0x004487c0                       ; 00448745
        ;   XREF to: 004487c0 (CONDITIONAL_JUMP)  ; LAB_004487c0
    MOV EBX,dword ptr [0x01511cd4]      ; 0044874b | DAT_01511cd4
    TEST EBX,EBX                        ; 00448751
    JNZ 0x004487de                      ; 00448753
        ;   XREF to: 004487de (CONDITIONAL_JUMP)  ; LAB_004487de
    XOR ESI,ESI                         ; 00448759
        ;   Label: LAB_00448759
    MOV EDI,dword ptr [0x01511cd8]      ; 0044875b | DAT_01511cd8
    MOV dword ptr [0x01511cd4],ESI      ; 00448761 | DAT_01511cd4
    TEST EDI,EDI                        ; 00448767
    JZ 0x00448779                       ; 00448769
        ;   XREF to: 00448779 (CONDITIONAL_JUMP)  ; LAB_00448779
    PUSH 0x2                            ; 0044876b
    MOV EDX,dword ptr [EDI + 0x6a44]    ; 0044876d
    PUSH EDI                            ; 00448773
    CALL dword ptr [EDX]                ; 00448774
    ADD ESP,0x8                         ; 00448776
    XOR EBP,EBP                         ; 00448779
        ;   Label: LAB_00448779
    MOV EAX,[0x01511cdc]                ; 0044877b | DAT_01511cdc
    MOV dword ptr [0x01511cd8],EBP      ; 00448780 | DAT_01511cd8
    TEST EAX,EAX                        ; 00448786
    JZ 0x00448798                       ; 00448788
        ;   XREF to: 00448798 (CONDITIONAL_JUMP)  ; LAB_00448798
    PUSH 0x2                            ; 0044878a
    MOV EDX,dword ptr [EAX + 0x6a44]    ; 0044878c
    PUSH EAX                            ; 00448792
    CALL dword ptr [EDX]                ; 00448793
    ADD ESP,0x8                         ; 00448795
    XOR EDX,EDX                         ; 00448798
        ;   Label: LAB_00448798
    MOV ECX,dword ptr [0x01511ce0]      ; 0044879a | DAT_01511ce0
    MOV dword ptr [0x01511cdc],EDX      ; 004487a0 | DAT_01511cdc
    TEST ECX,ECX                        ; 004487a6
    JZ 0x004487b8                       ; 004487a8
        ;   XREF to: 004487b8 (CONDITIONAL_JUMP)  ; LAB_004487b8
    PUSH 0x2                            ; 004487aa
    MOV EDX,dword ptr [ECX + 0x6a44]    ; 004487ac
    PUSH ECX                            ; 004487b2
    CALL dword ptr [EDX]                ; 004487b3
    ADD ESP,0x8                         ; 004487b5
    XOR EBX,EBX                         ; 004487b8
        ;   Label: LAB_004487b8
    MOV dword ptr [0x01511ce0],EBX      ; 004487ba | DAT_01511ce0
    POP EBP                             ; 004487c0
        ;   Label: LAB_004487c0
    POP EDI                             ; 004487c1
    POP ESI                             ; 004487c2
    POP EBX                             ; 004487c3
    RET                                 ; 004487c4
    PUSH 0x0                            ; 004487c5
        ;   Label: LAB_004487c5
    PUSH EDX                            ; 004487c7
    CALL FUN_004a7b90                   ; 004487c8
        ;   XREF to: 004a7b90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b90()
    ADD ESP,0x8                         ; 004487cd
    PUSH EAX                            ; 004487d0
    CALL FUN_005b7fdc                   ; 004487d1
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004487d6
    JMP 0x00448652                      ; 004487d9
        ;   XREF to: 00448652 (UNCONDITIONAL_JUMP)  ; LAB_00448652
    PUSH 0x2                            ; 004487de
        ;   Label: LAB_004487de
    MOV EDX,dword ptr [EBX + 0x6a44]    ; 004487e0
    PUSH EBX                            ; 004487e6
    CALL dword ptr [EDX]                ; 004487e7
    ADD ESP,0x8                         ; 004487e9
    JMP 0x00448759                      ; 004487ec
        ;   XREF to: 00448759 (UNCONDITIONAL_JUMP)  ; LAB_00448759

