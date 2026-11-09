; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_removeChatOut_FUN_0052c240(int index)
;
; Parameters:
; int              Stack[0x4]:4   index
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d6dfb8
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_string.c_memmove_FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c240
        ;   Label: core_netgame.cpp_removeChatOut_FUN_0052c240
    PUSH EDI                            ; 0052c241
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052c242
    TEST EBX,EBX                        ; 0052c246
    JL 0x0052c2ab                       ; 0052c248
        ;   XREF to: 0052c2ab (CONDITIONAL_JUMP)  ; LAB_0052c2ab
    CMP EBX,dword ptr [0x01d6dfb8]      ; 0052c24a | DAT_01d6dfb8
    JGE 0x0052c2ab                      ; 0052c250
        ;   XREF to: 0052c2ab (CONDITIONAL_JUMP)  ; LAB_0052c2ab
    MOV EDI,dword ptr [0x01d6dfb8]      ; 0052c252 | DAT_01d6dfb8
        ;   Label: LAB_0052c252
    DEC EDI                             ; 0052c258
    MOV EDX,EDI                         ; 0052c259
    SUB EDX,EBX                         ; 0052c25b
    MOV EAX,EDX                         ; 0052c25d
    SHL EAX,0x4                         ; 0052c25f
    ADD EAX,EDX                         ; 0052c262
    SHL EAX,0x2                         ; 0052c264
    ADD EAX,EDX                         ; 0052c267
    SHL EAX,0x2                         ; 0052c269
    LEA EDX,[EBX + 0x1]                 ; 0052c26c
    PUSH EAX                            ; 0052c26f
    MOV EAX,EDX                         ; 0052c270
    SHL EAX,0x4                         ; 0052c272
    ADD EAX,EDX                         ; 0052c275
    SHL EAX,0x2                         ; 0052c277
    ADD EAX,EDX                         ; 0052c27a
    SHL EAX,0x2                         ; 0052c27c
    ADD EAX,0x1d6dfbc                   ; 0052c27f
    PUSH EAX                            ; 0052c284
    MOV EAX,EBX                         ; 0052c285
    SHL EAX,0x4                         ; 0052c287
    ADD EAX,EBX                         ; 0052c28a
    SHL EAX,0x2                         ; 0052c28c
    ADD EAX,EBX                         ; 0052c28f
    SHL EAX,0x2                         ; 0052c291
    ADD EAX,0x1d6dfbc                   ; 0052c294
    PUSH EAX                            ; 0052c299
    MOV dword ptr [0x01d6dfb8],EDI      ; 0052c29a | DAT_01d6dfb8
    CALL crt_string.c_memmove_FUN_005c25d0 ; 0052c2a0
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0052c2a5
    POP EDI                             ; 0052c2a8
    POP EBX                             ; 0052c2a9
    RET                                 ; 0052c2aa
    PUSH ESI                            ; 0052c2ab
        ;   Label: LAB_0052c2ab
    MOV ECX,0x5eb5f8                    ; 0052c2ac
    MOV ESI,0x107                       ; 0052c2b1
    PUSH 0x5eb60c                       ; 0052c2b6
    MOV dword ptr [0x01d1d400],ECX      ; 0052c2bb | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0052c2c1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052c2c7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052c2cc
    POP ESI                             ; 0052c2cf
    JMP 0x0052c252                      ; 0052c2d0
        ;   XREF to: 0052c252 (UNCONDITIONAL_JUMP)  ; LAB_0052c252

