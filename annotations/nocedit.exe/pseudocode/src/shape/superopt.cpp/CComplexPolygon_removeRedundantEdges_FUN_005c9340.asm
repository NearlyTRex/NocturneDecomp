; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
; SExpandedEdge *  Stack[0x8]:4   edges
; int *            Stack[0xc]:4   edge_count_ptr
; Local Variables:
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_superopt.cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0 at 005c9217
;
; Referenced Globals:
;   double DOUBLE_00654232 = 1.00000000000000E-10
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9340
        ;   Label: shape_superopt.cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340
    PUSH ESI                            ; 005c9341
    PUSH EDI                            ; 005c9342
    PUSH EBP                            ; 005c9343
    MOV EBP,ESP                         ; 005c9344
    SUB ESP,0xac                        ; 005c9346
    AND ESP,0xfffffff8                  ; 005c934c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005c934f
    MOV EDX,dword ptr [EBX]             ; 005c9352
    XOR ESI,ESI                         ; 005c9354
    TEST EDX,EDX                        ; 005c9356
    JBE 0x005c939a                      ; 005c9358
        ;   XREF to: 005c939a (CONDITIONAL_JUMP)  ; LAB_005c939a
    IMUL EDX,ESI,0x60                   ; 005c935a
        ;   Label: LAB_005c935a
    MOV EDI,dword ptr [EBP + 0x18]      ; 005c935d
    ADD EDX,EDI                         ; 005c9360
    LEA ECX,[EDX + 0x10]                ; 005c9362
    LEA EAX,[EDX + 0x28]                ; 005c9365
    FLD double ptr [EAX]                ; 005c9368
    FSUB double ptr [ECX]               ; 005c936a
    FMUL ST0                            ; 005c936c
    FLD double ptr [EAX + 0x8]          ; 005c936e
    FSUB double ptr [ECX + 0x8]         ; 005c9371
    FMUL ST0                            ; 005c9374
    FLD double ptr [EAX + 0x10]         ; 005c9376
    FXCH                                ; 005c9379
    FADDP ST2,ST0                       ; 005c937b
    FSUB double ptr [ECX + 0x10]        ; 005c937d
    FMUL ST0                            ; 005c9380
    FADDP                               ; 005c9382
    FSQRT                               ; 005c9384
    FCOMP double ptr [0x00654232]       ; 005c9386 | DOUBLE_00654232
    FNSTSW AX                           ; 005c938c
    SAHF                                ; 005c938e
    JC 0x005c9445                       ; 005c938f
        ;   XREF to: 005c9445 (CONDITIONAL_JUMP)  ; LAB_005c9445
    INC ESI                             ; 005c9395
        ;   Label: LAB_005c9395
    CMP ESI,dword ptr [EBX]             ; 005c9396
    JC 0x005c935a                       ; 005c9398
        ;   XREF to: 005c935a (CONDITIONAL_JUMP)  ; LAB_005c935a
    XOR ESI,ESI                         ; 005c939a
        ;   Label: LAB_005c939a
    MOV dword ptr [ESP + 0xa8],ESI      ; 005c939c
    MOV EAX,dword ptr [EBX]             ; 005c93a3
        ;   Label: LAB_005c93a3
    MOV EDX,dword ptr [ESP + 0xa8]      ; 005c93a5
    DEC EAX                             ; 005c93ac
    CMP EAX,EDX                         ; 005c93ad
    JBE 0x005c94dd                      ; 005c93af
        ;   XREF to: 005c94dd (CONDITIONAL_JUMP)  ; LAB_005c94dd
    CMP dword ptr [EBX],0x2             ; 005c93b5
    JBE 0x005c94dd                      ; 005c93b8
        ;   XREF to: 005c94dd (CONDITIONAL_JUMP)  ; LAB_005c94dd
    IMUL EDX,EDX,0x60                   ; 005c93be
    ADD EDX,dword ptr [EBP + 0x18]      ; 005c93c1
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005c93c4
    INC EAX                             ; 005c93cb
    IMUL EAX,EAX,0x60                   ; 005c93cc
    MOV ECX,0x6                         ; 005c93cf
    MOV EDI,ESP                         ; 005c93d4
    LEA ESI,[EDX + 0x10]                ; 005c93d6
    MOVSD.REP ES:EDI,ESI                ; 005c93d9
    MOV ECX,0x6                         ; 005c93db
    LEA EDI,[ESP + 0x48]                ; 005c93e0
    LEA ESI,[EDX + 0x28]                ; 005c93e4
    MOVSD.REP ES:EDI,ESI                ; 005c93e7
    ADD EAX,dword ptr [EBP + 0x18]      ; 005c93e9
    LEA EDI,[ESP + 0x18]                ; 005c93ec
    MOV ECX,0x6                         ; 005c93f0
    LEA ESI,[EAX + 0x10]                ; 005c93f5
    MOVSD.REP ES:EDI,ESI                ; 005c93f8
    FLD double ptr [ESP + 0x18]         ; 005c93fa
    FSUB double ptr [ESP + 0x48]        ; 005c93fe
    FMUL ST0                            ; 005c9402
    FLD double ptr [ESP + 0x20]         ; 005c9404
    FSUB double ptr [ESP + 0x50]        ; 005c9408
    FMUL ST0                            ; 005c940c
    FLD double ptr [ESP + 0x28]         ; 005c940e
    FXCH                                ; 005c9412
    FADDP ST2,ST0                       ; 005c9414
    FSUB double ptr [ESP + 0x58]        ; 005c9416
    FMUL ST0                            ; 005c941a
    FADDP                               ; 005c941c
    LEA ESI,[EAX + 0x28]                ; 005c941e
    FSQRT                               ; 005c9421
    MOV ECX,0x6                         ; 005c9423
    LEA EDI,[ESP + 0x30]                ; 005c9428
    MOVSD.REP ES:EDI,ESI                ; 005c942c
    FCOMP double ptr [0x00654232]       ; 005c942e | DOUBLE_00654232
    FNSTSW AX                           ; 005c9434
    SAHF                                ; 005c9436
    JBE 0x005c946b                      ; 005c9437
        ;   XREF to: 005c946b (CONDITIONAL_JUMP)  ; LAB_005c946b
    INC dword ptr [ESP + 0xa8]          ; 005c9439
        ;   Label: LAB_005c9439
    JMP 0x005c93a3                      ; 005c9440
        ;   XREF to: 005c93a3 (UNCONDITIONAL_JUMP)  ; LAB_005c93a3
    MOV EAX,dword ptr [EBX]             ; 005c9445
        ;   Label: LAB_005c9445
    SUB EAX,ESI                         ; 005c9447
    DEC EAX                             ; 005c9449
    IMUL EAX,EAX,0x60                   ; 005c944a
    PUSH EAX                            ; 005c944d
    LEA EAX,[ESI + 0x1]                 ; 005c944e
    IMUL EAX,EAX,0x60                   ; 005c9451
    ADD EAX,EDI                         ; 005c9454
    PUSH EAX                            ; 005c9456
    PUSH EDX                            ; 005c9457
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005c9458
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EDI,dword ptr [EBX]             ; 005c945d
    DEC ESI                             ; 005c945f
    DEC EDI                             ; 005c9460
    ADD ESP,0xc                         ; 005c9461
    MOV dword ptr [EBX],EDI             ; 005c9464
    JMP 0x005c9395                      ; 005c9466
        ;   XREF to: 005c9395 (UNCONDITIONAL_JUMP)  ; LAB_005c9395
    FLD double ptr [ESP + 0x30]         ; 005c946b
        ;   Label: LAB_005c946b
    FSUB double ptr [ESP]               ; 005c946f
    FMUL ST0                            ; 005c9472
    FLD double ptr [ESP + 0x38]         ; 005c9474
    FSUB double ptr [ESP + 0x8]         ; 005c9478
    FMUL ST0                            ; 005c947c
    FLD double ptr [ESP + 0x40]         ; 005c947e
    FXCH                                ; 005c9482
    FADDP ST2,ST0                       ; 005c9484
    FSUB double ptr [ESP + 0x10]        ; 005c9486
    FMUL ST0                            ; 005c948a
    FADDP                               ; 005c948c
    FSQRT                               ; 005c948e
    FCOMP double ptr [0x00654232]       ; 005c9490 | DOUBLE_00654232
    FNSTSW AX                           ; 005c9496
    SAHF                                ; 005c9498
    JA 0x005c9439                       ; 005c9499
        ;   XREF to: 005c9439 (CONDITIONAL_JUMP)  ; LAB_005c9439
    MOV ESI,dword ptr [ESP + 0xa8]      ; 005c949b
    MOV EAX,dword ptr [EBX]             ; 005c94a2
    SUB EAX,ESI                         ; 005c94a4
    SUB EAX,0x2                         ; 005c94a6
    IMUL EAX,EAX,0x60                   ; 005c94a9
    PUSH EAX                            ; 005c94ac
    LEA EAX,[ESI + 0x2]                 ; 005c94ad
    IMUL EAX,EAX,0x60                   ; 005c94b0
    ADD EAX,dword ptr [EBP + 0x18]      ; 005c94b3
    PUSH EAX                            ; 005c94b6
    PUSH EDX                            ; 005c94b7
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005c94b8
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005c94bd
    MOV EAX,dword ptr [EBX]             ; 005c94c0
    LEA EDX,[ESI + -0x1]                ; 005c94c2
    SUB EAX,0x2                         ; 005c94c5
    MOV dword ptr [ESP + 0xa8],EDX      ; 005c94c8
    MOV dword ptr [EBX],EAX             ; 005c94cf
    INC dword ptr [ESP + 0xa8]          ; 005c94d1
    JMP 0x005c93a3                      ; 005c94d8
        ;   XREF to: 005c93a3 (UNCONDITIONAL_JUMP)  ; LAB_005c93a3
    CMP dword ptr [EBX],0x3             ; 005c94dd
        ;   Label: LAB_005c94dd
    JC 0x005c94e9                       ; 005c94e0
        ;   XREF to: 005c94e9 (CONDITIONAL_JUMP)  ; LAB_005c94e9
    MOV ESP,EBP                         ; 005c94e2
    POP EBP                             ; 005c94e4
    POP EDI                             ; 005c94e5
    POP ESI                             ; 005c94e6
    POP EBX                             ; 005c94e7
    RET                                 ; 005c94e8
    MOV dword ptr [EBX],0x0             ; 005c94e9
        ;   Label: LAB_005c94e9
    MOV ESP,EBP                         ; 005c94ef
    POP EBP                             ; 005c94f1
    POP EDI                             ; 005c94f2
    POP ESI                             ; 005c94f3
    POP EBX                             ; 005c94f4
    RET                                 ; 005c94f5

