; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl crt_stdio_c_fseek_FUN_005b929c(undefined4 *param_1,int param_2,uint param_3)
;
;
; XREF[18]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00516f30 at 0051711c
;   cockpit_pkbmpset.cpp_FUN_00517a60 at 00517b1a
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0043e930 at 0043f150
;   core_game.cpp_FUN_004bbf70 at 004bc182
;   crt_unknown.c_FUN_005b8f9c at 005b9096
;   engine_dosio.cpp_FUN_00460c70 at 00460d19
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_00519f00 at 0051a30e
;   engine_pod.cpp_FUN_00519dc0 at 00519dfb
;   engine_pod.cpp_FUN_0051aa7e at 0051aafd
;   engine_pod.cpp_FUN_0051ad50 at 0051adf6
;   ... and 8 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   crt_unknown.c_FUN_005b9240
;   crt_unknown.c_FUN_005b9284
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005bea80
;   crt_unknown.c_FUN_005bebb0
;   crt_unknown.c_FUN_005bf250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b929c
        ;   Label: crt_stdio.c_fseek_FUN_005b929c
    PUSH ESI                            ; 005b929d
    PUSH EDI                            ; 005b929e
    PUSH EBP                            ; 005b929f
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b92a0
    MOV ESI,dword ptr [ESP + 0x18]      ; 005b92a4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005b92a8
    MOV EDX,dword ptr [EBX + 0x10]      ; 005b92ac
    PUSH EDX                            ; 005b92af
    CALL dword ptr [0x0061f2a8]         ; 005b92b0 | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV AH,byte ptr [EBX + 0xc]         ; 005b92b6
    ADD ESP,0x4                         ; 005b92b9
    TEST AH,0x6                         ; 005b92bc
    JZ 0x005b934f                       ; 005b92bf
        ;   XREF to: 005b934f (CONDITIONAL_JUMP)  ; LAB_005b934f
    TEST byte ptr [EBX + 0xd],0x10      ; 005b92c5
    JZ 0x005b9301                       ; 005b92c9
        ;   XREF to: 005b9301 (CONDITIONAL_JUMP)  ; LAB_005b9301
    PUSH EBX                            ; 005b92cb
    CALL crt_unknown.c_FUN_005bea80     ; 005b92cc
        ;   XREF to: 005bea80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bea80()
    ADD ESP,0x4                         ; 005b92d1
    TEST EAX,EAX                        ; 005b92d4
    JZ 0x005b9318                       ; 005b92d6
        ;   XREF to: 005b9318 (CONDITIONAL_JUMP)  ; LAB_005b9318
    TEST EDI,EDI                        ; 005b92d8
    JNZ 0x005b92ea                      ; 005b92da
        ;   XREF to: 005b92ea (CONDITIONAL_JUMP)  ; LAB_005b92ea
    TEST ESI,ESI                        ; 005b92dc
    JGE 0x005b92ea                      ; 005b92de
        ;   XREF to: 005b92ea (CONDITIONAL_JUMP)  ; LAB_005b92ea
    PUSH 0x9                            ; 005b92e0
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005b92e2
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005b92e7
    MOV ESI,dword ptr [EBX + 0x10]      ; 005b92ea
        ;   Label: LAB_005b92ea
    PUSH ESI                            ; 005b92ed
    CALL dword ptr [0x0061f2ac]         ; 005b92ee | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,0xffffffff                  ; 005b92f4
    ADD ESP,0x4                         ; 005b92f9
    POP EBP                             ; 005b92fc
    POP EDI                             ; 005b92fd
    POP ESI                             ; 005b92fe
    POP EBX                             ; 005b92ff
    RET                                 ; 005b9300
    CMP EDI,0x1                         ; 005b9301
        ;   Label: LAB_005b9301
    JNZ 0x005b9309                      ; 005b9304
        ;   XREF to: 005b9309 (CONDITIONAL_JUMP)  ; LAB_005b9309
    SUB ESI,dword ptr [EBX + 0x4]       ; 005b9306
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b9309
        ;   Label: LAB_005b9309
    MOV EAX,dword ptr [EAX + 0x8]       ; 005b930c
    MOV dword ptr [EBX + 0x4],0x0       ; 005b930f
    MOV dword ptr [EBX],EAX             ; 005b9316
    PUSH EDI                            ; 005b9318
        ;   Label: LAB_005b9318
    MOV CL,byte ptr [EBX + 0xc]         ; 005b9319
    PUSH ESI                            ; 005b931c
    MOV EAX,dword ptr [EBX + 0x10]      ; 005b931d
    AND CL,0xeb                         ; 005b9320
    PUSH EAX                            ; 005b9323
    MOV byte ptr [EBX + 0xc],CL         ; 005b9324
    CALL crt_unknown.c_FUN_005bebb0     ; 005b9327
        ;   XREF to: 005bebb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bebb0()
    ADD ESP,0xc                         ; 005b932c
    CMP EAX,-0x1                        ; 005b932f
    JNZ 0x005b946f                      ; 005b9332
        ;   XREF to: 005b946f (CONDITIONAL_JUMP)  ; LAB_005b946f
    MOV ECX,dword ptr [EBX + 0x10]      ; 005b9338
    PUSH ECX                            ; 005b933b
    CALL dword ptr [0x0061f2ac]         ; 005b933c | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,0xffffffff                  ; 005b9342
    ADD ESP,0x4                         ; 005b9347
    POP EBP                             ; 005b934a
    POP EDI                             ; 005b934b
    POP ESI                             ; 005b934c
    POP EBX                             ; 005b934d
    RET                                 ; 005b934e
    CMP EDI,0x1                         ; 005b934f
        ;   Label: LAB_005b934f
    JC 0x005b9364                       ; 005b9352
        ;   XREF to: 005b9364 (CONDITIONAL_JUMP)  ; LAB_005b9364
    JBE 0x005b936d                      ; 005b9354
        ;   XREF to: 005b936d (CONDITIONAL_JUMP)  ; LAB_005b936d
    CMP EDI,0x2                         ; 005b9356
    JZ 0x005b940d                       ; 005b9359
        ;   XREF to: 005b940d (CONDITIONAL_JUMP)  ; LAB_005b940d
    JMP 0x005b944e                      ; 005b935f
        ;   XREF to: 005b944e (UNCONDITIONAL_JUMP)  ; LAB_005b944e
    TEST EDI,EDI                        ; 005b9364
        ;   Label: LAB_005b9364
    JZ 0x005b93bc                       ; 005b9366
        ;   XREF to: 005b93bc (CONDITIONAL_JUMP)  ; LAB_005b93bc
    JMP 0x005b944e                      ; 005b9368
        ;   XREF to: 005b944e (UNCONDITIONAL_JUMP)  ; LAB_005b944e
    PUSH EBX                            ; 005b936d
        ;   Label: LAB_005b936d
    PUSH ESI                            ; 005b936e
    MOV EBP,dword ptr [EBX + 0x4]       ; 005b936f
    CALL crt_unknown.c_FUN_005b9240     ; 005b9372
        ;   XREF to: 005b9240 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9240()
    ADD ESP,0x8                         ; 005b9377
    TEST EAX,EAX                        ; 005b937a
    JZ 0x005b946f                       ; 005b937c
        ;   XREF to: 005b946f (CONDITIONAL_JUMP)  ; LAB_005b946f
    PUSH EDI                            ; 005b9382
    SUB ESI,EBP                         ; 005b9383
    PUSH ESI                            ; 005b9385
    MOV EDI,dword ptr [EBX + 0x10]      ; 005b9386
    PUSH EDI                            ; 005b9389
    CALL crt_unknown.c_FUN_005bebb0     ; 005b938a
        ;   XREF to: 005bebb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bebb0()
    ADD ESP,0xc                         ; 005b938f
    CMP EAX,-0x1                        ; 005b9392
    JNZ 0x005b93ae                      ; 005b9395
        ;   XREF to: 005b93ae (CONDITIONAL_JUMP)  ; LAB_005b93ae
    MOV EBP,dword ptr [EBX + 0x10]      ; 005b9397
    PUSH EBP                            ; 005b939a
    CALL dword ptr [0x0061f2ac]         ; 005b939b | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,0xffffffff                  ; 005b93a1
    ADD ESP,0x4                         ; 005b93a6
    POP EBP                             ; 005b93a9
    POP EDI                             ; 005b93aa
    POP ESI                             ; 005b93ab
    POP EBX                             ; 005b93ac
    RET                                 ; 005b93ad
    PUSH EBX                            ; 005b93ae
        ;   Label: LAB_005b93ae
    CALL crt_unknown.c_FUN_005b9284     ; 005b93af
        ;   XREF to: 005b9284 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9284()
    ADD ESP,0x4                         ; 005b93b4
    JMP 0x005b946f                      ; 005b93b7
        ;   XREF to: 005b946f (UNCONDITIONAL_JUMP)  ; LAB_005b946f
    MOV EDX,dword ptr [EBX + 0x10]      ; 005b93bc
        ;   Label: LAB_005b93bc
    PUSH EDX                            ; 005b93bf
    CALL crt_unknown.c_FUN_005bf250     ; 005b93c0
        ;   XREF to: 005bf250 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf250()
    ADD ESP,0x4                         ; 005b93c5
    MOV ECX,dword ptr [EBX + 0x4]       ; 005b93c8
    MOV EBP,ESI                         ; 005b93cb
    SUB EAX,ECX                         ; 005b93cd
    PUSH EBX                            ; 005b93cf
    SUB EBP,EAX                         ; 005b93d0
    PUSH EBP                            ; 005b93d2
    CALL crt_unknown.c_FUN_005b9240     ; 005b93d3
        ;   XREF to: 005b9240 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9240()
    ADD ESP,0x8                         ; 005b93d8
    TEST EAX,EAX                        ; 005b93db
    JZ 0x005b946f                       ; 005b93dd
        ;   XREF to: 005b946f (CONDITIONAL_JUMP)  ; LAB_005b946f
    PUSH EDI                            ; 005b93e3
    PUSH ESI                            ; 005b93e4
    MOV ESI,dword ptr [EBX + 0x10]      ; 005b93e5
    PUSH ESI                            ; 005b93e8
    CALL crt_unknown.c_FUN_005bebb0     ; 005b93e9
        ;   XREF to: 005bebb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bebb0()
    ADD ESP,0xc                         ; 005b93ee
    CMP EAX,-0x1                        ; 005b93f1
    JNZ 0x005b93ae                      ; 005b93f4
        ;   XREF to: 005b93ae (CONDITIONAL_JUMP)  ; LAB_005b93ae
    MOV EDI,dword ptr [EBX + 0x10]      ; 005b93f6
    PUSH EDI                            ; 005b93f9
    CALL dword ptr [0x0061f2ac]         ; 005b93fa | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,0xffffffff                  ; 005b9400
    ADD ESP,0x4                         ; 005b9405
    POP EBP                             ; 005b9408
    POP EDI                             ; 005b9409
    POP ESI                             ; 005b940a
    POP EBX                             ; 005b940b
    RET                                 ; 005b940c
    MOV DL,AH                           ; 005b940d
        ;   Label: LAB_005b940d
    PUSH EDI                            ; 005b940f
    MOV ECX,dword ptr [EBX + 0x10]      ; 005b9410
    AND DL,0xef                         ; 005b9413
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b9416
    MOV byte ptr [EBX + 0xc],DL         ; 005b9419
    PUSH ESI                            ; 005b941c
    MOV EAX,dword ptr [EAX + 0x8]       ; 005b941d
    MOV dword ptr [EBX + 0x4],0x0       ; 005b9420
    PUSH ECX                            ; 005b9427
    MOV dword ptr [EBX],EAX             ; 005b9428
    CALL crt_unknown.c_FUN_005bebb0     ; 005b942a
        ;   XREF to: 005bebb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bebb0()
    ADD ESP,0xc                         ; 005b942f
    CMP EAX,-0x1                        ; 005b9432
    JNZ 0x005b946f                      ; 005b9435
        ;   XREF to: 005b946f (CONDITIONAL_JUMP)  ; LAB_005b946f
    MOV ESI,dword ptr [EBX + 0x10]      ; 005b9437
    PUSH ESI                            ; 005b943a
    CALL dword ptr [0x0061f2ac]         ; 005b943b | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,0xffffffff                  ; 005b9441
    ADD ESP,0x4                         ; 005b9446
    POP EBP                             ; 005b9449
    POP EDI                             ; 005b944a
    POP ESI                             ; 005b944b
    POP EBX                             ; 005b944c
    RET                                 ; 005b944d
    PUSH 0x9                            ; 005b944e
        ;   Label: LAB_005b944e
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005b9450
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005b9455
    MOV EAX,dword ptr [EBX + 0x10]      ; 005b9458
    PUSH EAX                            ; 005b945b
    CALL dword ptr [0x0061f2ac]         ; 005b945c | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,0xffffffff                  ; 005b9462
    ADD ESP,0x4                         ; 005b9467
    POP EBP                             ; 005b946a
    POP EDI                             ; 005b946b
    POP ESI                             ; 005b946c
    POP EBX                             ; 005b946d
    RET                                 ; 005b946e
    MOV EDX,dword ptr [EBX + 0x10]      ; 005b946f
        ;   Label: LAB_005b946f
    PUSH EDX                            ; 005b9472
    CALL dword ptr [0x0061f2ac]         ; 005b9473 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005b9479
    XOR EAX,EAX                         ; 005b947c
    POP EBP                             ; 005b947e
    POP EDI                             ; 005b947f
    POP ESI                             ; 005b9480
    POP EBX                             ; 005b9481
    RET                                 ; 005b9482

