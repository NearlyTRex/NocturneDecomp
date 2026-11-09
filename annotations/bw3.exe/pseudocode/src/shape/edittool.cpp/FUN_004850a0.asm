; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004850a0(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_edittool.cpp_FUN_00485640 at 004857b0
;   shape_edittool.cpp_FUN_00486120 at 00486150
;   shape_edittool.cpp_FUN_00486810 at 004868b6
;
; Referenced Globals:
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c5bb5c
;   undefined4 DAT_01c5bb68
;   undefined4 DAT_01c5bb6c
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_2d.c_drawVLine_FUN_00403040
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_mini3d.cpp_FUN_004f3520
;   engine_mini3d.cpp_FUN_004f37e0
;   engine_mini3d.cpp_FUN_004f3ab0
;   engine_mini3d.cpp_FUN_004f3ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004850a0
        ;   Label: shape_edittool.cpp_FUN_004850a0
    PUSH ESI                            ; 004850a1
    PUSH EDI                            ; 004850a2
    PUSH EBP                            ; 004850a3
    SUB ESP,0xc                         ; 004850a4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004850a7
    MOV ESI,dword ptr [ESP + 0x24]      ; 004850ab
    MOV EDI,dword ptr [ESP + 0x28]      ; 004850af
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004850b3
    CMP dword ptr [ESP + 0x30],0x0      ; 004850b7
    JZ 0x00485235                       ; 004850bc
        ;   XREF to: 00485235 (CONDITIONAL_JUMP)  ; LAB_00485235
    MOV EAX,[0x01c5bb6c]                ; 004850c2 | DAT_01c5bb6c
    CMP dword ptr [0x01c5baec],0x0      ; 004850c7 | DAT_01c5baec
        ;   Label: LAB_004850c7
    JZ 0x0048523f                       ; 004850ce
        ;   XREF to: 0048523f (CONDITIONAL_JUMP)  ; LAB_0048523f
    AND EAX,0xff                        ; 004850d4
    MOV EDX,EAX                         ; 004850d9
    SHL EAX,0x2                         ; 004850db
    SUB EAX,EDX                         ; 004850de
    XOR ECX,ECX                         ; 004850e0
    XOR EDX,EDX                         ; 004850e2
    MOV CL,byte ptr [EAX + 0x1c6af98]   ; 004850e4 | DAT_01c6af98
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 004850ea | DAT_01c6af99
    SHL EDX,0x8                         ; 004850f0
    SHL ECX,0x10                        ; 004850f3
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 004850f6 | DAT_01c6af9a
    OR EDX,ECX                          ; 004850fc
    AND EAX,0xff                        ; 004850fe
    OR EAX,EDX                          ; 00485103
    PUSH EAX                            ; 00485105
    CALL engine_mini3d.cpp_FUN_004f3520 ; 00485106
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0048510b
    MOV EDX,dword ptr [0x01c5baec]      ; 0048510e | DAT_01c5baec
        ;   Label: LAB_0048510e
    LEA EAX,[EDI + -0x1]                ; 00485114
    TEST EDX,EDX                        ; 00485117
    JZ 0x00485249                       ; 00485119
        ;   XREF to: 00485249 (CONDITIONAL_JUMP)  ; LAB_00485249
    PUSH EAX                            ; 0048511f
    PUSH ESI                            ; 00485120
    PUSH EBX                            ; 00485121
    CALL engine_mini3d.cpp_FUN_004f3ab0 ; 00485122
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ab0()
    ADD ESP,0xc                         ; 00485127
        ;   Label: LAB_00485127
    MOV ECX,dword ptr [0x01c5baec]      ; 0048512a | DAT_01c5baec
    LEA EAX,[EBP + -0x1]                ; 00485130
    TEST ECX,ECX                        ; 00485133
    JZ 0x00485256                       ; 00485135
        ;   XREF to: 00485256 (CONDITIONAL_JUMP)  ; LAB_00485256
    PUSH EAX                            ; 0048513b
    PUSH ESI                            ; 0048513c
    PUSH EBX                            ; 0048513d
    CALL engine_mini3d.cpp_FUN_004f3ad0 ; 0048513e
        ;   XREF to: 004f3ad0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ad0()
    ADD ESP,0xc                         ; 00485143
        ;   Label: LAB_00485143
    CMP dword ptr [ESP + 0x30],0x0      ; 00485146
    JZ 0x00485263                       ; 0048514b
        ;   XREF to: 00485263 (CONDITIONAL_JUMP)  ; LAB_00485263
    MOV EAX,[0x01c5bb68]                ; 00485151 | DAT_01c5bb68
    CMP dword ptr [0x01c5baec],0x0      ; 00485156 | DAT_01c5baec
        ;   Label: LAB_00485156
    JZ 0x0048526d                       ; 0048515d
        ;   XREF to: 0048526d (CONDITIONAL_JUMP)  ; LAB_0048526d
    AND EAX,0xff                        ; 00485163
    MOV EDX,EAX                         ; 00485168
    SHL EAX,0x2                         ; 0048516a
    SUB EAX,EDX                         ; 0048516d
    XOR EDX,EDX                         ; 0048516f
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 00485171 | DAT_01c6af99
    SHL EDX,0x8                         ; 00485177
    MOV dword ptr [ESP],EDX             ; 0048517a
    XOR EDX,EDX                         ; 0048517d
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0048517f | DAT_01c6af98
    MOV ECX,dword ptr [ESP]             ; 00485185
    SHL EDX,0x10                        ; 00485188
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0048518b | DAT_01c6af9a
    OR EDX,ECX                          ; 00485191
    AND EAX,0xff                        ; 00485193
    OR EAX,EDX                          ; 00485198
    PUSH EAX                            ; 0048519a
    CALL engine_mini3d.cpp_FUN_004f3520 ; 0048519b
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 004851a0
    MOV ECX,dword ptr [0x01c5baec]      ; 004851a3 | DAT_01c5baec
        ;   Label: LAB_004851a3
    LEA EDX,[EDI + -0x1]                ; 004851a9
    LEA EAX,[EBP + -0x1]                ; 004851ac
    TEST ECX,ECX                        ; 004851af
    JZ 0x00485277                       ; 004851b1
        ;   XREF to: 00485277 (CONDITIONAL_JUMP)  ; LAB_00485277
    PUSH EDX                            ; 004851b7
    PUSH EAX                            ; 004851b8
    PUSH EBX                            ; 004851b9
    CALL engine_mini3d.cpp_FUN_004f3ab0 ; 004851ba
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ab0()
    ADD ESP,0xc                         ; 004851bf
        ;   Label: LAB_004851bf
    MOV ECX,dword ptr [0x01c5baec]      ; 004851c2 | DAT_01c5baec
    LEA EAX,[EBP + -0x1]                ; 004851c8
    LEA EDX,[EDI + -0x1]                ; 004851cb
    TEST ECX,ECX                        ; 004851ce
    JZ 0x00485284                       ; 004851d0
        ;   XREF to: 00485284 (CONDITIONAL_JUMP)  ; LAB_00485284
    PUSH EAX                            ; 004851d6
    PUSH ESI                            ; 004851d7
    PUSH EDX                            ; 004851d8
    CALL engine_mini3d.cpp_FUN_004f3ad0 ; 004851d9
        ;   XREF to: 004f3ad0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ad0()
    ADD ESP,0xc                         ; 004851de
        ;   Label: LAB_004851de
    MOV EAX,[0x01c5bb5c]                ; 004851e1 | DAT_01c5bb5c
    LEA EDX,[EBX + 0x1]                 ; 004851e6
    LEA ECX,[ESI + 0x1]                 ; 004851e9
    LEA EBX,[EDI + -0x2]                ; 004851ec
    LEA ESI,[EBP + -0x2]                ; 004851ef
    MOV EDI,EDX                         ; 004851f2
    MOV EBP,ECX                         ; 004851f4
    MOV dword ptr [ESP + 0x4],EBX       ; 004851f6
    MOV dword ptr [ESP + 0x8],ESI       ; 004851fa
    CMP dword ptr [0x01c5baec],0x0      ; 004851fe | DAT_01c5baec
    JZ 0x004852d2                       ; 00485205
        ;   XREF to: 004852d2 (CONDITIONAL_JUMP)  ; LAB_004852d2
    CMP dword ptr [0x01c5baec],0x0      ; 0048520b | DAT_01c5baec
    JNZ 0x00485291                      ; 00485212
        ;   XREF to: 00485291 (CONDITIONAL_JUMP)  ; LAB_00485291
    MOV [0x01c6b5c0],EAX                ; 00485214 | DAT_01c6b5c0
    MOV ESI,dword ptr [ESP + 0x8]       ; 00485219
        ;   Label: LAB_00485219
    PUSH ESI                            ; 0048521d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048521e
    PUSH EAX                            ; 00485222
    PUSH EBP                            ; 00485223
    PUSH EDI                            ; 00485224
    CALL engine_mini3d.cpp_FUN_004f37e0 ; 00485225
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f37e0()
    ADD ESP,0x10                        ; 0048522a
    ADD ESP,0xc                         ; 0048522d
    POP EBP                             ; 00485230
    POP EDI                             ; 00485231
    POP ESI                             ; 00485232
    POP EBX                             ; 00485233
    RET                                 ; 00485234
    MOV EAX,[0x01c5bb68]                ; 00485235 | DAT_01c5bb68
        ;   Label: LAB_00485235
    JMP 0x004850c7                      ; 0048523a
        ;   XREF to: 004850c7 (UNCONDITIONAL_JUMP)  ; LAB_004850c7
    MOV [0x01c6b5c0],EAX                ; 0048523f | DAT_01c6b5c0
        ;   Label: LAB_0048523f
    JMP 0x0048510e                      ; 00485244
        ;   XREF to: 0048510e (UNCONDITIONAL_JUMP)  ; LAB_0048510e
    PUSH EAX                            ; 00485249
        ;   Label: LAB_00485249
    PUSH ESI                            ; 0048524a
    PUSH EBX                            ; 0048524b
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0048524c
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x00485127                      ; 00485251
        ;   XREF to: 00485127 (UNCONDITIONAL_JUMP)  ; LAB_00485127
    PUSH EAX                            ; 00485256
        ;   Label: LAB_00485256
    PUSH ESI                            ; 00485257
    PUSH EBX                            ; 00485258
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 00485259
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    JMP 0x00485143                      ; 0048525e
        ;   XREF to: 00485143 (UNCONDITIONAL_JUMP)  ; LAB_00485143
    MOV EAX,[0x01c5bb6c]                ; 00485263 | DAT_01c5bb6c
        ;   Label: LAB_00485263
    JMP 0x00485156                      ; 00485268
        ;   XREF to: 00485156 (UNCONDITIONAL_JUMP)  ; LAB_00485156
    MOV [0x01c6b5c0],EAX                ; 0048526d | DAT_01c6b5c0
        ;   Label: LAB_0048526d
    JMP 0x004851a3                      ; 00485272
        ;   XREF to: 004851a3 (UNCONDITIONAL_JUMP)  ; LAB_004851a3
    PUSH EDX                            ; 00485277
        ;   Label: LAB_00485277
    PUSH EAX                            ; 00485278
    PUSH EBX                            ; 00485279
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0048527a
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x004851bf                      ; 0048527f
        ;   XREF to: 004851bf (UNCONDITIONAL_JUMP)  ; LAB_004851bf
    PUSH EAX                            ; 00485284
        ;   Label: LAB_00485284
    PUSH ESI                            ; 00485285
    PUSH EDX                            ; 00485286
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 00485287
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    JMP 0x004851de                      ; 0048528c
        ;   XREF to: 004851de (UNCONDITIONAL_JUMP)  ; LAB_004851de
    AND EAX,0xff                        ; 00485291
        ;   Label: LAB_00485291
    MOV EBX,EAX                         ; 00485296
    SHL EAX,0x2                         ; 00485298
    SUB EAX,EBX                         ; 0048529b
    XOR EDX,EDX                         ; 0048529d
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0048529f | DAT_01c6af99
    MOV ECX,EDX                         ; 004852a5
    XOR EDX,EDX                         ; 004852a7
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 004852a9 | DAT_01c6af98
    SHL ECX,0x8                         ; 004852af
    SHL EDX,0x10                        ; 004852b2
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 004852b5 | DAT_01c6af9a
    OR EDX,ECX                          ; 004852bb
    AND EAX,0xff                        ; 004852bd
    OR EAX,EDX                          ; 004852c2
    PUSH EAX                            ; 004852c4
    CALL engine_mini3d.cpp_FUN_004f3520 ; 004852c5
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 004852ca
    JMP 0x00485219                      ; 004852cd
        ;   XREF to: 00485219 (UNCONDITIONAL_JUMP)  ; LAB_00485219
    PUSH EAX                            ; 004852d2
        ;   Label: LAB_004852d2
    PUSH ESI                            ; 004852d3
    PUSH EBX                            ; 004852d4
    PUSH ECX                            ; 004852d5
    PUSH EDX                            ; 004852d6
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004852d7
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004852dc
    ADD ESP,0xc                         ; 004852df
    POP EBP                             ; 004852e2
    POP EDI                             ; 004852e3
    POP ESI                             ; 004852e4
    POP EBX                             ; 004852e5
    RET                                 ; 004852e6

