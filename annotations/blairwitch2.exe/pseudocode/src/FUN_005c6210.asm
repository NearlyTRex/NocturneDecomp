; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c6210(CHAR *param_1)
;
;
; XREF[1]:
;   FUN_005c59e0 at 005c5b0e
;
; Referenced Globals:
;   undefined4 DAT_026807e8
;
; Called Functions:
;   FUN_005b8580
;   FUN_005b86a0
;   FUN_005c0300
;   FUN_005c5810
;   FUN_005c63dc
;   FUN_005c68e0
;   FUN_005c6910
;   FUN_005c6b44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6210
        ;   Label: FUN_005c6210
    PUSH ESI                            ; 005c6211
    PUSH EDI                            ; 005c6212
    PUSH EBP                            ; 005c6213
    SUB ESP,0x14                        ; 005c6214
    MOV EDX,0x2                         ; 005c6217
    PUSH 0x3d                           ; 005c621c
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005c621e
    MOV EBX,0x1                         ; 005c6222
    PUSH ECX                            ; 005c6227
    MOV dword ptr [ESP + 0xc],EDX       ; 005c6228
    MOV dword ptr [ESP + 0x8],EBX       ; 005c622c
    CALL FUN_005c5810                   ; 005c6230
        ;   XREF to: 005c5810 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5810()
    MOV EBP,EAX                         ; 005c6235
    ADD ESP,0x8                         ; 005c6237
    TEST EAX,EAX                        ; 005c623a
    JNZ 0x005c6248                      ; 005c623c
        ;   XREF to: 005c6248 (CONDITIONAL_JUMP)  ; LAB_005c6248
    MOV EAX,0xffffffff                  ; 005c623e
    JMP 0x005c63d4                      ; 005c6243
        ;   XREF to: 005c63d4 (UNCONDITIONAL_JUMP)  ; LAB_005c63d4
    MOV ESI,dword ptr [ESP + 0x28]      ; 005c6248
        ;   Label: LAB_005c6248
    CMP EAX,ESI                         ; 005c624c
    JNZ 0x005c625d                      ; 005c624e
        ;   XREF to: 005c625d (CONDITIONAL_JUMP)  ; LAB_005c625d
    MOV EAX,0xffffffff                  ; 005c6250
    ADD ESP,0x14                        ; 005c6255
    POP EBP                             ; 005c6258
    POP EDI                             ; 005c6259
    POP ESI                             ; 005c625a
    POP EBX                             ; 005c625b
    RET                                 ; 005c625c
    SUB EAX,ESI                         ; 005c625d
        ;   Label: LAB_005c625d
    MOV dword ptr [ESP + 0x10],EAX      ; 005c625f
    ADD EAX,EBX                         ; 005c6263
    PUSH EAX                            ; 005c6265
    CALL FUN_005b8580                   ; 005c6266
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 005c626b
    MOV EBX,EAX                         ; 005c626e
    MOV dword ptr [ESP + 0x8],EAX       ; 005c6270
    TEST EAX,EAX                        ; 005c6274
    JNZ 0x005c6285                      ; 005c6276
        ;   XREF to: 005c6285 (CONDITIONAL_JUMP)  ; LAB_005c6285
    MOV EAX,0xffffffff                  ; 005c6278
    ADD ESP,0x14                        ; 005c627d
    POP EBP                             ; 005c6280
    POP EDI                             ; 005c6281
    POP ESI                             ; 005c6282
    POP EBX                             ; 005c6283
    RET                                 ; 005c6284
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c6285
        ;   Label: LAB_005c6285
    MOV EDI,EAX                         ; 005c6289
    PUSH ES                             ; 005c628b
    MOV AX,DS                           ; 005c628c
    MOV ES,AX                           ; 005c628e
    PUSH EDI                            ; 005c6290
    MOV EAX,ECX                         ; 005c6291
    SHR ECX,0x2                         ; 005c6293
    MOVSD.REP ES:EDI,ESI                ; 005c6296
    MOV CL,AL                           ; 005c6298
    AND CL,0x3                          ; 005c629a
    MOVSB.REP ES:EDI,ESI                ; 005c629d
    POP EDI                             ; 005c629f
    POP ES                              ; 005c62a0
    LEA ESI,[EBP + 0x1]                 ; 005c62a1
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c62a4
    PUSH ESI                            ; 005c62a8
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005c62a9
    CALL FUN_005c68e0                   ; 005c62ad
        ;   XREF to: 005c68e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c68e0()
    MOV EBP,EAX                         ; 005c62b2
    ADD ESP,0x4                         ; 005c62b4
    TEST EAX,EAX                        ; 005c62b7
    JZ 0x005c62ff                       ; 005c62b9
        ;   XREF to: 005c62ff (CONDITIONAL_JUMP)  ; LAB_005c62ff
    INC EAX                             ; 005c62bb
    PUSH EAX                            ; 005c62bc
    CALL FUN_005b8580                   ; 005c62bd
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 005c62c2
    MOV EDX,EAX                         ; 005c62c5
    MOV dword ptr [ESP + 0xc],EAX       ; 005c62c7
    TEST EAX,EAX                        ; 005c62cb
    JNZ 0x005c62df                      ; 005c62cd
        ;   XREF to: 005c62df (CONDITIONAL_JUMP)  ; LAB_005c62df
    PUSH EBX                            ; 005c62cf
    CALL FUN_005b86a0                   ; 005c62d0
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    MOV EAX,0xffffffff                  ; 005c62d5
    JMP 0x005c63d1                      ; 005c62da
        ;   XREF to: 005c63d1 (UNCONDITIONAL_JUMP)  ; LAB_005c63d1
    MOV ECX,EBP                         ; 005c62df
        ;   Label: LAB_005c62df
    MOV EDI,EAX                         ; 005c62e1
    PUSH ES                             ; 005c62e3
    MOV AX,DS                           ; 005c62e4
    MOV ES,AX                           ; 005c62e6
    PUSH EDI                            ; 005c62e8
    MOV EAX,ECX                         ; 005c62e9
    SHR ECX,0x2                         ; 005c62eb
    MOVSD.REP ES:EDI,ESI                ; 005c62ee
    MOV CL,AL                           ; 005c62f0
    AND CL,0x3                          ; 005c62f2
    MOVSB.REP ES:EDI,ESI                ; 005c62f5
    POP EDI                             ; 005c62f7
    POP ES                              ; 005c62f8
    MOV byte ptr [EDX + EBP*0x1],0x0    ; 005c62f9
    JMP 0x005c6303                      ; 005c62fd
        ;   XREF to: 005c6303 (UNCONDITIONAL_JUMP)  ; LAB_005c6303
    MOV dword ptr [ESP + 0xc],EAX       ; 005c62ff
        ;   Label: LAB_005c62ff
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c6303
        ;   Label: LAB_005c6303
    PUSH EAX                            ; 005c6307
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c6308
    PUSH EDX                            ; 005c630c
    CALL dword ptr CS:[0x5c861c]        ; 005c630d
    MOV ECX,dword ptr [ESP + 0x8]       ; 005c6314
    PUSH ECX                            ; 005c6318
    MOV EBX,EAX                         ; 005c6319
    CALL FUN_005b86a0                   ; 005c631b
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 005c6320
    MOV ESI,dword ptr [ESP + 0xc]       ; 005c6323
    PUSH ESI                            ; 005c6327
    CALL FUN_005b86a0                   ; 005c6328
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 005c632d
    TEST EBX,EBX                        ; 005c6330
    JNZ 0x005c6341                      ; 005c6332
        ;   XREF to: 005c6341 (CONDITIONAL_JUMP)  ; LAB_005c6341
    MOV EAX,0xffffffff                  ; 005c6334
    ADD ESP,0x14                        ; 005c6339
    POP EBP                             ; 005c633c
    POP EDI                             ; 005c633d
    POP ESI                             ; 005c633e
    POP EBX                             ; 005c633f
    RET                                 ; 005c6340
    MOV EDI,dword ptr [ESP + 0x28]      ; 005c6341
        ;   Label: LAB_005c6341
    PUSH EDI                            ; 005c6345
    CALL FUN_005c63dc                   ; 005c6346
        ;   XREF to: 005c63dc (UNCONDITIONAL_CALL)  ; undefined FUN_005c63dc()
    ADD ESP,0x4                         ; 005c634b
    TEST EAX,EAX                        ; 005c634e
    JZ 0x005c635f                       ; 005c6350
        ;   XREF to: 005c635f (CONDITIONAL_JUMP)  ; LAB_005c635f
    MOV EAX,0xffffffff                  ; 005c6352
    ADD ESP,0x14                        ; 005c6357
    POP EBP                             ; 005c635a
    POP EDI                             ; 005c635b
    POP ESI                             ; 005c635c
    POP EBX                             ; 005c635d
    RET                                 ; 005c635e
    CMP dword ptr [0x026807e8],0x0      ; 005c635f | DAT_026807e8
        ;   Label: LAB_005c635f
    JZ 0x005c63d4                       ; 005c6366
        ;   XREF to: 005c63d4 (CONDITIONAL_JUMP)  ; LAB_005c63d4
    PUSH EDI                            ; 005c6368
    CALL FUN_005c68e0                   ; 005c6369
        ;   XREF to: 005c68e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c68e0()
    ADD ESP,0x4                         ; 005c636e
    LEA ESI,[EAX + 0x1]                 ; 005c6371
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c6374
    IMUL EAX,ESI                        ; 005c6378
    PUSH EAX                            ; 005c637b
    CALL FUN_005b8580                   ; 005c637c
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    MOV EBX,EAX                         ; 005c6381
    ADD ESP,0x4                         ; 005c6383
    TEST EAX,EAX                        ; 005c6386
    JNZ 0x005c63a1                      ; 005c6388
        ;   XREF to: 005c63a1 (CONDITIONAL_JUMP)  ; LAB_005c63a1
    PUSH 0x5                            ; 005c638a
    CALL FUN_005c0300                   ; 005c638c
        ;   XREF to: 005c0300 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0300()
    MOV EAX,0xffffffff                  ; 005c6391
    ADD ESP,0x4                         ; 005c6396
    ADD ESP,0x14                        ; 005c6399
    POP EBP                             ; 005c639c
    POP EDI                             ; 005c639d
    POP ESI                             ; 005c639e
    POP EBX                             ; 005c639f
    RET                                 ; 005c63a0
    IMUL ESI,dword ptr [ESP]            ; 005c63a1
        ;   Label: LAB_005c63a1
    PUSH ESI                            ; 005c63a5
    PUSH EDI                            ; 005c63a6
    PUSH EAX                            ; 005c63a7
    CALL FUN_005c6910                   ; 005c63a8
        ;   XREF to: 005c6910 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6910()
    ADD ESP,0xc                         ; 005c63ad
    CMP EAX,-0x1                        ; 005c63b0
    JNZ 0x005c63cb                      ; 005c63b3
        ;   XREF to: 005c63cb (CONDITIONAL_JUMP)  ; LAB_005c63cb
    PUSH EBX                            ; 005c63b5
    CALL FUN_005b86a0                   ; 005c63b6
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    MOV EAX,0xffffffff                  ; 005c63bb
    ADD ESP,0x4                         ; 005c63c0
    ADD ESP,0x14                        ; 005c63c3
    POP EBP                             ; 005c63c6
    POP EDI                             ; 005c63c7
    POP ESI                             ; 005c63c8
    POP EBX                             ; 005c63c9
    RET                                 ; 005c63ca
    PUSH EBX                            ; 005c63cb
        ;   Label: LAB_005c63cb
    CALL FUN_005c6b44                   ; 005c63cc
        ;   XREF to: 005c6b44 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6b44()
    ADD ESP,0x4                         ; 005c63d1
        ;   Label: LAB_005c63d1
    ADD ESP,0x14                        ; 005c63d4
        ;   Label: LAB_005c63d4
    POP EBP                             ; 005c63d7
    POP EDI                             ; 005c63d8
    POP ESI                             ; 005c63d9
    POP EBX                             ; 005c63da
    RET                                 ; 005c63db

