; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e670(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_00458320 at 0045835c
;   FUN_004b0a40 at 004b0a6d
;   FUN_0056a160 at 0056a19c
;
; Referenced Globals:
;   TerminatedCString s_core_ammobox_cpp_005cb271
;   TerminatedCString s_Out_of_memory_005cb285
;   TerminatedCString s_Some_ammo_005cb293
;   undefined4 s_ome_ammo_005cb293+1
;   undefined4 s_me_ammo_005cb293+2
;   undefined4 s_e_ammo_005cb293+3
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0040ddb0
;   FUN_0040e240
;   FUN_0040e440
;   FUN_004dadb0
;   FUN_004e4500
;   FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e670
        ;   Label: FUN_0040e670
    PUSH EBP                            ; 0040e671
    MOV EBP,dword ptr [ESP + 0xc]       ; 0040e672
    MOV EDX,dword ptr [EBP + 0x47c]     ; 0040e676
    TEST EDX,EDX                        ; 0040e67c
    JNZ 0x0040e68c                      ; 0040e67e
        ;   XREF to: 0040e68c (CONDITIONAL_JUMP)  ; LAB_0040e68c
    CMP dword ptr [EBP + 0x470],0x0     ; 0040e680
    JNZ 0x0040e6b5                      ; 0040e687
        ;   XREF to: 0040e6b5 (CONDITIONAL_JUMP)  ; LAB_0040e6b5
    POP EBP                             ; 0040e689
    POP EBX                             ; 0040e68a
    RET                                 ; 0040e68b
    PUSH 0x0                            ; 0040e68c
        ;   Label: LAB_0040e68c
    PUSH 0x1                            ; 0040e68e
    PUSH EDX                            ; 0040e690
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0040e691
    PUSH EBX                            ; 0040e695
    CALL FUN_004dadb0                   ; 0040e696
        ;   XREF to: 004dadb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dadb0()
    MOV dword ptr [EBP + 0x47c],0x0     ; 0040e69b
    ADD ESP,0x10                        ; 0040e6a5
    MOV dword ptr [EBP + 0x470],0x0     ; 0040e6a8
    POP EBP                             ; 0040e6b2
    POP EBX                             ; 0040e6b3
    RET                                 ; 0040e6b4
    PUSH 0x47c                          ; 0040e6b5
        ;   Label: LAB_0040e6b5
    CALL FUN_005b8be2                   ; 0040e6ba
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 0040e6bf
    TEST EAX,EAX                        ; 0040e6c2
    JZ 0x0040e6cf                       ; 0040e6c4
        ;   XREF to: 0040e6cf (CONDITIONAL_JUMP)  ; LAB_0040e6cf
    PUSH EAX                            ; 0040e6c6
    CALL FUN_0040ddb0                   ; 0040e6c7
        ;   XREF to: 0040ddb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ddb0()
    ADD ESP,0x4                         ; 0040e6cc
    PUSH EDI                            ; 0040e6cf
        ;   Label: LAB_0040e6cf
    PUSH ESI                            ; 0040e6d0
    MOV EBX,EAX                         ; 0040e6d1
    TEST EAX,EAX                        ; 0040e6d3
    JNZ 0x0040e6fa                      ; 0040e6d5
        ;   XREF to: 0040e6fa (CONDITIONAL_JUMP)  ; LAB_0040e6fa
    MOV ESI,0x5cb271                    ; 0040e6d7 | = "..\\core\\ammobox.cpp"
    MOV EDI,0xa2                        ; 0040e6dc
    PUSH 0x5cb285                       ; 0040e6e1 | = "Out of memory"
    MOV dword ptr [0x01d046a0],ESI      ; 0040e6e6 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0040e6ec | DAT_01d046a4
    CALL FUN_004e4500                   ; 0040e6f2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0040e6f7
    LEA ESI,[EBP + 0x430]               ; 0040e6fa
        ;   Label: LAB_0040e6fa
    PUSH ESI                            ; 0040e700
    PUSH EBX                            ; 0040e701
    CALL FUN_0040e240                   ; 0040e702
        ;   XREF to: 0040e240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e240()
    ADD ESP,0x8                         ; 0040e707
    MOV EAX,dword ptr [EBP + 0x470]     ; 0040e70a
    PUSH EAX                            ; 0040e710
    PUSH EBX                            ; 0040e711
    CALL FUN_0040e440                   ; 0040e712
        ;   XREF to: 0040e440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e440()
    MOV EAX,dword ptr [EBP + 0x474]     ; 0040e717
    ADD ESP,0x8                         ; 0040e71d
    MOV dword ptr [EBX + 0x474],EAX     ; 0040e720
    PUSH EBX                            ; 0040e726
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040e727
    CALL dword ptr [EAX + 0x8]          ; 0040e72d
    ADD ESP,0x4                         ; 0040e730
    PUSH ESI                            ; 0040e733
    PUSH EBX                            ; 0040e734
    CALL FUN_0040e240                   ; 0040e735
        ;   XREF to: 0040e240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e240()
    ADD ESP,0x8                         ; 0040e73a
    MOV EDI,EBX                         ; 0040e73d
    MOV ESI,0x5cb293                    ; 0040e73f | = "Some_ammo"
    PUSH EDI                            ; 0040e744
    MOV AL,byte ptr [ESI]               ; 0040e745 | = "Some_ammo" | s_me_ammo_005cb293+2
        ;   Label: LAB_0040e745
    MOV byte ptr [EDI],AL               ; 0040e747
    CMP AL,0x0                          ; 0040e749
    JZ 0x0040e75d                       ; 0040e74b
        ;   XREF to: 0040e75d (CONDITIONAL_JUMP)  ; LAB_0040e75d
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e74d | s_ome_ammo_005cb293+1 | s_e_ammo_005cb293+3
    ADD ESI,0x2                         ; 0040e750
    MOV byte ptr [EDI + 0x1],AL         ; 0040e753
    ADD EDI,0x2                         ; 0040e756
    CMP AL,0x0                          ; 0040e759
    JNZ 0x0040e745                      ; 0040e75b
        ;   XREF to: 0040e745 (CONDITIONAL_JUMP)  ; LAB_0040e745
    POP EDI                             ; 0040e75d
        ;   Label: LAB_0040e75d
    PUSH 0x0                            ; 0040e75e
    PUSH 0x1                            ; 0040e760
    PUSH EBX                            ; 0040e762
    MOV EDX,dword ptr [ESP + 0x24]      ; 0040e763
    PUSH EDX                            ; 0040e767
    CALL FUN_004dadb0                   ; 0040e768
        ;   XREF to: 004dadb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dadb0()
    ADD ESP,0x10                        ; 0040e76d
    MOV dword ptr [EBP + 0x470],0x0     ; 0040e770
    POP ESI                             ; 0040e77a
    POP EDI                             ; 0040e77b
    POP EBP                             ; 0040e77c
    POP EBX                             ; 0040e77d
    RET                                 ; 0040e77e

