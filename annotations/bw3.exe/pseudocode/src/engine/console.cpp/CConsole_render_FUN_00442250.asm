; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_CConsole_render_FUN_00442250(CConsole *this_ptr)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined1       Stack[-0x14]:1  local_14
; undefined1       Stack[-0x13]:1  local_13
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b7939
;
; Referenced Globals:
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011a0
;   engine_2d.c_drawString_FUN_00402090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442250
        ;   Label: engine_console.cpp_CConsole_render_FUN_00442250
    PUSH ESI                            ; 00442251
    PUSH EDI                            ; 00442252
    PUSH EBP                            ; 00442253
    SUB ESP,0x14                        ; 00442254
    MOV EBX,dword ptr [ESP + 0x28]      ; 00442257
    XOR AH,AH                           ; 0044225b
    MOV byte ptr [ESP + 0x11],AH        ; 0044225d
    XOR EDX,EDX                         ; 00442261
    MOV ECX,dword ptr [EBX + 0xfb4]     ; 00442263
    MOV dword ptr [ESP + 0x4],EDX       ; 00442269
    TEST ECX,ECX                        ; 0044226d
    JLE 0x00442304                      ; 0044226f
        ;   XREF to: 00442304 (CONDITIONAL_JUMP)  ; LAB_00442304
    XOR ECX,ECX                         ; 00442275
    MOV dword ptr [ESP],EBX             ; 00442277
    MOV dword ptr [ESP + 0xc],ECX       ; 0044227a
    MOV ESI,dword ptr [EBX + 0xfb0]     ; 0044227e
        ;   Label: LAB_0044227e
    XOR EBP,EBP                         ; 00442284
    TEST ESI,ESI                        ; 00442286
    JLE 0x004422d9                      ; 00442288
        ;   XREF to: 004422d9 (CONDITIONAL_JUMP)  ; LAB_004422d9
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044228a
    MOV ESI,dword ptr [ESP]             ; 0044228e
    XOR EDI,EDI                         ; 00442291
    MOV dword ptr [ESP + 0x8],EAX       ; 00442293
    MOV AL,byte ptr [ESI + 0x8]         ; 00442297
        ;   Label: LAB_00442297
    MOV byte ptr [ESP + 0x10],AL        ; 0044229a
    TEST AL,AL                          ; 0044229e
    JZ 0x004422ca                       ; 004422a0
        ;   XREF to: 004422ca (CONDITIONAL_JUMP)  ; LAB_004422ca
    MOV EAX,dword ptr [ESP + 0x8]       ; 004422a2
    MOV EDX,dword ptr [EBX + 0xfbc]     ; 004422a6
    PUSH 0xf8                           ; 004422ac
    ADD EAX,EDX                         ; 004422b1
    PUSH EAX                            ; 004422b3
    MOV EAX,dword ptr [EBX + 0xfb8]     ; 004422b4
    ADD EAX,EDI                         ; 004422ba
    PUSH EAX                            ; 004422bc
    LEA EAX,[ESP + 0x1c]                ; 004422bd
    PUSH EAX                            ; 004422c1
    CALL engine_2d.c_drawString_FUN_00402090 ; 004422c2
        ;   XREF to: 00402090 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawString_FUN_00402090(char * text, int x_pos, int y_pos, int color)
    ADD ESP,0x10                        ; 004422c7
    INC ESI                             ; 004422ca
        ;   Label: LAB_004422ca
    INC EBP                             ; 004422cb
    MOV EAX,dword ptr [EBX + 0xfb0]     ; 004422cc
    ADD EDI,0x7                         ; 004422d2
    CMP EBP,EAX                         ; 004422d5
    JL 0x00442297                       ; 004422d7
        ;   XREF to: 00442297 (CONDITIONAL_JUMP)  ; LAB_00442297
    MOV ESI,dword ptr [ESP]             ; 004422d9
        ;   Label: LAB_004422d9
    MOV EDI,dword ptr [ESP + 0xc]       ; 004422dc
    MOV EBP,dword ptr [ESP + 0x4]       ; 004422e0
    MOV EDX,dword ptr [EBX + 0xfb4]     ; 004422e4
    ADD ESI,0x50                        ; 004422ea
    ADD EDI,0xb                         ; 004422ed
    INC EBP                             ; 004422f0
    MOV dword ptr [ESP],ESI             ; 004422f1
    MOV dword ptr [ESP + 0xc],EDI       ; 004422f4
    MOV dword ptr [ESP + 0x4],EBP       ; 004422f8
    CMP EBP,EDX                         ; 004422fc
    JL 0x0044227e                       ; 004422fe
        ;   XREF to: 0044227e (CONDITIONAL_JUMP)  ; LAB_0044227e
    MOV EBP,dword ptr [EBX + 0xfb0]     ; 00442304
        ;   Label: LAB_00442304
    MOV ESI,dword ptr [EBX + 0xfb8]     ; 0044230a
    LEA EAX,[EBP*0x8 + 0x0]             ; 00442310
    MOV EDI,dword ptr [EBX + 0xfbc]     ; 00442317
    SUB EAX,EBP                         ; 0044231d
    MOV EBX,dword ptr [EBX + 0xfb4]     ; 0044231f
    LEA EBP,[ESI + EAX*0x1]             ; 00442325
    LEA EAX,[EBX*0x4 + 0x0]             ; 00442328
    SUB EAX,EBX                         ; 0044232f
    SHL EAX,0x2                         ; 00442331
    SUB EAX,EBX                         ; 00442334
    LEA EBX,[EDI + EAX*0x1]             ; 00442336
    DEC EDI                             ; 00442339
    PUSH EDI                            ; 0044233a
    PUSH EBP                            ; 0044233b
    PUSH EDI                            ; 0044233c
    MOV ECX,0xf8                        ; 0044233d
    PUSH ESI                            ; 00442342
    MOV dword ptr [0x01c6b5c0],ECX      ; 00442343 | DAT_01c6b5c0
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00442349
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0044234e
    INC EBX                             ; 00442351
    PUSH EBX                            ; 00442352
    PUSH EBP                            ; 00442353
    PUSH EBX                            ; 00442354
    PUSH ESI                            ; 00442355
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00442356
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0044235b
    PUSH EBX                            ; 0044235e
    DEC ESI                             ; 0044235f
    PUSH ESI                            ; 00442360
    PUSH EDI                            ; 00442361
    PUSH ESI                            ; 00442362
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00442363
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00442368
    PUSH EBX                            ; 0044236b
    INC EBP                             ; 0044236c
    PUSH EBP                            ; 0044236d
    PUSH EDI                            ; 0044236e
    PUSH EBP                            ; 0044236f
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00442370
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00442375
    ADD ESP,0x14                        ; 00442378
    POP EBP                             ; 0044237b
    POP EDI                             ; 0044237c
    POP ESI                             ; 0044237d
    POP EBX                             ; 0044237e
    RET                                 ; 0044237f

