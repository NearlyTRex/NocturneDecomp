; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_005ca282(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined1[12]   Stack[-0x34]:12  local_34
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_005c3228 at 005c3234
;   FUN_005c4359 at 005c4365
;
; Referenced Globals:
;   undefined4 DAT_00608560
;   undefined4 DAT_00608564
;
; Called Functions:
;   FUN_005c646c
;   FUN_005ca0c0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ca282
        ;   Label: FUN_005ca282
    MOV EBP,ESP                         ; 005ca283
    PUSH EBX                            ; 005ca285
    PUSH ESI                            ; 005ca286
    PUSH EDI                            ; 005ca287
    SUB ESP,0x24                        ; 005ca288
    MOV EDX,dword ptr [EBP + 0xc]       ; 005ca28b
    PUSH EDX                            ; 005ca28e
    LEA EAX,[EBP + -0x30]               ; 005ca28f
    PUSH EAX                            ; 005ca292
    MOV EBX,dword ptr [EBP + 0x8]       ; 005ca293
    PUSH EBX                            ; 005ca296
    CALL FUN_005ca0c0                   ; 005ca297
        ;   XREF to: 005ca0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ca0c0()
    MOV EBX,EAX                         ; 005ca29c
    ADD ESP,0xc                         ; 005ca29e
    TEST EAX,EAX                        ; 005ca2a1
    JNZ 0x005ca2b0                      ; 005ca2a3
        ;   XREF to: 005ca2b0 (CONDITIONAL_JUMP)  ; LAB_005ca2b0
    MOV dword ptr [EBP + -0x24],EAX     ; 005ca2a5
    MOV dword ptr [EBP + -0x20],EAX     ; 005ca2a8
        ;   Label: LAB_005ca2a8
    JMP 0x005ca35d                      ; 005ca2ab
        ;   XREF to: 005ca35d (UNCONDITIONAL_JUMP)  ; LAB_005ca35d
    MOV EAX,dword ptr [EBP + -0x28]     ; 005ca2b0
        ;   Label: LAB_005ca2b0
    AND AH,0x7f                         ; 005ca2b3
    AND EAX,0xffff                      ; 005ca2b6
    CMP EAX,0x43ff                      ; 005ca2bb
    JL 0x005ca2ec                       ; 005ca2c0
        ;   XREF to: 005ca2ec (CONDITIONAL_JUMP)  ; LAB_005ca2ec
    CALL FUN_005c646c                   ; 005ca2c2
        ;   XREF to: 005c646c (UNCONDITIONAL_CALL)  ; undefined FUN_005c646c()
    TEST byte ptr [EBP + -0x27],0x80    ; 005ca2c7
    JZ 0x005ca2dd                       ; 005ca2cb
        ;   XREF to: 005ca2dd (CONDITIONAL_JUMP)  ; LAB_005ca2dd
    FLD double ptr [0x00608560]         ; 005ca2cd | DAT_00608560
    FCHS                                ; 005ca2d3
    FSTP double ptr [EBP + -0x24]       ; 005ca2d5
    JMP 0x005ca35d                      ; 005ca2d8
        ;   XREF to: 005ca35d (UNCONDITIONAL_JUMP)  ; LAB_005ca35d
    MOV EAX,[0x00608560]                ; 005ca2dd | DAT_00608560
        ;   Label: LAB_005ca2dd
    MOV dword ptr [EBP + -0x24],EAX     ; 005ca2e2
    MOV EAX,[0x00608564]                ; 005ca2e5 | DAT_00608564
    JMP 0x005ca2a8                      ; 005ca2ea
        ;   XREF to: 005ca2a8 (UNCONDITIONAL_JUMP)  ; LAB_005ca2a8
    CMP EAX,0x3bcd                      ; 005ca2ec
        ;   Label: LAB_005ca2ec
    JGE 0x005ca335                      ; 005ca2f1
        ;   XREF to: 005ca335 (CONDITIONAL_JUMP)  ; LAB_005ca335
    CMP EAX,-0x34                       ; 005ca2f3
    JGE 0x005ca307                      ; 005ca2f6
        ;   XREF to: 005ca307 (CONDITIONAL_JUMP)  ; LAB_005ca307
    XOR EDI,EDI                         ; 005ca2f8
    CALL FUN_005c646c                   ; 005ca2fa
        ;   XREF to: 005c646c (UNCONDITIONAL_CALL)  ; undefined FUN_005c646c()
    MOV dword ptr [EBP + -0x24],EDI     ; 005ca2ff
    MOV dword ptr [EBP + -0x20],EDI     ; 005ca302
    JMP 0x005ca35d                      ; 005ca305
        ;   XREF to: 005ca35d (UNCONDITIONAL_JUMP)  ; LAB_005ca35d
    LEA EDX,[EBP + -0x24]               ; 005ca307
        ;   Label: LAB_005ca307
    LEA EAX,[EBP + -0x30]               ; 005ca30a
    FLD extended double ptr [EAX]       ; 005ca30d
    FSTP double ptr [EDX]               ; 005ca30f
    MOV EAX,dword ptr [EBP + -0x24]     ; 005ca311
    MOV dword ptr [EBP + -0x1c],EAX     ; 005ca314
    MOV EAX,dword ptr [EBP + -0x20]     ; 005ca317
    MOV ESI,dword ptr [EBP + -0x24]     ; 005ca31a
    MOV dword ptr [EBP + -0x18],EAX     ; 005ca31d
    TEST EAX,0x7fffffff                 ; 005ca320
    JNZ 0x005ca32b                      ; 005ca325
        ;   XREF to: 005ca32b (CONDITIONAL_JUMP)  ; LAB_005ca32b
    TEST ESI,ESI                        ; 005ca327
    JZ 0x005ca358                       ; 005ca329
        ;   XREF to: 005ca358 (CONDITIONAL_JUMP)  ; LAB_005ca358
    TEST word ptr [EBP + -0x16],0x7ff0  ; 005ca32b
        ;   Label: LAB_005ca32b
    JNZ 0x005ca35d                      ; 005ca331
        ;   XREF to: 005ca35d (CONDITIONAL_JUMP)  ; LAB_005ca35d
    JMP 0x005ca358                      ; 005ca333
        ;   XREF to: 005ca358 (UNCONDITIONAL_JUMP)  ; LAB_005ca358
    LEA EDX,[EBP + -0x24]               ; 005ca335
        ;   Label: LAB_005ca335
    LEA EAX,[EBP + -0x30]               ; 005ca338
    FLD extended double ptr [EAX]       ; 005ca33b
    FSTP double ptr [EDX]               ; 005ca33d
    CMP EBX,0x3                         ; 005ca33f
    JZ 0x005ca358                       ; 005ca342
        ;   XREF to: 005ca358 (CONDITIONAL_JUMP)  ; LAB_005ca358
    MOV EAX,dword ptr [EBP + -0x24]     ; 005ca344
    MOV dword ptr [EBP + -0x14],EAX     ; 005ca347
    MOV EAX,dword ptr [EBP + -0x20]     ; 005ca34a
    MOV dword ptr [EBP + -0x10],EAX     ; 005ca34d
    TEST word ptr [EBP + -0xe],0x7ff0   ; 005ca350
    JNZ 0x005ca35d                      ; 005ca356
        ;   XREF to: 005ca35d (CONDITIONAL_JUMP)  ; LAB_005ca35d
    CALL FUN_005c646c                   ; 005ca358
        ;   XREF to: 005c646c (UNCONDITIONAL_CALL)  ; undefined FUN_005c646c()
        ;   Label: LAB_005ca358
    MOV EAX,dword ptr [EBP + -0x24]     ; 005ca35d
        ;   Label: LAB_005ca35d
    MOV EDX,dword ptr [EBP + -0x20]     ; 005ca360
    JMP 0x005ca27a                      ; 005ca363
        ;   XREF to: 005ca27a (UNCONDITIONAL_JUMP)  ; LAB_005ca27a

