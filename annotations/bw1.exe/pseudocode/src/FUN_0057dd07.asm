; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057dd07(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c50948
;
; Called Functions:
;   FUN_005827b0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0057dd07
        ;   Label: FUN_0057dd07
    MOV EBP,ESP                         ; 0057dd08
    PUSH ESI                            ; 0057dd0a
    PUSH EDI                            ; 0057dd0b
    CMP dword ptr [0x01c50948],0x0      ; 0057dd0c | DAT_01c50948
    JZ 0x0057dd22                       ; 0057dd13
        ;   XREF to: 0057dd22 (CONDITIONAL_JUMP)  ; LAB_0057dd22
    PUSH dword ptr [EBP + 0x8]          ; 0057dd15
    CALL FUN_005827b0                   ; 0057dd18
        ;   XREF to: 005827b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005827b0()
    POP EAX                             ; 0057dd1d
    POP EDI                             ; 0057dd1e
    POP ESI                             ; 0057dd1f
    LEAVE                               ; 0057dd20
    RET                                 ; 0057dd21
    PUSHAD                              ; 0057dd22
        ;   Label: LAB_0057dd22
    CLD                                 ; 0057dd23
    PUSH DS                             ; 0057dd24
    POP ES                              ; 0057dd25
    MOV ECX,dword ptr [0x01c4f010]      ; 0057dd26 | DAT_01c4f010
    MOV EAX,dword ptr [EBP + 0x8]       ; 0057dd2c
    SUB ECX,dword ptr [0x01c4f008]      ; 0057dd2f | DAT_01c4f008
    MOV EBX,dword ptr [0x01c4f00c]      ; 0057dd35 | DAT_01c4f00c
    INC ECX                             ; 0057dd3b
    XOR EAX,EAX                         ; 0057dd3c
    PUSH EBX                            ; 0057dd3e
        ;   Label: LAB_0057dd3e
    PUSH ECX                            ; 0057dd3f
    MOV EDI,dword ptr [EBX*0x4 + 0x1c4354c] ; 0057dd40
    ADD EDI,dword ptr [0x01c4f008]      ; 0057dd47 | DAT_01c4f008
    CMP dword ptr [0x0061b4a0],0x8      ; 0057dd4d | DAT_0061b4a0
    JZ 0x0057dd80                       ; 0057dd54
        ;   XREF to: 0057dd80 (CONDITIONAL_JUMP)  ; LAB_0057dd80
    CMP dword ptr [0x0061b4a0],0x10     ; 0057dd56 | DAT_0061b4a0
    JZ 0x0057dd75                       ; 0057dd5d
        ;   XREF to: 0057dd75 (CONDITIONAL_JUMP)  ; LAB_0057dd75
    ADD EDI,dword ptr [0x01c4f008]      ; 0057dd5f | DAT_01c4f008
    ADD EDI,dword ptr [0x01c4f008]      ; 0057dd65 | DAT_01c4f008
    ADD EDI,dword ptr [0x01c4f008]      ; 0057dd6b | DAT_01c4f008
    STOSD.REP ES:EDI                    ; 0057dd71
    JMP 0x0057dd82                      ; 0057dd73
        ;   XREF to: 0057dd82 (UNCONDITIONAL_JUMP)  ; LAB_0057dd82
    ADD EDI,dword ptr [0x01c4f008]      ; 0057dd75 | DAT_01c4f008
        ;   Label: LAB_0057dd75
    STOSW.REP ES:EDI                    ; 0057dd7b
    JMP 0x0057dd82                      ; 0057dd7e
        ;   XREF to: 0057dd82 (UNCONDITIONAL_JUMP)  ; LAB_0057dd82
    STOSB.REP ES:EDI                    ; 0057dd80
        ;   Label: LAB_0057dd80
    POP ECX                             ; 0057dd82
        ;   Label: LAB_0057dd82
    POP EBX                             ; 0057dd83
    INC EBX                             ; 0057dd84
    CMP EBX,dword ptr [0x01c4f014]      ; 0057dd85 | DAT_01c4f014
    JBE 0x0057dd3e                      ; 0057dd8b
        ;   XREF to: 0057dd3e (CONDITIONAL_JUMP)  ; LAB_0057dd3e
    POPAD                               ; 0057dd8d
    POP EDI                             ; 0057dd8e
    POP ESI                             ; 0057dd8f
    LEAVE                               ; 0057dd90
    RET                                 ; 0057dd91

