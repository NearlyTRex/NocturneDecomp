; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537020(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ecce5
;   undefined4 DAT_005ecced
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_00622c18
;   undefined4 DAT_01c3f6a0
;   undefined4 DAT_01d06b10
;
; Called Functions:
;   FUN_0040c600
;   FUN_004a6c30
;   FUN_00536290
;   FUN_00536a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537020
        ;   Label: FUN_00537020
    PUSH ESI                            ; 00537021
    PUSH EDI                            ; 00537022
    PUSH EBP                            ; 00537023
    MOV ESI,dword ptr [ESP + 0x14]      ; 00537024
    CMP dword ptr [ESI + 0x39c],0x0     ; 00537028
    JZ 0x005370f4                       ; 0053702f
        ;   XREF to: 005370f4 (CONDITIONAL_JUMP)  ; LAB_005370f4
    LEA EAX,[ESI + 0x338]               ; 00537035
        ;   Label: LAB_00537035
    PUSH EAX                            ; 0053703b
    MOV EBX,dword ptr [0x0061b4d0]      ; 0053703c | DAT_0061b4d0
    PUSH EBX                            ; 00537042
    CALL FUN_004a6c30                   ; 00537043
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 00537048
    TEST EAX,EAX                        ; 0053704b
    JZ 0x0053706f                       ; 0053704d
        ;   XREF to: 0053706f (CONDITIONAL_JUMP)  ; LAB_0053706f
    CMP dword ptr [ESI + 0x430],0x3f800000 ; 0053704f
    JZ 0x0053706f                       ; 00537059
        ;   XREF to: 0053706f (CONDITIONAL_JUMP)  ; LAB_0053706f
    MOV dword ptr [ESI + 0x434],0x0     ; 0053705b
    MOV dword ptr [ESI + 0x430],0x3f800000 ; 00537065
    PUSH dword ptr [ESP + 0x18]         ; 0053706f
        ;   Label: LAB_0053706f
    PUSH ESI                            ; 00537073
    CALL FUN_00536a20                   ; 00537074
        ;   XREF to: 00536a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00536a20()
    FLD float ptr [ESI + 0x430]         ; 00537079
    FMUL double ptr [0x005ecce5]        ; 0053707f | DAT_005ecce5
    FMUL float ptr [ESI + 0x434]        ; 00537085
    FLD1                                ; 0053708b
    FLDL2E                              ; 0053708d
    FMUL ST2                            ; 0053708f
    FST ST2                             ; 00537091
    FPREM                               ; 00537093
    F2XM1                               ; 00537095
    FADDP                               ; 00537097
    FSCALE                              ; 00537099
    FSTP ST1                            ; 0053709b
    ADD ESP,0x8                         ; 0053709d
    FCOMP double ptr [0x005ecced]       ; 005370a0 | DAT_005ecced
    FNSTSW AX                           ; 005370a6
    SAHF                                ; 005370a8
    JBE 0x00537177                      ; 005370a9
        ;   XREF to: 00537177 (CONDITIONAL_JUMP)  ; LAB_00537177
    MOV EBP,dword ptr [ESI + 0x428]     ; 005370af
    MOV dword ptr [ESI + 0x440],0x0     ; 005370b5
    TEST EBP,EBP                        ; 005370bf
    JZ 0x0053711d                       ; 005370c1
        ;   XREF to: 0053711d (CONDITIONAL_JUMP)  ; LAB_0053711d
    XOR EDI,EDI                         ; 005370c3
        ;   Label: LAB_005370c3
    XOR EBP,EBP                         ; 005370c5
    MOV EAX,[0x00622c18]                ; 005370c7 | DAT_00622c18
        ;   Label: LAB_005370c7
    CMP EBP,dword ptr [EAX + 0x14f0a8]  ; 005370cc
    JGE 0x00537126                      ; 005370d2
        ;   XREF to: 00537126 (CONDITIONAL_JUMP)  ; LAB_00537126
    MOV ECX,dword ptr [ESI + 0x428]     ; 005370d4
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f0ac] ; 005370da
    TEST ECX,ECX                        ; 005370e1
    JNZ 0x0053712b                      ; 005370e3
        ;   XREF to: 0053712b (CONDITIONAL_JUMP)  ; LAB_0053712b
    CMP dword ptr [ESI + 0x42c],0x0     ; 005370e5
        ;   Label: LAB_005370e5
    JNZ 0x0053714d                      ; 005370ec
        ;   XREF to: 0053714d (CONDITIONAL_JUMP)  ; LAB_0053714d
    INC EBP                             ; 005370ee
        ;   Label: LAB_005370ee
    ADD EDI,0x4                         ; 005370ef
    JMP 0x005370c7                      ; 005370f2
        ;   XREF to: 005370c7 (UNCONDITIONAL_JUMP)  ; LAB_005370c7
    LEA EAX,[ESI + 0x2d4]               ; 005370f4
        ;   Label: LAB_005370f4
    PUSH EAX                            ; 005370fa
    MOV ECX,dword ptr [0x0061b4d0]      ; 005370fb | DAT_0061b4d0
    PUSH ECX                            ; 00537101
    CALL FUN_004a6c30                   ; 00537102
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 00537107
    TEST EAX,EAX                        ; 0053710a
    JZ 0x00537126                       ; 0053710c
        ;   XREF to: 00537126 (CONDITIONAL_JUMP)  ; LAB_00537126
    MOV dword ptr [ESI + 0x39c],0x1     ; 0053710e
    JMP 0x00537035                      ; 00537118
        ;   XREF to: 00537035 (UNCONDITIONAL_JUMP)  ; LAB_00537035
    CMP dword ptr [ESI + 0x42c],0x0     ; 0053711d
        ;   Label: LAB_0053711d
    JNZ 0x005370c3                      ; 00537124
        ;   XREF to: 005370c3 (CONDITIONAL_JUMP)  ; LAB_005370c3
    POP EBP                             ; 00537126
        ;   Label: LAB_00537126
    POP EDI                             ; 00537127
    POP ESI                             ; 00537128
    POP EBX                             ; 00537129
    RET                                 ; 0053712a
    MOV EAX,[0x01d06b10]                ; 0053712b | DAT_01d06b10
        ;   Label: LAB_0053712b
    PUSH EAX                            ; 00537130
    PUSH EBX                            ; 00537131
    CALL FUN_0040c600                   ; 00537132
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 00537137
    TEST EAX,EAX                        ; 0053713a
    JZ 0x005370e5                       ; 0053713c
        ;   XREF to: 005370e5 (CONDITIONAL_JUMP)  ; LAB_005370e5
    PUSH 0x0                            ; 0053713e
    PUSH EAX                            ; 00537140
    PUSH EBX                            ; 00537141
    PUSH ESI                            ; 00537142
    CALL FUN_00536290                   ; 00537143
        ;   XREF to: 00536290 (UNCONDITIONAL_CALL)  ; undefined FUN_00536290()
    ADD ESP,0x10                        ; 00537148
    JMP 0x005370ee                      ; 0053714b
        ;   XREF to: 005370ee (UNCONDITIONAL_JUMP)  ; LAB_005370ee
    MOV ECX,dword ptr [0x01c3f6a0]      ; 0053714d | DAT_01c3f6a0
        ;   Label: LAB_0053714d
    PUSH ECX                            ; 00537153
    PUSH EBX                            ; 00537154
    CALL FUN_0040c600                   ; 00537155
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 0053715a
    TEST EAX,EAX                        ; 0053715d
    JZ 0x005370ee                       ; 0053715f
        ;   XREF to: 005370ee (CONDITIONAL_JUMP)  ; LAB_005370ee
    PUSH EAX                            ; 00537161
    PUSH 0x0                            ; 00537162
    PUSH EBX                            ; 00537164
    PUSH ESI                            ; 00537165
    CALL FUN_00536290                   ; 00537166
        ;   XREF to: 00536290 (UNCONDITIONAL_CALL)  ; undefined FUN_00536290()
    ADD ESP,0x10                        ; 0053716b
    INC EBP                             ; 0053716e
    ADD EDI,0x4                         ; 0053716f
    JMP 0x005370c7                      ; 00537172
        ;   XREF to: 005370c7 (UNCONDITIONAL_JUMP)  ; LAB_005370c7
    MOV dword ptr [ESI + 0x440],0x1     ; 00537177
        ;   Label: LAB_00537177
    POP EBP                             ; 00537181
    POP EDI                             ; 00537182
    POP ESI                             ; 00537183
    POP EBX                             ; 00537184
    RET                                 ; 00537185

