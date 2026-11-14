; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407490(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_006141d8
;   undefined4 DAT_00622014
;   undefined4 DAT_00622018
;   undefined4 DAT_0070caf8
;   undefined4 DAT_0070cafc
;   undefined4 DAT_0070cb00
;   undefined4 DAT_0070cb04
;   undefined4 DAT_0070cb08
;   undefined4 DAT_0070cb0c
;   undefined4 DAT_0070cb34
;   undefined4 DAT_0070cbc4
;   undefined4 DAT_0070cbc8
;   undefined4 DAT_0070cc0c
;   undefined4 DAT_0070cc10
;   ... and 6 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_texture.cpp_getCurrentTexture_FUN_005750e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407490
        ;   Label: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407490
    PUSH ESI                            ; 00407491
    PUSH EDI                            ; 00407492
    PUSH EBP                            ; 00407493
    SUB ESP,0x4                         ; 00407494
    MOV EAX,dword ptr [ESP + 0x18]      ; 00407497
    ADD EAX,0x8                         ; 0040749b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040749e
    PUSH EAX                            ; 004074a2
    ADD EBX,0x18                        ; 004074a3
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 004074a6
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 004074ab
    TEST EAX,EAX                        ; 004074ae
    JZ 0x004075c8                       ; 004074b0
        ;   XREF to: 004075c8 (CONDITIONAL_JUMP)  ; LAB_004075c8
    CMP dword ptr [0x01c38b40],0x0      ; 004074b6 | DAT_01c38b40
    JNZ 0x004075ff                      ; 004074bd
        ;   XREF to: 004075ff (CONDITIONAL_JUMP)  ; LAB_004075ff
    CMP dword ptr [0x006141c0],0x20     ; 004074c3 | DAT_006141c0
    JNZ 0x004075f0                      ; 004074ca
        ;   XREF to: 004075f0 (CONDITIONAL_JUMP)  ; LAB_004075f0
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004074d0 | DAT_01c35e6c
    MOV ESI,0x1                         ; 004074da
        ;   Label: LAB_004074da
    MOV ECX,0x1e7                       ; 004074df
    MOV EDI,dword ptr [0x0070caf8]      ; 004074e4 | DAT_0070caf8
    MOV dword ptr [0x01c38b58],ESI      ; 004074ea | DAT_01c38b58
    MOV dword ptr [0x01c38b54],ECX      ; 004074f0 | DAT_01c38b54
    TEST EDI,EDI                        ; 004074f6
    JZ 0x00407626                       ; 004074f8
        ;   XREF to: 00407626 (CONDITIONAL_JUMP)  ; LAB_00407626
    MOV EBP,dword ptr [0x0070cafc]      ; 004074fe | DAT_0070cafc
    CMP EBP,0x9c4                       ; 00407504
    JGE 0x00407626                      ; 0040750a
        ;   XREF to: 00407626 (CONDITIONAL_JUMP)  ; LAB_00407626
    MOV EAX,dword ptr [ESP + 0x18]      ; 00407510
    CMP dword ptr [EAX + 0x4],0x4       ; 00407514
    JG 0x00407626                       ; 00407518
        ;   XREF to: 00407626 (CONDITIONAL_JUMP)  ; LAB_00407626
    LEA EAX,[EBP*0x8 + 0x0]             ; 0040751e
    ADD EAX,EBP                         ; 00407525
    SHL EAX,0x2                         ; 00407527
    SUB EAX,EBP                         ; 0040752a
    MOV EDX,0x70cb00                    ; 0040752c | DAT_0070cb00
    SHL EAX,0x3                         ; 00407531
    MOV ESI,dword ptr [0x0070cafc]      ; 00407534 | DAT_0070cafc
    ADD EDX,EAX                         ; 0040753a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040753c
    INC ESI                             ; 00407540
    MOV EAX,dword ptr [EAX + 0x4]       ; 00407541
    MOV dword ptr [0x0070cafc],ESI      ; 00407544 | DAT_0070cafc
    MOV dword ptr [EDX],EAX             ; 0040754a | DAT_0070cb00
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040754c
    MOV EBP,0x7fffffff                  ; 00407550
    MOV dword ptr [ESP],EDX             ; 00407555
    MOV EDI,dword ptr [EAX + 0x4]       ; 00407558
    XOR EDX,EDX                         ; 0040755b
    TEST EDI,EDI                        ; 0040755d
    JLE 0x00407592                      ; 0040755f
        ;   XREF to: 00407592 (CONDITIONAL_JUMP)  ; LAB_00407592
    MOV EAX,dword ptr [ESP]             ; 00407561
    IMUL ESI,dword ptr [EBX],0x30       ; 00407564
        ;   Label: LAB_00407564
    MOV ECX,0xc                         ; 00407567
    LEA EDI,[EAX + 0x4]                 ; 0040756c
    LEA ESI,[ESI + 0x622014]            ; 0040756f | DAT_00622014
    MOVSD.REP ES:EDI,ESI                ; 00407575 | DAT_00622014 | DAT_0070cb04 | DAT_00622018
    MOV ECX,dword ptr [EAX + 0xc]       ; 00407577 | DAT_0070cb0c
    CMP EBP,ECX                         ; 0040757a
    JLE 0x00407580                      ; 0040757c
        ;   XREF to: 00407580 (CONDITIONAL_JUMP)  ; LAB_00407580
    MOV EBP,ECX                         ; 0040757e
    MOV ESI,dword ptr [ESP + 0x18]      ; 00407580
        ;   Label: LAB_00407580
    ADD EAX,0x30                        ; 00407584
    INC EDX                             ; 00407587
    MOV ECX,dword ptr [ESI + 0x4]       ; 00407588
    ADD EBX,0x4                         ; 0040758b
    CMP EDX,ECX                         ; 0040758e
    JL 0x00407564                       ; 00407590
        ;   XREF to: 00407564 (CONDITIONAL_JUMP)  ; LAB_00407564
    CALL engine_texture.cpp_getCurrentTexture_FUN_005750e0 ; 00407592
        ;   XREF to: 005750e0 (UNCONDITIONAL_CALL)  ; SMRGLTextureBasic * engine_texture.cpp_getCurrentTexture_FUN_005750e0()
        ;   Label: LAB_00407592
    MOV EDI,dword ptr [ESP]             ; 00407597
    MOV ECX,0x12                        ; 0040759a
    MOV ESI,EAX                         ; 0040759f
    LEA EDI,[EDI + 0xc4]                ; 004075a1
    MOV EDX,dword ptr [ESP]             ; 004075a7
    MOV EAX,[0x006141d8]                ; 004075aa | DAT_006141d8
    MOVSD.REP ES:EDI,ESI                ; 004075af | DAT_0070cbc4 | DAT_0070cbc8
    MOV dword ptr [EDX + 0x10c],EAX     ; 004075b1 | DAT_0070cc0c
    MOV dword ptr [EDX + 0x114],EBP     ; 004075b7 | DAT_0070cc14
    MOV EAX,[0x01c38b4c]                ; 004075bd | DAT_01c38b4c
    MOV dword ptr [EDX + 0x110],EAX     ; 004075c2 | DAT_0070cc10
    MOV EDX,dword ptr [ESP + 0x18]      ; 004075c8
        ;   Label: LAB_004075c8
    MOV EDX,dword ptr [EDX + 0x4]       ; 004075cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004075cf
    SUB EAX,EDX                         ; 004075d6
    LEA EDX,[EAX*0x4 + 0x0]             ; 004075d8
    MOV EAX,dword ptr [ESP + 0x18]      ; 004075df
    ADD EAX,0x18                        ; 004075e3
    ADD EAX,EDX                         ; 004075e6
    ADD ESP,0x4                         ; 004075e8
    POP EBP                             ; 004075eb
    POP EDI                             ; 004075ec
    POP ESI                             ; 004075ed
    POP EBX                             ; 004075ee
    RET                                 ; 004075ef
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004075f0 | DAT_01c35e6c
        ;   Label: LAB_004075f0
    JMP 0x004074da                      ; 004075fa
        ;   XREF to: 004074da (UNCONDITIONAL_JUMP)  ; LAB_004074da
    CMP dword ptr [0x006141c0],0x20     ; 004075ff | DAT_006141c0
        ;   Label: LAB_004075ff
    JNZ 0x00407617                      ; 00407606
        ;   XREF to: 00407617 (CONDITIONAL_JUMP)  ; LAB_00407617
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00407608 | DAT_01c35e6c
    JMP 0x004074da                      ; 00407612
        ;   XREF to: 004074da (UNCONDITIONAL_JUMP)  ; LAB_004074da
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00407617 | DAT_01c35e6c
        ;   Label: LAB_00407617
    JMP 0x004074da                      ; 00407621
        ;   XREF to: 004074da (UNCONDITIONAL_JUMP)  ; LAB_004074da
    MOV EAX,dword ptr [ESP + 0x18]      ; 00407626
        ;   Label: LAB_00407626
    PUSH EBX                            ; 0040762a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0040762b
    PUSH ECX                            ; 0040762e
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 0040762f
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407634
    JMP 0x004075c8                      ; 00407637
        ;   XREF to: 004075c8 (UNCONDITIONAL_JUMP)  ; LAB_004075c8

