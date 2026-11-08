; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_0040c160(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[120]:
;   FUN_004080a0 at 004080b5
;   FUN_0040db60 at 0040db7b
;   FUN_0040e050 at 0040e06b
;   FUN_0040e570 at 0040e58b
;   FUN_0040e980 at 0040e99b
;   FUN_0040ee50 at 0040ee6b
;   FUN_0040f180 at 0040f19b
;   FUN_004107d0 at 004107eb
;   FUN_00410a50 at 00410a6b
;   FUN_004111b0 at 004111cb
;   ... and 110 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005d2d63
;   TerminatedCString s_Too_many_actor_types_005d2d75
;   undefined4 DAT_00626114
;   undefined4 DAT_007c3044
;   undefined4 DAT_007c3048
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c0820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c160
        ;   Label: FUN_0040c160
    PUSH ESI                            ; 0040c161
    PUSH EDI                            ; 0040c162
    PUSH EBP                            ; 0040c163
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c164
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040c168
    MOV EDI,EBP                         ; 0040c16c
    PUSH EDI                            ; 0040c16e
    MOV AL,byte ptr [ESI]               ; 0040c16f
        ;   Label: LAB_0040c16f
    MOV byte ptr [EDI],AL               ; 0040c171
    CMP AL,0x0                          ; 0040c173
    JZ 0x0040c187                       ; 0040c175
        ;   XREF to: 0040c187 (CONDITIONAL_JUMP)  ; LAB_0040c187
    MOV AL,byte ptr [ESI + 0x1]         ; 0040c177
    ADD ESI,0x2                         ; 0040c17a
    MOV byte ptr [EDI + 0x1],AL         ; 0040c17d
    ADD EDI,0x2                         ; 0040c180
    CMP AL,0x0                          ; 0040c183
    JNZ 0x0040c16f                      ; 0040c185
        ;   XREF to: 0040c16f (CONDITIONAL_JUMP)  ; LAB_0040c16f
    POP EDI                             ; 0040c187
        ;   Label: LAB_0040c187
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040c188
    MOV dword ptr [EBP + 0x2c],EAX      ; 0040c18c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040c18f
    MOV dword ptr [EBP + 0x30],EAX      ; 0040c193
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040c196
    XOR EBX,EBX                         ; 0040c19a
    MOV dword ptr [EBP + 0x34],EAX      ; 0040c19c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0040c19f
    MOV ESI,EBP                         ; 0040c1a3
    MOV dword ptr [EBP + 0x28],EAX      ; 0040c1a5
    XOR EAX,EAX                         ; 0040c1a8
        ;   Label: LAB_0040c1a8
    MOV AL,byte ptr [ESI]               ; 0040c1aa
    INC ESI                             ; 0040c1ac
    TEST EAX,EAX                        ; 0040c1ad
    JNZ 0x0040c1de                      ; 0040c1af
        ;   XREF to: 0040c1de (CONDITIONAL_JUMP)  ; LAB_0040c1de
    MOV EDX,dword ptr [0x007c3044]      ; 0040c1b1 | DAT_007c3044
    MOV dword ptr [EBP + 0x38],EBX      ; 0040c1b7
    CMP EDX,0xc8                        ; 0040c1ba
    JGE 0x0040c20f                      ; 0040c1c0
        ;   XREF to: 0040c20f (CONDITIONAL_JUMP)  ; LAB_0040c20f
    MOV EAX,[0x007c3044]                ; 0040c1c2 | DAT_007c3044
        ;   Label: LAB_0040c1c2
    LEA ESI,[EAX + 0x1]                 ; 0040c1c7
    MOV dword ptr [EAX*0x4 + 0x7c3048],EBP ; 0040c1ca | DAT_007c3048
    MOV dword ptr [0x007c3044],ESI      ; 0040c1d1 | DAT_007c3044
    MOV EAX,EBP                         ; 0040c1d7
    POP EBP                             ; 0040c1d9
    POP EDI                             ; 0040c1da
    POP ESI                             ; 0040c1db
    POP EBX                             ; 0040c1dc
    RET                                 ; 0040c1dd
    MOV DL,AL                           ; 0040c1de
        ;   Label: LAB_0040c1de
    INC DL                              ; 0040c1e0
    AND EDX,0xff                        ; 0040c1e2
    TEST byte ptr [EDX + 0x626114],0xe0 ; 0040c1e8 | DAT_00626114
    JZ 0x0040c1a8                       ; 0040c1ef
        ;   XREF to: 0040c1a8 (CONDITIONAL_JUMP)  ; LAB_0040c1a8
    PUSH EAX                            ; 0040c1f1
    CALL FUN_005c0820                   ; 0040c1f2
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0820()
    MOV EDX,EBX                         ; 0040c1f7
    SHL EDX,0x7                         ; 0040c1f9
    SHR EBX,0x19                        ; 0040c1fc
    ADD EDX,EBX                         ; 0040c1ff
    MOV EBX,EAX                         ; 0040c201
    SHL EBX,0x11                        ; 0040c203
    ADD EBX,EDX                         ; 0040c206
    ADD ESP,0x4                         ; 0040c208
    ADD EBX,EAX                         ; 0040c20b
    JMP 0x0040c1a8                      ; 0040c20d
        ;   XREF to: 0040c1a8 (UNCONDITIONAL_JUMP)  ; LAB_0040c1a8
    MOV ECX,0x5d2d63                    ; 0040c20f | = "..\\core\\actor.cpp"
        ;   Label: LAB_0040c20f
    MOV EBX,0xa61                       ; 0040c214
    PUSH 0x5d2d75                       ; 0040c219 | = "Too many actor types!"
    MOV dword ptr [0x01d1d400],ECX      ; 0040c21e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0040c224 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0040c22a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0040c22f
    JMP 0x0040c1c2                      ; 0040c232
        ;   XREF to: 0040c1c2 (UNCONDITIONAL_JUMP)  ; LAB_0040c1c2

