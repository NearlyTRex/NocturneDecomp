; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c2238(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   FUN_00479580 at 0047959c
;   FUN_004d6420 at 004d6451
;   FUN_004d6990 at 004d69cb
;   FUN_004d77d0 at 004d7851
;   FUN_004d85f0 at 004d8624
;   FUN_00543e00 at 00543e5b
;   FUN_00544190 at 0054423a
;   FUN_0054af20 at 0054b0a5
;   FUN_0054b2a0 at 0054b2c6
;
; Called Functions:
;   FUN_005c21f0
;   FUN_005c9080
;   FUN_005c90c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2238
        ;   Label: FUN_005c2238
    PUSH ESI                            ; 005c2239
    PUSH EDI                            ; 005c223a
    PUSH EBP                            ; 005c223b
    SUB ESP,0x4                         ; 005c223c
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c223f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005c2243
    MOV AH,byte ptr [EBX]               ; 005c2247
    TEST AH,AH                          ; 005c2249
    JZ 0x005c2267                       ; 005c224b
        ;   XREF to: 005c2267 (CONDITIONAL_JUMP)  ; LAB_005c2267
    MOV DL,byte ptr [EBX + 0x1]         ; 005c224d
    CMP DL,0x3a                         ; 005c2250
    JNZ 0x005c2267                      ; 005c2253
        ;   XREF to: 005c2267 (CONDITIONAL_JUMP)  ; LAB_005c2267
    TEST ESI,ESI                        ; 005c2255
    JZ 0x005c2262                       ; 005c2257
        ;   XREF to: 005c2262 (CONDITIONAL_JUMP)  ; LAB_005c2262
    MOV byte ptr [ESI + 0x2],0x0        ; 005c2259
    MOV byte ptr [ESI],AH               ; 005c225d
    MOV byte ptr [ESI + 0x1],DL         ; 005c225f
    ADD EBX,0x2                         ; 005c2262
        ;   Label: LAB_005c2262
    JMP 0x005c226e                      ; 005c2265
        ;   XREF to: 005c226e (UNCONDITIONAL_JUMP)  ; LAB_005c226e
    TEST ESI,ESI                        ; 005c2267
        ;   Label: LAB_005c2267
    JZ 0x005c226e                       ; 005c2269
        ;   XREF to: 005c226e (CONDITIONAL_JUMP)  ; LAB_005c226e
    MOV byte ptr [ESI],0x0              ; 005c226b
    MOV EBP,EBX                         ; 005c226e
        ;   Label: LAB_005c226e
    MOV dword ptr [ESP],EBX             ; 005c2270
    MOV DH,byte ptr [EBX]               ; 005c2273
    XOR EDI,EDI                         ; 005c2275
    TEST DH,DH                          ; 005c2277
    JZ 0x005c22ae                       ; 005c2279
        ;   XREF to: 005c22ae (CONDITIONAL_JUMP)  ; LAB_005c22ae
    PUSH EBX                            ; 005c227b
        ;   Label: LAB_005c227b
    CALL FUN_005c9080                   ; 005c227c
        ;   XREF to: 005c9080 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9080()
    MOV ESI,EAX                         ; 005c2281
    ADD ESP,0x4                         ; 005c2283
    CMP EAX,0x2e                        ; 005c2286
    JNZ 0x005c2290                      ; 005c2289
        ;   XREF to: 005c2290 (CONDITIONAL_JUMP)  ; LAB_005c2290
    MOV EDI,EBX                         ; 005c228b
    INC EBX                             ; 005c228d
    JMP 0x005c22a9                      ; 005c228e
        ;   XREF to: 005c22a9 (UNCONDITIONAL_JUMP)  ; LAB_005c22a9
    PUSH EBX                            ; 005c2290
        ;   Label: LAB_005c2290
    CALL FUN_005c90c0                   ; 005c2291
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c90c0()
    MOV EBX,EAX                         ; 005c2296
    ADD ESP,0x4                         ; 005c2298
    CMP ESI,0x5c                        ; 005c229b
    JZ 0x005c22a5                       ; 005c229e
        ;   XREF to: 005c22a5 (CONDITIONAL_JUMP)  ; LAB_005c22a5
    CMP ESI,0x2f                        ; 005c22a0
    JNZ 0x005c22a9                      ; 005c22a3
        ;   XREF to: 005c22a9 (CONDITIONAL_JUMP)  ; LAB_005c22a9
    MOV EBP,EBX                         ; 005c22a5
        ;   Label: LAB_005c22a5
    XOR EDI,EDI                         ; 005c22a7
    CMP byte ptr [EBX],0x0              ; 005c22a9
        ;   Label: LAB_005c22a9
    JNZ 0x005c227b                      ; 005c22ac
        ;   XREF to: 005c227b (CONDITIONAL_JUMP)  ; LAB_005c227b
    MOV EDX,dword ptr [ESP]             ; 005c22ae
        ;   Label: LAB_005c22ae
    MOV ESI,EBP                         ; 005c22b1
    PUSH 0xff                           ; 005c22b3
    SUB ESI,EDX                         ; 005c22b8
    PUSH ESI                            ; 005c22ba
    PUSH EDX                            ; 005c22bb
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005c22bc
    PUSH ESI                            ; 005c22c0
    CALL FUN_005c21f0                   ; 005c22c1
        ;   XREF to: 005c21f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c21f0()
    ADD ESP,0x10                        ; 005c22c6
    TEST EDI,EDI                        ; 005c22c9
    JNZ 0x005c22cf                      ; 005c22cb
        ;   XREF to: 005c22cf (CONDITIONAL_JUMP)  ; LAB_005c22cf
    MOV EDI,EBX                         ; 005c22cd
    MOV ESI,EDI                         ; 005c22cf
        ;   Label: LAB_005c22cf
    PUSH 0xff                           ; 005c22d1
    SUB ESI,EBP                         ; 005c22d6
    PUSH ESI                            ; 005c22d8
    PUSH EBP                            ; 005c22d9
    MOV EBP,dword ptr [ESP + 0x30]      ; 005c22da
    PUSH EBP                            ; 005c22de
    CALL FUN_005c21f0                   ; 005c22df
        ;   XREF to: 005c21f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c21f0()
    ADD ESP,0x10                        ; 005c22e4
    PUSH 0xff                           ; 005c22e7
    SUB EBX,EDI                         ; 005c22ec
    PUSH EBX                            ; 005c22ee
    PUSH EDI                            ; 005c22ef
    MOV EAX,dword ptr [ESP + 0x34]      ; 005c22f0
    PUSH EAX                            ; 005c22f4
    CALL FUN_005c21f0                   ; 005c22f5
        ;   XREF to: 005c21f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c21f0()
    ADD ESP,0x10                        ; 005c22fa
    ADD ESP,0x4                         ; 005c22fd
    POP EBP                             ; 005c2300
    POP EDI                             ; 005c2301
    POP ESI                             ; 005c2302
    POP EBX                             ; 005c2303
    RET                                 ; 005c2304

