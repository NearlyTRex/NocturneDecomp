; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_transformVertexSurface_FUN_00513370(CVector3f *point,float *out)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
; float *          Stack[0x8]:4   out
;
; XREF[1]:
;   engine_mini3d.cpp_polyListSurface_FUN_00516cc0 at 00516d20
;
; Referenced Globals:
;   undefined4 DAT_01d224dc
;   undefined4 DAT_01d224e0
;   undefined4 DAT_01d224e4
;   undefined4 DAT_01d224e8
;   undefined4 DAT_01d2257c
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 00513370
        ;   Label: engine_mini3d.cpp_transformVertexSurface_FUN_00513370
    MOV ECX,dword ptr [ESP + 0x10]      ; 00513373
    MOV EDX,dword ptr [ESP + 0x14]      ; 00513377
    MOV EAX,[0x01d2257c]                ; 0051337b | DAT_01d2257c
    FLD float ptr [ECX + 0x4]           ; 00513380
    FSUB float ptr [EAX + 0x28]         ; 00513383
    FLD ST0                             ; 00513386
    FMUL float ptr [EAX + 0xc]          ; 00513388
    FLD float ptr [ECX]                 ; 0051338b
    FSUB float ptr [EAX + 0x24]         ; 0051338d
    FLD ST0                             ; 00513390
    FMUL float ptr [EAX]                ; 00513392
    FLD float ptr [ECX + 0x8]           ; 00513394
    FXCH                                ; 00513397
    FADDP ST3,ST0                       ; 00513399
    FSUB float ptr [EAX + 0x2c]         ; 0051339b
    FLD ST0                             ; 0051339e
    FMUL float ptr [EAX + 0x18]         ; 005133a0
    FADDP ST3,ST0                       ; 005133a3
    FLD ST1                             ; 005133a5
    FXCH ST3                            ; 005133a7
    FSTP float ptr [EDX]                ; 005133a9
    FXCH ST2                            ; 005133ab
    FMUL float ptr [EAX + 0x4]          ; 005133ad
    FLD ST3                             ; 005133b0
    FMUL float ptr [EAX + 0x10]         ; 005133b2
    FADDP                               ; 005133b5
    FLD ST2                             ; 005133b7
    FMUL float ptr [EAX + 0x1c]         ; 005133b9
    FADDP                               ; 005133bc
    FSTP float ptr [EDX + 0x4]          ; 005133be
    FMUL float ptr [EAX + 0x8]          ; 005133c1
    FXCH ST2                            ; 005133c4
    FMUL float ptr [EAX + 0x14]         ; 005133c6
    FADDP ST2,ST0                       ; 005133c9
    FMUL float ptr [EAX + 0x20]         ; 005133cb
    MOV dword ptr [EDX + 0x10],0x0      ; 005133ce
    FADDP                               ; 005133d5
    FLD float ptr [EDX]                 ; 005133d7
    FXCH                                ; 005133d9
    FSTP float ptr [EDX + 0x8]          ; 005133db
    FCOMP float ptr [EDX + 0x8]         ; 005133de
    FNSTSW AX                           ; 005133e1
    SAHF                                ; 005133e3
    JA 0x0051342a                       ; 005133e4
        ;   XREF to: 0051342a (CONDITIONAL_JUMP)  ; LAB_0051342a
    FLD float ptr [EDX + 0x8]           ; 005133e6
        ;   Label: LAB_005133e6
    FCHS                                ; 005133e9
    FCOMP float ptr [EDX]               ; 005133eb
    FNSTSW AX                           ; 005133ed
    SAHF                                ; 005133ef
    JBE 0x005133f6                      ; 005133f0
        ;   XREF to: 005133f6 (CONDITIONAL_JUMP)  ; LAB_005133f6
    OR byte ptr [EDX + 0x10],0x2        ; 005133f2
    FLD float ptr [EDX + 0x4]           ; 005133f6
        ;   Label: LAB_005133f6
    FCOMP float ptr [EDX + 0x8]         ; 005133f9
    FNSTSW AX                           ; 005133fc
    SAHF                                ; 005133fe
    JBE 0x00513405                      ; 005133ff
        ;   XREF to: 00513405 (CONDITIONAL_JUMP)  ; LAB_00513405
    OR byte ptr [EDX + 0x10],0x4        ; 00513401
    FLD float ptr [EDX + 0x8]           ; 00513405
        ;   Label: LAB_00513405
    FCHS                                ; 00513408
    FCOMP float ptr [EDX + 0x4]         ; 0051340a
    FNSTSW AX                           ; 0051340d
    SAHF                                ; 0051340f
    JBE 0x00513416                      ; 00513410
        ;   XREF to: 00513416 (CONDITIONAL_JUMP)  ; LAB_00513416
    OR byte ptr [EDX + 0x10],0x8        ; 00513412
    FLDZ                                ; 00513416
        ;   Label: LAB_00513416
    FCOMP float ptr [EDX + 0x8]         ; 00513418
    FNSTSW AX                           ; 0051341b
    SAHF                                ; 0051341d
    JNC 0x00513471                      ; 0051341e
        ;   XREF to: 00513471 (CONDITIONAL_JUMP)  ; LAB_00513471
    CMP dword ptr [EDX + 0x10],0x0      ; 00513420
    JZ 0x00513430                       ; 00513424
        ;   XREF to: 00513430 (CONDITIONAL_JUMP)  ; LAB_00513430
    ADD ESP,0xc                         ; 00513426
    RET                                 ; 00513429
    OR byte ptr [EDX + 0x10],0x1        ; 0051342a
        ;   Label: LAB_0051342a
    JMP 0x005133e6                      ; 0051342e
        ;   XREF to: 005133e6 (UNCONDITIONAL_JUMP)  ; LAB_005133e6
    FLD float ptr [EDX + 0x8]           ; 00513430
        ;   Label: LAB_00513430
    FLD1                                ; 00513433
    FDIVRP                              ; 00513435
    FLD float ptr [EDX]                 ; 00513437
    FMUL float ptr [0x01d224dc]         ; 00513439 | DAT_01d224dc
    FLD float ptr [EDX + 0x4]           ; 0051343f
    FMUL float ptr [0x01d224e0]         ; 00513442 | DAT_01d224e0
    FXCH ST2                            ; 00513448
    FSTP float ptr [EDX + 0xc]          ; 0051344a
    FMUL float ptr [EDX + 0xc]          ; 0051344d
    FXCH                                ; 00513450
    FMUL float ptr [EDX + 0xc]          ; 00513452
    FLD float ptr [0x01d224e8]          ; 00513455 | DAT_01d224e8
    FLD float ptr [0x01d224e4]          ; 0051345b | DAT_01d224e4
    FADDP ST3,ST0                       ; 00513461
    FADDP                               ; 00513463
    FXCH                                ; 00513465
    FSTP float ptr [EDX + 0x14]         ; 00513467
    FSTP float ptr [EDX + 0x18]         ; 0051346a
    ADD ESP,0xc                         ; 0051346d
    RET                                 ; 00513470
    OR byte ptr [EDX + 0x10],0x10       ; 00513471
        ;   Label: LAB_00513471
    ADD ESP,0xc                         ; 00513475
    RET                                 ; 00513478

