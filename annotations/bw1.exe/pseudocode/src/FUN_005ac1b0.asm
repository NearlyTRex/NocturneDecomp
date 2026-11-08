; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ac1b0(void)
;
;
; XREF[1]:
;   thunk_FUN_005ac1b0 at 00401120
;
; Referenced Globals:
;   undefined4 DAT_00629010
;   undefined4 DAT_0071362c
;   undefined4 DAT_02c99300
;   undefined4 DAT_02c99304
;   undefined4 DAT_02c99308
;   undefined4 DAT_02c9930c
;   undefined4 DAT_02c99310
;
; Called Functions:
;   FUN_00581f20
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac1b0
        ;   Label: FUN_005ac1b0
    PUSH ESI                            ; 005ac1b1
    PUSH EBP                            ; 005ac1b2
    MOV EDX,dword ptr [0x00629010]      ; 005ac1b3 | DAT_00629010
    TEST EDX,EDX                        ; 005ac1b9
    JNZ 0x005ac238                      ; 005ac1bb
        ;   XREF to: 005ac238 (CONDITIONAL_JUMP)  ; LAB_005ac238
    MOV ESI,dword ptr [0x02c99310]      ; 005ac1c1 | DAT_02c99310
        ;   Label: LAB_005ac1c1
    TEST ESI,ESI                        ; 005ac1c7
    JZ 0x005ac1dc                       ; 005ac1c9
        ;   XREF to: 005ac1dc (CONDITIONAL_JUMP)  ; LAB_005ac1dc
    PUSH ESI                            ; 005ac1cb
    CALL FUN_005c09f0                   ; 005ac1cc
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    XOR EBP,EBP                         ; 005ac1d1
    ADD ESP,0x4                         ; 005ac1d3
    MOV dword ptr [0x0071362c],EBP      ; 005ac1d6 | DAT_0071362c
    CALL FUN_00581f20                   ; 005ac1dc
        ;   XREF to: 00581f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00581f20()
        ;   Label: LAB_005ac1dc
    MOV EAX,[0x02c9930c]                ; 005ac1e1 | DAT_02c9930c
    TEST EAX,EAX                        ; 005ac1e6
    JZ 0x005ac1f8                       ; 005ac1e8
        ;   XREF to: 005ac1f8 (CONDITIONAL_JUMP)  ; LAB_005ac1f8
    PUSH EAX                            ; 005ac1ea
    MOV EDX,dword ptr [EAX]             ; 005ac1eb
    CALL dword ptr [EDX + 0x8]          ; 005ac1ed
    XOR EDX,EDX                         ; 005ac1f0
    MOV dword ptr [0x02c9930c],EDX      ; 005ac1f2 | DAT_02c9930c
    MOV ECX,dword ptr [0x02c99308]      ; 005ac1f8 | DAT_02c99308
        ;   Label: LAB_005ac1f8
    TEST ECX,ECX                        ; 005ac1fe
    JZ 0x005ac210                       ; 005ac200
        ;   XREF to: 005ac210 (CONDITIONAL_JUMP)  ; LAB_005ac210
    PUSH ECX                            ; 005ac202
    MOV EDX,dword ptr [ECX]             ; 005ac203
    XOR EBX,EBX                         ; 005ac205
    CALL dword ptr [EDX + 0x8]          ; 005ac207
    MOV dword ptr [0x02c99308],EBX      ; 005ac20a | DAT_02c99308
    MOV ESI,dword ptr [0x02c99304]      ; 005ac210 | DAT_02c99304
        ;   Label: LAB_005ac210
    TEST ESI,ESI                        ; 005ac216
    JZ 0x005ac22a                       ; 005ac218
        ;   XREF to: 005ac22a (CONDITIONAL_JUMP)  ; LAB_005ac22a
    PUSH EDI                            ; 005ac21a
    PUSH ESI                            ; 005ac21b
    MOV EDX,dword ptr [ESI]             ; 005ac21c
    XOR EDI,EDI                         ; 005ac21e
    CALL dword ptr [EDX + 0x8]          ; 005ac220
    MOV dword ptr [0x02c99304],EDI      ; 005ac223 | DAT_02c99304
    POP EDI                             ; 005ac229
    MOV EBP,dword ptr [0x02c99300]      ; 005ac22a | DAT_02c99300
        ;   Label: LAB_005ac22a
    TEST EBP,EBP                        ; 005ac230
    JNZ 0x005ac24e                      ; 005ac232
        ;   XREF to: 005ac24e (CONDITIONAL_JUMP)  ; LAB_005ac24e
    POP EBP                             ; 005ac234
    POP ESI                             ; 005ac235
    POP EBX                             ; 005ac236
    RET                                 ; 005ac237
    PUSH EDX                            ; 005ac238
        ;   Label: LAB_005ac238
    CALL FUN_005c09f0                   ; 005ac239
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    XOR EBX,EBX                         ; 005ac23e
    ADD ESP,0x4                         ; 005ac240
    MOV dword ptr [0x00629010],EBX      ; 005ac243 | DAT_00629010
    JMP 0x005ac1c1                      ; 005ac249
        ;   XREF to: 005ac1c1 (UNCONDITIONAL_JUMP)  ; LAB_005ac1c1
    PUSH EBP                            ; 005ac24e
        ;   Label: LAB_005ac24e
    MOV EDX,dword ptr [EBP]             ; 005ac24f
    CALL dword ptr [EDX + 0x4c]         ; 005ac252
    MOV EAX,[0x02c99300]                ; 005ac255 | DAT_02c99300
    PUSH EAX                            ; 005ac25a
    MOV EDX,dword ptr [EAX]             ; 005ac25b
    CALL dword ptr [EDX + 0x8]          ; 005ac25d
    XOR EAX,EAX                         ; 005ac260
    MOV [0x02c99300],EAX                ; 005ac262 | DAT_02c99300
    POP EBP                             ; 005ac267
    POP ESI                             ; 005ac268
    POP EBX                             ; 005ac269
    RET                                 ; 005ac26a

