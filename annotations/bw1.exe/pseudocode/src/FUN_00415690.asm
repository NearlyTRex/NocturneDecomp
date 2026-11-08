; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00415690(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005d3d12
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01ccf5ec
;
; Called Functions:
;   FUN_0040cc60
;   FUN_0042f240
;   FUN_00483e60
;   FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415690
        ;   Label: FUN_00415690
    PUSH EDI                            ; 00415691
    PUSH EBP                            ; 00415692
    MOV EBX,dword ptr [ESP + 0x10]      ; 00415693
    CMP dword ptr [EBX + 0x1fab0],0x0   ; 00415697
    JNZ 0x004156c3                      ; 0041569e
        ;   XREF to: 004156c3 (CONDITIONAL_JUMP)  ; LAB_004156c3
    MOV ECX,dword ptr [EBX + 0x27a8]    ; 004156a0
    TEST ECX,ECX                        ; 004156a6
    JZ 0x004156c9                       ; 004156a8
        ;   XREF to: 004156c9 (CONDITIONAL_JUMP)  ; LAB_004156c9
    JNZ 0x004156d6                      ; 004156aa
        ;   XREF to: 004156d6 (CONDITIONAL_JUMP)  ; LAB_004156d6
    CMP dword ptr [EBX + 0x27a8],0x0    ; 004156ac
        ;   Label: LAB_004156ac
    JZ 0x004156c3                       ; 004156b3
        ;   XREF to: 004156c3 (CONDITIONAL_JUMP)  ; LAB_004156c3
    MOV EAX,[0x0061d95c]                ; 004156b5 | DAT_0061d95c
    CMP dword ptr [EAX + 0x25c],0x0     ; 004156ba | DAT_01ccf5ec
    JNZ 0x00415705                      ; 004156c1
        ;   XREF to: 00415705 (CONDITIONAL_JUMP)  ; LAB_00415705
    XOR EAX,EAX                         ; 004156c3
        ;   Label: LAB_004156c3
    POP EBP                             ; 004156c5
    POP EDI                             ; 004156c6
    POP EBX                             ; 004156c7
    RET                                 ; 004156c8
    PUSH EBX                            ; 004156c9
        ;   Label: LAB_004156c9
    CALL FUN_0042f240                   ; 004156ca
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 004156cf
    POP EBP                             ; 004156d2
    POP EDI                             ; 004156d3
    POP EBX                             ; 004156d4
    RET                                 ; 004156d5
    MOV EDI,dword ptr [0x00612560]      ; 004156d6 | DAT_00612560
        ;   Label: LAB_004156d6
    PUSH EDI                            ; 004156dc | DAT_01bc120c
    CALL FUN_00483e60                   ; 004156dd
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 004156e2
    TEST EAX,EAX                        ; 004156e5
    JZ 0x004156ac                       ; 004156e7
        ;   XREF to: 004156ac (CONDITIONAL_JUMP)  ; LAB_004156ac
    PUSH 0x5d3d12                       ; 004156e9 | = "heroCanSee"
    MOV EBP,dword ptr [0x0061b4d0]      ; 004156ee | DAT_0061b4d0
    PUSH EBP                            ; 004156f4
    CALL FUN_004a6c30                   ; 004156f5
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 004156fa
    TEST EAX,EAX                        ; 004156fd
    JNZ 0x004156ac                      ; 004156ff
        ;   XREF to: 004156ac (CONDITIONAL_JUMP)  ; LAB_004156ac
    POP EBP                             ; 00415701
    POP EDI                             ; 00415702
    POP EBX                             ; 00415703
    RET                                 ; 00415704
    PUSH 0x2                            ; 00415705
        ;   Label: LAB_00415705
    PUSH 0x0                            ; 00415707
    CALL FUN_0040cc60                   ; 00415709
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 0041570e
    CMP EAX,0x1                         ; 00415711
    JNZ 0x004156c3                      ; 00415714
        ;   XREF to: 004156c3 (CONDITIONAL_JUMP)  ; LAB_004156c3
    PUSH EBX                            ; 00415716
    CALL FUN_0042f240                   ; 00415717
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 0041571c
    POP EBP                             ; 0041571f
    POP EDI                             ; 00415720
    POP EBX                             ; 00415721
    RET                                 ; 00415722

