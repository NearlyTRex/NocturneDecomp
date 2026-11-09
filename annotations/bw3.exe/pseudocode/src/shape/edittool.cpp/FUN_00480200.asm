; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00480200(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_edittool.cpp_FUN_004843d0 at 004843f2
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047cad2
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c49d
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd28a
;   TerminatedCString s_CEditorTools_paintWindow_005bd2a0
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5b104
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c5baf4
;   undefined4 DAT_01c5baf8
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_mini3d.cpp_FUN_004f3520
;   engine_mini3d.cpp_FUN_004f3ab0
;   shape_edittool.cpp_FUN_00486580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480200
        ;   Label: shape_edittool.cpp_FUN_00480200
    PUSH ESI                            ; 00480201
    PUSH EDI                            ; 00480202
    PUSH EBP                            ; 00480203
    SUB ESP,0x4                         ; 00480204
    CMP dword ptr [0x01c5b104],0x1      ; 00480207 | DAT_01c5b104
    JL 0x00480342                       ; 0048020e
        ;   XREF to: 00480342 (CONDITIONAL_JUMP)  ; LAB_00480342
    MOV EAX,[0x01c5b104]                ; 00480214 | DAT_01c5b104
        ;   Label: LAB_00480214
    DEC EAX                             ; 00480219
    SHL EAX,0x3                         ; 0048021a
    MOV EBX,EAX                         ; 0048021d
    SHL EAX,0x6                         ; 0048021f
    SUB EAX,EBX                         ; 00480222
    MOV EBX,0x1c5b108                   ; 00480224
    ADD EBX,EAX                         ; 00480229
    MOV EAX,[0x01c6b5ac]                ; 0048022b | DAT_01c6b5ac
    MOV dword ptr [ESP],EAX             ; 00480230
    MOV EAX,dword ptr [EBX + 0x4]       ; 00480233
    MOV [0x01c6b5ac],EAX                ; 00480236 | DAT_01c6b5ac
    MOV EAX,[0x005fba1c]                ; 0048023b | DAT_005fba1c
    MOV EDX,EAX                         ; 00480240
    MOV ECX,0x60                        ; 00480242
    SAR EDX,0x1f                        ; 00480247
    IDIV ECX                            ; 0048024a
    PUSH 0x0                            ; 0048024c
    MOV EDI,dword ptr [0x01c6b5c0]      ; 0048024e | DAT_01c6b5c0
    MOV ESI,EAX                         ; 00480254
    CALL shape_edittool.cpp_FUN_00486580 ; 00480256
        ;   XREF to: 00486580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486580(char * button_text)
    ADD ESP,0x4                         ; 0048025b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048025e
    IMUL EDX,EAX                        ; 00480262
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00480265
    INC EAX                             ; 00480269
    IMUL EAX,ESI                        ; 0048026a
    MOV ESI,dword ptr [EBX + 0xc]       ; 0048026d
    ADD EAX,EDX                         ; 00480270
    MOV EBP,dword ptr [0x01c5baec]      ; 00480272 | DAT_01c5baec
    SUB ESI,EAX                         ; 00480278
    MOV EAX,[0x01c5baf4]                ; 0048027a | DAT_01c5baf4
    TEST EBP,EBP                        ; 0048027f
    JZ 0x0048036a                       ; 00480281
        ;   XREF to: 0048036a (CONDITIONAL_JUMP)  ; LAB_0048036a
    AND EAX,0xff                        ; 00480287
    MOV EDX,EAX                         ; 0048028c
    SHL EAX,0x2                         ; 0048028e
    SUB EAX,EDX                         ; 00480291
    XOR EDX,EDX                         ; 00480293
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 00480295 | DAT_01c6af99
    MOV ECX,EDX                         ; 0048029b
    XOR EDX,EDX                         ; 0048029d
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0048029f | DAT_01c6af98
    SHL ECX,0x8                         ; 004802a5
    SHL EDX,0x10                        ; 004802a8
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 004802ab | DAT_01c6af9a
    OR EDX,ECX                          ; 004802b1
    AND EAX,0xff                        ; 004802b3
    OR EAX,EDX                          ; 004802b8
    PUSH EAX                            ; 004802ba
    CALL engine_mini3d.cpp_FUN_004f3520 ; 004802bb
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 004802c0
    MOV ECX,dword ptr [0x01c5baec]      ; 004802c3 | DAT_01c5baec
        ;   Label: LAB_004802c3
    MOV EAX,dword ptr [EBX]             ; 004802c9
    MOV EDX,dword ptr [EBX + 0x8]       ; 004802cb
    INC EAX                             ; 004802ce
    SUB EDX,0x2                         ; 004802cf
    TEST ECX,ECX                        ; 004802d2
    JZ 0x00480374                       ; 004802d4
        ;   XREF to: 00480374 (CONDITIONAL_JUMP)  ; LAB_00480374
    PUSH EDX                            ; 004802da
    PUSH ESI                            ; 004802db
    PUSH EAX                            ; 004802dc
    CALL engine_mini3d.cpp_FUN_004f3ab0 ; 004802dd
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ab0()
    ADD ESP,0xc                         ; 004802e2
        ;   Label: LAB_004802e2
    MOV EBP,dword ptr [0x01c5baf8]      ; 004802e5 | DAT_01c5baf8
    CMP EBP,dword ptr [0x01c5baf4]      ; 004802eb | DAT_01c5baf4
    JZ 0x0048032c                       ; 004802f1
        ;   XREF to: 0048032c (CONDITIONAL_JUMP)  ; LAB_0048032c
    MOV EDX,dword ptr [0x01c5baec]      ; 004802f3 | DAT_01c5baec
    MOV EAX,EBP                         ; 004802f9
    TEST EDX,EDX                        ; 004802fb
    JNZ 0x00480381                      ; 004802fd
        ;   XREF to: 00480381 (CONDITIONAL_JUMP)  ; LAB_00480381
    MOV dword ptr [0x01c6b5c0],EBP      ; 00480303 | DAT_01c6b5c0
    MOV ECX,dword ptr [0x01c5baec]      ; 00480309 | DAT_01c5baec
        ;   Label: LAB_00480309
    DEC ESI                             ; 0048030f
    MOV EAX,dword ptr [EBX]             ; 00480310
    MOV EDX,dword ptr [EBX + 0x8]       ; 00480312
    INC EAX                             ; 00480315
    SUB EDX,0x2                         ; 00480316
    TEST ECX,ECX                        ; 00480319
    JZ 0x004803c0                       ; 0048031b
        ;   XREF to: 004803c0 (CONDITIONAL_JUMP)  ; LAB_004803c0
    PUSH EDX                            ; 00480321
    PUSH ESI                            ; 00480322
    PUSH EAX                            ; 00480323
    CALL engine_mini3d.cpp_FUN_004f3ab0 ; 00480324
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ab0()
    ADD ESP,0xc                         ; 00480329
        ;   Label: LAB_00480329
    MOV EAX,dword ptr [ESP]             ; 0048032c
        ;   Label: LAB_0048032c
    MOV dword ptr [0x01c6b5c0],EDI      ; 0048032f | DAT_01c6b5c0
    MOV [0x01c6b5ac],EAX                ; 00480335 | DAT_01c6b5ac
    ADD ESP,0x4                         ; 0048033a
        ;   Label: LAB_0048033a
    POP EBP                             ; 0048033d
    POP EDI                             ; 0048033e
    POP ESI                             ; 0048033f
    POP EBX                             ; 00480340
    RET                                 ; 00480341
    MOV ECX,0x5bd28a                    ; 00480342 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00480342
    MOV EBX,0x99f                       ; 00480347
    PUSH 0x5bd2a0                       ; 0048034c | = "CEditorTools::paintWindow() called bu..."
    MOV dword ptr [0x01d71de0],ECX      ; 00480351 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00480357 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0048035d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00480362
    JMP 0x00480214                      ; 00480365
        ;   XREF to: 00480214 (UNCONDITIONAL_JUMP)  ; LAB_00480214
    MOV [0x01c6b5c0],EAX                ; 0048036a | DAT_01c6b5c0
        ;   Label: LAB_0048036a
    JMP 0x004802c3                      ; 0048036f
        ;   XREF to: 004802c3 (UNCONDITIONAL_JUMP)  ; LAB_004802c3
    PUSH EDX                            ; 00480374
        ;   Label: LAB_00480374
    PUSH ESI                            ; 00480375
    PUSH EAX                            ; 00480376
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 00480377
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x004802e2                      ; 0048037c
        ;   XREF to: 004802e2 (UNCONDITIONAL_JUMP)  ; LAB_004802e2
    AND EAX,0xff                        ; 00480381
        ;   Label: LAB_00480381
    MOV EDX,EAX                         ; 00480386
    SHL EAX,0x2                         ; 00480388
    SUB EAX,EDX                         ; 0048038b
    XOR ECX,ECX                         ; 0048038d
    XOR EDX,EDX                         ; 0048038f
    MOV CL,byte ptr [EAX + 0x1c6af98]   ; 00480391 | DAT_01c6af98
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 00480397 | DAT_01c6af99
    SHL ECX,0x10                        ; 0048039d
    SHL EDX,0x8                         ; 004803a0
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 004803a3 | DAT_01c6af9a
    OR EDX,ECX                          ; 004803a9
    AND EAX,0xff                        ; 004803ab
    OR EDX,EAX                          ; 004803b0
    PUSH EDX                            ; 004803b2
    CALL engine_mini3d.cpp_FUN_004f3520 ; 004803b3
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 004803b8
    JMP 0x00480309                      ; 004803bb
        ;   XREF to: 00480309 (UNCONDITIONAL_JUMP)  ; LAB_00480309
    PUSH EDX                            ; 004803c0
        ;   Label: LAB_004803c0
    PUSH ESI                            ; 004803c1
    PUSH EAX                            ; 004803c2
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 004803c3
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x00480329                      ; 004803c8
        ;   XREF to: 00480329 (UNCONDITIONAL_JUMP)  ; LAB_00480329

