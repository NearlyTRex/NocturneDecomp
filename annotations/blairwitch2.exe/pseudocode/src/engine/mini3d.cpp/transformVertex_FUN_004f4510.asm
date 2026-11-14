; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_transformVertex_FUN_004f4510(CVector3f *point,float *out)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
; float *          Stack[0x8]:4   out
;
; XREF[3]:
;   engine_mini3d.cpp_polyListD3DL_FUN_004f3c40 at 004f3d12
;   engine_mini3d.cpp_polyListL_FUN_004f3ef0 at 004f3fa0
;   engine_mini3d.cpp_polyList_FUN_004f3920 at 004f3af6
;
; Referenced Globals:
;   undefined4 DAT_01d0987c
;   undefined4 DAT_01d09880
;   undefined4 DAT_01d09884
;   undefined4 DAT_01d09888
;   undefined4 DAT_01d09918
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004f4510
        ;   Label: engine_mini3d.cpp_transformVertex_FUN_004f4510
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f4513
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f4517
    MOV EAX,[0x01d09918]                ; 004f451b | DAT_01d09918
    FLD float ptr [ECX + 0x4]           ; 004f4520
    FSUB float ptr [EAX + 0x28]         ; 004f4523
    FLD ST0                             ; 004f4526
    FMUL float ptr [EAX + 0xc]          ; 004f4528
    FLD float ptr [ECX]                 ; 004f452b
    FSUB float ptr [EAX + 0x24]         ; 004f452d
    FLD ST0                             ; 004f4530
    FMUL float ptr [EAX]                ; 004f4532
    FLD float ptr [ECX + 0x8]           ; 004f4534
    FXCH                                ; 004f4537
    FADDP ST3,ST0                       ; 004f4539
    FSUB float ptr [EAX + 0x2c]         ; 004f453b
    FLD ST0                             ; 004f453e
    FMUL float ptr [EAX + 0x18]         ; 004f4540
    FADDP ST3,ST0                       ; 004f4543
    FLD ST1                             ; 004f4545
    FXCH ST3                            ; 004f4547
    FSTP float ptr [EDX]                ; 004f4549
    FXCH ST2                            ; 004f454b
    FMUL float ptr [EAX + 0x4]          ; 004f454d
    FLD ST3                             ; 004f4550
    FMUL float ptr [EAX + 0x10]         ; 004f4552
    FADDP                               ; 004f4555
    FLD ST2                             ; 004f4557
    FMUL float ptr [EAX + 0x1c]         ; 004f4559
    FADDP                               ; 004f455c
    FSTP float ptr [EDX + 0x4]          ; 004f455e
    FMUL float ptr [EAX + 0x8]          ; 004f4561
    FXCH ST2                            ; 004f4564
    FMUL float ptr [EAX + 0x14]         ; 004f4566
    FADDP ST2,ST0                       ; 004f4569
    FMUL float ptr [EAX + 0x20]         ; 004f456b
    MOV dword ptr [EDX + 0x10],0x0      ; 004f456e
    FADDP                               ; 004f4575
    FLD float ptr [EDX]                 ; 004f4577
    FXCH                                ; 004f4579
    FSTP float ptr [EDX + 0x8]          ; 004f457b
    FCOMP float ptr [EDX + 0x8]         ; 004f457e
    FNSTSW AX                           ; 004f4581
    SAHF                                ; 004f4583
    JA 0x004f45ca                       ; 004f4584
        ;   XREF to: 004f45ca (CONDITIONAL_JUMP)  ; LAB_004f45ca
    FLD float ptr [EDX + 0x8]           ; 004f4586
        ;   Label: LAB_004f4586
    FCHS                                ; 004f4589
    FCOMP float ptr [EDX]               ; 004f458b
    FNSTSW AX                           ; 004f458d
    SAHF                                ; 004f458f
    JBE 0x004f4596                      ; 004f4590
        ;   XREF to: 004f4596 (CONDITIONAL_JUMP)  ; LAB_004f4596
    OR byte ptr [EDX + 0x10],0x2        ; 004f4592
    FLD float ptr [EDX + 0x4]           ; 004f4596
        ;   Label: LAB_004f4596
    FCOMP float ptr [EDX + 0x8]         ; 004f4599
    FNSTSW AX                           ; 004f459c
    SAHF                                ; 004f459e
    JBE 0x004f45a5                      ; 004f459f
        ;   XREF to: 004f45a5 (CONDITIONAL_JUMP)  ; LAB_004f45a5
    OR byte ptr [EDX + 0x10],0x4        ; 004f45a1
    FLD float ptr [EDX + 0x8]           ; 004f45a5
        ;   Label: LAB_004f45a5
    FCHS                                ; 004f45a8
    FCOMP float ptr [EDX + 0x4]         ; 004f45aa
    FNSTSW AX                           ; 004f45ad
    SAHF                                ; 004f45af
    JBE 0x004f45b6                      ; 004f45b0
        ;   XREF to: 004f45b6 (CONDITIONAL_JUMP)  ; LAB_004f45b6
    OR byte ptr [EDX + 0x10],0x8        ; 004f45b2
    FLDZ                                ; 004f45b6
        ;   Label: LAB_004f45b6
    FCOMP float ptr [EDX + 0x8]         ; 004f45b8
    FNSTSW AX                           ; 004f45bb
    SAHF                                ; 004f45bd
    JNC 0x004f4611                      ; 004f45be
        ;   XREF to: 004f4611 (CONDITIONAL_JUMP)  ; LAB_004f4611
    CMP dword ptr [EDX + 0x10],0x0      ; 004f45c0
    JZ 0x004f45d0                       ; 004f45c4
        ;   XREF to: 004f45d0 (CONDITIONAL_JUMP)  ; LAB_004f45d0
    ADD ESP,0xc                         ; 004f45c6
    RET                                 ; 004f45c9
    OR byte ptr [EDX + 0x10],0x1        ; 004f45ca
        ;   Label: LAB_004f45ca
    JMP 0x004f4586                      ; 004f45ce
        ;   XREF to: 004f4586 (UNCONDITIONAL_JUMP)  ; LAB_004f4586
    FLD float ptr [EDX + 0x8]           ; 004f45d0
        ;   Label: LAB_004f45d0
    FLD1                                ; 004f45d3
    FDIVRP                              ; 004f45d5
    FLD float ptr [EDX]                 ; 004f45d7
    FMUL float ptr [0x01d0987c]         ; 004f45d9 | DAT_01d0987c
    FLD float ptr [EDX + 0x4]           ; 004f45df
    FMUL float ptr [0x01d09880]         ; 004f45e2 | DAT_01d09880
    FXCH ST2                            ; 004f45e8
    FSTP float ptr [EDX + 0xc]          ; 004f45ea
    FMUL float ptr [EDX + 0xc]          ; 004f45ed
    FXCH                                ; 004f45f0
    FMUL float ptr [EDX + 0xc]          ; 004f45f2
    FLD float ptr [0x01d09888]          ; 004f45f5 | DAT_01d09888
    FLD float ptr [0x01d09884]          ; 004f45fb | DAT_01d09884
    FADDP ST3,ST0                       ; 004f4601
    FADDP                               ; 004f4603
    FXCH                                ; 004f4605
    FSTP float ptr [EDX + 0x14]         ; 004f4607
    FSTP float ptr [EDX + 0x18]         ; 004f460a
    ADD ESP,0xc                         ; 004f460d
    RET                                 ; 004f4610
    OR byte ptr [EDX + 0x10],0x10       ; 004f4611
        ;   Label: LAB_004f4611
    ADD ESP,0xc                         ; 004f4615
    RET                                 ; 004f4618

