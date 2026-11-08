; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0130(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005e3d30+1
;   TerminatedCString s_modelName_005e3d37
;   TerminatedCString s_guardDistance_005e3d41
;   TerminatedCString s_livesLeft_005e3d4f
;   TerminatedCString s_motion_state_005e3d59
;   TerminatedCString s_partStatus_005e3d66
;   TerminatedCString s_spasmCount_005e3d71
;   TerminatedCString s_livesLeft_005e3d7c
;   TerminatedCString s_ariseTimer_005e3d86
;   undefined4 DAT_0061dc2c
;
; Called Functions:
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_0040b960
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0130
        ;   Label: FUN_004e0130
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e0131
    PUSH EBX                            ; 004e0135
    CALL FUN_004a0520                   ; 004e0136
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    MOV EDX,dword ptr [0x0061dc2c]      ; 004e013b | DAT_0061dc2c
    ADD ESP,0x4                         ; 004e0141
    CMP EDX,0x4                         ; 004e0144
    JL 0x004e01ca                       ; 004e0147
        ;   XREF to: 004e01ca (CONDITIONAL_JUMP)  ; LAB_004e01ca
    PUSH 0x5e3d37                       ; 004e014d | = "modelName"
        ;   Label: LAB_004e014d
    LEA EAX,[EBX + 0x158]               ; 004e0152
    PUSH EAX                            ; 004e0158
    CALL FUN_0040b7f0                   ; 004e0159
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    MOV ECX,dword ptr [0x0061dc2c]      ; 004e015e | DAT_0061dc2c
    ADD ESP,0x8                         ; 004e0164
    CMP ECX,0x2                         ; 004e0167
    JL 0x004e0185                       ; 004e016a
        ;   XREF to: 004e0185 (CONDITIONAL_JUMP)  ; LAB_004e0185
    CMP ECX,0x7                         ; 004e016c
    JGE 0x004e0185                      ; 004e016f
        ;   XREF to: 004e0185 (CONDITIONAL_JUMP)  ; LAB_004e0185
    PUSH 0x5e3d41                       ; 004e0171 | = "guardDistance"
    LEA EAX,[EBX + 0xc1e0]              ; 004e0176
    PUSH EAX                            ; 004e017c
    CALL FUN_0040b5f0                   ; 004e017d
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004e0182
    CMP dword ptr [0x0061dc2c],0x3      ; 004e0185 | DAT_0061dc2c
        ;   Label: LAB_004e0185
    JL 0x004e01a2                       ; 004e018c
        ;   XREF to: 004e01a2 (CONDITIONAL_JUMP)  ; LAB_004e01a2
    PUSH 0x5e3d4f                       ; 004e018e | = "livesLeft"
    LEA EAX,[EBX + 0xc284]              ; 004e0193
    PUSH EAX                            ; 004e0199
    CALL FUN_0040b670                   ; 004e019a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004e019f
    CMP dword ptr [0x0061dc2c],0x5      ; 004e01a2 | DAT_0061dc2c
        ;   Label: LAB_004e01a2
    JL 0x004e01bf                       ; 004e01a9
        ;   XREF to: 004e01bf (CONDITIONAL_JUMP)  ; LAB_004e01bf
    PUSH 0x5e3d59                       ; 004e01ab | = "motion state"
    LEA EAX,[EBX + 0x158]               ; 004e01b0
    PUSH EAX                            ; 004e01b6
    CALL FUN_0040b870                   ; 004e01b7
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 004e01bc
    CMP dword ptr [0x0061dc2c],0x6      ; 004e01bf | DAT_0061dc2c
        ;   Label: LAB_004e01bf
    JGE 0x004e01e3                      ; 004e01c6
        ;   XREF to: 004e01e3 (CONDITIONAL_JUMP)  ; LAB_004e01e3
    POP EBX                             ; 004e01c8
    RET                                 ; 004e01c9
    PUSH 0x5e3d31                       ; 004e01ca | s_speed_005e3d30+1
        ;   Label: LAB_004e01ca
    LEA EAX,[EBX + 0xc1d0]              ; 004e01cf
    PUSH EAX                            ; 004e01d5
    CALL FUN_0040b5f0                   ; 004e01d6
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004e01db
    JMP 0x004e014d                      ; 004e01de
        ;   XREF to: 004e014d (UNCONDITIONAL_JUMP)  ; LAB_004e014d
    PUSH 0x5e3d66                       ; 004e01e3 | = "partStatus"
        ;   Label: LAB_004e01e3
    LEA EAX,[EBX + 0x158]               ; 004e01e8
    PUSH EAX                            ; 004e01ee
    CALL FUN_0040b960                   ; 004e01ef
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004e01f4
    PUSH 0x5e3d71                       ; 004e01f7 | = "spasmCount"
    LEA EAX,[EBX + 0xc288]              ; 004e01fc
    PUSH EAX                            ; 004e0202
    CALL FUN_0040b670                   ; 004e0203
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004e0208
    PUSH 0x5e3d7c                       ; 004e020b | = "livesLeft"
    LEA EAX,[EBX + 0xc284]              ; 004e0210
    PUSH EAX                            ; 004e0216
    CALL FUN_0040b670                   ; 004e0217
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004e021c
    PUSH 0x5e3d86                       ; 004e021f | = "ariseTimer"
    ADD EBX,0xc274                      ; 004e0224
    PUSH EBX                            ; 004e022a
    CALL FUN_0040b670                   ; 004e022b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004e0230
    POP EBX                             ; 004e0233
    RET                                 ; 004e0234

