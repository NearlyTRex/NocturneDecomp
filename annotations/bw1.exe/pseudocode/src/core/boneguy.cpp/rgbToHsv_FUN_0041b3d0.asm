; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_rgbToHsv_FUN_0041b3d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005d4561
;   undefined4 DAT_005d4569
;   undefined4 DAT_005d4571
;   undefined4 DAT_005d4579
;   undefined4 DAT_005d4581
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b3d0
        ;   Label: core_boneguy.cpp_rgbToHsv_FUN_0041b3d0
    PUSH EDI                            ; 0041b3d1
    PUSH EBP                            ; 0041b3d2
    MOV EBP,ESP                         ; 0041b3d3
    SUB ESP,0x40                        ; 0041b3d5
    AND ESP,0xfffffff8                  ; 0041b3d8
    MOV EAX,dword ptr [EBP + 0x10]      ; 0041b3db
    MOV EDX,ESI                         ; 0041b3de
    MOV ECX,dword ptr [EAX]             ; 0041b3e0
    MOV dword ptr [ESP + 0x3c],ECX      ; 0041b3e2
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041b3e6
    MOV EAX,dword ptr [EAX + 0x8]       ; 0041b3e9
    MOV dword ptr [ESP + 0x38],ECX      ; 0041b3ec
    MOV dword ptr [ESP + 0x34],EAX      ; 0041b3f0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041b3f4
    FLD float ptr [ESP + 0x38]          ; 0041b3f8
    MOV dword ptr [ESP + 0x30],EAX      ; 0041b3fc
    FCOMP float ptr [ESP + 0x3c]        ; 0041b400
    FNSTSW AX                           ; 0041b404
    SAHF                                ; 0041b406
    JC 0x0041b529                       ; 0041b407
        ;   XREF to: 0041b529 (CONDITIONAL_JUMP)  ; LAB_0041b529
    FLD float ptr [ESP + 0x34]          ; 0041b40d
        ;   Label: LAB_0041b40d
    FCOMP float ptr [ESP + 0x30]        ; 0041b411
    FNSTSW AX                           ; 0041b415
    SAHF                                ; 0041b417
    JNC 0x0041b422                      ; 0041b418
        ;   XREF to: 0041b422 (CONDITIONAL_JUMP)  ; LAB_0041b422
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041b41a
    MOV dword ptr [ESP + 0x30],EAX      ; 0041b41e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041b422
        ;   Label: LAB_0041b422
    FLD float ptr [ESP + 0x38]          ; 0041b426
    MOV dword ptr [ESP + 0x10],EAX      ; 0041b42a
    FCOMP float ptr [ESP + 0x3c]        ; 0041b42e
    FNSTSW AX                           ; 0041b432
    SAHF                                ; 0041b434
    JBE 0x0041b43f                      ; 0041b435
        ;   XREF to: 0041b43f (CONDITIONAL_JUMP)  ; LAB_0041b43f
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041b437
    MOV dword ptr [ESP + 0x10],EAX      ; 0041b43b
    FLD float ptr [ESP + 0x34]          ; 0041b43f
        ;   Label: LAB_0041b43f
    FCOMP float ptr [ESP + 0x10]        ; 0041b443
    FNSTSW AX                           ; 0041b447
    SAHF                                ; 0041b449
    JBE 0x0041b454                      ; 0041b44a
        ;   XREF to: 0041b454 (CONDITIONAL_JUMP)  ; LAB_0041b454
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041b44c
    MOV dword ptr [ESP + 0x10],EAX      ; 0041b450
    FLD float ptr [ESP + 0x10]          ; 0041b454
        ;   Label: LAB_0041b454
    FLD ST0                             ; 0041b458
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041b45a
    FLDZ                                ; 0041b45e
    FXCH ST2                            ; 0041b460
    FSUB float ptr [ESP + 0x30]         ; 0041b462
    MOV dword ptr [ESP + 0x28],EAX      ; 0041b466
    FSTP float ptr [ESP + 0x2c]         ; 0041b46a
    FXCH                                ; 0041b46e
    FCOMPP                              ; 0041b470
    FNSTSW AX                           ; 0041b472
    SAHF                                ; 0041b474
    JNC 0x0041b532                      ; 0041b475
        ;   XREF to: 0041b532 (CONDITIONAL_JUMP)  ; LAB_0041b532
    FLD float ptr [ESP + 0x2c]          ; 0041b47b
    FDIV float ptr [ESP + 0x10]         ; 0041b47f
    FSTP float ptr [ESP + 0x8]          ; 0041b483
    FLD float ptr [ESP + 0x8]           ; 0041b487
        ;   Label: LAB_0041b487
    FLDZ                                ; 0041b48b
    FXCH                                ; 0041b48d
    FSTP double ptr [ESP]               ; 0041b48f
    FCOMP double ptr [ESP]              ; 0041b492
    FNSTSW AX                           ; 0041b495
    SAHF                                ; 0041b497
    JNC 0x0041b56f                      ; 0041b498
        ;   XREF to: 0041b56f (CONDITIONAL_JUMP)  ; LAB_0041b56f
    FLD double ptr [ESP]                ; 0041b49e
    FMUL double ptr [0x005d4561]        ; 0041b4a1 | DAT_005d4561
    FLD float ptr [ESP + 0x3c]          ; 0041b4a7
    FXCH                                ; 0041b4ab
    FSTP float ptr [ESP + 0x8]          ; 0041b4ad
    FCOMP float ptr [ESP + 0x10]        ; 0041b4b1
    FNSTSW AX                           ; 0041b4b5
    SAHF                                ; 0041b4b7
    JZ 0x0041b53d                       ; 0041b4b8
        ;   XREF to: 0041b53d (CONDITIONAL_JUMP)  ; LAB_0041b53d
    FLD float ptr [ESP + 0x38]          ; 0041b4be
    FCOMP float ptr [ESP + 0x10]        ; 0041b4c2
    FNSTSW AX                           ; 0041b4c6
    SAHF                                ; 0041b4c8
    JZ 0x0041b54b                       ; 0041b4c9
        ;   XREF to: 0041b54b (CONDITIONAL_JUMP)  ; LAB_0041b54b
    FLD float ptr [ESP + 0x3c]          ; 0041b4cf
    FSUB float ptr [ESP + 0x38]         ; 0041b4d3
    FDIV float ptr [ESP + 0x2c]         ; 0041b4d7
    FADD double ptr [0x005d4569]        ; 0041b4db | DAT_005d4569
    FSTP float ptr [ESP + 0xc]          ; 0041b4e1
        ;   Label: LAB_0041b4e1
    FLD float ptr [ESP + 0xc]           ; 0041b4e5
    FLD ST0                             ; 0041b4e9
    FMUL double ptr [0x005d4579]        ; 0041b4eb | DAT_005d4579
    FSTP ST1                            ; 0041b4f1
    FST float ptr [ESP + 0xc]           ; 0041b4f3
    FLDZ                                ; 0041b4f7
    FCOMPP                              ; 0041b4f9
    FNSTSW AX                           ; 0041b4fb
    SAHF                                ; 0041b4fd
    JA 0x0041b55f                       ; 0041b4fe
        ;   XREF to: 0041b55f (CONDITIONAL_JUMP)  ; LAB_0041b55f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041b500
        ;   Label: LAB_0041b500
    MOV dword ptr [ESP + 0x14],EAX      ; 0041b504
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041b508
    LEA ESI,[ESP + 0x14]                ; 0041b50c
    MOV dword ptr [ESP + 0x18],EAX      ; 0041b510
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041b514
    MOV EDI,EDX                         ; 0041b518
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041b51a
    MOVSD ES:EDI,ESI                    ; 0041b51e
    MOVSD ES:EDI,ESI                    ; 0041b51f
    MOVSD ES:EDI,ESI                    ; 0041b520
    MOV EAX,EDX                         ; 0041b521
    MOV ESP,EBP                         ; 0041b523
    POP EBP                             ; 0041b525
    POP EDI                             ; 0041b526
    POP EBX                             ; 0041b527
    RET                                 ; 0041b528
    MOV dword ptr [ESP + 0x30],ECX      ; 0041b529
        ;   Label: LAB_0041b529
    JMP 0x0041b40d                      ; 0041b52d
        ;   XREF to: 0041b40d (UNCONDITIONAL_JUMP)  ; LAB_0041b40d
    XOR ECX,ECX                         ; 0041b532
        ;   Label: LAB_0041b532
    MOV dword ptr [ESP + 0x8],ECX       ; 0041b534
    JMP 0x0041b487                      ; 0041b538
        ;   XREF to: 0041b487 (UNCONDITIONAL_JUMP)  ; LAB_0041b487
    FLD float ptr [ESP + 0x38]          ; 0041b53d
        ;   Label: LAB_0041b53d
    FSUB float ptr [ESP + 0x34]         ; 0041b541
    FDIV float ptr [ESP + 0x2c]         ; 0041b545
    JMP 0x0041b4e1                      ; 0041b549
        ;   XREF to: 0041b4e1 (UNCONDITIONAL_JUMP)  ; LAB_0041b4e1
    FLD float ptr [ESP + 0x34]          ; 0041b54b
        ;   Label: LAB_0041b54b
    FSUB float ptr [ESP + 0x3c]         ; 0041b54f
    FDIV float ptr [ESP + 0x2c]         ; 0041b553
    FSUBR double ptr [0x005d4571]       ; 0041b557 | DAT_005d4571
    JMP 0x0041b4e1                      ; 0041b55d
        ;   XREF to: 0041b4e1 (UNCONDITIONAL_JUMP)  ; LAB_0041b4e1
    FLD float ptr [ESP + 0xc]           ; 0041b55f
        ;   Label: LAB_0041b55f
    FADD float ptr [0x005d4581]         ; 0041b563 | DAT_005d4581
    FSTP float ptr [ESP + 0xc]          ; 0041b569
    JMP 0x0041b500                      ; 0041b56d
        ;   XREF to: 0041b500 (UNCONDITIONAL_JUMP)  ; LAB_0041b500
    XOR EBX,EBX                         ; 0041b56f
        ;   Label: LAB_0041b56f
    MOV dword ptr [ESP + 0xc],EBX       ; 0041b571
    JMP 0x0041b500                      ; 0041b575
        ;   XREF to: 0041b500 (UNCONDITIONAL_JUMP)  ; LAB_0041b500

