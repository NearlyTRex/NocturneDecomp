; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c1c50(void)
;
;
; Referenced Globals:
;   undefined1 DAT_0061ef60
;   undefined4 DAT_0061ef95
;   undefined4 DAT_02680160
;   undefined4 DAT_02680164
;
; Called Functions:
;   FUN_005b8580
;   FUN_005b8590
;   FUN_005c1c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1c50
        ;   Label: FUN_005c1c50
    PUSH ESI                            ; 005c1c51
    MOV AH,byte ptr [0x0061ef95]        ; 005c1c52 | DAT_0061ef95
    AND AH,0xf8                         ; 005c1c58
    MOV DL,AH                           ; 005c1c5b
    MOV byte ptr [0x0061ef95],AH        ; 005c1c5d | DAT_0061ef95
    OR DL,0x4                           ; 005c1c63
    MOV byte ptr [0x0061ef95],DL        ; 005c1c66 | DAT_0061ef95
    MOV EDX,dword ptr [0x0061ef60]      ; 005c1c6c | DAT_0061ef60
    MOV EBX,0x61ef54                    ; 005c1c72
    TEST EDX,EDX                        ; 005c1c77
    JZ 0x005c1ce1                       ; 005c1c79
        ;   XREF to: 005c1ce1 (CONDITIONAL_JUMP)  ; LAB_005c1ce1
    PUSH 0x1d                           ; 005c1c7b
        ;   Label: LAB_005c1c7b
    CALL FUN_005b8590                   ; 005c1c7d
        ;   XREF to: 005b8590 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8590()
    ADD ESP,0x4                         ; 005c1c82
    TEST EAX,EAX                        ; 005c1c85
    JNZ 0x005c1caa                      ; 005c1c87
        ;   XREF to: 005c1caa (CONDITIONAL_JUMP)  ; LAB_005c1caa
    PUSH 0x1d                           ; 005c1c89
    CALL FUN_005b8580                   ; 005c1c8b
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 005c1c90
    MOV ESI,EAX                         ; 005c1c93
    TEST EAX,EAX                        ; 005c1c95
    JNZ 0x005c1cac                      ; 005c1c97
        ;   XREF to: 005c1cac (CONDITIONAL_JUMP)  ; LAB_005c1cac
    PUSH 0x1                            ; 005c1c99
    PUSH 0x5f1a5c                       ; 005c1c9b
    CALL FUN_005c1c20                   ; 005c1ca0
        ;   XREF to: 005c1c20 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1c20()
    ADD ESP,0x8                         ; 005c1ca5
    JMP 0x005c1cac                      ; 005c1ca8
        ;   XREF to: 005c1cac (UNCONDITIONAL_JUMP)  ; LAB_005c1cac
    MOV ESI,EAX                         ; 005c1caa
        ;   Label: LAB_005c1caa
    MOV EAX,[0x02680160]                ; 005c1cac | DAT_02680160
        ;   Label: LAB_005c1cac
    MOV dword ptr [ESI + 0x4],EBX       ; 005c1cb1
    MOV dword ptr [ESI],EAX             ; 005c1cb4
    MOV dword ptr [EBX + 0x8],ESI       ; 005c1cb6
    MOV dword ptr [ESI + 0x8],0x0       ; 005c1cb9
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c1cc0
    MOV byte ptr [EAX + 0x14],0x0       ; 005c1cc3
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c1cc7
    MOV dword ptr [EAX + 0xc],0x0       ; 005c1cca
    MOV dword ptr [0x02680160],ESI      ; 005c1cd1 | DAT_02680160
    MOV ECX,dword ptr [EBX + 0x26]      ; 005c1cd7
    ADD EBX,0x1a                        ; 005c1cda
    TEST ECX,ECX                        ; 005c1cdd
    JNZ 0x005c1c7b                      ; 005c1cdf
        ;   XREF to: 005c1c7b (CONDITIONAL_JUMP)  ; LAB_005c1c7b
    XOR ESI,ESI                         ; 005c1ce1
        ;   Label: LAB_005c1ce1
    MOV dword ptr [0x02680164],ESI      ; 005c1ce3 | DAT_02680164
    POP ESI                             ; 005c1ce9
    POP EBX                             ; 005c1cea
    RET                                 ; 005c1ceb

