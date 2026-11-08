; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045f3e0(float *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[55]:
;   FUN_004088b0 at 00408902
;   FUN_0041a200 at 0041a21a
;   FUN_0041a700 at 0041a77f
;   FUN_0041de90 at 0041deca
;   FUN_0041e130 at 0041e60c
;   FUN_00422f90 at 004231b1
;   FUN_00426030 at 004261c8
;   FUN_004263d0 at 00426741
;   FUN_00430d90 at 00430fe8
;   FUN_00434c60 at 00434ee3
;   ... and 45 more
;
; Called Functions:
;   FUN_0045fd80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f3e0
        ;   Label: FUN_0045f3e0
    PUSH ESI                            ; 0045f3e1
    SUB ESP,0x18                        ; 0045f3e2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045f3e5
    MOV ESI,dword ptr [ESP + 0x28]      ; 0045f3e9
    PUSH ESI                            ; 0045f3ed
    LEA EAX,[ESP + 0x8]                 ; 0045f3ee
    PUSH EAX                            ; 0045f3f2
    LEA EAX,[ESP + 0x8]                 ; 0045f3f3
    PUSH EAX                            ; 0045f3f7
    CALL FUN_0045fd80                   ; 0045f3f8
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0045fd80()
    ADD ESP,0xc                         ; 0045f3fd
    LEA EAX,[ESI + 0x8]                 ; 0045f400
    PUSH EAX                            ; 0045f403
    LEA EAX,[ESP + 0x10]                ; 0045f404
    PUSH EAX                            ; 0045f408
    LEA EAX,[ESP + 0x10]                ; 0045f409
    PUSH EAX                            ; 0045f40d
    CALL FUN_0045fd80                   ; 0045f40e
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0045fd80()
    ADD ESP,0xc                         ; 0045f413
    LEA EAX,[ESI + 0x4]                 ; 0045f416
    PUSH EAX                            ; 0045f419
    LEA EAX,[ESP + 0x18]                ; 0045f41a
    PUSH EAX                            ; 0045f41e
    LEA EAX,[ESP + 0x18]                ; 0045f41f
    PUSH EAX                            ; 0045f423
    CALL FUN_0045fd80                   ; 0045f424
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0045fd80()
    ADD ESP,0xc                         ; 0045f429
    FLD float ptr [ESP + 0x10]          ; 0045f42c
    FMUL float ptr [ESP]                ; 0045f430
    FMUL float ptr [ESP + 0x8]          ; 0045f433
    FLD float ptr [ESP + 0x14]          ; 0045f437
    FMUL float ptr [ESP + 0xc]          ; 0045f43b
    FADDP                               ; 0045f43f
    FSTP float ptr [EBX]                ; 0045f441
    FLD float ptr [ESP + 0x10]          ; 0045f443
    FMUL float ptr [ESP]                ; 0045f447
    FMUL float ptr [ESP + 0xc]          ; 0045f44a
    FLD float ptr [ESP + 0x14]          ; 0045f44e
    FCHS                                ; 0045f452
    FMUL float ptr [ESP + 0x8]          ; 0045f454
    FADDP                               ; 0045f458
    FSTP float ptr [EBX + 0x4]          ; 0045f45a
    FLD float ptr [ESP + 0x10]          ; 0045f45d
    FMUL float ptr [ESP + 0x4]          ; 0045f461
    FSTP float ptr [EBX + 0x8]          ; 0045f465
    FLD float ptr [ESP + 0x8]           ; 0045f468
    FMUL float ptr [ESP + 0x4]          ; 0045f46c
    FSTP float ptr [EBX + 0xc]          ; 0045f470
    FLD float ptr [ESP + 0xc]           ; 0045f473
    FMUL float ptr [ESP + 0x4]          ; 0045f477
    FSTP float ptr [EBX + 0x10]         ; 0045f47b
    FLD float ptr [ESP]                 ; 0045f47e
    FCHS                                ; 0045f481
    FSTP float ptr [EBX + 0x14]         ; 0045f483
    FLD float ptr [ESP + 0x14]          ; 0045f486
    FMUL float ptr [ESP]                ; 0045f48a
    FMUL float ptr [ESP + 0x8]          ; 0045f48d
    FLD float ptr [ESP + 0x10]          ; 0045f491
    FCHS                                ; 0045f495
    FMUL float ptr [ESP + 0xc]          ; 0045f497
    FADDP                               ; 0045f49b
    FSTP float ptr [EBX + 0x18]         ; 0045f49d
    FLD float ptr [ESP + 0x14]          ; 0045f4a0
    FMUL float ptr [ESP]                ; 0045f4a4
    FMUL float ptr [ESP + 0xc]          ; 0045f4a7
    FLD float ptr [ESP + 0x8]           ; 0045f4ab
    FMUL float ptr [ESP + 0x10]         ; 0045f4af
    FADDP                               ; 0045f4b3
    FSTP float ptr [EBX + 0x1c]         ; 0045f4b5
    FLD float ptr [ESP + 0x14]          ; 0045f4b8
    FMUL float ptr [ESP + 0x4]          ; 0045f4bc
    FSTP float ptr [EBX + 0x20]         ; 0045f4c0
    ADD ESP,0x18                        ; 0045f4c3
    POP ESI                             ; 0045f4c6
    POP EBX                             ; 0045f4c7
    RET                                 ; 0045f4c8

