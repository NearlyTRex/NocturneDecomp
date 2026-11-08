; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005191d0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fac30
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141f0
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_007bda74
;   undefined4 DAT_0150f450
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01fc0e40
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0044fcc0
;   FUN_0046b960
;   FUN_0048e340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005191d0
        ;   Label: FUN_005191d0
    PUSH EBP                            ; 005191d1
    SUB ESP,0x3c                        ; 005191d2
    MOV EBP,dword ptr [ESP + 0x48]      ; 005191d5
    MOV EDX,dword ptr [0x0060b280]      ; 005191d9 | DAT_0060b280
    PUSH EDX                            ; 005191df | DAT_01ba5c50
    CALL FUN_0046b960                   ; 005191e0
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 005191e5
    TEST EAX,EAX                        ; 005191e8
    JNZ 0x0051921e                      ; 005191ea
        ;   XREF to: 0051921e (CONDITIONAL_JUMP)  ; LAB_0051921e
    CMP dword ptr [ESP + 0x4c],0x0      ; 005191ec
    JZ 0x0051921e                       ; 005191f1
        ;   XREF to: 0051921e (CONDITIONAL_JUMP)  ; LAB_0051921e
    CMP dword ptr [EBP + 0x61c],0x2     ; 005191f3
    JGE 0x00519205                      ; 005191fa
        ;   XREF to: 00519205 (CONDITIONAL_JUMP)  ; LAB_00519205
    CMP dword ptr [EBP + 0x624],0x0     ; 005191fc
    JZ 0x0051921e                       ; 00519203
        ;   XREF to: 0051921e (CONDITIONAL_JUMP)  ; LAB_0051921e
    CMP dword ptr [EBP + 0x624],0x0     ; 00519205
        ;   Label: LAB_00519205
    JZ 0x00519258                       ; 0051920c
        ;   XREF to: 00519258 (CONDITIONAL_JUMP)  ; LAB_00519258
    MOV EAX,dword ptr [EBP + 0x430]     ; 0051920e
    CMP EAX,0x3                         ; 00519214
    JZ 0x0051921e                       ; 00519217
        ;   XREF to: 0051921e (CONDITIONAL_JUMP)  ; LAB_0051921e
    CMP EAX,0x4                         ; 00519219
    JNZ 0x00519224                      ; 0051921c
        ;   XREF to: 00519224 (CONDITIONAL_JUMP)  ; LAB_00519224
    ADD ESP,0x3c                        ; 0051921e
        ;   Label: LAB_0051921e
    POP EBP                             ; 00519221
    POP EBX                             ; 00519222
    RET                                 ; 00519223
    LEA EAX,[EBP + 0x514]               ; 00519224
        ;   Label: LAB_00519224
    PUSH EAX                            ; 0051922a
    MOV ECX,dword ptr [0x006141f0]      ; 0051922b | DAT_006141f0
    PUSH ECX                            ; 00519231
    CALL FUN_0048e340                   ; 00519232
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00519237
    TEST EAX,EAX                        ; 0051923a
    JNZ 0x0051921e                      ; 0051923c
        ;   XREF to: 0051921e (CONDITIONAL_JUMP)  ; LAB_0051921e
    LEA EAX,[EBP + 0x4b0]               ; 0051923e
    PUSH EAX                            ; 00519244
    MOV EBX,dword ptr [0x006141f0]      ; 00519245 | DAT_006141f0
    PUSH EBX                            ; 0051924b
    CALL FUN_0048e340                   ; 0051924c
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00519251
    TEST EAX,EAX                        ; 00519254
    JNZ 0x0051921e                      ; 00519256
        ;   XREF to: 0051921e (CONDITIONAL_JUMP)  ; LAB_0051921e
    PUSH EDI                            ; 00519258
        ;   Label: LAB_00519258
    PUSH ESI                            ; 00519259
    MOV ESI,dword ptr [0x0060b280]      ; 0051925a | DAT_0060b280
    PUSH ESI                            ; 00519260 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 00519261
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00519266
    TEST EAX,EAX                        ; 00519269
    JNZ 0x00519284                      ; 0051926b
        ;   XREF to: 00519284 (CONDITIONAL_JUMP)  ; LAB_00519284
    CMP dword ptr [EBP + 0x624],0x0     ; 0051926d
    JNZ 0x0051936e                      ; 00519274
        ;   XREF to: 0051936e (CONDITIONAL_JUMP)  ; LAB_0051936e
    MOV dword ptr [EBP + 0x61c],0x3     ; 0051927a
    PUSH EBP                            ; 00519284
        ;   Label: LAB_00519284
    CALL FUN_004089d0                   ; 00519285
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 0051928a
    PUSH 0x0                            ; 0051928d
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 0051928f
    PUSH EBP                            ; 00519295
    LEA ESI,[ESP + 0x10]                ; 00519296
    LEA EDI,[ESP + 0x28]                ; 0051929a
    CALL dword ptr [EAX + 0x24]         ; 0051929e
    MOV ECX,0x6                         ; 005192a1
    ADD ESP,0x4                         ; 005192a6
    LEA EAX,[ESP + 0x24]                ; 005192a9
    LEA ESI,[ESP + 0xc]                 ; 005192ad
    PUSH EAX                            ; 005192b1
    MOVSD.REP ES:EDI,ESI                ; 005192b2
    CALL FUN_0041a840                   ; 005192b4
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 005192b9
    TEST EAX,EAX                        ; 005192bc
    JZ 0x0051935d                       ; 005192be
        ;   XREF to: 0051935d (CONDITIONAL_JUMP)  ; LAB_0051935d
    CMP dword ptr [EBP + 0x670],0x0     ; 005192c4
    JZ 0x0051937d                       ; 005192cb
        ;   XREF to: 0051937d (CONDITIONAL_JUMP)  ; LAB_0051937d
    MOV EDX,dword ptr [0x0060b280]      ; 005192d1 | DAT_0060b280
    PUSH EDX                            ; 005192d7 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 005192d8
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 005192dd
    TEST EAX,EAX                        ; 005192e0
    JNZ 0x0051937d                      ; 005192e2
        ;   XREF to: 0051937d (CONDITIONAL_JUMP)  ; LAB_0051937d
    MOV EAX,[0x0061b5a8]                ; 005192e8 | DAT_0061b5a8
    LEA EBX,[ESP + 0x38]                ; 005192ed
    MOV dword ptr [EAX + 0x15ac88],0x1  ; 005192f1 | DAT_01fc0e40
    LEA EAX,[EBP + 0x20]                ; 005192fb
    FLD float ptr [EAX]                 ; 005192fe
    FMUL float ptr [0x005fac30]         ; 00519300 | DAT_005fac30
    FISTP dword ptr [EBX]               ; 00519306
    FLD float ptr [EAX + 0x4]           ; 00519308
    FMUL float ptr [0x005fac30]         ; 0051930b | DAT_005fac30
    FISTP dword ptr [EBX + 0x4]         ; 00519311
    FLD float ptr [EAX + 0x8]           ; 00519314
    FMUL float ptr [0x005fac30]         ; 00519317 | DAT_005fac30
    FISTP dword ptr [EBX + 0x8]         ; 0051931d
    PUSH 0x0                            ; 00519320
    LEA EBX,[ESP + 0x3c]                ; 00519322
    MOV EAX,[0x007bda74]                ; 00519326 | DAT_007bda74
    PUSH EBX                            ; 0051932b
    MOV ESI,dword ptr [EAX + 0x3c]      ; 0051932c
    PUSH EAX                            ; 0051932f
    CALL dword ptr [ESI + 0x8]          ; 00519330
    ADD ESP,0xc                         ; 00519333
    PUSH -0x1                           ; 00519336
    MOV [0x0150f450],EAX                ; 00519338 | DAT_0150f450
    LEA EAX,[EBP + 0x2b4]               ; 0051933d
    PUSH 0x0                            ; 00519343
    PUSH EAX                            ; 00519345
    CALL FUN_0044fcc0                   ; 00519346
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    MOV EAX,[0x0061b5a8]                ; 0051934b | DAT_0061b5a8
    ADD ESP,0xc                         ; 00519350
    MOV dword ptr [EAX + 0x15ac88],0x0  ; 00519353 | DAT_01fc0e40
    PUSH EBP                            ; 0051935d
        ;   Label: LAB_0051935d
    CALL FUN_00408a10                   ; 0051935e
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 00519363
    POP ESI                             ; 00519366
    POP EDI                             ; 00519367
    ADD ESP,0x3c                        ; 00519368
    POP EBP                             ; 0051936b
    POP EBX                             ; 0051936c
    RET                                 ; 0051936d
    MOV dword ptr [EBP + 0x880],0x1     ; 0051936e
        ;   Label: LAB_0051936e
    JMP 0x00519284                      ; 00519378
        ;   XREF to: 00519284 (UNCONDITIONAL_JUMP)  ; LAB_00519284
    PUSH -0x1                           ; 0051937d
        ;   Label: LAB_0051937d
    LEA EAX,[EBP + 0x2b4]               ; 0051937f
    PUSH 0x0                            ; 00519385
    PUSH EAX                            ; 00519387
    CALL FUN_0044fcc0                   ; 00519388
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 0051938d
    PUSH EBP                            ; 00519390
    CALL FUN_00408a10                   ; 00519391
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 00519396
    POP ESI                             ; 00519399
    POP EDI                             ; 0051939a
    ADD ESP,0x3c                        ; 0051939b
    POP EBP                             ; 0051939e
    POP EBX                             ; 0051939f
    RET                                 ; 005193a0

