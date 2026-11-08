; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483560(int param_1,float *param_2)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_0044ceb0 at 0044d0bb
;   FUN_0044d700 at 0044d882
;   FUN_00462820 at 004628dd
;   FUN_00483530 at 0048354d
;   FUN_005188a0 at 005188d5
;   FUN_00521e40 at 00521f08
;
; Referenced Globals:
;   undefined4 DAT_005db364
;   undefined4 DAT_005db36c
;   undefined4 DAT_005db374
;   undefined4 DAT_0061b4c4
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c51d44
;   undefined4 DAT_01c51d48
;   undefined4 DAT_01c51d4c
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d68
;   ... and 5 more
;
; Called Functions:
;   FUN_0045f840
;   FUN_005073d0
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483560
        ;   Label: FUN_00483560
    PUSH ESI                            ; 00483561
    PUSH EDI                            ; 00483562
    PUSH EBP                            ; 00483563
    SUB ESP,0x18                        ; 00483564
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00483567
    MOV EBX,dword ptr [ESP + 0x30]      ; 0048356b
    PUSH EBX                            ; 0048356f
    LEA ESI,[ESP + 0x4]                 ; 00483570
    LEA EDI,[ESP + 0x10]                ; 00483574
    CALL FUN_0045f840                   ; 00483578
        ;   XREF to: 0045f840 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f840()
    LEA ESI,[ESP + 0x4]                 ; 0048357d
    ADD ESP,0x4                         ; 00483581
    MOVSD ES:EDI,ESI                    ; 00483584
    MOVSD ES:EDI,ESI                    ; 00483585
    MOVSD ES:EDI,ESI                    ; 00483586
    FLD float ptr [0x005db364]          ; 00483587 | DAT_005db364
    FLD float ptr [ESP + 0xc]           ; 0048358d
    FMUL ST1                            ; 00483591
    FLD float ptr [ESP + 0x14]          ; 00483593
    FMUL ST2                            ; 00483597
    FLD float ptr [ESP + 0x10]          ; 00483599
    FMULP ST3                           ; 0048359d
    FLD float ptr [EBX]                 ; 0048359f
    FMUL double ptr [0x005db374]        ; 004835a1 | DAT_005db374
    FLD float ptr [EBX + 0x4]           ; 004835a7
    FMUL double ptr [0x005db374]        ; 004835aa | DAT_005db374
    FLD float ptr [EBX + 0x8]           ; 004835b0
    FMUL double ptr [0x005db374]        ; 004835b3 | DAT_005db374
    FLD float ptr [EBX + 0xc]           ; 004835b9
    FMUL double ptr [0x005db374]        ; 004835bc | DAT_005db374
    FXCH ST5                            ; 004835c2
    FMUL double ptr [0x005db36c]        ; 004835c4 | DAT_005db36c
    FXCH ST4                            ; 004835ca
    FMUL double ptr [0x005db36c]        ; 004835cc | DAT_005db36c
    FXCH ST6                            ; 004835d2
    FMUL double ptr [0x005db36c]        ; 004835d4 | DAT_005db36c
    FXCH ST3                            ; 004835da
    CALL FUN_005c03a0                   ; 004835dc
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [0x01c51d5c]        ; 004835e1 | DAT_01c51d5c
    FLD float ptr [EBX + 0x10]          ; 004835e7
    FMUL double ptr [0x005db374]        ; 004835ea | DAT_005db374
    FXCH ST2                            ; 004835f0
    CALL FUN_005c03a0                   ; 004835f2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [0x01c51d60]        ; 004835f7 | DAT_01c51d60
    FLD float ptr [EBX + 0x14]          ; 004835fd
    FMUL double ptr [0x005db374]        ; 00483600 | DAT_005db374
    FXCH                                ; 00483606
    CALL FUN_005c03a0                   ; 00483608
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [0x01c51d64]        ; 0048360d | DAT_01c51d64
    FLD float ptr [EBX + 0x18]          ; 00483613
    FMUL double ptr [0x005db374]        ; 00483616 | DAT_005db374
    FXCH ST5                            ; 0048361c
    CALL FUN_005c03a0                   ; 0048361e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [0x01c51d68]        ; 00483623 | DAT_01c51d68
    FLD float ptr [EBX + 0x1c]          ; 00483629
    FMUL double ptr [0x005db374]        ; 0048362c | DAT_005db374
    MOV EDX,0x10000                     ; 00483632
    FXCH ST2                            ; 00483637
    CALL FUN_005c03a0                   ; 00483639
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [0x01c51d6c]        ; 0048363e | DAT_01c51d6c
    FLD float ptr [EBX + 0x20]          ; 00483644
    FMUL double ptr [0x005db374]        ; 00483647 | DAT_005db374
    MOV EAX,EDX                         ; 0048364d
    MOV EBX,dword ptr [0x0061b4c4]      ; 0048364f | DAT_0061b4c4
    FXCH                                ; 00483655
    CALL FUN_005c03a0                   ; 00483657
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST5                            ; 0048365c
    CALL FUN_005c03a0                   ; 0048365e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 00483663
    CALL FUN_005c03a0                   ; 00483665
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0048366a
    CALL FUN_005c03a0                   ; 0048366c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST5                            ; 00483671
    FISTP dword ptr [0x01c51d70]        ; 00483673 | DAT_01c51d70
    FXCH                                ; 00483679
    FISTP dword ptr [0x01c51d74]        ; 0048367b | DAT_01c51d74
    FISTP dword ptr [0x01c51d78]        ; 00483681 | DAT_01c51d78
    FXCH ST2                            ; 00483687
    FISTP dword ptr [0x01c51d7c]        ; 00483689 | DAT_01c51d7c
    CALL FUN_005c03a0                   ; 0048368f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 00483694
    CALL FUN_005c03a0                   ; 00483696
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0048369b
    CALL FUN_005c03a0                   ; 0048369d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 004836a2
    FISTP dword ptr [0x01c51d44]        ; 004836a4 | DAT_01c51d44
    FISTP dword ptr [0x01c51d48]        ; 004836aa | DAT_01c51d48
    FISTP dword ptr [0x01c51d4c]        ; 004836b0 | DAT_01c51d4c
    IMUL EDX                            ; 004836b6
    IDIV EBX                            ; 004836b8
    MOV EDX,dword ptr [0x01c4f010]      ; 004836ba | DAT_01c4f010
    MOV ECX,dword ptr [0x01c4f008]      ; 004836c0 | DAT_01c4f008
    MOV EBX,dword ptr [0x01c4f014]      ; 004836c6 | DAT_01c4f014
    MOV ESI,dword ptr [0x01c4f00c]      ; 004836cc | DAT_01c4f00c
    SUB EDX,ECX                         ; 004836d2
    MOV dword ptr [EBP + 0x24],EAX      ; 004836d4
    INC EDX                             ; 004836d7
    SUB EBX,ESI                         ; 004836d8
    SHL EDX,0x10                        ; 004836da
    INC EBX                             ; 004836dd
    MOV EAX,EDX                         ; 004836de
    SAR EDX,0x1f                        ; 004836e0
    IDIV EBX                            ; 004836e3
    MOV EDX,0x10000                     ; 004836e5
    MOV EBX,dword ptr [0x0061b4c4]      ; 004836ea | DAT_0061b4c4
    MOV dword ptr [EBP + 0x28],EAX      ; 004836f0
    IMUL EDX                            ; 004836f3
    IDIV EBX                            ; 004836f5
    MOV dword ptr [EBP + 0x28],EAX      ; 004836f7
    MOV EDX,dword ptr [0x01c51d5c]      ; 004836fa | DAT_01c51d5c
    MOV EAX,dword ptr [EBP + 0x24]      ; 00483700
    IMUL EDX                            ; 00483703
    SHRD EAX,EDX,0x10                   ; 00483705
    MOV [0x01c51d5c],EAX                ; 00483709 | DAT_01c51d5c
    MOV EDX,dword ptr [0x01c51d68]      ; 0048370e | DAT_01c51d68
    MOV EAX,dword ptr [EBP + 0x24]      ; 00483714
    IMUL EDX                            ; 00483717
    SHRD EAX,EDX,0x10                   ; 00483719
    MOV EDX,dword ptr [0x01c51d74]      ; 0048371d | DAT_01c51d74
    MOV [0x01c51d68],EAX                ; 00483723 | DAT_01c51d68
    MOV EAX,dword ptr [EBP + 0x24]      ; 00483728
    IMUL EDX                            ; 0048372b
    SHRD EAX,EDX,0x10                   ; 0048372d
    MOV EDX,dword ptr [0x01c51d60]      ; 00483731 | DAT_01c51d60
    MOV [0x01c51d74],EAX                ; 00483737 | DAT_01c51d74
    MOV EAX,dword ptr [EBP + 0x28]      ; 0048373c
    IMUL EDX                            ; 0048373f
    SHRD EAX,EDX,0x10                   ; 00483741
    MOV EDX,dword ptr [0x01c51d6c]      ; 00483745 | DAT_01c51d6c
    MOV [0x01c51d60],EAX                ; 0048374b | DAT_01c51d60
    MOV EAX,dword ptr [EBP + 0x28]      ; 00483750
    IMUL EDX                            ; 00483753
    SHRD EAX,EDX,0x10                   ; 00483755
    MOV EDX,dword ptr [0x01c51d78]      ; 00483759 | DAT_01c51d78
    MOV [0x01c51d6c],EAX                ; 0048375f | DAT_01c51d6c
    MOV EAX,dword ptr [EBP + 0x28]      ; 00483764
    IMUL EDX                            ; 00483767
    SHRD EAX,EDX,0x10                   ; 00483769
    MOV [0x01c51d78],EAX                ; 0048376d | DAT_01c51d78
    CALL FUN_005073d0                   ; 00483772
        ;   XREF to: 005073d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005073d0()
    ADD ESP,0x18                        ; 00483777
    POP EBP                             ; 0048377a
    POP EDI                             ; 0048377b
    POP ESI                             ; 0048377c
    POP EBX                             ; 0048377d
    RET                                 ; 0048377e

