; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e2bf0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[2]:
;   FUN_004e2e70 at 004e309c
;   FUN_004e38d0 at 004e39cc
;
; Referenced Globals:
;   undefined4 DAT_005f95d4
;   undefined4 DAT_01cb3954
;   undefined4 DAT_01cb3958
;   undefined4 DAT_01cb395c
;   undefined4 DAT_01cb3960
;   undefined4 DAT_01cb3988
;   undefined4 DAT_01cb3a90
;   undefined4 DAT_01cb5604
;   undefined4 DAT_01cb560c
;   undefined4 DAT_01cb5620
;
; Called Functions:
;   FUN_00408d70
;   FUN_00449280
;   FUN_0044d570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2bf0
        ;   Label: FUN_004e2bf0
    PUSH ESI                            ; 004e2bf1
    PUSH EDI                            ; 004e2bf2
    SUB ESP,0x30                        ; 004e2bf3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004e2bf6
    PUSH EBX                            ; 004e2bfa
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004e2bfb
    LEA ESI,[ESP + 0x28]                ; 004e2c01
    LEA EDI,[ESP + 0x4]                 ; 004e2c05
    CALL dword ptr [EAX + 0xe8]         ; 004e2c09
    ADD ESP,0x4                         ; 004e2c0f
    MOV EAX,ESP                         ; 004e2c12
    LEA ESI,[ESP + 0x24]                ; 004e2c14
    PUSH EAX                            ; 004e2c18
    MOVSD ES:EDI,ESI                    ; 004e2c19
    MOVSD ES:EDI,ESI                    ; 004e2c1a
    MOVSD ES:EDI,ESI                    ; 004e2c1b
    PUSH EBX                            ; 004e2c1c
    LEA ESI,[ESP + 0x14]                ; 004e2c1d
    LEA EDI,[ESP + 0x20]                ; 004e2c21
    CALL FUN_00408d70                   ; 004e2c25
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x14]                ; 004e2c2a
    MOV EDX,0x1                         ; 004e2c2e
    LEA EAX,[ESP + 0x20]                ; 004e2c33
    ADD ESP,0x8                         ; 004e2c37
    MOV dword ptr [0x01cb5604],EDX      ; 004e2c3a | DAT_01cb5604
    MOV dword ptr [0x01cb560c],EDX      ; 004e2c40 | DAT_01cb560c
    MOVSD ES:EDI,ESI                    ; 004e2c46
    MOVSD ES:EDI,ESI                    ; 004e2c47
    MOVSD ES:EDI,ESI                    ; 004e2c48
    CMP EAX,0x1cb3954                   ; 004e2c49
    JZ 0x004e2c6b                       ; 004e2c4e
        ;   XREF to: 004e2c6b (CONDITIONAL_JUMP)  ; LAB_004e2c6b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e2c50
    MOV [0x01cb3954],EAX                ; 004e2c54 | DAT_01cb3954
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e2c59
    MOV [0x01cb3958],EAX                ; 004e2c5d | DAT_01cb3958
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e2c62
    MOV [0x01cb395c],EAX                ; 004e2c66 | DAT_01cb395c
    ADD EBX,0x30                        ; 004e2c6b
        ;   Label: LAB_004e2c6b
    PUSH EBX                            ; 004e2c6e
    PUSH 0x1cb3960                      ; 004e2c6f | DAT_01cb3960
    MOV ESI,0x1                         ; 004e2c74
    MOV EBX,0x42000000                  ; 004e2c79
    CALL FUN_00449280                   ; 004e2c7e
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 004e2c83
    FLD float ptr [0x005f95d4]          ; 004e2c86 | DAT_005f95d4
    PUSH 0x3f800000                     ; 004e2c8c
    MOV dword ptr [0x01cb3a90],EBX      ; 004e2c91 | DAT_01cb3a90
    PUSH 0x1cb3950                      ; 004e2c97
    FSTP float ptr [0x01cb3988]         ; 004e2c9c | DAT_01cb3988
    MOV dword ptr [0x01cb5620],ESI      ; 004e2ca2 | DAT_01cb5620
    CALL FUN_0044d570                   ; 004e2ca8
        ;   XREF to: 0044d570 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d570()
    ADD ESP,0x8                         ; 004e2cad
    ADD ESP,0x30                        ; 004e2cb0
    POP EDI                             ; 004e2cb3
    POP ESI                             ; 004e2cb4
    POP EBX                             ; 004e2cb5
    RET                                 ; 004e2cb6

