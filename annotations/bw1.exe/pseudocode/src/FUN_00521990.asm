; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00521990(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_cow_wav_005ea402
;   undefined4 DAT_006236b8
;
; Called Functions:
;   FUN_004319e0
;   FUN_00521810
;   FUN_00524770
;   FUN_005247c0
;   FUN_0057d9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521990
        ;   Label: FUN_00521990
    PUSH ESI                            ; 00521991
    PUSH EDI                            ; 00521992
    MOV EBX,dword ptr [ESP + 0x10]      ; 00521993
    MOV EDI,dword ptr [ESP + 0x14]      ; 00521997
    PUSH EDI                            ; 0052199b
    PUSH EBX                            ; 0052199c
    CALL FUN_00521810                   ; 0052199d
        ;   XREF to: 00521810 (UNCONDITIONAL_CALL)  ; undefined FUN_00521810()
    FLD float ptr [EDI + 0x4]           ; 005219a2
    FSUBR float ptr [EBX + 0x2538]      ; 005219a5
    ADD ESP,0x8                         ; 005219ab
    FST float ptr [EBX + 0x2538]        ; 005219ae
    FLDZ                                ; 005219b4
    FCOMPP                              ; 005219b6
    FNSTSW AX                           ; 005219b8
    SAHF                                ; 005219ba
    JC 0x00521a07                       ; 005219bb
        ;   XREF to: 00521a07 (CONDITIONAL_JUMP)  ; LAB_00521a07
    LEA ESI,[EBX + 0x158]               ; 005219bd
    PUSH ESI                            ; 005219c3
    MOV dword ptr [EBX + 0x2538],0x0    ; 005219c4
    CALL FUN_00524770                   ; 005219ce
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005219d3
    ADD ESP,0x4                         ; 005219d6
    CMP EAX,0x7                         ; 005219d9
    JZ 0x00521a07                       ; 005219dc
        ;   XREF to: 00521a07 (CONDITIONAL_JUMP)  ; LAB_00521a07
    CMP EAX,0x6                         ; 005219de
    JZ 0x00521a07                       ; 005219e1
        ;   XREF to: 00521a07 (CONDITIONAL_JUMP)  ; LAB_00521a07
    PUSH 0x1                            ; 005219e3
    PUSH 0x6                            ; 005219e5
    PUSH ESI                            ; 005219e7
    CALL FUN_005247c0                   ; 005219e8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005219ed
    PUSH 0x41c80000                     ; 005219f0
    PUSH 0x32                           ; 005219f5
    MOV EAX,dword ptr [EBX + 0x154]     ; 005219f7
    PUSH EBX                            ; 005219fd
    CALL dword ptr [EAX + 0xa8]         ; 005219fe
    ADD ESP,0xc                         ; 00521a04
    MOV EDX,dword ptr [EBX + 0xc1d8]    ; 00521a07
        ;   Label: LAB_00521a07
    PUSH EDX                            ; 00521a0d
    MOV ECX,dword ptr [0x006236b8]      ; 00521a0e | DAT_006236b8
    PUSH ECX                            ; 00521a14
    CALL FUN_0057d9c0                   ; 00521a15
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d9c0()
    ADD ESP,0x8                         ; 00521a1a
    TEST EAX,EAX                        ; 00521a1d
    JZ 0x00521a2f                       ; 00521a1f
        ;   XREF to: 00521a2f (CONDITIONAL_JUMP)  ; LAB_00521a2f
    PUSH EDI                            ; 00521a21
    PUSH EBX                            ; 00521a22
    CALL FUN_004319e0                   ; 00521a23
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 00521a28
    POP EDI                             ; 00521a2b
    POP ESI                             ; 00521a2c
    POP EBX                             ; 00521a2d
    RET                                 ; 00521a2e
    PUSH 0x5ea402                       ; 00521a2f | = "cow?.wav"
        ;   Label: LAB_00521a2f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00521a34
    PUSH EBX                            ; 00521a3a
    CALL dword ptr [EAX + 0x2c]         ; 00521a3b
    ADD ESP,0x8                         ; 00521a3e
    MOV dword ptr [EBX + 0xc1d8],EAX    ; 00521a41
    PUSH EDI                            ; 00521a47
    PUSH EBX                            ; 00521a48
    CALL FUN_004319e0                   ; 00521a49
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 00521a4e
    POP EDI                             ; 00521a51
    POP ESI                             ; 00521a52
    POP EBX                             ; 00521a53
    RET                                 ; 00521a54

