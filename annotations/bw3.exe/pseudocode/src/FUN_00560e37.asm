; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00560e37(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;   undefined4 DAT_01c6cee8
;
; Called Functions:
;   FUN_00566080
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00560e37
        ;   Label: FUN_00560e37
    MOV EBP,ESP                         ; 00560e38
    PUSH ESI                            ; 00560e3a
    PUSH EDI                            ; 00560e3b
    CMP dword ptr [0x01c6cee8],0x0      ; 00560e3c | DAT_01c6cee8
    JZ 0x00560e52                       ; 00560e43
        ;   XREF to: 00560e52 (CONDITIONAL_JUMP)  ; LAB_00560e52
    PUSH dword ptr [EBP + 0x8]          ; 00560e45
    CALL FUN_00566080                   ; 00560e48
        ;   XREF to: 00566080 (UNCONDITIONAL_CALL)  ; undefined FUN_00566080()
    POP EAX                             ; 00560e4d
    POP EDI                             ; 00560e4e
    POP ESI                             ; 00560e4f
    LEAVE                               ; 00560e50
    RET                                 ; 00560e51
    PUSHAD                              ; 00560e52
        ;   Label: LAB_00560e52
    CLD                                 ; 00560e53
    PUSH DS                             ; 00560e54
    POP ES                              ; 00560e55
    MOV ECX,dword ptr [0x01c6b5b0]      ; 00560e56 | DAT_01c6b5b0
    MOV EAX,dword ptr [EBP + 0x8]       ; 00560e5c
    SUB ECX,dword ptr [0x01c6b5a8]      ; 00560e5f | DAT_01c6b5a8
    MOV EBX,dword ptr [0x01c6b5ac]      ; 00560e65 | DAT_01c6b5ac
    INC ECX                             ; 00560e6b
    XOR EAX,EAX                         ; 00560e6c
    PUSH EBX                            ; 00560e6e
        ;   Label: LAB_00560e6e
    PUSH ECX                            ; 00560e6f
    MOV EDI,dword ptr [EBX*0x4 + 0x1c5faec] ; 00560e70
    ADD EDI,dword ptr [0x01c6b5a8]      ; 00560e77 | DAT_01c6b5a8
    CMP dword ptr [0x005fba20],0x8      ; 00560e7d | DAT_005fba20
    JZ 0x00560eb0                       ; 00560e84
        ;   XREF to: 00560eb0 (CONDITIONAL_JUMP)  ; LAB_00560eb0
    CMP dword ptr [0x005fba20],0x10     ; 00560e86 | DAT_005fba20
    JZ 0x00560ea5                       ; 00560e8d
        ;   XREF to: 00560ea5 (CONDITIONAL_JUMP)  ; LAB_00560ea5
    ADD EDI,dword ptr [0x01c6b5a8]      ; 00560e8f | DAT_01c6b5a8
    ADD EDI,dword ptr [0x01c6b5a8]      ; 00560e95 | DAT_01c6b5a8
    ADD EDI,dword ptr [0x01c6b5a8]      ; 00560e9b | DAT_01c6b5a8
    STOSD.REP ES:EDI                    ; 00560ea1
    JMP 0x00560eb2                      ; 00560ea3
        ;   XREF to: 00560eb2 (UNCONDITIONAL_JUMP)  ; LAB_00560eb2
    ADD EDI,dword ptr [0x01c6b5a8]      ; 00560ea5 | DAT_01c6b5a8
        ;   Label: LAB_00560ea5
    STOSW.REP ES:EDI                    ; 00560eab
    JMP 0x00560eb2                      ; 00560eae
        ;   XREF to: 00560eb2 (UNCONDITIONAL_JUMP)  ; LAB_00560eb2
    STOSB.REP ES:EDI                    ; 00560eb0
        ;   Label: LAB_00560eb0
    POP ECX                             ; 00560eb2
        ;   Label: LAB_00560eb2
    POP EBX                             ; 00560eb3
    INC EBX                             ; 00560eb4
    CMP EBX,dword ptr [0x01c6b5b4]      ; 00560eb5 | DAT_01c6b5b4
    JBE 0x00560e6e                      ; 00560ebb
        ;   XREF to: 00560e6e (CONDITIONAL_JUMP)  ; LAB_00560e6e
    POPAD                               ; 00560ebd
    POP EDI                             ; 00560ebe
    POP ESI                             ; 00560ebf
    LEAVE                               ; 00560ec0
    RET                                 ; 00560ec1

