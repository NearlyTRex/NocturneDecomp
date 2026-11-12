; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_0049cf60(CEdScrollBar *this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_handleDialogInput_FUN_0049add0 at 0049ae83
;
; Referenced Globals:
;   void* switchdataD_0049cf48 = 0049d16c
;   undefined4 DAT_01c3f5d0
;   undefined4 DAT_01c3f5d4
;   undefined4 DAT_01c3f5d8
;   undefined4 DAT_01c3f5dc
;   undefined4 DAT_01c3f5e0
;   undefined4 DAT_01c3f5e4
;   undefined4 DAT_01c3f5e8
;   undefined4 DAT_01c3f5ec
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c43544
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_0049d320
;   shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_0049ce40
;   wincore_winrun.cpp_getTime_FUN_005b2420
;   wincore_winrun.cpp_setCursorPosition_FUN_005b2750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049cf60
        ;   Label: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_0049cf60
    PUSH ESI                            ; 0049cf61
    PUSH EDI                            ; 0049cf62
    PUSH EBP                            ; 0049cf63
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049cf64
    PUSH EBX                            ; 0049cf68
    CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_0049d320 ; 0049cf69
        ;   XREF to: 0049d320 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_0049d320(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0049cf6e
    PUSH EBX                            ; 0049cf71
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_0049ce40 ; 0049cf72
        ;   XREF to: 0049ce40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_0049ce40(CEdScrollBar * this_ptr)
    MOV EDX,dword ptr [0x01c3f5d0]      ; 0049cf77 | DAT_01c3f5d0
    ADD ESP,0x4                         ; 0049cf7d
    CMP EBX,EDX                         ; 0049cf80
    JNZ 0x0049d1fa                      ; 0049cf82
        ;   XREF to: 0049d1fa (CONDITIONAL_JUMP)  ; LAB_0049d1fa
    TEST byte ptr [0x01c43544],0x1      ; 0049cf88 | DAT_01c43544
    JZ 0x0049d03a                       ; 0049cf8f
        ;   XREF to: 0049d03a (CONDITIONAL_JUMP)  ; LAB_0049d03a
    CMP dword ptr [0x01c3f5d4],0x0      ; 0049cf95 | DAT_01c3f5d4
    JNZ 0x0049d118                      ; 0049cf9c
        ;   XREF to: 0049d118 (CONDITIONAL_JUMP)  ; LAB_0049d118
    CMP dword ptr [EBX + 0x10],0x0      ; 0049cfa2
    JZ 0x0049d047                       ; 0049cfa6
        ;   XREF to: 0049d047 (CONDITIONAL_JUMP)  ; LAB_0049d047
    MOV EDI,dword ptr [0x01c3f5e0]      ; 0049cfac | DAT_01c3f5e0
    MOV ESI,dword ptr [EBX + 0x24]      ; 0049cfb2
    MOV EBP,dword ptr [0x01c3f5ec]      ; 0049cfb5 | DAT_01c3f5ec
    ADD ESI,EDI                         ; 0049cfbb
    MOV EAX,[0x01c4353c]                ; 0049cfbd | DAT_01c4353c
    SUB ESI,EBP                         ; 0049cfc2
    MOV EDX,dword ptr [0x01c3f5e4]      ; 0049cfc4 | DAT_01c3f5e4
    CMP EAX,ESI                         ; 0049cfca
    JGE 0x0049cfd0                      ; 0049cfcc
        ;   XREF to: 0049cfd0 (CONDITIONAL_JUMP)  ; LAB_0049cfd0
    MOV EAX,ESI                         ; 0049cfce
    MOV ESI,dword ptr [0x01c3f5ec]      ; 0049cfd0 | DAT_01c3f5ec
        ;   Label: LAB_0049cfd0
    MOV EBP,dword ptr [0x01c3f5e0]      ; 0049cfd6 | DAT_01c3f5e0
    MOV ECX,dword ptr [EBX + 0x30]      ; 0049cfdc
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0049cfdf
    ADD ECX,ESI                         ; 0049cfe2
    MOV ESI,dword ptr [EBX + 0x28]      ; 0049cfe4
    SUB ECX,EDI                         ; 0049cfe7
    ADD ESI,EBP                         ; 0049cfe9
    SUB ESI,ECX                         ; 0049cfeb
    CMP EAX,ESI                         ; 0049cfed
    JLE 0x0049cff3                      ; 0049cfef
        ;   XREF to: 0049cff3 (CONDITIONAL_JUMP)  ; LAB_0049cff3
    MOV EAX,ESI                         ; 0049cff1
    MOV ECX,dword ptr [0x01c3f5e0]      ; 0049cff3 | DAT_01c3f5e0
        ;   Label: LAB_0049cff3
    MOV ESI,EAX                         ; 0049cff9
    MOV EDI,dword ptr [0x01c3f5ec]      ; 0049cffb | DAT_01c3f5ec
    SUB ESI,ECX                         ; 0049d001
    ADD ESI,EDI                         ; 0049d003
    PUSH EDX                            ; 0049d005
        ;   Label: LAB_0049d005
    PUSH EAX                            ; 0049d006
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005b2750 ; 0049d007
        ;   XREF to: 005b2750 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_005b2750(int x, int y)
    MOV EAX,dword ptr [EBX + 0x8]       ; 0049d00c
    MOV EBP,dword ptr [EBX + 0x4]       ; 0049d00f
    ADD ESP,0x8                         ; 0049d012
    CMP EAX,EBP                         ; 0049d015
    JL 0x0049d0a7                       ; 0049d017
        ;   XREF to: 0049d0a7 (CONDITIONAL_JUMP)  ; LAB_0049d0a7
    MOV dword ptr [EBX],0x0             ; 0049d01d
        ;   Label: LAB_0049d01d
    PUSH EBX                            ; 0049d023
        ;   Label: LAB_0049d023
    CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_0049d320 ; 0049d024
        ;   XREF to: 0049d320 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_0049d320(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0049d029
    PUSH EBX                            ; 0049d02c
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_0049ce40 ; 0049d02d
        ;   XREF to: 0049ce40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_0049ce40(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0049d032
    POP EBP                             ; 0049d035
        ;   Label: LAB_0049d035
    POP EDI                             ; 0049d036
    POP ESI                             ; 0049d037
    POP EBX                             ; 0049d038
    RET                                 ; 0049d039
    XOR EDX,EDX                         ; 0049d03a
        ;   Label: LAB_0049d03a
    MOV dword ptr [0x01c3f5d0],EDX      ; 0049d03c | DAT_01c3f5d0
    POP EBP                             ; 0049d042
    POP EDI                             ; 0049d043
    POP ESI                             ; 0049d044
    POP EBX                             ; 0049d045
    RET                                 ; 0049d046
    MOV ECX,dword ptr [0x01c3f5e4]      ; 0049d047 | DAT_01c3f5e4
        ;   Label: LAB_0049d047
    MOV ESI,dword ptr [EBX + 0x24]      ; 0049d04d
    MOV EDI,dword ptr [0x01c3f5ec]      ; 0049d050 | DAT_01c3f5ec
    ADD ESI,ECX                         ; 0049d056
    MOV EDX,dword ptr [0x01c43540]      ; 0049d058 | DAT_01c43540
    SUB ESI,EDI                         ; 0049d05e
    MOV EAX,[0x01c3f5e0]                ; 0049d060 | DAT_01c3f5e0
    CMP EDX,ESI                         ; 0049d065
    JGE 0x0049d06b                      ; 0049d067
        ;   XREF to: 0049d06b (CONDITIONAL_JUMP)  ; LAB_0049d06b
    MOV EDX,ESI                         ; 0049d069
    MOV ESI,dword ptr [0x01c3f5ec]      ; 0049d06b | DAT_01c3f5ec
        ;   Label: LAB_0049d06b
    MOV EBP,dword ptr [EBX + 0x30]      ; 0049d071
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0049d074
    ADD ESI,EBP                         ; 0049d077
    SUB ESI,ECX                         ; 0049d079
    MOV EDI,dword ptr [0x01c3f5e4]      ; 0049d07b | DAT_01c3f5e4
    MOV ECX,ESI                         ; 0049d081
    MOV ESI,dword ptr [EBX + 0x28]      ; 0049d083
    ADD ESI,EDI                         ; 0049d086
    SUB ESI,ECX                         ; 0049d088
    CMP EDX,ESI                         ; 0049d08a
    JLE 0x0049d090                      ; 0049d08c
        ;   XREF to: 0049d090 (CONDITIONAL_JUMP)  ; LAB_0049d090
    MOV EDX,ESI                         ; 0049d08e
    MOV EBP,dword ptr [0x01c3f5e4]      ; 0049d090 | DAT_01c3f5e4
        ;   Label: LAB_0049d090
    MOV ESI,EDX                         ; 0049d096
    MOV ECX,dword ptr [0x01c3f5ec]      ; 0049d098 | DAT_01c3f5ec
    SUB ESI,EBP                         ; 0049d09e
    ADD ESI,ECX                         ; 0049d0a0
    JMP 0x0049d005                      ; 0049d0a2
        ;   XREF to: 0049d005 (UNCONDITIONAL_JUMP)  ; LAB_0049d005
    CMP EBP,0x1                         ; 0049d0a7
        ;   Label: LAB_0049d0a7
    JL 0x0049d01d                       ; 0049d0aa
        ;   XREF to: 0049d01d (CONDITIONAL_JUMP)  ; LAB_0049d01d
    CMP ESI,dword ptr [0x01c3f5ec]      ; 0049d0b0 | DAT_01c3f5ec
    JNZ 0x0049d0c4                      ; 0049d0b6
        ;   XREF to: 0049d0c4 (CONDITIONAL_JUMP)  ; LAB_0049d0c4
    MOV EAX,[0x01c3f5e8]                ; 0049d0b8 | DAT_01c3f5e8
    MOV dword ptr [EBX],EAX             ; 0049d0bd
    JMP 0x0049d023                      ; 0049d0bf
        ;   XREF to: 0049d023 (UNCONDITIONAL_JUMP)  ; LAB_0049d023
    MOV ECX,dword ptr [EBX + 0x24]      ; 0049d0c4
        ;   Label: LAB_0049d0c4
    CMP ESI,ECX                         ; 0049d0c7
    JLE 0x0049d01d                      ; 0049d0c9
        ;   XREF to: 0049d01d (CONDITIONAL_JUMP)  ; LAB_0049d01d
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0049d0cf
    MOV EDX,dword ptr [EBX + 0x30]      ; 0049d0d2
    SUB EDX,EDI                         ; 0049d0d5
    MOV EBP,dword ptr [EBX + 0x28]      ; 0049d0d7
    LEA EAX,[ESI + EDX*0x1]             ; 0049d0da
    CMP EAX,EBP                         ; 0049d0dd
    JL 0x0049d0f0                       ; 0049d0df
        ;   XREF to: 0049d0f0 (CONDITIONAL_JUMP)  ; LAB_0049d0f0
    MOV EDX,dword ptr [EBX + 0x8]       ; 0049d0e1
    MOV EAX,dword ptr [EBX + 0x4]       ; 0049d0e4
    SUB EAX,EDX                         ; 0049d0e7
    MOV dword ptr [EBX],EAX             ; 0049d0e9
    JMP 0x0049d023                      ; 0049d0eb
        ;   XREF to: 0049d023 (UNCONDITIONAL_JUMP)  ; LAB_0049d023
    MOV EAX,EBP                         ; 0049d0f0
        ;   Label: LAB_0049d0f0
    MOV EDI,dword ptr [EBX + 0x8]       ; 0049d0f2
    SUB EAX,ECX                         ; 0049d0f5
    MOV EBP,dword ptr [EBX + 0x24]      ; 0049d0f7
    MOV ECX,EAX                         ; 0049d0fa
    MOV EAX,dword ptr [EBX + 0x4]       ; 0049d0fc
    SUB ECX,EDX                         ; 0049d0ff
    MOV EDX,ESI                         ; 0049d101
    SUB EAX,EDI                         ; 0049d103
    SUB EDX,EBP                         ; 0049d105
    IMUL EDX,EAX                        ; 0049d107
    MOV EAX,EDX                         ; 0049d10a
    SAR EDX,0x1f                        ; 0049d10c
    IDIV ECX                            ; 0049d10f
    MOV dword ptr [EBX],EAX             ; 0049d111
    JMP 0x0049d023                      ; 0049d113
        ;   XREF to: 0049d023 (UNCONDITIONAL_JUMP)  ; LAB_0049d023
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0049d118
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_0049d118
    MOV ESI,dword ptr [0x01c3f5d8]      ; 0049d11d | DAT_01c3f5d8
    MOV EDX,EAX                         ; 0049d123
    SUB EAX,ESI                         ; 0049d125
    TEST EAX,EAX                        ; 0049d127
    JL 0x0049d190                       ; 0049d129
        ;   XREF to: 0049d190 (CONDITIONAL_JUMP)  ; LAB_0049d190
    MOV EDI,dword ptr [0x01c3f5dc]      ; 0049d12b | DAT_01c3f5dc
        ;   Label: LAB_0049d12b
    SUB EDI,EAX                         ; 0049d131
    MOV dword ptr [0x01c3f5d8],EDX      ; 0049d133 | DAT_01c3f5d8
    MOV dword ptr [0x01c3f5dc],EDI      ; 0049d139 | DAT_01c3f5dc
    TEST EDI,EDI                        ; 0049d13f
    JG 0x0049d175                       ; 0049d141
        ;   XREF to: 0049d175 (CONDITIONAL_JUMP)  ; default
    MOV EAX,0x9999                      ; 0049d143
    MOV EDX,dword ptr [EBX + 0x10]      ; 0049d148
    MOV [0x01c3f5dc],EAX                ; 0049d14b | DAT_01c3f5dc
    TEST EDX,EDX                        ; 0049d150
    JZ 0x0049d194                       ; 0049d152
        ;   XREF to: 0049d194 (CONDITIONAL_JUMP)  ; LAB_0049d194
    MOV EAX,[0x01c4353c]                ; 0049d154 | DAT_01c4353c
    MOV EDX,dword ptr [0x01c3f5d4]      ; 0049d159 | DAT_01c3f5d4
        ;   Label: LAB_0049d159
    DEC EDX                             ; 0049d15f
    CMP EDX,0x3                         ; 0049d160
    JA 0x0049d175                       ; 0049d163
        ;   XREF to: 0049d175 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x49cf48]  ; 0049d165 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV ESI,dword ptr [EBX]             ; 0049d16c
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0xc]       ; 0049d16e
    SUB ESI,EAX                         ; 0049d171
    MOV dword ptr [EBX],ESI             ; 0049d173
    MOV EDI,dword ptr [0x01c3f5e4]      ; 0049d175 | DAT_01c3f5e4
        ;   Label: default
    PUSH EDI                            ; 0049d17b
    MOV EBP,dword ptr [0x01c3f5e0]      ; 0049d17c | DAT_01c3f5e0
    PUSH EBP                            ; 0049d182
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005b2750 ; 0049d183
        ;   XREF to: 005b2750 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_005b2750(int x, int y)
    ADD ESP,0x8                         ; 0049d188
    JMP 0x0049d023                      ; 0049d18b
        ;   XREF to: 0049d023 (UNCONDITIONAL_JUMP)  ; LAB_0049d023
    XOR EAX,EAX                         ; 0049d190
        ;   Label: LAB_0049d190
    JMP 0x0049d12b                      ; 0049d192
        ;   XREF to: 0049d12b (UNCONDITIONAL_JUMP)  ; LAB_0049d12b
    MOV EAX,[0x01c43540]                ; 0049d194 | DAT_01c43540
        ;   Label: LAB_0049d194
    JMP 0x0049d159                      ; 0049d199
        ;   XREF to: 0049d159 (UNCONDITIONAL_JUMP)  ; LAB_0049d159
    MOV ECX,dword ptr [EBX]             ; 0049d19b
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0xc]       ; 0049d19d
    ADD ECX,EAX                         ; 0049d1a0
    MOV dword ptr [EBX],ECX             ; 0049d1a2
    JMP 0x0049d175                      ; 0049d1a4
        ;   XREF to: 0049d175 (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,dword ptr [EBX + 0x2c]      ; 0049d1a6
        ;   Label: caseD_3
    JGE 0x0049d1b6                      ; 0049d1a9
        ;   XREF to: 0049d1b6 (CONDITIONAL_JUMP)  ; LAB_0049d1b6
    MOV EDX,dword ptr [EBX]             ; 0049d1ab
    MOV EAX,dword ptr [EBX + 0x8]       ; 0049d1ad
    SUB EDX,EAX                         ; 0049d1b0
    MOV dword ptr [EBX],EDX             ; 0049d1b2
    JMP 0x0049d175                      ; 0049d1b4
        ;   XREF to: 0049d175 (UNCONDITIONAL_JUMP)  ; default
    MOV CL,byte ptr [0x01c43544]        ; 0049d1b6 | DAT_01c43544
        ;   Label: LAB_0049d1b6
    XOR EAX,EAX                         ; 0049d1bc
    AND CL,0xfe                         ; 0049d1be
    MOV [0x01c3f5d0],EAX                ; 0049d1c1 | DAT_01c3f5d0
    MOV byte ptr [0x01c43544],CL        ; 0049d1c6 | DAT_01c43544
    JMP 0x0049d175                      ; 0049d1cc
        ;   XREF to: 0049d175 (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,dword ptr [EBX + 0x30]      ; 0049d1ce
        ;   Label: caseD_4
    JLE 0x0049d1de                      ; 0049d1d1
        ;   XREF to: 0049d1de (CONDITIONAL_JUMP)  ; LAB_0049d1de
    MOV EDI,dword ptr [EBX]             ; 0049d1d3
    MOV EAX,dword ptr [EBX + 0x8]       ; 0049d1d5
    ADD EDI,EAX                         ; 0049d1d8
    MOV dword ptr [EBX],EDI             ; 0049d1da
    JMP 0x0049d175                      ; 0049d1dc
        ;   XREF to: 0049d175 (UNCONDITIONAL_JUMP)  ; default
    MOV DH,byte ptr [0x01c43544]        ; 0049d1de | DAT_01c43544
        ;   Label: LAB_0049d1de
    XOR ESI,ESI                         ; 0049d1e4
    AND DH,0xfe                         ; 0049d1e6
    MOV dword ptr [0x01c3f5d0],ESI      ; 0049d1e9 | DAT_01c3f5d0
    MOV byte ptr [0x01c43544],DH        ; 0049d1ef | DAT_01c43544
    JMP 0x0049d175                      ; 0049d1f5
        ;   XREF to: 0049d175 (UNCONDITIONAL_JUMP)  ; default
    TEST EDX,EDX                        ; 0049d1fa
        ;   Label: LAB_0049d1fa
    JNZ 0x0049d035                      ; 0049d1fc
        ;   XREF to: 0049d035 (CONDITIONAL_JUMP)  ; LAB_0049d035
    TEST byte ptr [0x01c43544],0x1      ; 0049d202 | DAT_01c43544
    JZ 0x0049d035                       ; 0049d209
        ;   XREF to: 0049d035 (CONDITIONAL_JUMP)  ; LAB_0049d035
    MOV EAX,[0x01c4353c]                ; 0049d20f | DAT_01c4353c
    CMP EAX,dword ptr [EBX + 0x14]      ; 0049d214
    JL 0x0049d035                       ; 0049d217
        ;   XREF to: 0049d035 (CONDITIONAL_JUMP)  ; LAB_0049d035
    MOV EAX,[0x01c43540]                ; 0049d21d | DAT_01c43540
    CMP EAX,dword ptr [EBX + 0x18]      ; 0049d222
    JL 0x0049d035                       ; 0049d225
        ;   XREF to: 0049d035 (CONDITIONAL_JUMP)  ; LAB_0049d035
    MOV EAX,[0x01c4353c]                ; 0049d22b | DAT_01c4353c
    CMP EAX,dword ptr [EBX + 0x1c]      ; 0049d230
    JGE 0x0049d035                      ; 0049d233
        ;   XREF to: 0049d035 (CONDITIONAL_JUMP)  ; LAB_0049d035
    MOV EAX,[0x01c43540]                ; 0049d239 | DAT_01c43540
    CMP EAX,dword ptr [EBX + 0x20]      ; 0049d23e
    JGE 0x0049d035                      ; 0049d241
        ;   XREF to: 0049d035 (CONDITIONAL_JUMP)  ; LAB_0049d035
    MOV EAX,[0x01c4353c]                ; 0049d247 | DAT_01c4353c
    MOV [0x01c3f5e0],EAX                ; 0049d24c | DAT_01c3f5e0
    MOV EAX,[0x01c43540]                ; 0049d251 | DAT_01c43540
    MOV [0x01c3f5e4],EAX                ; 0049d256 | DAT_01c3f5e4
    MOV EAX,dword ptr [EBX]             ; 0049d25b
    MOV dword ptr [0x01c3f5d0],EBX      ; 0049d25d | DAT_01c3f5d0
    MOV [0x01c3f5e8],EAX                ; 0049d263 | DAT_01c3f5e8
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0049d268
    MOV ECX,dword ptr [EBX + 0x10]      ; 0049d26b
    MOV [0x01c3f5ec],EAX                ; 0049d26e | DAT_01c3f5ec
    TEST ECX,ECX                        ; 0049d273
    JZ 0x0049d2b7                       ; 0049d275
        ;   XREF to: 0049d2b7 (CONDITIONAL_JUMP)  ; LAB_0049d2b7
    MOV EAX,[0x01c4353c]                ; 0049d277 | DAT_01c4353c
    CMP EAX,dword ptr [EBX + 0x24]      ; 0049d27c
        ;   Label: LAB_0049d27c
    JGE 0x0049d2be                      ; 0049d27f
        ;   XREF to: 0049d2be (CONDITIONAL_JUMP)  ; LAB_0049d2be
    MOV EAX,dword ptr [EBX + 0xc]       ; 0049d281
    MOV EBP,dword ptr [EBX]             ; 0049d284
    MOV EDI,0x1                         ; 0049d286
    SUB EBP,EAX                         ; 0049d28b
    MOV dword ptr [0x01c3f5d4],EDI      ; 0049d28d | DAT_01c3f5d4
    MOV dword ptr [EBX],EBP             ; 0049d293
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0049d295
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_0049d295
    MOV [0x01c3f5d8],EAX                ; 0049d29a | DAT_01c3f5d8
    MOV EAX,0x48000                     ; 0049d29f
    PUSH EBX                            ; 0049d2a4
    MOV [0x01c3f5dc],EAX                ; 0049d2a5 | DAT_01c3f5dc
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_0049cf60 ; 0049d2aa
        ;   XREF to: 0049cf60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_0049cf60(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0049d2af
    POP EBP                             ; 0049d2b2
    POP EDI                             ; 0049d2b3
    POP ESI                             ; 0049d2b4
    POP EBX                             ; 0049d2b5
    RET                                 ; 0049d2b6
    MOV EAX,[0x01c43540]                ; 0049d2b7 | DAT_01c43540
        ;   Label: LAB_0049d2b7
    JMP 0x0049d27c                      ; 0049d2bc
        ;   XREF to: 0049d27c (UNCONDITIONAL_JUMP)  ; LAB_0049d27c
    CMP EAX,dword ptr [EBX + 0x28]      ; 0049d2be
        ;   Label: LAB_0049d2be
    JL 0x0049d2d9                       ; 0049d2c1
        ;   XREF to: 0049d2d9 (CONDITIONAL_JUMP)  ; LAB_0049d2d9
    MOV EAX,dword ptr [EBX + 0xc]       ; 0049d2c3
    MOV ESI,dword ptr [EBX]             ; 0049d2c6
    MOV ECX,0x2                         ; 0049d2c8
    ADD ESI,EAX                         ; 0049d2cd
    MOV dword ptr [0x01c3f5d4],ECX      ; 0049d2cf | DAT_01c3f5d4
    MOV dword ptr [EBX],ESI             ; 0049d2d5
    JMP 0x0049d295                      ; 0049d2d7
        ;   XREF to: 0049d295 (UNCONDITIONAL_JUMP)  ; LAB_0049d295
    CMP EAX,dword ptr [EBX + 0x2c]      ; 0049d2d9
        ;   Label: LAB_0049d2d9
    JGE 0x0049d2f4                      ; 0049d2dc
        ;   XREF to: 0049d2f4 (CONDITIONAL_JUMP)  ; LAB_0049d2f4
    MOV EAX,dword ptr [EBX + 0x8]       ; 0049d2de
    MOV EDX,dword ptr [EBX]             ; 0049d2e1
    MOV EBP,0x3                         ; 0049d2e3
    SUB EDX,EAX                         ; 0049d2e8
    MOV dword ptr [0x01c3f5d4],EBP      ; 0049d2ea | DAT_01c3f5d4
    MOV dword ptr [EBX],EDX             ; 0049d2f0
    JMP 0x0049d295                      ; 0049d2f2
        ;   XREF to: 0049d295 (UNCONDITIONAL_JUMP)  ; LAB_0049d295
    CMP EAX,dword ptr [EBX + 0x30]      ; 0049d2f4
        ;   Label: LAB_0049d2f4
    JL 0x0049d30f                       ; 0049d2f7
        ;   XREF to: 0049d30f (CONDITIONAL_JUMP)  ; LAB_0049d30f
    MOV EAX,dword ptr [EBX + 0x8]       ; 0049d2f9
    MOV EDI,dword ptr [EBX]             ; 0049d2fc
    MOV ESI,0x4                         ; 0049d2fe
    ADD EDI,EAX                         ; 0049d303
    MOV dword ptr [0x01c3f5d4],ESI      ; 0049d305 | DAT_01c3f5d4
    MOV dword ptr [EBX],EDI             ; 0049d30b
    JMP 0x0049d295                      ; 0049d30d
        ;   XREF to: 0049d295 (UNCONDITIONAL_JUMP)  ; LAB_0049d295
    XOR ECX,ECX                         ; 0049d30f
        ;   Label: LAB_0049d30f
    MOV dword ptr [0x01c3f5d4],ECX      ; 0049d311 | DAT_01c3f5d4
    JMP 0x0049d295                      ; 0049d317
        ;   XREF to: 0049d295 (UNCONDITIONAL_JUMP)  ; LAB_0049d295

