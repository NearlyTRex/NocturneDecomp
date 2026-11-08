; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d7c0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bipn04_005d182a
;   TerminatedCString s_Bipn09_005d1831
;
; Called Functions:
;   FUN_00487eb0
;   FUN_00540e80
;   FUN_00547480
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d7c0
        ;   Label: FUN_0046d7c0
    PUSH ESI                            ; 0046d7c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046d7c2
    LEA ESI,[EBX + 0x2b4]               ; 0046d7c6
    PUSH ESI                            ; 0046d7cc
    CALL FUN_00547480                   ; 0046d7cd
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 0046d7d2
    PUSH ESI                            ; 0046d7d5
    CALL FUN_00547890                   ; 0046d7d6
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 0046d7db
    PUSH 0x1                            ; 0046d7de
    PUSH 0x5d182a                       ; 0046d7e0 | = "Bipn04"
    PUSH EAX                            ; 0046d7e5
    MOV ESI,EAX                         ; 0046d7e6
    MOV dword ptr [EBX + 0x10af8],0x0   ; 0046d7e8
    CALL FUN_00540e80                   ; 0046d7f2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0046d7f7
    PUSH 0x1                            ; 0046d7fa
    PUSH 0x5d1831                       ; 0046d7fc | = "Bipn09"
    PUSH ESI                            ; 0046d801
    MOV dword ptr [EBX + 0x10afc],EAX   ; 0046d802
    CALL FUN_00540e80                   ; 0046d808
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0046d80d
    PUSH EBX                            ; 0046d810
    MOV dword ptr [EBX + 0x10b00],EAX   ; 0046d811
    CALL FUN_00487eb0                   ; 0046d817
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487eb0()
    MOV dword ptr [EBX + 0x10b04],0x0   ; 0046d81c
    MOV dword ptr [EBX + 0x10b08],0x0   ; 0046d826
    ADD ESP,0x4                         ; 0046d830
    MOV dword ptr [EBX + 0x10b0c],0x0   ; 0046d833
    POP ESI                             ; 0046d83d
    POP EBX                             ; 0046d83e
    RET                                 ; 0046d83f

