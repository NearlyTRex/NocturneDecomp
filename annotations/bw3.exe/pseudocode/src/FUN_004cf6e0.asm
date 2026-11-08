; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cf6e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00600530
;   undefined4 DAT_01d82088
;
; Called Functions:
;   FUN_004625a0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf6e0
        ;   Label: FUN_004cf6e0
    PUSH EDI                            ; 004cf6e1
    SUB ESP,0x1c                        ; 004cf6e2
    MOV ECX,dword ptr [ESP + 0x28]      ; 004cf6e5
    MOV EBX,ESI                         ; 004cf6e9
    MOV EDX,dword ptr [0x00600530]      ; 004cf6eb | DAT_00600530
    MOV ESI,dword ptr [EDX + 0x1008]    ; 004cf6f1 | DAT_01d82088
    LEA EAX,[ECX + 0x158]               ; 004cf6f7
    TEST ESI,ESI                        ; 004cf6fd
    JZ 0x004cf75f                       ; 004cf6ff
        ;   XREF to: 004cf75f (CONDITIONAL_JUMP)  ; LAB_004cf75f
    PUSH EAX                            ; 004cf701
    CALL FUN_004625a0                   ; 004cf702
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    LEA EDX,[EAX + 0x338]               ; 004cf707
    ADD ESP,0x4                         ; 004cf70d
    MOV EAX,ESP                         ; 004cf710
    MOV ECX,EDX                         ; 004cf712
    CMP EAX,EDX                         ; 004cf714
    JZ 0x004cf72b                       ; 004cf716
        ;   XREF to: 004cf72b (CONDITIONAL_JUMP)  ; LAB_004cf72b
    MOV EAX,dword ptr [EDX]             ; 004cf718
    MOV dword ptr [ESP],EAX             ; 004cf71a
    MOV EAX,dword ptr [EDX + 0x4]       ; 004cf71d
    MOV dword ptr [ESP + 0x4],EAX       ; 004cf720
    MOV EAX,dword ptr [EDX + 0x8]       ; 004cf724
    MOV dword ptr [ESP + 0x8],EAX       ; 004cf727
    LEA EAX,[ESP + 0xc]                 ; 004cf72b
        ;   Label: LAB_004cf72b
    LEA EDX,[ECX + 0xc]                 ; 004cf72f
    CMP EAX,EDX                         ; 004cf732
    JNZ 0x004cf749                      ; 004cf734
        ;   XREF to: 004cf749 (CONDITIONAL_JUMP)  ; LAB_004cf749
    MOV ECX,0x6                         ; 004cf736
        ;   Label: LAB_004cf736
    MOV ESI,ESP                         ; 004cf73b
    MOV EDI,EBX                         ; 004cf73d
    MOVSD.REP ES:EDI,ESI                ; 004cf73f
    MOV EAX,EBX                         ; 004cf741
    ADD ESP,0x1c                        ; 004cf743
    POP EDI                             ; 004cf746
    POP EBX                             ; 004cf747
    RET                                 ; 004cf748
    MOV EAX,dword ptr [EDX]             ; 004cf749
        ;   Label: LAB_004cf749
    MOV dword ptr [ESP + 0xc],EAX       ; 004cf74b
    MOV EAX,dword ptr [EDX + 0x4]       ; 004cf74f
    MOV dword ptr [ESP + 0x10],EAX      ; 004cf752
    MOV EAX,dword ptr [EDX + 0x8]       ; 004cf756
    MOV dword ptr [ESP + 0x14],EAX      ; 004cf759
    JMP 0x004cf736                      ; 004cf75d
        ;   XREF to: 004cf736 (UNCONDITIONAL_JUMP)  ; LAB_004cf736
    FLD float ptr [ECX + 0x2d4]         ; 004cf75f
        ;   Label: LAB_004cf75f
    CALL FUN_005a3120                   ; 004cf765
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH EAX                            ; 004cf76a
    FISTP dword ptr [ESP + 0x1c]        ; 004cf76b
    CALL FUN_004625a0                   ; 004cf76f
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    ADD ESP,0x4                         ; 004cf774
    MOV ECX,dword ptr [ESP + 0x18]      ; 004cf777
    MOV EDX,EAX                         ; 004cf77b
    LEA EAX,[ECX*0x4 + 0x0]             ; 004cf77d
    SUB EAX,ECX                         ; 004cf784
    MOV EDX,dword ptr [EDX + 0x350]     ; 004cf786
    SHL EAX,0x3                         ; 004cf78c
    ADD EDX,EAX                         ; 004cf78f
    MOV EAX,ESP                         ; 004cf791
    MOV ECX,EDX                         ; 004cf793
    CMP EAX,EDX                         ; 004cf795
    JZ 0x004cf7ac                       ; 004cf797
        ;   XREF to: 004cf7ac (CONDITIONAL_JUMP)  ; LAB_004cf7ac
    MOV EAX,dword ptr [EDX]             ; 004cf799
    MOV dword ptr [ESP],EAX             ; 004cf79b
    MOV EAX,dword ptr [EDX + 0x4]       ; 004cf79e
    MOV dword ptr [ESP + 0x4],EAX       ; 004cf7a1
    MOV EAX,dword ptr [EDX + 0x8]       ; 004cf7a5
    MOV dword ptr [ESP + 0x8],EAX       ; 004cf7a8
    LEA EAX,[ESP + 0xc]                 ; 004cf7ac
        ;   Label: LAB_004cf7ac
    LEA EDX,[ECX + 0xc]                 ; 004cf7b0
    CMP EAX,EDX                         ; 004cf7b3
    JZ 0x004cf736                       ; 004cf7b5
        ;   XREF to: 004cf736 (CONDITIONAL_JUMP)  ; LAB_004cf736
    MOV EAX,dword ptr [EDX]             ; 004cf7bb
    MOV dword ptr [ESP + 0xc],EAX       ; 004cf7bd
    MOV EAX,dword ptr [EDX + 0x4]       ; 004cf7c1
    MOV dword ptr [ESP + 0x10],EAX      ; 004cf7c4
    MOV EAX,dword ptr [EDX + 0x8]       ; 004cf7c8
    MOV dword ptr [ESP + 0x14],EAX      ; 004cf7cb
    MOV ECX,0x6                         ; 004cf7cf
    MOV ESI,ESP                         ; 004cf7d4
    MOV EDI,EBX                         ; 004cf7d6
    MOVSD.REP ES:EDI,ESI                ; 004cf7d8
    MOV EAX,EBX                         ; 004cf7da
    ADD ESP,0x1c                        ; 004cf7dc
    POP EDI                             ; 004cf7df
    POP EBX                             ; 004cf7e0
    RET                                 ; 004cf7e1

