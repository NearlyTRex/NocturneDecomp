; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005ab1d0(LPCSTR param_1,undefined4 *param_2)
;
;
; Called Functions:
;   crt_time.c__localtime_FUN_005a5628
;   crt_unknown.c_FUN_005ab46c
;   crt_unknown.c_FUN_005aefa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab1d0
        ;   Label: crt_unknown.c_FUN_005ab1d0
    PUSH ESI                            ; 005ab1d1
    PUSH EDI                            ; 005ab1d2
    SUB ESP,0x48                        ; 005ab1d3
    MOV EDI,dword ptr [ESP + 0x5c]      ; 005ab1d6
    PUSH 0x0                            ; 005ab1da
    PUSH 0x0                            ; 005ab1dc
    PUSH 0x3                            ; 005ab1de
    PUSH 0x0                            ; 005ab1e0
    PUSH 0x0                            ; 005ab1e2
    PUSH 0xc0000000                     ; 005ab1e4
    MOV EDX,dword ptr [ESP + 0x70]      ; 005ab1e9
    PUSH EDX                            ; 005ab1ed
    CALL dword ptr CS:[0x5b3524]        ; 005ab1ee
    MOV EBX,EAX                         ; 005ab1f5
    MOV ESI,EAX                         ; 005ab1f7
    CMP EAX,-0x1                        ; 005ab1f9
    JNZ 0x005ab208                      ; 005ab1fc
        ;   XREF to: 005ab208 (CONDITIONAL_JUMP)  ; LAB_005ab208
    CALL crt_unknown.c_FUN_005ab46c     ; 005ab1fe
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    JMP 0x005ab33f                      ; 005ab203
        ;   XREF to: 005ab33f (UNCONDITIONAL_JUMP)  ; LAB_005ab33f
    LEA EAX,[ESP + 0x20]                ; 005ab208
        ;   Label: LAB_005ab208
    PUSH EAX                            ; 005ab20c
    LEA EAX,[ESP + 0x44]                ; 005ab20d
    PUSH EAX                            ; 005ab211
    LEA EAX,[ESP + 0x38]                ; 005ab212
    PUSH EAX                            ; 005ab216
    PUSH EBX                            ; 005ab217
    CALL dword ptr CS:[0x5b35a4]        ; 005ab218
    TEST EAX,EAX                        ; 005ab21f
    JNZ 0x005ab237                      ; 005ab221
        ;   XREF to: 005ab237 (CONDITIONAL_JUMP)  ; LAB_005ab237
    PUSH EBX                            ; 005ab223
    CALL dword ptr CS:[0x5b3518]        ; 005ab224
    CALL crt_unknown.c_FUN_005ab46c     ; 005ab22b
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    ADD ESP,0x48                        ; 005ab230
    POP EDI                             ; 005ab233
    POP ESI                             ; 005ab234
    POP EBX                             ; 005ab235
    RET                                 ; 005ab236
    TEST EDI,EDI                        ; 005ab237
        ;   Label: LAB_005ab237
    JNZ 0x005ab250                      ; 005ab239
        ;   XREF to: 005ab250 (CONDITIONAL_JUMP)  ; LAB_005ab250
    PUSH EDI                            ; 005ab23b
    CALL crt_unknown.c_FUN_005aefa0     ; 005ab23c
        ;   XREF to: 005aefa0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aefa0()
    ADD ESP,0x4                         ; 005ab241
    LEA EDI,[ESP + 0x38]                ; 005ab244
    MOV dword ptr [ESP + 0x3c],EAX      ; 005ab248
    MOV dword ptr [ESP + 0x38],EAX      ; 005ab24c
    LEA EAX,[EDI + 0x4]                 ; 005ab250
        ;   Label: LAB_005ab250
    PUSH EAX                            ; 005ab253
    CALL crt_time.c__localtime_FUN_005a5628 ; 005ab254
        ;   XREF to: 005a5628 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_005a5628(time_t * timer)
    MOV EDX,EAX                         ; 005ab259
    MOV AX,word ptr [EAX + 0x14]        ; 005ab25b
    ADD ESP,0x4                         ; 005ab25f
    ADD EAX,0x76c                       ; 005ab262
    MOV word ptr [ESP + 0x10],AX        ; 005ab267
    MOV word ptr [ESP],AX               ; 005ab26c
    MOV AX,word ptr [EDX + 0x10]        ; 005ab270
    INC EAX                             ; 005ab274
    MOV word ptr [ESP + 0x12],AX        ; 005ab275
    MOV word ptr [ESP + 0x2],AX         ; 005ab27a
    MOV AX,word ptr [EDX + 0xc]         ; 005ab27f
    MOV word ptr [ESP + 0x16],AX        ; 005ab283
    MOV word ptr [ESP + 0x6],AX         ; 005ab288
    MOV AX,word ptr [EDX + 0x8]         ; 005ab28d
    MOV word ptr [ESP + 0x18],AX        ; 005ab291
    MOV word ptr [ESP + 0x8],AX         ; 005ab296
    MOV AX,word ptr [EDX + 0x4]         ; 005ab29b
    MOV word ptr [ESP + 0x1a],AX        ; 005ab29f
    MOV word ptr [ESP + 0xa],AX         ; 005ab2a4
    MOV AX,word ptr [EDX]               ; 005ab2a9
    MOV word ptr [ESP + 0x1c],AX        ; 005ab2ac
    MOV word ptr [ESP + 0xc],AX         ; 005ab2b1
    LEA EAX,[ESP + 0x28]                ; 005ab2b6
    PUSH EAX                            ; 005ab2ba
    LEA EAX,[ESP + 0x4]                 ; 005ab2bb
    XOR EDX,EDX                         ; 005ab2bf
    PUSH EAX                            ; 005ab2c1
    MOV word ptr [ESP + 0x26],DX        ; 005ab2c2
    MOV word ptr [ESP + 0x16],DX        ; 005ab2c7
    CALL dword ptr CS:[0x5b365c]        ; 005ab2cc
    LEA EAX,[ESP + 0x20]                ; 005ab2d3
    PUSH EAX                            ; 005ab2d7
    LEA EAX,[ESP + 0x2c]                ; 005ab2d8
    PUSH EAX                            ; 005ab2dc
    CALL dword ptr CS:[0x5b35fc]        ; 005ab2dd
    LEA EAX,[ESP + 0x28]                ; 005ab2e4
    PUSH EAX                            ; 005ab2e8
    LEA EAX,[ESP + 0x14]                ; 005ab2e9
    PUSH EAX                            ; 005ab2ed
    CALL dword ptr CS:[0x5b365c]        ; 005ab2ee
    LEA EAX,[ESP + 0x40]                ; 005ab2f5
    PUSH EAX                            ; 005ab2f9
    LEA EAX,[ESP + 0x2c]                ; 005ab2fa
    PUSH EAX                            ; 005ab2fe
    CALL dword ptr CS:[0x5b35fc]        ; 005ab2ff
    LEA EAX,[ESP + 0x20]                ; 005ab306
    PUSH EAX                            ; 005ab30a
    LEA EAX,[ESP + 0x44]                ; 005ab30b
    PUSH EAX                            ; 005ab30f
    LEA EAX,[ESP + 0x38]                ; 005ab310
    PUSH EAX                            ; 005ab314
    PUSH ESI                            ; 005ab315
    CALL dword ptr CS:[0x5b3644]        ; 005ab316
    TEST EAX,EAX                        ; 005ab31d
    JNZ 0x005ab335                      ; 005ab31f
        ;   XREF to: 005ab335 (CONDITIONAL_JUMP)  ; LAB_005ab335
    PUSH ESI                            ; 005ab321
    CALL dword ptr CS:[0x5b3518]        ; 005ab322
    CALL crt_unknown.c_FUN_005ab46c     ; 005ab329
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    ADD ESP,0x48                        ; 005ab32e
    POP EDI                             ; 005ab331
    POP ESI                             ; 005ab332
    POP EBX                             ; 005ab333
    RET                                 ; 005ab334
    PUSH ESI                            ; 005ab335
        ;   Label: LAB_005ab335
    CALL dword ptr CS:[0x5b3518]        ; 005ab336
    XOR EAX,EAX                         ; 005ab33d
    ADD ESP,0x48                        ; 005ab33f
        ;   Label: LAB_005ab33f
    POP EDI                             ; 005ab342
    POP ESI                             ; 005ab343
    POP EBX                             ; 005ab344
    RET                                 ; 005ab345

