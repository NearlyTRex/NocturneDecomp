; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052c090(int param_1)
;
;
; XREF[2]:
;   FUN_0052c060 at 0052c066
;   FUN_0052c0e0 at 0052c115
;
; Referenced Globals:
;   undefined4 DAT_0061e450
;
; Called Functions:
;   FUN_0044e590
;   FUN_00539be0
;   FUN_0053a830
;   FUN_0057b840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c090
        ;   Label: FUN_0052c090
    PUSH ESI                            ; 0052c091
    PUSH 0x1fc9ff8                      ; 0052c092
    CALL FUN_0044e590                   ; 0052c097
        ;   XREF to: 0044e590 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e590()
    ADD ESP,0x4                         ; 0052c09c
    MOV ESI,dword ptr [ESP + 0xc]       ; 0052c09f
    ADD ESI,0x4                         ; 0052c0a3
    MOV EBX,ESI                         ; 0052c0a6
    ADD ESI,0x19a28                     ; 0052c0a8
    PUSH EBX                            ; 0052c0ae
        ;   Label: LAB_0052c0ae
    CALL FUN_0053a830                   ; 0052c0af
        ;   XREF to: 0053a830 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a830()
    ADD EBX,0x1a4                       ; 0052c0b4
    ADD ESP,0x4                         ; 0052c0ba
    CMP EBX,ESI                         ; 0052c0bd
    JNZ 0x0052c0ae                      ; 0052c0bf
        ;   XREF to: 0052c0ae (CONDITIONAL_JUMP)  ; LAB_0052c0ae
    MOV EDX,dword ptr [0x0061e450]      ; 0052c0c1 | DAT_0061e450
    PUSH EDX                            ; 0052c0c7
    CALL FUN_0057b840                   ; 0052c0c8
        ;   XREF to: 0057b840 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b840()
    ADD ESP,0x4                         ; 0052c0cd
    MOV ECX,dword ptr [ESP + 0xc]       ; 0052c0d0
    PUSH ECX                            ; 0052c0d4
    CALL FUN_00539be0                   ; 0052c0d5
        ;   XREF to: 00539be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00539be0()
    ADD ESP,0x4                         ; 0052c0da
    POP ESI                             ; 0052c0dd
    POP EBX                             ; 0052c0de
    RET                                 ; 0052c0df

