; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_clearScreenRegion_FUN_0052ef37(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c02594
;
; Called Functions:
;   engine_special.cpp_drawFullScreenQuad_FUN_005329c0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0052ef37
        ;   Label: engine_special.cpp_clearScreenRegion_FUN_0052ef37
    MOV EBP,ESP                         ; 0052ef38
    PUSH ESI                            ; 0052ef3a
    PUSH EDI                            ; 0052ef3b
    CMP dword ptr [0x01c02594],0x0      ; 0052ef3c | DAT_01c02594
    JZ 0x0052ef52                       ; 0052ef43
        ;   XREF to: 0052ef52 (CONDITIONAL_JUMP)  ; LAB_0052ef52
    PUSH dword ptr [EBP + 0x8]          ; 0052ef45
    CALL engine_special.cpp_drawFullScreenQuad_FUN_005329c0 ; 0052ef48
        ;   XREF to: 005329c0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawFullScreenQuad_FUN_005329c0()
    POP EAX                             ; 0052ef4d
    POP EDI                             ; 0052ef4e
    POP ESI                             ; 0052ef4f
    LEAVE                               ; 0052ef50
    RET                                 ; 0052ef51
    PUSHAD                              ; 0052ef52
        ;   Label: LAB_0052ef52
    CLD                                 ; 0052ef53
    PUSH DS                             ; 0052ef54
    POP ES                              ; 0052ef55
    MOV ECX,dword ptr [0x01c00c60]      ; 0052ef56 | DAT_01c00c60
    MOV EAX,dword ptr [EBP + 0x8]       ; 0052ef5c
    SUB ECX,dword ptr [0x01c00c58]      ; 0052ef5f | DAT_01c00c58
    MOV EBX,dword ptr [0x01c00c5c]      ; 0052ef65 | DAT_01c00c5c
    INC ECX                             ; 0052ef6b
    XOR EAX,EAX                         ; 0052ef6c
    PUSH EBX                            ; 0052ef6e
        ;   Label: LAB_0052ef6e
    PUSH ECX                            ; 0052ef6f
    MOV EDI,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 0052ef70
    ADD EDI,dword ptr [0x01c00c58]      ; 0052ef77 | DAT_01c00c58
    CMP dword ptr [0x005b7624],0x8      ; 0052ef7d | DAT_005b7624
    JZ 0x0052efb0                       ; 0052ef84
        ;   XREF to: 0052efb0 (CONDITIONAL_JUMP)  ; LAB_0052efb0
    CMP dword ptr [0x005b7624],0x10     ; 0052ef86 | DAT_005b7624
    JZ 0x0052efa5                       ; 0052ef8d
        ;   XREF to: 0052efa5 (CONDITIONAL_JUMP)  ; LAB_0052efa5
    ADD EDI,dword ptr [0x01c00c58]      ; 0052ef8f | DAT_01c00c58
    ADD EDI,dword ptr [0x01c00c58]      ; 0052ef95 | DAT_01c00c58
    ADD EDI,dword ptr [0x01c00c58]      ; 0052ef9b | DAT_01c00c58
    STOSD.REP ES:EDI                    ; 0052efa1
    JMP 0x0052efb2                      ; 0052efa3
        ;   XREF to: 0052efb2 (UNCONDITIONAL_JUMP)  ; LAB_0052efb2
    ADD EDI,dword ptr [0x01c00c58]      ; 0052efa5 | DAT_01c00c58
        ;   Label: LAB_0052efa5
    STOSW.REP ES:EDI                    ; 0052efab
    JMP 0x0052efb2                      ; 0052efae
        ;   XREF to: 0052efb2 (UNCONDITIONAL_JUMP)  ; LAB_0052efb2
    STOSB.REP ES:EDI                    ; 0052efb0
        ;   Label: LAB_0052efb0
    POP ECX                             ; 0052efb2
        ;   Label: LAB_0052efb2
    POP EBX                             ; 0052efb3
    INC EBX                             ; 0052efb4
    CMP EBX,dword ptr [0x01c00c64]      ; 0052efb5 | DAT_01c00c64
    JBE 0x0052ef6e                      ; 0052efbb
        ;   XREF to: 0052ef6e (CONDITIONAL_JUMP)  ; LAB_0052ef6e
    POPAD                               ; 0052efbd
    POP EDI                             ; 0052efbe
    POP ESI                             ; 0052efbf
    LEAVE                               ; 0052efc0
    RET                                 ; 0052efc1

