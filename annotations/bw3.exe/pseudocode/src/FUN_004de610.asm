; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004de610(int param_1,uint param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00491f40 at 00492ba1
;   FUN_004d3250 at 004d3279
;
; Referenced Globals:
;   undefined4 s_You_used_a_key_005c665e+1
;   TerminatedCString s_key_unlock_wav_005c666f
;   TerminatedCString s_You_need_the_right_key_005c667e
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d2130c
;   undefined4 DAT_01d70a74
;
; Called Functions:
;   FUN_0040c840
;   FUN_004b46b0
;   FUN_00508960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de610
        ;   Label: FUN_004de610
    PUSH ESI                            ; 004de611
    PUSH EDI                            ; 004de612
    PUSH EBP                            ; 004de613
    MOV EDI,dword ptr [ESP + 0x14]      ; 004de614
    MOV EBP,dword ptr [ESP + 0x18]      ; 004de618
    TEST EBP,EBP                        ; 004de61c
    JZ 0x004de693                       ; 004de61e
        ;   XREF to: 004de693 (CONDITIONAL_JUMP)  ; LAB_004de693
    MOV EDX,dword ptr [EDI + 0x10]      ; 004de624
    XOR ESI,ESI                         ; 004de627
    TEST EDX,EDX                        ; 004de629
    JLE 0x004de6a8                      ; 004de62b
        ;   XREF to: 004de6a8 (CONDITIONAL_JUMP)  ; LAB_004de6a8
    MOV EBX,EDI                         ; 004de631
    MOV EAX,[0x01d70a74]                ; 004de633 | DAT_01d70a74
        ;   Label: LAB_004de633
    PUSH EAX                            ; 004de638
    MOV EDX,dword ptr [EBX + 0x14]      ; 004de639
    PUSH EDX                            ; 004de63c
    CALL FUN_0040c840                   ; 004de63d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004de642
    TEST EAX,EAX                        ; 004de645
    JZ 0x004de69d                       ; 004de647
        ;   XREF to: 004de69d (CONDITIONAL_JUMP)  ; LAB_004de69d
    TEST dword ptr [EAX + 0x2d4],EBP    ; 004de649
    JZ 0x004de69d                       ; 004de64f
        ;   XREF to: 004de69d (CONDITIONAL_JUMP)  ; LAB_004de69d
    CMP dword ptr [ESP + 0x1c],0x0      ; 004de651
    JZ 0x004de693                       ; 004de656
        ;   XREF to: 004de693 (CONDITIONAL_JUMP)  ; LAB_004de693
    PUSH 0x40a00000                     ; 004de658
    PUSH 0x5c665f                       ; 004de65d | s_You_used_a_key_005c665e+1
    CALL FUN_00508960                   ; 004de662
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004de667
    PUSH EAX                            ; 004de66a
    MOV ESI,dword ptr [0x005fe9dc]      ; 004de66b | DAT_005fe9dc
    PUSH ESI                            ; 004de671 | DAT_01d2130c
    CALL FUN_004b46b0                   ; 004de672
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b46b0()
    MOV EBP,dword ptr [EDI + 0x4]       ; 004de677
    ADD ESP,0xc                         ; 004de67a
    TEST EBP,EBP                        ; 004de67d
    JZ 0x004de693                       ; 004de67f
        ;   XREF to: 004de693 (CONDITIONAL_JUMP)  ; LAB_004de693
    PUSH 0x5c666f                       ; 004de681 | = "key-unlock.wav"
    MOV EBX,dword ptr [EBP + 0x154]     ; 004de686
    PUSH EBP                            ; 004de68c
    CALL dword ptr [EBX + 0x2c]         ; 004de68d
    ADD ESP,0x8                         ; 004de690
    MOV EAX,0x1                         ; 004de693
        ;   Label: LAB_004de693
    POP EBP                             ; 004de698
    POP EDI                             ; 004de699
    POP ESI                             ; 004de69a
    POP EBX                             ; 004de69b
    RET                                 ; 004de69c
    INC ESI                             ; 004de69d
        ;   Label: LAB_004de69d
    MOV ECX,dword ptr [EDI + 0x10]      ; 004de69e
    ADD EBX,0x4                         ; 004de6a1
    CMP ESI,ECX                         ; 004de6a4
    JL 0x004de633                       ; 004de6a6
        ;   XREF to: 004de633 (CONDITIONAL_JUMP)  ; LAB_004de633
    CMP dword ptr [ESP + 0x1c],0x0      ; 004de6a8
        ;   Label: LAB_004de6a8
    JZ 0x004de6d1                       ; 004de6ad
        ;   XREF to: 004de6d1 (CONDITIONAL_JUMP)  ; LAB_004de6d1
    PUSH 0x40a00000                     ; 004de6af
    PUSH 0x5c667e                       ; 004de6b4 | = "You need the right key"
    CALL FUN_00508960                   ; 004de6b9
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004de6be
    PUSH EAX                            ; 004de6c1
    MOV ESI,dword ptr [0x005fe9dc]      ; 004de6c2 | DAT_005fe9dc
    PUSH ESI                            ; 004de6c8 | DAT_01d2130c
    CALL FUN_004b46b0                   ; 004de6c9
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b46b0()
    ADD ESP,0xc                         ; 004de6ce
    XOR EAX,EAX                         ; 004de6d1
        ;   Label: LAB_004de6d1
    POP EBP                             ; 004de6d3
    POP EDI                             ; 004de6d4
    POP ESI                             ; 004de6d5
    POP EBX                             ; 004de6d6
    RET                                 ; 004de6d7

