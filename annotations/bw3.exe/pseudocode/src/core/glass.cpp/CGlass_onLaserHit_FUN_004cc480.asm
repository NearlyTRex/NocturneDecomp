; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004cc480(CGlass *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; Referenced Globals:
;   undefined4 DAT_005c45e8
;   undefined4 DAT_005c45f0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba28
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6ced0
;
; Called Functions:
;   core_actor.cpp_FUN_004096c0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc480
        ;   Label: core_glass.cpp_CGlass_onLaserHit_FUN_004cc480
    PUSH ESI                            ; 004cc481
    PUSH EDI                            ; 004cc482
    PUSH EBP                            ; 004cc483
    SUB ESP,0x14                        ; 004cc484
    MOV EBX,dword ptr [ESP + 0x28]      ; 004cc487
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004cc48b
    PUSH ESI                            ; 004cc48f
    PUSH EBX                            ; 004cc490
    CALL core_actor.cpp_FUN_004096c0    ; 004cc491
        ;   XREF to: 004096c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004096c0()
    MOV EDX,dword ptr [EBX + 0x218]     ; 004cc496
    ADD ESP,0x8                         ; 004cc49c
    TEST EDX,EDX                        ; 004cc49f
    JZ 0x004cc59b                       ; 004cc4a1
        ;   XREF to: 004cc59b (CONDITIONAL_JUMP)  ; LAB_004cc59b
    CMP dword ptr [EBX + 0x1b0],0x0     ; 004cc4a7
    JNZ 0x004cc4bf                      ; 004cc4ae
        ;   XREF to: 004cc4bf (CONDITIONAL_JUMP)  ; LAB_004cc4bf
    MOV dword ptr [ESI + 0x50],0x3f800000 ; 004cc4b0
    ADD ESP,0x14                        ; 004cc4b7
        ;   Label: LAB_004cc4b7
    POP EBP                             ; 004cc4ba
    POP EDI                             ; 004cc4bb
    POP ESI                             ; 004cc4bc
    POP EBX                             ; 004cc4bd
    RET                                 ; 004cc4be
    FLD float ptr [ESI + 0x30]          ; 004cc4bf
        ;   Label: LAB_004cc4bf
    FDIV float ptr [EBX + 0x15c]        ; 004cc4c2
    FLD float ptr [ESI + 0x2c]          ; 004cc4c8
    FDIV float ptr [EBX + 0x158]        ; 004cc4cb
    ADD EBX,0x3a4                       ; 004cc4d1
    PUSH EBX                            ; 004cc4d7
    FLD1                                ; 004cc4d8
    FXCH                                ; 004cc4da
    FADD double ptr [0x005c45f0]        ; 004cc4dc | DAT_005c45f0
    MOV EBX,dword ptr [0x005f2afc]      ; 004cc4e2 | DAT_005f2afc
    FSTP float ptr [ESP + 0x8]          ; 004cc4e8
    FSUBRP                              ; 004cc4ec
    PUSH EBX                            ; 004cc4ee | DAT_01bdd7e4
    FSTP float ptr [ESP + 0x10]         ; 004cc4ef
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004cc4f3
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004cc4f8
    FILD dword ptr [0x005fba28]         ; 004cc4fb | DAT_005fba28
    FLD float ptr [ESP + 0x4]           ; 004cc501
    FMUL ST1                            ; 004cc505
    FLD float ptr [ESP + 0x8]           ; 004cc507
    FMULP ST2                           ; 004cc50b
    CALL crt_math.c_round_FUN_005a3120  ; 004cc50d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004cc512
    CALL crt_math.c_round_FUN_005a3120  ; 004cc514
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004cc519
    FISTP dword ptr [ESP + 0xc]         ; 004cc51b
    MOV EDI,dword ptr [ESP + 0xc]       ; 004cc51f
    FISTP dword ptr [ESP + 0x10]        ; 004cc523
    TEST EDI,EDI                        ; 004cc527
    JL 0x004cc58b                       ; 004cc529
        ;   XREF to: 004cc58b (CONDITIONAL_JUMP)  ; LAB_004cc58b
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cc52b
        ;   Label: LAB_004cc52b
    MOV EDX,dword ptr [0x005fba28]      ; 004cc52f | DAT_005fba28
    CMP EAX,EDX                         ; 004cc535
    JL 0x004cc540                       ; 004cc537
        ;   XREF to: 004cc540 (CONDITIONAL_JUMP)  ; LAB_004cc540
    LEA EAX,[EDX + -0x1]                ; 004cc539
    MOV dword ptr [ESP + 0xc],EAX       ; 004cc53c
    CMP dword ptr [ESP + 0x10],0x0      ; 004cc540
        ;   Label: LAB_004cc540
    JL 0x004cc593                       ; 004cc545
        ;   XREF to: 004cc593 (CONDITIONAL_JUMP)  ; LAB_004cc593
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cc547
        ;   Label: LAB_004cc547
    MOV EDI,dword ptr [0x005fba28]      ; 004cc54b | DAT_005fba28
    CMP EAX,EDI                         ; 004cc551
    JL 0x004cc55c                       ; 004cc553
        ;   XREF to: 004cc55c (CONDITIONAL_JUMP)  ; LAB_004cc55c
    LEA EAX,[EDI + -0x1]                ; 004cc555
    MOV dword ptr [ESP + 0x10],EAX      ; 004cc558
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cc55c
        ;   Label: LAB_004cc55c
    IMUL EAX,dword ptr [0x005fba28]     ; 004cc560 | DAT_005fba28
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cc567
    ADD EBX,EAX                         ; 004cc56b
    MOV EAX,[0x01c6ced0]                ; 004cc56d | DAT_01c6ced0
    CMP byte ptr [EBX + EAX*0x1],0x0    ; 004cc572
    JNZ 0x004cc4b7                      ; 004cc576
        ;   XREF to: 004cc4b7 (CONDITIONAL_JUMP)  ; LAB_004cc4b7
    MOV dword ptr [ESI + 0x50],0x3f800000 ; 004cc57c
    ADD ESP,0x14                        ; 004cc583
    POP EBP                             ; 004cc586
    POP EDI                             ; 004cc587
    POP ESI                             ; 004cc588
    POP EBX                             ; 004cc589
    RET                                 ; 004cc58a
    XOR EBP,EBP                         ; 004cc58b
        ;   Label: LAB_004cc58b
    MOV dword ptr [ESP + 0xc],EBP       ; 004cc58d
    JMP 0x004cc52b                      ; 004cc591
        ;   XREF to: 004cc52b (UNCONDITIONAL_JUMP)  ; LAB_004cc52b
    XOR EBX,EBX                         ; 004cc593
        ;   Label: LAB_004cc593
    MOV dword ptr [ESP + 0x10],EBX      ; 004cc595
    JMP 0x004cc547                      ; 004cc599
        ;   XREF to: 004cc547 (UNCONDITIONAL_JUMP)  ; LAB_004cc547
    FILD dword ptr [EBX + 0x1ac]        ; 004cc59b
        ;   Label: LAB_004cc59b
    FMUL double ptr [0x005c45e8]        ; 004cc5a1 | DAT_005c45e8
    FLD1                                ; 004cc5a7
    FSUBRP                              ; 004cc5a9
    FSTP float ptr [ESI + 0x48]         ; 004cc5ab
    ADD ESP,0x14                        ; 004cc5ae
    POP EBP                             ; 004cc5b1
    POP EDI                             ; 004cc5b2
    POP ESI                             ; 004cc5b3
    POP EBX                             ; 004cc5b4
    RET                                 ; 004cc5b5

