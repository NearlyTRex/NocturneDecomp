; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048c6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[4]:
;   FUN_00477fd0 at 004780b0
;   FUN_004b27c0 at 004b2b35
;   FUN_00516620 at 0051670e
;   FUN_00545c30 at 00546042
;
; Referenced Globals:
;   undefined4 DAT_01c684dc
;
; Called Functions:
;   FUN_00489640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c6b0
        ;   Label: FUN_0048c6b0
    PUSH ESI                            ; 0048c6b1
    PUSH EDI                            ; 0048c6b2
    MOV EDX,dword ptr [ESP + 0x20]      ; 0048c6b3
    PUSH EDX                            ; 0048c6b7
    MOV EDX,dword ptr [0x01c684dc]      ; 0048c6b8 | DAT_01c684dc
    MOV ECX,dword ptr [ESP + 0x20]      ; 0048c6be
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048c6c2
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0048c6c9
    SUB EAX,EDX                         ; 0048c6cd
    PUSH ECX                            ; 0048c6cf
    SHL EAX,0x2                         ; 0048c6d0
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048c6d3
    SUB EAX,EDX                         ; 0048c6d7
    PUSH EBX                            ; 0048c6d9
    SHL EAX,0x3                         ; 0048c6da
    PUSH ESI                            ; 0048c6dd
    ADD EAX,0x1c684e0                   ; 0048c6de
    PUSH EAX                            ; 0048c6e3
    CALL FUN_00489640                   ; 0048c6e4
        ;   XREF to: 00489640 (UNCONDITIONAL_CALL)  ; undefined FUN_00489640()
    MOV EDI,dword ptr [0x01c684dc]      ; 0048c6e9 | DAT_01c684dc
    INC EDI                             ; 0048c6ef
    ADD ESP,0x14                        ; 0048c6f0
    MOV dword ptr [0x01c684dc],EDI      ; 0048c6f3 | DAT_01c684dc
    CMP EDI,0x32                        ; 0048c6f9
    JGE 0x0048c702                      ; 0048c6fc
        ;   XREF to: 0048c702 (CONDITIONAL_JUMP)  ; LAB_0048c702
    POP EDI                             ; 0048c6fe
    POP ESI                             ; 0048c6ff
    POP EBX                             ; 0048c700
    RET                                 ; 0048c701
    XOR EAX,EAX                         ; 0048c702
        ;   Label: LAB_0048c702
    MOV [0x01c684dc],EAX                ; 0048c704 | DAT_01c684dc
    POP EDI                             ; 0048c709
    POP ESI                             ; 0048c70a
    POP EBX                             ; 0048c70b
    RET                                 ; 0048c70c

