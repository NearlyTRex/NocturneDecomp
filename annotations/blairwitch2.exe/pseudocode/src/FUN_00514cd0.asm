; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00514cd0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514cd0
        ;   Label: FUN_00514cd0
    PUSH ESI                            ; 00514cd1
    PUSH EDI                            ; 00514cd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00514cd3
    PUSH EBX                            ; 00514cd7
    CALL FUN_00408790                   ; 00514cd8
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 00514cdd
    ADD EAX,0x2b4                       ; 00514ce0
    PUSH EAX                            ; 00514ce5
    CALL FUN_0044fc80                   ; 00514ce6
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 00514ceb
    LEA EBX,[EAX + 0xfffffd4c]          ; 00514cee
    PUSH 0x5e19fc                       ; 00514cf4
    LEA EAX,[EBX + 0x2b4]               ; 00514cf9
    PUSH EAX                            ; 00514cff
    MOV dword ptr [EBX + 0x2b0],0x5fab04 ; 00514d00
    CALL FUN_0044fd70                   ; 00514d0a
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 00514d0f
    MOV ESI,0x5e1a05                    ; 00514d12
    LEA EDI,[EBX + 0x430]               ; 00514d17
    PUSH EDI                            ; 00514d1d
    MOV AL,byte ptr [ESI]               ; 00514d1e
        ;   Label: LAB_00514d1e
    MOV byte ptr [EDI],AL               ; 00514d20
    CMP AL,0x0                          ; 00514d22
    JZ 0x00514d36                       ; 00514d24
        ;   XREF to: 00514d36 (CONDITIONAL_JUMP)  ; LAB_00514d36
    MOV AL,byte ptr [ESI + 0x1]         ; 00514d26
    ADD ESI,0x2                         ; 00514d29
    MOV byte ptr [EDI + 0x1],AL         ; 00514d2c
    ADD EDI,0x2                         ; 00514d2f
    CMP AL,0x0                          ; 00514d32
    JNZ 0x00514d1e                      ; 00514d34
        ;   XREF to: 00514d1e (CONDITIONAL_JUMP)  ; LAB_00514d1e
    POP EDI                             ; 00514d36
        ;   Label: LAB_00514d36
    MOV ESI,0x5e1a0a                    ; 00514d37
    LEA EDI,[EBX + 0x494]               ; 00514d3c
    PUSH EDI                            ; 00514d42
    MOV AL,byte ptr [ESI]               ; 00514d43
        ;   Label: LAB_00514d43
    MOV byte ptr [EDI],AL               ; 00514d45
    CMP AL,0x0                          ; 00514d47
    JZ 0x00514d5b                       ; 00514d49
        ;   XREF to: 00514d5b (CONDITIONAL_JUMP)  ; LAB_00514d5b
    MOV AL,byte ptr [ESI + 0x1]         ; 00514d4b
    ADD ESI,0x2                         ; 00514d4e
    MOV byte ptr [EDI + 0x1],AL         ; 00514d51
    ADD EDI,0x2                         ; 00514d54
    CMP AL,0x0                          ; 00514d57
    JNZ 0x00514d43                      ; 00514d59
        ;   XREF to: 00514d43 (CONDITIONAL_JUMP)  ; LAB_00514d43
    POP EDI                             ; 00514d5b
        ;   Label: LAB_00514d5b
    MOV dword ptr [EBX + 0x4f8],0x1     ; 00514d5c
    MOV dword ptr [EBX + 0x4fc],0x0     ; 00514d66
    MOV dword ptr [EBX + 0x504],0x3f060a92 ; 00514d70
    MOV byte ptr [EBX + 0x508],0x0      ; 00514d7a
    MOV byte ptr [EBX + 0x52c],0x0      ; 00514d81
    MOV byte ptr [EBX + 0x54c],0x0      ; 00514d88
    MOV dword ptr [EBX + 0x528],0x0     ; 00514d8f
    MOV dword ptr [EBX + 0x584],0x0     ; 00514d99
    MOV dword ptr [EBX + 0x588],0x0     ; 00514da3
    MOV dword ptr [EBX + 0x58c],0x0     ; 00514dad
    MOV dword ptr [EBX + 0x590],0x0     ; 00514db7
    MOV dword ptr [EBX + 0x59c],0x0     ; 00514dc1
    MOV EAX,EBX                         ; 00514dcb
    MOV dword ptr [EBX + 0x598],0x0     ; 00514dcd
    POP EDI                             ; 00514dd7
    POP ESI                             ; 00514dd8
    POP EBX                             ; 00514dd9
    RET                                 ; 00514dda

