; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004de6e0(int param_1,uint param_2)
;
;
; XREF[2]:
;   FUN_004d41e0 at 004d41ef
;   FUN_004d4410 at 004d446e
;
; Referenced Globals:
;   undefined4 DAT_01d70a74
;
; Called Functions:
;   FUN_0040c840
;   FUN_004dbaa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de6e0
        ;   Label: FUN_004de6e0
    PUSH ESI                            ; 004de6e1
    PUSH EDI                            ; 004de6e2
    PUSH EBP                            ; 004de6e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004de6e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004de6e8
    MOV EDX,dword ptr [EDI + 0x10]      ; 004de6ec
    XOR ESI,ESI                         ; 004de6ef
    TEST EDX,EDX                        ; 004de6f1
    JLE 0x004de729                      ; 004de6f3
        ;   XREF to: 004de729 (CONDITIONAL_JUMP)  ; LAB_004de729
    MOV EBX,EDI                         ; 004de6f5
    MOV EAX,[0x01d70a74]                ; 004de6f7 | DAT_01d70a74
        ;   Label: LAB_004de6f7
    PUSH EAX                            ; 004de6fc
    MOV EDX,dword ptr [EBX + 0x14]      ; 004de6fd
    PUSH EDX                            ; 004de700
    CALL FUN_0040c840                   ; 004de701
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004de706
    TEST EAX,EAX                        ; 004de709
    JZ 0x004de72e                       ; 004de70b
        ;   XREF to: 004de72e (CONDITIONAL_JUMP)  ; LAB_004de72e
    TEST dword ptr [EAX + 0x2d4],EBP    ; 004de70d
    JZ 0x004de72e                       ; 004de713
        ;   XREF to: 004de72e (CONDITIONAL_JUMP)  ; LAB_004de72e
    PUSH 0x1                            ; 004de715
    MOV EAX,dword ptr [EBX + 0x14]      ; 004de717
    PUSH EAX                            ; 004de71a
    PUSH EDI                            ; 004de71b
    CALL FUN_004dbaa0                   ; 004de71c
        ;   XREF to: 004dbaa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dbaa0()
    ADD ESP,0xc                         ; 004de721
    CMP ESI,dword ptr [EDI + 0x10]      ; 004de724
    JL 0x004de6f7                       ; 004de727
        ;   XREF to: 004de6f7 (CONDITIONAL_JUMP)  ; LAB_004de6f7
    POP EBP                             ; 004de729
        ;   Label: LAB_004de729
    POP EDI                             ; 004de72a
    POP ESI                             ; 004de72b
    POP EBX                             ; 004de72c
    RET                                 ; 004de72d
    INC ESI                             ; 004de72e
        ;   Label: LAB_004de72e
    ADD EBX,0x4                         ; 004de72f
    CMP ESI,dword ptr [EDI + 0x10]      ; 004de732
    JL 0x004de6f7                       ; 004de735
        ;   XREF to: 004de6f7 (CONDITIONAL_JUMP)  ; LAB_004de6f7
    POP EBP                             ; 004de737
    POP EDI                             ; 004de738
    POP ESI                             ; 004de739
    POP EBX                             ; 004de73a
    RET                                 ; 004de73b

