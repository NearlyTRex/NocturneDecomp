; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f0360(float *param_1,float *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[3]:
;   FUN_00409fc0 at 00409ff5
;   FUN_004f1c90 at 004f1d77
;   FUN_00509140 at 0050935a
;
; Referenced Globals:
;   undefined4 DAT_0058cd8f
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01fba938
;
; Called Functions:
;   FUN_0046b700
;   FUN_004f1e10
;   FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0360
        ;   Label: FUN_004f0360
    PUSH ESI                            ; 004f0361
    PUSH EDI                            ; 004f0362
    PUSH EBP                            ; 004f0363
    MOV EBP,ESP                         ; 004f0364
    SUB ESP,0x18                        ; 004f0366
    AND ESP,0xfffffff8                  ; 004f0369
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f036c
    MOV ESI,dword ptr [EBP + 0x18]      ; 004f036f
    CMP dword ptr [EBP + 0x1c],0x0      ; 004f0372
    JNZ 0x004f0448                      ; 004f0376
        ;   XREF to: 004f0448 (CONDITIONAL_JUMP)  ; LAB_004f0448
    MOV EAX,[0x01bd1d80]                ; 004f037c | DAT_01bd1d80
    MOV ECX,dword ptr [EBX + 0x138d8]   ; 004f0381
    SUB ECX,EAX                         ; 004f0387
    MOV dword ptr [EBX + 0x138d8],ECX   ; 004f0389
    TEST ECX,ECX                        ; 004f038f
    JL 0x004f045a                       ; 004f0391
        ;   XREF to: 004f045a (CONDITIONAL_JUMP)  ; LAB_004f045a
    LEA EAX,[EBX + 0x138c0]             ; 004f0397
    FLD float ptr [ESI]                 ; 004f039d
    FSUB float ptr [EAX]                ; 004f039f
    FSTP float ptr [ESP]                ; 004f03a1
    FLD float ptr [ESI + 0x4]           ; 004f03a4
    FSUB float ptr [EAX + 0x4]          ; 004f03a7
    FLD float ptr [ESP]                 ; 004f03aa
    FXCH                                ; 004f03ad
    FSTP float ptr [ESP + 0x4]          ; 004f03af
    FLD float ptr [ESI + 0x8]           ; 004f03b3
    FSUB float ptr [EAX + 0x8]          ; 004f03b6
    FXCH                                ; 004f03b9
    FABS                                ; 004f03bb
    FXCH                                ; 004f03bd
    FSTP float ptr [ESP + 0x8]          ; 004f03bf
    FCOMP double ptr [0x0058cd8f]       ; 004f03c3 | DAT_0058cd8f
    FNSTSW AX                           ; 004f03c9
    SAHF                                ; 004f03cb
    JNC 0x004f03f0                      ; 004f03cc
        ;   XREF to: 004f03f0 (CONDITIONAL_JUMP)  ; LAB_004f03f0
    FLD float ptr [ESP + 0x4]           ; 004f03ce
    FABS                                ; 004f03d2
    FCOMP double ptr [0x0058cd8f]       ; 004f03d4 | DAT_0058cd8f
    FNSTSW AX                           ; 004f03da
    SAHF                                ; 004f03dc
    JNC 0x004f03f0                      ; 004f03dd
        ;   XREF to: 004f03f0 (CONDITIONAL_JUMP)  ; LAB_004f03f0
    FLD float ptr [ESP + 0x8]           ; 004f03df
    FABS                                ; 004f03e3
    FCOMP double ptr [0x0058cd8f]       ; 004f03e5 | DAT_0058cd8f
    FNSTSW AX                           ; 004f03eb
    SAHF                                ; 004f03ed
    JC 0x004f0441                       ; 004f03ee
        ;   XREF to: 004f0441 (CONDITIONAL_JUMP)  ; LAB_004f0441
    CMP EBX,ESI                         ; 004f03f0
        ;   Label: LAB_004f03f0
    JZ 0x004f0404                       ; 004f03f2
        ;   XREF to: 004f0404 (CONDITIONAL_JUMP)  ; LAB_004f0404
    MOV EAX,dword ptr [ESI]             ; 004f03f4
    MOV dword ptr [EBX],EAX             ; 004f03f6
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f03f8
    MOV dword ptr [EBX + 0x4],EAX       ; 004f03fb
    MOV EAX,dword ptr [ESI + 0x8]       ; 004f03fe
    MOV dword ptr [EBX + 0x8],EAX       ; 004f0401
    PUSH EBX                            ; 004f0404
        ;   Label: LAB_004f0404
    PUSH 0x1fba938                      ; 004f0405 | DAT_01fba938
    LEA ESI,[ESP + 0x14]                ; 004f040a
    CALL FUN_0046b700                   ; 004f040e
        ;   XREF to: 0046b700 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b700()
    LEA ESI,[ESP + 0x14]                ; 004f0413
    LEA EDI,[EBX + 0xc]                 ; 004f0417
    ADD ESP,0x8                         ; 004f041a
    MOVSD ES:EDI,ESI                    ; 004f041d
    MOVSD ES:EDI,ESI                    ; 004f041e
    MOVSD ES:EDI,ESI                    ; 004f041f
    MOV EAX,dword ptr [EBX + 0xc]       ; 004f0420
    CMP EAX,dword ptr [EBX + 0x138b0]   ; 004f0423
    JNZ 0x004f0468                      ; 004f0429
        ;   XREF to: 004f0468 (CONDITIONAL_JUMP)  ; LAB_004f0468
    MOV ECX,dword ptr [EBX + 0x138b4]   ; 004f042b
    CMP ECX,dword ptr [EBX + 0x10]      ; 004f0431
    JNZ 0x004f0468                      ; 004f0434
        ;   XREF to: 004f0468 (CONDITIONAL_JUMP)  ; LAB_004f0468
    MOV ESI,dword ptr [EBX + 0x138b8]   ; 004f0436
    CMP ESI,dword ptr [EBX + 0x14]      ; 004f043c
    JNZ 0x004f0468                      ; 004f043f
        ;   XREF to: 004f0468 (CONDITIONAL_JUMP)  ; LAB_004f0468
    MOV ESP,EBP                         ; 004f0441
        ;   Label: LAB_004f0441
    POP EBP                             ; 004f0443
    POP EDI                             ; 004f0444
    POP ESI                             ; 004f0445
    POP EBX                             ; 004f0446
    RET                                 ; 004f0447
    CALL FUN_0056488c                   ; 004f0448
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
        ;   Label: LAB_004f0448
    AND EAX,0x3fff                      ; 004f044d
    MOV dword ptr [EBX + 0x138d8],EAX   ; 004f0452
    JMP 0x004f03f0                      ; 004f0458
        ;   XREF to: 004f03f0 (UNCONDITIONAL_JUMP)  ; LAB_004f03f0
    LEA EAX,[ECX + 0x4000]              ; 004f045a
        ;   Label: LAB_004f045a
    MOV dword ptr [EBX + 0x138d8],EAX   ; 004f0460
    JMP 0x004f03f0                      ; 004f0466
        ;   XREF to: 004f03f0 (UNCONDITIONAL_JUMP)  ; LAB_004f03f0
    LEA EDI,[EBX + 0x138b0]             ; 004f0468
        ;   Label: LAB_004f0468
    LEA ESI,[EBX + 0xc]                 ; 004f046e
    MOVSD ES:EDI,ESI                    ; 004f0471
    MOVSD ES:EDI,ESI                    ; 004f0472
    MOVSD ES:EDI,ESI                    ; 004f0473
    MOV EAX,dword ptr [EBX + 0xc]       ; 004f0474
    MOV ESI,dword ptr [EBX + 0x14]      ; 004f0477
    SUB EAX,0x32                        ; 004f047a
    SUB ESI,0x32                        ; 004f047d
    MOV dword ptr [EBX + 0x24],EAX      ; 004f0480
    MOV dword ptr [EBX + 0x2c],ESI      ; 004f0483
    MOV EAX,dword ptr [EBX + 0x10]      ; 004f0486
    PUSH EBX                            ; 004f0489
    MOV dword ptr [EBX + 0x28],EAX      ; 004f048a
    CALL FUN_004f1e10                   ; 004f048d
        ;   XREF to: 004f1e10 (UNCONDITIONAL_CALL)  ; undefined FUN_004f1e10()
    ADD ESP,0x4                         ; 004f0492
    MOV ESP,EBP                         ; 004f0495
    POP EBP                             ; 004f0497
    POP EDI                             ; 004f0498
    POP ESI                             ; 004f0499
    POP EBX                             ; 004f049a
    RET                                 ; 004f049b

