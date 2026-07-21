; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_0049a960(void)
;
;
; XREF[1]:
;   FUN_0049cc10 at 0049cff1
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004015a0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0049a960
        ;   Label: core_game.cpp_CGame_drawScreenBorder_FUN_0049a960
    MOV EAX,[0x005b761c]                ; 0049a962 | DAT_005b761c
    PUSH EDX                            ; 0049a967
    DEC EAX                             ; 0049a968
    PUSH EAX                            ; 0049a969
    PUSH EDX                            ; 0049a96a
    PUSH EDX                            ; 0049a96b
    MOV dword ptr [0x01c00c70],EDX      ; 0049a96c | DAT_01c00c70
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049a972
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    ADD ESP,0x10                        ; 0049a977
    MOV EAX,[0x005b761c]                ; 0049a97a | DAT_005b761c
    PUSH 0x1                            ; 0049a97f
    SUB EAX,0x2                         ; 0049a981
    PUSH EAX                            ; 0049a984
    PUSH 0x1                            ; 0049a985
    PUSH 0x1                            ; 0049a987
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049a989
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    MOV EAX,[0x005b7620]                ; 0049a98e | DAT_005b7620
    ADD ESP,0x10                        ; 0049a993
    DEC EAX                             ; 0049a996
    MOV EDX,dword ptr [0x005b761c]      ; 0049a997 | DAT_005b761c
    PUSH EAX                            ; 0049a99d
    DEC EDX                             ; 0049a99e
    PUSH EDX                            ; 0049a99f
    PUSH EAX                            ; 0049a9a0
    PUSH 0x0                            ; 0049a9a1
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049a9a3
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    MOV EAX,[0x005b7620]                ; 0049a9a8 | DAT_005b7620
    ADD ESP,0x10                        ; 0049a9ad
    SUB EAX,0x2                         ; 0049a9b0
    MOV EDX,dword ptr [0x005b761c]      ; 0049a9b3 | DAT_005b761c
    PUSH EAX                            ; 0049a9b9
    SUB EDX,0x2                         ; 0049a9ba
    PUSH EDX                            ; 0049a9bd
    PUSH EAX                            ; 0049a9be
    PUSH 0x1                            ; 0049a9bf
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049a9c1
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    MOV EAX,[0x005b7620]                ; 0049a9c6 | DAT_005b7620
    ADD ESP,0x10                        ; 0049a9cb
    SUB EAX,0x2                         ; 0049a9ce
    PUSH EAX                            ; 0049a9d1
    PUSH 0x0                            ; 0049a9d2
    PUSH 0x1                            ; 0049a9d4
    PUSH 0x0                            ; 0049a9d6
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049a9d8
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    MOV EAX,[0x005b7620]                ; 0049a9dd | DAT_005b7620
    ADD ESP,0x10                        ; 0049a9e2
    SUB EAX,0x3                         ; 0049a9e5
    PUSH EAX                            ; 0049a9e8
    PUSH 0x1                            ; 0049a9e9
    PUSH 0x2                            ; 0049a9eb
    PUSH 0x1                            ; 0049a9ed
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049a9ef
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    MOV EAX,[0x005b7620]                ; 0049a9f4 | DAT_005b7620
    ADD ESP,0x10                        ; 0049a9f9
    SUB EAX,0x2                         ; 0049a9fc
    PUSH EAX                            ; 0049a9ff
    MOV EAX,[0x005b761c]                ; 0049aa00 | DAT_005b761c
    DEC EAX                             ; 0049aa05
    PUSH EAX                            ; 0049aa06
    PUSH 0x1                            ; 0049aa07
    PUSH EAX                            ; 0049aa09
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049aa0a
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    MOV EAX,[0x005b7620]                ; 0049aa0f | DAT_005b7620
    ADD ESP,0x10                        ; 0049aa14
    SUB EAX,0x3                         ; 0049aa17
    PUSH EAX                            ; 0049aa1a
    MOV EAX,[0x005b761c]                ; 0049aa1b | DAT_005b761c
    SUB EAX,0x2                         ; 0049aa20
    PUSH EAX                            ; 0049aa23
    PUSH 0x2                            ; 0049aa24
    PUSH EAX                            ; 0049aa26
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049aa27
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    ADD ESP,0x10                        ; 0049aa2c
    RET                                 ; 0049aa2f

