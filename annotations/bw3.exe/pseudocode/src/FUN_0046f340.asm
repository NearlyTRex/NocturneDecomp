; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046f340(undefined4 *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0046f480 at 0046f7c9
;
; Referenced Globals:
;   undefined4 DAT_005bc7b5
;   undefined4 DAT_005bc7b9
;   undefined4 DAT_005bc7c1
;   undefined4 DAT_005bc7c9
;   undefined4 DAT_005bc7d1
;   undefined4 DAT_005bc7d9
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005f4a5c
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b040
;
; Called Functions:
;   FUN_005632a3
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f340
        ;   Label: FUN_0046f340
    PUSH ESI                            ; 0046f341
    PUSH EDI                            ; 0046f342
    PUSH EBP                            ; 0046f343
    MOV EBP,ESP                         ; 0046f344
    SUB ESP,0x34                        ; 0046f346
    AND ESP,0xfffffff8                  ; 0046f349
    MOV EDI,dword ptr [EBP + 0x14]      ; 0046f34c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046f34f
    MOV EDX,dword ptr [EBP + 0x18]      ; 0046f352
    MOV dword ptr [ESP + 0x30],EDX      ; 0046f355
    FILD dword ptr [ESP + 0x30]         ; 0046f359
    FMUL float ptr [0x005bc7b5]         ; 0046f35d | DAT_005bc7b5
    FMUL float ptr [0x005bc7b9]         ; 0046f363 | DAT_005bc7b9
    FMUL double ptr [0x005bc7c1]        ; 0046f369 | DAT_005bc7c1
    FSTP float ptr [ESP + 0x2c]         ; 0046f36f
    TEST EAX,EAX                        ; 0046f373
    JNZ 0x0046f459                      ; 0046f375
        ;   XREF to: 0046f459 (CONDITIONAL_JUMP)  ; LAB_0046f459
    MOV dword ptr [ESP],0x3ca0d97c      ; 0046f37b
    FLD float ptr [ESP]                 ; 0046f382
        ;   Label: LAB_0046f382
    FLD ST0                             ; 0046f385
    FSIN                                ; 0046f387
    FLD float ptr [ESP + 0x2c]          ; 0046f389
    FADD float ptr [EDI + 0x1c]         ; 0046f38d
    FLD ST0                             ; 0046f390
    FSIN                                ; 0046f392
    FXCH ST3                            ; 0046f394
    FCOS                                ; 0046f396
    FXCH                                ; 0046f398
    FCOS                                ; 0046f39a
    FLD float ptr [0x005f4a5c]          ; 0046f39c | DAT_005f4a5c
    FXCH ST4                            ; 0046f3a2
    FMUL ST4                            ; 0046f3a4
    FXCH ST2                            ; 0046f3a6
    FSTP double ptr [ESP + 0x18]        ; 0046f3a8
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046f3ac
    FMUL ST3                            ; 0046f3b0
    MOV dword ptr [ESP + 0x10],EAX      ; 0046f3b2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046f3b6
    FXCH ST2                            ; 0046f3ba
    FMULP ST3                           ; 0046f3bc
    MOV dword ptr [ESP + 0x14],EAX      ; 0046f3be
    FLD ST0                             ; 0046f3c2
    FMUL double ptr [ESP + 0x10]        ; 0046f3c4
    FLD ST2                             ; 0046f3c8
    FMUL double ptr [ESP + 0x10]        ; 0046f3ca
    FXCH ST4                            ; 0046f3ce
    FLD double ptr [0x005bc7d9]         ; 0046f3d0 | DAT_005bc7d9
    FXCH                                ; 0046f3d6
    FMUL ST1                            ; 0046f3d8
    FXCH ST2                            ; 0046f3da
    FSTP ST3                            ; 0046f3dc
    FXCH ST2                            ; 0046f3de
    FMUL ST2                            ; 0046f3e0
    FXCH ST4                            ; 0046f3e2
    FSTP ST3                            ; 0046f3e4
    FXCH ST2                            ; 0046f3e6
    FMULP                               ; 0046f3e8
    MOV ESI,dword ptr [EBP + 0x20]      ; 0046f3ea
    LEA EAX,[ESP + 0x4]                 ; 0046f3ed
    MOV EDX,dword ptr [0x005f2afc]      ; 0046f3f1 | DAT_005f2afc
    PUSH EAX                            ; 0046f3f7
    FXCH                                ; 0046f3f8
    CALL FUN_005a3120                   ; 0046f3fa
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    LEA EAX,[ESI*0x4 + 0x0]             ; 0046f3ff
    FISTP dword ptr [ESP + 0xc]         ; 0046f406
    SUB EAX,ESI                         ; 0046f40a
    FXCH                                ; 0046f40c
    CALL FUN_005a3120                   ; 0046f40e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 0046f413
    CALL FUN_005a3120                   ; 0046f415
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 0046f41a
    FISTP dword ptr [ESP + 0x8]         ; 0046f41c
    MOV ESI,EAX                         ; 0046f420
    FISTP dword ptr [ESP + 0x10]        ; 0046f422
    SHL ESI,0x4                         ; 0046f426
    MOV EAX,dword ptr [EDX]             ; 0046f429
    ADD EAX,ESI                         ; 0046f42b
    PUSH EAX                            ; 0046f42d
    CALL FUN_005632a3                   ; 0046f42e
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    MOV EAX,dword ptr [EDI]             ; 0046f433
    MOV dword ptr [ESI + 0x60b034],EAX  ; 0046f435 | DAT_0060b034
    MOV dword ptr [ESI + 0x60b038],EAX  ; 0046f43b | DAT_0060b038
    XOR ECX,ECX                         ; 0046f441
    MOV dword ptr [ESI + 0x60b03c],EAX  ; 0046f443 | DAT_0060b03c
    ADD ESP,0x8                         ; 0046f449
    MOV dword ptr [ESI + 0x60b040],ECX  ; 0046f44c | DAT_0060b040
    MOV ESP,EBP                         ; 0046f452
    POP EBP                             ; 0046f454
    POP EDI                             ; 0046f455
    POP ESI                             ; 0046f456
    POP EBX                             ; 0046f457
    RET                                 ; 0046f458
    MOV dword ptr [ESP + 0x30],EAX      ; 0046f459
        ;   Label: LAB_0046f459
    FILD dword ptr [ESP + 0x30]         ; 0046f45d
    FMUL float ptr [0x005bc7c9]         ; 0046f461 | DAT_005bc7c9
    FMUL float ptr [0x005bc7b9]         ; 0046f467 | DAT_005bc7b9
    FMUL double ptr [0x005bc7d1]        ; 0046f46d | DAT_005bc7d1
    FSTP float ptr [ESP]                ; 0046f473
    JMP 0x0046f382                      ; 0046f476
        ;   XREF to: 0046f382 (UNCONDITIONAL_JUMP)  ; LAB_0046f382

