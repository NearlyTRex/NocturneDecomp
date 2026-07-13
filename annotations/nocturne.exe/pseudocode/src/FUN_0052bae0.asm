; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052bae0(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   string s_DirectSux:_Unable_to_%s._(%s)_005940b7
;   string s_Stop_hardware_sfx_secondary_buff_00594104
;   string s_DirectSoundDevice::killSfx_-_han_005947d0
;
; Called Functions:
;   FUN_00529980
;   FUN_00529a90
;   FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052bae0
        ;   Label: FUN_0052bae0
    PUSH ESI                            ; 0052bae1
    PUSH EDI                            ; 0052bae2
    PUSH EBP                            ; 0052bae3
    SUB ESP,0x190                       ; 0052bae4
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0052baea
    MOV EAX,dword ptr [EAX + 0x6c]      ; 0052baf1
    TEST EAX,EAX                        ; 0052baf4
    JLE 0x0052bafd                      ; 0052baf6
        ;   XREF to: 0052bafd (CONDITIONAL_JUMP)  ; LAB_0052bafd
    CMP EAX,0x1f                        ; 0052baf8
    JL 0x0052bb15                       ; 0052bafb
        ;   XREF to: 0052bb15 (CONDITIONAL_JUMP)  ; LAB_0052bb15
    PUSH 0x5947d0                       ; 0052bafd | = "DirectSoundDevice::killSfx - handle w..."
        ;   Label: LAB_0052bafd
    CALL FUN_00529980                   ; 0052bb02
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052bb07
    ADD ESP,0x190                       ; 0052bb0a
        ;   Label: LAB_0052bb0a
    POP EBP                             ; 0052bb10
    POP EDI                             ; 0052bb11
    POP ESI                             ; 0052bb12
    POP EBX                             ; 0052bb13
    RET                                 ; 0052bb14
    LEA EBX,[EAX*0x4 + 0x0]             ; 0052bb15
        ;   Label: LAB_0052bb15
    CMP dword ptr [EBX + 0x2dc92a8],0x0 ; 0052bb1c
    JZ 0x0052bafd                       ; 0052bb23
        ;   XREF to: 0052bafd (CONDITIONAL_JUMP)  ; LAB_0052bafd
    CMP dword ptr [EBX + 0x2dc9324],0x0 ; 0052bb25
    JZ 0x0052bafd                       ; 0052bb2c
        ;   XREF to: 0052bafd (CONDITIONAL_JUMP)  ; LAB_0052bafd
    MOV ESI,EAX                         ; 0052bb2e
    SHL EAX,0x2                         ; 0052bb30
    MOV EBX,dword ptr [EAX + 0x2dc92a8] ; 0052bb33
    TEST EBX,EBX                        ; 0052bb39
    JNZ 0x0052bb87                      ; 0052bb3b
        ;   XREF to: 0052bb87 (CONDITIONAL_JUMP)  ; LAB_0052bb87
    LEA EBX,[ESI*0x4 + 0x0]             ; 0052bb3d
        ;   Label: LAB_0052bb3d
    ADD EBX,0x2dc9324                   ; 0052bb44
    MOV EDI,dword ptr [EBX]             ; 0052bb4a
    TEST EDI,EDI                        ; 0052bb4c
    JZ 0x0052bb5c                       ; 0052bb4e
        ;   XREF to: 0052bb5c (CONDITIONAL_JUMP)  ; LAB_0052bb5c
    PUSH EDI                            ; 0052bb50
    MOV EDX,dword ptr [EDI]             ; 0052bb51
    CALL dword ptr [EDX + 0x8]          ; 0052bb53
    MOV dword ptr [EBX],0x0             ; 0052bb56
    LEA EBX,[ESI*0x4 + 0x0]             ; 0052bb5c
        ;   Label: LAB_0052bb5c
    ADD EBX,0x2dc92a8                   ; 0052bb63
    MOV EBP,dword ptr [EBX]             ; 0052bb69
    TEST EBP,EBP                        ; 0052bb6b
    JZ 0x0052bb0a                       ; 0052bb6d
        ;   XREF to: 0052bb0a (CONDITIONAL_JUMP)  ; LAB_0052bb0a
    PUSH EBP                            ; 0052bb6f
    MOV ESI,dword ptr [EBP]             ; 0052bb70
    CALL dword ptr [ESI + 0x8]          ; 0052bb73
    MOV dword ptr [EBX],0x0             ; 0052bb76
    ADD ESP,0x190                       ; 0052bb7c
    POP EBP                             ; 0052bb82
    POP EDI                             ; 0052bb83
    POP ESI                             ; 0052bb84
    POP EBX                             ; 0052bb85
    RET                                 ; 0052bb86
    MOV EAX,EBX                         ; 0052bb87
        ;   Label: LAB_0052bb87
    PUSH EAX                            ; 0052bb89
    MOV EBX,dword ptr [EBX]             ; 0052bb8a
    CALL dword ptr [EBX + 0x48]         ; 0052bb8c
    TEST EAX,EAX                        ; 0052bb8f
    JZ 0x0052bb3d                       ; 0052bb91
        ;   XREF to: 0052bb3d (CONDITIONAL_JUMP)  ; LAB_0052bb3d
    PUSH EAX                            ; 0052bb93
    CALL FUN_00529a90                   ; 0052bb94
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00529a90()
    ADD ESP,0x4                         ; 0052bb99
    PUSH EAX                            ; 0052bb9c
    PUSH 0x594104                       ; 0052bb9d | = "Stop hardware sfx secondary buffer"
    PUSH 0x5940b7                       ; 0052bba2 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052bba7
    PUSH EAX                            ; 0052bbab
    CALL FUN_00563c90                   ; 0052bbac
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x10                        ; 0052bbb1
    MOV EAX,ESP                         ; 0052bbb4
    PUSH EAX                            ; 0052bbb6
    CALL FUN_00529980                   ; 0052bbb7
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052bbbc
    ADD ESP,0x190                       ; 0052bbbf
    POP EBP                             ; 0052bbc5
    POP EDI                             ; 0052bbc6
    POP ESI                             ; 0052bbc7
    POP EBX                             ; 0052bbc8
    RET                                 ; 0052bbc9

