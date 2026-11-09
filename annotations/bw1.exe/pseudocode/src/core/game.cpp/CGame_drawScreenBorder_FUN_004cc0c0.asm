; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_004cc0c0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004ce580 at 004ce990
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011a0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004cc0c0
        ;   Label: core_game.cpp_CGame_drawScreenBorder_FUN_004cc0c0
    MOV EAX,[0x0061b498]                ; 004cc0c2 | DAT_0061b498
    PUSH EDX                            ; 004cc0c7
    DEC EAX                             ; 004cc0c8
    PUSH EAX                            ; 004cc0c9
    PUSH EDX                            ; 004cc0ca
    PUSH EDX                            ; 004cc0cb
    MOV dword ptr [0x01c4f020],EDX      ; 004cc0cc | DAT_01c4f020
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 004cc0d2
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004cc0d7
    MOV EAX,[0x0061b498]                ; 004cc0da | DAT_0061b498
    PUSH 0x1                            ; 004cc0df
    SUB EAX,0x2                         ; 004cc0e1
    PUSH EAX                            ; 004cc0e4
    PUSH 0x1                            ; 004cc0e5
    PUSH 0x1                            ; 004cc0e7
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 004cc0e9
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    MOV EAX,[0x0061b49c]                ; 004cc0ee | DAT_0061b49c
    ADD ESP,0x10                        ; 004cc0f3
    DEC EAX                             ; 004cc0f6
    MOV EDX,dword ptr [0x0061b498]      ; 004cc0f7 | DAT_0061b498
    PUSH EAX                            ; 004cc0fd
    DEC EDX                             ; 004cc0fe
    PUSH EDX                            ; 004cc0ff
    PUSH EAX                            ; 004cc100
    PUSH 0x0                            ; 004cc101
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 004cc103
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    MOV EAX,[0x0061b49c]                ; 004cc108 | DAT_0061b49c
    ADD ESP,0x10                        ; 004cc10d
    SUB EAX,0x2                         ; 004cc110
    MOV EDX,dword ptr [0x0061b498]      ; 004cc113 | DAT_0061b498
    PUSH EAX                            ; 004cc119
    SUB EDX,0x2                         ; 004cc11a
    PUSH EDX                            ; 004cc11d
    PUSH EAX                            ; 004cc11e
    PUSH 0x1                            ; 004cc11f
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 004cc121
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    MOV EAX,[0x0061b49c]                ; 004cc126 | DAT_0061b49c
    ADD ESP,0x10                        ; 004cc12b
    SUB EAX,0x2                         ; 004cc12e
    PUSH EAX                            ; 004cc131
    PUSH 0x0                            ; 004cc132
    PUSH 0x1                            ; 004cc134
    PUSH 0x0                            ; 004cc136
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 004cc138
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    MOV EAX,[0x0061b49c]                ; 004cc13d | DAT_0061b49c
    ADD ESP,0x10                        ; 004cc142
    SUB EAX,0x3                         ; 004cc145
    PUSH EAX                            ; 004cc148
    PUSH 0x1                            ; 004cc149
    PUSH 0x2                            ; 004cc14b
    PUSH 0x1                            ; 004cc14d
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 004cc14f
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    MOV EAX,[0x0061b49c]                ; 004cc154 | DAT_0061b49c
    ADD ESP,0x10                        ; 004cc159
    SUB EAX,0x2                         ; 004cc15c
    PUSH EAX                            ; 004cc15f
    MOV EAX,[0x0061b498]                ; 004cc160 | DAT_0061b498
    DEC EAX                             ; 004cc165
    PUSH EAX                            ; 004cc166
    PUSH 0x1                            ; 004cc167
    PUSH EAX                            ; 004cc169
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 004cc16a
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    MOV EAX,[0x0061b49c]                ; 004cc16f | DAT_0061b49c
    ADD ESP,0x10                        ; 004cc174
    SUB EAX,0x3                         ; 004cc177
    PUSH EAX                            ; 004cc17a
    MOV EAX,[0x0061b498]                ; 004cc17b | DAT_0061b498
    SUB EAX,0x2                         ; 004cc180
    PUSH EAX                            ; 004cc183
    PUSH 0x2                            ; 004cc184
    PUSH EAX                            ; 004cc186
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 004cc187
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004cc18c
    RET                                 ; 004cc18f

