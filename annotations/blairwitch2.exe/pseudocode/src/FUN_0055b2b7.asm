; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055b2b7(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c37788
;
; Called Functions:
;   FUN_0055fd60
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0055b2b7
        ;   Label: FUN_0055b2b7
    MOV EBP,ESP                         ; 0055b2b8
    PUSH ESI                            ; 0055b2ba
    PUSH EDI                            ; 0055b2bb
    CMP dword ptr [0x01c37788],0x0      ; 0055b2bc | DAT_01c37788
    JZ 0x0055b2d2                       ; 0055b2c3
        ;   XREF to: 0055b2d2 (CONDITIONAL_JUMP)  ; LAB_0055b2d2
    PUSH dword ptr [EBP + 0x8]          ; 0055b2c5
    CALL FUN_0055fd60                   ; 0055b2c8
        ;   XREF to: 0055fd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0055fd60()
    POP EAX                             ; 0055b2cd
    POP EDI                             ; 0055b2ce
    POP ESI                             ; 0055b2cf
    LEAVE                               ; 0055b2d0
    RET                                 ; 0055b2d1
    PUSHAD                              ; 0055b2d2
        ;   Label: LAB_0055b2d2
    CLD                                 ; 0055b2d3
    PUSH DS                             ; 0055b2d4
    POP ES                              ; 0055b2d5
    MOV ECX,dword ptr [0x01c35e50]      ; 0055b2d6 | DAT_01c35e50
    MOV EAX,dword ptr [EBP + 0x8]       ; 0055b2dc
    SUB ECX,dword ptr [0x01c35e48]      ; 0055b2df | DAT_01c35e48
    MOV EBX,dword ptr [0x01c35e4c]      ; 0055b2e5 | DAT_01c35e4c
    INC ECX                             ; 0055b2eb
    XOR EAX,EAX                         ; 0055b2ec
    PUSH EBX                            ; 0055b2ee
        ;   Label: LAB_0055b2ee
    PUSH ECX                            ; 0055b2ef
    MOV EDI,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0055b2f0
    ADD EDI,dword ptr [0x01c35e48]      ; 0055b2f7 | DAT_01c35e48
    CMP dword ptr [0x006141c0],0x8      ; 0055b2fd | DAT_006141c0
    JZ 0x0055b330                       ; 0055b304
        ;   XREF to: 0055b330 (CONDITIONAL_JUMP)  ; LAB_0055b330
    CMP dword ptr [0x006141c0],0x10     ; 0055b306 | DAT_006141c0
    JZ 0x0055b325                       ; 0055b30d
        ;   XREF to: 0055b325 (CONDITIONAL_JUMP)  ; LAB_0055b325
    ADD EDI,dword ptr [0x01c35e48]      ; 0055b30f | DAT_01c35e48
    ADD EDI,dword ptr [0x01c35e48]      ; 0055b315 | DAT_01c35e48
    ADD EDI,dword ptr [0x01c35e48]      ; 0055b31b | DAT_01c35e48
    STOSD.REP ES:EDI                    ; 0055b321
    JMP 0x0055b332                      ; 0055b323
        ;   XREF to: 0055b332 (UNCONDITIONAL_JUMP)  ; LAB_0055b332
    ADD EDI,dword ptr [0x01c35e48]      ; 0055b325 | DAT_01c35e48
        ;   Label: LAB_0055b325
    STOSW.REP ES:EDI                    ; 0055b32b
    JMP 0x0055b332                      ; 0055b32e
        ;   XREF to: 0055b332 (UNCONDITIONAL_JUMP)  ; LAB_0055b332
    STOSB.REP ES:EDI                    ; 0055b330
        ;   Label: LAB_0055b330
    POP ECX                             ; 0055b332
        ;   Label: LAB_0055b332
    POP EBX                             ; 0055b333
    INC EBX                             ; 0055b334
    CMP EBX,dword ptr [0x01c35e54]      ; 0055b335 | DAT_01c35e54
    JBE 0x0055b2ee                      ; 0055b33b
        ;   XREF to: 0055b2ee (CONDITIONAL_JUMP)  ; LAB_0055b2ee
    POPAD                               ; 0055b33d
    POP EDI                             ; 0055b33e
    POP ESI                             ; 0055b33f
    LEAVE                               ; 0055b340
    RET                                 ; 0055b341

