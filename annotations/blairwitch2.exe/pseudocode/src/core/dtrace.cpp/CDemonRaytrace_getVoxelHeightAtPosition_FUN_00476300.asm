; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00476300(CDemonRaytrace *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_00535e90 at 00535e9d
;
; Referenced Globals:
;   undefined4 DAT_005d1d23
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476300
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00476300
    PUSH ESI                            ; 00476301
    PUSH EDI                            ; 00476302
    PUSH EBP                            ; 00476303
    SUB ESP,0x20                        ; 00476304
    MOV EBX,dword ptr [ESP + 0x34]      ; 00476307
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047630b
    FLD float ptr [EDX]                 ; 0047630f
    FSUB float ptr [EBX + 0x10]         ; 00476311
    FDIV float ptr [EBX + 0x28]         ; 00476314
    FLD float ptr [EDX + 0x4]           ; 00476317
    FSUB float ptr [EBX + 0x14]         ; 0047631a
    FDIV float ptr [EBX + 0x2c]         ; 0047631d
    FLD float ptr [EDX + 0x8]           ; 00476320
    FSUB float ptr [EBX + 0x18]         ; 00476323
    FDIV float ptr [EBX + 0x30]         ; 00476326
    FXCH ST2                            ; 00476329
    CALL crt_math.c_round_FUN_005b7ff0  ; 0047632b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xc]         ; 00476330
    MOV EAX,dword ptr [ESP + 0xc]       ; 00476334
    MOV dword ptr [ESP + 0x1c],EAX      ; 00476338
    FILD dword ptr [ESP + 0x1c]         ; 0047633c
    FMUL float ptr [EBX + 0x28]         ; 00476340
    FADD float ptr [EBX + 0x10]         ; 00476343
    FSUBR float ptr [EDX]               ; 00476346
    FLD float ptr [0x005d1d23]          ; 00476348 | DAT_005d1d23
    FLD float ptr [EBX + 0x28]          ; 0047634e
    FMUL ST1                            ; 00476351
    FDIVP ST2,ST0                       ; 00476353
    FXCH ST2                            ; 00476355
    CALL crt_math.c_round_FUN_005b7ff0  ; 00476357
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x14]        ; 0047635c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00476360
    MOV dword ptr [ESP + 0x1c],EAX      ; 00476364
    FILD dword ptr [ESP + 0x1c]         ; 00476368
    FMUL float ptr [EBX + 0x2c]         ; 0047636c
    FADD float ptr [EBX + 0x14]         ; 0047636f
    FSUBR float ptr [EDX + 0x4]         ; 00476372
    FLD float ptr [EBX + 0x2c]          ; 00476375
    FMUL ST3                            ; 00476378
    FDIVP                               ; 0047637a
    FXCH ST3                            ; 0047637c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0047637e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 00476383
    MOV EAX,dword ptr [ESP + 0x8]       ; 00476387
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047638b
    FILD dword ptr [ESP + 0x1c]         ; 0047638f
    FMUL float ptr [EBX + 0x30]         ; 00476393
    FADD float ptr [EBX + 0x18]         ; 00476396
    FSUBR float ptr [EDX + 0x8]         ; 00476399
    FLD float ptr [EBX + 0x30]          ; 0047639c
    FMULP ST3                           ; 0047639f
    FDIVRP ST2,ST0                      ; 004763a1
    CALL crt_math.c_round_FUN_005b7ff0  ; 004763a3
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x10]        ; 004763a8
    MOV EDX,dword ptr [ESP + 0x10]      ; 004763ac
    FXCH                                ; 004763b0
    CALL crt_math.c_round_FUN_005b7ff0  ; 004763b2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x18]        ; 004763b7
    CALL crt_math.c_round_FUN_005b7ff0  ; 004763bb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 004763c0
    TEST EDX,EDX                        ; 004763c3
    JL 0x00476463                       ; 004763c5
        ;   XREF to: 00476463 (CONDITIONAL_JUMP)  ; LAB_00476463
    MOV ECX,dword ptr [ESP + 0x18]      ; 004763cb
    TEST ECX,ECX                        ; 004763cf
    JL 0x00476463                       ; 004763d1
        ;   XREF to: 00476463 (CONDITIONAL_JUMP)  ; LAB_00476463
    MOV ESI,dword ptr [ESP]             ; 004763d7
    TEST ESI,ESI                        ; 004763da
    JL 0x00476463                       ; 004763dc
        ;   XREF to: 00476463 (CONDITIONAL_JUMP)  ; LAB_00476463
    CMP EDX,0x8                         ; 004763e2
    JGE 0x00476463                      ; 004763e5
        ;   XREF to: 00476463 (CONDITIONAL_JUMP)  ; LAB_00476463
    CMP ECX,0x8                         ; 004763eb
    JGE 0x00476463                      ; 004763ee
        ;   XREF to: 00476463 (CONDITIONAL_JUMP)  ; LAB_00476463
    CMP ESI,0x8                         ; 004763f4
    JGE 0x00476463                      ; 004763f7
        ;   XREF to: 00476463 (CONDITIONAL_JUMP)  ; LAB_00476463
    SHL ESI,0x3                         ; 004763f9
    MOV EAX,dword ptr [ESP + 0x8]       ; 004763fc
        ;   Label: LAB_004763fc
    PUSH EAX                            ; 00476400
    MOV EDX,dword ptr [ESP + 0x18]      ; 00476401
    PUSH EDX                            ; 00476405
    MOV ECX,dword ptr [ESP + 0x14]      ; 00476406
    PUSH ECX                            ; 0047640a
    PUSH EBX                            ; 0047640b
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0 ; 0047640c
        ;   XREF to: 00472af0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00476411
    TEST EAX,EAX                        ; 00476414
    JZ 0x00476477                       ; 00476416
        ;   XREF to: 00476477 (CONDITIONAL_JUMP)  ; LAB_00476477
    MOV EDI,dword ptr [EAX]             ; 00476418
    TEST EDI,EDI                        ; 0047641a
    JZ 0x00476442                       ; 0047641c
        ;   XREF to: 00476442 (CONDITIONAL_JUMP)  ; LAB_00476442
    MOV EDX,dword ptr [ESP + 0x18]      ; 0047641e
    MOV EAX,EDI                         ; 00476422
    ADD EDX,ESI                         ; 00476424
    MOV DL,byte ptr [EDX + EAX*0x1]     ; 00476426
    MOV EAX,dword ptr [ESP + 0x10]      ; 00476429
    AND EDX,0xff                        ; 0047642d
    MOV AL,byte ptr [EAX + 0x613888]    ; 00476433
    AND EAX,0xff                        ; 00476439
    TEST EDX,EAX                        ; 0047643e
    JNZ 0x00476481                      ; 00476440
        ;   XREF to: 00476481 (CONDITIONAL_JUMP)  ; LAB_00476481
    MOV EBP,dword ptr [ESP + 0x18]      ; 00476442
        ;   Label: LAB_00476442
    DEC EBP                             ; 00476446
    MOV dword ptr [ESP + 0x18],EBP      ; 00476447
    TEST EBP,EBP                        ; 0047644b
    JGE 0x004763fc                      ; 0047644d
        ;   XREF to: 004763fc (CONDITIONAL_JUMP)  ; LAB_004763fc
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047644f
    MOV EDX,0x7                         ; 00476453
    DEC ECX                             ; 00476458
    MOV dword ptr [ESP + 0x18],EDX      ; 00476459
    MOV dword ptr [ESP + 0x14],ECX      ; 0047645d
    JMP 0x004763fc                      ; 00476461
        ;   XREF to: 004763fc (UNCONDITIONAL_JUMP)  ; LAB_004763fc
    MOV dword ptr [ESP + 0x4],0xc479c000 ; 00476463
        ;   Label: LAB_00476463
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047646b
        ;   Label: LAB_0047646b
    ADD ESP,0x20                        ; 0047646f
    POP EBP                             ; 00476472
    POP EDI                             ; 00476473
    POP ESI                             ; 00476474
    POP EBX                             ; 00476475
    RET                                 ; 00476476
    MOV dword ptr [ESP + 0x4],0xc479f99a ; 00476477
        ;   Label: LAB_00476477
    JMP 0x0047646b                      ; 0047647f
        ;   XREF to: 0047646b (UNCONDITIONAL_JUMP)  ; LAB_0047646b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00476481
        ;   Label: LAB_00476481
    MOV dword ptr [ESP + 0x1c],EAX      ; 00476485
    FILD dword ptr [ESP + 0x1c]         ; 00476489
    FMUL float ptr [EBX + 0x2c]         ; 0047648d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00476490
    FADD float ptr [EBX + 0x14]         ; 00476494
    MOV dword ptr [ESP + 0x1c],EAX      ; 00476497
    FILD dword ptr [ESP + 0x1c]         ; 0047649b
    FMUL float ptr [EBX + 0x2c]         ; 0047649f
    FMUL float ptr [0x005d1d23]         ; 004764a2 | DAT_005d1d23
    FADDP                               ; 004764a8
    FSTP float ptr [ESP + 0x4]          ; 004764aa
    MOV EAX,dword ptr [ESP + 0x4]       ; 004764ae
    ADD ESP,0x20                        ; 004764b2
    POP EBP                             ; 004764b5
    POP EDI                             ; 004764b6
    POP ESI                             ; 004764b7
    POP EBX                             ; 004764b8
    RET                                 ; 004764b9

