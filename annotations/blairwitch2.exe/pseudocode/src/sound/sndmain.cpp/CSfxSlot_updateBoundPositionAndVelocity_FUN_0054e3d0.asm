; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_0054e3d0(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0 at 0054e97a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e3d0
        ;   Label: sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_0054e3d0
    PUSH ESI                            ; 0054e3d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0054e3d2
    MOV ECX,dword ptr [EDX + 0x20]      ; 0054e3d6
    CMP ECX,0x1                         ; 0054e3d9
    JNZ 0x0054e47d                      ; 0054e3dc
        ;   XREF to: 0054e47d (CONDITIONAL_JUMP)  ; LAB_0054e47d
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0054e3e2
    FLD float ptr [ECX]                 ; 0054e3e5
    FCOMP double ptr [EDX + 0x4]        ; 0054e3e7
    FNSTSW AX                           ; 0054e3ea
    SAHF                                ; 0054e3ec
    JZ 0x0054e461                       ; 0054e3ed
        ;   XREF to: 0054e461 (CONDITIONAL_JUMP)  ; LAB_0054e461
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0054e3ef
        ;   Label: LAB_0054e3ef
    MOV BL,byte ptr [EDX + 0x118]       ; 0054e3f2
    FLD float ptr [ECX]                 ; 0054e3f8
    OR BL,0x2                           ; 0054e3fa
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0054e3fd
    FSTP double ptr [EDX + 0x4]         ; 0054e400
    FLD float ptr [ECX + 0x4]           ; 0054e403
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0054e406
    FSTP double ptr [EDX + 0xc]         ; 0054e409
    FLD float ptr [ECX + 0x8]           ; 0054e40c
    FSTP double ptr [EDX + 0x14]        ; 0054e40f
    MOV byte ptr [EDX + 0x118],BL       ; 0054e412
    MOV ESI,dword ptr [EDX + 0x34]      ; 0054e418
        ;   Label: LAB_0054e418
    CMP ESI,0x1                         ; 0054e41b
    JNZ 0x0054e4ff                      ; 0054e41e
        ;   XREF to: 0054e4ff (CONDITIONAL_JUMP)  ; LAB_0054e4ff
    MOV ECX,dword ptr [EDX + 0x30]      ; 0054e424
    FLD float ptr [EDX + 0x24]          ; 0054e427
    FCOMP float ptr [ECX]               ; 0054e42a
    FNSTSW AX                           ; 0054e42c
    SAHF                                ; 0054e42e
    JZ 0x0054e4de                       ; 0054e42f
        ;   XREF to: 0054e4de (CONDITIONAL_JUMP)  ; LAB_0054e4de
    MOV ECX,dword ptr [EDX + 0x30]      ; 0054e435
        ;   Label: LAB_0054e435
    FLD float ptr [ECX]                 ; 0054e438
    MOV ECX,dword ptr [EDX + 0x30]      ; 0054e43a
    FSTP float ptr [EDX + 0x24]         ; 0054e43d
    FLD float ptr [ECX + 0x4]           ; 0054e440
    MOV ECX,dword ptr [EDX + 0x30]      ; 0054e443
    FSTP float ptr [EDX + 0x28]         ; 0054e446
    FLD float ptr [ECX + 0x8]           ; 0054e449
    MOV CL,byte ptr [EDX + 0x118]       ; 0054e44c
    OR CL,0x4                           ; 0054e452
    FSTP float ptr [EDX + 0x2c]         ; 0054e455
    MOV byte ptr [EDX + 0x118],CL       ; 0054e458
    POP ESI                             ; 0054e45e
        ;   Label: LAB_0054e45e
    POP EBX                             ; 0054e45f
    RET                                 ; 0054e460
    FLD float ptr [ECX + 0x4]           ; 0054e461
        ;   Label: LAB_0054e461
    FCOMP double ptr [EDX + 0xc]        ; 0054e464
    FNSTSW AX                           ; 0054e467
    SAHF                                ; 0054e469
    JNZ 0x0054e3ef                      ; 0054e46a
        ;   XREF to: 0054e3ef (CONDITIONAL_JUMP)  ; LAB_0054e3ef
    FLD float ptr [ECX + 0x8]           ; 0054e46c
    FCOMP double ptr [EDX + 0x14]       ; 0054e46f
    FNSTSW AX                           ; 0054e472
    SAHF                                ; 0054e474
    JNZ 0x0054e3ef                      ; 0054e475
        ;   XREF to: 0054e3ef (CONDITIONAL_JUMP)  ; LAB_0054e3ef
    JMP 0x0054e418                      ; 0054e47b
        ;   XREF to: 0054e418 (UNCONDITIONAL_JUMP)  ; LAB_0054e418
    CMP ECX,0x2                         ; 0054e47d
        ;   Label: LAB_0054e47d
    JNZ 0x0054e418                      ; 0054e480
        ;   XREF to: 0054e418 (CONDITIONAL_JUMP)  ; LAB_0054e418
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0054e482
    FLD double ptr [EDX + 0x4]          ; 0054e485
    FCOMP double ptr [ECX]              ; 0054e488
    FNSTSW AX                           ; 0054e48a
    SAHF                                ; 0054e48c
    JZ 0x0054e4c3                       ; 0054e48d
        ;   XREF to: 0054e4c3 (CONDITIONAL_JUMP)  ; LAB_0054e4c3
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0054e48f
        ;   Label: LAB_0054e48f
    MOV AH,byte ptr [EDX + 0x118]       ; 0054e492
    FLD double ptr [ECX]                ; 0054e498
    OR AH,0x2                           ; 0054e49a
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0054e49d
    FSTP double ptr [EDX + 0x4]         ; 0054e4a0
    FLD double ptr [ECX + 0x8]          ; 0054e4a3
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0054e4a6
    FSTP double ptr [EDX + 0xc]         ; 0054e4a9
    MOV EBX,dword ptr [ECX + 0x10]      ; 0054e4ac
    MOV dword ptr [EDX + 0x14],EBX      ; 0054e4af
    MOV EBX,dword ptr [ECX + 0x14]      ; 0054e4b2
    MOV dword ptr [EDX + 0x18],EBX      ; 0054e4b5
    MOV byte ptr [EDX + 0x118],AH       ; 0054e4b8
    JMP 0x0054e418                      ; 0054e4be
        ;   XREF to: 0054e418 (UNCONDITIONAL_JUMP)  ; LAB_0054e418
    FLD double ptr [EDX + 0xc]          ; 0054e4c3
        ;   Label: LAB_0054e4c3
    FCOMP double ptr [ECX + 0x8]        ; 0054e4c6
    FNSTSW AX                           ; 0054e4c9
    SAHF                                ; 0054e4cb
    JNZ 0x0054e48f                      ; 0054e4cc
        ;   XREF to: 0054e48f (CONDITIONAL_JUMP)  ; LAB_0054e48f
    FLD double ptr [EDX + 0x14]         ; 0054e4ce
    FCOMP double ptr [ECX + 0x10]       ; 0054e4d1
    FNSTSW AX                           ; 0054e4d4
    SAHF                                ; 0054e4d6
    JNZ 0x0054e48f                      ; 0054e4d7
        ;   XREF to: 0054e48f (CONDITIONAL_JUMP)  ; LAB_0054e48f
    JMP 0x0054e418                      ; 0054e4d9
        ;   XREF to: 0054e418 (UNCONDITIONAL_JUMP)  ; LAB_0054e418
    FLD float ptr [EDX + 0x28]          ; 0054e4de
        ;   Label: LAB_0054e4de
    FCOMP float ptr [ECX + 0x4]         ; 0054e4e1
    FNSTSW AX                           ; 0054e4e4
    SAHF                                ; 0054e4e6
    JNZ 0x0054e435                      ; 0054e4e7
        ;   XREF to: 0054e435 (CONDITIONAL_JUMP)  ; LAB_0054e435
    FLD float ptr [EDX + 0x2c]          ; 0054e4ed
    FCOMP float ptr [ECX + 0x8]         ; 0054e4f0
    FNSTSW AX                           ; 0054e4f3
    SAHF                                ; 0054e4f5
    JNZ 0x0054e435                      ; 0054e4f6
        ;   XREF to: 0054e435 (CONDITIONAL_JUMP)  ; LAB_0054e435
    POP ESI                             ; 0054e4fc
    POP EBX                             ; 0054e4fd
    RET                                 ; 0054e4fe
    CMP ESI,0x2                         ; 0054e4ff
        ;   Label: LAB_0054e4ff
    JNZ 0x0054e45e                      ; 0054e502
        ;   XREF to: 0054e45e (CONDITIONAL_JUMP)  ; LAB_0054e45e
    MOV ECX,dword ptr [EDX + 0x30]      ; 0054e508
    FLD float ptr [EDX + 0x24]          ; 0054e50b
    FCOMP double ptr [ECX]              ; 0054e50e
    FNSTSW AX                           ; 0054e510
    SAHF                                ; 0054e512
    JZ 0x0054e541                       ; 0054e513
        ;   XREF to: 0054e541 (CONDITIONAL_JUMP)  ; LAB_0054e541
    MOV ECX,dword ptr [EDX + 0x30]      ; 0054e515
        ;   Label: LAB_0054e515
    MOV BH,byte ptr [EDX + 0x118]       ; 0054e518
    FLD double ptr [ECX]                ; 0054e51e
    OR BH,0x4                           ; 0054e520
    MOV ECX,dword ptr [EDX + 0x30]      ; 0054e523
    FSTP float ptr [EDX + 0x24]         ; 0054e526
    FLD double ptr [ECX + 0x8]          ; 0054e529
    MOV ECX,dword ptr [EDX + 0x30]      ; 0054e52c
    FSTP float ptr [EDX + 0x28]         ; 0054e52f
    FLD double ptr [ECX + 0x10]         ; 0054e532
    FSTP float ptr [EDX + 0x2c]         ; 0054e535
    MOV byte ptr [EDX + 0x118],BH       ; 0054e538
    POP ESI                             ; 0054e53e
    POP EBX                             ; 0054e53f
    RET                                 ; 0054e540
    FLD float ptr [EDX + 0x28]          ; 0054e541
        ;   Label: LAB_0054e541
    FCOMP double ptr [ECX + 0x8]        ; 0054e544
    FNSTSW AX                           ; 0054e547
    SAHF                                ; 0054e549
    JNZ 0x0054e515                      ; 0054e54a
        ;   XREF to: 0054e515 (CONDITIONAL_JUMP)  ; LAB_0054e515
    FLD float ptr [EDX + 0x2c]          ; 0054e54c
    FCOMP double ptr [ECX + 0x10]       ; 0054e54f
    FNSTSW AX                           ; 0054e552
    SAHF                                ; 0054e554
    JNZ 0x0054e515                      ; 0054e555
        ;   XREF to: 0054e515 (CONDITIONAL_JUMP)  ; LAB_0054e515
    POP ESI                             ; 0054e557
    POP EBX                             ; 0054e558
    RET                                 ; 0054e559

