; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8300(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,float *param_10,undefined4 *param_11,undefined4 *param_12,undefined4 param_13)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[13]:
;   FUN_0040ded0 at 0040e0db
;   FUN_00450c60 at 00451949
;   FUN_004cdb60 at 004cdd8d
;   FUN_0059c680 at 0059c960
;   FUN_005a0380 at 005a066c
;   FUN_005a0bd0 at 005a0eef
;   FUN_005a61f0 at 005a6598
;   FUN_005a6ed0 at 005a7343
;   FUN_005aae80 at 005ab14c
;   FUN_005ab260 at 005ab59c
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_0265370c
;   undefined4 DAT_02653710
;   undefined4 DAT_02653714
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8300
        ;   Label: FUN_005a8300
    PUSH ESI                            ; 005a8301
    PUSH EDI                            ; 005a8302
    PUSH EBP                            ; 005a8303
    SUB ESP,0x18                        ; 005a8304
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005a8307
    MOV EBX,dword ptr [ESP + 0x50]      ; 005a830b
    MOV EBP,dword ptr [ESP + 0x58]      ; 005a830f
    CMP dword ptr [EDX + 0x10],0x0      ; 005a8313
    JZ 0x005a8445                       ; 005a8317
        ;   XREF to: 005a8445 (CONDITIONAL_JUMP)  ; LAB_005a8445
    CMP EDX,0x265370c                   ; 005a831d
    JNZ 0x005a844d                      ; 005a8323
        ;   XREF to: 005a844d (CONDITIONAL_JUMP)  ; LAB_005a844d
    CMP dword ptr [EDX + 0x38],0x0      ; 005a8329
        ;   Label: LAB_005a8329
    JZ 0x005a8469                       ; 005a832d
        ;   XREF to: 005a8469 (CONDITIONAL_JUMP)  ; LAB_005a8469
    MOV ECX,dword ptr [EDX + 0x1c]      ; 005a8333
        ;   Label: LAB_005a8333
    LEA EAX,[ECX*0x4 + 0x0]             ; 005a8336
    SUB EAX,ECX                         ; 005a833d
    SHL EAX,0x5                         ; 005a833f
    MOV ECX,dword ptr [EDX + 0x3c]      ; 005a8342
    ADD ECX,EAX                         ; 005a8345
    MOV EAX,dword ptr [ESP + 0x30]      ; 005a8347
    MOV dword ptr [ECX + 0x4],EAX       ; 005a834b
    MOV dword ptr [ECX + 0x8],EAX       ; 005a834e
    MOV EAX,dword ptr [ESP + 0x34]      ; 005a8351
    MOV dword ptr [ECX + 0xc],EAX       ; 005a8355
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a8358
    MOV dword ptr [ECX + 0x10],EAX      ; 005a835c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005a835f
    MOV dword ptr [ECX + 0x18],EAX      ; 005a8363
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a8366
    MOV dword ptr [ECX + 0x1c],EAX      ; 005a836a
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005a836d
    MOV dword ptr [ECX + 0x20],EAX      ; 005a8371
    LEA EAX,[ECX + 0x24]                ; 005a8374
    MOV dword ptr [ECX + 0x54],EDX      ; 005a8377
    CMP EAX,EDX                         ; 005a837a
    JZ 0x005a838e                       ; 005a837c
        ;   XREF to: 005a838e (CONDITIONAL_JUMP)  ; LAB_005a838e
    MOV ESI,dword ptr [EDX]             ; 005a837e
    MOV dword ptr [EAX],ESI             ; 005a8380
    MOV ESI,dword ptr [EDX + 0x4]       ; 005a8382
    MOV dword ptr [EAX + 0x4],ESI       ; 005a8385
    MOV ESI,dword ptr [EDX + 0x8]       ; 005a8388
    MOV dword ptr [EAX + 0x8],ESI       ; 005a838b
    TEST EBX,EBX                        ; 005a838e
        ;   Label: LAB_005a838e
    JZ 0x005a83df                       ; 005a8390
        ;   XREF to: 005a83df (CONDITIONAL_JUMP)  ; LAB_005a83df
    FLD float ptr [EDX]                 ; 005a8392
    FLD float ptr [EDX + 0x4]           ; 005a8394
    FLD float ptr [EDX + 0x8]           ; 005a8397
    LEA EDI,[ESP + 0xc]                 ; 005a839a
    MOV ESI,ESP                         ; 005a839e
    LEA EAX,[ESP + 0xc]                 ; 005a83a0
    FXCH ST2                            ; 005a83a4
    FADD float ptr [EBX]                ; 005a83a6
    FXCH                                ; 005a83a8
    FADD float ptr [EBX + 0x4]          ; 005a83aa
    FXCH ST2                            ; 005a83ad
    FADD float ptr [EBX + 0x8]          ; 005a83af
    FXCH ST2                            ; 005a83b2
    FSTP float ptr [ESP + 0x4]          ; 005a83b4
    FXCH                                ; 005a83b8
    FSTP float ptr [ESP + 0x8]          ; 005a83ba
    FSTP float ptr [ESP]                ; 005a83be
    LEA EBX,[ECX + 0x24]                ; 005a83c1
    MOVSD ES:EDI,ESI                    ; 005a83c4
    MOVSD ES:EDI,ESI                    ; 005a83c5
    MOVSD ES:EDI,ESI                    ; 005a83c6
    CMP EBX,EAX                         ; 005a83c7
    JZ 0x005a83df                       ; 005a83c9
        ;   XREF to: 005a83df (CONDITIONAL_JUMP)  ; LAB_005a83df
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a83cb
    MOV dword ptr [EBX],EAX             ; 005a83cf
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a83d1
    MOV dword ptr [EBX + 0x4],EAX       ; 005a83d5
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a83d8
    MOV dword ptr [EBX + 0x8],EAX       ; 005a83dc
    TEST EBP,EBP                        ; 005a83df
        ;   Label: LAB_005a83df
    JZ 0x005a83fb                       ; 005a83e1
        ;   XREF to: 005a83fb (CONDITIONAL_JUMP)  ; LAB_005a83fb
    LEA EAX,[ECX + 0x3c]                ; 005a83e3
    CMP EAX,EBP                         ; 005a83e6
    JZ 0x005a83fb                       ; 005a83e8
        ;   XREF to: 005a83fb (CONDITIONAL_JUMP)  ; LAB_005a83fb
    MOV EBX,dword ptr [EBP]             ; 005a83ea
    MOV dword ptr [EAX],EBX             ; 005a83ed
    MOV EBX,dword ptr [EBP + 0x4]       ; 005a83ef
    MOV dword ptr [EAX + 0x4],EBX       ; 005a83f2
    MOV EBX,dword ptr [EBP + 0x8]       ; 005a83f5
    MOV dword ptr [EAX + 0x8],EBX       ; 005a83f8
    MOV EDI,dword ptr [ESP + 0x54]      ; 005a83fb
        ;   Label: LAB_005a83fb
    TEST EDI,EDI                        ; 005a83ff
    JZ 0x005a841c                       ; 005a8401
        ;   XREF to: 005a841c (CONDITIONAL_JUMP)  ; LAB_005a841c
    LEA EAX,[ECX + 0x30]                ; 005a8403
    CMP EAX,EDI                         ; 005a8406
    JZ 0x005a841c                       ; 005a8408
        ;   XREF to: 005a841c (CONDITIONAL_JUMP)  ; LAB_005a841c
    MOV EBX,EDI                         ; 005a840a
    MOV ESI,dword ptr [EBX]             ; 005a840c
    MOV dword ptr [EAX],ESI             ; 005a840e
    MOV ESI,dword ptr [EBX + 0x4]       ; 005a8410
    MOV dword ptr [EAX + 0x4],ESI       ; 005a8413
    MOV ESI,dword ptr [EBX + 0x8]       ; 005a8416
    MOV dword ptr [EAX + 0x8],ESI       ; 005a8419
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a841c
        ;   Label: LAB_005a841c
    MOV dword ptr [ECX],0x1             ; 005a8420
    MOV dword ptr [ECX + 0x48],EAX      ; 005a8426
    MOV EAX,dword ptr [ESP + 0x48]      ; 005a8429
    MOV dword ptr [ECX + 0x4c],EAX      ; 005a842d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005a8430
    MOV dword ptr [ECX + 0x50],EAX      ; 005a8434
    MOV EAX,dword ptr [EDX + 0x1c]      ; 005a8437
    INC EAX                             ; 005a843a
    MOV ECX,dword ptr [EDX + 0x18]      ; 005a843b
    MOV dword ptr [EDX + 0x1c],EAX      ; 005a843e
    CMP EAX,ECX                         ; 005a8441
    JGE 0x005a848c                      ; 005a8443
        ;   XREF to: 005a848c (CONDITIONAL_JUMP)  ; LAB_005a848c
    ADD ESP,0x18                        ; 005a8445
        ;   Label: LAB_005a8445
    POP EBP                             ; 005a8448
    POP EDI                             ; 005a8449
    POP ESI                             ; 005a844a
    POP EBX                             ; 005a844b
    RET                                 ; 005a844c
    MOV EAX,[0x0265370c]                ; 005a844d | DAT_0265370c
        ;   Label: LAB_005a844d
    MOV dword ptr [EDX],EAX             ; 005a8452
    MOV EAX,[0x02653710]                ; 005a8454 | DAT_02653710
    MOV dword ptr [EDX + 0x4],EAX       ; 005a8459
    MOV EAX,[0x02653714]                ; 005a845c | DAT_02653714
    MOV dword ptr [EDX + 0x8],EAX       ; 005a8461
    JMP 0x005a8329                      ; 005a8464
        ;   XREF to: 005a8329 (UNCONDITIONAL_JUMP)  ; LAB_005a8329
    MOV EAX,dword ptr [EDX + 0x14]      ; 005a8469
        ;   Label: LAB_005a8469
    ADD EAX,0x20                        ; 005a846c
    CMP EDX,EAX                         ; 005a846f
    JZ 0x005a8333                       ; 005a8471
        ;   XREF to: 005a8333 (CONDITIONAL_JUMP)  ; LAB_005a8333
    MOV ECX,dword ptr [EAX]             ; 005a8477
    MOV dword ptr [EDX],ECX             ; 005a8479
    MOV ECX,dword ptr [EAX + 0x4]       ; 005a847b
    MOV dword ptr [EDX + 0x4],ECX       ; 005a847e
    MOV ECX,dword ptr [EAX + 0x8]       ; 005a8481
    MOV dword ptr [EDX + 0x8],ECX       ; 005a8484
    JMP 0x005a8333                      ; 005a8487
        ;   XREF to: 005a8333 (UNCONDITIONAL_JUMP)  ; LAB_005a8333
    MOV dword ptr [EDX + 0x1c],0x0      ; 005a848c
        ;   Label: LAB_005a848c
    ADD ESP,0x18                        ; 005a8493
    POP EBP                             ; 005a8496
    POP EDI                             ; 005a8497
    POP ESI                             ; 005a8498
    POP EBX                             ; 005a8499
    RET                                 ; 005a849a

