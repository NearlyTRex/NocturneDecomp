; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004d61e0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004ce580 at 004cea1e
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   CFieldNotes* g_CFieldNotesPtr = 01cc8004
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   CFieldNotes g_CFieldNotesInstance
;   undefined4 g_CFieldNotesInstance.is_displayed
;   undefined4 DAT_01cd0c7c
;   undefined4 DAT_01cd0c80
;   undefined4 DAT_01cd0c84
;   undefined4 DAT_01cd0c88
;
; Called Functions:
;   core_game.cpp_calculateIrisFadeCenter_FUN_004d60b0
;   crt_math.c_round_FUN_005c03a0
;   engine_2d.c_fillRectColor_FUN_004031c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d61e0
        ;   Label: core_game.cpp_CGame_renderIrisFade_FUN_004d61e0
    PUSH ESI                            ; 004d61e1
    PUSH EDI                            ; 004d61e2
    PUSH EBP                            ; 004d61e3
    SUB ESP,0x4                         ; 004d61e4
    MOV EDI,dword ptr [0x0061b498]      ; 004d61e7 | DAT_0061b498
    MOV EDX,dword ptr [0x01cd0c7c]      ; 004d61ed | DAT_01cd0c7c
    TEST EDX,EDX                        ; 004d61f3
    JZ 0x004d62a3                       ; 004d61f5
        ;   XREF to: 004d62a3 (CONDITIONAL_JUMP)  ; LAB_004d62a3
    MOV EAX,[0x0061d418]                ; 004d61fb | g_CFieldNotesPtr | g_CFieldNotesInstance
    CMP dword ptr [EAX + 0x40],0x0      ; 004d6200 | g_CFieldNotesInstance.is_displayed
    JNZ 0x004d62a3                      ; 004d6204
        ;   XREF to: 004d62a3 (CONDITIONAL_JUMP)  ; LAB_004d62a3
    CMP EDX,0x4                         ; 004d620a
    JGE 0x004d62b1                      ; 004d620d
        ;   XREF to: 004d62b1 (CONDITIONAL_JUMP)  ; LAB_004d62b1
    CMP EDX,0x1                         ; 004d6213
    JZ 0x004d62b1                       ; 004d6216
        ;   XREF to: 004d62b1 (CONDITIONAL_JUMP)  ; LAB_004d62b1
    CMP dword ptr [0x01cd0c80],0x3f800000 ; 004d621c | DAT_01cd0c80
    JL 0x004d62b1                       ; 004d6226
        ;   XREF to: 004d62b1 (CONDITIONAL_JUMP)  ; LAB_004d62b1
    CALL core_game.cpp_calculateIrisFadeCenter_FUN_004d60b0 ; 004d622c
        ;   XREF to: 004d60b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_calculateIrisFadeCenter_FUN_004d60b0()
    CMP dword ptr [0x0061b4a0],0x20     ; 004d6231 | DAT_0061b4a0
    JNZ 0x004d62a3                      ; 004d6238
        ;   XREF to: 004d62a3 (CONDITIONAL_JUMP)  ; LAB_004d62a3
    FLD float ptr [0x01cd0c80]          ; 004d623a | DAT_01cd0c80
    FMUL ST0                            ; 004d6240
    MOV EDX,dword ptr [0x0061b49c]      ; 004d6242 | DAT_0061b49c
    XOR ESI,ESI                         ; 004d6248
    CALL crt_math.c_round_FUN_005c03a0  ; 004d624a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 004d624f
    TEST EDX,EDX                        ; 004d6252
    JLE 0x004d62a3                      ; 004d6254
        ;   XREF to: 004d62a3 (CONDITIONAL_JUMP)  ; LAB_004d62a3
    XOR EBP,EBP                         ; 004d6256
    MOV EDI,dword ptr [0x0061b498]      ; 004d6258 | DAT_0061b498
        ;   Label: LAB_004d6258
    MOV EDX,dword ptr [EBP + 0x1c4354c] ; 004d625e | DAT_01c4354c | DAT_01c43550
    XOR EAX,EAX                         ; 004d6264
    TEST EDI,EDI                        ; 004d6266
    JLE 0x004d628f                      ; 004d6268
        ;   XREF to: 004d628f (CONDITIONAL_JUMP)  ; LAB_004d628f
    MOV EBX,dword ptr [0x01cd0c84]      ; 004d626a | DAT_01cd0c84
        ;   Label: LAB_004d626a
    SUB EBX,EAX                         ; 004d6270
    IMUL EBX,EBX                        ; 004d6272
    MOV ECX,dword ptr [0x01cd0c88]      ; 004d6275 | DAT_01cd0c88
    SUB ECX,ESI                         ; 004d627b
    IMUL ECX,ECX                        ; 004d627d
    ADD ECX,EBX                         ; 004d6280
    CMP ECX,dword ptr [ESP]             ; 004d6282
    JG 0x004d62d8                       ; 004d6285
        ;   XREF to: 004d62d8 (CONDITIONAL_JUMP)  ; LAB_004d62d8
    INC EAX                             ; 004d6287
        ;   Label: LAB_004d6287
    ADD EDX,0x4                         ; 004d6288
    CMP EAX,EDI                         ; 004d628b
    JL 0x004d626a                       ; 004d628d
        ;   XREF to: 004d626a (CONDITIONAL_JUMP)  ; LAB_004d626a
    MOV ECX,dword ptr [0x0061b49c]      ; 004d628f | DAT_0061b49c
        ;   Label: LAB_004d628f
    ADD EBP,0x4                         ; 004d6295
    INC ESI                             ; 004d6298
    MOV dword ptr [0x0061b498],EDI      ; 004d6299 | DAT_0061b498
    CMP ESI,ECX                         ; 004d629f
    JL 0x004d6258                       ; 004d62a1
        ;   XREF to: 004d6258 (CONDITIONAL_JUMP)  ; LAB_004d6258
    MOV EDI,dword ptr [0x0061b498]      ; 004d62a3 | DAT_0061b498
        ;   Label: LAB_004d62a3
    ADD ESP,0x4                         ; 004d62a9
    POP EBP                             ; 004d62ac
    POP EDI                             ; 004d62ad
    POP ESI                             ; 004d62ae
    POP EBX                             ; 004d62af
    RET                                 ; 004d62b0
    MOV EAX,[0x0061b49c]                ; 004d62b1 | DAT_0061b49c
        ;   Label: LAB_004d62b1
    PUSH 0x0                            ; 004d62b6
    DEC EAX                             ; 004d62b8
    MOV EDI,dword ptr [0x0061b498]      ; 004d62b9 | DAT_0061b498
    PUSH EAX                            ; 004d62bf
    LEA EAX,[EDI + -0x1]                ; 004d62c0
    PUSH EAX                            ; 004d62c3
    PUSH 0x0                            ; 004d62c4
    PUSH 0x0                            ; 004d62c6
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004d62c8
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    MOV EDI,dword ptr [0x0061b498]      ; 004d62cd | DAT_0061b498
    ADD ESP,0x14                        ; 004d62d3
    JMP 0x004d62a3                      ; 004d62d6
        ;   XREF to: 004d62a3 (UNCONDITIONAL_JUMP)  ; LAB_004d62a3
    MOV dword ptr [EDX],0x0             ; 004d62d8
        ;   Label: LAB_004d62d8
    JMP 0x004d6287                      ; 004d62de
        ;   XREF to: 004d6287 (UNCONDITIONAL_JUMP)  ; LAB_004d6287

