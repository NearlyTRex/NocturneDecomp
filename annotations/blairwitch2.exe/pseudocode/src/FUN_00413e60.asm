; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00413e60(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005cbb65+1
;   TerminatedCString s_modelName_005cbb6c
;   TerminatedCString s_motion_state_005cbb76
;   TerminatedCString s_fallEvent_005cbb83
;   TerminatedCString s_mistState_005cbb8d
;   TerminatedCString s_vanishTimer_005cbb97
;   TerminatedCString s_newPos_005cbba3
;   undefined4 DAT_0060988c
;
; Called Functions:
;   FUN_0040b4b0
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040bae0
;   FUN_0040bb60
;   FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413e60
        ;   Label: FUN_00413e60
    PUSH ESI                            ; 00413e61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00413e62
    PUSH EBX                            ; 00413e66
    CALL FUN_00487ec0                   ; 00413e67
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487ec0()
    ADD ESP,0x4                         ; 00413e6c
    PUSH 0x5cbb66                       ; 00413e6f | s_speed_005cbb65+1
    LEA ESI,[EBX + 0x10a60]             ; 00413e74
    PUSH ESI                            ; 00413e7a
    CALL FUN_0040b8e0                   ; 00413e7b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00413e80
    PUSH 0x5cbb6c                       ; 00413e83 | = "modelName"
    LEA ESI,[EBX + 0x2b4]               ; 00413e88
    PUSH ESI                            ; 00413e8e
    CALL FUN_0040bae0                   ; 00413e8f
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bae0()
    ADD ESP,0x8                         ; 00413e94
    PUSH 0x5cbb76                       ; 00413e97 | = "motion state"
    PUSH ESI                            ; 00413e9c
    CALL FUN_0040bb60                   ; 00413e9d
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bb60()
    MOV EDX,dword ptr [0x0060988c]      ; 00413ea2 | DAT_0060988c
    ADD ESP,0x8                         ; 00413ea8
    CMP EDX,0x2                         ; 00413eab
    JGE 0x00413ebc                      ; 00413eae
        ;   XREF to: 00413ebc (CONDITIONAL_JUMP)  ; LAB_00413ebc
    CMP dword ptr [0x0060988c],0x3      ; 00413eb0 | DAT_0060988c
    JGE 0x00413edc                      ; 00413eb7
        ;   XREF to: 00413edc (CONDITIONAL_JUMP)  ; LAB_00413edc
    POP ESI                             ; 00413eb9
    POP EBX                             ; 00413eba
    RET                                 ; 00413ebb
    PUSH 0x5cbb83                       ; 00413ebc | = "fallEvent"
        ;   Label: LAB_00413ebc
    LEA ESI,[EBX + 0x10af8]             ; 00413ec1
    PUSH ESI                            ; 00413ec7
    CALL FUN_0040b730                   ; 00413ec8
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00413ecd
    CMP dword ptr [0x0060988c],0x3      ; 00413ed0 | DAT_0060988c
    JGE 0x00413edc                      ; 00413ed7
        ;   XREF to: 00413edc (CONDITIONAL_JUMP)  ; LAB_00413edc
    POP ESI                             ; 00413ed9
    POP EBX                             ; 00413eda
    RET                                 ; 00413edb
    PUSH 0x5cbb8d                       ; 00413edc | = "mistState"
        ;   Label: LAB_00413edc
    LEA ESI,[EBX + 0x10b94]             ; 00413ee1
    PUSH ESI                            ; 00413ee7
    CALL FUN_0040b960                   ; 00413ee8
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00413eed
    PUSH 0x5cbb97                       ; 00413ef0 | = "vanishTimer"
    LEA ESI,[EBX + 0x10b98]             ; 00413ef5
    PUSH ESI                            ; 00413efb
    CALL FUN_0040b8e0                   ; 00413efc
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00413f01
    PUSH 0x5cbba3                       ; 00413f04 | = "newPos"
    ADD EBX,0x10b9c                     ; 00413f09
    PUSH EBX                            ; 00413f0f
    CALL FUN_0040b4b0                   ; 00413f10
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 00413f15
    POP ESI                             ; 00413f18
    POP EBX                             ; 00413f19
    RET                                 ; 00413f1a

