; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPWSTR FUN_100081e0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_10016ff0
;   undefined4 DAT_10017770
;   void* PTR_FreeEnvironmentStringsA_1024221c = 00242560
;   void* PTR_MultiByteToWideChar_10242220 = 0024257a
;   void* PTR_GetEnvironmentStrings_10242224 = 00242590
;   void* PTR_FreeEnvironmentStringsW_10242228 = 002425a8
;   void* PTR_GetEnvironmentStringsW_1024222c = 002425c2
;
; Called Functions:
;   FreeEnvironmentStringsA
;   FreeEnvironmentStringsW
;   FUN_10005b30
;   FUN_10008830
;   FUN_1000a930
;   GetEnvironmentStrings
;   GetEnvironmentStringsW
;   MultiByteToWideChar
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 100081e0
        ;   Label: FUN_100081e0
    PUSH EBX                            ; 100081e3
    PUSH ESI                            ; 100081e4
    PUSH EDI                            ; 100081e5
    XOR EBX,EBX                         ; 100081e6
    PUSH EBP                            ; 100081e8
    MOV ESI,dword ptr [0x1024222c]      ; 100081e9 | PTR_GetEnvironmentStringsW_1024222c
    MOV dword ptr [ESP + 0x14],EBX      ; 100081ef
    CMP dword ptr [0x10016ff0],EBX      ; 100081f3 | DAT_10016ff0
    JNZ 0x10008231                      ; 100081f9
        ;   XREF to: 10008231 (CONDITIONAL_JUMP)  ; LAB_10008231
    CALL ESI                            ; 100081fb | LPWCH GetEnvironmentStringsW()
    MOV EBX,EAX                         ; 100081fd
    TEST EBX,EBX                        ; 100081ff
    JZ 0x1000820f                       ; 10008201
        ;   XREF to: 1000820f (CONDITIONAL_JUMP)  ; LAB_1000820f
    MOV dword ptr [0x10016ff0],0x1      ; 10008203 | DAT_10016ff0
    JMP 0x10008231                      ; 1000820d
        ;   XREF to: 10008231 (UNCONDITIONAL_JUMP)  ; LAB_10008231
    CALL dword ptr [0x10242224]         ; 1000820f | PTR_GetEnvironmentStrings_10242224
        ;   Label: LAB_1000820f
    MOV EBX,EAX                         ; 10008215
    TEST EBX,EBX                        ; 10008217
    JZ 0x10008227                       ; 10008219
        ;   XREF to: 10008227 (CONDITIONAL_JUMP)  ; LAB_10008227
    MOV dword ptr [0x10016ff0],0x2      ; 1000821b | DAT_10016ff0
    JMP 0x10008231                      ; 10008225
        ;   XREF to: 10008231 (UNCONDITIONAL_JUMP)  ; LAB_10008231
    XOR EAX,EAX                         ; 10008227
        ;   Label: LAB_10008227
    POP EBP                             ; 10008229
    POP EDI                             ; 1000822a
    POP ESI                             ; 1000822b
    POP EBX                             ; 1000822c
    ADD ESP,0x8                         ; 1000822d
    RET                                 ; 10008230
    CMP dword ptr [0x10016ff0],0x1      ; 10008231 | DAT_10016ff0
        ;   Label: LAB_10008231
    JNZ 0x100082be                      ; 10008238
        ;   XREF to: 100082be (CONDITIONAL_JUMP)  ; LAB_100082be
    TEST EBX,EBX                        ; 1000823e
    JNZ 0x10008254                      ; 10008240
        ;   XREF to: 10008254 (CONDITIONAL_JUMP)  ; LAB_10008254
    CALL ESI                            ; 10008242 | LPWCH GetEnvironmentStringsW()
    MOV EBX,EAX                         ; 10008244
    TEST EBX,EBX                        ; 10008246
    JNZ 0x10008254                      ; 10008248
        ;   XREF to: 10008254 (CONDITIONAL_JUMP)  ; LAB_10008254
    XOR EAX,EAX                         ; 1000824a
    POP EBP                             ; 1000824c
    POP EDI                             ; 1000824d
    POP ESI                             ; 1000824e
    POP EBX                             ; 1000824f
    ADD ESP,0x8                         ; 10008250
    RET                                 ; 10008253
    CMP word ptr [EBX],0x0              ; 10008254
        ;   Label: LAB_10008254
    MOV EBP,EBX                         ; 10008258
    JZ 0x10008270                       ; 1000825a
        ;   XREF to: 10008270 (CONDITIONAL_JUMP)  ; LAB_10008270
    ADD EBP,0x2                         ; 1000825c
        ;   Label: LAB_1000825c
    CMP word ptr [EBP],0x0              ; 1000825f
    JNZ 0x1000825c                      ; 10008264
        ;   XREF to: 1000825c (CONDITIONAL_JUMP)  ; LAB_1000825c
    ADD EBP,0x2                         ; 10008266
    CMP word ptr [EBP],0x0              ; 10008269
    JNZ 0x1000825c                      ; 1000826e
        ;   XREF to: 1000825c (CONDITIONAL_JUMP)  ; LAB_1000825c
    SUB EBP,EBX                         ; 10008270
        ;   Label: LAB_10008270
    ADD EBP,0x2                         ; 10008272
    PUSH EBP                            ; 10008275
    CALL FUN_10008830                   ; 10008276
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    MOV dword ptr [ESP + 0x14],EAX      ; 1000827b
    ADD ESP,0x4                         ; 1000827f
    TEST EAX,EAX                        ; 10008282
    JNZ 0x10008297                      ; 10008284
        ;   XREF to: 10008297 (CONDITIONAL_JUMP)  ; LAB_10008297
    PUSH EBX                            ; 10008286
    CALL dword ptr [0x10242228]         ; 10008287 | PTR_FreeEnvironmentStringsW_10242228
    XOR EAX,EAX                         ; 1000828d
    POP EBP                             ; 1000828f
    POP EDI                             ; 10008290
    POP ESI                             ; 10008291
    POP EBX                             ; 10008292
    ADD ESP,0x8                         ; 10008293
    RET                                 ; 10008296
    MOV EDI,dword ptr [ESP + 0x10]      ; 10008297
        ;   Label: LAB_10008297
    MOV ESI,EBX                         ; 1000829b
    MOV ECX,EBP                         ; 1000829d
    SHR ECX,0x2                         ; 1000829f
    MOVSD.REP ES:EDI,ESI                ; 100082a2
    MOV ECX,EBP                         ; 100082a4
    PUSH EBX                            ; 100082a6
    AND ECX,0x3                         ; 100082a7
    MOVSB.REP ES:EDI,ESI                ; 100082aa
    CALL dword ptr [0x10242228]         ; 100082ac | PTR_FreeEnvironmentStringsW_10242228
    MOV EAX,dword ptr [ESP + 0x10]      ; 100082b2
    POP EBP                             ; 100082b6
    POP EDI                             ; 100082b7
    POP ESI                             ; 100082b8
    POP EBX                             ; 100082b9
    ADD ESP,0x8                         ; 100082ba
    RET                                 ; 100082bd
    CMP dword ptr [0x10016ff0],0x2      ; 100082be | DAT_10016ff0
        ;   Label: LAB_100082be
    JNZ 0x100083b7                      ; 100082c5
        ;   XREF to: 100083b7 (CONDITIONAL_JUMP)  ; LAB_100083b7
    TEST EBX,EBX                        ; 100082cb
    JNZ 0x100082e5                      ; 100082cd
        ;   XREF to: 100082e5 (CONDITIONAL_JUMP)  ; LAB_100082e5
    CALL dword ptr [0x10242224]         ; 100082cf | PTR_GetEnvironmentStrings_10242224
    MOV EBX,EAX                         ; 100082d5
    TEST EBX,EBX                        ; 100082d7
    JNZ 0x100082e5                      ; 100082d9
        ;   XREF to: 100082e5 (CONDITIONAL_JUMP)  ; LAB_100082e5
    XOR EAX,EAX                         ; 100082db
    POP EBP                             ; 100082dd
    POP EDI                             ; 100082de
    POP ESI                             ; 100082df
    POP EBX                             ; 100082e0
    ADD ESP,0x8                         ; 100082e1
    RET                                 ; 100082e4
    MOV ESI,EBX                         ; 100082e5
        ;   Label: LAB_100082e5
    CMP byte ptr [EBX],0x0              ; 100082e7
    JZ 0x1000831d                       ; 100082ea
        ;   XREF to: 1000831d (CONDITIONAL_JUMP)  ; LAB_1000831d
    PUSH 0x0                            ; 100082ec
        ;   Label: LAB_100082ec
    MOV EAX,[0x10017770]                ; 100082ee | DAT_10017770
    PUSH 0x0                            ; 100082f3
    PUSH -0x1                           ; 100082f5
    PUSH ESI                            ; 100082f7
    PUSH 0x1                            ; 100082f8
    PUSH EAX                            ; 100082fa
    CALL dword ptr [0x10242220]         ; 100082fb | PTR_MultiByteToWideChar_10242220
    TEST EAX,EAX                        ; 10008301
    JZ 0x10008349                       ; 10008303
        ;   XREF to: 10008349 (CONDITIONAL_JUMP)  ; LAB_10008349
    MOV EDI,ESI                         ; 10008305
    MOV ECX,0xffffffff                  ; 10008307
    ADD dword ptr [ESP + 0x14],EAX      ; 1000830c
    SUB EAX,EAX                         ; 10008310
    SCASB.REPNE ES:EDI                  ; 10008312
    NOT ECX                             ; 10008314
    ADD ESI,ECX                         ; 10008316
    CMP byte ptr [ESI],0x0              ; 10008318
    JNZ 0x100082ec                      ; 1000831b
        ;   XREF to: 100082ec (CONDITIONAL_JUMP)  ; LAB_100082ec
    INC dword ptr [ESP + 0x14]          ; 1000831d
        ;   Label: LAB_1000831d
    MOV EAX,dword ptr [ESP + 0x14]      ; 10008321
    ADD EAX,EAX                         ; 10008325
    PUSH EAX                            ; 10008327
    CALL FUN_10008830                   ; 10008328
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    MOV dword ptr [ESP + 0x14],EAX      ; 1000832d
    ADD ESP,0x4                         ; 10008331
    TEST EAX,EAX                        ; 10008334
    JNZ 0x10008353                      ; 10008336
        ;   XREF to: 10008353 (CONDITIONAL_JUMP)  ; LAB_10008353
    PUSH EBX                            ; 10008338
    CALL dword ptr [0x1024221c]         ; 10008339 | PTR_FreeEnvironmentStringsA_1024221c
    XOR EAX,EAX                         ; 1000833f
    POP EBP                             ; 10008341
    POP EDI                             ; 10008342
    POP ESI                             ; 10008343
    POP EBX                             ; 10008344
    ADD ESP,0x8                         ; 10008345
    RET                                 ; 10008348
    XOR EAX,EAX                         ; 10008349
        ;   Label: LAB_10008349
    POP EBP                             ; 1000834b
    POP EDI                             ; 1000834c
    POP ESI                             ; 1000834d
    POP EBX                             ; 1000834e
    ADD ESP,0x8                         ; 1000834f
    RET                                 ; 10008352
    MOV ESI,EBX                         ; 10008353
        ;   Label: LAB_10008353
    MOV EBP,dword ptr [ESP + 0x10]      ; 10008355
    CMP byte ptr [EBX],0x0              ; 10008359
    JZ 0x100083a6                       ; 1000835c
        ;   XREF to: 100083a6 (CONDITIONAL_JUMP)  ; LAB_100083a6
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000835e
        ;   Label: LAB_1000835e
    MOV ECX,EBP                         ; 10008362
    SUB ECX,dword ptr [ESP + 0x10]      ; 10008364
    MOV EDX,dword ptr [0x10017770]      ; 10008368 | DAT_10017770
    SAR ECX,0x1                         ; 1000836e
    SUB EAX,ECX                         ; 10008371
    PUSH EAX                            ; 10008373
    PUSH EBP                            ; 10008374
    PUSH -0x1                           ; 10008375
    PUSH ESI                            ; 10008377
    PUSH 0x1                            ; 10008378
    PUSH EDX                            ; 1000837a
    CALL dword ptr [0x10242220]         ; 1000837b | PTR_MultiByteToWideChar_10242220
    TEST EAX,EAX                        ; 10008381
    JZ 0x100083bf                       ; 10008383
        ;   XREF to: 100083bf (CONDITIONAL_JUMP)  ; LAB_100083bf
    MOV EDI,ESI                         ; 10008385
    MOV ECX,0xffffffff                  ; 10008387
    SUB EAX,EAX                         ; 1000838c
    PUSH EBP                            ; 1000838e
    SCASB.REPNE ES:EDI                  ; 1000838f
    NOT ECX                             ; 10008391
    ADD ESI,ECX                         ; 10008393
    CALL FUN_1000a930                   ; 10008395
        ;   XREF to: 1000a930 (UNCONDITIONAL_CALL)  ; undefined FUN_1000a930()
    ADD ESP,0x4                         ; 1000839a
    LEA EBP,[EBP + EAX*0x2 + 0x2]       ; 1000839d
    CMP byte ptr [ESI],0x0              ; 100083a1
    JNZ 0x1000835e                      ; 100083a4
        ;   XREF to: 1000835e (CONDITIONAL_JUMP)  ; LAB_1000835e
    MOV word ptr [EBP],0x0              ; 100083a6
        ;   Label: LAB_100083a6
    PUSH EBX                            ; 100083ac
    CALL dword ptr [0x1024221c]         ; 100083ad | PTR_FreeEnvironmentStringsA_1024221c
    MOV EAX,dword ptr [ESP + 0x10]      ; 100083b3
    POP EBP                             ; 100083b7
        ;   Label: LAB_100083b7
    POP EDI                             ; 100083b8
    POP ESI                             ; 100083b9
    POP EBX                             ; 100083ba
    ADD ESP,0x8                         ; 100083bb
    RET                                 ; 100083be
    MOV EAX,dword ptr [ESP + 0x10]      ; 100083bf
        ;   Label: LAB_100083bf
    PUSH EAX                            ; 100083c3
    CALL FUN_10005b30                   ; 100083c4
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 100083c9
    PUSH EBX                            ; 100083cc
    CALL dword ptr [0x1024221c]         ; 100083cd | PTR_FreeEnvironmentStringsA_1024221c
    XOR EAX,EAX                         ; 100083d3
    POP EBP                             ; 100083d5
    POP EDI                             ; 100083d6
    POP ESI                             ; 100083d7
    POP EBX                             ; 100083d8
    ADD ESP,0x8                         ; 100083d9
    RET                                 ; 100083dc

