; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9460(float *param_1,float *param_2,float *param_3,float *param_4)
;
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004f9990 at 004f99b3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9460
        ;   Label: FUN_004f9460
    PUSH ESI                            ; 004f9461
    PUSH EDI                            ; 004f9462
    PUSH EBP                            ; 004f9463
    MOV EBP,ESP                         ; 004f9464
    SUB ESP,0x68                        ; 004f9466
    AND ESP,0xfffffff8                  ; 004f9469
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f946c
    MOV EBX,dword ptr [EBP + 0x18]      ; 004f946f
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004f9472
    FLD float ptr [ECX]                 ; 004f9475
    FLD float ptr [ECX + 0x4]           ; 004f9477
    FLD float ptr [ECX + 0x8]           ; 004f947a
    MOV EDI,ESP                         ; 004f947d
    LEA ESI,[ESP + 0x48]                ; 004f947f
    FXCH ST2                            ; 004f9483
    FSUB float ptr [EBX]                ; 004f9485
    FXCH                                ; 004f9487
    FSUB float ptr [EBX + 0x4]          ; 004f9489
    FXCH ST2                            ; 004f948c
    FSUB float ptr [EBX + 0x8]          ; 004f948e
    FXCH ST2                            ; 004f9491
    FSTP float ptr [ESP + 0x4c]         ; 004f9493
    FXCH                                ; 004f9497
    FSTP float ptr [ESP + 0x50]         ; 004f9499
    FSTP float ptr [ESP + 0x48]         ; 004f949d
    MOVSD ES:EDI,ESI                    ; 004f94a1
    MOVSD ES:EDI,ESI                    ; 004f94a2
    MOVSD ES:EDI,ESI                    ; 004f94a3
    MOV EAX,ESP                         ; 004f94a4
    LEA ESI,[ESP + 0x24]                ; 004f94a6
    CMP ESI,EAX                         ; 004f94aa
    JNZ 0x004f95da                      ; 004f94ac
        ;   XREF to: 004f95da (CONDITIONAL_JUMP)  ; LAB_004f95da
    MOV EAX,dword ptr [EBP + 0x20]      ; 004f94b2
        ;   Label: LAB_004f94b2
    LEA EDI,[ESP + 0x18]                ; 004f94b5
    LEA ESI,[ESP + 0x54]                ; 004f94b9
    FLD float ptr [EAX + 0x4]           ; 004f94bd
    FLD float ptr [EAX + 0x8]           ; 004f94c0
    FLD float ptr [EAX]                 ; 004f94c3
    LEA EAX,[ESP + 0x18]                ; 004f94c5
    FSUB float ptr [ECX]                ; 004f94c9
    FXCH ST2                            ; 004f94cb
    FSUB float ptr [ECX + 0x4]          ; 004f94cd
    FXCH                                ; 004f94d0
    FSUB float ptr [ECX + 0x8]          ; 004f94d2
    FXCH                                ; 004f94d5
    FSTP float ptr [ESP + 0x58]         ; 004f94d7
    FSTP float ptr [ESP + 0x5c]         ; 004f94db
    FSTP float ptr [ESP + 0x54]         ; 004f94df
    LEA ECX,[ESP + 0x30]                ; 004f94e3
    MOVSD ES:EDI,ESI                    ; 004f94e7
    MOVSD ES:EDI,ESI                    ; 004f94e8
    MOVSD ES:EDI,ESI                    ; 004f94e9
    CMP ECX,EAX                         ; 004f94ea
    JZ 0x004f9506                       ; 004f94ec
        ;   XREF to: 004f9506 (CONDITIONAL_JUMP)  ; LAB_004f9506
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f94ee
    MOV dword ptr [ESP + 0x30],EAX      ; 004f94f2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f94f6
    MOV dword ptr [ESP + 0x34],EAX      ; 004f94fa
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f94fe
    MOV dword ptr [ESP + 0x38],EAX      ; 004f9502
    FLD float ptr [ESP + 0x28]          ; 004f9506
        ;   Label: LAB_004f9506
    FMUL float ptr [ESP + 0x38]         ; 004f950a
    FLD float ptr [ESP + 0x2c]          ; 004f950e
    FMUL float ptr [ESP + 0x30]         ; 004f9512
    FLD float ptr [ESP + 0x24]          ; 004f9516
    FMUL float ptr [ESP + 0x34]         ; 004f951a
    FLD float ptr [ESP + 0x2c]          ; 004f951e
    FMUL float ptr [ESP + 0x34]         ; 004f9522
    FLD float ptr [ESP + 0x24]          ; 004f9526
    FMUL float ptr [ESP + 0x38]         ; 004f952a
    FLD float ptr [ESP + 0x28]          ; 004f952e
    FMUL float ptr [ESP + 0x30]         ; 004f9532
    LEA EDI,[ESP + 0x3c]                ; 004f9536
    LEA ESI,[ESP + 0xc]                 ; 004f953a
    LEA EAX,[ESP + 0x3c]                ; 004f953e
    FXCH ST2                            ; 004f9542
    FSUBP ST5,ST0                       ; 004f9544
    FSUBP ST3,ST0                       ; 004f9546
    FSUBP                               ; 004f9548
    FXCH                                ; 004f954a
    FSTP float ptr [ESP + 0x10]         ; 004f954c
    FSTP float ptr [ESP + 0x14]         ; 004f9550
    FSTP float ptr [ESP + 0xc]          ; 004f9554
    MOVSD ES:EDI,ESI                    ; 004f9558
    MOVSD ES:EDI,ESI                    ; 004f9559
    MOVSD ES:EDI,ESI                    ; 004f955a
    CMP EDX,EAX                         ; 004f955b
    JZ 0x004f9573                       ; 004f955d
        ;   XREF to: 004f9573 (CONDITIONAL_JUMP)  ; LAB_004f9573
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f955f
    MOV dword ptr [EDX],EAX             ; 004f9563
    MOV EAX,dword ptr [ESP + 0x40]      ; 004f9565
    MOV dword ptr [EDX + 0x4],EAX       ; 004f9569
    MOV EAX,dword ptr [ESP + 0x44]      ; 004f956c
    MOV dword ptr [EDX + 0x8],EAX       ; 004f9570
    FLD float ptr [EDX + 0x4]           ; 004f9573
        ;   Label: LAB_004f9573
    FMUL ST0                            ; 004f9576
    FLD float ptr [EDX]                 ; 004f9578
    FMUL ST0                            ; 004f957a
    FADDP                               ; 004f957c
    FLD float ptr [EDX + 0x8]           ; 004f957e
    FMUL ST0                            ; 004f9581
    FADDP                               ; 004f9583
    FSQRT                               ; 004f9585
    FLDZ                                ; 004f9587
    FXCH                                ; 004f9589
    FSTP float ptr [ESP + 0x64]         ; 004f958b
    FCOMP float ptr [ESP + 0x64]        ; 004f958f
    FNSTSW AX                           ; 004f9593
    SAHF                                ; 004f9595
    JNC 0x004f95f6                      ; 004f9596
        ;   XREF to: 004f95f6 (CONDITIONAL_JUMP)  ; LAB_004f95f6
    FLD1                                ; 004f9598
    FLD float ptr [EDX]                 ; 004f959a
    FXCH                                ; 004f959c
    FDIV float ptr [ESP + 0x64]         ; 004f959e
    FXCH                                ; 004f95a2
    FMUL ST1                            ; 004f95a4
    FLD float ptr [EDX + 0x4]           ; 004f95a6
    FMUL ST2                            ; 004f95a9
    FLD float ptr [EDX + 0x8]           ; 004f95ab
    FMULP ST3                           ; 004f95ae
    FXCH                                ; 004f95b0
    FSTP float ptr [EDX]                ; 004f95b2
    FSTP float ptr [EDX + 0x4]          ; 004f95b4
    FSTP float ptr [EDX + 0x8]          ; 004f95b7
    FLD float ptr [EDX + 0x4]           ; 004f95ba
        ;   Label: LAB_004f95ba
    FMUL float ptr [EBX + 0x4]          ; 004f95bd
    FLD float ptr [EDX]                 ; 004f95c0
    FMUL float ptr [EBX]                ; 004f95c2
    FADDP                               ; 004f95c4
    FLD float ptr [EDX + 0x8]           ; 004f95c6
    FMUL float ptr [EBX + 0x8]          ; 004f95c9
    FADDP                               ; 004f95cc
    FCHS                                ; 004f95ce
    FSTP float ptr [EDX + 0xc]          ; 004f95d0
    MOV ESP,EBP                         ; 004f95d3
    POP EBP                             ; 004f95d5
    POP EDI                             ; 004f95d6
    POP ESI                             ; 004f95d7
    POP EBX                             ; 004f95d8
    RET                                 ; 004f95d9
    MOV EAX,dword ptr [ESP]             ; 004f95da
        ;   Label: LAB_004f95da
    MOV dword ptr [ESP + 0x24],EAX      ; 004f95dd
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f95e1
    MOV dword ptr [ESP + 0x28],EAX      ; 004f95e5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f95e9
    MOV dword ptr [ESP + 0x2c],EAX      ; 004f95ed
    JMP 0x004f94b2                      ; 004f95f1
        ;   XREF to: 004f94b2 (UNCONDITIONAL_JUMP)  ; LAB_004f94b2
    MOV dword ptr [EDX + 0x8],0x0       ; 004f95f6
        ;   Label: LAB_004f95f6
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f95fd
    MOV dword ptr [EDX + 0x4],EAX       ; 004f9600
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f9603
    MOV dword ptr [EDX],EAX             ; 004f9606
    JMP 0x004f95ba                      ; 004f9608
        ;   XREF to: 004f95ba (UNCONDITIONAL_JUMP)  ; LAB_004f95ba

