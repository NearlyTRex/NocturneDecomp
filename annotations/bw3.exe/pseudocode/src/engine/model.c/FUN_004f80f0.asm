; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_model_c_FUN_004f80f0(SMRGLHeaderExtended *param_1)
;
;
; XREF[1]:
;   engine_model.c_FUN_004f8170 at 004f85b4
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;   engine_boss.c_modelStructNotSupported3_FUN_0041ac90
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004f80f0
        ;   Label: engine_model.c_FUN_004f80f0
    PUSH EBP                            ; 004f80f1
    MOV EBP,dword ptr [ESP + 0xc]       ; 004f80f2
    TEST EBP,EBP                        ; 004f80f6
    JZ 0x004f8112                       ; 004f80f8
        ;   XREF to: 004f8112 (CONDITIONAL_JUMP)  ; LAB_004f8112
    MOV EDX,dword ptr [EBP]             ; 004f80fa
    MOV EDI,EBP                         ; 004f80fd
    CMP EDX,0x20                        ; 004f80ff
    JZ 0x004f8115                       ; 004f8102
        ;   XREF to: 004f8115 (CONDITIONAL_JUMP)  ; LAB_004f8115
    CMP EDX,0x26                        ; 004f8104
    JNZ 0x004f815e                      ; 004f8107
        ;   XREF to: 004f815e (CONDITIONAL_JUMP)  ; LAB_004f815e
    PUSH EBP                            ; 004f8109
    CALL engine_boss.c_modelStructNotSupported3_FUN_0041ac90 ; 004f810a
        ;   XREF to: 0041ac90 (UNCONDITIONAL_CALL)  ; void engine_boss.c_modelStructNotSupported3_FUN_0041ac90(SMRGLHeaderExtended * mrgl_data)
    ADD ESP,0x4                         ; 004f810f
    POP EBP                             ; 004f8112
        ;   Label: LAB_004f8112
    POP EDI                             ; 004f8113
    RET                                 ; 004f8114
    PUSH ESI                            ; 004f8115
        ;   Label: LAB_004f8115
    PUSH EBX                            ; 004f8116
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f8117
    PUSH EBX                            ; 004f811a
    CALL engine_model.c_FUN_004f80f0    ; 004f811b
        ;   XREF to: 004f80f0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_FUN_004f80f0()
    ADD ESP,0x4                         ; 004f8120
    MOV ESI,dword ptr [EBP + 0x8]       ; 004f8123
    XOR EBX,EBX                         ; 004f8126
    TEST ESI,ESI                        ; 004f8128
    JLE 0x004f8150                      ; 004f812a
        ;   XREF to: 004f8150 (CONDITIONAL_JUMP)  ; LAB_004f8150
    MOV ESI,EBP                         ; 004f812c
    MOV EAX,dword ptr [ESI + 0x118]     ; 004f812e
        ;   Label: LAB_004f812e
    PUSH EAX                            ; 004f8134
    ADD ESI,0x4                         ; 004f8135
    INC EBX                             ; 004f8138
    CALL engine_model.c_FUN_004f80f0    ; 004f8139
        ;   XREF to: 004f80f0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_FUN_004f80f0()
    MOV EDX,dword ptr [EDI + 0x8]       ; 004f813e
    ADD ESP,0x4                         ; 004f8141
    CMP EBX,EDX                         ; 004f8144
    JL 0x004f812e                       ; 004f8146
        ;   XREF to: 004f812e (CONDITIONAL_JUMP)  ; LAB_004f812e
    LEA EAX,[EAX]                       ; 004f8148
    MOV EDX,EDX                         ; 004f814e
    PUSH EBP                            ; 004f8150
        ;   Label: LAB_004f8150
    CALL crt_unknown.c_FUN_005a3770     ; 004f8151
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004f8156
    POP EBX                             ; 004f8159
    POP ESI                             ; 004f815a
    POP EBP                             ; 004f815b
    POP EDI                             ; 004f815c
    RET                                 ; 004f815d
    PUSH EBP                            ; 004f815e
        ;   Label: LAB_004f815e
    CALL crt_unknown.c_FUN_005a3770     ; 004f815f
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004f8164
    POP EBP                             ; 004f8167
    POP EDI                             ; 004f8168
    RET                                 ; 004f8169

