; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_transformVertex_FUN_00513260(CVector3f *point,float *out)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
; float *          Stack[0x8]:4   out
;
; XREF[3]:
;   engine_mini3d.cpp_polyListD3DL_FUN_005129d0 at 00512a84
;   engine_mini3d.cpp_polyListL_FUN_00512c60 at 00512d02
;   engine_mini3d.cpp_polyList_FUN_005126d0 at 00512886
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

    SUB ESP,0xc                         ; 00513260
        ;   Label: engine_mini3d.cpp_transformVertex_FUN_00513260
    MOV ECX,dword ptr [ESP + 0x10]      ; 00513263
    MOV EDX,dword ptr [ESP + 0x14]      ; 00513267
    MOV EAX,[0x01d2257c]                ; 0051326b | DAT_01d2257c
    FLD float ptr [ECX + 0x4]           ; 00513270
    FSUB float ptr [EAX + 0x28]         ; 00513273
    FLD ST0                             ; 00513276
    FMUL float ptr [EAX + 0xc]          ; 00513278
    FLD float ptr [ECX]                 ; 0051327b
    FSUB float ptr [EAX + 0x24]         ; 0051327d
    FLD ST0                             ; 00513280
    FMUL float ptr [EAX]                ; 00513282
    FLD float ptr [ECX + 0x8]           ; 00513284
    FXCH                                ; 00513287
    FADDP ST3,ST0                       ; 00513289
    FSUB float ptr [EAX + 0x2c]         ; 0051328b
    FLD ST0                             ; 0051328e
    FMUL float ptr [EAX + 0x18]         ; 00513290
    FADDP ST3,ST0                       ; 00513293
    FLD ST1                             ; 00513295
    FXCH ST3                            ; 00513297
    FSTP float ptr [EDX]                ; 00513299
    FXCH ST2                            ; 0051329b
    FMUL float ptr [EAX + 0x4]          ; 0051329d
    FLD ST3                             ; 005132a0
    FMUL float ptr [EAX + 0x10]         ; 005132a2
    FADDP                               ; 005132a5
    FLD ST2                             ; 005132a7
    FMUL float ptr [EAX + 0x1c]         ; 005132a9
    FADDP                               ; 005132ac
    FSTP float ptr [EDX + 0x4]          ; 005132ae
    FMUL float ptr [EAX + 0x8]          ; 005132b1
    FXCH ST2                            ; 005132b4
    FMUL float ptr [EAX + 0x14]         ; 005132b6
    FADDP ST2,ST0                       ; 005132b9
    FMUL float ptr [EAX + 0x20]         ; 005132bb
    MOV dword ptr [EDX + 0x10],0x0      ; 005132be
    FADDP                               ; 005132c5
    FLD float ptr [EDX]                 ; 005132c7
    FXCH                                ; 005132c9
    FSTP float ptr [EDX + 0x8]          ; 005132cb
    FCOMP float ptr [EDX + 0x8]         ; 005132ce
    FNSTSW AX                           ; 005132d1
    SAHF                                ; 005132d3
    JA 0x0051331a                       ; 005132d4
        ;   XREF to: 0051331a (CONDITIONAL_JUMP)  ; LAB_0051331a
    FLD float ptr [EDX + 0x8]           ; 005132d6
        ;   Label: LAB_005132d6
    FCHS                                ; 005132d9
    FCOMP float ptr [EDX]               ; 005132db
    FNSTSW AX                           ; 005132dd
    SAHF                                ; 005132df
    JBE 0x005132e6                      ; 005132e0
        ;   XREF to: 005132e6 (CONDITIONAL_JUMP)  ; LAB_005132e6
    OR byte ptr [EDX + 0x10],0x2        ; 005132e2
    FLD float ptr [EDX + 0x4]           ; 005132e6
        ;   Label: LAB_005132e6
    FCOMP float ptr [EDX + 0x8]         ; 005132e9
    FNSTSW AX                           ; 005132ec
    SAHF                                ; 005132ee
    JBE 0x005132f5                      ; 005132ef
        ;   XREF to: 005132f5 (CONDITIONAL_JUMP)  ; LAB_005132f5
    OR byte ptr [EDX + 0x10],0x4        ; 005132f1
    FLD float ptr [EDX + 0x8]           ; 005132f5
        ;   Label: LAB_005132f5
    FCHS                                ; 005132f8
    FCOMP float ptr [EDX + 0x4]         ; 005132fa
    FNSTSW AX                           ; 005132fd
    SAHF                                ; 005132ff
    JBE 0x00513306                      ; 00513300
        ;   XREF to: 00513306 (CONDITIONAL_JUMP)  ; LAB_00513306
    OR byte ptr [EDX + 0x10],0x8        ; 00513302
    FLDZ                                ; 00513306
        ;   Label: LAB_00513306
    FCOMP float ptr [EDX + 0x8]         ; 00513308
    FNSTSW AX                           ; 0051330b
    SAHF                                ; 0051330d
    JNC 0x00513361                      ; 0051330e
        ;   XREF to: 00513361 (CONDITIONAL_JUMP)  ; LAB_00513361
    CMP dword ptr [EDX + 0x10],0x0      ; 00513310
    JZ 0x00513320                       ; 00513314
        ;   XREF to: 00513320 (CONDITIONAL_JUMP)  ; LAB_00513320
    ADD ESP,0xc                         ; 00513316
    RET                                 ; 00513319
    OR byte ptr [EDX + 0x10],0x1        ; 0051331a
        ;   Label: LAB_0051331a
    JMP 0x005132d6                      ; 0051331e
        ;   XREF to: 005132d6 (UNCONDITIONAL_JUMP)  ; LAB_005132d6
    FLD float ptr [EDX + 0x8]           ; 00513320
        ;   Label: LAB_00513320
    FLD1                                ; 00513323
    FDIVRP                              ; 00513325
    FLD float ptr [EDX]                 ; 00513327
    FMUL float ptr [0x01d224dc]         ; 00513329 | DAT_01d224dc
    FLD float ptr [EDX + 0x4]           ; 0051332f
    FMUL float ptr [0x01d224e0]         ; 00513332 | DAT_01d224e0
    FXCH ST2                            ; 00513338
    FSTP float ptr [EDX + 0xc]          ; 0051333a
    FMUL float ptr [EDX + 0xc]          ; 0051333d
    FXCH                                ; 00513340
    FMUL float ptr [EDX + 0xc]          ; 00513342
    FLD float ptr [0x01d224e8]          ; 00513345 | DAT_01d224e8
    FLD float ptr [0x01d224e4]          ; 0051334b | DAT_01d224e4
    FADDP ST3,ST0                       ; 00513351
    FADDP                               ; 00513353
    FXCH                                ; 00513355
    FSTP float ptr [EDX + 0x14]         ; 00513357
    FSTP float ptr [EDX + 0x18]         ; 0051335a
    ADD ESP,0xc                         ; 0051335d
    RET                                 ; 00513360
    OR byte ptr [EDX + 0x10],0x10       ; 00513361
        ;   Label: LAB_00513361
    ADD ESP,0xc                         ; 00513365
    RET                                 ; 00513368

