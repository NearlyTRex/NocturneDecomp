; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_transformVertexSurface_FUN_004f4620(CVector3f *point,float *out)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
; float *          Stack[0x8]:4   out
;
; XREF[1]:
;   engine_mini3d.cpp_polyListSurface_FUN_004f7e00 at 004f7e60
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

    SUB ESP,0xc                         ; 004f4620
        ;   Label: engine_mini3d.cpp_transformVertexSurface_FUN_004f4620
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f4623
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f4627
    MOV EAX,[0x01d09918]                ; 004f462b | DAT_01d09918
    FLD float ptr [ECX + 0x4]           ; 004f4630
    FSUB float ptr [EAX + 0x28]         ; 004f4633
    FLD ST0                             ; 004f4636
    FMUL float ptr [EAX + 0xc]          ; 004f4638
    FLD float ptr [ECX]                 ; 004f463b
    FSUB float ptr [EAX + 0x24]         ; 004f463d
    FLD ST0                             ; 004f4640
    FMUL float ptr [EAX]                ; 004f4642
    FLD float ptr [ECX + 0x8]           ; 004f4644
    FXCH                                ; 004f4647
    FADDP ST3,ST0                       ; 004f4649
    FSUB float ptr [EAX + 0x2c]         ; 004f464b
    FLD ST0                             ; 004f464e
    FMUL float ptr [EAX + 0x18]         ; 004f4650
    FADDP ST3,ST0                       ; 004f4653
    FLD ST1                             ; 004f4655
    FXCH ST3                            ; 004f4657
    FSTP float ptr [EDX]                ; 004f4659
    FXCH ST2                            ; 004f465b
    FMUL float ptr [EAX + 0x4]          ; 004f465d
    FLD ST3                             ; 004f4660
    FMUL float ptr [EAX + 0x10]         ; 004f4662
    FADDP                               ; 004f4665
    FLD ST2                             ; 004f4667
    FMUL float ptr [EAX + 0x1c]         ; 004f4669
    FADDP                               ; 004f466c
    FSTP float ptr [EDX + 0x4]          ; 004f466e
    FMUL float ptr [EAX + 0x8]          ; 004f4671
    FXCH ST2                            ; 004f4674
    FMUL float ptr [EAX + 0x14]         ; 004f4676
    FADDP ST2,ST0                       ; 004f4679
    FMUL float ptr [EAX + 0x20]         ; 004f467b
    MOV dword ptr [EDX + 0x10],0x0      ; 004f467e
    FADDP                               ; 004f4685
    FLD float ptr [EDX]                 ; 004f4687
    FXCH                                ; 004f4689
    FSTP float ptr [EDX + 0x8]          ; 004f468b
    FCOMP float ptr [EDX + 0x8]         ; 004f468e
    FNSTSW AX                           ; 004f4691
    SAHF                                ; 004f4693
    JA 0x004f46da                       ; 004f4694
        ;   XREF to: 004f46da (CONDITIONAL_JUMP)  ; LAB_004f46da
    FLD float ptr [EDX + 0x8]           ; 004f4696
        ;   Label: LAB_004f4696
    FCHS                                ; 004f4699
    FCOMP float ptr [EDX]               ; 004f469b
    FNSTSW AX                           ; 004f469d
    SAHF                                ; 004f469f
    JBE 0x004f46a6                      ; 004f46a0
        ;   XREF to: 004f46a6 (CONDITIONAL_JUMP)  ; LAB_004f46a6
    OR byte ptr [EDX + 0x10],0x2        ; 004f46a2
    FLD float ptr [EDX + 0x4]           ; 004f46a6
        ;   Label: LAB_004f46a6
    FCOMP float ptr [EDX + 0x8]         ; 004f46a9
    FNSTSW AX                           ; 004f46ac
    SAHF                                ; 004f46ae
    JBE 0x004f46b5                      ; 004f46af
        ;   XREF to: 004f46b5 (CONDITIONAL_JUMP)  ; LAB_004f46b5
    OR byte ptr [EDX + 0x10],0x4        ; 004f46b1
    FLD float ptr [EDX + 0x8]           ; 004f46b5
        ;   Label: LAB_004f46b5
    FCHS                                ; 004f46b8
    FCOMP float ptr [EDX + 0x4]         ; 004f46ba
    FNSTSW AX                           ; 004f46bd
    SAHF                                ; 004f46bf
    JBE 0x004f46c6                      ; 004f46c0
        ;   XREF to: 004f46c6 (CONDITIONAL_JUMP)  ; LAB_004f46c6
    OR byte ptr [EDX + 0x10],0x8        ; 004f46c2
    FLDZ                                ; 004f46c6
        ;   Label: LAB_004f46c6
    FCOMP float ptr [EDX + 0x8]         ; 004f46c8
    FNSTSW AX                           ; 004f46cb
    SAHF                                ; 004f46cd
    JNC 0x004f4721                      ; 004f46ce
        ;   XREF to: 004f4721 (CONDITIONAL_JUMP)  ; LAB_004f4721
    CMP dword ptr [EDX + 0x10],0x0      ; 004f46d0
    JZ 0x004f46e0                       ; 004f46d4
        ;   XREF to: 004f46e0 (CONDITIONAL_JUMP)  ; LAB_004f46e0
    ADD ESP,0xc                         ; 004f46d6
    RET                                 ; 004f46d9
    OR byte ptr [EDX + 0x10],0x1        ; 004f46da
        ;   Label: LAB_004f46da
    JMP 0x004f4696                      ; 004f46de
        ;   XREF to: 004f4696 (UNCONDITIONAL_JUMP)  ; LAB_004f4696
    FLD float ptr [EDX + 0x8]           ; 004f46e0
        ;   Label: LAB_004f46e0
    FLD1                                ; 004f46e3
    FDIVRP                              ; 004f46e5
    FLD float ptr [EDX]                 ; 004f46e7
    FMUL float ptr [0x01d0987c]         ; 004f46e9 | DAT_01d0987c
    FLD float ptr [EDX + 0x4]           ; 004f46ef
    FMUL float ptr [0x01d09880]         ; 004f46f2 | DAT_01d09880
    FXCH ST2                            ; 004f46f8
    FSTP float ptr [EDX + 0xc]          ; 004f46fa
    FMUL float ptr [EDX + 0xc]          ; 004f46fd
    FXCH                                ; 004f4700
    FMUL float ptr [EDX + 0xc]          ; 004f4702
    FLD float ptr [0x01d09888]          ; 004f4705 | DAT_01d09888
    FLD float ptr [0x01d09884]          ; 004f470b | DAT_01d09884
    FADDP ST3,ST0                       ; 004f4711
    FADDP                               ; 004f4713
    FXCH                                ; 004f4715
    FSTP float ptr [EDX + 0x14]         ; 004f4717
    FSTP float ptr [EDX + 0x18]         ; 004f471a
    ADD ESP,0xc                         ; 004f471d
    RET                                 ; 004f4720
    OR byte ptr [EDX + 0x10],0x10       ; 004f4721
        ;   Label: LAB_004f4721
    ADD ESP,0xc                         ; 004f4725
    RET                                 ; 004f4728

