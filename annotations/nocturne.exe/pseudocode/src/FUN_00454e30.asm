; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00454e30(int param_1,int param_2)
;
;
; Referenced Globals:
;   string s_dog2.wav_0057cff9
;   undefined4 DAT_005bed68
;
; Called Functions:
;   FUN_00479f70
;   FUN_004e1660
;   FUN_004e16b0
;   FUN_0052eba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454e30
        ;   Label: FUN_00454e30
    PUSH ESI                            ; 00454e31
    MOV EBX,dword ptr [ESP + 0xc]       ; 00454e32
    MOV EAX,dword ptr [ESP + 0x10]      ; 00454e36
    FLD float ptr [EAX + 0x4]           ; 00454e3a
    FSUBR float ptr [EBX + 0x2434]      ; 00454e3d
    LEA ESI,[EBX + 0x150]               ; 00454e43
    FST float ptr [EBX + 0x2434]        ; 00454e49
    FLDZ                                ; 00454e4f
    FCOMPP                              ; 00454e51
    FNSTSW AX                           ; 00454e53
    SAHF                                ; 00454e55
    JNC 0x00454e90                      ; 00454e56
        ;   XREF to: 00454e90 (CONDITIONAL_JUMP)  ; LAB_00454e90
    PUSH 0x1                            ; 00454e58
    PUSH 0x5                            ; 00454e5a
    PUSH ESI                            ; 00454e5c
        ;   Label: LAB_00454e5c
    CALL FUN_004e16b0                   ; 00454e5d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 00454e62
    MOV EDX,dword ptr [EBX + 0xbd2c]    ; 00454e65
        ;   Label: LAB_00454e65
    PUSH EDX                            ; 00454e6b
    MOV ECX,dword ptr [0x005bed68]      ; 00454e6c | DAT_005bed68
    PUSH ECX                            ; 00454e72
    CALL FUN_0052eba0                   ; 00454e73
        ;   XREF to: 0052eba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052eba0()
    ADD ESP,0x8                         ; 00454e78
    TEST EAX,EAX                        ; 00454e7b
    JZ 0x00454eb6                       ; 00454e7d
        ;   XREF to: 00454eb6 (CONDITIONAL_JUMP)  ; LAB_00454eb6
    MOV ESI,dword ptr [ESP + 0x10]      ; 00454e7f
    PUSH ESI                            ; 00454e83
    PUSH EBX                            ; 00454e84
    CALL FUN_00479f70                   ; 00454e85
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00479f70()
    ADD ESP,0x8                         ; 00454e8a
    POP ESI                             ; 00454e8d
    POP EBX                             ; 00454e8e
    RET                                 ; 00454e8f
    PUSH ESI                            ; 00454e90
        ;   Label: LAB_00454e90
    MOV dword ptr [EBX + 0x2434],0x0    ; 00454e91
    CALL FUN_004e1660                   ; 00454e9b
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00454ea0
    ADD ESP,0x4                         ; 00454ea3
    CMP EAX,0x7                         ; 00454ea6
    JZ 0x00454e65                       ; 00454ea9
        ;   XREF to: 00454e65 (CONDITIONAL_JUMP)  ; LAB_00454e65
    CMP EAX,0x6                         ; 00454eab
    JZ 0x00454e65                       ; 00454eae
        ;   XREF to: 00454e65 (CONDITIONAL_JUMP)  ; LAB_00454e65
    PUSH 0x1                            ; 00454eb0
    PUSH 0x6                            ; 00454eb2
    JMP 0x00454e5c                      ; 00454eb4
        ;   XREF to: 00454e5c (UNCONDITIONAL_JUMP)  ; LAB_00454e5c
    PUSH 0x57cff9                       ; 00454eb6 | = "dog2.wav"
        ;   Label: LAB_00454eb6
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00454ebb
    PUSH EBX                            ; 00454ec1
    CALL dword ptr [EAX + 0x24]         ; 00454ec2
    ADD ESP,0x8                         ; 00454ec5
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 00454ec8
    MOV ESI,dword ptr [ESP + 0x10]      ; 00454ece
    PUSH ESI                            ; 00454ed2
    PUSH EBX                            ; 00454ed3
    CALL FUN_00479f70                   ; 00454ed4
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00479f70()
    ADD ESP,0x8                         ; 00454ed9
    POP ESI                             ; 00454edc
    POP EBX                             ; 00454edd
    RET                                 ; 00454ede

