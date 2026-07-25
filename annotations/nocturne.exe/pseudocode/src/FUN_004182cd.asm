; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_004182cd(float *param_1)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   undefined4 DAT_0057914e
;   undefined4 DAT_00579156
;   undefined4 DAT_0057915e
;   undefined4 DAT_00579166
;   undefined4 DAT_0057916e
;
; *****************************************************************************

section .text

    PUSH ESP                            ; 004182cd
        ;   Label: FUN_004182cd
    AND AL,byte ptr [EAX]               ; 004182ce
    PUSH EBX                            ; 004182d0
    PUSH EBP                            ; 004182d1
    MOV EBP,ESP                         ; 004182d2
    SUB ESP,0x34                        ; 004182d4
    AND ESP,0xfffffff8                  ; 004182d7
    MOV EDX,dword ptr [EBP + 0xc]       ; 004182da
    MOV EAX,dword ptr [EBP + 0x10]      ; 004182dd
    MOV ECX,dword ptr [EAX]             ; 004182e0
    MOV dword ptr [ESP + 0x28],ECX      ; 004182e2
    MOV ECX,dword ptr [EAX + 0x4]       ; 004182e6
    MOV EAX,dword ptr [EAX + 0x8]       ; 004182e9
    MOV dword ptr [ESP + 0x2c],ECX      ; 004182ec
    MOV dword ptr [ESP + 0x24],EAX      ; 004182f0
    MOV EAX,dword ptr [ESP + 0x28]      ; 004182f4
    FLD float ptr [ESP + 0x2c]          ; 004182f8
    MOV dword ptr [ESP + 0x20],EAX      ; 004182fc
    FCOMP float ptr [ESP + 0x28]        ; 00418300
    FNSTSW AX                           ; 00418304
    SAHF                                ; 00418306
    JC 0x00418413                       ; 00418307
        ;   XREF to: 00418413 (CONDITIONAL_JUMP)  ; LAB_00418413
    FLD float ptr [ESP + 0x24]          ; 0041830d
        ;   Label: LAB_0041830d
    FCOMP float ptr [ESP + 0x20]        ; 00418311
    FNSTSW AX                           ; 00418315
    SAHF                                ; 00418317
    JNC 0x00418322                      ; 00418318
        ;   XREF to: 00418322 (CONDITIONAL_JUMP)  ; LAB_00418322
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041831a
    MOV dword ptr [ESP + 0x20],EAX      ; 0041831e
    MOV EAX,dword ptr [ESP + 0x28]      ; 00418322
        ;   Label: LAB_00418322
    FLD float ptr [ESP + 0x2c]          ; 00418326
    MOV dword ptr [ESP + 0x10],EAX      ; 0041832a
    FCOMP float ptr [ESP + 0x28]        ; 0041832e
    FNSTSW AX                           ; 00418332
    SAHF                                ; 00418334
    JBE 0x0041833f                      ; 00418335
        ;   XREF to: 0041833f (CONDITIONAL_JUMP)  ; LAB_0041833f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00418337
    MOV dword ptr [ESP + 0x10],EAX      ; 0041833b
    FLD float ptr [ESP + 0x24]          ; 0041833f
        ;   Label: LAB_0041833f
    FCOMP float ptr [ESP + 0x10]        ; 00418343
    FNSTSW AX                           ; 00418347
    SAHF                                ; 00418349
    JBE 0x00418354                      ; 0041834a
        ;   XREF to: 00418354 (CONDITIONAL_JUMP)  ; LAB_00418354
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041834c
    MOV dword ptr [ESP + 0x10],EAX      ; 00418350
    FLD float ptr [ESP + 0x10]          ; 00418354
        ;   Label: LAB_00418354
    FLD ST0                             ; 00418358
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041835a
    FLDZ                                ; 0041835e
    FXCH ST2                            ; 00418360
    FSUB float ptr [ESP + 0x20]         ; 00418362
    MOV dword ptr [ESP + 0x1c],EAX      ; 00418366
    FSTP float ptr [ESP + 0x30]         ; 0041836a
    FXCH                                ; 0041836e
    FCOMPP                              ; 00418370
    FNSTSW AX                           ; 00418372
    SAHF                                ; 00418374
    JNC 0x0041841c                      ; 00418375
        ;   XREF to: 0041841c (CONDITIONAL_JUMP)  ; LAB_0041841c
    FLD float ptr [ESP + 0x30]          ; 0041837b
    FDIV float ptr [ESP + 0x10]         ; 0041837f
    FSTP float ptr [ESP + 0x8]          ; 00418383
    FLD float ptr [ESP + 0x8]           ; 00418387
        ;   Label: LAB_00418387
    FLDZ                                ; 0041838b
    FXCH                                ; 0041838d
    FSTP double ptr [ESP]               ; 0041838f
    FCOMP double ptr [ESP]              ; 00418392
    FNSTSW AX                           ; 00418395
    SAHF                                ; 00418397
    JNC 0x00418459                      ; 00418398
        ;   XREF to: 00418459 (CONDITIONAL_JUMP)  ; LAB_00418459
    FLD double ptr [ESP]                ; 0041839e
    FMUL double ptr [0x0057914e]        ; 004183a1 | DAT_0057914e
    FLD float ptr [ESP + 0x28]          ; 004183a7
    FXCH                                ; 004183ab
    FSTP float ptr [ESP + 0x8]          ; 004183ad
    FCOMP float ptr [ESP + 0x10]        ; 004183b1
    FNSTSW AX                           ; 004183b5
    SAHF                                ; 004183b7
    JZ 0x00418427                       ; 004183b8
        ;   XREF to: 00418427 (CONDITIONAL_JUMP)  ; LAB_00418427
    FLD float ptr [ESP + 0x2c]          ; 004183ba
    FCOMP float ptr [ESP + 0x10]        ; 004183be
    FNSTSW AX                           ; 004183c2
    SAHF                                ; 004183c4
    JZ 0x00418435                       ; 004183c5
        ;   XREF to: 00418435 (CONDITIONAL_JUMP)  ; LAB_00418435
    FLD float ptr [ESP + 0x28]          ; 004183c7
    FSUB float ptr [ESP + 0x2c]         ; 004183cb
    FDIV float ptr [ESP + 0x30]         ; 004183cf
    FADD double ptr [0x00579156]        ; 004183d3 | DAT_00579156
    FSTP float ptr [ESP + 0xc]          ; 004183d9
        ;   Label: LAB_004183d9
    FLD float ptr [ESP + 0xc]           ; 004183dd
    FLD ST0                             ; 004183e1
    FMUL double ptr [0x00579166]        ; 004183e3 | DAT_00579166
    FSTP ST1                            ; 004183e9
    FST float ptr [ESP + 0xc]           ; 004183eb
    FLDZ                                ; 004183ef
    FCOMPP                              ; 004183f1
    FNSTSW AX                           ; 004183f3
    SAHF                                ; 004183f5
    JA 0x00418449                       ; 004183f6
        ;   XREF to: 00418449 (CONDITIONAL_JUMP)  ; LAB_00418449
    MOV EAX,dword ptr [ESP + 0xc]       ; 004183f8
        ;   Label: LAB_004183f8
    MOV dword ptr [EDX],EAX             ; 004183fc
    MOV EAX,dword ptr [ESP + 0x8]       ; 004183fe
    MOV dword ptr [EDX + 0x4],EAX       ; 00418402
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00418405
    MOV dword ptr [EDX + 0x8],EAX       ; 00418409
    MOV EAX,EDX                         ; 0041840c
    MOV ESP,EBP                         ; 0041840e
    POP EBP                             ; 00418410
    POP EBX                             ; 00418411
    RET                                 ; 00418412
    MOV dword ptr [ESP + 0x20],ECX      ; 00418413
        ;   Label: LAB_00418413
    JMP 0x0041830d                      ; 00418417
        ;   XREF to: 0041830d (UNCONDITIONAL_JUMP)  ; LAB_0041830d
    XOR ECX,ECX                         ; 0041841c
        ;   Label: LAB_0041841c
    MOV dword ptr [ESP + 0x8],ECX       ; 0041841e
    JMP 0x00418387                      ; 00418422
        ;   XREF to: 00418387 (UNCONDITIONAL_JUMP)  ; LAB_00418387
    FLD float ptr [ESP + 0x2c]          ; 00418427
        ;   Label: LAB_00418427
    FSUB float ptr [ESP + 0x24]         ; 0041842b
    FDIV float ptr [ESP + 0x30]         ; 0041842f
    JMP 0x004183d9                      ; 00418433
        ;   XREF to: 004183d9 (UNCONDITIONAL_JUMP)  ; LAB_004183d9
    FLD float ptr [ESP + 0x24]          ; 00418435
        ;   Label: LAB_00418435
    FSUB float ptr [ESP + 0x28]         ; 00418439
    FDIV float ptr [ESP + 0x30]         ; 0041843d
    FSUBR double ptr [0x0057915e]       ; 00418441 | DAT_0057915e
    JMP 0x004183d9                      ; 00418447
        ;   XREF to: 004183d9 (UNCONDITIONAL_JUMP)  ; LAB_004183d9
    FLD float ptr [ESP + 0xc]           ; 00418449
        ;   Label: LAB_00418449
    FADD float ptr [0x0057916e]         ; 0041844d | DAT_0057916e
    FSTP float ptr [ESP + 0xc]          ; 00418453
    JMP 0x004183f8                      ; 00418457
        ;   XREF to: 004183f8 (UNCONDITIONAL_JUMP)  ; LAB_004183f8
    XOR EBX,EBX                         ; 00418459
        ;   Label: LAB_00418459
    MOV dword ptr [ESP + 0xc],EBX       ; 0041845b
    JMP 0x004183f8                      ; 0041845f
        ;   XREF to: 004183f8 (UNCONDITIONAL_JUMP)  ; LAB_004183f8

