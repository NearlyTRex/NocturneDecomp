; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_bmppuzzl_cpp_FUN_004123c0(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b678e
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;
; Called Functions:
;   core_actor.cpp_FUN_0040cfa0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;   engine_special.cpp_clearScreen_FUN_00560d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004123c0
        ;   Label: unkafter_bmppuzzl.cpp_FUN_004123c0
    PUSH ESI                            ; 004123c1
    PUSH EDI                            ; 004123c2
    PUSH EBP                            ; 004123c3
    SUB ESP,0xc                         ; 004123c4
    MOV EDI,dword ptr [ESP + 0x20]      ; 004123c7
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 004123cb
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    PUSH 0xffff                         ; 004123d0
    PUSH 0x0                            ; 004123d5
    LEA EAX,[EDI + 0x4]                 ; 004123d7
    PUSH 0x0                            ; 004123da
    LEA EBP,[EDI + 0x54]                ; 004123dc
    PUSH EAX                            ; 004123df
    XOR ESI,ESI                         ; 004123e0
    MOV EBX,EDI                         ; 004123e2
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004123e4
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004123e9
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004123ec
        ;   Label: LAB_004123ec
    INC EAX                             ; 004123ef
    CMP ESI,EAX                         ; 004123f0
    JGE 0x0041241e                      ; 004123f2
        ;   XREF to: 0041241e (CONDITIONAL_JUMP)  ; LAB_0041241e
    IMUL ECX,ESI,0x2c                   ; 004123f4
    CMP dword ptr [EBX + 0x7c],0x1      ; 004123f7
    JZ 0x00412403                       ; 004123fb
        ;   XREF to: 00412403 (CONDITIONAL_JUMP)  ; LAB_00412403
    INC ESI                             ; 004123fd
        ;   Label: LAB_004123fd
    ADD EBX,0x2c                        ; 004123fe
    JMP 0x004123ec                      ; 00412401
        ;   XREF to: 004123ec (UNCONDITIONAL_JUMP)  ; LAB_004123ec
    PUSH 0xffff                         ; 00412403
        ;   Label: LAB_00412403
    MOV EDX,dword ptr [EBX + 0x70]      ; 00412408
    PUSH EDX                            ; 0041240b
    MOV EAX,dword ptr [EBX + 0x6c]      ; 0041240c
    PUSH EAX                            ; 0041240f
    LEA EAX,[ECX + EBP*0x1]             ; 00412410
    PUSH EAX                            ; 00412413
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 00412414
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 00412419
    JMP 0x004123fd                      ; 0041241c
        ;   XREF to: 004123fd (UNCONDITIONAL_JUMP)  ; LAB_004123fd
    CMP dword ptr [EDI + 0x34],0x0      ; 0041241e
        ;   Label: LAB_0041241e
    JNZ 0x0041244b                      ; 00412422
        ;   XREF to: 0041244b (CONDITIONAL_JUMP)  ; LAB_0041244b
    MOV EAX,dword ptr [EDI + 0x44]      ; 00412424
    MOV EDX,dword ptr [0x005fe9dc]      ; 00412427 | g_CGamePtr
    INC EAX                             ; 0041242d
    FLD float ptr [EDX + 0x314]         ; 0041242e
    MOV dword ptr [ESP + 0x8],EAX       ; 00412434
    FMUL double ptr [0x005b678e]        ; 00412438 | DAT_005b678e
    FILD dword ptr [ESP + 0x8]          ; 0041243e
    FMULP                               ; 00412442
    LEA EAX,[EDI + 0x50]                ; 00412444
    FADD float ptr [EAX]                ; 00412447
    FSTP float ptr [EAX]                ; 00412449
    CMP dword ptr [EDI + 0x34],0x2      ; 0041244b
        ;   Label: LAB_0041244b
    JNZ 0x00412478                      ; 0041244f
        ;   XREF to: 00412478 (CONDITIONAL_JUMP)  ; LAB_00412478
    MOV EAX,dword ptr [EDI + 0x44]      ; 00412451
    MOV EDX,dword ptr [0x005fe9dc]      ; 00412454 | g_CGamePtr
    INC EAX                             ; 0041245a
    FLD float ptr [EDX + 0x314]         ; 0041245b
    MOV dword ptr [ESP + 0x8],EAX       ; 00412461
    FMUL double ptr [0x005b678e]        ; 00412465 | DAT_005b678e
    FILD dword ptr [ESP + 0x8]          ; 0041246b
    FMULP                               ; 0041246f
    LEA EAX,[EDI + 0x50]                ; 00412471
    FSUBR float ptr [EAX]               ; 00412474
    FSTP float ptr [EAX]                ; 00412476
    PUSH dword ptr [EDI + 0x50]         ; 00412478
        ;   Label: LAB_00412478
    CALL core_actor.cpp_FUN_0040cfa0    ; 0041247b
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0xc],EAX       ; 00412480
    FLD float ptr [ESP + 0xc]           ; 00412484
    ADD ESP,0x4                         ; 00412488
    PUSH 0x0                            ; 0041248b
    FSTP float ptr [EDI + 0x50]         ; 0041248d
    PUSH dword ptr [EDI + 0x50]         ; 00412490
    PUSH 0x10                           ; 00412493
    PUSH 0x1                            ; 00412495
    MOV EAX,dword ptr [EDI]             ; 00412497
    PUSH EDI                            ; 00412499
    CALL dword ptr [EAX + 0x3c]         ; 0041249a
    ADD ESP,0x14                        ; 0041249d
    PUSH 0x1                            ; 004124a0
    PUSH dword ptr [EDI + 0x50]         ; 004124a2
    PUSH 0x4                            ; 004124a5
    PUSH 0x4                            ; 004124a7
    MOV EAX,dword ptr [EDI]             ; 004124a9
    PUSH EDI                            ; 004124ab
    CALL dword ptr [EAX + 0x3c]         ; 004124ac
    ADD ESP,0x14                        ; 004124af
    PUSH 0x0                            ; 004124b2
    PUSH dword ptr [EDI + 0x50]         ; 004124b4
    PUSH 0x10                           ; 004124b7
    PUSH 0x17d                          ; 004124b9
    MOV EAX,dword ptr [EDI]             ; 004124be
    PUSH EDI                            ; 004124c0
    CALL dword ptr [EAX + 0x3c]         ; 004124c1
    ADD ESP,0x14                        ; 004124c4
    PUSH 0x1                            ; 004124c7
    PUSH dword ptr [EDI + 0x50]         ; 004124c9
    PUSH 0x4                            ; 004124cc
    PUSH 0x181                          ; 004124ce
    MOV EAX,dword ptr [EDI]             ; 004124d3
    PUSH EDI                            ; 004124d5
    CALL dword ptr [EAX + 0x3c]         ; 004124d6
    MOV EDX,dword ptr [EDI + 0x18]      ; 004124d9
    ADD ESP,0x14                        ; 004124dc
    MOV EAX,[0x01c5fae0]                ; 004124df | DAT_01c5fae0
    MOV ECX,dword ptr [EDI + EDX*0x4 + 0xbf4] ; 004124e4
    PUSH 0xffff                         ; 004124eb
    SUB EAX,ECX                         ; 004124f0
    MOV EBX,dword ptr [EDI + EDX*0x4 + 0xbe4] ; 004124f2
    PUSH EAX                            ; 004124f9
    MOV EAX,[0x01c5fadc]                ; 004124fa | DAT_01c5fadc
    SUB EAX,EBX                         ; 004124ff
    PUSH EAX                            ; 00412501
    LEA EAX,[EDX*0x4 + 0x0]             ; 00412502
    ADD EAX,EDX                         ; 00412509
    SHL EAX,0x2                         ; 0041250b
    ADD EAX,0x7dffc0                    ; 0041250e
    PUSH EAX                            ; 00412513
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 00412514
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 00412519
    ADD ESP,0xc                         ; 0041251c
    POP EBP                             ; 0041251f
    POP EDI                             ; 00412520
    POP ESI                             ; 00412521
    POP EBX                             ; 00412522
    RET                                 ; 00412523

