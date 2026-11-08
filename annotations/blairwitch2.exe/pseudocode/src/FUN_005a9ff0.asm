; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9ff0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 s_MeleeAttack_005f0a5a+1
;   undefined4 DAT_0060088c
;
; Called Functions:
;   FUN_00423850
;   FUN_005035c0
;   FUN_00503620
;   FUN_0059d8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9ff0
        ;   Label: FUN_005a9ff0
    PUSH ESI                            ; 005a9ff1
    PUSH EDI                            ; 005a9ff2
    SUB ESP,0x8                         ; 005a9ff3
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a9ff6
    LEA ESI,[EBX + 0x2b4]               ; 005a9ffa
    PUSH ESI                            ; 005aa000
    CALL FUN_005035c0                   ; 005aa001
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    FLD float ptr [EBX + 0x11864]       ; 005aa006
    FLDZ                                ; 005aa00c
    ADD ESP,0x4                         ; 005aa00e
    MOV EDI,dword ptr [EAX + 0x24]      ; 005aa011
    FCOMPP                              ; 005aa014
    FNSTSW AX                           ; 005aa016
    SAHF                                ; 005aa018
    JNC 0x005aa047                      ; 005aa019
        ;   XREF to: 005aa047 (CONDITIONAL_JUMP)  ; LAB_005aa047
    FLD float ptr [EBX + 0x11864]       ; 005aa01b
    FSUB float ptr [ESP + 0x1c]         ; 005aa021
    FST float ptr [EBX + 0x11864]       ; 005aa025
    FLDZ                                ; 005aa02b
    FCOMPP                              ; 005aa02d
    FNSTSW AX                           ; 005aa02f
    SAHF                                ; 005aa031
    JA 0x005aa03b                       ; 005aa032
        ;   XREF to: 005aa03b (CONDITIONAL_JUMP)  ; LAB_005aa03b
    ADD ESP,0x8                         ; 005aa034
        ;   Label: LAB_005aa034
    POP EDI                             ; 005aa037
    POP ESI                             ; 005aa038
    POP EBX                             ; 005aa039
    RET                                 ; 005aa03a
    MOV dword ptr [EBX + 0x11864],0x0   ; 005aa03b
        ;   Label: LAB_005aa03b
    JMP 0x005aa034                      ; 005aa045
        ;   XREF to: 005aa034 (UNCONDITIONAL_JUMP)  ; LAB_005aa034
    PUSH dword ptr [ESP + 0x1c]         ; 005aa047
        ;   Label: LAB_005aa047
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005aa04b
    PUSH EBX                            ; 005aa051
    CALL dword ptr [EAX + 0x150]        ; 005aa052
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 005aa058
    ADD ESP,0x8                         ; 005aa05e
    TEST EDX,EDX                        ; 005aa061
    JNZ 0x005aa0a3                      ; 005aa063
        ;   XREF to: 005aa0a3 (CONDITIONAL_JUMP)  ; LAB_005aa0a3
    TEST EDI,EDI                        ; 005aa065
    JZ 0x005aa034                       ; 005aa067
        ;   XREF to: 005aa034 (CONDITIONAL_JUMP)  ; LAB_005aa034
    PUSH 0x1                            ; 005aa069
    PUSH 0x2                            ; 005aa06b
    PUSH ESI                            ; 005aa06d
    CALL FUN_00503620                   ; 005aa06e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005aa073
    FLD float ptr [EBX + 0x11868]       ; 005aa076
    FSUB float ptr [ESP + 0x1c]         ; 005aa07c
    FST float ptr [EBX + 0x11868]       ; 005aa080
    FLDZ                                ; 005aa086
    FCOMPP                              ; 005aa088
    FNSTSW AX                           ; 005aa08a
    SAHF                                ; 005aa08c
    JC 0x005aa034                       ; 005aa08d
        ;   XREF to: 005aa034 (CONDITIONAL_JUMP)  ; LAB_005aa034
    PUSH 0x1                            ; 005aa08f
    PUSH 0x0                            ; 005aa091
    PUSH ESI                            ; 005aa093
    CALL FUN_00503620                   ; 005aa094
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005aa099
    ADD ESP,0x8                         ; 005aa09c
    POP EDI                             ; 005aa09f
    POP ESI                             ; 005aa0a0
    POP EBX                             ; 005aa0a1
    RET                                 ; 005aa0a2
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005aa0a3
        ;   Label: LAB_005aa0a3
    MOV dword ptr [EBX + 0x11868],0x40a00000 ; 005aa0a9
    PUSH EAX                            ; 005aa0b3
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 005aa0b4
    CALL dword ptr [ESI + 0x114]        ; 005aa0ba
    ADD ESP,0x4                         ; 005aa0c0
    TEST EAX,EAX                        ; 005aa0c3
    JZ 0x005aa0d0                       ; 005aa0c5
        ;   XREF to: 005aa0d0 (CONDITIONAL_JUMP)  ; LAB_005aa0d0
    CMP dword ptr [EBX + 0x10af0],0x0   ; 005aa0c7
    JNZ 0x005aa148                      ; 005aa0ce
        ;   XREF to: 005aa148 (CONDITIONAL_JUMP)  ; LAB_005aa148
    LEA ESI,[EBX + 0x2b4]               ; 005aa0d0
        ;   Label: LAB_005aa0d0
    PUSH ESI                            ; 005aa0d6
    CALL FUN_005035c0                   ; 005aa0d7
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005aa0dc
    ADD ESP,0x4                         ; 005aa0df
    TEST EAX,EAX                        ; 005aa0e2
    JBE 0x005aa163                      ; 005aa0e4
        ;   XREF to: 005aa163 (CONDITIONAL_JUMP)  ; LAB_005aa163
    CMP EAX,0x2                         ; 005aa0e6
    JNZ 0x005aa177                      ; 005aa0e9
        ;   XREF to: 005aa177 (CONDITIONAL_JUMP)  ; LAB_005aa177
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005aa0ef
    ADD EAX,0x20                        ; 005aa0f5
    PUSH EAX                            ; 005aa0f8
    PUSH EBX                            ; 005aa0f9
    CALL FUN_00423850                   ; 005aa0fa
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; undefined FUN_00423850()
    LEA EAX,[EBX + 0x20]                ; 005aa0ff
    ADD ESP,0x8                         ; 005aa102
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 005aa105
    FLD float ptr [EAX]                 ; 005aa10b
    FSUB float ptr [ESI + 0x20]         ; 005aa10d
    FMUL ST0                            ; 005aa110
    FLD float ptr [EAX + 0x8]           ; 005aa112
    FSUB float ptr [ESI + 0x28]         ; 005aa115
    FMUL ST0                            ; 005aa118
    FADDP                               ; 005aa11a
    FSQRT                               ; 005aa11c
    FCOMP float ptr [0x0060088c]        ; 005aa11e | DAT_0060088c
    FNSTSW AX                           ; 005aa124
    SAHF                                ; 005aa126
    JNC 0x005aa034                      ; 005aa127
        ;   XREF to: 005aa034 (CONDITIONAL_JUMP)  ; LAB_005aa034
    PUSH 0x5f0a5b                       ; 005aa12d | s_MeleeAttack_005f0a5a+1
    ADD EBX,0x10af8                     ; 005aa132
    PUSH EBX                            ; 005aa138
    CALL FUN_0059d8e0                   ; 005aa139
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005aa13e
    ADD ESP,0x8                         ; 005aa141
    POP EDI                             ; 005aa144
    POP ESI                             ; 005aa145
    POP EBX                             ; 005aa146
    RET                                 ; 005aa147
    MOV dword ptr [EBX + 0x10af0],0x0   ; 005aa148
        ;   Label: LAB_005aa148
    MOV dword ptr [EBX + 0x10a78],0x0   ; 005aa152
    ADD ESP,0x8                         ; 005aa15c
    POP EDI                             ; 005aa15f
    POP ESI                             ; 005aa160
    POP EBX                             ; 005aa161
    RET                                 ; 005aa162
    PUSH 0x1                            ; 005aa163
        ;   Label: LAB_005aa163
    PUSH 0x2                            ; 005aa165
    PUSH ESI                            ; 005aa167
    CALL FUN_00503620                   ; 005aa168
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005aa16d
    ADD ESP,0x8                         ; 005aa170
    POP EDI                             ; 005aa173
    POP ESI                             ; 005aa174
    POP EBX                             ; 005aa175
    RET                                 ; 005aa176
    PUSH 0x1                            ; 005aa177
        ;   Label: LAB_005aa177
    PUSH 0x2                            ; 005aa179
    ADD EBX,0x2b4                       ; 005aa17b
    PUSH EBX                            ; 005aa181
    CALL FUN_00503620                   ; 005aa182
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005aa187
    ADD ESP,0x8                         ; 005aa18a
    POP EDI                             ; 005aa18d
    POP ESI                             ; 005aa18e
    POP EBX                             ; 005aa18f
    RET                                 ; 005aa190

