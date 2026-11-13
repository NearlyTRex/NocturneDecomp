; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047eff0(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004831d0 at 004831f2
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 at 0047b9e6
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b3cd
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d2434
;   TerminatedCString s_CEditorTools_paintWindow_005d244a
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c2559c
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c2638c
;   undefined4 DAT_01c26390
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_mini3d.cpp_drawHLine_FUN_004f9390
;   engine_mini3d.cpp_setColor_FUN_004f8e20
;   shape_edittool.cpp_calculateButtonHeight_FUN_00485380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047eff0
        ;   Label: shape_edittool.cpp_FUN_0047eff0
    PUSH ESI                            ; 0047eff1
    PUSH EDI                            ; 0047eff2
    PUSH EBP                            ; 0047eff3
    SUB ESP,0x4                         ; 0047eff4
    CMP dword ptr [0x01c2559c],0x1      ; 0047eff7 | DAT_01c2559c
    JL 0x0047f132                       ; 0047effe
        ;   XREF to: 0047f132 (CONDITIONAL_JUMP)  ; LAB_0047f132
    MOV EAX,[0x01c2559c]                ; 0047f004 | DAT_01c2559c
        ;   Label: LAB_0047f004
    DEC EAX                             ; 0047f009
    SHL EAX,0x3                         ; 0047f00a
    MOV EBX,EAX                         ; 0047f00d
    SHL EAX,0x6                         ; 0047f00f
    SUB EAX,EBX                         ; 0047f012
    MOV EBX,0x1c255a0                   ; 0047f014
    ADD EBX,EAX                         ; 0047f019
    MOV EAX,[0x01c35e4c]                ; 0047f01b | DAT_01c35e4c
    MOV dword ptr [ESP],EAX             ; 0047f020
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047f023
    MOV [0x01c35e4c],EAX                ; 0047f026 | DAT_01c35e4c
    MOV EAX,[0x006141bc]                ; 0047f02b | DAT_006141bc
    MOV EDX,EAX                         ; 0047f030
    MOV ECX,0x60                        ; 0047f032
    SAR EDX,0x1f                        ; 0047f037
    IDIV ECX                            ; 0047f03a
    PUSH 0x0                            ; 0047f03c
    MOV EDI,dword ptr [0x01c35e60]      ; 0047f03e | DAT_01c35e60
    MOV ESI,EAX                         ; 0047f044
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_00485380 ; 0047f046
        ;   XREF to: 00485380 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_00485380(char * button_text)
    ADD ESP,0x4                         ; 0047f04b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0047f04e
    IMUL EDX,EAX                        ; 0047f052
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047f055
    INC EAX                             ; 0047f059
    IMUL EAX,ESI                        ; 0047f05a
    MOV ESI,dword ptr [EBX + 0xc]       ; 0047f05d
    ADD EAX,EDX                         ; 0047f060
    MOV EBP,dword ptr [0x01c25f84]      ; 0047f062 | DAT_01c25f84
    SUB ESI,EAX                         ; 0047f068
    MOV EAX,[0x01c2638c]                ; 0047f06a | DAT_01c2638c
    TEST EBP,EBP                        ; 0047f06f
    JZ 0x0047f15a                       ; 0047f071
        ;   XREF to: 0047f15a (CONDITIONAL_JUMP)  ; LAB_0047f15a
    AND EAX,0xff                        ; 0047f077
    MOV EDX,EAX                         ; 0047f07c
    SHL EAX,0x2                         ; 0047f07e
    SUB EAX,EDX                         ; 0047f081
    XOR EDX,EDX                         ; 0047f083
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047f085 | DAT_01c35839
    MOV ECX,EDX                         ; 0047f08b
    XOR EDX,EDX                         ; 0047f08d
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047f08f | DAT_01c35838
    SHL ECX,0x8                         ; 0047f095
    SHL EDX,0x10                        ; 0047f098
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047f09b | DAT_01c3583a
    OR EDX,ECX                          ; 0047f0a1
    AND EAX,0xff                        ; 0047f0a3
    OR EAX,EDX                          ; 0047f0a8
    PUSH EAX                            ; 0047f0aa
    CALL engine_mini3d.cpp_setColor_FUN_004f8e20 ; 0047f0ab
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_004f8e20(uint rgb)
    ADD ESP,0x4                         ; 0047f0b0
    MOV ECX,dword ptr [0x01c25f84]      ; 0047f0b3 | DAT_01c25f84
        ;   Label: LAB_0047f0b3
    MOV EAX,dword ptr [EBX]             ; 0047f0b9
    MOV EDX,dword ptr [EBX + 0x8]       ; 0047f0bb
    INC EAX                             ; 0047f0be
    SUB EDX,0x2                         ; 0047f0bf
    TEST ECX,ECX                        ; 0047f0c2
    JZ 0x0047f164                       ; 0047f0c4
        ;   XREF to: 0047f164 (CONDITIONAL_JUMP)  ; LAB_0047f164
    PUSH EDX                            ; 0047f0ca
    PUSH ESI                            ; 0047f0cb
    PUSH EAX                            ; 0047f0cc
    CALL engine_mini3d.cpp_drawHLine_FUN_004f9390 ; 0047f0cd
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawHLine_FUN_004f9390(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0047f0d2
        ;   Label: LAB_0047f0d2
    MOV EBP,dword ptr [0x01c26390]      ; 0047f0d5 | DAT_01c26390
    CMP EBP,dword ptr [0x01c2638c]      ; 0047f0db | DAT_01c2638c
    JZ 0x0047f11c                       ; 0047f0e1
        ;   XREF to: 0047f11c (CONDITIONAL_JUMP)  ; LAB_0047f11c
    MOV EDX,dword ptr [0x01c25f84]      ; 0047f0e3 | DAT_01c25f84
    MOV EAX,EBP                         ; 0047f0e9
    TEST EDX,EDX                        ; 0047f0eb
    JNZ 0x0047f171                      ; 0047f0ed
        ;   XREF to: 0047f171 (CONDITIONAL_JUMP)  ; LAB_0047f171
    MOV dword ptr [0x01c35e60],EBP      ; 0047f0f3 | DAT_01c35e60
    MOV ECX,dword ptr [0x01c25f84]      ; 0047f0f9 | DAT_01c25f84
        ;   Label: LAB_0047f0f9
    DEC ESI                             ; 0047f0ff
    MOV EAX,dword ptr [EBX]             ; 0047f100
    MOV EDX,dword ptr [EBX + 0x8]       ; 0047f102
    INC EAX                             ; 0047f105
    SUB EDX,0x2                         ; 0047f106
    TEST ECX,ECX                        ; 0047f109
    JZ 0x0047f1b0                       ; 0047f10b
        ;   XREF to: 0047f1b0 (CONDITIONAL_JUMP)  ; LAB_0047f1b0
    PUSH EDX                            ; 0047f111
    PUSH ESI                            ; 0047f112
    PUSH EAX                            ; 0047f113
    CALL engine_mini3d.cpp_drawHLine_FUN_004f9390 ; 0047f114
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawHLine_FUN_004f9390(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0047f119
        ;   Label: LAB_0047f119
    MOV EAX,dword ptr [ESP]             ; 0047f11c
        ;   Label: LAB_0047f11c
    MOV dword ptr [0x01c35e60],EDI      ; 0047f11f | DAT_01c35e60
    MOV [0x01c35e4c],EAX                ; 0047f125 | DAT_01c35e4c
    ADD ESP,0x4                         ; 0047f12a
        ;   Label: LAB_0047f12a
    POP EBP                             ; 0047f12d
    POP EDI                             ; 0047f12e
    POP ESI                             ; 0047f12f
    POP EBX                             ; 0047f130
    RET                                 ; 0047f131
    MOV ECX,0x5d2434                    ; 0047f132 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047f132
    MOV EBX,0x93b                       ; 0047f137
    PUSH 0x5d244a                       ; 0047f13c | = "CEditorTools::paintWindow() called bu..."
    MOV dword ptr [0x01d046a0],ECX      ; 0047f141 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047f147 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047f14d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047f152
    JMP 0x0047f004                      ; 0047f155
        ;   XREF to: 0047f004 (UNCONDITIONAL_JUMP)  ; LAB_0047f004
    MOV [0x01c35e60],EAX                ; 0047f15a | DAT_01c35e60
        ;   Label: LAB_0047f15a
    JMP 0x0047f0b3                      ; 0047f15f
        ;   XREF to: 0047f0b3 (UNCONDITIONAL_JUMP)  ; LAB_0047f0b3
    PUSH EDX                            ; 0047f164
        ;   Label: LAB_0047f164
    PUSH ESI                            ; 0047f165
    PUSH EAX                            ; 0047f166
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0047f167
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0047f0d2                      ; 0047f16c
        ;   XREF to: 0047f0d2 (UNCONDITIONAL_JUMP)  ; LAB_0047f0d2
    AND EAX,0xff                        ; 0047f171
        ;   Label: LAB_0047f171
    MOV EDX,EAX                         ; 0047f176
    SHL EAX,0x2                         ; 0047f178
    SUB EAX,EDX                         ; 0047f17b
    XOR ECX,ECX                         ; 0047f17d
    XOR EDX,EDX                         ; 0047f17f
    MOV CL,byte ptr [EAX + 0x1c35838]   ; 0047f181 | DAT_01c35838
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047f187 | DAT_01c35839
    SHL ECX,0x10                        ; 0047f18d
    SHL EDX,0x8                         ; 0047f190
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047f193 | DAT_01c3583a
    OR EDX,ECX                          ; 0047f199
    AND EAX,0xff                        ; 0047f19b
    OR EDX,EAX                          ; 0047f1a0
    PUSH EDX                            ; 0047f1a2
    CALL engine_mini3d.cpp_setColor_FUN_004f8e20 ; 0047f1a3
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_004f8e20(uint rgb)
    ADD ESP,0x4                         ; 0047f1a8
    JMP 0x0047f0f9                      ; 0047f1ab
        ;   XREF to: 0047f0f9 (UNCONDITIONAL_JUMP)  ; LAB_0047f0f9
    PUSH EDX                            ; 0047f1b0
        ;   Label: LAB_0047f1b0
    PUSH ESI                            ; 0047f1b1
    PUSH EAX                            ; 0047f1b2
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0047f1b3
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0047f119                      ; 0047f1b8
        ;   XREF to: 0047f119 (UNCONDITIONAL_JUMP)  ; LAB_0047f119

