; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * crt_unknown_c_FUN_005ac290(int param_1,uint param_2,int param_3,undefined4 *param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_time.c__mktime_FUN_005a4f20 at 005a5033
;   crt_unknown.c_FUN_005a55d0 at 005a55ef
;
; Referenced Globals:
;   undefined4 DAT_005e8804
;   undefined4 DAT_005e881e
;
; Called Functions:
;   crt_unknown.c_FUN_005abdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac290
        ;   Label: crt_unknown.c_FUN_005ac290
    PUSH ESI                            ; 005ac291
    PUSH EDI                            ; 005ac292
    PUSH EBP                            ; 005ac293
    SUB ESP,0x4                         ; 005ac294
    MOV EBP,dword ptr [ESP + 0x18]      ; 005ac297
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005ac29b
    MOV EAX,dword ptr [ESP + 0x20]      ; 005ac29f
    MOV EDI,dword ptr [ESP + 0x24]      ; 005ac2a3
    CMP EBX,0xa8c0                      ; 005ac2a7
    JNC 0x005ac2cb                      ; 005ac2ad
        ;   XREF to: 005ac2cb (CONDITIONAL_JUMP)  ; LAB_005ac2cb
    TEST EAX,EAX                        ; 005ac2af
    JLE 0x005ac2cb                      ; 005ac2b1
        ;   XREF to: 005ac2cb (CONDITIONAL_JUMP)  ; LAB_005ac2cb
    ADD EBX,0x15180                     ; 005ac2b3
    MOV ESI,0x15180                     ; 005ac2b9
    SUB EBX,EAX                         ; 005ac2be
    XOR EDX,EDX                         ; 005ac2c0
    MOV EAX,EBX                         ; 005ac2c2
    DIV ESI                             ; 005ac2c4
    ADD EBP,EAX                         ; 005ac2c6
    DEC EBP                             ; 005ac2c8
    JMP 0x005ac2da                      ; 005ac2c9
        ;   XREF to: 005ac2da (UNCONDITIONAL_JUMP)  ; LAB_005ac2da
    MOV ESI,0x15180                     ; 005ac2cb
        ;   Label: LAB_005ac2cb
    SUB EBX,EAX                         ; 005ac2d0
    XOR EDX,EDX                         ; 005ac2d2
    MOV EAX,EBX                         ; 005ac2d4
    DIV ESI                             ; 005ac2d6
    ADD EBP,EAX                         ; 005ac2d8
    MOV ESI,0x15180                     ; 005ac2da
        ;   Label: LAB_005ac2da
    MOV EAX,EBX                         ; 005ac2df
    XOR EDX,EDX                         ; 005ac2e1
    DIV ESI                             ; 005ac2e3
    MOV EBX,EDX                         ; 005ac2e5
    MOV ESI,0xe10                       ; 005ac2e7
    MOV EAX,EBX                         ; 005ac2ec
    XOR EDX,EDX                         ; 005ac2ee
    DIV ESI                             ; 005ac2f0
    XOR EDX,EDX                         ; 005ac2f2
    MOV dword ptr [EDI + 0x8],EAX       ; 005ac2f4
    MOV EAX,EBX                         ; 005ac2f7
    DIV ESI                             ; 005ac2f9
    MOV EBX,EDX                         ; 005ac2fb
    MOV ESI,0x3c                        ; 005ac2fd
    MOV EAX,EBX                         ; 005ac302
    XOR EDX,EDX                         ; 005ac304
    DIV ESI                             ; 005ac306
    XOR EDX,EDX                         ; 005ac308
    MOV dword ptr [EDI + 0x4],EAX       ; 005ac30a
    MOV EAX,EBX                         ; 005ac30d
    DIV ESI                             ; 005ac30f
    MOV EBX,0x16e                       ; 005ac311
    MOV EAX,EBP                         ; 005ac316
    MOV dword ptr [EDI],EDX             ; 005ac318
    XOR EDX,EDX                         ; 005ac31a
    DIV EBX                             ; 005ac31c
    MOV ESI,EAX                         ; 005ac31e
    SHL EAX,0x3                         ; 005ac320
    ADD EAX,ESI                         ; 005ac323
    SHL EAX,0x3                         ; 005ac325
    ADD EAX,ESI                         ; 005ac328
    MOV EBX,EAX                         ; 005ac32a
    SHL EAX,0x2                         ; 005ac32c
    ADD EAX,EBX                         ; 005ac32f
    MOV EBX,EBP                         ; 005ac331
    SUB EBX,EAX                         ; 005ac333
    TEST ESI,ESI                        ; 005ac335
    JBE 0x005ac341                      ; 005ac337
        ;   XREF to: 005ac341 (CONDITIONAL_JUMP)  ; LAB_005ac341
    LEA EAX,[ESI + -0x1]                ; 005ac339
    SHR EAX,0x2                         ; 005ac33c
    SUB EBX,EAX                         ; 005ac33f
    LEA EAX,[ESI + 0x76c]               ; 005ac341
        ;   Label: LAB_005ac341
    PUSH EAX                            ; 005ac347
    CALL crt_unknown.c_FUN_005abdf0     ; 005ac348
        ;   XREF to: 005abdf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abdf0()
    ADD EAX,0x16d                       ; 005ac34d
    ADD ESP,0x4                         ; 005ac352
    CMP EBX,EAX                         ; 005ac355
    JC 0x005ac360                       ; 005ac357
        ;   XREF to: 005ac360 (CONDITIONAL_JUMP)  ; LAB_005ac360
    SUB EBX,EAX                         ; 005ac359
        ;   Label: LAB_005ac359
    INC ESI                             ; 005ac35b
    CMP EBX,EAX                         ; 005ac35c
    JNC 0x005ac359                      ; 005ac35e
        ;   XREF to: 005ac359 (CONDITIONAL_JUMP)  ; LAB_005ac359
    MOV dword ptr [EDI + 0x14],ESI      ; 005ac360
        ;   Label: LAB_005ac360
    ADD ESI,0x76c                       ; 005ac363
    MOV EDX,0x5e8804                    ; 005ac369 | DAT_005e8804
    PUSH ESI                            ; 005ac36e
    MOV dword ptr [EDI + 0x1c],EBX      ; 005ac36f
    MOV dword ptr [ESP + 0x4],EDX       ; 005ac372 | DAT_005e8804
    CALL crt_unknown.c_FUN_005abdf0     ; 005ac376
        ;   XREF to: 005abdf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abdf0()
    ADD ESP,0x4                         ; 005ac37b
    TEST EAX,EAX                        ; 005ac37e
    JZ 0x005ac389                       ; 005ac380
        ;   XREF to: 005ac389 (CONDITIONAL_JUMP)  ; LAB_005ac389
    MOV dword ptr [ESP],0x5e881e        ; 005ac382 | DAT_005e881e
    MOV ESI,0x1f                        ; 005ac389
        ;   Label: LAB_005ac389
    MOV EAX,EBX                         ; 005ac38e
    XOR EDX,EDX                         ; 005ac390
    DIV ESI                             ; 005ac392
    MOV EDX,dword ptr [ESP]             ; 005ac394
    LEA ESI,[EAX*0x2 + 0x0]             ; 005ac397
    ADD ESI,EDX                         ; 005ac39e
    MOV ESI,dword ptr [ESI]             ; 005ac3a0 | DAT_005e881e | DAT_005e8804
    SAR ESI,0x10                        ; 005ac3a2
    CMP EBX,ESI                         ; 005ac3a5
    JC 0x005ac3aa                       ; 005ac3a7
        ;   XREF to: 005ac3aa (CONDITIONAL_JUMP)  ; LAB_005ac3aa
    INC EAX                             ; 005ac3a9
    MOV ECX,dword ptr [ESP]             ; 005ac3aa
        ;   Label: LAB_005ac3aa
    MOV dword ptr [EDI + 0x10],EAX      ; 005ac3ad
    ADD EAX,EAX                         ; 005ac3b0
    ADD EAX,ECX                         ; 005ac3b2
    MOVSX EAX,word ptr [EAX]            ; 005ac3b4 | DAT_005e881e | DAT_005e8804
    SUB EBX,EAX                         ; 005ac3b7
    XOR EDX,EDX                         ; 005ac3b9
    INC EBX                             ; 005ac3bb
    LEA EAX,[EBP + 0x1]                 ; 005ac3bc
    MOV dword ptr [EDI + 0xc],EBX       ; 005ac3bf
    MOV EBX,0x7                         ; 005ac3c2
    DIV EBX                             ; 005ac3c7
    MOV EAX,EDI                         ; 005ac3c9
    MOV dword ptr [EDI + 0x18],EDX      ; 005ac3cb
    ADD ESP,0x4                         ; 005ac3ce
    POP EBP                             ; 005ac3d1
    POP EDI                             ; 005ac3d2
    POP ESI                             ; 005ac3d3
    POP EBX                             ; 005ac3d4
    RET                                 ; 005ac3d5

