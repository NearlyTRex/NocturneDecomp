; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006093bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0070ca5c
;   undefined4 DAT_0070ca60
;   undefined4 DAT_0070ca70
;   undefined4 DAT_0070ca74
;   undefined4 DAT_0070ca98
;   undefined4 DAT_0070ca9c
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01c35e64
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   ... and 1 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_3d.c_lookupLitColor_FUN_004039e0
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_light.cpp_calculateLighting_FUN_004e28b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00406450
        ;   Label: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450
    PUSH EDI                            ; 00406451
    PUSH EBP                            ; 00406452
    MOV EBP,dword ptr [0x0070ca60]      ; 00406453 | DAT_0070ca60
    MOV EDI,dword ptr [ESP + 0x10]      ; 00406459
    LEA ESI,[EDI + 0x18]                ; 0040645d
    LEA EAX,[EDI + 0x8]                 ; 00406460
    PUSH EAX                            ; 00406463
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00406464
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406469
    TEST EAX,EAX                        ; 0040646c
    JZ 0x004066c6                       ; 0040646e
        ;   XREF to: 004066c6 (CONDITIONAL_JUMP)  ; LAB_004066c6
    PUSH EBX                            ; 00406474
    MOV EDX,dword ptr [0x0070ca74]      ; 00406475 | DAT_0070ca74
    MOV EBP,dword ptr [0x0070ca60]      ; 0040647b | DAT_0070ca60
    TEST EDX,EDX                        ; 00406481
    JZ 0x00406544                       ; 00406483
        ;   XREF to: 00406544 (CONDITIONAL_JUMP)  ; LAB_00406544
    CMP dword ptr [0x01c38b40],0x0      ; 00406489 | DAT_01c38b40
    JNZ 0x0040651d                      ; 00406490
        ;   XREF to: 0040651d (CONDITIONAL_JUMP)  ; LAB_0040651d
    CMP dword ptr [0x006141c0],0x20     ; 00406496 | DAT_006141c0
    JNZ 0x00406511                      ; 0040649d
        ;   XREF to: 00406511 (CONDITIONAL_JUMP)  ; LAB_00406511
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 0040649f | DAT_01c35e6c
    XOR ECX,ECX                         ; 004064a9
        ;   Label: LAB_004064a9
    MOV dword ptr [0x0070ca60],EBP      ; 004064ab | DAT_0070ca60
    MOV dword ptr [0x01c38b58],ECX      ; 004064b1 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],ECX      ; 004064b7 | DAT_01c38b54
        ;   Label: LAB_004064b7
    MOV EBX,0x70ca98                    ; 004064bd | DAT_0070ca98
        ;   Label: LAB_004064bd
    MOV EBP,dword ptr [0x0070ca60]      ; 004064c2 | DAT_0070ca60
    MOV EAX,ESI                         ; 004064c8
    XOR ECX,ECX                         ; 004064ca
    MOV EDX,dword ptr [EDI + 0x4]       ; 004064cc
        ;   Label: LAB_004064cc
    LEA EDX,[EDX + EDX*0x2]             ; 004064cf
    MOV dword ptr [0x0070ca60],EBP      ; 004064d2 | DAT_0070ca60
    CMP ECX,EDX                         ; 004064d8
    JGE 0x004066b4                      ; 004064da
        ;   XREF to: 004066b4 (CONDITIONAL_JUMP)  ; LAB_004066b4
    MOV EDX,dword ptr [EAX]             ; 004064e0
    ADD EDX,EBP                         ; 004064e2
    MOV dword ptr [EBX],EDX             ; 004064e4 | DAT_0070ca98 | DAT_0070ca9c
    MOV EDX,dword ptr [EAX]             ; 004064e6
    ADD EDX,EBP                         ; 004064e8
    IMUL ESI,EDX,0x30                   ; 004064ea
    MOV EDX,dword ptr [EAX + 0x4]       ; 004064ed
    MOV dword ptr [ESI + 0x62202c],EDX  ; 004064f0 | DAT_0062202c
    MOV EDX,dword ptr [EAX]             ; 004064f6
    ADD EDX,EBP                         ; 004064f8
    IMUL ESI,EDX,0x30                   ; 004064fa
    ADD EAX,0xc                         ; 004064fd
    ADD EBX,0x4                         ; 00406500
    MOV EDX,dword ptr [EAX + -0x4]      ; 00406503
    ADD ECX,0x3                         ; 00406506
    MOV dword ptr [ESI + 0x622030],EDX  ; 00406509 | DAT_00622030
    JMP 0x004064cc                      ; 0040650f
        ;   XREF to: 004064cc (UNCONDITIONAL_JUMP)  ; LAB_004064cc
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00406511 | DAT_01c35e6c
        ;   Label: LAB_00406511
    JMP 0x004064a9                      ; 0040651b
        ;   XREF to: 004064a9 (UNCONDITIONAL_JUMP)  ; LAB_004064a9
    CMP dword ptr [0x006141c0],0x20     ; 0040651d | DAT_006141c0
        ;   Label: LAB_0040651d
    JNZ 0x00406535                      ; 00406524
        ;   XREF to: 00406535 (CONDITIONAL_JUMP)  ; LAB_00406535
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00406526 | DAT_01c35e6c
    JMP 0x004064a9                      ; 00406530
        ;   XREF to: 004064a9 (UNCONDITIONAL_JUMP)  ; LAB_004064a9
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00406535 | DAT_01c35e6c
        ;   Label: LAB_00406535
    JMP 0x004064a9                      ; 0040653f
        ;   XREF to: 004064a9 (UNCONDITIONAL_JUMP)  ; LAB_004064a9
    CMP dword ptr [0x0070ca70],0x0      ; 00406544 | DAT_0070ca70
        ;   Label: LAB_00406544
    JNZ 0x00406622                      ; 0040654b
        ;   XREF to: 00406622 (CONDITIONAL_JUMP)  ; LAB_00406622
    CMP dword ptr [0x01c38b40],0x0      ; 00406551 | DAT_01c38b40
    JNZ 0x004065ba                      ; 00406558
        ;   XREF to: 004065ba (CONDITIONAL_JUMP)  ; LAB_004065ba
    CMP dword ptr [0x006141c0],0x20     ; 0040655a | DAT_006141c0
    JNZ 0x004065ae                      ; 00406561
        ;   XREF to: 004065ae (CONDITIONAL_JUMP)  ; LAB_004065ae
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00406563 | DAT_01c35e6c
    CMP dword ptr [0x006093bc],0x0      ; 0040656d | DAT_006093bc
        ;   Label: LAB_0040656d
    JNZ 0x00406608                      ; 00406574
        ;   XREF to: 00406608 (CONDITIONAL_JUMP)  ; LAB_00406608
    CMP dword ptr [0x01c38b40],0x0      ; 0040657a | DAT_01c38b40
    JNZ 0x004065e7                      ; 00406581
        ;   XREF to: 004065e7 (CONDITIONAL_JUMP)  ; LAB_004065e7
    CMP dword ptr [0x006141c0],0x20     ; 00406583 | DAT_006141c0
    JNZ 0x004065db                      ; 0040658a
        ;   XREF to: 004065db (CONDITIONAL_JUMP)  ; LAB_004065db
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 0040658c | DAT_01c35e6c
    XOR EDX,EDX                         ; 00406596
        ;   Label: LAB_00406596
    MOV dword ptr [0x01c38b58],EDX      ; 00406598 | DAT_01c38b58
    MOV ECX,0xc1                        ; 0040659e
    MOV dword ptr [0x0070ca60],EBP      ; 004065a3 | DAT_0070ca60
    JMP 0x004064b7                      ; 004065a9
        ;   XREF to: 004064b7 (UNCONDITIONAL_JUMP)  ; LAB_004064b7
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004065ae | DAT_01c35e6c
        ;   Label: LAB_004065ae
    JMP 0x0040656d                      ; 004065b8
        ;   XREF to: 0040656d (UNCONDITIONAL_JUMP)  ; LAB_0040656d
    CMP dword ptr [0x006141c0],0x20     ; 004065ba | DAT_006141c0
        ;   Label: LAB_004065ba
    JNZ 0x004065cf                      ; 004065c1
        ;   XREF to: 004065cf (CONDITIONAL_JUMP)  ; LAB_004065cf
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004065c3 | DAT_01c35e6c
    JMP 0x0040656d                      ; 004065cd
        ;   XREF to: 0040656d (UNCONDITIONAL_JUMP)  ; LAB_0040656d
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004065cf | DAT_01c35e6c
        ;   Label: LAB_004065cf
    JMP 0x0040656d                      ; 004065d9
        ;   XREF to: 0040656d (UNCONDITIONAL_JUMP)  ; LAB_0040656d
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004065db | DAT_01c35e6c
        ;   Label: LAB_004065db
    JMP 0x00406596                      ; 004065e5
        ;   XREF to: 00406596 (UNCONDITIONAL_JUMP)  ; LAB_00406596
    CMP dword ptr [0x006141c0],0x20     ; 004065e7 | DAT_006141c0
        ;   Label: LAB_004065e7
    JNZ 0x004065fc                      ; 004065ee
        ;   XREF to: 004065fc (CONDITIONAL_JUMP)  ; LAB_004065fc
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004065f0 | DAT_01c35e6c
    JMP 0x00406596                      ; 004065fa
        ;   XREF to: 00406596 (UNCONDITIONAL_JUMP)  ; LAB_00406596
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004065fc | DAT_01c35e6c
        ;   Label: LAB_004065fc
    JMP 0x00406596                      ; 00406606
        ;   XREF to: 00406596 (UNCONDITIONAL_JUMP)  ; LAB_00406596
    MOV dword ptr [0x01c38b58],0x1      ; 00406608 | DAT_01c38b58
        ;   Label: LAB_00406608
    MOV ECX,0xc1                        ; 00406612
    MOV dword ptr [0x0070ca60],EBP      ; 00406617 | DAT_0070ca60
    JMP 0x004064b7                      ; 0040661d
        ;   XREF to: 004064b7 (UNCONDITIONAL_JUMP)  ; LAB_004064b7
    CMP dword ptr [0x01c38b40],0x0      ; 00406622 | DAT_01c38b40
        ;   Label: LAB_00406622
    JNZ 0x00406693                      ; 00406629
        ;   XREF to: 00406693 (CONDITIONAL_JUMP)  ; LAB_00406693
    CMP dword ptr [0x006141c0],0x20     ; 0040662b | DAT_006141c0
    JNZ 0x00406687                      ; 00406632
        ;   XREF to: 00406687 (CONDITIONAL_JUMP)  ; LAB_00406687
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00406634 | DAT_01c35e6c
    MOV EAX,dword ptr [EDI + 0x10]      ; 0040663e
        ;   Label: LAB_0040663e
    MOV ECX,0xc0                        ; 00406641
    PUSH EAX                            ; 00406646
    MOV EDX,dword ptr [EDI + 0xc]       ; 00406647
    MOV dword ptr [0x01c38b54],ECX      ; 0040664a | DAT_01c38b54
    PUSH EDX                            ; 00406650
    MOV ECX,dword ptr [EDI + 0x8]       ; 00406651
    MOV EBX,0x1                         ; 00406654
    PUSH ECX                            ; 00406659
    MOV dword ptr [0x01c38b58],EBX      ; 0040665a | DAT_01c38b58
    CALL engine_light.cpp_calculateLighting_FUN_004e28b0 ; 00406660
        ;   XREF to: 004e28b0 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004e28b0(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00406665
    MOV EBX,dword ptr [0x01c35e64]      ; 00406668 | DAT_01c35e64
    PUSH EBX                            ; 0040666e
    MOV EAX,[0x0070ca5c]                ; 0040666f | DAT_0070ca5c
    PUSH EAX                            ; 00406674
    CALL engine_3d.c_lookupLitColor_FUN_004039e0 ; 00406675
        ;   XREF to: 004039e0 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_004039e0(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 0040667a
    MOV [0x01c35e60],EAX                ; 0040667d | DAT_01c35e60
    JMP 0x004064bd                      ; 00406682
        ;   XREF to: 004064bd (UNCONDITIONAL_JUMP)  ; LAB_004064bd
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00406687 | DAT_01c35e6c
        ;   Label: LAB_00406687
    JMP 0x0040663e                      ; 00406691
        ;   XREF to: 0040663e (UNCONDITIONAL_JUMP)  ; LAB_0040663e
    CMP dword ptr [0x006141c0],0x20     ; 00406693 | DAT_006141c0
        ;   Label: LAB_00406693
    JNZ 0x004066a8                      ; 0040669a
        ;   XREF to: 004066a8 (CONDITIONAL_JUMP)  ; LAB_004066a8
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040669c | DAT_01c35e6c
    JMP 0x0040663e                      ; 004066a6
        ;   XREF to: 0040663e (UNCONDITIONAL_JUMP)  ; LAB_0040663e
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004066a8 | DAT_01c35e6c
        ;   Label: LAB_004066a8
    JMP 0x0040663e                      ; 004066b2
        ;   XREF to: 0040663e (UNCONDITIONAL_JUMP)  ; LAB_0040663e
    PUSH 0x70ca98                       ; 004066b4 | DAT_0070ca98
        ;   Label: LAB_004066b4
    MOV ESI,dword ptr [EDI + 0x4]       ; 004066b9
    PUSH ESI                            ; 004066bc
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 004066bd
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004066c2
    POP EBX                             ; 004066c5
    MOV EDX,dword ptr [EDI + 0x4]       ; 004066c6
        ;   Label: LAB_004066c6
    LEA EAX,[EDX*0x4 + 0x0]             ; 004066c9
    SUB EAX,EDX                         ; 004066d0
    ADD EDI,0x18                        ; 004066d2
    SHL EAX,0x2                         ; 004066d5
    MOV EBP,dword ptr [0x0070ca60]      ; 004066d8 | DAT_0070ca60
    ADD EAX,EDI                         ; 004066de
    POP EBP                             ; 004066e0
    POP EDI                             ; 004066e1
    POP ESI                             ; 004066e2
    RET                                 ; 004066e3

