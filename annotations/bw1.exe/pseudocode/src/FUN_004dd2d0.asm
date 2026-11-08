; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dd2d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005e3993+1
;   TerminatedCString s_modelName_005e399a
;   TerminatedCString s_motion_state_005e39a4
;   TerminatedCString s_stoneRed_005e39b1
;   TerminatedCString s_stoneGreen_005e39ba
;   TerminatedCString s_stoneBlue_005e39c5
;   TerminatedCString s_homeBase_005e39cf
;   undefined4 DAT_0061dc00
;
; Called Functions:
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd2d0
        ;   Label: FUN_004dd2d0
    PUSH ESI                            ; 004dd2d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004dd2d2
    PUSH EBX                            ; 004dd2d6
    CALL FUN_004a0520                   ; 004dd2d7
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 004dd2dc
    PUSH 0x5e3994                       ; 004dd2df | s_speed_005e3993+1
    LEA ESI,[EBX + 0xc1d0]              ; 004dd2e4
    PUSH ESI                            ; 004dd2ea
    CALL FUN_0040b5f0                   ; 004dd2eb
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004dd2f0
    PUSH 0x5e399a                       ; 004dd2f3 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 004dd2f8
    PUSH ESI                            ; 004dd2fe
    CALL FUN_0040b7f0                   ; 004dd2ff
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    ADD ESP,0x8                         ; 004dd304
    PUSH 0x5e39a4                       ; 004dd307 | = "motion state"
    PUSH ESI                            ; 004dd30c
    CALL FUN_0040b870                   ; 004dd30d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    MOV EDX,dword ptr [0x0061dc00]      ; 004dd312 | DAT_0061dc00
    ADD ESP,0x8                         ; 004dd318
    CMP EDX,0x2                         ; 004dd31b
    JGE 0x004dd323                      ; 004dd31e
        ;   XREF to: 004dd323 (CONDITIONAL_JUMP)  ; LAB_004dd323
    POP ESI                             ; 004dd320
    POP EBX                             ; 004dd321
    RET                                 ; 004dd322
    PUSH 0x5e39b1                       ; 004dd323 | = "stoneRed"
        ;   Label: LAB_004dd323
    LEA ESI,[EBX + 0xc298]              ; 004dd328
    PUSH ESI                            ; 004dd32e
    CALL FUN_0040b670                   ; 004dd32f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004dd334
    PUSH 0x5e39ba                       ; 004dd337 | = "stoneGreen"
    LEA ESI,[EBX + 0xc29c]              ; 004dd33c
    PUSH ESI                            ; 004dd342
    CALL FUN_0040b670                   ; 004dd343
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004dd348
    PUSH 0x5e39c5                       ; 004dd34b | = "stoneBlue"
    LEA ESI,[EBX + 0xc2a0]              ; 004dd350
    PUSH ESI                            ; 004dd356
    CALL FUN_0040b670                   ; 004dd357
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004dd35c
    PUSH 0x5e39cf                       ; 004dd35f | = "homeBase"
    ADD EBX,0xc2a4                      ; 004dd364
    PUSH EBX                            ; 004dd36a
    CALL FUN_0040b6f0                   ; 004dd36b
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004dd370
    POP ESI                             ; 004dd373
    POP EBX                             ; 004dd374
    RET                                 ; 004dd375

