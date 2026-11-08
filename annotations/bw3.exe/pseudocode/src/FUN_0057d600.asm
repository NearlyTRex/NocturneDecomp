; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d600(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine3_005d7a01
;   TerminatedCString s_Bip01_L_Finger1_005d7a0e
;   TerminatedCString s_Bip01_R_Finger1_005d7a1e
;   TerminatedCString s_Bip01jaw2_005d7a2e
;   TerminatedCString s_Bip01_Head_005d7a38
;
; Called Functions:
;   FUN_0040ce40
;   FUN_00489110
;   FUN_00548090
;   FUN_0054e6b0
;   FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d600
        ;   Label: FUN_0057d600
    PUSH ESI                            ; 0057d601
    SUB ESP,0x4                         ; 0057d602
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057d605
    LEA ESI,[EBX + 0x158]               ; 0057d609
    PUSH ESI                            ; 0057d60f
    CALL FUN_0054e6b0                   ; 0057d610
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 0057d615
    PUSH ESI                            ; 0057d618
    CALL FUN_0054eac0                   ; 0057d619
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0057d61e
    PUSH 0x1                            ; 0057d621
    PUSH 0x5d7a01                       ; 0057d623 | = "Bip01 Spine3"
    PUSH EAX                            ; 0057d628
    MOV ESI,EAX                         ; 0057d629
    CALL FUN_00548090                   ; 0057d62b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0057d630
    PUSH 0x1                            ; 0057d633
    PUSH 0x5d7a0e                       ; 0057d635 | = "Bip01 L Finger1"
    PUSH ESI                            ; 0057d63a
    MOV dword ptr [EBX + 0xd058],EAX    ; 0057d63b
    CALL FUN_00548090                   ; 0057d641
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0057d646
    PUSH 0x1                            ; 0057d649
    PUSH 0x5d7a1e                       ; 0057d64b | = "Bip01 R Finger1"
    PUSH ESI                            ; 0057d650
    MOV dword ptr [EBX + 0xd05c],EAX    ; 0057d651
    CALL FUN_00548090                   ; 0057d657
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0057d65c
    PUSH 0x1                            ; 0057d65f
    PUSH 0x5d7a2e                       ; 0057d661 | = "Bip01jaw2"
    PUSH ESI                            ; 0057d666
    MOV dword ptr [EBX + 0xd060],EAX    ; 0057d667
    CALL FUN_00548090                   ; 0057d66d
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0057d672
    PUSH 0x1                            ; 0057d675
    PUSH 0x5d7a38                       ; 0057d677 | = "Bip01 Head"
    PUSH ESI                            ; 0057d67c
    MOV dword ptr [EBX + 0xd064],EAX    ; 0057d67d
    CALL FUN_00548090                   ; 0057d683
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0057d688
    PUSH EBX                            ; 0057d68b
    MOV dword ptr [EBX + 0xd068],EAX    ; 0057d68c
    CALL FUN_00489110                   ; 0057d692
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; undefined FUN_00489110()
    ADD ESP,0x4                         ; 0057d697
    PUSH 0x3f800000                     ; 0057d69a
    MOV EAX,dword ptr [EBX + 0xd06c]    ; 0057d69f
    PUSH 0x0                            ; 0057d6a5
    MOV dword ptr [EBX + 0xfc],EAX      ; 0057d6a7
    CALL FUN_0040ce40                   ; 0057d6ad
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 0057d6b2
    MOV EDX,dword ptr [EBX + 0xd054]    ; 0057d6b6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057d6bc
    MOV dword ptr [EBX + 0xd098],EAX    ; 0057d6c0
    ADD ESP,0x8                         ; 0057d6c6
    TEST EDX,EDX                        ; 0057d6c9
    JNZ 0x0057d6d7                      ; 0057d6cb
        ;   XREF to: 0057d6d7 (CONDITIONAL_JUMP)  ; LAB_0057d6d7
    MOV dword ptr [EBX + 0x3270],0x3fc00000 ; 0057d6cd
    PUSH 0x41f00000                     ; 0057d6d7
        ;   Label: LAB_0057d6d7
    PUSH 0x41200000                     ; 0057d6dc
    MOV dword ptr [EBX + 0xd070],0x0    ; 0057d6e1
    CALL FUN_0040ce40                   ; 0057d6eb
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [EBX + 0xd078],0x0    ; 0057d6f0
    MOV dword ptr [ESP + 0x8],EAX       ; 0057d6fa
    MOV dword ptr [EBX + 0xd07c],0x0    ; 0057d6fe
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057d708
    MOV dword ptr [EBX + 0xd074],EAX    ; 0057d70c
    ADD ESP,0x8                         ; 0057d712
    ADD ESP,0x4                         ; 0057d715
    POP ESI                             ; 0057d718
    POP EBX                             ; 0057d719
    RET                                 ; 0057d71a

