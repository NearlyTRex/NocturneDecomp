; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005099e0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005cb644
;   undefined4 DAT_005cb648
;   TerminatedCString s_DAMAGE_005cb64d
;   undefined4 DAT_005cb654
;
; Called Functions:
;   FUN_00430d60
;   FUN_00431ce0
;   FUN_00509900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005099e0
        ;   Label: FUN_005099e0
    PUSH ESI                            ; 005099e1
    PUSH EDI                            ; 005099e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005099e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005099e7
    PUSH EBX                            ; 005099eb
    MOV EAX,dword ptr [EBX + 0x154]     ; 005099ec
    CALL dword ptr [EAX + 0xcc]         ; 005099f2
    ADD ESP,0x4                         ; 005099f8
    CMP EAX,0x1dd6a44                   ; 005099fb
    JNZ 0x00509a59                      ; 00509a00
        ;   XREF to: 00509a59 (CONDITIONAL_JUMP)  ; LAB_00509a59
    FLD float ptr [EDI + 0x4]           ; 00509a02
    FSUBR float ptr [EBX + 0x2538]      ; 00509a05
    LEA ESI,[EBX + 0x158]               ; 00509a0b
    FST float ptr [EBX + 0x2538]        ; 00509a11
    FLDZ                                ; 00509a17
    FCOMPP                              ; 00509a19
    FNSTSW AX                           ; 00509a1b
    SAHF                                ; 00509a1d
    JNC 0x00509a67                      ; 00509a1e
        ;   XREF to: 00509a67 (CONDITIONAL_JUMP)  ; LAB_00509a67
    FLD float ptr [EDI + 0x4]           ; 00509a20
    FLDZ                                ; 00509a23
    FCOMPP                              ; 00509a25
    FNSTSW AX                           ; 00509a27
    SAHF                                ; 00509a29
    JNC 0x00509a59                      ; 00509a2a
        ;   XREF to: 00509a59 (CONDITIONAL_JUMP)  ; LAB_00509a59
    CMP dword ptr [EBX + 0x26fc],0x0    ; 00509a2c
    JNZ 0x00509a59                      ; 00509a33
        ;   XREF to: 00509a59 (CONDITIONAL_JUMP)  ; LAB_00509a59
    PUSH 0x5cb648                       ; 00509a35 | DAT_005cb648
    PUSH ESI                            ; 00509a3a
    CALL FUN_00509900                   ; 00509a3b
        ;   XREF to: 00509900 (UNCONDITIONAL_CALL)  ; undefined FUN_00509900()
    ADD ESP,0x8                         ; 00509a40
    TEST EAX,EAX                        ; 00509a43
    JNZ 0x00509a59                      ; 00509a45
        ;   XREF to: 00509a59 (CONDITIONAL_JUMP)  ; LAB_00509a59
    PUSH 0x5cb64d                       ; 00509a47 | = "DAMAGE"
    PUSH ESI                            ; 00509a4c
    CALL FUN_00509900                   ; 00509a4d
        ;   XREF to: 00509900 (UNCONDITIONAL_CALL)  ; undefined FUN_00509900()
    ADD ESP,0x8                         ; 00509a52
    TEST EAX,EAX                        ; 00509a55
    JZ 0x00509aa1                       ; 00509a57
        ;   XREF to: 00509aa1 (CONDITIONAL_JUMP)  ; LAB_00509aa1
    PUSH EDI                            ; 00509a59
        ;   Label: LAB_00509a59
    PUSH EBX                            ; 00509a5a
    CALL FUN_00430d60                   ; 00509a5b
        ;   XREF to: 00430d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00430d60()
    ADD ESP,0x8                         ; 00509a60
    POP EDI                             ; 00509a63
    POP ESI                             ; 00509a64
    POP EBX                             ; 00509a65
    RET                                 ; 00509a66
    PUSH 0x41c80000                     ; 00509a67
        ;   Label: LAB_00509a67
    PUSH 0x32                           ; 00509a6c
    MOV EAX,dword ptr [EBX + 0x154]     ; 00509a6e
    PUSH EBX                            ; 00509a74
    MOV dword ptr [EBX + 0x2538],0x0    ; 00509a75
    CALL dword ptr [EAX + 0xa8]         ; 00509a7f
    ADD ESP,0xc                         ; 00509a85
    PUSH EBX                            ; 00509a88
    CALL FUN_00431ce0                   ; 00509a89
        ;   XREF to: 00431ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00431ce0()
    ADD ESP,0x4                         ; 00509a8e
    PUSH 0x5cb644                       ; 00509a91 | DAT_005cb644
    PUSH ESI                            ; 00509a96
    CALL FUN_00509900                   ; 00509a97
        ;   XREF to: 00509900 (UNCONDITIONAL_CALL)  ; undefined FUN_00509900()
    ADD ESP,0x8                         ; 00509a9c
    JMP 0x00509a59                      ; 00509a9f
        ;   XREF to: 00509a59 (UNCONDITIONAL_JUMP)  ; LAB_00509a59
    PUSH 0x5cb654                       ; 00509aa1 | DAT_005cb654
        ;   Label: LAB_00509aa1
    PUSH ESI                            ; 00509aa6
    CALL FUN_00509900                   ; 00509aa7
        ;   XREF to: 00509900 (UNCONDITIONAL_CALL)  ; undefined FUN_00509900()
    ADD ESP,0x8                         ; 00509aac
    PUSH EDI                            ; 00509aaf
    PUSH EBX                            ; 00509ab0
    CALL FUN_00430d60                   ; 00509ab1
        ;   XREF to: 00430d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00430d60()
    ADD ESP,0x8                         ; 00509ab6
    POP EDI                             ; 00509ab9
    POP ESI                             ; 00509aba
    POP EBX                             ; 00509abb
    RET                                 ; 00509abc

