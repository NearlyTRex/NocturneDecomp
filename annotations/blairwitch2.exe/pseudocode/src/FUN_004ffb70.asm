; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ffb70(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005dee4c+1
;   TerminatedCString s_modelName_005dee53
;   TerminatedCString s_guardDistance_005dee5d
;   TerminatedCString s_motion_state_005dee6b
;   TerminatedCString s_clothList_005dee78
;   TerminatedCString s_postMode_005dee82
;   TerminatedCString s_ourPost_005dee8b
;   TerminatedCString s_vehicle_005dee93
;   TerminatedCString s_sideOfCar_005dee9b
;   TerminatedCString s_holdPosFlag_005deea5
;   TerminatedCString s_holdPosCond_005deeb1
;   undefined4 DAT_006182e4
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_0040bae0
;   FUN_0040bb60
;   FUN_0040bfd0
;   FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ffb70
        ;   Label: FUN_004ffb70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ffb71
    PUSH EBX                            ; 004ffb75
    CALL FUN_00487ec0                   ; 004ffb76
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487ec0()
    ADD ESP,0x4                         ; 004ffb7b
    PUSH 0x5dee4d                       ; 004ffb7e | s_speed_005dee4c+1
    LEA EAX,[EBX + 0x10a60]             ; 004ffb83
    PUSH EAX                            ; 004ffb89
    CALL FUN_0040b8e0                   ; 004ffb8a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 004ffb8f
    PUSH 0x5dee53                       ; 004ffb92 | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 004ffb97
    PUSH EAX                            ; 004ffb9d
    CALL FUN_0040bae0                   ; 004ffb9e
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bae0()
    MOV EDX,dword ptr [0x006182e4]      ; 004ffba3 | DAT_006182e4
    ADD ESP,0x8                         ; 004ffba9
    CMP EDX,0x4                         ; 004ffbac
    JL 0x004ffc55                       ; 004ffbaf
        ;   XREF to: 004ffc55 (CONDITIONAL_JUMP)  ; LAB_004ffc55
    PUSH 0x5dee6b                       ; 004ffbb5 | = "motion state"
        ;   Label: LAB_004ffbb5
    LEA EAX,[EBX + 0x2b4]               ; 004ffbba
    PUSH EAX                            ; 004ffbc0
    CALL FUN_0040bb60                   ; 004ffbc1
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bb60()
    MOV ECX,dword ptr [0x006182e4]      ; 004ffbc6 | DAT_006182e4
    ADD ESP,0x8                         ; 004ffbcc
    CMP ECX,0x2                         ; 004ffbcf
    JNZ 0x004ffbe8                      ; 004ffbd2
        ;   XREF to: 004ffbe8 (CONDITIONAL_JUMP)  ; LAB_004ffbe8
    PUSH 0x5dee78                       ; 004ffbd4 | = "clothList"
    LEA EAX,[EBX + 0x2d0c]              ; 004ffbd9
    PUSH EAX                            ; 004ffbdf
    CALL FUN_0040bfd0                   ; 004ffbe0
        ;   XREF to: 0040bfd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bfd0()
    ADD ESP,0x8                         ; 004ffbe5
    CMP dword ptr [0x006182e4],0x5      ; 004ffbe8 | DAT_006182e4
        ;   Label: LAB_004ffbe8
    JL 0x004ffc19                       ; 004ffbef
        ;   XREF to: 004ffc19 (CONDITIONAL_JUMP)  ; LAB_004ffc19
    PUSH 0x5dee82                       ; 004ffbf1 | = "postMode"
    LEA EAX,[EBX + 0x10b14]             ; 004ffbf6
    PUSH EAX                            ; 004ffbfc
    CALL FUN_0040b960                   ; 004ffbfd
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004ffc02
    PUSH 0x5dee8b                       ; 004ffc05 | = "ourPost"
    LEA EAX,[EBX + 0x10b18]             ; 004ffc0a
    PUSH EAX                            ; 004ffc10
    CALL FUN_0040b9e0                   ; 004ffc11
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 004ffc16
    CMP dword ptr [0x006182e4],0x6      ; 004ffc19 | DAT_006182e4
        ;   Label: LAB_004ffc19
    JL 0x004ffc4a                       ; 004ffc20
        ;   XREF to: 004ffc4a (CONDITIONAL_JUMP)  ; LAB_004ffc4a
    PUSH 0x5dee93                       ; 004ffc22 | = "vehicle"
    LEA EAX,[EBX + 0x10b1c]             ; 004ffc27
    PUSH EAX                            ; 004ffc2d
    CALL FUN_0040b9e0                   ; 004ffc2e
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 004ffc33
    PUSH 0x5dee9b                       ; 004ffc36 | = "sideOfCar"
    LEA EAX,[EBX + 0x10b20]             ; 004ffc3b
    PUSH EAX                            ; 004ffc41
    CALL FUN_0040b960                   ; 004ffc42
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004ffc47
    CMP dword ptr [0x006182e4],0x7      ; 004ffc4a | DAT_006182e4
        ;   Label: LAB_004ffc4a
    JGE 0x004ffc6e                      ; 004ffc51
        ;   XREF to: 004ffc6e (CONDITIONAL_JUMP)  ; LAB_004ffc6e
    POP EBX                             ; 004ffc53
    RET                                 ; 004ffc54
    PUSH 0x5dee5d                       ; 004ffc55 | = "guardDistance"
        ;   Label: LAB_004ffc55
    LEA EAX,[EBX + 0x10a70]             ; 004ffc5a
    PUSH EAX                            ; 004ffc60
    CALL FUN_0040b8e0                   ; 004ffc61
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 004ffc66
    JMP 0x004ffbb5                      ; 004ffc69
        ;   XREF to: 004ffbb5 (UNCONDITIONAL_JUMP)  ; LAB_004ffbb5
    PUSH 0x5deea5                       ; 004ffc6e | = "holdPosFlag"
        ;   Label: LAB_004ffc6e
    LEA EAX,[EBX + 0x10b24]             ; 004ffc73
    PUSH EAX                            ; 004ffc79
    CALL FUN_0040b960                   ; 004ffc7a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004ffc7f
    PUSH 0x5deeb1                       ; 004ffc82 | = "holdPosCond"
    ADD EBX,0x10b28                     ; 004ffc87
    PUSH EBX                            ; 004ffc8d
    CALL FUN_0040b730                   ; 004ffc8e
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004ffc93
    POP EBX                             ; 004ffc96
    RET                                 ; 004ffc97

