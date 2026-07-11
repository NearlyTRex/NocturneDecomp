; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056dcd0(byte *param_1,byte *param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00566e10 at 00566e3f
;
; Called Functions:
;   FUN_0056da80
;   FUN_00570ca0
;   FUN_005710a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056dcd0
        ;   Label: FUN_0056dcd0
    PUSH ESI                            ; 0056dcd1
    PUSH EDI                            ; 0056dcd2
    PUSH EBP                            ; 0056dcd3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0056dcd4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0056dcd8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0056dcdc
    XOR EBP,EBP                         ; 0056dce0
    TEST EDI,EDI                        ; 0056dce2
    JBE 0x0056dd2b                      ; 0056dce4
        ;   XREF to: 0056dd2b (CONDITIONAL_JUMP)  ; LAB_0056dd2b
    PUSH ESI                            ; 0056dce6
        ;   Label: LAB_0056dce6
    CALL FUN_00570ca0                   ; 0056dce7
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570ca0()
    ADD ESP,0x4                         ; 0056dcec
    TEST EAX,EAX                        ; 0056dcef
    JNZ 0x0056dd2b                      ; 0056dcf1
        ;   XREF to: 0056dd2b (CONDITIONAL_JUMP)  ; LAB_0056dd2b
    PUSH EBX                            ; 0056dcf3
    CALL FUN_00570ca0                   ; 0056dcf4
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570ca0()
    ADD ESP,0x4                         ; 0056dcf9
    TEST EAX,EAX                        ; 0056dcfc
    JNZ 0x0056dd2b                      ; 0056dcfe
        ;   XREF to: 0056dd2b (CONDITIONAL_JUMP)  ; LAB_0056dd2b
    PUSH EBX                            ; 0056dd00
    PUSH ESI                            ; 0056dd01
    CALL FUN_005710a0                   ; 0056dd02
        ;   XREF to: 005710a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005710a0()
    ADD ESP,0x8                         ; 0056dd07
    MOV EBP,EAX                         ; 0056dd0a
    TEST EAX,EAX                        ; 0056dd0c
    JNZ 0x0056dd5b                      ; 0056dd0e
        ;   XREF to: 0056dd5b (CONDITIONAL_JUMP)  ; LAB_0056dd5b
    PUSH ESI                            ; 0056dd10
    CALL FUN_0056da80                   ; 0056dd11
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da80()
    ADD ESP,0x4                         ; 0056dd16
    PUSH EBX                            ; 0056dd19
    DEC EDI                             ; 0056dd1a
    MOV ESI,EAX                         ; 0056dd1b
    CALL FUN_0056da80                   ; 0056dd1d
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da80()
    ADD ESP,0x4                         ; 0056dd22
    MOV EBX,EAX                         ; 0056dd25
    TEST EDI,EDI                        ; 0056dd27
    JA 0x0056dce6                       ; 0056dd29
        ;   XREF to: 0056dce6 (CONDITIONAL_JUMP)  ; LAB_0056dce6
    TEST EDI,EDI                        ; 0056dd2b
        ;   Label: LAB_0056dd2b
    JBE 0x0056dd59                      ; 0056dd2d
        ;   XREF to: 0056dd59 (CONDITIONAL_JUMP)  ; LAB_0056dd59
    PUSH ESI                            ; 0056dd2f
    CALL FUN_00570ca0                   ; 0056dd30
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570ca0()
    ADD ESP,0x4                         ; 0056dd35
    TEST EAX,EAX                        ; 0056dd38
    JNZ 0x0056dd49                      ; 0056dd3a
        ;   XREF to: 0056dd49 (CONDITIONAL_JUMP)  ; LAB_0056dd49
    PUSH EBX                            ; 0056dd3c
    CALL FUN_00570ca0                   ; 0056dd3d
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570ca0()
    ADD ESP,0x4                         ; 0056dd42
    TEST EAX,EAX                        ; 0056dd45
    JZ 0x0056dd59                       ; 0056dd47
        ;   XREF to: 0056dd59 (CONDITIONAL_JUMP)  ; LAB_0056dd59
    XOR EAX,EAX                         ; 0056dd49
        ;   Label: LAB_0056dd49
    MOVZX ESI,byte ptr [ESI]            ; 0056dd4b
    MOV AL,byte ptr [EBX]               ; 0056dd4e
    SUB ESI,EAX                         ; 0056dd50
    MOV EAX,ESI                         ; 0056dd52
    POP EBP                             ; 0056dd54
    POP EDI                             ; 0056dd55
    POP ESI                             ; 0056dd56
    POP EBX                             ; 0056dd57
    RET                                 ; 0056dd58
    MOV EAX,EBP                         ; 0056dd59
        ;   Label: LAB_0056dd59
    POP EBP                             ; 0056dd5b
        ;   Label: LAB_0056dd5b
    POP EDI                             ; 0056dd5c
    POP ESI                             ; 0056dd5d
    POP EBX                             ; 0056dd5e
    RET                                 ; 0056dd5f

