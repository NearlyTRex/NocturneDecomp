; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processFudge_FUN_0049b260(int param_1)
;
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049de22
;
; Referenced Globals:
;   double DOUBLE_005823fa = 0.100000000000000
;   undefined4 DAT_005bac64
;   undefined4 DAT_01cc30e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b260
        ;   Label: core_game.cpp_CGame_processFudge_FUN_0049b260
    PUSH EBP                            ; 0049b261
    MOV EBP,ESP                         ; 0049b262
    SUB ESP,0xc                         ; 0049b264
    AND ESP,0xfffffff8                  ; 0049b267
    MOV EBX,dword ptr [EBP + 0xc]       ; 0049b26a
    PUSH 0x1d                           ; 0049b26d
    MOV EAX,[0x005bac64]                ; 0049b26f | DAT_005bac64
    PUSH EAX                            ; 0049b274 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049b275 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0049b277
    ADD ESP,0x8                         ; 0049b279
    TEST EAX,EAX                        ; 0049b27c
    JZ 0x0049b289                       ; 0049b27e
        ;   XREF to: 0049b289 (CONDITIONAL_JUMP)  ; LAB_0049b289
    CMP dword ptr [EBX + 0x9bc],0x0     ; 0049b280
    JNZ 0x0049b28e                      ; 0049b287
        ;   XREF to: 0049b28e (CONDITIONAL_JUMP)  ; LAB_0049b28e
    MOV ESP,EBP                         ; 0049b289
        ;   Label: LAB_0049b289
    POP EBP                             ; 0049b28b
    POP EBX                             ; 0049b28c
    RET                                 ; 0049b28d
    MOV EAX,dword ptr [EBX + 0x9c0]     ; 0049b28e
        ;   Label: LAB_0049b28e
    PUSH 0x38                           ; 0049b294
    MOV dword ptr [ESP + 0x4],EAX       ; 0049b296
    MOV EAX,[0x005bac64]                ; 0049b29a | DAT_005bac64
    PUSH EAX                            ; 0049b29f | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049b2a0 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0049b2a2
    ADD ESP,0x8                         ; 0049b2a4
    TEST EAX,EAX                        ; 0049b2a7
    JZ 0x0049b2bb                       ; 0049b2a9
        ;   XREF to: 0049b2bb (CONDITIONAL_JUMP)  ; LAB_0049b2bb
    FLD float ptr [ESP]                 ; 0049b2ab
    FLD ST0                             ; 0049b2ae
    FMUL double ptr [0x005823fa]        ; 0049b2b0 | DOUBLE_005823fa
    FSTP ST1                            ; 0049b2b6
    FSTP float ptr [ESP]                ; 0049b2b8
    PUSH 0x4b                           ; 0049b2bb
        ;   Label: LAB_0049b2bb
    MOV EAX,[0x005bac64]                ; 0049b2bd | DAT_005bac64
    PUSH EAX                            ; 0049b2c2 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049b2c3 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049b2c5
    ADD ESP,0x8                         ; 0049b2c8
    TEST EAX,EAX                        ; 0049b2cb
    JZ 0x0049b2dc                       ; 0049b2cd
        ;   XREF to: 0049b2dc (CONDITIONAL_JUMP)  ; LAB_0049b2dc
    MOV EAX,dword ptr [EBX + 0x9bc]     ; 0049b2cf
    FLD float ptr [EAX]                 ; 0049b2d5
    FSUB float ptr [ESP]                ; 0049b2d7
    FSTP float ptr [EAX]                ; 0049b2da
    PUSH 0x4d                           ; 0049b2dc
        ;   Label: LAB_0049b2dc
    MOV EAX,[0x005bac64]                ; 0049b2de | DAT_005bac64
    PUSH EAX                            ; 0049b2e3 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049b2e4 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049b2e6
    ADD ESP,0x8                         ; 0049b2e9
    TEST EAX,EAX                        ; 0049b2ec
    JZ 0x0049b2fd                       ; 0049b2ee
        ;   XREF to: 0049b2fd (CONDITIONAL_JUMP)  ; LAB_0049b2fd
    MOV EAX,dword ptr [EBX + 0x9bc]     ; 0049b2f0
    FLD float ptr [EAX]                 ; 0049b2f6
    FADD float ptr [ESP]                ; 0049b2f8
    FSTP float ptr [EAX]                ; 0049b2fb
    PUSH 0x48                           ; 0049b2fd
        ;   Label: LAB_0049b2fd
    MOV EAX,[0x005bac64]                ; 0049b2ff | DAT_005bac64
    PUSH EAX                            ; 0049b304 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049b305 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049b307
    ADD ESP,0x8                         ; 0049b30a
    TEST EAX,EAX                        ; 0049b30d
    JZ 0x0049b320                       ; 0049b30f
        ;   XREF to: 0049b320 (CONDITIONAL_JUMP)  ; LAB_0049b320
    MOV EAX,dword ptr [EBX + 0x9bc]     ; 0049b311
    FLD float ptr [EAX + 0x8]           ; 0049b317
    FSUB float ptr [ESP]                ; 0049b31a
    FSTP float ptr [EAX + 0x8]          ; 0049b31d
    PUSH 0x50                           ; 0049b320
        ;   Label: LAB_0049b320
    MOV EAX,[0x005bac64]                ; 0049b322 | DAT_005bac64
    PUSH EAX                            ; 0049b327 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049b328 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049b32a
    ADD ESP,0x8                         ; 0049b32d
    TEST EAX,EAX                        ; 0049b330
    JZ 0x0049b343                       ; 0049b332
        ;   XREF to: 0049b343 (CONDITIONAL_JUMP)  ; LAB_0049b343
    MOV EAX,dword ptr [EBX + 0x9bc]     ; 0049b334
    FLD float ptr [EAX + 0x8]           ; 0049b33a
    FADD float ptr [ESP]                ; 0049b33d
    FSTP float ptr [EAX + 0x8]          ; 0049b340
    PUSH 0x1e                           ; 0049b343
        ;   Label: LAB_0049b343
    MOV EAX,[0x005bac64]                ; 0049b345 | DAT_005bac64
    PUSH EAX                            ; 0049b34a | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049b34b | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049b34d
    ADD ESP,0x8                         ; 0049b350
    TEST EAX,EAX                        ; 0049b353
    JZ 0x0049b366                       ; 0049b355
        ;   XREF to: 0049b366 (CONDITIONAL_JUMP)  ; LAB_0049b366
    MOV EAX,dword ptr [EBX + 0x9bc]     ; 0049b357
    FLD float ptr [EAX + 0x4]           ; 0049b35d
    FSUB float ptr [ESP]                ; 0049b360
    FSTP float ptr [EAX + 0x4]          ; 0049b363
    PUSH 0x10                           ; 0049b366
        ;   Label: LAB_0049b366
    MOV EAX,[0x005bac64]                ; 0049b368 | DAT_005bac64
    PUSH EAX                            ; 0049b36d | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049b36e | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049b370
    ADD ESP,0x8                         ; 0049b373
    TEST EAX,EAX                        ; 0049b376
    JZ 0x0049b289                       ; 0049b378
        ;   XREF to: 0049b289 (CONDITIONAL_JUMP)  ; LAB_0049b289
    MOV EAX,dword ptr [EBX + 0x9bc]     ; 0049b37e
    FLD float ptr [EAX + 0x4]           ; 0049b384
    FADD float ptr [ESP]                ; 0049b387
    FSTP float ptr [EAX + 0x4]          ; 0049b38a
    MOV ESP,EBP                         ; 0049b38d
    POP EBP                             ; 0049b38f
    POP EBX                             ; 0049b390
    RET                                 ; 0049b391

