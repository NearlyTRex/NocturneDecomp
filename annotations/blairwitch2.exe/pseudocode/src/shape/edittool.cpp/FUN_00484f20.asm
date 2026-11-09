; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00484f20(int param_1,int param_2)
;
; Local Variables:
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0xdb]:1  local_db
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   shape_edittool.cpp_FUN_0047c0f0 at 0047c6db
;   shape_edittool.cpp_FUN_004831d0 at 00483412
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 at 0047ba5d
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b403
;
; Referenced Globals:
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c263f8
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005b8e40
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_font.cpp_FUN_004a8df0
;   engine_font.cpp_FUN_004aaf00
;   engine_font.cpp_FUN_004aafb0
;   engine_font.cpp_FUN_004ab530
;   engine_font.cpp_FUN_004ab560
;   engine_font.cpp_FUN_004ab590
;   engine_mini3d.cpp_FUN_004f8e20
;   engine_mini3d.cpp_FUN_004f9390
;   shape_edittool.cpp_FUN_0047a590
;   shape_edittool.cpp_FUN_00483ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484f20
        ;   Label: shape_edittool.cpp_FUN_00484f20
    PUSH ESI                            ; 00484f21
    PUSH EDI                            ; 00484f22
    PUSH EBP                            ; 00484f23
    SUB ESP,0xcc                        ; 00484f24
    MOV EBX,dword ptr [ESP + 0xe0]      ; 00484f2a
    MOV EDX,dword ptr [EBX + 0x18]      ; 00484f31
    PUSH EDX                            ; 00484f34
    MOV ECX,dword ptr [EBX + 0x14]      ; 00484f35
    PUSH ECX                            ; 00484f38
    MOV EDI,dword ptr [EBX + 0x10]      ; 00484f39
    PUSH EDI                            ; 00484f3c
    MOV EAX,dword ptr [EBX + 0xc]       ; 00484f3d
    MOV ESI,dword ptr [0x01c35e4c]      ; 00484f40 | DAT_01c35e4c
    PUSH EAX                            ; 00484f46
    MOV [0x01c35e4c],EAX                ; 00484f47 | DAT_01c35e4c
    MOV EAX,dword ptr [EBX + 0x8]       ; 00484f4c
    PUSH EAX                            ; 00484f4f
    CALL shape_edittool.cpp_FUN_00483ea0 ; 00484f50
        ;   XREF to: 00483ea0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00483ea0()
    ADD ESP,0x14                        ; 00484f55
    MOV dword ptr [0x01c35e4c],ESI      ; 00484f58 | DAT_01c35e4c
    LEA ESI,[EBX + 0x1c]                ; 00484f5e
    PUSH ESI                            ; 00484f61
    MOV EDX,dword ptr [0x01c25590]      ; 00484f62 | DAT_01c25590
    PUSH EDX                            ; 00484f68
    CALL engine_font.cpp_FUN_004aaf00   ; 00484f69
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    ADD ESP,0x8                         ; 00484f6e
    PUSH ESI                            ; 00484f71
    MOV ECX,dword ptr [0x01c25590]      ; 00484f72 | DAT_01c25590
    PUSH ECX                            ; 00484f78
    MOV EBP,EAX                         ; 00484f79
    CALL engine_font.cpp_FUN_004aafb0   ; 00484f7b
        ;   XREF to: 004aafb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004aafb0(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 00484f80
    PUSH 0x41                           ; 00484f83
    MOV EDI,EAX                         ; 00484f85
    MOV EAX,[0x01c25590]                ; 00484f87 | DAT_01c25590
    PUSH EAX                            ; 00484f8c
    CALL engine_font.cpp_FUN_004ab590   ; 00484f8d
        ;   XREF to: 004ab590 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004ab590()
    MOV EDX,dword ptr [EBX + 0x10]      ; 00484f92
    ADD EDI,EAX                         ; 00484f95
    ADD EDX,dword ptr [EBX + 0x8]       ; 00484f97
    SUB EDX,EBP                         ; 00484f9a
    MOV EAX,EDX                         ; 00484f9c
    SAR EDX,0x1f                        ; 00484f9e
    SUB EAX,EDX                         ; 00484fa1
    SAR EAX,0x1                         ; 00484fa3
    MOV ECX,dword ptr [EBX + 0x14]      ; 00484fa5
    MOV EDX,dword ptr [EBX + 0xc]       ; 00484fa8
    ADD EDX,ECX                         ; 00484fab
    MOV EBP,dword ptr [EBX + 0x18]      ; 00484fad
    SUB EDX,EDI                         ; 00484fb0
    ADD EBP,EAX                         ; 00484fb2
    MOV EAX,EDX                         ; 00484fb4
    SAR EDX,0x1f                        ; 00484fb6
    SUB EAX,EDX                         ; 00484fb9
    SAR EAX,0x1                         ; 00484fbb
    ADD ESP,0x8                         ; 00484fbd
    PUSH -0x1                           ; 00484fc0
    MOV EDI,dword ptr [0x01c263f8]      ; 00484fc2 | DAT_01c263f8
    MOV EDX,dword ptr [EBX + 0x18]      ; 00484fc8
    PUSH EDI                            ; 00484fcb
    ADD EDX,EAX                         ; 00484fcc
    PUSH EDX                            ; 00484fce
    PUSH EBP                            ; 00484fcf
    PUSH ESI                            ; 00484fd0
    MOV dword ptr [ESP + 0xdc],EDX      ; 00484fd1
    MOV EDX,dword ptr [0x01c25590]      ; 00484fd8 | DAT_01c25590
    PUSH EDX                            ; 00484fde
    CALL engine_font.cpp_FUN_004a8df0   ; 00484fdf
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01c263f8]                ; 00484fe4 | DAT_01c263f8
    MOV ECX,dword ptr [0x01c25f84]      ; 00484fe9 | DAT_01c25f84
    ADD ESP,0x18                        ; 00484fef
    TEST ECX,ECX                        ; 00484ff2
    JNZ 0x00485053                      ; 00484ff4
        ;   XREF to: 00485053 (CONDITIONAL_JUMP)  ; LAB_00485053
    MOV [0x01c35e60],EAX                ; 00484ff6 | DAT_01c35e60
    CMP dword ptr [ESP + 0xe4],0x0      ; 00484ffb
        ;   Label: LAB_00484ffb
    JNZ 0x00485092                      ; 00485003
        ;   XREF to: 00485092 (CONDITIONAL_JUMP)  ; LAB_00485092
    MOV EDI,ESP                         ; 00485009
        ;   Label: LAB_00485009
    LEA ESI,[EBX + 0x1c]                ; 0048500b
    PUSH EDI                            ; 0048500e
    MOV AL,byte ptr [ESI]               ; 0048500f
        ;   Label: LAB_0048500f
    MOV byte ptr [EDI],AL               ; 00485011
    CMP AL,0x0                          ; 00485013
    JZ 0x00485027                       ; 00485015
        ;   XREF to: 00485027 (CONDITIONAL_JUMP)  ; LAB_00485027
    MOV AL,byte ptr [ESI + 0x1]         ; 00485017
    ADD ESI,0x2                         ; 0048501a
    MOV byte ptr [EDI + 0x1],AL         ; 0048501d
    ADD EDI,0x2                         ; 00485020
    CMP AL,0x0                          ; 00485023
    JNZ 0x0048500f                      ; 00485025
        ;   XREF to: 0048500f (CONDITIONAL_JUMP)  ; LAB_0048500f
    POP EDI                             ; 00485027
        ;   Label: LAB_00485027
    XOR ESI,ESI                         ; 00485028
    MOV EDI,ESP                         ; 0048502a
        ;   Label: LAB_0048502a
    SUB ECX,ECX                         ; 0048502c
    DEC ECX                             ; 0048502e
    XOR EAX,EAX                         ; 0048502f
    SCASB.REPNE ES:EDI                  ; 00485031
    NOT ECX                             ; 00485033
    DEC ECX                             ; 00485035
    CMP ESI,ECX                         ; 00485036
    JNC 0x004850bd                      ; 00485038
        ;   XREF to: 004850bd (CONDITIONAL_JUMP)  ; LAB_004850bd
    XOR EAX,EAX                         ; 0048503e
    MOV AL,byte ptr [ESP + ESI*0x1]     ; 00485040
    PUSH EAX                            ; 00485043
    INC ESI                             ; 00485044
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 00485045
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 0048504a
    MOV byte ptr [ESP + ESI*0x1 + -0x1],AL ; 0048504d
    JMP 0x0048502a                      ; 00485051
        ;   XREF to: 0048502a (UNCONDITIONAL_JUMP)  ; LAB_0048502a
    AND EAX,0xff                        ; 00485053
        ;   Label: LAB_00485053
    MOV EDX,EAX                         ; 00485058
    SHL EAX,0x2                         ; 0048505a
    SUB EAX,EDX                         ; 0048505d
    XOR ECX,ECX                         ; 0048505f
    XOR EDX,EDX                         ; 00485061
    MOV CL,byte ptr [EAX + 0x1c35838]   ; 00485063 | DAT_01c35838
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 00485069 | DAT_01c35839
    SHL ECX,0x10                        ; 0048506f
    SHL EDX,0x8                         ; 00485072
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 00485075 | DAT_01c3583a
    OR EDX,ECX                          ; 0048507b
    AND EAX,0xff                        ; 0048507d
    OR EAX,EDX                          ; 00485082
    PUSH EAX                            ; 00485084
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 00485085
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0048508a
    JMP 0x00484ffb                      ; 0048508d
        ;   XREF to: 00484ffb (UNCONDITIONAL_JUMP)  ; LAB_00484ffb
    MOV EAX,dword ptr [EBX + 0x14]      ; 00485092
        ;   Label: LAB_00485092
    PUSH 0x1                            ; 00485095
    SUB EAX,0x4                         ; 00485097
    PUSH EAX                            ; 0048509a
    MOV EAX,dword ptr [EBX + 0x10]      ; 0048509b
    SUB EAX,0x5                         ; 0048509e
    PUSH EAX                            ; 004850a1
    MOV EAX,dword ptr [EBX + 0xc]       ; 004850a2
    ADD EAX,0x3                         ; 004850a5
    PUSH EAX                            ; 004850a8
    MOV EAX,dword ptr [EBX + 0x8]       ; 004850a9
    ADD EAX,0x3                         ; 004850ac
    PUSH EAX                            ; 004850af
    CALL shape_edittool.cpp_FUN_0047a590 ; 004850b0
        ;   XREF to: 0047a590 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047a590()
    ADD ESP,0x14                        ; 004850b5
    JMP 0x00485009                      ; 004850b8
        ;   XREF to: 00485009 (UNCONDITIONAL_JUMP)  ; LAB_00485009
    XOR EAX,EAX                         ; 004850bd
        ;   Label: LAB_004850bd
    MOV AL,byte ptr [EBX + 0x4]         ; 004850bf
    PUSH EAX                            ; 004850c2
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004850c3
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004850c8
    MOV ESI,ESP                         ; 004850cb
    MOV DL,AL                           ; 004850cd
    MOV AL,byte ptr [ESI]               ; 004850cf
        ;   Label: LAB_004850cf
    CMP AL,DL                           ; 004850d1
    JZ 0x004850e7                       ; 004850d3
        ;   XREF to: 004850e7 (CONDITIONAL_JUMP)  ; LAB_004850e7
    CMP AL,0x0                          ; 004850d5
    JZ 0x004850e5                       ; 004850d7
        ;   XREF to: 004850e5 (CONDITIONAL_JUMP)  ; LAB_004850e5
    INC ESI                             ; 004850d9
    MOV AL,byte ptr [ESI]               ; 004850da
    CMP AL,DL                           ; 004850dc
    JZ 0x004850e7                       ; 004850de
        ;   XREF to: 004850e7 (CONDITIONAL_JUMP)  ; LAB_004850e7
    INC ESI                             ; 004850e0
    CMP AL,0x0                          ; 004850e1
    JNZ 0x004850cf                      ; 004850e3
        ;   XREF to: 004850cf (CONDITIONAL_JUMP)  ; LAB_004850cf
    SUB ESI,ESI                         ; 004850e5
        ;   Label: LAB_004850e5
    MOV EDX,ESI                         ; 004850e7
        ;   Label: LAB_004850e7
    TEST ESI,ESI                        ; 004850e9
    JNZ 0x004850f8                      ; 004850eb
        ;   XREF to: 004850f8 (CONDITIONAL_JUMP)  ; LAB_004850f8
    ADD ESP,0xcc                        ; 004850ed
    POP EBP                             ; 004850f3
    POP EDI                             ; 004850f4
    POP ESI                             ; 004850f5
    POP EBX                             ; 004850f6
    RET                                 ; 004850f7
    MOV EDI,ESP                         ; 004850f8
        ;   Label: LAB_004850f8
    LEA ESI,[EBX + 0x1c]                ; 004850fa
    PUSH EDI                            ; 004850fd
    MOV AL,byte ptr [ESI]               ; 004850fe
        ;   Label: LAB_004850fe
    MOV byte ptr [EDI],AL               ; 00485100
    CMP AL,0x0                          ; 00485102
    JZ 0x00485116                       ; 00485104
        ;   XREF to: 00485116 (CONDITIONAL_JUMP)  ; LAB_00485116
    MOV AL,byte ptr [ESI + 0x1]         ; 00485106
    ADD ESI,0x2                         ; 00485109
    MOV byte ptr [EDI + 0x1],AL         ; 0048510c
    ADD EDI,0x2                         ; 0048510f
    CMP AL,0x0                          ; 00485112
    JNZ 0x004850fe                      ; 00485114
        ;   XREF to: 004850fe (CONDITIONAL_JUMP)  ; LAB_004850fe
    POP EDI                             ; 00485116
        ;   Label: LAB_00485116
    MOV EAX,ESP                         ; 00485117
    PUSH EAX                            ; 00485119
    MOV EDI,dword ptr [0x01c25590]      ; 0048511a | DAT_01c25590
    PUSH EDI                            ; 00485120
    MOV byte ptr [EDX],0x0              ; 00485121
    CALL engine_font.cpp_FUN_004aaf00   ; 00485124
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    MOV EDX,dword ptr [0x01c25590]      ; 00485129 | DAT_01c25590
    MOV EDX,dword ptr [EDX + 0x41f4]    ; 0048512f
    LEA EDI,[EAX + EDX*0x1]             ; 00485135
    XOR EAX,EAX                         ; 00485138
    ADD ESP,0x8                         ; 0048513a
    MOV AL,byte ptr [EBX + 0x4]         ; 0048513d
    PUSH EAX                            ; 00485140
    MOVZX ESI,byte ptr [EBX + 0x1c]     ; 00485141
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 00485145
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 0048514a
    CMP EAX,ESI                         ; 0048514d
    JNZ 0x00485206                      ; 0048514f
        ;   XREF to: 00485206 (CONDITIONAL_JUMP)  ; LAB_00485206
    XOR EAX,ESI                         ; 00485155
    PUSH 0x41                           ; 00485157
        ;   Label: LAB_00485157
    ADD EBP,EAX                         ; 00485159
    MOV EAX,[0x01c25590]                ; 0048515b | DAT_01c25590
    PUSH EAX                            ; 00485160
    CALL engine_font.cpp_FUN_004ab560   ; 00485161
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00485166
    INC EAX                             ; 00485169
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0048516a
    MOV ECX,dword ptr [0x01c25f84]      ; 00485171 | DAT_01c25f84
    ADD EDX,EAX                         ; 00485177
    MOV EAX,[0x01c263f8]                ; 00485179 | DAT_01c263f8
    MOV dword ptr [ESP + 0xc8],EDX      ; 0048517e
    TEST ECX,ECX                        ; 00485185
    JZ 0x0048520d                       ; 00485187
        ;   XREF to: 0048520d (CONDITIONAL_JUMP)  ; LAB_0048520d
    AND EAX,0xff                        ; 0048518d
    MOV EDX,EAX                         ; 00485192
    SHL EAX,0x2                         ; 00485194
    SUB EAX,EDX                         ; 00485197
    XOR ECX,ECX                         ; 00485199
    XOR EDX,EDX                         ; 0048519b
    MOV CL,byte ptr [EAX + 0x1c35838]   ; 0048519d | DAT_01c35838
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 004851a3 | DAT_01c35839
    SHL ECX,0x10                        ; 004851a9
    SHL EDX,0x8                         ; 004851ac
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 004851af | DAT_01c3583a
    OR EDX,ECX                          ; 004851b5
    AND EAX,0xff                        ; 004851b7
    OR EAX,EDX                          ; 004851bc
    PUSH EAX                            ; 004851be
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 004851bf
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 004851c4
    XOR EAX,EAX                         ; 004851c7
        ;   Label: LAB_004851c7
    MOV AL,byte ptr [EBX + 0x4]         ; 004851c9
    PUSH EAX                            ; 004851cc
    MOV EBX,dword ptr [0x01c25590]      ; 004851cd | DAT_01c25590
    PUSH EBX                            ; 004851d3
    CALL engine_font.cpp_FUN_004ab530   ; 004851d4
        ;   XREF to: 004ab530 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004ab530(CBitFont * this_ptr, int char_code)
    MOV ESI,dword ptr [0x01c25f84]      ; 004851d9 | DAT_01c25f84
    ADD EAX,EBP                         ; 004851df
    ADD ESP,0x8                         ; 004851e1
    DEC EAX                             ; 004851e4
    TEST ESI,ESI                        ; 004851e5
    JZ 0x00485214                       ; 004851e7
        ;   XREF to: 00485214 (CONDITIONAL_JUMP)  ; LAB_00485214
    PUSH EAX                            ; 004851e9
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004851ea
    PUSH EAX                            ; 004851f1
    PUSH EBP                            ; 004851f2
    CALL engine_mini3d.cpp_FUN_004f9390 ; 004851f3
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9390()
    ADD ESP,0xc                         ; 004851f8
    ADD ESP,0xcc                        ; 004851fb
    POP EBP                             ; 00485201
    POP EDI                             ; 00485202
    POP ESI                             ; 00485203
    POP EBX                             ; 00485204
    RET                                 ; 00485205
    MOV EAX,EDI                         ; 00485206
        ;   Label: LAB_00485206
    JMP 0x00485157                      ; 00485208
        ;   XREF to: 00485157 (UNCONDITIONAL_JUMP)  ; LAB_00485157
    MOV [0x01c35e60],EAX                ; 0048520d | DAT_01c35e60
        ;   Label: LAB_0048520d
    JMP 0x004851c7                      ; 00485212
        ;   XREF to: 004851c7 (UNCONDITIONAL_JUMP)  ; LAB_004851c7
    PUSH EAX                            ; 00485214
        ;   Label: LAB_00485214
    MOV EDI,dword ptr [ESP + 0xcc]      ; 00485215
    PUSH EDI                            ; 0048521c
    PUSH EBP                            ; 0048521d
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0048521e
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 00485223
    ADD ESP,0xcc                        ; 00485226
    POP EBP                             ; 0048522c
    POP EDI                             ; 0048522d
    POP ESI                             ; 0048522e
    POP EBX                             ; 0048522f
    RET                                 ; 00485230

