; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c0250(LPCSTR param_1)
;
; Local Variables:
; undefined4       Stack[-0x148]:4  local_148
;
; XREF[1]:
;   FUN_005b99e0 at 005b99e6
;
; Referenced Globals:
;   void* PTR_FindFirstFileA_005c8548 = 001c8d42
;
; Called Functions:
;   FindFirstFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0250
        ;   Label: FUN_005c0250
    PUSH ESI                            ; 005c0251
    SUB ESP,0x140                       ; 005c0252
    MOV EBX,dword ptr [ESP + 0x14c]     ; 005c0258
    MOV DL,0x2a                         ; 005c025f
    MOV ESI,EBX                         ; 005c0261
    MOV AL,byte ptr [ESI]               ; 005c0263
        ;   Label: LAB_005c0263
    CMP AL,DL                           ; 005c0265
    JZ 0x005c027b                       ; 005c0267
        ;   XREF to: 005c027b (CONDITIONAL_JUMP)  ; LAB_005c027b
    CMP AL,0x0                          ; 005c0269
    JZ 0x005c0279                       ; 005c026b
        ;   XREF to: 005c0279 (CONDITIONAL_JUMP)  ; LAB_005c0279
    INC ESI                             ; 005c026d
    MOV AL,byte ptr [ESI]               ; 005c026e
    CMP AL,DL                           ; 005c0270
    JZ 0x005c027b                       ; 005c0272
        ;   XREF to: 005c027b (CONDITIONAL_JUMP)  ; LAB_005c027b
    INC ESI                             ; 005c0274
    CMP AL,0x0                          ; 005c0275
    JNZ 0x005c0263                      ; 005c0277
        ;   XREF to: 005c0263 (CONDITIONAL_JUMP)  ; LAB_005c0263
    SUB ESI,ESI                         ; 005c0279
        ;   Label: LAB_005c0279
    TEST ESI,ESI                        ; 005c027b
        ;   Label: LAB_005c027b
    JNZ 0x005c029f                      ; 005c027d
        ;   XREF to: 005c029f (CONDITIONAL_JUMP)  ; LAB_005c029f
    MOV DL,0x3f                         ; 005c027f
    MOV ESI,EBX                         ; 005c0281
    MOV AL,byte ptr [ESI]               ; 005c0283
        ;   Label: LAB_005c0283
    CMP AL,DL                           ; 005c0285
    JZ 0x005c029b                       ; 005c0287
        ;   XREF to: 005c029b (CONDITIONAL_JUMP)  ; LAB_005c029b
    CMP AL,0x0                          ; 005c0289
    JZ 0x005c0299                       ; 005c028b
        ;   XREF to: 005c0299 (CONDITIONAL_JUMP)  ; LAB_005c0299
    INC ESI                             ; 005c028d
    MOV AL,byte ptr [ESI]               ; 005c028e
    CMP AL,DL                           ; 005c0290
    JZ 0x005c029b                       ; 005c0292
        ;   XREF to: 005c029b (CONDITIONAL_JUMP)  ; LAB_005c029b
    INC ESI                             ; 005c0294
    CMP AL,0x0                          ; 005c0295
    JNZ 0x005c0283                      ; 005c0297
        ;   XREF to: 005c0283 (CONDITIONAL_JUMP)  ; LAB_005c0283
    SUB ESI,ESI                         ; 005c0299
        ;   Label: LAB_005c0299
    TEST ESI,ESI                        ; 005c029b
        ;   Label: LAB_005c029b
    JZ 0x005c02a6                       ; 005c029d
        ;   XREF to: 005c02a6 (CONDITIONAL_JUMP)  ; LAB_005c02a6
    MOV EAX,0xffffffff                  ; 005c029f
        ;   Label: LAB_005c029f
    JMP 0x005c02b9                      ; 005c02a4
        ;   XREF to: 005c02b9 (UNCONDITIONAL_JUMP)  ; LAB_005c02b9
    MOV EAX,ESP                         ; 005c02a6
        ;   Label: LAB_005c02a6
    PUSH EAX                            ; 005c02a8
    PUSH EBX                            ; 005c02a9
    CALL dword ptr CS:[0x5c8548]        ; 005c02aa | PTR_FindFirstFileA_005c8548
    CMP EAX,-0x1                        ; 005c02b1
    JZ 0x005c02b9                       ; 005c02b4
        ;   XREF to: 005c02b9 (CONDITIONAL_JUMP)  ; LAB_005c02b9
    MOV EAX,dword ptr [ESP]             ; 005c02b6
    ADD ESP,0x140                       ; 005c02b9
        ;   Label: LAB_005c02b9
    POP ESI                             ; 005c02bf
    POP EBX                             ; 005c02c0
    RET                                 ; 005c02c1

