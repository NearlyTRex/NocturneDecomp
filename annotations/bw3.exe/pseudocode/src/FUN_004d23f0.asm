; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d23f0(float *param_1,float param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0042cd70 at 0042d228
;
; Referenced Globals:
;   undefined4 DAT_01d5ba00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d23f0
        ;   Label: FUN_004d23f0
    PUSH ESI                            ; 004d23f1
    PUSH EDI                            ; 004d23f2
    PUSH EBP                            ; 004d23f3
    MOV EBP,ESP                         ; 004d23f4
    SUB ESP,0x1c                        ; 004d23f6
    AND ESP,0xfffffff8                  ; 004d23f9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004d23fc
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d23ff
    MOV dword ptr [ESP],EAX             ; 004d2402
    FLD float ptr [EBP + 0x18]          ; 004d2405
    FMUL ST0                            ; 004d2408
    MOV EDX,dword ptr [0x01d5ba00]      ; 004d240a | DAT_01d5ba00
    FSTP float ptr [EBP + 0x18]         ; 004d2410
    TEST EDX,EDX                        ; 004d2413
    JLE 0x004d2433                      ; 004d2415
        ;   XREF to: 004d2433 (CONDITIONAL_JUMP)  ; LAB_004d2433
    MOV EBX,dword ptr [0x01d5ba00]      ; 004d2417 | DAT_01d5ba00
    XOR EDX,EDX                         ; 004d241d
    SHL EBX,0x2                         ; 004d241f
    MOV ESI,dword ptr [EDX + 0x1d5ba04] ; 004d2422
        ;   Label: LAB_004d2422
    TEST ESI,ESI                        ; 004d2428
    JNZ 0x004d243c                      ; 004d242a
        ;   XREF to: 004d243c (CONDITIONAL_JUMP)  ; LAB_004d243c
    ADD EDX,0x4                         ; 004d242c
        ;   Label: LAB_004d242c
    CMP EDX,EBX                         ; 004d242f
    JL 0x004d2422                       ; 004d2431
        ;   XREF to: 004d2422 (CONDITIONAL_JUMP)  ; LAB_004d2422
    XOR EAX,EAX                         ; 004d2433
        ;   Label: LAB_004d2433
    MOV ESP,EBP                         ; 004d2435
    POP EBP                             ; 004d2437
    POP EDI                             ; 004d2438
    POP ESI                             ; 004d2439
    POP EBX                             ; 004d243a
    RET                                 ; 004d243b
    MOV EAX,ESI                         ; 004d243c
        ;   Label: LAB_004d243c
    LEA EDI,[ESP + 0x4]                 ; 004d243e
    FLD float ptr [EAX + 0x20]          ; 004d2442
    FLD float ptr [EAX + 0x24]          ; 004d2445
    FLD float ptr [EAX + 0x28]          ; 004d2448
    LEA ESI,[ESP + 0x10]                ; 004d244b
    FXCH ST2                            ; 004d244f
    FSUB float ptr [ECX]                ; 004d2451
    FXCH                                ; 004d2453
    FSUB float ptr [ECX + 0x4]          ; 004d2455
    FXCH ST2                            ; 004d2458
    FSUB float ptr [ECX + 0x8]          ; 004d245a
    FXCH                                ; 004d245d
    FSTP float ptr [ESP + 0x10]         ; 004d245f
    FXCH                                ; 004d2463
    FSTP float ptr [ESP + 0x14]         ; 004d2465
    FSTP float ptr [ESP + 0x18]         ; 004d2469
    MOVSD ES:EDI,ESI                    ; 004d246d
    MOVSD ES:EDI,ESI                    ; 004d246e
    MOVSD ES:EDI,ESI                    ; 004d246f
    FLD float ptr [ESP + 0x8]           ; 004d2470
    FABS                                ; 004d2474
    FLD float ptr [ESP]                 ; 004d2476
    FCOMPP                              ; 004d2479
    FNSTSW AX                           ; 004d247b
    SAHF                                ; 004d247d
    JC 0x004d242c                       ; 004d247e
        ;   XREF to: 004d242c (CONDITIONAL_JUMP)  ; LAB_004d242c
    FLD float ptr [ESP + 0xc]           ; 004d2480
    FMUL ST0                            ; 004d2484
    FLD float ptr [ESP + 0x4]           ; 004d2486
    FMUL ST0                            ; 004d248a
    FADDP                               ; 004d248c
    FCOMP float ptr [EBP + 0x18]        ; 004d248e
    FNSTSW AX                           ; 004d2491
    SAHF                                ; 004d2493
    JNC 0x004d242c                      ; 004d2494
        ;   XREF to: 004d242c (CONDITIONAL_JUMP)  ; LAB_004d242c
    MOV EAX,0x1                         ; 004d2496
    MOV ESP,EBP                         ; 004d249b
    POP EBP                             ; 004d249d
    POP EDI                             ; 004d249e
    POP ESI                             ; 004d249f
    POP EBX                             ; 004d24a0
    RET                                 ; 004d24a1

