; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CMouse_render_FUN_00531460(CMouse *this_ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01c43530
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;
; Called Functions:
;   engine_3d.c_setBlendMode_FUN_00406c20
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531460
        ;   Label: engine_ncursfx.cpp_CMouse_render_FUN_00531460
    PUSH EDI                            ; 00531461
    MOV EBX,dword ptr [ESP + 0xc]       ; 00531462
    MOV EDX,dword ptr [0x01c43540]      ; 00531466 | DAT_01c43540
    MOV EAX,[0x01c4353c]                ; 0053146c | DAT_01c4353c
    MOV ECX,dword ptr [EBX + 0x25c]     ; 00531471
    SUB EDX,0xc                         ; 00531477
    SUB EAX,0xd                         ; 0053147a
    CMP ECX,0x1                         ; 0053147d
    JZ 0x00531514                       ; 00531480
        ;   XREF to: 00531514 (CONDITIONAL_JUMP)  ; LAB_00531514
    CMP ECX,0x2                         ; 00531486
    JNZ 0x00531544                      ; 00531489
        ;   XREF to: 00531544 (CONDITIONAL_JUMP)  ; LAB_00531544
    PUSH 0xffff                         ; 0053148f
    PUSH EDX                            ; 00531494
    PUSH EAX                            ; 00531495
    MOV EAX,dword ptr [EBX + 0x258]     ; 00531496
    MOV EDX,EAX                         ; 0053149c
    SAR EDX,0x1f                        ; 0053149e
    SHL EDX,0x10                        ; 005314a1
    SBB EAX,EDX                         ; 005314a4
    SAR EAX,0x10                        ; 005314a6
    MOV EDX,EAX                         ; 005314a9
    SHL EAX,0x2                         ; 005314ab
    ADD EDX,EAX                         ; 005314ae
    SHL EDX,0x2                         ; 005314b0
    LEA EAX,[EBX + 0x12c]               ; 005314b3
    ADD EAX,EDX                         ; 005314b9
    PUSH EAX                            ; 005314bb
        ;   Label: LAB_005314bb
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 005314bc
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
        ;   Label: LAB_005314bc
    ADD ESP,0x10                        ; 005314c1
    MOV EDI,dword ptr [EBX + 0x25c]     ; 005314c4
    TEST EDI,EDI                        ; 005314ca
    JZ 0x00531511                       ; 005314cc
        ;   XREF to: 00531511 (CONDITIONAL_JUMP)  ; LAB_00531511
    CMP EDI,0x2                         ; 005314ce
    JNZ 0x00531551                      ; 005314d1
        ;   XREF to: 00531551 (CONDITIONAL_JUMP)  ; LAB_00531551
    MOV EAX,[0x01c43530]                ; 005314d7 | DAT_01c43530
        ;   Label: LAB_005314d7
    MOV EDX,dword ptr [EBX + 0x258]     ; 005314dc
    SHL EAX,0x5                         ; 005314e2
    MOV ECX,dword ptr [EBX + 0x25c]     ; 005314e5
    ADD EDX,EAX                         ; 005314eb
    MOV EAX,0x7                         ; 005314ed
    MOV dword ptr [EBX + 0x258],EDX     ; 005314f2
    CMP ECX,0x2                         ; 005314f8
    JNZ 0x00531502                      ; 005314fb
        ;   XREF to: 00531502 (CONDITIONAL_JUMP)  ; LAB_00531502
    MOV EAX,0xf                         ; 005314fd
    SHL EAX,0x10                        ; 00531502
        ;   Label: LAB_00531502
    CMP EAX,dword ptr [EBX + 0x258]     ; 00531505
    JLE 0x005315af                      ; 0053150b
        ;   XREF to: 005315af (CONDITIONAL_JUMP)  ; LAB_005315af
    POP EDI                             ; 00531511
        ;   Label: LAB_00531511
    POP EBX                             ; 00531512
    RET                                 ; 00531513
    PUSH 0xffff                         ; 00531514
        ;   Label: LAB_00531514
    PUSH EDX                            ; 00531519
    PUSH EAX                            ; 0053151a
    MOV EAX,dword ptr [EBX + 0x258]     ; 0053151b
    MOV EDX,EAX                         ; 00531521
    SAR EDX,0x1f                        ; 00531523
    SHL EDX,0x10                        ; 00531526
    SBB EAX,EDX                         ; 00531529
    SAR EAX,0x10                        ; 0053152b
    LEA EDX,[EAX + ECX*0x1]             ; 0053152e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00531531
    ADD EAX,EDX                         ; 00531538
    SHL EAX,0x2                         ; 0053153a
    ADD EAX,EBX                         ; 0053153d
    JMP 0x005314bb                      ; 0053153f
        ;   XREF to: 005314bb (UNCONDITIONAL_JUMP)  ; LAB_005314bb
    PUSH 0xffff                         ; 00531544
        ;   Label: LAB_00531544
    PUSH EDX                            ; 00531549
    PUSH EAX                            ; 0053154a
    PUSH EBX                            ; 0053154b
    JMP 0x005314bc                      ; 0053154c
        ;   XREF to: 005314bc (UNCONDITIONAL_JUMP)  ; LAB_005314bc
    PUSH 0x1                            ; 00531551
        ;   Label: LAB_00531551
    CALL engine_3d.c_setBlendMode_FUN_00406c20 ; 00531553
        ;   XREF to: 00406c20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406c20(int blend_mode)
    ADD ESP,0x4                         ; 00531558
    MOV EAX,[0x01c43540]                ; 0053155b | DAT_01c43540
    PUSH 0x8000                         ; 00531560
    SUB EAX,0xc                         ; 00531565
    PUSH EAX                            ; 00531568
    MOV EAX,[0x01c4353c]                ; 00531569 | DAT_01c4353c
    SUB EAX,0xd                         ; 0053156e
    PUSH EAX                            ; 00531571
    MOV EAX,dword ptr [EBX + 0x258]     ; 00531572
    MOV EDX,EAX                         ; 00531578
    SAR EDX,0x1f                        ; 0053157a
    SHL EDX,0x10                        ; 0053157d
    SBB EAX,EDX                         ; 00531580
    SAR EAX,0x10                        ; 00531582
    MOV EDX,EAX                         ; 00531585
    SHL EAX,0x2                         ; 00531587
    ADD EDX,EAX                         ; 0053158a
    SHL EDX,0x2                         ; 0053158c
    LEA EAX,[EBX + 0xa0]                ; 0053158f
    ADD EAX,EDX                         ; 00531595
    PUSH EAX                            ; 00531597
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 00531598
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 0053159d
    PUSH 0x0                            ; 005315a0
    CALL engine_3d.c_setBlendMode_FUN_00406c20 ; 005315a2
        ;   XREF to: 00406c20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406c20(int blend_mode)
    ADD ESP,0x4                         ; 005315a7
    JMP 0x005314d7                      ; 005315aa
        ;   XREF to: 005314d7 (UNCONDITIONAL_JUMP)  ; LAB_005314d7
    MOV dword ptr [EBX + 0x25c],0x0     ; 005315af
        ;   Label: LAB_005315af
    MOV dword ptr [EBX + 0x258],0x0     ; 005315b9
    POP EDI                             ; 005315c3
    POP EBX                             ; 005315c4
    RET                                 ; 005315c5

