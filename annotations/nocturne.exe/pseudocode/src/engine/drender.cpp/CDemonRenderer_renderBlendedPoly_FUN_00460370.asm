; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370(CDemonRenderer *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_curtain.cpp_FUN_0043f330 at 0043f4da
;   core_fire.cpp_CLaserBeam_render_FUN_00485a90 at 004868e5
;   core_glass.cpp_FUN_004ac440 at 004ac5ca
;   core_glass.cpp_FUN_004ac600 at 004ac789
;   core_water.cpp_CWater_render_FUN_00550cb0 at 005510f7
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01b4d76c
;   undefined4 DAT_01b4d770
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460370
        ;   Label: engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
    PUSH ESI                            ; 00460371
    PUSH EDI                            ; 00460372
    PUSH EBP                            ; 00460373
    SUB ESP,0x4                         ; 00460374
    MOV EBX,dword ptr [ESP + 0x18]      ; 00460377
    CMP dword ptr [EBX + 0xc],0x0       ; 0046037b
    JNZ 0x0046041e                      ; 0046037f
        ;   XREF to: 0046041e (CONDITIONAL_JUMP)  ; LAB_0046041e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00460385
        ;   Label: LAB_00460385
    MOV ECX,0xffffffff                  ; 00460389
    XOR EDX,EDX                         ; 0046038e
    MOV ESI,dword ptr [EAX + 0x4]       ; 00460390
    MOV dword ptr [ESP],ECX             ; 00460393
    TEST ESI,ESI                        ; 00460396
    JLE 0x004603d0                      ; 00460398
        ;   XREF to: 004603d0 (CONDITIONAL_JUMP)  ; LAB_004603d0
    XOR ECX,ECX                         ; 0046039a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046039c
        ;   Label: LAB_0046039c
    MOV dword ptr [ECX + 0x1b4d76c],ESI ; 0046039f | DAT_01b4d76c | DAT_01b4d770
    IMUL ESI,ESI,0x30                   ; 004603a5
    MOV EDI,dword ptr [EBX]             ; 004603a8
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 004603aa
    MOV EDI,dword ptr [ESP]             ; 004603ae
    ADD ECX,0x4                         ; 004603b1
    AND EDI,ESI                         ; 004603b4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004603b6
    ADD EAX,0xc                         ; 004603ba
    INC EDX                             ; 004603bd
    MOV EBP,dword ptr [ESI + 0x4]       ; 004603be
    MOV dword ptr [ESP],EDI             ; 004603c1
    CMP EDX,EBP                         ; 004603c4
    JL 0x0046039c                       ; 004603c6
        ;   XREF to: 0046039c (CONDITIONAL_JUMP)  ; LAB_0046039c
    LEA EAX,[EAX]                       ; 004603c8
    MOV EDX,EDX                         ; 004603ce
    TEST byte ptr [ESP + 0x3],0x80      ; 004603d0
        ;   Label: LAB_004603d0
    JZ 0x004603dd                       ; 004603d5
        ;   XREF to: 004603dd (CONDITIONAL_JUMP)  ; LAB_004603dd
    TEST byte ptr [ESP],0x1f            ; 004603d7
    JNZ 0x00460416                      ; 004603db
        ;   XREF to: 00460416 (CONDITIONAL_JUMP)  ; LAB_00460416
    CMP dword ptr [EBX + 0x4],0x0       ; 004603dd
        ;   Label: LAB_004603dd
    JZ 0x00460437                       ; 004603e1
        ;   XREF to: 00460437 (CONDITIONAL_JUMP)  ; LAB_00460437
    XOR ESI,ESI                         ; 004603e3
    MOV ECX,0x463a79                    ; 004603e5
    MOV dword ptr [0x01c039a0],ESI      ; 004603ea | DAT_01c039a0
    MOV dword ptr [0x01c039a4],ESI      ; 004603f0 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],ECX      ; 004603f6 | DAT_01c00c7c
    LEA EAX,[EAX]                       ; 004603fc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00460400
        ;   Label: LAB_00460400
    PUSH 0x1b4d76c                      ; 00460404 | DAT_01b4d76c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00460409
    PUSH EDX                            ; 0046040c
    PUSH EBX                            ; 0046040d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0046040e
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00460413
    ADD ESP,0x4                         ; 00460416
        ;   Label: LAB_00460416
    POP EBP                             ; 00460419
    POP EDI                             ; 0046041a
    POP ESI                             ; 0046041b
    POP EBX                             ; 0046041c
    RET                                 ; 0046041d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046041e
        ;   Label: LAB_0046041e
    ADD EAX,0x8                         ; 00460422
    PUSH EAX                            ; 00460425
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00460426
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046042b
    TEST EAX,EAX                        ; 0046042e
    JZ 0x00460416                       ; 00460430
        ;   XREF to: 00460416 (CONDITIONAL_JUMP)  ; LAB_00460416
    JMP 0x00460385                      ; 00460432
        ;   XREF to: 00460385 (UNCONDITIONAL_JUMP)  ; LAB_00460385
    CMP dword ptr [0x005b7624],0x20     ; 00460437 | DAT_005b7624
        ;   Label: LAB_00460437
    JNZ 0x004604a9                      ; 0046043e
        ;   XREF to: 004604a9 (CONDITIONAL_JUMP)  ; LAB_004604a9
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00460440 | DAT_01c00c7c
    MOV EBP,0x6                         ; 0046044a
        ;   Label: LAB_0046044a
    MOV EDI,0x267                       ; 0046044f
    MOV EAX,dword ptr [EBX + 0x20]      ; 00460454
    MOV dword ptr [0x01c039a4],EBP      ; 00460457 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EDI      ; 0046045d | DAT_01c039a0
    TEST EAX,EAX                        ; 00460463
    JNZ 0x00460400                      ; 00460465
        ;   XREF to: 00460400 (CONDITIONAL_JUMP)  ; LAB_00460400
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00460467
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046046b
    XOR ECX,ECX                         ; 0046046e
    TEST EDX,EDX                        ; 00460470
    JLE 0x00460400                      ; 00460472
        ;   XREF to: 00460400 (CONDITIONAL_JUMP)  ; LAB_00460400
    XOR EDX,EDX                         ; 00460474
    MOV ESI,dword ptr [EDX + 0x1b4d76c] ; 00460476 | DAT_01b4d76c | DAT_01b4d770
        ;   Label: LAB_00460476
    IMUL ESI,ESI,0x30                   ; 0046047c
    MOV EDI,dword ptr [EBX]             ; 0046047f
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00460481
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 00460484
    MOV EDI,dword ptr [EBX]             ; 00460488
    ADD EDI,ESI                         ; 0046048a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046048c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046048f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00460492
    ADD EAX,0xc                         ; 00460496
    INC ECX                             ; 00460499
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046049a
    ADD EDX,0x4                         ; 0046049d
    CMP ECX,EBP                         ; 004604a0
    JL 0x00460476                       ; 004604a2
        ;   XREF to: 00460476 (CONDITIONAL_JUMP)  ; LAB_00460476
    JMP 0x00460400                      ; 004604a4
        ;   XREF to: 00460400 (UNCONDITIONAL_JUMP)  ; LAB_00460400
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004604a9 | DAT_01c00c7c
        ;   Label: LAB_004604a9
    JMP 0x0046044a                      ; 004604b3
        ;   XREF to: 0046044a (UNCONDITIONAL_JUMP)  ; LAB_0046044a

