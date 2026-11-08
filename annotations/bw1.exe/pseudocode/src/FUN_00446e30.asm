; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00446e30(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005d6f9c+1
;   TerminatedCString s_modelName_005d6fa3
;   TerminatedCString s_motion_state_005d6fad
;   TerminatedCString s_fallEvent_005d6fba
;   TerminatedCString s_mistState_005d6fc4
;   TerminatedCString s_vanishTimer_005d6fce
;   TerminatedCString s_newPos_005d6fda
;   TerminatedCString s_deathEvent_005d6fe1
;   TerminatedCString s_recombineTime_005d6fec
;   TerminatedCString s_blownUp_005d6ffa
;   TerminatedCString s_param_005d7002
;   TerminatedCString s_boxCount_005d7008
;   TerminatedCString s_partStatus_005d7011
;   TerminatedCString s_boxListPos_005d701c
;   TerminatedCString s_boxListOrient_005d7027
;   ... and 5 more
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b3a0
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_0040b960
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446e30
        ;   Label: FUN_00446e30
    PUSH EBP                            ; 00446e31
    SUB ESP,0x20                        ; 00446e32
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00446e35
    PUSH EDX                            ; 00446e39
    CALL FUN_004a0520                   ; 00446e3a
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 00446e3f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00446e42
    PUSH 0x5d6f9d                       ; 00446e46 | s_speed_005d6f9c+1
    ADD EAX,0xc1d0                      ; 00446e4b
    PUSH EAX                            ; 00446e50
    CALL FUN_0040b5f0                   ; 00446e51
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00446e56
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00446e59
    PUSH 0x5d6fa3                       ; 00446e5d | = "modelName"
    ADD EBX,0x158                       ; 00446e62
    PUSH EBX                            ; 00446e68
    CALL FUN_0040b7f0                   ; 00446e69
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    ADD ESP,0x8                         ; 00446e6e
    PUSH 0x5d6fad                       ; 00446e71 | = "motion state"
    PUSH EBX                            ; 00446e76
    CALL FUN_0040b870                   ; 00446e77
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 00446e7c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00446e7f
    PUSH 0x5d6fba                       ; 00446e83 | = "fallEvent"
    ADD EAX,0xc268                      ; 00446e88
    PUSH EAX                            ; 00446e8d
    CALL FUN_0040b440                   ; 00446e8e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    MOV ECX,dword ptr [0x00611148]      ; 00446e93 | DAT_00611148
    ADD ESP,0x8                         ; 00446e99
    CMP ECX,0x3                         ; 00446e9c
    JL 0x00446eb0                       ; 00446e9f
        ;   XREF to: 00446eb0 (CONDITIONAL_JUMP)  ; LAB_00446eb0
    CMP dword ptr [0x00611148],0x1      ; 00446ea1 | DAT_00611148
    JG 0x00446f0b                       ; 00446ea8
        ;   XREF to: 00446f0b (CONDITIONAL_JUMP)  ; LAB_00446f0b
    ADD ESP,0x20                        ; 00446eaa
        ;   Label: LAB_00446eaa
    POP EBP                             ; 00446ead
    POP EBX                             ; 00446eae
    RET                                 ; 00446eaf
    PUSH 0x5d6fc4                       ; 00446eb0 | = "mistState"
        ;   Label: LAB_00446eb0
    XOR EBX,EBX                         ; 00446eb5
    LEA EAX,[ESP + 0x10]                ; 00446eb7
    MOV dword ptr [ESP + 0x10],EBX      ; 00446ebb
    MOV dword ptr [ESP + 0x14],EBX      ; 00446ebf
    MOV dword ptr [ESP + 0xc],EBX       ; 00446ec3
    PUSH EAX                            ; 00446ec7
    MOV dword ptr [ESP + 0xc],EBX       ; 00446ec8
    MOV dword ptr [ESP + 0x8],EBX       ; 00446ecc
    CALL FUN_0040b670                   ; 00446ed0
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 00446ed5
    PUSH 0x5d6fce                       ; 00446ed8 | = "vanishTimer"
    LEA EAX,[ESP + 0x14]                ; 00446edd
    PUSH EAX                            ; 00446ee1
    CALL FUN_0040b5f0                   ; 00446ee2
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00446ee7
    PUSH 0x5d6fda                       ; 00446eea | = "newPos"
    LEA EAX,[ESP + 0x4]                 ; 00446eef
    PUSH EAX                            ; 00446ef3
    CALL FUN_0040b1c0                   ; 00446ef4
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 00446ef9
    CMP dword ptr [0x00611148],0x1      ; 00446efc | DAT_00611148
    JG 0x00446f0b                       ; 00446f03
        ;   XREF to: 00446f0b (CONDITIONAL_JUMP)  ; LAB_00446f0b
    ADD ESP,0x20                        ; 00446f05
    POP EBP                             ; 00446f08
    POP EBX                             ; 00446f09
    RET                                 ; 00446f0a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00446f0b
        ;   Label: LAB_00446f0b
    PUSH 0x5d6fe1                       ; 00446f0f | = "deathEvent"
    ADD EAX,0xc328                      ; 00446f14
    PUSH EAX                            ; 00446f19
    CALL FUN_0040b440                   ; 00446f1a
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00446f1f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00446f22
    PUSH 0x5d6fec                       ; 00446f26 | = "recombineTime"
    ADD EAX,0xc38c                      ; 00446f2b
    PUSH EAX                            ; 00446f30
    CALL FUN_0040b5f0                   ; 00446f31
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00446f36
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00446f39
    PUSH 0x5d6ffa                       ; 00446f3d | = "blownUp"
    ADD EAX,0xca58                      ; 00446f42
    PUSH EAX                            ; 00446f47
    CALL FUN_0040b670                   ; 00446f48
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 00446f4d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00446f50
    PUSH 0x5d7002                       ; 00446f54 | = "param"
    ADD EAX,0xca5c                      ; 00446f59
    PUSH EAX                            ; 00446f5e
    CALL FUN_0040b5f0                   ; 00446f5f
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00446f64
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00446f67
    PUSH 0x5d7008                       ; 00446f6b | = "boxCount"
    ADD EAX,0xc394                      ; 00446f70
    PUSH EAX                            ; 00446f75
    CALL FUN_0040b670                   ; 00446f76
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 00446f7b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00446f7e
    PUSH 0x5d7011                       ; 00446f82 | = "partStatus"
    ADD EAX,0x158                       ; 00446f87
    PUSH EAX                            ; 00446f8c
    CALL FUN_0040b960                   ; 00446f8d
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00446f92
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00446f95
    MOV ECX,dword ptr [EAX + 0xc394]    ; 00446f99
    XOR EBX,EBX                         ; 00446f9f
    TEST ECX,ECX                        ; 00446fa1
    JLE 0x00446eaa                      ; 00446fa3
        ;   XREF to: 00446eaa (CONDITIONAL_JUMP)  ; LAB_00446eaa
    PUSH EDI                            ; 00446fa9
    PUSH ESI                            ; 00446faa
    MOV ESI,dword ptr [ESP + 0x34]      ; 00446fab
    ADD EAX,0xc398                      ; 00446faf
    MOV EBP,dword ptr [ESP + 0x34]      ; 00446fb4
    MOV dword ptr [ESP + 0x1c],EAX      ; 00446fb8
    MOV EAX,dword ptr [ESP + 0x34]      ; 00446fbc
    MOV EDI,dword ptr [ESP + 0x34]      ; 00446fc0
    ADD EAX,0xc3d0                      ; 00446fc4
    ADD ESI,0xc3dc                      ; 00446fc9
    MOV dword ptr [ESP + 0x20],EAX      ; 00446fcf
    MOV EAX,dword ptr [ESP + 0x34]      ; 00446fd3
    ADD EBP,0xc3c0                      ; 00446fd7
    ADD EAX,0xc3a4                      ; 00446fdd
    ADD EDI,0xc3b0                      ; 00446fe2
    MOV dword ptr [ESP + 0x24],EAX      ; 00446fe8
    IMUL EAX,EBX,0x48                   ; 00446fec
        ;   Label: LAB_00446fec
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00446fef
    PUSH 0x5d701c                       ; 00446ff3 | = "boxListPos"
    ADD EAX,EDX                         ; 00446ff8
    PUSH EAX                            ; 00446ffa
    CALL FUN_0040b1c0                   ; 00446ffb
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 00447000
    PUSH 0x5d7027                       ; 00447003 | = "boxListOrient"
    MOV ECX,dword ptr [ESP + 0x28]      ; 00447008
    PUSH ECX                            ; 0044700c
    CALL FUN_0040b1c0                   ; 0044700d
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 00447012
    PUSH 0x5d7035                       ; 00447015 | = "boxListDestOrient"
    PUSH EDI                            ; 0044701a
    CALL FUN_0040b3a0                   ; 0044701b
        ;   XREF to: 0040b3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b3a0()
    ADD ESP,0x8                         ; 00447020
    PUSH 0x5d7047                       ; 00447023 | = "boxListStartOrient"
    PUSH EBP                            ; 00447028
    CALL FUN_0040b3a0                   ; 00447029
        ;   XREF to: 0040b3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b3a0()
    ADD ESP,0x8                         ; 0044702e
    PUSH 0x5d705a                       ; 00447031 | = "sourcePos"
    MOV EAX,dword ptr [ESP + 0x24]      ; 00447036
    PUSH EAX                            ; 0044703a
    CALL FUN_0040b1c0                   ; 0044703b
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 00447040
    PUSH 0x5d7064                       ; 00447043 | = "boxListPart"
    INC EBX                             ; 00447048
    PUSH ESI                            ; 00447049
    ADD EDI,0x48                        ; 0044704a
    ADD EBP,0x48                        ; 0044704d
    CALL FUN_0040b6f0                   ; 00447050
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 00447055
    ADD ESI,0x48                        ; 00447058
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044705b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0044705f
    MOV EAX,dword ptr [ESP + 0x34]      ; 00447063
    ADD EDX,0x48                        ; 00447067
    ADD ECX,0x48                        ; 0044706a
    MOV dword ptr [ESP + 0x20],EDX      ; 0044706d
    MOV EDX,dword ptr [EAX + 0xc394]    ; 00447071
    MOV dword ptr [ESP + 0x24],ECX      ; 00447077
    CMP EBX,EDX                         ; 0044707b
    JL 0x00446fec                       ; 0044707d
        ;   XREF to: 00446fec (CONDITIONAL_JUMP)  ; LAB_00446fec
    POP ESI                             ; 00447083
    POP EDI                             ; 00447084
    ADD ESP,0x20                        ; 00447085
    POP EBP                             ; 00447088
    POP EBX                             ; 00447089
    RET                                 ; 0044708a

