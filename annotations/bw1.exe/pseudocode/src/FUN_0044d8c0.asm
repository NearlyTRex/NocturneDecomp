; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044d8c0(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0054f0d0 at 0054f7f7
;   FUN_00550580 at 00550a67
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01482658
;   undefined4 DAT_0148265c
;   undefined4 DAT_01482660
;   undefined4 DAT_01482664
;   undefined4 DAT_01482668
;   undefined4 DAT_01483924
;   undefined4 DAT_01483928
;   undefined4 DAT_0148392c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c4480c
;   ... and 8 more
;
; Called Functions:
;   FUN_004886f1
;   FUN_00582a80
;   thunk_FUN_00509210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d8c0
        ;   Label: FUN_0044d8c0
    PUSH ESI                            ; 0044d8c1
    PUSH EDI                            ; 0044d8c2
    PUSH EBP                            ; 0044d8c3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0044d8c4
    MOV EDX,dword ptr [0x01482658]      ; 0044d8c8 | DAT_01482658
    DEC EDX                             ; 0044d8ce
    MOV dword ptr [0x01482658],EDX      ; 0044d8cf | DAT_01482658
    JZ 0x0044d8dc                       ; 0044d8d5
        ;   XREF to: 0044d8dc (CONDITIONAL_JUMP)  ; LAB_0044d8dc
    POP EBP                             ; 0044d8d7
        ;   Label: LAB_0044d8d7
    POP EDI                             ; 0044d8d8
    POP ESI                             ; 0044d8d9
    POP EBX                             ; 0044d8da
    RET                                 ; 0044d8db
    MOV EBX,dword ptr [0x00612560]      ; 0044d8dc | DAT_00612560
        ;   Label: LAB_0044d8dc
    PUSH EBX                            ; 0044d8e2 | DAT_01bc120c
    CALL thunk_FUN_00509210             ; 0044d8e3
        ;   XREF to: 00483c40 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_00509210()
    MOV EAX,[0x01c4eff8]                ; 0044d8e8 | DAT_01c4eff8
    MOV dword ptr [EBP + 0x1c0],EAX     ; 0044d8ed
    MOV EAX,[0x01c4effc]                ; 0044d8f3 | DAT_01c4effc
    MOV ESI,0x1482664                   ; 0044d8f8
    MOV dword ptr [EBP + 0x1c4],EAX     ; 0044d8fd
    MOV EAX,[0x01c4f000]                ; 0044d903 | DAT_01c4f000
    MOV EDI,0x1c4354c                   ; 0044d908
    MOV dword ptr [EBP + 0x1c8],EAX     ; 0044d90d
    MOV EAX,[0x01c4f004]                ; 0044d913 | DAT_01c4f004
    MOV ECX,dword ptr [0x0061b49c]      ; 0044d918 | DAT_0061b49c
    MOV dword ptr [EBP + 0x1cc],EAX     ; 0044d91e
    MOV EAX,[0x0148265c]                ; 0044d924 | DAT_0148265c
    ADD ESP,0x4                         ; 0044d929
    MOV [0x0061b4a0],EAX                ; 0044d92c | DAT_0061b4a0
    MOV EAX,[0x01482660]                ; 0044d931 | DAT_01482660
    SHL ECX,0x2                         ; 0044d936
    MOV [0x01c50948],EAX                ; 0044d939 | DAT_01c50948
    PUSH EDI                            ; 0044d93e | DAT_01c4354c
    MOV EAX,ECX                         ; 0044d93f
    SHR ECX,0x2                         ; 0044d941
    MOVSD.REP ES:EDI,ESI                ; 0044d944 | DAT_01482664 | DAT_01c4354c | DAT_01482668
    MOV CL,AL                           ; 0044d946
    AND CL,0x3                          ; 0044d948
    MOVSB.REP ES:EDI,ESI                ; 0044d94b | DAT_01482668 | DAT_01c43550
    POP EDI                             ; 0044d94d
    MOV EAX,[0x01483924]                ; 0044d94e | DAT_01483924
    MOV [0x01c4e9d4],EAX                ; 0044d953 | DAT_01c4e9d4
    MOV EAX,[0x01483928]                ; 0044d958 | DAT_01483928
    MOV [0x01c4e9e0],EAX                ; 0044d95d | DAT_01c4e9e0
    MOV EAX,[0x0148392c]                ; 0044d962 | DAT_0148392c
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044d967
    MOV [0x01c4e9ec],EAX                ; 0044d96b | DAT_01c4e9ec
    TEST ESI,ESI                        ; 0044d970
    JZ 0x0044d8d7                       ; 0044d972
        ;   XREF to: 0044d8d7 (CONDITIONAL_JUMP)  ; LAB_0044d8d7
    MOV EDI,dword ptr [EBP + 0x148]     ; 0044d978
    XOR ESI,ESI                         ; 0044d97e
    TEST EDI,EDI                        ; 0044d980
    JLE 0x0044d9d0                      ; 0044d982
        ;   XREF to: 0044d9d0 (CONDITIONAL_JUMP)  ; LAB_0044d9d0
    XOR EDI,EDI                         ; 0044d984
    MOV EDX,dword ptr [EBP + 0x144]     ; 0044d986
        ;   Label: LAB_0044d986
    IMUL EDX,ESI                        ; 0044d98c
    MOV EAX,dword ptr [EBP + 0x144]     ; 0044d98f
    MOV ECX,dword ptr [EDI + 0x1c4480c] ; 0044d995 | DAT_01c4480c
    SHL EAX,0x2                         ; 0044d99b
    MOV EBX,dword ptr [EBP + 0x15c]     ; 0044d99e
    PUSH EAX                            ; 0044d9a4
    ADD ECX,EAX                         ; 0044d9a5
    SHL EDX,0x2                         ; 0044d9a7
    PUSH ECX                            ; 0044d9aa
    ADD EDX,EBX                         ; 0044d9ab
    ADD EDI,0x4                         ; 0044d9ad
    PUSH EDX                            ; 0044d9b0
    INC ESI                             ; 0044d9b1
    CALL FUN_004886f1                   ; 0044d9b2
        ;   XREF to: 004886f1 (UNCONDITIONAL_CALL)  ; undefined FUN_004886f1()
    MOV EAX,dword ptr [EBP + 0x148]     ; 0044d9b7
    ADD ESP,0xc                         ; 0044d9bd
    CMP ESI,EAX                         ; 0044d9c0
    JL 0x0044d986                       ; 0044d9c2
        ;   XREF to: 0044d986 (CONDITIONAL_JUMP)  ; LAB_0044d986
    LEA EAX,[EAX]                       ; 0044d9c4
    LEA EDX,[EDX]                       ; 0044d9ca
    CMP dword ptr [0x01c50948],0x0      ; 0044d9d0 | DAT_01c50948
        ;   Label: LAB_0044d9d0
    JZ 0x0044d8d7                       ; 0044d9d7
        ;   XREF to: 0044d8d7 (CONDITIONAL_JUMP)  ; LAB_0044d8d7
    PUSH 0x0                            ; 0044d9dd
    CALL FUN_00582a80                   ; 0044d9df
        ;   XREF to: 00582a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00582a80()
    ADD ESP,0x4                         ; 0044d9e4
    POP EBP                             ; 0044d9e7
    POP EDI                             ; 0044d9e8
    POP ESI                             ; 0044d9e9
    POP EBX                             ; 0044d9ea
    RET                                 ; 0044d9eb

